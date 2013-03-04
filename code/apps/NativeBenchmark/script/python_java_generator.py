
from templates import java_benchmark
from templates import c_module
from templates import c_jni_function
from templates import c_benchmark

# todo make sure returnvalues are read and/or not optimised away...

java_replacements = {
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

result = java_benchmark.t.format(**java_replacements)

