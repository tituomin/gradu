package fi.helsinki.cs.tituomin.nativebenchmark.measuringtool;

import fi.helsinki.cs.tituomin.metadatacontainer;
import android.util.Pair<String,String>;

public interface MeasuringOption {

    private void optionSpec;

    public void set(String);
    public String id();
    public boolean optional();

    public Iterator<Pair<String,String>> iterateMetadata();
    
}
