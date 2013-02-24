package fi.helsinki.cs.tituomin.nativebenchmark.measuringtool;

import java.util.Iterator;
import android.util.Pair;

public interface MeasuringOption {

    public void set(String value);
    public String id();
    public boolean optional();

    public Iterator<Pair<String,String>> iterateMetadata();
    
}
