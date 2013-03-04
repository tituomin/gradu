
t = """
void Java_{package}_{class_name}_{function}_init({arguments}) {{
    {set_arguments}
}}


JNIEXPORT {return_type} JNICALL
Java_{package}_{class_name}_{function}
(JNIEnv *env, {parameters}) {{
    jlong i, j;
    // gettimeofday
    for (i = 0; i < multiplier; i++) {{
        for (j = 0; j < multiplier; j++) {{
            {jni_function_name} ({arguments});
        }}
    }}
    // gettimeofday

}}
"""

