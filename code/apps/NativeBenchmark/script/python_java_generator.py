
from templates import java_benchmark
from templates import c_module
from templates import c_jni_function
from templates import c_nativemethod

import jni_types
from jni_types import types, primitive_types

packagename = 'fi.helsinki.cs.tituomin.nativebenchmark.benchmark'
library_name = 'nativebenchmark'
class_counter = 0

# todo make sure returnvalues are read and/or not optimised away...

def create_benchmarks():
    benchmarks = {
        'java' : [],
        'c'    : ''
        }

    jb, benchmarks['c'] = java_to_c_benchmarks()
    benchmarks['java'].extend(jb)
    return benchmarks

def next_classname():
    global class_counter
    class_counter += 1
    return 'Benchmark' + str(class_counter).zfill(5)

def native_method_name(return_type, parameter_types):
    return "nativemethod"
    # return "_{retsym}_{paramsyms}".format(
    #     retsym = return_type['symbol'],
    #     parameter_types = 
    #     )


def java_to_c_benchmarks():
    java = []
    c = []

    # f = open("/tmp/foo.java", 'w')
    # g = open("/tmp/coo.java", 'w')

    # single type, change amount (primitives)
    for symbol in primitive_types.keys():
        combinations = jni_types.type_combinations(size=20,
                                                   typeset=[primitive_types[symbol]])

        for i, type_data in enumerate(combinations):

            parameter_names = [symbol + str(j) for j in range(1, i+2)]

            signature = "".join([type_data['symbol'] for k in range(1, i+2)])

            arguments = ", ".join(parameter_names)

            parameter_declarations = (
                [type_data['java'] + ' ' + argument for argument in parameter_names])

            c_parameter_declarations = (
                "jobject instance, " + ", ".join(
                    [type_data['c'] + ' ' +
                     argument for argument in parameter_names]))

            parameter_initialisations = (
                "; ".join([name + " = " +
                           type_data['java-literal'] for name in parameter_names]) +
                ";")

            c_parameter_assignments = (
                "; ".join(["local_" + name + " = " +
                           name for name in parameter_names]) + ";")

            classname = next_classname()
            native_method_name = 'nativemethod'
            return_type = types['v']

            java.append({
                    'filename': classname + ".java",
                    'class' : packagename + "." + classname,
                    'path' : packagename.replace('.', '/'),
                    'code':
                        java_benchmark.t.format(
                        class_relations           = '',
                        group                     = 'Java to C',
                        description               = 'Single par type with changing count',
                        native_method_modifiers   = 'private',
                        signature                 = signature,
                        native_method_return_type = return_type['java'],
                        native_method_name        = native_method_name,
                        packagename               = packagename,
                        classname                 = classname,
                        native_method_parameters  = ", ".join(parameter_declarations),
                        parameter_declarations    = "; ".join(parameter_declarations) + ";",
                        parameter_initialisations = parameter_initialisations,
                        native_method_arguments   = arguments,
                        library_name              = library_name,
                        tipe                      = symbol,
                        variable                  = i+1 )})

            c.append(
                c_nativemethod.t.format(
                    return_type               = return_type['c'],
                    packagename               = packagename.replace('.', '_'),
                    classname                 = classname,
                    function                  = native_method_name,
                    parameters                = c_parameter_declarations,
                    parameter_assignments     = c_parameter_assignments,
                    return_expression         = '' ))


    c_file = c_module.t.format(
        parameter_declarations = '',
        returnvalue_declarations = '',
        jni_function_templates = ''.join(c))
    
    # g.write(c_file)
    # for cls in java:
    #     f.write(cls)


    return java, c_file
#    return java, "\n".join(c)
    # number of types
    # number of primitives
    # number of reference types
