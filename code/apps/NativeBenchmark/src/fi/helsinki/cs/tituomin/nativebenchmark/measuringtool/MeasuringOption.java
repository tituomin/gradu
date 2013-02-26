package fi.helsinki.cs.tituomin.nativebenchmark.measuringtool;
import fi.helsinki.cs.tituomin.nativebenchmark.measuringtool.OptionSpec;
import fi.helsinki.cs.tituomin.nativebenchmark.MetadataContainer;

import java.util.Iterator;
import android.util.Pair;

public interface MeasuringOption extends MetadataContainer {

    public void set(String value);
    public OptionSpec id();
    public String value();
    public OptionSpec type();
    public Pair<String,String> toStringPair();

    public Iterator<Pair<String,String>> iterateMetadata();

}
