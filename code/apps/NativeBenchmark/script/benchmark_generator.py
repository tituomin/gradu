from templates import java_benchmark
from templates import java_counterparts
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

# todo: initialize complex return values for c side

def create_benchmarks():
    benchmarks = { 'java' : [], 'c' : '' }
    jb, benchmarks['c'] = java_to_c_benchmarks()
    benchmarks['java'].extend(jb)
    return benchmarks

def next_sequence_no():
    global class_counter
    class_counter += 1
    return class_counter

def benchmark_classname(prefix, number):
    return prefix + 'Benchmark' + str(number).zfill(5)    

def parameter_initialisation(language, type_data, name):
    if type_data.get('is-array', False):
        if language == 'java':
            expression = 'benchmarkParameter.retrieve{tipe}Array()'.format(
                tipe = type_data['java-element-type'].capitalize())
        else:
            expression = '{tipe}ArrayValue'.format(
                tipe = type_data['c-element-type'])

    elif type_data.get('is-object', False):
        if language == 'java':
            expression = 'benchmarkParameter.retrieve{tipe}()'.format(
                tipe = type_data['java'])
        else:
            expression = '{tipe}Value'.format(
                tipe = type_data['c'])

    elif language == 'java':
        if type_data.get('java-literal'):
            expression = type_data['java-literal']
        else:
            expression = ''

    elif language == 'c':
        if type_data.get('c-literal'):
            expression = type_data['c-literal']
        else:
            expression = ''

    if name:
        return name + " = " + expression
    else:
        return expression


def modifier_combinations():
    privacy = ['private', 'public', 'protected'] #synchronized, floatingpoint?
    static = ['static', '']
    return list(itertools.product(privacy, static))

def specify_combinations():
    all_combinations = []

    for symbol in types.keys():
        # one type, varying length
        all_combinations.append({
            'return_types' : [return_types['v']],
            'native_modifiers' : [('private', '')],
            'types' : jni_types.type_combinations(
                size=20, typeset=[types[symbol]])})

    # all types, vary length to vary number of types
    all_combinations.append({
            'return_types' : [return_types['v']],
            'native_modifiers' : [('private', '')],
            'types' : jni_types.type_combinations(
                typeset = types.values())
            })

    # modifiers
    all_combinations.append({
            'return_types' : [return_types['i']],
            'native_modifiers' : modifier_combinations(),
            'types' : [types['i']]
            })

    # return types
    all_combinations.append({
            'return_types' : jni_types.type_combinations(
                typeset = types.values()),
            'native_modifiers' : [('private', '')],
            'types' : [types['i']]
            })

    return all_combinations

def java_to_c_benchmarks():
    java = []
    java_callees = []
    c = []

    all_combinations = specify_combinations()

    for spec in all_combinations:
        for native_modifier in spec['native_modifiers']:
            for return_type in spec['return_types']:
                type_combination = spec['types']

                native_method_modifiers = " ".join(native_modifier)
                return_expression = parameter_initialisation('c', return_type, None)

                parameter_names = []
                parameter_declarations = []
                parameter_initialisations = []
                # todo: static methods !! 

                if native_modifier[1] == 'static':
                    first_param = 'jclass cls'
                else:
                    first_param = 'jobject instance'
                c_parameter_declarations = [first_param]

                for i, type_data in enumerate(type_combination):
                    parameter_names.append(type_data['symbol'] + str(i+1))

                    parameter_declarations.append(
                        type_data['java'] + ' ' + parameter_names[-1])

                    c_parameter_declarations.append(
                        type_data['c'] + ' ' + parameter_names[-1])

                    parameter_initialisations.append(
                        parameter_initialisation('java', type_data, parameter_names[-1]))

                for i, __ in enumerate(type_combination):

                    if i == 0:
                        params = []
                        if type_combination[i]['java'] in ['String', 'Array']:
                            # generate the varying versions in the same go
                            # for single parameter types with size
                            # (java code could figure this out with introspection?)
                            params.append(java_benchmark.dynamic_parameter('size'))
                            if type_combination[i]['java'] == 'String':
                                params.append(java_benchmark.dynamic_parameter('encoding'))

                            dynamic_parameters = "{" + ", ".join(params) + "}"
                            # todo: class / object ? (member count &c..)

                    else:
                        dynamic_parameters = "null"

                    sequence_no = next_sequence_no()

                    for from_lang, to_lang in itertools.product(('J', 'C'), repeat=2):

                        native_method_name = 'nativemethod'
                        classname = benchmark_classname(
                            '2'.join((from_lang, to_lang)),
                            sequence_no)

                        if from_lang == 'C':
                            run_method = java_benchmark.native_run_method()
                            native_method = ''

                        elif from lang == 'J':
                            run_method = java_benchmark.java_run_method(
                                    parameter_declarations       = "; ".join(parameter_declarations[0:i+1]),
                                    parameter_initialisations    = "; ".join(parameter_initialisations[0:i+1]),
                                    counterpart_method_name      = native_method_name,
                                    counterpart_method_arguments = ", ".join(parameter_names[0:i+1]))

                            native_method                        = java_benchmark.native_method(
                                        modifiers                = native_method_modifiers,
                                        return_type              = return_type['java'],
                                        name                     = native_method_name,
                                        parameters               = ", ".join(parameter_declarations[0:i+1]))

                        java.append({
                                'filename' : classname + ".java",
                                'class'    : '.'.join(packagename) + "." + classname,
                                'path'     : '/'.join(packagename),
                                'code'     : java_benchmark.t.format(
                                    imports                      = '',
                                    from_language                = 'j',
                                    to_language                  = 'c',
                                    class_relations              = '',
                                    group                        = 'Java to C',
                                    packagename                  = '.'.join(packagename),
                                    classname                    = classname,
                                    native_method_parameters     = ,
                                    library_name                 = library_name,
                                    dynamic_parameters           = dynamic_parameters,
                                    run_method                   = run_method,
                                    native_method                = native_method)})

                        if (from_lang, to_lang) == ('J', 'J'):
                            java_callees.append(
                                java_counterparts.counterpart_method(
                                    return_type       = ,
                                    classname         = ,
                                    methodname        = ,
                                    parameters        = ,
                                    return_expression = ))

                            # todo append return expressions
                            # to counterpart class (at the end or beginning)

                        if (from_lang, to_lang) == ('J', 'C'):
                            c.append(
                                c_nativemethod.t.format(
                                    return_type               = return_type['c'],
                                    packagename               = ('_').join(packagename),
                                    classname                 = classname,
                                    function                  = native_method_name,
                                    parameters                = ", ".join(c_parameter_declarations[0:i+2]),
                                    return_expression         = return_expression))

                        if (from_lang, to_lang) == ('C', 'C'):
                            c.append(
                                c_nativemethod.t_caller_native.format(
                                    ))

                        if (from_lang, to_lang) == ('C', 'J'):
                            c.append(
                                c_nativemethod.t_caller_java.format(
                                    ))



    c_file = c_module.t.format(jni_function_templates = ''.join(c))

    return java, c_file
