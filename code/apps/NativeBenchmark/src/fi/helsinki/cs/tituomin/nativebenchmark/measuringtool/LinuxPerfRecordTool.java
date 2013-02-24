package fi.helsinki.cs.tituomin.nativebenchmark.measuringtool;

import MeasuringTool;
import BasicOption;

public class LinuxPerfRecordTool extends MeasuringTool {

    public LinuxPerfRecordTool {
    }

    private Set<OptionSpec> allowedOptions() {
        Set<OptionSpec> options = new HashSet<OptionSpec>;
        options.add(BasicOption.OptionSpec.OUTPUT_FILEPATH);
        return options;
    }

    public void start();
    public void stop();

    public void setFilename();
}

