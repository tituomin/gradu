
t = """
JNIEXPORT {return_type} JNICALL
Java_{packagename}_{classname}_{function}
(JNIEnv *env, {parameters}) {{
    return {return_expression};
}}
"""
