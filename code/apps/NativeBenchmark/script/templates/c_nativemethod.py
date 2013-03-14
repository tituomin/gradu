

#/*    __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "{classname} being called "); */

t = """
JNIEXPORT {return_type} JNICALL
Java_{packagename}_{classname}_{function}
(JNIEnv *env, {parameters}) {{
    return {return_expression};
}}
"""

t_caller_native = """

JNIEXPORT void JNICALL
Java_{packagename}_{classname}_run
(JNIEnv *env, jobject instance) {{
    {parameter_declarations};
    {parameter_initialisations};

    jlong i;
    for (i = 0; i < repetitions; i++) {{
        {counterpart_method_name} ({counterpart_method_arguments});
    }}
}}

"""

t_caller_java = """

JNIEXPORT void JNICALL
Java_{packagename}_{classname}_run
(JNIEnv *env, jobject instance) {{
    jmethodID mid = mids[{seq_no} - 1];

    {parameter_declarations};
    {parameter_initialisations};

    jlong i;
    for (i = 0; i < repetitions; i++) {{
        (*env)->Call{java_method_type}Method{call_variant}(env, instance, mid{arguments});
    }}
}}

"""

# todo: refactor common loop code elsewhere?
# todo: mid caching could be done beforehand? maybe not
