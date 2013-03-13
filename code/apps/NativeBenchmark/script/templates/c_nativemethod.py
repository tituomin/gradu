
t = """
JNIEXPORT {return_type} JNICALL
Java_{packagename}_{classname}_{function}
(JNIEnv *env, {parameters}) {{
/*    __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "{classname} being called "); */
    return {return_expression};
}}
"""

t_caller_native = """

JNIEXPORT void JNICALL
Java_{packagename}_{classname}_run
(JNIEnv *env, jobject instance) {{
    jlong i, j;
    {parameter_declarations};
    {parameter_initialisations};
    for (i = 0; i < multiplier; i++) {
        for (j = 0; j < multiplier; j++) {
            {counterpart_method_name} ({counterpart_method_arguments});
        }
    }
}}

"""

t_call_java = """

JNIEXPORT void JNICALL
Java_{packagename}_{classname}_run
(JNIEnv *env, jobject instance) {{
    jlong i, j;
    {parameter_declarations};
    {parameter_initialisations};
    for (i = 0; i < multiplier; i++) {
        for (j = 0; j < multiplier; j++) {
            {counterpart_method_name} ({counterpart_method_arguments});
        }
    }
}}

"""

# todo here
