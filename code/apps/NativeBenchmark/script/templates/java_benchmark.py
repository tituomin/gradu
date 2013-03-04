
t = """

package {packagename};

import fi.helsinki.cs.tituomin.nativebenchmark.BenchmarkImplementation;

public class {classname} {class_relations} implements Runnable {{

    public final static GROUP = "{group}";
    public final static DESCRIPTION = "{description}";

    private BenchMark owner;
    private long repetitions, multiplier;

    {parameter_declarations};
    {native_method_modifiers} {native_method_return_type} {native_method_name} ({native_method_parameters});

    public {classname} (Benchmark o, long r, long m) {{
        owner = o;
        repetitions = r;
        multiplier = m;
        {parameter_initialisations}
    }}

    public void run() {{
        long i, j;
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
