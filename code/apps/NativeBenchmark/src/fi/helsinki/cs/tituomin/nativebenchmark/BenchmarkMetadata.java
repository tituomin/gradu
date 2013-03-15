
package fi.helsinki.cs.tituomin.nativebenchmark;

import java.util.Set;
import java.util.Map;
import java.util.HashMap;
import java.util.List;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import android.util.Pair;


public class BenchmarkMetadata implements MetadataContainer {

    private Map<String, String> compiledMetadata;

    public BenchmarkMetadata() {
        this.compiledMetadata = new HashMap<String, String> ();
    }
    
    public Iterator<Pair<String,String>> iterator() {
        return new MIterator();
    }

    private class MIterator implements Iterator<Pair<String,String>> {
        private Iterator<String> keyIterator;

        public MIterator () {
            keyIterator = compiledMetadata.keySet().iterator();
        }

        public boolean hasNext() {
            return keyIterator.hasNext();
        }
        
        public Pair<String,String> next() {
            String key = keyIterator.next();
            return new Pair<String,String> (key, compiledMetadata.get(key));
        }

        public void remove() {
            throw new UnsupportedOperationException("removal not supported");
        }
    }

    // todo private class iterator
    public void addAll(MetadataContainer mc) {
        for (Pair<String, String> md : mc) {
            this.compiledMetadata.put(md.first, md.second);
        }
    }

    public Set<String> labels() {
        return compiledMetadata.keySet();
    }

    public void add(Pair<String,String> piece) {
        this.compiledMetadata.put(piece.first, piece.second);
    }

    public void add(String key, String value) {
        this.compiledMetadata.put(key, value);
    }

    public String get(String key) {
        return compiledMetadata.get(key);
    }
}
