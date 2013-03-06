
from templates import java_benchmark
from templates import c_module
from templates import c_jni_function
from templates import c_nativemethod

import jni_types
from jni_types import types, primitive_types, return_types

packagename = ['fi', 'helsinki', 'cs', 'tituomin', 'nativebenchmark', 'benchmark']
library_name = 'nativebenchmark'
class_counter = 0

# todo make sure returnvalues are read and/or not optimised away...

def create_benchmarks():
    benchmarks = { 'java' : [], 'c' : '' }
    jb, benchmarks['c'] = java_to_c_benchmarks()
    benchmarks['java'].extend(jb)
    return benchmarks

def next_classname():
    global class_counter
    class_counter += 1
    return 'Benchmark' + str(class_counter).zfill(5)

def java_parameter_initialisations(type_data, names):
    if type_data.get('is_array', False):
        expression = 'BenchmarkParameter.get{tipe}Array(typeSpecs)'.format(
            tipe = type_data['java-element-type'].capitalize())

    elif type_data.get('is-object', False):
        expression = 'BenchmarkParameter.get{tipe}(typeSpecs)'.format(
            tipe = type_data['java'])

    elif type_data.get('java-literal'):
        expression = type_data['java-literal']

    return (
        "; ".join([name + " = " + expression for name in names]))


def java_to_c_benchmarks():
    java = []
    c = []

    size = 20
    mean_size = 20 / 2

    # single type, change amount (primitives)
    for symbol in types.keys():
        combinations = jni_types.type_combinations(
            size=size, typeset=[types[symbol]])

        for i, type_data in enumerate(combinations):
            print combinations, type_data
            parameter_names = [symbol + str(j) for j in range(1, i+2)]

            arguments = ", ".join(parameter_names)

            parameter_declarations = (
                [type_data['java'] + ' ' + argument for argument in parameter_names])

            c_parameter_declarations = (
                "jobject instance, " + ", ".join(
                    [type_data['c'] + ' ' +
                     argument for argument in parameter_names]))

            # todo: how to initialise arrays ?
            parameter_initialisations = java_parameter_initialisations(type_data, parameter_names)

            native_method_name = 'nativemethod'
            return_type = return_types['v']

            classname = next_classname()

            java.append({
                    'filename': classname + ".java",
                    'class' : '.'.join(packagename) + "." + classname,
                    'path' : '/'.join(packagename),
                    'code': java_benchmark.t.format(
                        class_relations           = '',
                        group                     = 'Java to C',
                        description               = 'Single par type with changing count',
                        native_method_modifiers   = 'private',
                        native_method_return_type = return_type['java'],
                        native_method_name        = native_method_name,
                        packagename               = '.'.join(packagename),
                        classname                 = classname,
                        native_method_parameters  = ", ".join(parameter_declarations),
                        parameter_declarations    = "; ".join(parameter_declarations),
                        parameter_initialisations = parameter_initialisations,
                        native_method_arguments   = arguments,
                        library_name              = library_name,
                        tipe                      = symbol,
                        variable                  = i+1 )})

            c.append(
                c_nativemethod.t.format(
                    return_type               = return_type['c'],
                    packagename               = ('_').join(packagename),
                    classname                 = classname,
                    function                  = native_method_name,
                    parameters                = c_parameter_declarations,
                    return_expression         = '' ))


    c_file = c_module.t.format(
        parameter_declarations = '',
        returnvalue_declarations = '',
        jni_function_templates = ''.join(c))
    
    return java, c_file
#    return java, "\n".join(c)
