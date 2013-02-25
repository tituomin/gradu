package fi.helsinki.cs.tituomin.nativebenchmark.measuringtool;

import java.util.List;
import java.util.LinkedList;
import java.io.InputStream;
import java.io.OutputStream;


public abstract class CommandlineTool extends MeasuringTool {

    protected abstract String command();
    protected abstract String formatParameter(MeasuringOption option);

    // ----

    public CommandlineTool() {
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

    public void start() {

        try {
            this.process = this.builder().start();
            InputStream in = process.getInputStream();
            OutputStream out = process.getOutputStream();
            this.process.waitFor();
        }
        catch (Exception e) {
            System.err.println("foo");
        }
        finally {
            process.destroy();
        }
                
    }

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

}
