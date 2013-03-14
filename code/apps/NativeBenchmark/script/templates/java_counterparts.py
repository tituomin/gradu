
t = """
package {packagename};

{imports}
import fi.helsinki.cs.tituomin.nativebenchmark.BenchmarkParameter;
import android.util.Log;

public class JavaCounterparts {{

    {return_values}

    {counterpart_methods}

}}

"""

counterpart_t = """

public static {return_type} {methodname} ({parameters}) {{
    return {return_expression};

"""

return_value_t = """

private static {actualtype} = BenchmarkParameter.retrieve{typename}({typespecs});

"""

def counterpart_method(return_type=None, methodname=None, parameters=None, return_expression=None):
    return counterpart_t.format(
        return_type=return_type,
        methodname=methodname,
        parameters=parameters,
        return_expression=return_expression)

def return_value(actualtype=None, typename=None, typespecs=''):
    return return_value_t.format(
        actualtype=actualtype,
        typename=typename,
        typespecs=typespecs)
