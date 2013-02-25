package fi.helsinki.cs.tituomin.nativebenchmark.measuringtool;


public  class OptionSpec {
    public String name;
    public String id;
    public boolean required;

    public OptionSpec name(String name) {
        this.name = name;
        return this;
    }
    public OptionSpec id(String id) {
        this.id = id;
        return this;
    }
    public OptionSpec required(boolean required) { 
        this.required = required;
        return this; 
    }
}
