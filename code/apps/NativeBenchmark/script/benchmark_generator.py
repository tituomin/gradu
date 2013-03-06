
from templates import java_benchmark
from templates import c_module
from templates import c_jni_function
from templates import c_nativemethod

import itertools
import logging

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

def java_parameter_initialisation(type_data, name):

    if type_data.get('is-array', False):
        expression = 'BenchmarkParameter.retrieve{tipe}Array()'.format(
            tipe = type_data['java-element-type'].capitalize())

    elif type_data.get('is-object', False):
        expression = 'BenchmarkParameter.retrieve{tipe}()'.format(
            tipe = type_data['java'])

    elif type_data.get('java-literal'):
        expression = type_data['java-literal']

    return name + " = " + expression

def java_to_c_benchmarks():
    java = []
    c = []

    all_combinations = []
    for symbol in types.keys():
        all_combinations.append(jni_types.type_combinations(
                size=20, typeset=[types[symbol]]))

    all_combinations.append(jni_types.type_combinations(typeset=types.values()))

    # todo: modifiers
    # todo: return types

    for combinations in all_combinations:

        parameter_names = []
        all_parameter_declarations = []
        all_c_parameter_declarations = ['jobject instance']
        all_parameter_initialisations = []

        for i, type_data in enumerate(combinations):
            parameter_names.append(type_data['symbol'] + str(i+1))

            all_parameter_declarations.append(
                type_data['java'] + ' ' + parameter_names[-1])

            all_c_parameter_declarations.append(
                type_data['c'] + ' ' + parameter_names[-1])

            all_parameter_initialisations.append(
                java_parameter_initialisation(type_data, parameter_names[-1]))

        
        for i in range(0, len(combinations)):

            if i == 0:
                params = []
                if combinations[i]['java'] in ['String', 'Array']:
                    # generate the varying versions in the same go
                    # for single parameter types with size
                    # (java code could figure this out with introspection?)
                    params.append('new BasicOption(BasicOption.VARIABLE, "size")')
                    if combinations[i]['java'] == 'String':
                        params.append("\n    new BasicOption(BasicOption.VARIABLE, \"encoding\")")

                    dynamic_parameters = "{" + ", ".join(params) + "}"

                    # todo: class / object ? (member count &c..)
                    
            else:
                dynamic_parameters = "null"

            classname = next_classname()
            return_type = return_types['v']
            native_method_name = 'nativemethod'

            java.append({
                    'filename' : classname + ".java",
                    'class'    : '.'.join(packagename) + "." + classname,
                    'path'     : '/'.join(packagename),
                    'code'     : java_benchmark.t.format(
                        class_relations           = '',
                        group                     = 'Java to C',
                        native_method_modifiers   = 'private',
                        native_method_return_type = return_type['java'],
                        native_method_name        = native_method_name,
                        packagename               = '.'.join(packagename),
                        classname                 = classname,
                        native_method_parameters  = ", ".join(all_parameter_declarations[0:i+1]),
                        parameter_declarations    = "; ".join(all_parameter_declarations[0:i+1]),
                        parameter_initialisations = "; ".join(all_parameter_initialisations[0:i+1]),
                        native_method_arguments   = ", ".join(parameter_names[0:i+1]),
                        library_name              = library_name,
                        tipe                      = symbol,
                        dynamic_parameters        = dynamic_parameters,
                        variable                  = i+1 )})

            c.append(
                c_nativemethod.t.format(
                    return_type               = return_type['c'],
                    packagename               = ('_').join(packagename),
                    classname                 = classname,
                    function                  = native_method_name,
                    parameters                = ", ".join(all_c_parameter_declarations[0:i+2]),
                    return_expression         = '' ))


    c_file = c_module.t.format(
        parameter_declarations = '',
        returnvalue_declarations = '',
        jni_function_templates = ''.join(c))
    
    return java, c_file
#    return java, "\n".join(c)
