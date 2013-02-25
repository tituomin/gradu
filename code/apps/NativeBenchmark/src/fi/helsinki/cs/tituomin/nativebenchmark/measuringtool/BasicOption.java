package fi.helsinki.cs.tituomin.nativebenchmark.measuringtool;
import  fi.helsinki.cs.tituomin.nativebenchmark.measuringtool.LinuxPerfRecordTool;
import  fi.helsinki.cs.tituomin.nativebenchmark.measuringtool.OptionSpec;
import java.util.Iterator;
import java.util.Set;
import android.util.Pair;
import java.util.NoSuchElementException;

public class BasicOption implements MeasuringOption {

    public BasicOption(OptionSpec type) {
        this(type, null);
    }

    public BasicOption(OptionSpec type, String value) {
        this.type = type;
        this.value = null;
    }

    // -----

    public String id() {
        return this.type.id;
    }
    public void set(String value) {
        this.value = value;
    }
    public OptionSpec type() {
        return this.type;
    }
    public String value() {
        return value;
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

    public Pair<String,String> toStringPair() {
        return new Pair<String,String> (this.type.name, this.value);
    }

    
    // ----

    private OptionSpec type;
    private String value;
    
    // ----


    public static final OptionSpec COMMAND_STRING   = new OptionSpec();
    public static final OptionSpec OUTPUT_FILEPATH  = new OptionSpec();
    public static final OptionSpec MEASURE_LENGTH   = new OptionSpec();

    static {
        COMMAND_STRING
            .name     ("Command run")
            .required (true)
            .id       ("COMMAND_STRING");

        OUTPUT_FILEPATH 
            .name     ("Output path")
            .id       ("OUTPUT_FILEPATH")
            .required (true);

        MEASURE_LENGTH
            .name    ("Measuring time (sec)")
            .id      ("MEASURE_LENGTH")
            .required (true);

    }


}
