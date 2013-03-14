
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
static jlong repetitions, multiplier;
static jclass java_counterparts_class;
static jmethodID[{amount_of_methods}] mids;

static void init_methodids() {{
{mid_inits}
}}

JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_BenchmarkRegistry_initNative
(JNIEnv *env, jclass cls, jlong reps, jlong mul, jclass javaCounterparts) {{
    repetitions = reps;
    multiplier = mul;
    java_counterparts_class = javaCounterparts;
    init_methodids();
}}

"""

mid_init_t = """
    jmethodID mid = (*env)->GetMethodID(env, java_counterparts_class, "{method_name}", "{method_descriptor}");
    if (mid == NULL) {{
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "{method_descriptor} not found.");
        return; /* method not found */
    }}
    mids[{seq_no} - 1] = mid;

"""
