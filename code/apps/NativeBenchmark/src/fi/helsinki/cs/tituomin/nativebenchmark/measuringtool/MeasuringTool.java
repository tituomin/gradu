package fi.helsinki.cs.tituomin.nativebenchmark.measuringtool;

import java.util.Map;
import java.util.HashMap;
import java.util.Set;
import java.util.HashSet;
import java.util.List;
import java.util.LinkedList;
import java.util.HashMap;
import java.io.IOException;
import android.util.Log;
import java.util.Observer;
import java.util.Observable;
import fi.helsinki.cs.tituomin.nativebenchmark.ApplicationState;
import fi.helsinki.cs.tituomin.nativebenchmark.measuringtool.Measurement;
import fi.helsinki.cs.tituomin.nativebenchmark.measuringtool.MeasuringOption;
import fi.helsinki.cs.tituomin.nativebenchmark.measuringtool.OptionSpec;

public abstract class MeasuringTool {

    public MeasuringTool() {
        specifyOptions();
        hasOptions = false;
        this.measurement = new Measurement();
    }

    public abstract Measurement start(Runnable benchmark)
        throws InterruptedException, IOException;

    protected List<OptionSpec>
        specifyAllowedOptions(List<OptionSpec> container) {
        return container;
    }

    protected abstract List<MeasuringOption>
        defaultOptions(List<MeasuringOption> container);

    protected void specifyOptions() {
        this.allowedOptions = specifyAllowedOptions(
            new LinkedList<OptionSpec>());

        if (this.requiredOptions == null) {
            this.requiredOptions = new HashSet<OptionSpec>();
        }
        for (OptionSpec o : this.allowedOptions) {
            if (o.required) {
                this.requiredOptions.add(o);
            }
        }
        for (MeasuringOption op : defaultOptions(
                 new LinkedList<MeasuringOption>())) {
            Log.v("mt", "adding " + op.toString());
            setOption(op);
        };
    }

    // -----

    public MeasuringTool set(OptionSpec spec, String value) {
        // todo: not typesafe (assumes basicoption)
        Log.v("mt", "set called");
        setOption(new BasicOption(spec, value));
        return this;
    }

    public void setOption(MeasuringOption option) {
        if (this.allowedOptions == null) {
            specifyOptions();
        }
        if (!allowedOptions.contains(option.type())) {
            // Log.v("mt", allowedOptions.toString());
            // Log.v("mt", option.toString());
            // Log.v("mt", option.type().toString());
            throw new UnsupportedOptionException();
        }
        else {
            this.options = (options != null ? options :
                            new HashMap<OptionSpec,MeasuringOption> ());
            
            Log.v("mt", "putting " + option);
            this.options.put(option.type(), option);
        }
    }


    public void addObserver(ApplicationState o) {
        if (this.observers == null) {
            this.observers = new LinkedList<ApplicationState>();
        }
        this.observers.add(o);
    }

    public void notifyObservers(ApplicationState.State state) {
        
        for (ApplicationState o : this.observers) {
            o.updateState(state);
        }
    }
    public final static Observable mockObservable = new Observable();

    private boolean hasRequiredOptions() {
        return options.keySet().containsAll(requiredOptions);
    }

    protected List<OptionSpec> allowedOptions;
    protected Set<OptionSpec> requiredOptions;
    // currently support one value per option, change?
    protected Map<OptionSpec,MeasuringOption> options;

    private List<ApplicationState> observers;

    protected Measurement measurement;

    public Measurement getMeasurement() {
        if (!hasOptions) {
            for (MeasuringOption op : options.values()) {
                this.measurement.addData(
                    op.toStringPair().first,
                    op.toStringPair().second);
            }
            hasOptions = true;
        }
        return this.measurement;
    }

    private boolean hasOptions;

    public static class UnsupportedOptionException extends RuntimeException {}
}

