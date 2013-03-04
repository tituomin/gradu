primitive_types = None
object_types = None
other_types = None
types = None

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

def type_combinations(size=0, typeset=types):
    result = []
    if size == 0:
        size = len(typeset)

    while size > 0:
        for symbol in typeset:
            result.append(type_data(symbol))
            size -= 1
            if size == 0:
                break

    return result
    
    
def type_data(symbol):
    return {
        'symbol': symbol,
        'c' : types[symbol][0],
        'java' : types[symbol][1]
        }

def literal_value_java(symbol) {
    if symbol == 'b':
        return 'true'
    if symbol == 'y'


def literal_value_c(symbol) {
    if symbol == 'b'
    }

def init_types():
    global primitive_types, object_types, other_types, types
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

init_types()

