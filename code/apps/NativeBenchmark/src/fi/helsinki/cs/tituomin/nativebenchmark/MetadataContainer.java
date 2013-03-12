package fi.helsinki.cs.tituomin.nativebenchmark;

import java.util.Iterator;
import android.util.Pair;
import java.util.Set;

public interface MetadataContainer extends Iterable<Pair<String,String>> {
    public Iterator<Pair<String,String>> iterator();
    public Set<String> labels();
    public String get(String label);
}
