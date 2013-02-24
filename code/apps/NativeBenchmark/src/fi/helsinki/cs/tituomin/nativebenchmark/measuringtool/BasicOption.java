package fi.helsinki.cs.tituomin.nativebenchmark.measuringtool;
import  fi.helsinki.cs.tituomin.nativebenchmark.measuringtool.LinuxPerfRecordTool;
import java.util.Iterator;
import java.util.Set;
import android.util.Pair;
import java.util.NoSuchElementException;

public class BasicOption implements MeasuringOption {

    public String id() { return "foo"; }
    public void set(String foo) {}

    public static class OptionSpec {
        public String name;
        public String id;
        public boolean required;
        public OptionSpec(String name, String id, 
                               boolean required) {
            this.name         = name;
            this.id           = id;
            this.required     = required;
        }
    }

    public static final OptionSpec OUTPUT_FILEPATH =
        new OptionSpec("Output path",
                       "OUTPUT_FILEPATH",
                       true);

    // -----

    public BasicOption(OptionSpec type) {
        this(type, null);
    }

    public BasicOption(OptionSpec type, String value) {
        this.type = type;
        this.value = null;
    }


    public boolean optional() {
        // todo remove?
        return !this.type.required;
    }

    // ---- metadata retrieval

    public Iterator<Pair<String,String>> iterateMetadata() {
        return new OptionIterator();
    }

    private class OptionIterator implements Iterator {

        public boolean hasNext() {
            return !atEnd;
        }

        public Pair<String,String> next() {
            if (!this.atEnd) {
                this.atEnd = true;
                return new Pair<String,String>(BasicOption.this.type.name,
                                               BasicOption.this.value);
            }
            else {
                throw new NoSuchElementException();
            }
        }

        public void remove() {
            throw new UnsupportedOperationException();
        }

        private boolean atEnd;
    }


    
    // ----

    private String value;
    private OptionSpec type;

}
