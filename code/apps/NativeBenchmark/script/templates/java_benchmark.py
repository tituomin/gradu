
t = """

package {packagename};

// todo import fi.helsinki.cs.tituomin.nativebenchmark.BenchmarkImplementation;

public class {classname} {class_relations} implements Runnable {{

    public final static String GROUP = "{group}";
    public final static String DESCRIPTION = "{description}";
    public final static String TYPE = "{tipe}";
    public final static String VARIABLE = "{variable}";
    public final static String SIGNATURE = "{signature}";

// todo    private BenchMark owner;
    private long repetitions, multiplier;

    {native_method_modifiers} native {native_method_return_type} {native_method_name} ({native_method_parameters});

    public {classname} (/*Benchmark o,*/ long r, long m) {{
/*        owner = o;*/
        repetitions = r;
        multiplier = m;
    }}

    public void run() {{
        long i, j;
        {parameter_declarations}
        {parameter_initialisations}

        for (i = 0; i < multiplier; i++) {{
            for (j = 0; i < repetitions; j++) {{
                {native_method_name} ({native_method_arguments});
            }}
        }}
    }}

    static {{
        System.loadLibrary("{library_name}");
    }}

}}

"""
