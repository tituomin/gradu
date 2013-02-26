package fi.helsinki.cs.tituomin.nativebenchmark.measuringtool;

import java.util.List;
import java.util.LinkedList;

import fi.helsinki.cs.tituomin.nativebenchmark.measuringtool.MeasuringTool;
import fi.helsinki.cs.tituomin.nativebenchmark.measuringtool.MeasuringTool.UnsupportedOptionException;
import fi.helsinki.cs.tituomin.nativebenchmark.measuringtool.BasicOption;
import fi.helsinki.cs.tituomin.nativebenchmark.measuringtool.OptionSpec;

public class LinuxPerfRecordTool extends CommandlineTool {

    protected List<OptionSpec> specifyAllowedOptions(List<OptionSpec> options) {
        options = super.specifyAllowedOptions(options);
        options.add(BasicOption.OUTPUT_FILEPATH);
        options.add(BasicOption.MEASURE_LENGTH); // must be last
        return options;
    }

    public String formatParameter(MeasuringOption option) {
        String prefix;
        if (option.type() == BasicOption.OUTPUT_FILEPATH) {
            prefix = "--output=";
        }
        else if (option.type() == BasicOption.MEASURE_LENGTH) {
            prefix = "sleep ";
        }
        else if (option.type() == BasicOption.COMMAND_STRING) {
            prefix = "";
        }
        else {
            throw new UnsupportedOptionException();
        }

        return prefix + option.value();
    }

    protected Measurement getMeasurement() {
        return new Measurement();
    }

    protected String command() { return "su -c perf record";}
    //    protected String command() { return "ls";}

    // ---

}
