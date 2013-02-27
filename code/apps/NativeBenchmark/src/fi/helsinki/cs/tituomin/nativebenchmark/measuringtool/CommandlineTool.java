package fi.helsinki.cs.tituomin.nativebenchmark.measuringtool;

import fi.helsinki.cs.tituomin.nativebenchmark.measuringtool.Measurement;
import fi.helsinki.cs.tituomin.nativebenchmark.ApplicationState;

import java.util.List;
import java.util.LinkedList;
import java.util.Date;
import java.io.InputStream;
import java.io.OutputStream;
import java.io.IOException;
import java.text.DateFormat;
import android.os.SystemClock;
import android.util.Log;
import java.io.File;
import android.os.Environment;
import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.util.UUID;


public abstract class CommandlineTool extends MeasuringTool {

    private static final DateFormat dateFormat = DateFormat.getDateTimeInstance();

    protected abstract String command();
    protected abstract String formatParameter(MeasuringOption option);


    // ----

    private String command;

    public void initCommand() {
        List<String> commandline = new LinkedList<String> ();

        commandline.addAll(generateCommandlineArguments());
        this.command = "";
        for (String s : commandline) {
            this.command += s + " ";
        }

        this.builder = new ProcessBuilder()
            .directory(Environment.getExternalStorageDirectory())
            .command(commandline)
            .redirectErrorStream(true);
    }

    protected List<OptionSpec> specifyAllowedOptions(List<OptionSpec> options) {
        options = super.specifyAllowedOptions(options);
        options.add(BasicOption.COMMAND_STRING);
        return options;
    }

    protected List<MeasuringOption> defaultOptions(List<MeasuringOption> options) {
        Log.v("mt", "foo" + command());
        options.add(new BasicOption(BasicOption.COMMAND_STRING, command()));
        Log.v("mt", options.toString());
        return options;
    }

    public Measurement start(Runnable benchmark)
        throws InterruptedException, IOException {
        initCommand();

        Thread benchmarkThread = new Thread(benchmark);
        benchmarkThread.start();
        Thread.sleep(2000); // todo hardcoded // randomize

        this.startDate = new Date();

        Log.v("mt", "command " + this.command);
        this.process = Runtime.getRuntime().exec(this.command);
        //        this.process = this.builder().start();
        // InputStream in = process.getInputStream();
        // OutputStream out = process.getOutputStream();
        InputStream err = process.getErrorStream();
        //        Log.v("mt", 
        this.process.waitFor();

        benchmarkThread.interrupt();

        
        int exitValue = this.process.exitValue();
        if (exitValue == 0) {
            Log.v("tm", "success");
            measurement.addData("Started", dateFormat.format(this.startDate));
        }
        else {
            Log.v("tm", "fail");
            String line;
            BufferedReader br = new BufferedReader(new InputStreamReader(err));
            while ((line = br.readLine()) != null) {
                Log.e("tm", line);
            }
        }

        notifyObservers(ApplicationState.State.MEASURING_FINISHED);
        return measurement;
    }

    public Measurement stop() {
        throw new UnsupportedOperationException();
    }

    public String getUUID() {
        return UUID.randomUUID().toString();
    }
    public void setFilename(String name) {
        this.measurement.addData("Filename", name);
    }

     // -----

    public List<String> generateCommandlineArguments() {
        List<String> result = new LinkedList<String> ();
        for (OptionSpec type : allowedOptions) {
            MeasuringOption option = options.get(type);

            if (option == null) {
                Log.v("mt", type + " is null");
            }
            else {
                result.add(formatParameter(option));
            }
        }
        return result;
    }

    protected ProcessBuilder builder() {
        return builder;
    }

    // -----
    private ProcessBuilder builder;
    private Process process;

    private Date startDate;
    private Date endDate;
    private long startTime;
}
