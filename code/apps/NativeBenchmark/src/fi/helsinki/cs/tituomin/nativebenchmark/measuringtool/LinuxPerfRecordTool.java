package fi.helsinki.cs.tituomin.nativebenchmark.measuringtool;

import java.util.List;
import java.util.LinkedList;

import fi.helsinki.cs.tituomin.nativebenchmark.measuringtool.MeasuringTool;
import fi.helsinki.cs.tituomin.nativebenchmark.measuringtool.MeasuringTool.UnsupportedOptionException;
import fi.helsinki.cs.tituomin.nativebenchmark.measuringtool.BasicOption;
import fi.helsinki.cs.tituomin.nativebenchmark.measuringtool.OptionSpec;

public class LinuxPerfRecordTool extends CommandlineTool {

    protected List<OptionSpec> specifyAllowedOptions(List<OptionSpec> options) {
        options.add(BasicOption.OUTPUT_FILEPATH);
        return options;
    }

    public String formatParameter(MeasuringOption option) {
        if (option.type() == BasicOption.OUTPUT_FILEPATH) {
            return "--output=" + option.value();
        }
        throw new UnsupportedOptionException();
    }

    protected Measurement getMeasurement() {
        return new Measurement();
    }

    //    protected String command() { return "/bin/perf record sleep 5000";}
    protected String command() { return "ls /";}

    // ---

}
