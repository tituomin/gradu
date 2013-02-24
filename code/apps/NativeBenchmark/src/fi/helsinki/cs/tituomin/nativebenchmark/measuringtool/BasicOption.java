package fi.helsinki.cs.tituomin.nativebenchmark.measuringtool;
import android.util.Pair<String,String>;
import LinuxPerfRecordTool;


public class BasicOption implements MeasuringOption {

    public class OptionSpec {
        public void OptionSpec(String name, String id, Class tool,
                               boolean required, String defaultValue) {
            this.name         = name;
            this.id           = id;
            this.required     = required;
        }
        public String name;
        public String id;
        public boolean required;
    }

    public static final OptionSpec OUTPUT_FILEPATH =
        new OptionSpec("Output path",
                       "OUTPUT_FILEPATH",
                       true);
    // -----

    public void BasicOption(OptionSpec type) {
        this(type, null)
    }

    public void BasicOption(OptionSpec type, String value) {
        this.type = type;
        this.value = null;
    }


    public boolean optional() {
        return this.optional;
    }

    // ---- metadata retrieval

    public Iterator<Pair<String,String>> iterateMetadata() {
        return new
    }

    private class Iterator extends Iterator<Pair<String,String>> {

        public boolean hasNext() {
            return !atEnd;
        }

        public Pair<String,String> next() {
            if (!this.atEnd) {
                this.atEnd = true;
                return Pair<String,String>.create(this.type.name, this.value);
            }
            else {
                throw new NoSuchElementException();
            }
        }
        private boolean atEnd;
    }

    
    // ----

    private String value;
    private OptionSpec type;

}
