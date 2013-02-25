package fi.helsinki.cs.tituomin.nativebenchmark;

import java.util.Iterator;
import android.util.Pair;

public interface MetadataContainer {
    public Iterator<Pair<String,String>> iterateMetadata();    
}
