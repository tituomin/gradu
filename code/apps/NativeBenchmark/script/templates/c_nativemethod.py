
t = """
JNIEXPORT {return_type} JNICALL
Java_{packagename}_{classname}_{function}
(JNIEnv *env, {parameters}) {{
//    {parameter_assignments}
    return {return_expression};
}}
"""
