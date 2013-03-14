
t = """
#include <jni.h>
#include <android/log.h>
#include "natives.h"
#include "native_benchmarks.h"
#include "returnvalues.h"

{initialisers}
{jni_function_templates}

"""

initialisers_t = """
static jlong repetitions;
static jclass java_counterparts_class;
static jmethodID mids[{amount_of_methods}];

static void init_methodids(JNIEnv *env) {{
    jmethodID mid;
{mid_inits}
}}

JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_BenchmarkRegistry_initNative
(JNIEnv *env, jclass cls, jlong reps, jclass javaCounterparts) {{
    repetitions = reps;
    java_counterparts_class = javaCounterparts;
    init_methodids(env);
}}

"""

mid_init_t = """
    mid = (*env)->GetMethodID(env, java_counterparts_class, "{method_name}", "{method_descriptor}");
    if (mid == NULL) {{
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "{method_descriptor} not found.");
        return; /* method not found */
    }}
    mids[{seq_no} - 1] = mid;

"""
