
package fi.helsinki.cs.tituomin.nativebenchmark;

import fi.helsinki.cs.tituomin.nativebenchmark.measuringtool.BasicOption;
import fi.helsinki.cs.tituomin.nativebenchmark.measuringtool.MeasuringTool;
import fi.helsinki.cs.tituomin.nativebenchmark.measuringtool.ResponseTimeRecorder;
import fi.helsinki.cs.tituomin.nativebenchmark.measuringtool.LinuxPerfRecordTool;
import fi.helsinki.cs.tituomin.nativebenchmark.BenchmarkRegistry;
import fi.helsinki.cs.tituomin.nativebenchmark.Utils;
import java.util.Date;
import java.util.List;
import java.util.ArrayList;
import java.util.Map;
import java.util.HashMap;
import java.lang.reflect.Method;
import java.lang.reflect.Modifier;
import java.util.Arrays;
import java.io.File;
import java.io.FileOutputStream;
import java.io.BufferedOutputStream;
import java.io.PrintWriter;
import java.io.IOException;
import java.io.FileNotFoundException;
import android.os.Environment;
import android.util.Log;
import android.os.SystemClock;
import java.util.SortedSet;
import java.util.Collections;
import java.util.TreeSet;
import android.content.res.Resources;
import android.content.Context;
import android.content.pm.PackageManager;
import android.content.pm.Signature;
import android.content.pm.PackageManager.NameNotFoundException;

public class BenchmarkRunner {
    private static final String SEPARATOR     = ",";
    private static final String MISSING_VALUE = "-";
    private static BenchmarkParameter benchmarkParameter;
    private static MeasuringTool[] measuringTools; 

    public static BenchmarkParameter getBenchmarkParameter() {
        if (benchmarkParameter == null) {
            benchmarkParameter = new BenchmarkParameter();
        }
        return benchmarkParameter;
    }

    public static void initTools(File dataDir) {
        File perfDir = new File(dataDir, "perf");
        perfDir.mkdir();

        measuringTools = new MeasuringTool[1];
        // measuringTools[0] =
        //     new LinuxPerfRecordTool()
        //     .set(BasicOption.OUTPUT_FILEPATH, perfDir.getPath())
        //     .set(BasicOption.MEASURE_LENGTH, "10");
        measuringTools[0] = 
            new ResponseTimeRecorder();
    }


    public static void runBenchmarks(ApplicationState mainUI, long repetitions, Resources resources, Context context) {
        String measurementID = Utils.getUUID();
        File sd = Environment.getExternalStorageDirectory();
        File dataDir = new File(sd, "results");
        dataDir.mkdir();

        Date start = new Date();
        initTools(dataDir);

        for (MeasuringTool tool : measuringTools) {
            tool.addObserver(mainUI);
        }

        List<MetadataContainer> compiledMetadata = new ArrayList<MetadataContainer> ();

        try {
            BenchmarkRegistry.init(repetitions);
        }
        catch (ClassNotFoundException e) {
            mainUI.updateState(ApplicationState.State.ERROR);
            Log.e("BenchmarkRunner", "Class not found.", e);
            return;
        }

        benchmarkParameter = new BenchmarkParameter();
        BenchmarkInitialiser.init(benchmarkParameter);

        List<Benchmark> benchmarks = BenchmarkRegistry.getBenchmarks();
        //Collections.shuffle(benchmarks);

        long endTime = 0, startTime = SystemClock.uptimeMillis();
        
        int j = 0;

        final ApplicationState.State state = ApplicationState.State.MILESTONE;
        for (Benchmark benchmark : benchmarks) {
            mainUI.updateState(state, "Benchmark " + ++j);

            BenchmarkMetadata md = new BenchmarkMetadata();
            for (int i = 0; i < measuringTools.length; i++) {
                try {
                    measuringTools[i].start(benchmark);
                }
                catch (InterruptedException e) {
                    Log.e("BenchmarkRunner", "Measuring was interrupted " + i + " " + j);
                }
                catch (IOException e) {
                    Log.e("BenchmarkRunner", "IOException");
                }
                md.addAll(measuringTools[i].getMeasurement());
            }
            md.addAll(inspectBenchmark(benchmark));
            compiledMetadata.add(md);

            if (j % 50 == 0) {
                System.gc();
                try {
                    Thread.sleep(200);
                }
                catch (InterruptedException e) {
                    Log.e("BenchmarkRunner", "Measuring thread was interrupted", e);
                    mainUI.updateState(
                        ApplicationState.State.ERROR,
                        "Measuring was interrupted");
                }
            }
        }

        endTime = SystemClock.uptimeMillis();
        Log.v("Runner", "compiledMetadata size " + compiledMetadata.size());

        // 1. gather all labels
        SortedSet<String> labels = new TreeSet<String> ();
        for (MetadataContainer md : compiledMetadata) {
            labels.addAll(md.labels());
        }

        PrintWriter writer = null;

        try {
            writer = getWriter(new File(dataDir, "benchmarks-" + measurementID + ".csv"), false);
            for (String label : labels) {
                writer.print(label + SEPARATOR);
            }
            writer.println("");
            String[] values = new String[labels.size()];

            // print all possible values for all benchmarks
            for (MetadataContainer md : compiledMetadata) {
                int i = 0;
                for (String label : labels) {
                    String val = md.get(label);
                    values[i++] = (val == null ? MISSING_VALUE : val);
                }
                for (i = 0; i < values.length; i++) {
                    writer.print(values[i] + SEPARATOR);
                }
                writer.println("");
            }
            writer.flush();
            writer.close();

        }
        catch (IOException e) {
            Log.e("Nativebenchmark", "ioexception " + e);
        }
        if (writer != null) {
            writer.close();
        }

        Date end = new Date();
        String toolNames = "";
        for (int i = 0; i < measuringTools.length; i++) {
            toolNames += measuringTools[i].getClass().getName() + " ";
        }

        Signature[] sigs = new Signature[1];
        try {

            sigs = context.getPackageManager().getPackageInfo(
            context.getPackageName(),
            PackageManager.GET_SIGNATURES).signatures;    

        }
        catch (NameNotFoundException e) {
            Log.e("runner", "package name not found", e);
        }
        
        try {
            writer = getWriter(new File(dataDir, "measurements.txt"), true);
            writer.println("");
            writer.println("id:               " + measurementID);
            writer.println("repetitions:      " + repetitions);
            writer.println("rounds:           " + 1);
            writer.println("start:            " + start);
            writer.println("end:              " + end);
            writer.println("duration:         " + humanTime(endTime - startTime));
            writer.println("tools:            " + toolNames);
            writer.println("benchmarks:       " + benchmarks.size());
            writer.println("code-revision:    " + resources.getText(R.string.app_revision));
            for (Signature sig : sigs)
                {
            writer.println("signatures: " + sig.hashCode());
                }

            writer.println("kernel-build-id:  " + "TODO");
            writer.println("jni-lib-build-id: " + "TODO");
            writer.println("");
        }
        catch (IOException e ) {
            Log.e("Nativebenchmark", "ioexception", e);
        }
        finally {
            writer.close();
        }
        
            
        mainUI.updateState(
            ApplicationState.State.MEASURING_FINISHED,
            humanTime(endTime - startTime));
        
        }

    private static PrintWriter getWriter(File file, boolean append)
    throws FileNotFoundException {
        return new PrintWriter(
            new BufferedOutputStream(
                new FileOutputStream(file, append)));
    }

    private static String humanTime(long millis) {
        String time;
        long seconds = millis  / 1000;
        long minutes = seconds / 60;
        long hours   = minutes / 60;
        long seconds_total = seconds;
        seconds %= 60;
        minutes %= 60;
        return (
            hours   + "h " +
            minutes + "m " +
            seconds + "s" +
            "(" + seconds_total + " s tot.)");
    }

    private static BenchmarkMetadata lastMetadata = null;
    private static BenchmarkMetadata inspectBenchmark(Benchmark benchmark) {
        BenchmarkMetadata bdata = new BenchmarkMetadata();
        Class c = benchmark.getClass();
        String from = benchmark.from();
        String to   = benchmark.to();

        // reflection only works for J2C version,
        // results are cached for other versions
        if (from.equals("J") && to.equals("C")) {
            bdata.add("no", "" + benchmark.sequenceNo());
            bdata.add("description", benchmark.description());
            Method[] methods = c.getDeclaredMethods();
            for (int i = 0; i < methods.length; i++) {
                Method m = methods[i];
                int modifiers = m.getModifiers();
                if (Modifier.isNative(modifiers)) {
                    bdata.add("native_static", Modifier.isStatic(modifiers) ? "1" : "0");
                    bdata.add("native_private", Modifier.isPrivate(modifiers) ? "1" : "0");
                    bdata.add("native_protected", Modifier.isProtected(modifiers) ? "1" : "0");
                    bdata.add("native_public", Modifier.isPublic(modifiers) ? "1" : "0");

                    Class [] parameter_arr = m.getParameterTypes();
                    List<Class> parameters = Arrays.asList(parameter_arr);
                    Map<String,Integer> parameterTypes = new HashMap<String,Integer> ();

                    Integer previousValue = null;
                    for (Class param : parameters) {
                        String param_typename = param.getCanonicalName();
                        previousValue = parameterTypes.get(param_typename);
                        parameterTypes.put(
                            param_typename,
                            (previousValue == null ? 1 : ((int)previousValue) + 1));
                    }

                    bdata.add("parameter_type_count", parameterTypes.keySet().size() + "");

                    for (String typename : parameterTypes.keySet()) {
                        bdata.add("parameter_type_" + typename + "_count", parameterTypes.get(typename) + "");
                    }

                    bdata.add("parameter_count", parameters.size() + "");
                    Class returnType = m.getReturnType();
                    bdata.add("return_type", returnType.getCanonicalName());
                }
            }
            lastMetadata = bdata;
        }
        else {
            // other than J2C
            if (lastMetadata == null) {
                Log.e("BenchmarkRunner", "Could not retrieve inspected metadata.");
                return null;
            }
            bdata = lastMetadata;
            if (!("" + benchmark.sequenceNo()).equals(bdata.get("no"))) {
                Log.e("BenchmarkRunner", "Retrieved metadata has wrong number.");
                return null;
            }
        }

        bdata.add("direction", from + " > " + to);

        return bdata;
    }
}
