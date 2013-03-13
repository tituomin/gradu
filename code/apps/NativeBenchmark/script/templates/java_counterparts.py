
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

def counterpart_method(return_type=None, classname=None, methodname=None, parameters=None, return_expression=None):
    return """
public static {return_type} {classname}_{methodname} ({parameters}) {{
    return {return_expression};
}}""".format(
        return_type=return_type,
        name=name,
        parameters=parameters)

def return_value(actualtype=None, typename=None, typespecs=''):
    return """
private static {actualtype} = BenchmarkParameter.retrieve{typename}({typespecs});""".format(
        actualtype=actualtype,
        typename=typename,
        typespecs=typespecs)
