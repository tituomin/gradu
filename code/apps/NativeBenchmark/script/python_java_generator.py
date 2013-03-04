
from templates import java_benchmark
from templates import c_module
from templates import c_jni_function
from templates import c_benchmark

from jni_types import types

packagename = 'fi.helsinki.cs.tituomin.nativebenchmark.benchmark'

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

def create_benchmarks():
    benchmarks = {
        'java' : [],
        'c'    : ''
        }

    jb, benchmarks['c'] = java_to_c_benchmarks()
    benchmarks['java'].append(jb)
    
    return benchmarks

def java_to_c_benchmarks():
    java = []
    c = []

    # single type, change amount
    for symbol in types.types:
        for i in range(1,20):
            for type_data in types.type_combinations(size=i, typeset=[symbol]):

                parameter_names = [symbol + i for i in range()]

                parameter_declarations = (
                    type_data[java] + ", ".join(parameter_names))

                parameter_initialisations = (
                    ";\n".join())
                

                java.append(
                    java_benchmark.t.format(
                        'group' : 'Java to C',
                        'description' : 'Single type, change amount',
                        'fixed' : 'parameter_type',
                        'vary'  : 'parameter_count',
                        
                        ))
            

    # number of types
    # number of primitives
    # number of reference types
