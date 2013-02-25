package fi.helsinki.cs.tituomin.nativebenchmark.measuringtool;
import fi.helsinki.cs.tituomin.nativebenchmark.measuringtool.OptionSpec;

import java.util.Iterator;
import android.util.Pair;

public interface MeasuringOption {

    public void set(String value);
    public String id();
    public String value();
    public Iterator<Pair<String,String>> iterateMetadata();
    public OptionSpec type();
}
