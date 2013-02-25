package fi.helsinki.cs.tituomin.nativebenchmark.measuringtool;

import fi.helsinki.cs.tituomin.nativebenchmark.measuringtool.Measurement;

import java.util.List;
import java.util.LinkedList;
import java.util.Date;
import java.io.InputStream;
import java.io.OutputStream;
import java.io.IOException;
import java.text.DateFormat;
import android.os.SystemClock;


public abstract class CommandlineTool extends MeasuringTool {

    private static final DateFormat dateFormat = DateFormat.getDateTimeInstance();

    protected abstract String command();
    protected abstract String formatParameter(MeasuringOption option);

    // ----

    public void initCommand() {
        List<String> commandline = new LinkedList<String> ();

        commandline.add(command());
        commandline.addAll(generateCommandlineArguments());

        this.builder = new ProcessBuilder()
            .command(commandline)
            .redirectErrorStream(true);
    }

    protected List<MeasuringOption> defaultOptions(List<MeasuringOption> options) {
        options.add(new BasicOption(BasicOption.COMMAND_STRING, command()));
        return options;
    }

    public Measurement start(Runnable benchmark) throws InterruptedException, IOException {
        Measurement measurement = getMeasurement();

        Thread benchmarkThread = new Thread(benchmark);
        benchmarkThread.start();
        Thread.sleep(2000); // todo hardcoded

        this.startDate = new Date();
        this.process = this.builder().start();
        InputStream in = process.getInputStream();
        OutputStream out = process.getOutputStream();
        this.process.waitFor();

        benchmarkThread.interrupt();

        int exitValue = this.process.exitValue();
        if (exitValue == 0) {
            measurement.addData("Started", dateFormat.format(this.startDate));
        }
        return measurement;
        // }
        // catch (Exception e) {
        //     System.err.println("foo");
        // }
        // finally {
        //     process.destroy();
        // }
    }

    public Measurement stop() {
        throw new UnsupportedOperationException();
    }

    protected abstract Measurement getMeasurement();

    // -----

    public List<String> generateCommandlineArguments() {
        List<String> result = new LinkedList<String> ();
        for (OptionSpec type : allowedOptions) {
            MeasuringOption option = options.get(type);
            result.add(formatParameter(option));
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
