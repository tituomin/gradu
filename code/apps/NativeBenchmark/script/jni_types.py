

init_types()

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

