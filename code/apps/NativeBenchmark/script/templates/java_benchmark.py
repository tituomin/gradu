
t = """

package {packagename};

// todo import fi.helsinki.cs.tituomin.nativebenchmark.BenchmarkImplementation;
import fi.helsinki.cs.tituomin.nativebenchmark.BenchmarkParameter;

public class {classname} {class_relations} implements Runnable {{

    public final static String GROUP = "{group}";
    public final static String DESCRIPTION = "{description}";

// todo    private BenchMark owner;
    private long repetitions, multiplier;
    private MeasuringOption typeSpecs;

    {native_method_modifiers} native {native_method_return_type} {native_method_name} ({native_method_parameters});

    public {classname} (/*Benchmark o,*/ long r, long m, MeasuringOption parameterSpecs) {{
/*        owner = o;*/
        repetitions = r;
        multiplier = m;
        
    }}

    public void run() {{
        long i, j;
        {parameter_declarations};
        {parameter_initialisations};

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
