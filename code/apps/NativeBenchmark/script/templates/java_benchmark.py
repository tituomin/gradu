
t = """
package {packagename};

import fi.helsinki.cs.tituomin.nativebenchmark.Benchmark;
import fi.helsinki.cs.tituomin.nativebenchmark.BenchmarkParameter;
import fi.helsinki.cs.tituomin.nativebenchmark.measuringtool.BasicOption;

public class {classname} {class_relations} implements Benchmark {{

    public final static String GROUP = "{group}"; 
    public String group() {{
        return GROUP;
    }}

    private final static BasicOption[] DYNAMIC_PARAMETERS = {dynamic_parameters};
    public BasicOption[] dynamicParameters() {{
        return DYNAMIC_PARAMETERS;
    }}

    private long repetitions, multiplier;
    private BenchmarkParameter benchmarkParameter;

    {native_method_modifiers} native {native_method_return_type} {native_method_name} ({native_method_parameters});

    public {classname} (long r, long m, BenchmarkParameter bp) {{
        repetitions = r;
        multiplier = m;
        benchmarkParameter = bp;
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
}}

"""

def dynamic_parameter(var):
    return 'new BasicOption(BasicOption.VARIABLE, "{variable}")'.format(variable=var)
