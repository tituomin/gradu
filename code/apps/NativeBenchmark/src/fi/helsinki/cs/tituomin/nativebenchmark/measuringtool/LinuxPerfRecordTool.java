package fi.helsinki.cs.tituomin.nativebenchmark.measuringtool;

import java.util.Set;
import java.util.HashSet;

import fi.helsinki.cs.tituomin.nativebenchmark.measuringtool.MeasuringTool;
import fi.helsinki.cs.tituomin.nativebenchmark.measuringtool.BasicOption;
import fi.helsinki.cs.tituomin.nativebenchmark.measuringtool.BasicOption.OptionSpec;

public class LinuxPerfRecordTool extends MeasuringTool {

    protected Set<OptionSpec> specifyAllowedOptions() {
        Set<OptionSpec> options = new HashSet<OptionSpec> ();
        options.add(BasicOption.OUTPUT_FILEPATH);
        return options;
    }

    public void start() {}
    public void stop() {}
    public void setFilename() {}
}
