
t = """
JNIEXPORT {return_type} JNICALL
Java_{packagename}_{classname}_{function}
(JNIEnv *env, {parameters}) {{
/*    __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "{classname} being called "); */
    return {return_expression};
}}
"""
