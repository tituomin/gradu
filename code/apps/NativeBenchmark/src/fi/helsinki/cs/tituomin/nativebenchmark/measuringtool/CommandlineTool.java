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


public abstract class CommandlineTool extends MeasuringTool {

    protected abstract String command();
    protected abstract String formatParameter(MeasuringOption option);

    public void initCommand() {
        List<String> commandline = new LinkedList<String> ();
        commandline.addAll(generateCommandlineArguments());
        this.command = "";
        for (String s : commandline) {
            this.command += s + " ";
        }
    }

    protected List<OptionSpec> specifyAllowedOptions(List<OptionSpec> options) {
        options = super.specifyAllowedOptions(options);
        options.add(BasicOption.COMMAND_STRING);
        return options;
    }

    protected List<MeasuringOption> defaultOptions(List<MeasuringOption> options) {
        options.add(new BasicOption(BasicOption.COMMAND_STRING, command()));
        return options;
    }

    public Measurement start(Runnable benchmark)
        throws InterruptedException, IOException {
        initCommand();

        Thread benchmarkThread = new Thread(benchmark);
        benchmarkThread.start();
        Thread.sleep(2000); // todo hardcoded // randomize

        this.startDate = new Date();

        this.process = Runtime.getRuntime().exec(this.command);
        InputStream err = process.getErrorStream();
        this.process.waitFor();

        benchmarkThread.interrupt();
        
        int exitValue = this.process.exitValue();
        if (exitValue == 0) {
            measurement.addData("Started", dateFormat.format(this.startDate));
        }
        else {
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

    // -----

    private Process process;
    private Date startDate;
    private Date endDate;
    private long startTime;
    private String command;

    private static final DateFormat dateFormat = DateFormat.getDateTimeInstance();

}
