
import itertools

primitive_types = None
object_types = None
other_types = None
types = None
return_types = None


primitive_type_definitions = [
    {
        'symbol'       : 'b',
        'java'         : 'boolean',
        'c'            : 'jboolean',
        'c-literal'    : '1',
        'java-literal' : 'true'
        },

    {
        'symbol'       : 'y',
        'java'         : 'byte',
        'c'            : 'jbyte',
        'c-literal'    : "'a'",
        'java-literal' : '100'
        # todo: same value?
        },

    {
        'symbol'       : 'c',
        'java'         : 'char',
        'c'            : 'jchar',
        'c-literal'    : '12',
        'java-literal' : "'\u0012'"
        },

    {
        'symbol'       : 's',
        'java'         : 'short',
        'c'            : 'jshort',
        'c-literal'    : '101',
        'java-literal' : '101'
        },

    {
        'symbol'       : 'i',
        'java'         : 'int',
        'c'            : 'jint',
        'c-literal'    : '102',
        'java-literal' : '102'
        },

    {
        'symbol'       : 'l',
        'java'         : 'long',
        'c'            : 'jlong',
        'c-literal'    : '103',
        'java-literal' : '103'
        },

    {
        'symbol'       : 'f',
        'java'         : 'float',
        'c'            : 'jfloat',
        'c-literal'    : '104.1',
        'java-literal' : '104.1f'
        },

    {
        'symbol'       : 'd',
        'java'         : 'double',
        'c'            : 'jdouble',
        'c-literal'    : '105.1',
        'java-literal' : '105.1'
        },
]

object_type_definitions = [

    {
        'symbol'       : 'O',
        'java'         : 'Object',
        'c'            : 'jobject',
        'c-literal'    : None,
        'java-literal' : None,
        'is-object'    : True
        },

    {
        'symbol'       : 'C',
        'java'         : 'Class',
        'c'            : 'jclass',
        'c-literal'    : None,
        'java-literal' : None,
        'is-object'    : True
        },

    {
        'symbol'       : 'S',
        'java'         : 'String',
        'c'            : 'jstring',
        'c-literal'    : None,
        'java-literal' : '"a string"',
        'is-object'    : True
        },

    {
        'symbol'       : 'T',
        'java'         : 'Throwable',
        'c'            : 'jthrowable',
        'c-literal'    : None,
        'java-literal' : None,
        'is-object'    : True
        }
    
]

other_type_definitions = [

    {
        'symbol'       : 'v',
        'java'         : 'void',
        'c'            : 'void',
        'c-literal'    : None,
        'java-literal' : None
        }
]


def java_native_methodname(is_static, returntype, parametertypes):
    ret = "_"
    if is_static:
        ret += "st_"
    ret += types.get(returntype)['java'] + "_"
    for t in parametertypes:
        ret += types.get(t)

def java_native_methodsignature(is_static, returntype, parametertypes):
    ret = "private"
    if is_static:
        ret += "static "
    
    # todo here

def type_combinations(size=0, typeset=None):
    if size == 0:
        size = len(typeset)

    return list(itertools.islice(itertools.cycle(typeset), 0, size))

def modifier_combinations():
    return itertools.product(['static', ''], ['private', 'public', 'protected'])
    

def init_types():
    global primitive_types, object_types, other_types, types, return_types
    primitive_types = dict([(typedef['symbol'], typedef) for typedef in primitive_type_definitions])
    object_types = dict([(typedef['symbol'], typedef) for typedef in object_type_definitions])
    other_types = dict([(typedef['symbol'], typedef) for typedef in other_type_definitions])

    array_element_types = {}
    array_element_types.update(primitive_types)
    array_element_types['O'] = object_types['O']

    # todo here
    array_types = dict([
            ('A' + key, {'symbol': 'A' + key, 'java': tipe['java'] + '[]', 'c' : tipe['c'] + 'Array',
                         'c-literal': None, 'java-literal': None, 'is-array': True, 'java-element-type': tipe['java']})
            for key, tipe
            in array_element_types.iteritems()])

    types = dict()
    types.update(primitive_types)
    types.update(object_types)
    types.update(array_types)

    return_types = dict()
    return_types.update(types)
    return_types.update(other_types)

#    types.update(other_types)

init_types()

