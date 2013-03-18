

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

    jlong i, refs = 0;

    for (i = 0; i < repetitions; i++) {{
        if (refs == 0) {{
            refs = LOCAL_FRAME_SIZE;
            if ((*env)->PushLocalFrame(env, LOCAL_FRAME_SIZE) < 0) {{
                __android_log_write(ANDROID_LOG_ERROR,                      
                    "nativebenchmark", "can't ensure capacity");
                return;
            }}
        }}

        (*env)->Call{java_method_type}Method{call_variant}(env, instance, mid{arguments});

        if (--refs == 0) {{
            (*env)->PopLocalFrame(env, NULL);
        }}
    }}
}}

"""

# todo: refactor common loop code elsewhere?
# todo: mid caching could be done beforehand? maybe not
