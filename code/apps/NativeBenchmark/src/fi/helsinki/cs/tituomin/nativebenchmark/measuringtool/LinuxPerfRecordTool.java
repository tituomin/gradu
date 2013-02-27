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

    protected String command() { 
        return "perf record -a";
    }

    private String generateFilename (String path) {
        return path + "/perf-" + getUUID() + ".data";
    }

    public String formatParameter(MeasuringOption option) {
        if (option.type() == BasicOption.OUTPUT_FILEPATH) {
            String prefix = "--output=";
            String filename = generateFilename(option.value());
            setFilename(filename);
            return prefix + filename;
        }
        else if (option.type() == BasicOption.MEASURE_LENGTH) {
            return "sleep " + option.value();
        }
        else if (option.type() == BasicOption.COMMAND_STRING) {
            return option.value();
        }
        else {
            throw new UnsupportedOptionException();
        }
            
    }


    //protected String command() { return "pm"; }
    //    protected String command() { return "ls";}

    // ---

}
