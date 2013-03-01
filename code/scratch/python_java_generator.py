
JAVA_TEMPLATE = """
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
        for (long i = 0; i < multiplier; i++) {{
            for (long j = 0; i < repetitions; j++) {{
                {native_method_name} ({native_method_arguments});
            }}
        }}
    }}

    static {{
        System.loadLibrary("{library_name}");
    }}

}}

"""

replacements = {
    'group'                     : 'nice ones',
    'description'               : 'To test this and that.',

    'packagename'               : 'fi.helsinki.cs.tituomin.nativebenchmark',
    'classname'                 : 'TestClass',
    'class_relations'           : 'extends NativeBenchmarkImplementation',

    'parameter_declarations'    : 'private int foo',
    'native_method_parameters'  : 'int foo',
    'parameter_initialisations' : 'foo = 1;',
    'native_method_arguments'   : 'foo',

    'native_method_modifiers'   : 'private static',
    'native_method_return_type' : 'void',
    'native_method_name'        : 'nativeFoo',

    'library_name'              : 'myNative.so'
}

result = JAVA_TEMPLATE.format(**replacements)


primitive_types = {
    'b'  : ('boolean', 'jboolean'),
    'y'  : ('byte', 'jbyte'),
    'c'  : ('char', 'jchar'),
    's'  : ('short', 'jshort'),
    'i'  : ('int', 'jint'),
    'l'  : ('long', 'jlong'),
    'f'  : ('float', 'jfloat'),
    'd'  : ('double', 'jdouble'),
}

object_types = {
    'O'  : ('Object', 'jobject'),
    'C'  : ('Class',  'jclass'),
    'S'  : ('String', 'jstring'),
    'T'  : ('Throwable', 'jthrowable')
}

other_types = {
    'v'  : ('void', 'void')
    }

array_element_types = dict()
array_element_types.update(primitive_types)
array_element_types['O'] = object_types['O']

array_types = dict([
        ('A' + key, (jtype + '[]', ctype + 'Array'))
        for key, (jtype,ctype)
        in array_element_types.iteritems()])
                   
types = dict()
types.update(primitive_types)
types.update(object_types)
types.update(array_types)
types.update(other_types)

def java_native_methodname(is_static, returntype, parametertypes):
    ret = "_"
    if is_static:
        ret += "st_"
    ret += types.get(returntype) + "_"
    for t in parametertypes:
        ret += types.get(t)

def java_native_methodsignature(is_static, returntype, parametertypes):
    ret = "private"
    if is_static:
        ret += "static "
    
    # todo here
