package fi.helsinki.cs.tituomin.nativebenchmark;

import java.util.Iterator;
import android.util.Pair;

public interface MetadataContainer extends Iterable<Pair<String,String>> {
    public Iterator<Pair<String,String>> iterator();    
}
