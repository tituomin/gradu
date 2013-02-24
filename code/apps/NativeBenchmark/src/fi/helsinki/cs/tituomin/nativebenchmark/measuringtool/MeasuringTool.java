package fi.helsinki.cs.tituomin.nativebenchmark.measuringtool;

import MeasuringOption;

public abstract class MeasuringTool {

    public abstract void start();
    public abstract void stop();
    public abstract void setFilename();

    protected abstract Set<OptionSpec> allowedOptions();

    protected void specifyOptions() {
        this.allowedOptions = allowedOptions();
        for (OptionSpec o : this.allowedOptions) {
            if (!o.required) {
                this.requiredOptions.add
                    // todo here, where is the collect method?
            }
        }
    }

    protected abstract Set<OptionSpec> allowedOptions() {
        return this.allowedOptions;
    }

    // -----

    public void setOption(MeasuringOption option) {
        if (!optionMap().containsKey(option.id())) {
            throw new UnsupportedOptionException();
        }
        else {
            this.options.add(option);            
        }
    }


    // -----

    private Set<OptionSpec> allowedOptions;
    private Set<OptionSpec> requiredOptions;
    private Set<Option> options;

    public static class UnsupportedOptionException extends RuntimeException {}
}

