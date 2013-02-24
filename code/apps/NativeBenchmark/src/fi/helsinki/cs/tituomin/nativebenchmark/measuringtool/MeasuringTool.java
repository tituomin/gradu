package fi.helsinki.cs.tituomin.nativebenchmark.measuringtool;

import java.util.Set;
import fi.helsinki.cs.tituomin.nativebenchmark.measuringtool.MeasuringOption;
import fi.helsinki.cs.tituomin.nativebenchmark.measuringtool.BasicOption.OptionSpec;

public abstract class MeasuringTool {

    public abstract void start();
    public abstract void stop();

    public abstract void setFilename();

    protected abstract Set<OptionSpec> specifyAllowedOptions();

    protected void specifyOptions() {
        this.allowedOptions = specifyAllowedOptions();
        for (OptionSpec o : this.allowedOptions) {
            if (!o.required) {
                this.requiredOptions.add(o);
            }
        }
    }

    // -----

    public void setOption(MeasuringOption option) {
        if (!allowedOptions.contains(option.id())) {
            throw new UnsupportedOptionException();
        }
        else {
            this.options.add(option);
        }
    }


    // -----

    private Set<OptionSpec> allowedOptions;
    private Set<OptionSpec> requiredOptions;
    private Set<MeasuringOption> options;

    public static class UnsupportedOptionException extends RuntimeException {}
}

