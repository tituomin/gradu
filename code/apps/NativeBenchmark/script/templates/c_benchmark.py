
t = """
void Java_{packagename}_{classname}_{function}_init({arguments}) {{
    {set_arguments}
}}


JNIEXPORT {return_type} JNICALL
Java_{package}_{classname}_{function}
(JNIEnv *env, {parameters}) {{
    // gettimeofday
    jlong i;
    for (i = 0; i < repetitions; i++) {{
        {jni_function_name} ({arguments});
    }}
    // gettimeofday

}}
"""

