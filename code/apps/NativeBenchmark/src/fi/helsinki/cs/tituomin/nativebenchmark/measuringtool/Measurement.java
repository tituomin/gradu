package fi.helsinki.cs.tituomin.nativebenchmark.measuringtool;

import fi.helsinki.cs.tituomin.nativebenchmark.MetadataContainer;
import java.util.NoSuchElementException;
import java.util.Collection;
import java.util.Iterator;
import java.util.SortedMap;
import java.util.TreeMap;
import android.util.Pair;

public class Measurement implements MetadataContainer {

    public Iterator<Pair<String,String>> iterateMetadata() {
        return new MeasurementIterator();
    }

    private class MeasurementIterator implements Iterator {
        public MeasurementIterator() {
            this.currentKey = Measurement.this.values.firstKey();
        }
        public boolean hasNext() {
            return (currentKey != null);
        }
        public Pair<String,String> next() {
            if (currentKey != null) {
                String returnKey = currentKey;
                currentKey = ((TreeMap<String,String>)Measurement.this.values).higherKey(currentKey);
                
                return new Pair<String,String>
                    (returnKey,
                     Measurement.this.values.get(returnKey));
            }
            else {
                throw new NoSuchElementException();                
            }
        }
        public void remove() {
            throw new UnsupportedOperationException();
        }
        private String currentKey;
    }


    public void addData(String key, String value) {
        this.values.put(key, value);
    }

    public void addOptions(Collection<MeasuringOption> options) {
        for (MeasuringOption op : options) {
            this.values.put(op.toStringPair().first,
                            op.toStringPair().second);
        }
    }

    // -----

    public Measurement() {
        this.values = new TreeMap<String,String> ();
    }

    private SortedMap<String,String> values;
}
