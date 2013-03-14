
t = """
package {packagename};

import fi.helsinki.cs.tituomin.nativebenchmark.Benchmark;
import fi.helsinki.cs.tituomin.nativebenchmark.BenchmarkParameter;
import fi.helsinki.cs.tituomin.nativebenchmark.measuringtool.BasicOption;
{imports}
import android.util.Log;

public class {classname} {class_relations} implements Benchmark {{

    public String from() {{
        return "{from_language}";
    }}

    public String to() {{
        return "{to_language}";
    }}

    private long repetitions, multiplier;
    private BenchmarkParameter benchmarkParameter;

    {native_method}

    public {classname} (long r, long m, BenchmarkParameter bp) {{
        repetitions = r;
        multiplier = m;
        benchmarkParameter = bp;
    }}

    {run_method}

}}

"""


native_method_t     = '{modifiers} native {return_type} {name} ({parameters});'
dynamic_parameter_t = 'new BasicOption(BasicOption.VARIABLE, "{variable}")'.strip()
native_run_method_t = 'public native void run();'
java_run_method_t   = """

    public void run() {{
        long i, j;
        {parameter_declarations};
        {parameter_initialisations};

        for (i = 0; i < multiplier; i++) {{
            for (j = 0; j < repetitions; j++) {{
                {counterpart_method_name} ({counterpart_method_arguments});
            }}
        }}
    }}

"""


def native_method(modifiers=None, return_type=None, name=None, parameters=None):
    return native_method_t.format(
        modifiers=modifiers, return_type=return_type,
        name=name, parameters=parameters)

def native_run_method():
    return native_run_method_t

def java_run_method(parameter_declarations=None, parameter_initialisations=None,
                    counterpart_method_name=None, counterpart_method_arguments=None):

    return java_run_method_t.format(parameter_declarations = parameter_declarations,
        parameter_initialisations     = parameter_initialisations,
        counterpart_method_name       = counterpart_method_name,
        counterpart_method_arguments  = counterpart_method_arguments)
        





    
