
package fi.helsinki.cs.tituomin.nativebenchmark;

import fi.helsinki.cs.tituomin.nativebenchmark.measuringtool.BasicOption;
import fi.helsinki.cs.tituomin.nativebenchmark.BenchmarkRegistry;
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
import android.os.Environment;
import android.util.Log;
import java.util.SortedSet;
import java.util.TreeSet;

public class BenchmarkRunner {
    private static final String SEPARATOR = ",";

    public static void runBenchmarks() {
        List<BenchmarkMetadata> compiledMetadata = new ArrayList<BenchmarkMetadata> ();
        List<Benchmark> benchmarks = BenchmarkRegistry.getBenchmarks();
        for (Benchmark benchmark : benchmarks) {
            compiledMetadata.add(inspectBenchmark(benchmark));
        }
        File sd = Environment.getExternalStorageDirectory();
        File dataDir = new File(sd, "benchmark_data");
        dataDir.mkdir();
        File file = new File(dataDir, "testing_metadata.txt");
        BufferedOutputStream out = null;
        PrintWriter writer;
        try {
            out = new BufferedOutputStream(new FileOutputStream(file));
            writer = new PrintWriter(out);
            BenchmarkMetadata bmd = compiledMetadata.get(0);

            // 1. gather all labels
            SortedSet<String> labels = new TreeSet<String> ();
            for (BenchmarkMetadata md : compiledMetadata) {
                labels.addAll(md.labels());
            }
            for (String label : labels) {
                writer.print(label + SEPARATOR);
            }
            writer.println("");
            String[] values = new String[labels.size()];

            // print all possible values for all benchmarks
            for (BenchmarkMetadata md : compiledMetadata) {
                int i = 0;
                for (String label : labels) {
                    String val = md.get(label);
                    values[i++] = val != null ? val: "none";
                }
                for (i = 0; i < values.length; i++) {
                    writer.print(values[i] + SEPARATOR);
                }
                writer.println("");
            }

        }
        catch (IOException e) {
            Log.e("Nativebenchmark", "ioexception " + e);
        }
        try {
            if (out != null) {
                out.close();
            }
        }
        catch (IOException e) {
            Log.e("Nativebenchmark", "ioexception " + e);
        }
    }

    private static BenchmarkMetadata inspectBenchmark(Benchmark benchmark) {
        BenchmarkMetadata bdata = new BenchmarkMetadata();
        Class c = benchmark.getClass();

        bdata.add("class", c.getSimpleName());
        bdata.add("group", benchmark.group());
 
        BasicOption[] dynamicParameters = benchmark.dynamicParameters();

        Method[] methods = c.getDeclaredMethods();
        for (int i = 0; i < methods.length; i++) {
            Method m = methods[i];
            int modifiers = m.getModifiers();
            if (Modifier.isNative(modifiers)) {
                bdata.add("native_method", m.getName());
                bdata.add("native_static", Modifier.isStatic(modifiers) ? "1" : "0");
                bdata.add("native_private", Modifier.isPrivate(modifiers) ? "1" : "0");

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
            }
        }
        return bdata;
    }
}
