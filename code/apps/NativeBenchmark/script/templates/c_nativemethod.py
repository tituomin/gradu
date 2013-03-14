
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
    for (i = 0; i < multiplier; i++) {{
        for (j = 0; j < multiplier; j++) {{
            {counterpart_method_name} ({counterpart_method_arguments});
        }}
    }}
}}

"""

t_caller_java = """

JNIEXPORT void JNICALL
Java_{packagename}_{classname}_run
(JNIEnv *env, jobject instance) {{
    jlong i, j;
    jclass cls = (*env)->FindClass(env, "{class_descriptor}");
    if (cls == NULL) {{
        __android_log_write(ANDROID_LOG_ERROR, "nativerunner", "{class_descriptor} not found.");
        return
    }}
    jmethodID mid =
        (*env)->GetMethodID(env, cls, "{method_name}", "{method_descriptor}");

    if (mid == NULL) {{
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "{method_descriptor} not found.");
        return; /* method not found */
    }}
    {parameter_declarations};
    {parameter_initialisations};

    for (i = 0; i < multiplier; i++) {{
        for (j = 0; j < multiplier; j++) {{
            (*env)->Call{java_return_type}Method{call_variant}(env, instance, mid{arguments});
        }}
    }}
}}

"""

# todo: refactor common loop code elsewhere?
# todo: mid caching could be done beforehand? maybe not
