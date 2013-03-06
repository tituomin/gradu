
t = """

package {packagename};

import fi.helsinki.cs.tituomin.nativebenchmark.BenchmarkParameter;
import fi.helsinki.cs.tituomin.nativebenchmark.measuringtool.BasicOption;

public class {classname} {class_relations} implements Runnable {{

    public final static String GROUP = "{group}";
    public final static String DESCRIPTION = "{description}";

    public final static BasicOption[] DYNAMIC_PARAMETERS = {dynamic_parameters};

    private long repetitions, multiplier;

    {native_method_modifiers} native {native_method_return_type} {native_method_name} ({native_method_parameters});

    public {classname} (long r, long m) {{
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
