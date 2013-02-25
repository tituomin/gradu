package fi.helsinki.cs.tituomin.nativebenchmark.measuringtool;

import java.util.Map;
import java.util.HashMap;
import java.util.Set;
import java.util.HashSet;
import java.util.List;
import java.util.LinkedList;
import java.util.HashMap;
import fi.helsinki.cs.tituomin.nativebenchmark.measuringtool.MeasuringOption;
import fi.helsinki.cs.tituomin.nativebenchmark.measuringtool.OptionSpec;

public abstract class MeasuringTool {

    public abstract void start();
    public abstract void stop();
    public abstract void terminate();

    protected abstract List<OptionSpec> specifyAllowedOptions(List<OptionSpec> container);
    protected abstract List<MeasuringOption> defaultOptions(List<MeasuringOption> container);

    protected void specifyOptions() {
        this.allowedOptions = specifyAllowedOptions(new LinkedList<OptionSpec>());
        if (this.requiredOptions == null) {
            this.requiredOptions = new HashSet<OptionSpec>();
        }
        for (OptionSpec o : this.allowedOptions) {
            if (o.required) {
                this.requiredOptions.add(o);
            }
        }
        for (MeasuringOption op : defaultOptions(new LinkedList<MeasuringOption>())) {
            setOption(op);
        };
    }

    // -----

    public void setOption(MeasuringOption option) {
        if (this.allowedOptions == null) {
            specifyOptions();
        }
        if (!allowedOptions.contains(option.id())) {
            throw new UnsupportedOptionException();
        }
        else {
            if (this.options == null) {
                this.options = new HashMap<OptionSpec,MeasuringOption> ();
            }
            this.options.put(option.type(), option);
        }
    }


    private boolean hasRequiredOptions() {
        return options.keySet().containsAll(requiredOptions);
    }

    protected List<OptionSpec> allowedOptions;
    protected Set<OptionSpec> requiredOptions;
    // currently support one value per option, change?
    protected Map<OptionSpec,MeasuringOption> options;

    public static class UnsupportedOptionException extends RuntimeException {}
}

