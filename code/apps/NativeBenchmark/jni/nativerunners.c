
#include <jni.h>
#include <android/log.h>
#include "natives.h"
#include "native_benchmarks.h"
#include "returnvalues.h"


static jlong repetitions;
static jclass java_counterparts_class;
static jmethodID mids[468];

static void init_methodids(JNIEnv *env) {
    jmethodID mid;

    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00001", "(Ljava/lang/String;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/String;)V not found.");
        return; /* method not found */
    }
    mids[1 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00002", "(Ljava/lang/String;Ljava/lang/String;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/String;Ljava/lang/String;)V not found.");
        return; /* method not found */
    }
    mids[2 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00003", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V not found.");
        return; /* method not found */
    }
    mids[3 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00004", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V not found.");
        return; /* method not found */
    }
    mids[4 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00005", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V not found.");
        return; /* method not found */
    }
    mids[5 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00006", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V not found.");
        return; /* method not found */
    }
    mids[6 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00007", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V not found.");
        return; /* method not found */
    }
    mids[7 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00008", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V not found.");
        return; /* method not found */
    }
    mids[8 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00009", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V not found.");
        return; /* method not found */
    }
    mids[9 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00010", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V not found.");
        return; /* method not found */
    }
    mids[10 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00011", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V not found.");
        return; /* method not found */
    }
    mids[11 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00012", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V not found.");
        return; /* method not found */
    }
    mids[12 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00013", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V not found.");
        return; /* method not found */
    }
    mids[13 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00014", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V not found.");
        return; /* method not found */
    }
    mids[14 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00015", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V not found.");
        return; /* method not found */
    }
    mids[15 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00016", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V not found.");
        return; /* method not found */
    }
    mids[16 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00017", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V not found.");
        return; /* method not found */
    }
    mids[17 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00018", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V not found.");
        return; /* method not found */
    }
    mids[18 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00019", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V not found.");
        return; /* method not found */
    }
    mids[19 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00020", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V not found.");
        return; /* method not found */
    }
    mids[20 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00021", "([C)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([C)V not found.");
        return; /* method not found */
    }
    mids[21 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00022", "([C[C)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([C[C)V not found.");
        return; /* method not found */
    }
    mids[22 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00023", "([C[C[C)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([C[C[C)V not found.");
        return; /* method not found */
    }
    mids[23 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00024", "([C[C[C[C)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([C[C[C[C)V not found.");
        return; /* method not found */
    }
    mids[24 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00025", "([C[C[C[C[C)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([C[C[C[C[C)V not found.");
        return; /* method not found */
    }
    mids[25 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00026", "([C[C[C[C[C[C)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([C[C[C[C[C[C)V not found.");
        return; /* method not found */
    }
    mids[26 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00027", "([C[C[C[C[C[C[C)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([C[C[C[C[C[C[C)V not found.");
        return; /* method not found */
    }
    mids[27 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00028", "([C[C[C[C[C[C[C[C)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([C[C[C[C[C[C[C[C)V not found.");
        return; /* method not found */
    }
    mids[28 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00029", "([C[C[C[C[C[C[C[C[C)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([C[C[C[C[C[C[C[C[C)V not found.");
        return; /* method not found */
    }
    mids[29 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00030", "([C[C[C[C[C[C[C[C[C[C)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([C[C[C[C[C[C[C[C[C[C)V not found.");
        return; /* method not found */
    }
    mids[30 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00031", "([C[C[C[C[C[C[C[C[C[C[C)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([C[C[C[C[C[C[C[C[C[C[C)V not found.");
        return; /* method not found */
    }
    mids[31 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00032", "([C[C[C[C[C[C[C[C[C[C[C[C)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([C[C[C[C[C[C[C[C[C[C[C[C)V not found.");
        return; /* method not found */
    }
    mids[32 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00033", "([C[C[C[C[C[C[C[C[C[C[C[C[C)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([C[C[C[C[C[C[C[C[C[C[C[C[C)V not found.");
        return; /* method not found */
    }
    mids[33 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00034", "([C[C[C[C[C[C[C[C[C[C[C[C[C[C)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([C[C[C[C[C[C[C[C[C[C[C[C[C[C)V not found.");
        return; /* method not found */
    }
    mids[34 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00035", "([C[C[C[C[C[C[C[C[C[C[C[C[C[C[C)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([C[C[C[C[C[C[C[C[C[C[C[C[C[C[C)V not found.");
        return; /* method not found */
    }
    mids[35 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00036", "([C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C)V not found.");
        return; /* method not found */
    }
    mids[36 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00037", "([C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C)V not found.");
        return; /* method not found */
    }
    mids[37 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00038", "([C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C)V not found.");
        return; /* method not found */
    }
    mids[38 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00039", "([C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C)V not found.");
        return; /* method not found */
    }
    mids[39 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00040", "([C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C)V not found.");
        return; /* method not found */
    }
    mids[40 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00041", "(C)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(C)V not found.");
        return; /* method not found */
    }
    mids[41 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00042", "(CC)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(CC)V not found.");
        return; /* method not found */
    }
    mids[42 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00043", "(CCC)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(CCC)V not found.");
        return; /* method not found */
    }
    mids[43 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00044", "(CCCC)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(CCCC)V not found.");
        return; /* method not found */
    }
    mids[44 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00045", "(CCCCC)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(CCCCC)V not found.");
        return; /* method not found */
    }
    mids[45 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00046", "(CCCCCC)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(CCCCCC)V not found.");
        return; /* method not found */
    }
    mids[46 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00047", "(CCCCCCC)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(CCCCCCC)V not found.");
        return; /* method not found */
    }
    mids[47 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00048", "(CCCCCCCC)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(CCCCCCCC)V not found.");
        return; /* method not found */
    }
    mids[48 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00049", "(CCCCCCCCC)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(CCCCCCCCC)V not found.");
        return; /* method not found */
    }
    mids[49 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00050", "(CCCCCCCCCC)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(CCCCCCCCCC)V not found.");
        return; /* method not found */
    }
    mids[50 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00051", "(CCCCCCCCCCC)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(CCCCCCCCCCC)V not found.");
        return; /* method not found */
    }
    mids[51 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00052", "(CCCCCCCCCCCC)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(CCCCCCCCCCCC)V not found.");
        return; /* method not found */
    }
    mids[52 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00053", "(CCCCCCCCCCCCC)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(CCCCCCCCCCCCC)V not found.");
        return; /* method not found */
    }
    mids[53 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00054", "(CCCCCCCCCCCCCC)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(CCCCCCCCCCCCCC)V not found.");
        return; /* method not found */
    }
    mids[54 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00055", "(CCCCCCCCCCCCCCC)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(CCCCCCCCCCCCCCC)V not found.");
        return; /* method not found */
    }
    mids[55 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00056", "(CCCCCCCCCCCCCCCC)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(CCCCCCCCCCCCCCCC)V not found.");
        return; /* method not found */
    }
    mids[56 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00057", "(CCCCCCCCCCCCCCCCC)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(CCCCCCCCCCCCCCCCC)V not found.");
        return; /* method not found */
    }
    mids[57 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00058", "(CCCCCCCCCCCCCCCCCC)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(CCCCCCCCCCCCCCCCCC)V not found.");
        return; /* method not found */
    }
    mids[58 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00059", "(CCCCCCCCCCCCCCCCCCC)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(CCCCCCCCCCCCCCCCCCC)V not found.");
        return; /* method not found */
    }
    mids[59 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00060", "(CCCCCCCCCCCCCCCCCCCC)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(CCCCCCCCCCCCCCCCCCCC)V not found.");
        return; /* method not found */
    }
    mids[60 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00061", "(Z)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Z)V not found.");
        return; /* method not found */
    }
    mids[61 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00062", "(ZZ)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(ZZ)V not found.");
        return; /* method not found */
    }
    mids[62 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00063", "(ZZZ)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(ZZZ)V not found.");
        return; /* method not found */
    }
    mids[63 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00064", "(ZZZZ)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(ZZZZ)V not found.");
        return; /* method not found */
    }
    mids[64 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00065", "(ZZZZZ)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(ZZZZZ)V not found.");
        return; /* method not found */
    }
    mids[65 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00066", "(ZZZZZZ)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(ZZZZZZ)V not found.");
        return; /* method not found */
    }
    mids[66 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00067", "(ZZZZZZZ)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(ZZZZZZZ)V not found.");
        return; /* method not found */
    }
    mids[67 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00068", "(ZZZZZZZZ)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(ZZZZZZZZ)V not found.");
        return; /* method not found */
    }
    mids[68 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00069", "(ZZZZZZZZZ)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(ZZZZZZZZZ)V not found.");
        return; /* method not found */
    }
    mids[69 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00070", "(ZZZZZZZZZZ)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(ZZZZZZZZZZ)V not found.");
        return; /* method not found */
    }
    mids[70 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00071", "(ZZZZZZZZZZZ)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(ZZZZZZZZZZZ)V not found.");
        return; /* method not found */
    }
    mids[71 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00072", "(ZZZZZZZZZZZZ)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(ZZZZZZZZZZZZ)V not found.");
        return; /* method not found */
    }
    mids[72 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00073", "(ZZZZZZZZZZZZZ)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(ZZZZZZZZZZZZZ)V not found.");
        return; /* method not found */
    }
    mids[73 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00074", "(ZZZZZZZZZZZZZZ)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(ZZZZZZZZZZZZZZ)V not found.");
        return; /* method not found */
    }
    mids[74 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00075", "(ZZZZZZZZZZZZZZZ)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(ZZZZZZZZZZZZZZZ)V not found.");
        return; /* method not found */
    }
    mids[75 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00076", "(ZZZZZZZZZZZZZZZZ)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(ZZZZZZZZZZZZZZZZ)V not found.");
        return; /* method not found */
    }
    mids[76 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00077", "(ZZZZZZZZZZZZZZZZZ)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(ZZZZZZZZZZZZZZZZZ)V not found.");
        return; /* method not found */
    }
    mids[77 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00078", "(ZZZZZZZZZZZZZZZZZZ)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(ZZZZZZZZZZZZZZZZZZ)V not found.");
        return; /* method not found */
    }
    mids[78 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00079", "(ZZZZZZZZZZZZZZZZZZZ)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(ZZZZZZZZZZZZZZZZZZZ)V not found.");
        return; /* method not found */
    }
    mids[79 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00080", "(ZZZZZZZZZZZZZZZZZZZZ)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(ZZZZZZZZZZZZZZZZZZZZ)V not found.");
        return; /* method not found */
    }
    mids[80 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00081", "(D)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(D)V not found.");
        return; /* method not found */
    }
    mids[81 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00082", "(DD)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(DD)V not found.");
        return; /* method not found */
    }
    mids[82 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00083", "(DDD)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(DDD)V not found.");
        return; /* method not found */
    }
    mids[83 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00084", "(DDDD)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(DDDD)V not found.");
        return; /* method not found */
    }
    mids[84 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00085", "(DDDDD)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(DDDDD)V not found.");
        return; /* method not found */
    }
    mids[85 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00086", "(DDDDDD)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(DDDDDD)V not found.");
        return; /* method not found */
    }
    mids[86 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00087", "(DDDDDDD)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(DDDDDDD)V not found.");
        return; /* method not found */
    }
    mids[87 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00088", "(DDDDDDDD)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(DDDDDDDD)V not found.");
        return; /* method not found */
    }
    mids[88 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00089", "(DDDDDDDDD)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(DDDDDDDDD)V not found.");
        return; /* method not found */
    }
    mids[89 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00090", "(DDDDDDDDDD)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(DDDDDDDDDD)V not found.");
        return; /* method not found */
    }
    mids[90 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00091", "(DDDDDDDDDDD)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(DDDDDDDDDDD)V not found.");
        return; /* method not found */
    }
    mids[91 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00092", "(DDDDDDDDDDDD)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(DDDDDDDDDDDD)V not found.");
        return; /* method not found */
    }
    mids[92 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00093", "(DDDDDDDDDDDDD)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(DDDDDDDDDDDDD)V not found.");
        return; /* method not found */
    }
    mids[93 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00094", "(DDDDDDDDDDDDDD)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(DDDDDDDDDDDDDD)V not found.");
        return; /* method not found */
    }
    mids[94 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00095", "(DDDDDDDDDDDDDDD)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(DDDDDDDDDDDDDDD)V not found.");
        return; /* method not found */
    }
    mids[95 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00096", "(DDDDDDDDDDDDDDDD)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(DDDDDDDDDDDDDDDD)V not found.");
        return; /* method not found */
    }
    mids[96 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00097", "(DDDDDDDDDDDDDDDDD)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(DDDDDDDDDDDDDDDDD)V not found.");
        return; /* method not found */
    }
    mids[97 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00098", "(DDDDDDDDDDDDDDDDDD)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(DDDDDDDDDDDDDDDDDD)V not found.");
        return; /* method not found */
    }
    mids[98 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00099", "(DDDDDDDDDDDDDDDDDDD)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(DDDDDDDDDDDDDDDDDDD)V not found.");
        return; /* method not found */
    }
    mids[99 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00100", "(DDDDDDDDDDDDDDDDDDDD)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(DDDDDDDDDDDDDDDDDDDD)V not found.");
        return; /* method not found */
    }
    mids[100 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00101", "(F)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(F)V not found.");
        return; /* method not found */
    }
    mids[101 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00102", "(FF)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(FF)V not found.");
        return; /* method not found */
    }
    mids[102 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00103", "(FFF)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(FFF)V not found.");
        return; /* method not found */
    }
    mids[103 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00104", "(FFFF)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(FFFF)V not found.");
        return; /* method not found */
    }
    mids[104 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00105", "(FFFFF)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(FFFFF)V not found.");
        return; /* method not found */
    }
    mids[105 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00106", "(FFFFFF)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(FFFFFF)V not found.");
        return; /* method not found */
    }
    mids[106 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00107", "(FFFFFFF)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(FFFFFFF)V not found.");
        return; /* method not found */
    }
    mids[107 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00108", "(FFFFFFFF)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(FFFFFFFF)V not found.");
        return; /* method not found */
    }
    mids[108 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00109", "(FFFFFFFFF)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(FFFFFFFFF)V not found.");
        return; /* method not found */
    }
    mids[109 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00110", "(FFFFFFFFFF)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(FFFFFFFFFF)V not found.");
        return; /* method not found */
    }
    mids[110 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00111", "(FFFFFFFFFFF)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(FFFFFFFFFFF)V not found.");
        return; /* method not found */
    }
    mids[111 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00112", "(FFFFFFFFFFFF)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(FFFFFFFFFFFF)V not found.");
        return; /* method not found */
    }
    mids[112 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00113", "(FFFFFFFFFFFFF)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(FFFFFFFFFFFFF)V not found.");
        return; /* method not found */
    }
    mids[113 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00114", "(FFFFFFFFFFFFFF)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(FFFFFFFFFFFFFF)V not found.");
        return; /* method not found */
    }
    mids[114 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00115", "(FFFFFFFFFFFFFFF)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(FFFFFFFFFFFFFFF)V not found.");
        return; /* method not found */
    }
    mids[115 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00116", "(FFFFFFFFFFFFFFFF)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(FFFFFFFFFFFFFFFF)V not found.");
        return; /* method not found */
    }
    mids[116 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00117", "(FFFFFFFFFFFFFFFFF)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(FFFFFFFFFFFFFFFFF)V not found.");
        return; /* method not found */
    }
    mids[117 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00118", "(FFFFFFFFFFFFFFFFFF)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(FFFFFFFFFFFFFFFFFF)V not found.");
        return; /* method not found */
    }
    mids[118 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00119", "(FFFFFFFFFFFFFFFFFFF)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(FFFFFFFFFFFFFFFFFFF)V not found.");
        return; /* method not found */
    }
    mids[119 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00120", "(FFFFFFFFFFFFFFFFFFFF)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(FFFFFFFFFFFFFFFFFFFF)V not found.");
        return; /* method not found */
    }
    mids[120 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00121", "(I)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(I)V not found.");
        return; /* method not found */
    }
    mids[121 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00122", "(II)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(II)V not found.");
        return; /* method not found */
    }
    mids[122 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00123", "(III)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(III)V not found.");
        return; /* method not found */
    }
    mids[123 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00124", "(IIII)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(IIII)V not found.");
        return; /* method not found */
    }
    mids[124 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00125", "(IIIII)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(IIIII)V not found.");
        return; /* method not found */
    }
    mids[125 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00126", "(IIIIII)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(IIIIII)V not found.");
        return; /* method not found */
    }
    mids[126 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00127", "(IIIIIII)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(IIIIIII)V not found.");
        return; /* method not found */
    }
    mids[127 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00128", "(IIIIIIII)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(IIIIIIII)V not found.");
        return; /* method not found */
    }
    mids[128 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00129", "(IIIIIIIII)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(IIIIIIIII)V not found.");
        return; /* method not found */
    }
    mids[129 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00130", "(IIIIIIIIII)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(IIIIIIIIII)V not found.");
        return; /* method not found */
    }
    mids[130 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00131", "(IIIIIIIIIII)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(IIIIIIIIIII)V not found.");
        return; /* method not found */
    }
    mids[131 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00132", "(IIIIIIIIIIII)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(IIIIIIIIIIII)V not found.");
        return; /* method not found */
    }
    mids[132 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00133", "(IIIIIIIIIIIII)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(IIIIIIIIIIIII)V not found.");
        return; /* method not found */
    }
    mids[133 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00134", "(IIIIIIIIIIIIII)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(IIIIIIIIIIIIII)V not found.");
        return; /* method not found */
    }
    mids[134 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00135", "(IIIIIIIIIIIIIII)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(IIIIIIIIIIIIIII)V not found.");
        return; /* method not found */
    }
    mids[135 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00136", "(IIIIIIIIIIIIIIII)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(IIIIIIIIIIIIIIII)V not found.");
        return; /* method not found */
    }
    mids[136 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00137", "(IIIIIIIIIIIIIIIII)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(IIIIIIIIIIIIIIIII)V not found.");
        return; /* method not found */
    }
    mids[137 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00138", "(IIIIIIIIIIIIIIIIII)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(IIIIIIIIIIIIIIIIII)V not found.");
        return; /* method not found */
    }
    mids[138 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00139", "(IIIIIIIIIIIIIIIIIII)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(IIIIIIIIIIIIIIIIIII)V not found.");
        return; /* method not found */
    }
    mids[139 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00140", "(IIIIIIIIIIIIIIIIIIII)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(IIIIIIIIIIIIIIIIIIII)V not found.");
        return; /* method not found */
    }
    mids[140 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00141", "([F)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([F)V not found.");
        return; /* method not found */
    }
    mids[141 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00142", "([F[F)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([F[F)V not found.");
        return; /* method not found */
    }
    mids[142 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00143", "([F[F[F)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([F[F[F)V not found.");
        return; /* method not found */
    }
    mids[143 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00144", "([F[F[F[F)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([F[F[F[F)V not found.");
        return; /* method not found */
    }
    mids[144 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00145", "([F[F[F[F[F)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([F[F[F[F[F)V not found.");
        return; /* method not found */
    }
    mids[145 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00146", "([F[F[F[F[F[F)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([F[F[F[F[F[F)V not found.");
        return; /* method not found */
    }
    mids[146 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00147", "([F[F[F[F[F[F[F)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([F[F[F[F[F[F[F)V not found.");
        return; /* method not found */
    }
    mids[147 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00148", "([F[F[F[F[F[F[F[F)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([F[F[F[F[F[F[F[F)V not found.");
        return; /* method not found */
    }
    mids[148 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00149", "([F[F[F[F[F[F[F[F[F)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([F[F[F[F[F[F[F[F[F)V not found.");
        return; /* method not found */
    }
    mids[149 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00150", "([F[F[F[F[F[F[F[F[F[F)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([F[F[F[F[F[F[F[F[F[F)V not found.");
        return; /* method not found */
    }
    mids[150 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00151", "([F[F[F[F[F[F[F[F[F[F[F)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([F[F[F[F[F[F[F[F[F[F[F)V not found.");
        return; /* method not found */
    }
    mids[151 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00152", "([F[F[F[F[F[F[F[F[F[F[F[F)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([F[F[F[F[F[F[F[F[F[F[F[F)V not found.");
        return; /* method not found */
    }
    mids[152 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00153", "([F[F[F[F[F[F[F[F[F[F[F[F[F)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([F[F[F[F[F[F[F[F[F[F[F[F[F)V not found.");
        return; /* method not found */
    }
    mids[153 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00154", "([F[F[F[F[F[F[F[F[F[F[F[F[F[F)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([F[F[F[F[F[F[F[F[F[F[F[F[F[F)V not found.");
        return; /* method not found */
    }
    mids[154 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00155", "([F[F[F[F[F[F[F[F[F[F[F[F[F[F[F)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([F[F[F[F[F[F[F[F[F[F[F[F[F[F[F)V not found.");
        return; /* method not found */
    }
    mids[155 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00156", "([F[F[F[F[F[F[F[F[F[F[F[F[F[F[F[F)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([F[F[F[F[F[F[F[F[F[F[F[F[F[F[F[F)V not found.");
        return; /* method not found */
    }
    mids[156 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00157", "([F[F[F[F[F[F[F[F[F[F[F[F[F[F[F[F[F)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([F[F[F[F[F[F[F[F[F[F[F[F[F[F[F[F[F)V not found.");
        return; /* method not found */
    }
    mids[157 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00158", "([F[F[F[F[F[F[F[F[F[F[F[F[F[F[F[F[F[F)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([F[F[F[F[F[F[F[F[F[F[F[F[F[F[F[F[F[F)V not found.");
        return; /* method not found */
    }
    mids[158 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00159", "([F[F[F[F[F[F[F[F[F[F[F[F[F[F[F[F[F[F[F)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([F[F[F[F[F[F[F[F[F[F[F[F[F[F[F[F[F[F[F)V not found.");
        return; /* method not found */
    }
    mids[159 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00160", "([F[F[F[F[F[F[F[F[F[F[F[F[F[F[F[F[F[F[F[F)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([F[F[F[F[F[F[F[F[F[F[F[F[F[F[F[F[F[F[F[F)V not found.");
        return; /* method not found */
    }
    mids[160 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00161", "(J)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(J)V not found.");
        return; /* method not found */
    }
    mids[161 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00162", "(JJ)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(JJ)V not found.");
        return; /* method not found */
    }
    mids[162 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00163", "(JJJ)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(JJJ)V not found.");
        return; /* method not found */
    }
    mids[163 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00164", "(JJJJ)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(JJJJ)V not found.");
        return; /* method not found */
    }
    mids[164 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00165", "(JJJJJ)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(JJJJJ)V not found.");
        return; /* method not found */
    }
    mids[165 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00166", "(JJJJJJ)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(JJJJJJ)V not found.");
        return; /* method not found */
    }
    mids[166 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00167", "(JJJJJJJ)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(JJJJJJJ)V not found.");
        return; /* method not found */
    }
    mids[167 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00168", "(JJJJJJJJ)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(JJJJJJJJ)V not found.");
        return; /* method not found */
    }
    mids[168 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00169", "(JJJJJJJJJ)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(JJJJJJJJJ)V not found.");
        return; /* method not found */
    }
    mids[169 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00170", "(JJJJJJJJJJ)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(JJJJJJJJJJ)V not found.");
        return; /* method not found */
    }
    mids[170 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00171", "(JJJJJJJJJJJ)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(JJJJJJJJJJJ)V not found.");
        return; /* method not found */
    }
    mids[171 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00172", "(JJJJJJJJJJJJ)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(JJJJJJJJJJJJ)V not found.");
        return; /* method not found */
    }
    mids[172 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00173", "(JJJJJJJJJJJJJ)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(JJJJJJJJJJJJJ)V not found.");
        return; /* method not found */
    }
    mids[173 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00174", "(JJJJJJJJJJJJJJ)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(JJJJJJJJJJJJJJ)V not found.");
        return; /* method not found */
    }
    mids[174 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00175", "(JJJJJJJJJJJJJJJ)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(JJJJJJJJJJJJJJJ)V not found.");
        return; /* method not found */
    }
    mids[175 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00176", "(JJJJJJJJJJJJJJJJ)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(JJJJJJJJJJJJJJJJ)V not found.");
        return; /* method not found */
    }
    mids[176 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00177", "(JJJJJJJJJJJJJJJJJ)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(JJJJJJJJJJJJJJJJJ)V not found.");
        return; /* method not found */
    }
    mids[177 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00178", "(JJJJJJJJJJJJJJJJJJ)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(JJJJJJJJJJJJJJJJJJ)V not found.");
        return; /* method not found */
    }
    mids[178 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00179", "(JJJJJJJJJJJJJJJJJJJ)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(JJJJJJJJJJJJJJJJJJJ)V not found.");
        return; /* method not found */
    }
    mids[179 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00180", "(JJJJJJJJJJJJJJJJJJJJ)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(JJJJJJJJJJJJJJJJJJJJ)V not found.");
        return; /* method not found */
    }
    mids[180 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00181", "(Ljava/lang/Object;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/Object;)V not found.");
        return; /* method not found */
    }
    mids[181 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00182", "(Ljava/lang/Object;Ljava/lang/Object;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/Object;Ljava/lang/Object;)V not found.");
        return; /* method not found */
    }
    mids[182 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00183", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V not found.");
        return; /* method not found */
    }
    mids[183 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00184", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V not found.");
        return; /* method not found */
    }
    mids[184 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00185", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V not found.");
        return; /* method not found */
    }
    mids[185 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00186", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V not found.");
        return; /* method not found */
    }
    mids[186 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00187", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V not found.");
        return; /* method not found */
    }
    mids[187 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00188", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V not found.");
        return; /* method not found */
    }
    mids[188 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00189", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V not found.");
        return; /* method not found */
    }
    mids[189 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00190", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V not found.");
        return; /* method not found */
    }
    mids[190 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00191", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V not found.");
        return; /* method not found */
    }
    mids[191 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00192", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V not found.");
        return; /* method not found */
    }
    mids[192 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00193", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V not found.");
        return; /* method not found */
    }
    mids[193 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00194", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V not found.");
        return; /* method not found */
    }
    mids[194 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00195", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V not found.");
        return; /* method not found */
    }
    mids[195 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00196", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V not found.");
        return; /* method not found */
    }
    mids[196 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00197", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V not found.");
        return; /* method not found */
    }
    mids[197 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00198", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V not found.");
        return; /* method not found */
    }
    mids[198 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00199", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V not found.");
        return; /* method not found */
    }
    mids[199 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00200", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V not found.");
        return; /* method not found */
    }
    mids[200 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00201", "([J)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([J)V not found.");
        return; /* method not found */
    }
    mids[201 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00202", "([J[J)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([J[J)V not found.");
        return; /* method not found */
    }
    mids[202 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00203", "([J[J[J)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([J[J[J)V not found.");
        return; /* method not found */
    }
    mids[203 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00204", "([J[J[J[J)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([J[J[J[J)V not found.");
        return; /* method not found */
    }
    mids[204 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00205", "([J[J[J[J[J)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([J[J[J[J[J)V not found.");
        return; /* method not found */
    }
    mids[205 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00206", "([J[J[J[J[J[J)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([J[J[J[J[J[J)V not found.");
        return; /* method not found */
    }
    mids[206 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00207", "([J[J[J[J[J[J[J)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([J[J[J[J[J[J[J)V not found.");
        return; /* method not found */
    }
    mids[207 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00208", "([J[J[J[J[J[J[J[J)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([J[J[J[J[J[J[J[J)V not found.");
        return; /* method not found */
    }
    mids[208 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00209", "([J[J[J[J[J[J[J[J[J)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([J[J[J[J[J[J[J[J[J)V not found.");
        return; /* method not found */
    }
    mids[209 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00210", "([J[J[J[J[J[J[J[J[J[J)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([J[J[J[J[J[J[J[J[J[J)V not found.");
        return; /* method not found */
    }
    mids[210 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00211", "([J[J[J[J[J[J[J[J[J[J[J)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([J[J[J[J[J[J[J[J[J[J[J)V not found.");
        return; /* method not found */
    }
    mids[211 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00212", "([J[J[J[J[J[J[J[J[J[J[J[J)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([J[J[J[J[J[J[J[J[J[J[J[J)V not found.");
        return; /* method not found */
    }
    mids[212 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00213", "([J[J[J[J[J[J[J[J[J[J[J[J[J)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([J[J[J[J[J[J[J[J[J[J[J[J[J)V not found.");
        return; /* method not found */
    }
    mids[213 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00214", "([J[J[J[J[J[J[J[J[J[J[J[J[J[J)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([J[J[J[J[J[J[J[J[J[J[J[J[J[J)V not found.");
        return; /* method not found */
    }
    mids[214 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00215", "([J[J[J[J[J[J[J[J[J[J[J[J[J[J[J)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([J[J[J[J[J[J[J[J[J[J[J[J[J[J[J)V not found.");
        return; /* method not found */
    }
    mids[215 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00216", "([J[J[J[J[J[J[J[J[J[J[J[J[J[J[J[J)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([J[J[J[J[J[J[J[J[J[J[J[J[J[J[J[J)V not found.");
        return; /* method not found */
    }
    mids[216 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00217", "([J[J[J[J[J[J[J[J[J[J[J[J[J[J[J[J[J)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([J[J[J[J[J[J[J[J[J[J[J[J[J[J[J[J[J)V not found.");
        return; /* method not found */
    }
    mids[217 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00218", "([J[J[J[J[J[J[J[J[J[J[J[J[J[J[J[J[J[J)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([J[J[J[J[J[J[J[J[J[J[J[J[J[J[J[J[J[J)V not found.");
        return; /* method not found */
    }
    mids[218 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00219", "([J[J[J[J[J[J[J[J[J[J[J[J[J[J[J[J[J[J[J)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([J[J[J[J[J[J[J[J[J[J[J[J[J[J[J[J[J[J[J)V not found.");
        return; /* method not found */
    }
    mids[219 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00220", "([J[J[J[J[J[J[J[J[J[J[J[J[J[J[J[J[J[J[J[J)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([J[J[J[J[J[J[J[J[J[J[J[J[J[J[J[J[J[J[J[J)V not found.");
        return; /* method not found */
    }
    mids[220 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00221", "([I)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([I)V not found.");
        return; /* method not found */
    }
    mids[221 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00222", "([I[I)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([I[I)V not found.");
        return; /* method not found */
    }
    mids[222 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00223", "([I[I[I)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([I[I[I)V not found.");
        return; /* method not found */
    }
    mids[223 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00224", "([I[I[I[I)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([I[I[I[I)V not found.");
        return; /* method not found */
    }
    mids[224 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00225", "([I[I[I[I[I)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([I[I[I[I[I)V not found.");
        return; /* method not found */
    }
    mids[225 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00226", "([I[I[I[I[I[I)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([I[I[I[I[I[I)V not found.");
        return; /* method not found */
    }
    mids[226 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00227", "([I[I[I[I[I[I[I)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([I[I[I[I[I[I[I)V not found.");
        return; /* method not found */
    }
    mids[227 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00228", "([I[I[I[I[I[I[I[I)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([I[I[I[I[I[I[I[I)V not found.");
        return; /* method not found */
    }
    mids[228 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00229", "([I[I[I[I[I[I[I[I[I)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([I[I[I[I[I[I[I[I[I)V not found.");
        return; /* method not found */
    }
    mids[229 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00230", "([I[I[I[I[I[I[I[I[I[I)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([I[I[I[I[I[I[I[I[I[I)V not found.");
        return; /* method not found */
    }
    mids[230 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00231", "([I[I[I[I[I[I[I[I[I[I[I)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([I[I[I[I[I[I[I[I[I[I[I)V not found.");
        return; /* method not found */
    }
    mids[231 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00232", "([I[I[I[I[I[I[I[I[I[I[I[I)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([I[I[I[I[I[I[I[I[I[I[I[I)V not found.");
        return; /* method not found */
    }
    mids[232 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00233", "([I[I[I[I[I[I[I[I[I[I[I[I[I)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([I[I[I[I[I[I[I[I[I[I[I[I[I)V not found.");
        return; /* method not found */
    }
    mids[233 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00234", "([I[I[I[I[I[I[I[I[I[I[I[I[I[I)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([I[I[I[I[I[I[I[I[I[I[I[I[I[I)V not found.");
        return; /* method not found */
    }
    mids[234 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00235", "([I[I[I[I[I[I[I[I[I[I[I[I[I[I[I)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([I[I[I[I[I[I[I[I[I[I[I[I[I[I[I)V not found.");
        return; /* method not found */
    }
    mids[235 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00236", "([I[I[I[I[I[I[I[I[I[I[I[I[I[I[I[I)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([I[I[I[I[I[I[I[I[I[I[I[I[I[I[I[I)V not found.");
        return; /* method not found */
    }
    mids[236 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00237", "([I[I[I[I[I[I[I[I[I[I[I[I[I[I[I[I[I)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([I[I[I[I[I[I[I[I[I[I[I[I[I[I[I[I[I)V not found.");
        return; /* method not found */
    }
    mids[237 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00238", "([I[I[I[I[I[I[I[I[I[I[I[I[I[I[I[I[I[I)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([I[I[I[I[I[I[I[I[I[I[I[I[I[I[I[I[I[I)V not found.");
        return; /* method not found */
    }
    mids[238 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00239", "([I[I[I[I[I[I[I[I[I[I[I[I[I[I[I[I[I[I[I)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([I[I[I[I[I[I[I[I[I[I[I[I[I[I[I[I[I[I[I)V not found.");
        return; /* method not found */
    }
    mids[239 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00240", "([I[I[I[I[I[I[I[I[I[I[I[I[I[I[I[I[I[I[I[I)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([I[I[I[I[I[I[I[I[I[I[I[I[I[I[I[I[I[I[I[I)V not found.");
        return; /* method not found */
    }
    mids[240 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00241", "(S)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(S)V not found.");
        return; /* method not found */
    }
    mids[241 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00242", "(SS)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(SS)V not found.");
        return; /* method not found */
    }
    mids[242 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00243", "(SSS)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(SSS)V not found.");
        return; /* method not found */
    }
    mids[243 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00244", "(SSSS)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(SSSS)V not found.");
        return; /* method not found */
    }
    mids[244 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00245", "(SSSSS)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(SSSSS)V not found.");
        return; /* method not found */
    }
    mids[245 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00246", "(SSSSSS)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(SSSSSS)V not found.");
        return; /* method not found */
    }
    mids[246 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00247", "(SSSSSSS)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(SSSSSSS)V not found.");
        return; /* method not found */
    }
    mids[247 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00248", "(SSSSSSSS)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(SSSSSSSS)V not found.");
        return; /* method not found */
    }
    mids[248 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00249", "(SSSSSSSSS)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(SSSSSSSSS)V not found.");
        return; /* method not found */
    }
    mids[249 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00250", "(SSSSSSSSSS)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(SSSSSSSSSS)V not found.");
        return; /* method not found */
    }
    mids[250 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00251", "(SSSSSSSSSSS)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(SSSSSSSSSSS)V not found.");
        return; /* method not found */
    }
    mids[251 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00252", "(SSSSSSSSSSSS)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(SSSSSSSSSSSS)V not found.");
        return; /* method not found */
    }
    mids[252 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00253", "(SSSSSSSSSSSSS)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(SSSSSSSSSSSSS)V not found.");
        return; /* method not found */
    }
    mids[253 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00254", "(SSSSSSSSSSSSSS)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(SSSSSSSSSSSSSS)V not found.");
        return; /* method not found */
    }
    mids[254 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00255", "(SSSSSSSSSSSSSSS)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(SSSSSSSSSSSSSSS)V not found.");
        return; /* method not found */
    }
    mids[255 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00256", "(SSSSSSSSSSSSSSSS)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(SSSSSSSSSSSSSSSS)V not found.");
        return; /* method not found */
    }
    mids[256 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00257", "(SSSSSSSSSSSSSSSSS)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(SSSSSSSSSSSSSSSSS)V not found.");
        return; /* method not found */
    }
    mids[257 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00258", "(SSSSSSSSSSSSSSSSSS)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(SSSSSSSSSSSSSSSSSS)V not found.");
        return; /* method not found */
    }
    mids[258 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00259", "(SSSSSSSSSSSSSSSSSSS)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(SSSSSSSSSSSSSSSSSSS)V not found.");
        return; /* method not found */
    }
    mids[259 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00260", "(SSSSSSSSSSSSSSSSSSSS)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(SSSSSSSSSSSSSSSSSSSS)V not found.");
        return; /* method not found */
    }
    mids[260 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00261", "([Z)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([Z)V not found.");
        return; /* method not found */
    }
    mids[261 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00262", "([Z[Z)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([Z[Z)V not found.");
        return; /* method not found */
    }
    mids[262 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00263", "([Z[Z[Z)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([Z[Z[Z)V not found.");
        return; /* method not found */
    }
    mids[263 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00264", "([Z[Z[Z[Z)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([Z[Z[Z[Z)V not found.");
        return; /* method not found */
    }
    mids[264 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00265", "([Z[Z[Z[Z[Z)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([Z[Z[Z[Z[Z)V not found.");
        return; /* method not found */
    }
    mids[265 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00266", "([Z[Z[Z[Z[Z[Z)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([Z[Z[Z[Z[Z[Z)V not found.");
        return; /* method not found */
    }
    mids[266 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00267", "([Z[Z[Z[Z[Z[Z[Z)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([Z[Z[Z[Z[Z[Z[Z)V not found.");
        return; /* method not found */
    }
    mids[267 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00268", "([Z[Z[Z[Z[Z[Z[Z[Z)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([Z[Z[Z[Z[Z[Z[Z[Z)V not found.");
        return; /* method not found */
    }
    mids[268 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00269", "([Z[Z[Z[Z[Z[Z[Z[Z[Z)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([Z[Z[Z[Z[Z[Z[Z[Z[Z)V not found.");
        return; /* method not found */
    }
    mids[269 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00270", "([Z[Z[Z[Z[Z[Z[Z[Z[Z[Z)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([Z[Z[Z[Z[Z[Z[Z[Z[Z[Z)V not found.");
        return; /* method not found */
    }
    mids[270 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00271", "([Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z)V not found.");
        return; /* method not found */
    }
    mids[271 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00272", "([Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z)V not found.");
        return; /* method not found */
    }
    mids[272 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00273", "([Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z)V not found.");
        return; /* method not found */
    }
    mids[273 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00274", "([Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z)V not found.");
        return; /* method not found */
    }
    mids[274 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00275", "([Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z)V not found.");
        return; /* method not found */
    }
    mids[275 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00276", "([Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z)V not found.");
        return; /* method not found */
    }
    mids[276 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00277", "([Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z)V not found.");
        return; /* method not found */
    }
    mids[277 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00278", "([Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z)V not found.");
        return; /* method not found */
    }
    mids[278 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00279", "([Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z)V not found.");
        return; /* method not found */
    }
    mids[279 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00280", "([Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z[Z)V not found.");
        return; /* method not found */
    }
    mids[280 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00281", "(Ljava/lang/Throwable;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/Throwable;)V not found.");
        return; /* method not found */
    }
    mids[281 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00282", "(Ljava/lang/Throwable;Ljava/lang/Throwable;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/Throwable;Ljava/lang/Throwable;)V not found.");
        return; /* method not found */
    }
    mids[282 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00283", "(Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;)V not found.");
        return; /* method not found */
    }
    mids[283 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00284", "(Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;)V not found.");
        return; /* method not found */
    }
    mids[284 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00285", "(Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;)V not found.");
        return; /* method not found */
    }
    mids[285 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00286", "(Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;)V not found.");
        return; /* method not found */
    }
    mids[286 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00287", "(Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;)V not found.");
        return; /* method not found */
    }
    mids[287 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00288", "(Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;)V not found.");
        return; /* method not found */
    }
    mids[288 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00289", "(Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;)V not found.");
        return; /* method not found */
    }
    mids[289 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00290", "(Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;)V not found.");
        return; /* method not found */
    }
    mids[290 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00291", "(Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;)V not found.");
        return; /* method not found */
    }
    mids[291 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00292", "(Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;)V not found.");
        return; /* method not found */
    }
    mids[292 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00293", "(Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;)V not found.");
        return; /* method not found */
    }
    mids[293 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00294", "(Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;)V not found.");
        return; /* method not found */
    }
    mids[294 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00295", "(Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;)V not found.");
        return; /* method not found */
    }
    mids[295 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00296", "(Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;)V not found.");
        return; /* method not found */
    }
    mids[296 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00297", "(Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;)V not found.");
        return; /* method not found */
    }
    mids[297 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00298", "(Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;)V not found.");
        return; /* method not found */
    }
    mids[298 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00299", "(Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;)V not found.");
        return; /* method not found */
    }
    mids[299 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00300", "(Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;Ljava/lang/Throwable;)V not found.");
        return; /* method not found */
    }
    mids[300 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00301", "([Ljava/lang/Object;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([Ljava/lang/Object;)V not found.");
        return; /* method not found */
    }
    mids[301 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00302", "([Ljava/lang/Object;[Ljava/lang/Object;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([Ljava/lang/Object;[Ljava/lang/Object;)V not found.");
        return; /* method not found */
    }
    mids[302 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00303", "([Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;)V not found.");
        return; /* method not found */
    }
    mids[303 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00304", "([Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;)V not found.");
        return; /* method not found */
    }
    mids[304 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00305", "([Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;)V not found.");
        return; /* method not found */
    }
    mids[305 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00306", "([Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;)V not found.");
        return; /* method not found */
    }
    mids[306 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00307", "([Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;)V not found.");
        return; /* method not found */
    }
    mids[307 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00308", "([Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;)V not found.");
        return; /* method not found */
    }
    mids[308 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00309", "([Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;)V not found.");
        return; /* method not found */
    }
    mids[309 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00310", "([Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;)V not found.");
        return; /* method not found */
    }
    mids[310 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00311", "([Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;)V not found.");
        return; /* method not found */
    }
    mids[311 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00312", "([Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;)V not found.");
        return; /* method not found */
    }
    mids[312 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00313", "([Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;)V not found.");
        return; /* method not found */
    }
    mids[313 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00314", "([Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;)V not found.");
        return; /* method not found */
    }
    mids[314 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00315", "([Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;)V not found.");
        return; /* method not found */
    }
    mids[315 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00316", "([Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;)V not found.");
        return; /* method not found */
    }
    mids[316 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00317", "([Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;)V not found.");
        return; /* method not found */
    }
    mids[317 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00318", "([Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;)V not found.");
        return; /* method not found */
    }
    mids[318 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00319", "([Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;)V not found.");
        return; /* method not found */
    }
    mids[319 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00320", "([Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Object;)V not found.");
        return; /* method not found */
    }
    mids[320 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00321", "([B)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([B)V not found.");
        return; /* method not found */
    }
    mids[321 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00322", "([B[B)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([B[B)V not found.");
        return; /* method not found */
    }
    mids[322 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00323", "([B[B[B)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([B[B[B)V not found.");
        return; /* method not found */
    }
    mids[323 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00324", "([B[B[B[B)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([B[B[B[B)V not found.");
        return; /* method not found */
    }
    mids[324 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00325", "([B[B[B[B[B)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([B[B[B[B[B)V not found.");
        return; /* method not found */
    }
    mids[325 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00326", "([B[B[B[B[B[B)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([B[B[B[B[B[B)V not found.");
        return; /* method not found */
    }
    mids[326 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00327", "([B[B[B[B[B[B[B)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([B[B[B[B[B[B[B)V not found.");
        return; /* method not found */
    }
    mids[327 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00328", "([B[B[B[B[B[B[B[B)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([B[B[B[B[B[B[B[B)V not found.");
        return; /* method not found */
    }
    mids[328 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00329", "([B[B[B[B[B[B[B[B[B)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([B[B[B[B[B[B[B[B[B)V not found.");
        return; /* method not found */
    }
    mids[329 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00330", "([B[B[B[B[B[B[B[B[B[B)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([B[B[B[B[B[B[B[B[B[B)V not found.");
        return; /* method not found */
    }
    mids[330 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00331", "([B[B[B[B[B[B[B[B[B[B[B)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([B[B[B[B[B[B[B[B[B[B[B)V not found.");
        return; /* method not found */
    }
    mids[331 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00332", "([B[B[B[B[B[B[B[B[B[B[B[B)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([B[B[B[B[B[B[B[B[B[B[B[B)V not found.");
        return; /* method not found */
    }
    mids[332 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00333", "([B[B[B[B[B[B[B[B[B[B[B[B[B)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([B[B[B[B[B[B[B[B[B[B[B[B[B)V not found.");
        return; /* method not found */
    }
    mids[333 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00334", "([B[B[B[B[B[B[B[B[B[B[B[B[B[B)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([B[B[B[B[B[B[B[B[B[B[B[B[B[B)V not found.");
        return; /* method not found */
    }
    mids[334 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00335", "([B[B[B[B[B[B[B[B[B[B[B[B[B[B[B)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([B[B[B[B[B[B[B[B[B[B[B[B[B[B[B)V not found.");
        return; /* method not found */
    }
    mids[335 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00336", "([B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B)V not found.");
        return; /* method not found */
    }
    mids[336 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00337", "([B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B)V not found.");
        return; /* method not found */
    }
    mids[337 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00338", "([B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B)V not found.");
        return; /* method not found */
    }
    mids[338 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00339", "([B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B)V not found.");
        return; /* method not found */
    }
    mids[339 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00340", "([B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B)V not found.");
        return; /* method not found */
    }
    mids[340 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00341", "(B)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(B)V not found.");
        return; /* method not found */
    }
    mids[341 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00342", "(BB)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(BB)V not found.");
        return; /* method not found */
    }
    mids[342 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00343", "(BBB)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(BBB)V not found.");
        return; /* method not found */
    }
    mids[343 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00344", "(BBBB)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(BBBB)V not found.");
        return; /* method not found */
    }
    mids[344 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00345", "(BBBBB)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(BBBBB)V not found.");
        return; /* method not found */
    }
    mids[345 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00346", "(BBBBBB)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(BBBBBB)V not found.");
        return; /* method not found */
    }
    mids[346 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00347", "(BBBBBBB)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(BBBBBBB)V not found.");
        return; /* method not found */
    }
    mids[347 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00348", "(BBBBBBBB)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(BBBBBBBB)V not found.");
        return; /* method not found */
    }
    mids[348 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00349", "(BBBBBBBBB)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(BBBBBBBBB)V not found.");
        return; /* method not found */
    }
    mids[349 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00350", "(BBBBBBBBBB)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(BBBBBBBBBB)V not found.");
        return; /* method not found */
    }
    mids[350 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00351", "(BBBBBBBBBBB)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(BBBBBBBBBBB)V not found.");
        return; /* method not found */
    }
    mids[351 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00352", "(BBBBBBBBBBBB)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(BBBBBBBBBBBB)V not found.");
        return; /* method not found */
    }
    mids[352 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00353", "(BBBBBBBBBBBBB)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(BBBBBBBBBBBBB)V not found.");
        return; /* method not found */
    }
    mids[353 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00354", "(BBBBBBBBBBBBBB)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(BBBBBBBBBBBBBB)V not found.");
        return; /* method not found */
    }
    mids[354 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00355", "(BBBBBBBBBBBBBBB)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(BBBBBBBBBBBBBBB)V not found.");
        return; /* method not found */
    }
    mids[355 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00356", "(BBBBBBBBBBBBBBBB)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(BBBBBBBBBBBBBBBB)V not found.");
        return; /* method not found */
    }
    mids[356 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00357", "(BBBBBBBBBBBBBBBBB)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(BBBBBBBBBBBBBBBBB)V not found.");
        return; /* method not found */
    }
    mids[357 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00358", "(BBBBBBBBBBBBBBBBBB)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(BBBBBBBBBBBBBBBBBB)V not found.");
        return; /* method not found */
    }
    mids[358 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00359", "(BBBBBBBBBBBBBBBBBBB)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(BBBBBBBBBBBBBBBBBBB)V not found.");
        return; /* method not found */
    }
    mids[359 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00360", "(BBBBBBBBBBBBBBBBBBBB)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(BBBBBBBBBBBBBBBBBBBB)V not found.");
        return; /* method not found */
    }
    mids[360 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00361", "([S)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([S)V not found.");
        return; /* method not found */
    }
    mids[361 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00362", "([S[S)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([S[S)V not found.");
        return; /* method not found */
    }
    mids[362 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00363", "([S[S[S)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([S[S[S)V not found.");
        return; /* method not found */
    }
    mids[363 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00364", "([S[S[S[S)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([S[S[S[S)V not found.");
        return; /* method not found */
    }
    mids[364 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00365", "([S[S[S[S[S)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([S[S[S[S[S)V not found.");
        return; /* method not found */
    }
    mids[365 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00366", "([S[S[S[S[S[S)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([S[S[S[S[S[S)V not found.");
        return; /* method not found */
    }
    mids[366 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00367", "([S[S[S[S[S[S[S)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([S[S[S[S[S[S[S)V not found.");
        return; /* method not found */
    }
    mids[367 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00368", "([S[S[S[S[S[S[S[S)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([S[S[S[S[S[S[S[S)V not found.");
        return; /* method not found */
    }
    mids[368 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00369", "([S[S[S[S[S[S[S[S[S)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([S[S[S[S[S[S[S[S[S)V not found.");
        return; /* method not found */
    }
    mids[369 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00370", "([S[S[S[S[S[S[S[S[S[S)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([S[S[S[S[S[S[S[S[S[S)V not found.");
        return; /* method not found */
    }
    mids[370 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00371", "([S[S[S[S[S[S[S[S[S[S[S)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([S[S[S[S[S[S[S[S[S[S[S)V not found.");
        return; /* method not found */
    }
    mids[371 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00372", "([S[S[S[S[S[S[S[S[S[S[S[S)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([S[S[S[S[S[S[S[S[S[S[S[S)V not found.");
        return; /* method not found */
    }
    mids[372 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00373", "([S[S[S[S[S[S[S[S[S[S[S[S[S)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([S[S[S[S[S[S[S[S[S[S[S[S[S)V not found.");
        return; /* method not found */
    }
    mids[373 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00374", "([S[S[S[S[S[S[S[S[S[S[S[S[S[S)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([S[S[S[S[S[S[S[S[S[S[S[S[S[S)V not found.");
        return; /* method not found */
    }
    mids[374 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00375", "([S[S[S[S[S[S[S[S[S[S[S[S[S[S[S)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([S[S[S[S[S[S[S[S[S[S[S[S[S[S[S)V not found.");
        return; /* method not found */
    }
    mids[375 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00376", "([S[S[S[S[S[S[S[S[S[S[S[S[S[S[S[S)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([S[S[S[S[S[S[S[S[S[S[S[S[S[S[S[S)V not found.");
        return; /* method not found */
    }
    mids[376 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00377", "([S[S[S[S[S[S[S[S[S[S[S[S[S[S[S[S[S)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([S[S[S[S[S[S[S[S[S[S[S[S[S[S[S[S[S)V not found.");
        return; /* method not found */
    }
    mids[377 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00378", "([S[S[S[S[S[S[S[S[S[S[S[S[S[S[S[S[S[S)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([S[S[S[S[S[S[S[S[S[S[S[S[S[S[S[S[S[S)V not found.");
        return; /* method not found */
    }
    mids[378 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00379", "([S[S[S[S[S[S[S[S[S[S[S[S[S[S[S[S[S[S[S)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([S[S[S[S[S[S[S[S[S[S[S[S[S[S[S[S[S[S[S)V not found.");
        return; /* method not found */
    }
    mids[379 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00380", "([S[S[S[S[S[S[S[S[S[S[S[S[S[S[S[S[S[S[S[S)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([S[S[S[S[S[S[S[S[S[S[S[S[S[S[S[S[S[S[S[S)V not found.");
        return; /* method not found */
    }
    mids[380 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00381", "(Ljava/lang/Class;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/Class;)V not found.");
        return; /* method not found */
    }
    mids[381 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00382", "(Ljava/lang/Class;Ljava/lang/Class;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/Class;Ljava/lang/Class;)V not found.");
        return; /* method not found */
    }
    mids[382 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00383", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;)V not found.");
        return; /* method not found */
    }
    mids[383 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00384", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;)V not found.");
        return; /* method not found */
    }
    mids[384 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00385", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;)V not found.");
        return; /* method not found */
    }
    mids[385 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00386", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;)V not found.");
        return; /* method not found */
    }
    mids[386 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00387", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;)V not found.");
        return; /* method not found */
    }
    mids[387 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00388", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;)V not found.");
        return; /* method not found */
    }
    mids[388 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00389", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;)V not found.");
        return; /* method not found */
    }
    mids[389 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00390", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;)V not found.");
        return; /* method not found */
    }
    mids[390 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00391", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;)V not found.");
        return; /* method not found */
    }
    mids[391 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00392", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;)V not found.");
        return; /* method not found */
    }
    mids[392 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00393", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;)V not found.");
        return; /* method not found */
    }
    mids[393 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00394", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;)V not found.");
        return; /* method not found */
    }
    mids[394 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00395", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;)V not found.");
        return; /* method not found */
    }
    mids[395 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00396", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;)V not found.");
        return; /* method not found */
    }
    mids[396 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00397", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;)V not found.");
        return; /* method not found */
    }
    mids[397 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00398", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;)V not found.");
        return; /* method not found */
    }
    mids[398 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00399", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;)V not found.");
        return; /* method not found */
    }
    mids[399 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00400", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;)V not found.");
        return; /* method not found */
    }
    mids[400 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00401", "([D)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([D)V not found.");
        return; /* method not found */
    }
    mids[401 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00402", "([D[D)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([D[D)V not found.");
        return; /* method not found */
    }
    mids[402 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00403", "([D[D[D)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([D[D[D)V not found.");
        return; /* method not found */
    }
    mids[403 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00404", "([D[D[D[D)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([D[D[D[D)V not found.");
        return; /* method not found */
    }
    mids[404 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00405", "([D[D[D[D[D)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([D[D[D[D[D)V not found.");
        return; /* method not found */
    }
    mids[405 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00406", "([D[D[D[D[D[D)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([D[D[D[D[D[D)V not found.");
        return; /* method not found */
    }
    mids[406 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00407", "([D[D[D[D[D[D[D)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([D[D[D[D[D[D[D)V not found.");
        return; /* method not found */
    }
    mids[407 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00408", "([D[D[D[D[D[D[D[D)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([D[D[D[D[D[D[D[D)V not found.");
        return; /* method not found */
    }
    mids[408 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00409", "([D[D[D[D[D[D[D[D[D)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([D[D[D[D[D[D[D[D[D)V not found.");
        return; /* method not found */
    }
    mids[409 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00410", "([D[D[D[D[D[D[D[D[D[D)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([D[D[D[D[D[D[D[D[D[D)V not found.");
        return; /* method not found */
    }
    mids[410 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00411", "([D[D[D[D[D[D[D[D[D[D[D)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([D[D[D[D[D[D[D[D[D[D[D)V not found.");
        return; /* method not found */
    }
    mids[411 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00412", "([D[D[D[D[D[D[D[D[D[D[D[D)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([D[D[D[D[D[D[D[D[D[D[D[D)V not found.");
        return; /* method not found */
    }
    mids[412 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00413", "([D[D[D[D[D[D[D[D[D[D[D[D[D)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([D[D[D[D[D[D[D[D[D[D[D[D[D)V not found.");
        return; /* method not found */
    }
    mids[413 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00414", "([D[D[D[D[D[D[D[D[D[D[D[D[D[D)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([D[D[D[D[D[D[D[D[D[D[D[D[D[D)V not found.");
        return; /* method not found */
    }
    mids[414 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00415", "([D[D[D[D[D[D[D[D[D[D[D[D[D[D[D)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([D[D[D[D[D[D[D[D[D[D[D[D[D[D[D)V not found.");
        return; /* method not found */
    }
    mids[415 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00416", "([D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D)V not found.");
        return; /* method not found */
    }
    mids[416 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00417", "([D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D)V not found.");
        return; /* method not found */
    }
    mids[417 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00418", "([D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D)V not found.");
        return; /* method not found */
    }
    mids[418 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00419", "([D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D)V not found.");
        return; /* method not found */
    }
    mids[419 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00420", "([D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "([D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D)V not found.");
        return; /* method not found */
    }
    mids[420 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00421", "(Ljava/lang/String;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/String;)V not found.");
        return; /* method not found */
    }
    mids[421 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00422", "(Ljava/lang/String;[C)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/String;[C)V not found.");
        return; /* method not found */
    }
    mids[422 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00423", "(Ljava/lang/String;[CC)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/String;[CC)V not found.");
        return; /* method not found */
    }
    mids[423 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00424", "(Ljava/lang/String;[CCZ)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/String;[CCZ)V not found.");
        return; /* method not found */
    }
    mids[424 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00425", "(Ljava/lang/String;[CCZD)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/String;[CCZD)V not found.");
        return; /* method not found */
    }
    mids[425 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00426", "(Ljava/lang/String;[CCZDF)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/String;[CCZDF)V not found.");
        return; /* method not found */
    }
    mids[426 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00427", "(Ljava/lang/String;[CCZDFI)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/String;[CCZDFI)V not found.");
        return; /* method not found */
    }
    mids[427 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00428", "(Ljava/lang/String;[CCZDFI[F)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/String;[CCZDFI[F)V not found.");
        return; /* method not found */
    }
    mids[428 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00429", "(Ljava/lang/String;[CCZDFI[FJ)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/String;[CCZDFI[FJ)V not found.");
        return; /* method not found */
    }
    mids[429 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00430", "(Ljava/lang/String;[CCZDFI[FJLjava/lang/Object;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/String;[CCZDFI[FJLjava/lang/Object;)V not found.");
        return; /* method not found */
    }
    mids[430 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00431", "(Ljava/lang/String;[CCZDFI[FJLjava/lang/Object;[J)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/String;[CCZDFI[FJLjava/lang/Object;[J)V not found.");
        return; /* method not found */
    }
    mids[431 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00432", "(Ljava/lang/String;[CCZDFI[FJLjava/lang/Object;[J[I)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/String;[CCZDFI[FJLjava/lang/Object;[J[I)V not found.");
        return; /* method not found */
    }
    mids[432 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00433", "(Ljava/lang/String;[CCZDFI[FJLjava/lang/Object;[J[IS)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/String;[CCZDFI[FJLjava/lang/Object;[J[IS)V not found.");
        return; /* method not found */
    }
    mids[433 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00434", "(Ljava/lang/String;[CCZDFI[FJLjava/lang/Object;[J[IS[Z)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/String;[CCZDFI[FJLjava/lang/Object;[J[IS[Z)V not found.");
        return; /* method not found */
    }
    mids[434 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00435", "(Ljava/lang/String;[CCZDFI[FJLjava/lang/Object;[J[IS[ZLjava/lang/Throwable;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/String;[CCZDFI[FJLjava/lang/Object;[J[IS[ZLjava/lang/Throwable;)V not found.");
        return; /* method not found */
    }
    mids[435 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00436", "(Ljava/lang/String;[CCZDFI[FJLjava/lang/Object;[J[IS[ZLjava/lang/Throwable;[Ljava/lang/Object;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/String;[CCZDFI[FJLjava/lang/Object;[J[IS[ZLjava/lang/Throwable;[Ljava/lang/Object;)V not found.");
        return; /* method not found */
    }
    mids[436 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00437", "(Ljava/lang/String;[CCZDFI[FJLjava/lang/Object;[J[IS[ZLjava/lang/Throwable;[Ljava/lang/Object;[B)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/String;[CCZDFI[FJLjava/lang/Object;[J[IS[ZLjava/lang/Throwable;[Ljava/lang/Object;[B)V not found.");
        return; /* method not found */
    }
    mids[437 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00438", "(Ljava/lang/String;[CCZDFI[FJLjava/lang/Object;[J[IS[ZLjava/lang/Throwable;[Ljava/lang/Object;[BB)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/String;[CCZDFI[FJLjava/lang/Object;[J[IS[ZLjava/lang/Throwable;[Ljava/lang/Object;[BB)V not found.");
        return; /* method not found */
    }
    mids[438 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00439", "(Ljava/lang/String;[CCZDFI[FJLjava/lang/Object;[J[IS[ZLjava/lang/Throwable;[Ljava/lang/Object;[BB[S)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/String;[CCZDFI[FJLjava/lang/Object;[J[IS[ZLjava/lang/Throwable;[Ljava/lang/Object;[BB[S)V not found.");
        return; /* method not found */
    }
    mids[439 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00440", "(Ljava/lang/String;[CCZDFI[FJLjava/lang/Object;[J[IS[ZLjava/lang/Throwable;[Ljava/lang/Object;[BB[SLjava/lang/Class;)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/String;[CCZDFI[FJLjava/lang/Object;[J[IS[ZLjava/lang/Throwable;[Ljava/lang/Object;[BB[SLjava/lang/Class;)V not found.");
        return; /* method not found */
    }
    mids[440 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00441", "(Ljava/lang/String;[CCZDFI[FJLjava/lang/Object;[J[IS[ZLjava/lang/Throwable;[Ljava/lang/Object;[BB[SLjava/lang/Class;[D)V");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(Ljava/lang/String;[CCZDFI[FJLjava/lang/Object;[J[IS[ZLjava/lang/Throwable;[Ljava/lang/Object;[BB[SLjava/lang/Class;[D)V not found.");
        return; /* method not found */
    }
    mids[441 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00442", "(I)I");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(I)I not found.");
        return; /* method not found */
    }
    mids[442 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00443", "(I)I");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(I)I not found.");
        return; /* method not found */
    }
    mids[443 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00444", "(I)I");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(I)I not found.");
        return; /* method not found */
    }
    mids[444 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00445", "(I)I");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(I)I not found.");
        return; /* method not found */
    }
    mids[445 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00446", "(I)I");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(I)I not found.");
        return; /* method not found */
    }
    mids[446 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00447", "(I)I");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(I)I not found.");
        return; /* method not found */
    }
    mids[447 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00448", "(I)Ljava/lang/String;");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(I)Ljava/lang/String; not found.");
        return; /* method not found */
    }
    mids[448 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00449", "(I)[C");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(I)[C not found.");
        return; /* method not found */
    }
    mids[449 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00450", "(I)C");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(I)C not found.");
        return; /* method not found */
    }
    mids[450 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00451", "(I)Z");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(I)Z not found.");
        return; /* method not found */
    }
    mids[451 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00452", "(I)D");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(I)D not found.");
        return; /* method not found */
    }
    mids[452 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00453", "(I)F");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(I)F not found.");
        return; /* method not found */
    }
    mids[453 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00454", "(I)I");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(I)I not found.");
        return; /* method not found */
    }
    mids[454 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00455", "(I)[F");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(I)[F not found.");
        return; /* method not found */
    }
    mids[455 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00456", "(I)J");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(I)J not found.");
        return; /* method not found */
    }
    mids[456 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00457", "(I)Ljava/lang/Object;");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(I)Ljava/lang/Object; not found.");
        return; /* method not found */
    }
    mids[457 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00458", "(I)[J");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(I)[J not found.");
        return; /* method not found */
    }
    mids[458 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00459", "(I)[I");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(I)[I not found.");
        return; /* method not found */
    }
    mids[459 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00460", "(I)S");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(I)S not found.");
        return; /* method not found */
    }
    mids[460 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00461", "(I)[Z");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(I)[Z not found.");
        return; /* method not found */
    }
    mids[461 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00462", "(I)Ljava/lang/Throwable;");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(I)Ljava/lang/Throwable; not found.");
        return; /* method not found */
    }
    mids[462 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00463", "(I)[Ljava/lang/Object;");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(I)[Ljava/lang/Object; not found.");
        return; /* method not found */
    }
    mids[463 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00464", "(I)[B");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(I)[B not found.");
        return; /* method not found */
    }
    mids[464 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00465", "(I)B");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(I)B not found.");
        return; /* method not found */
    }
    mids[465 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00466", "(I)[S");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(I)[S not found.");
        return; /* method not found */
    }
    mids[466 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00467", "(I)Ljava/lang/Class;");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(I)Ljava/lang/Class; not found.");
        return; /* method not found */
    }
    mids[467 - 1] = mid;


    mid = (*env)->GetMethodID(env, java_counterparts_class, "JavaCounterparts.benchmark00468", "(I)[D");
    if (mid == NULL) {
        __android_log_write(ANDROID_LOG_VERBOSE, "nativemethod", "(I)[D not found.");
        return; /* method not found */
    }
    mids[468 - 1] = mid;


}

JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_BenchmarkRegistry_initNative
(JNIEnv *env, jclass cls, jlong reps, jclass javaCounterparts) {
    repetitions = reps;
    java_counterparts_class = javaCounterparts;
    init_methodids(env);
}




JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00001_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[1 - 1];

    jstring S1;
    S1 = jstringValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, S1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00001_run
(JNIEnv *env, jobject instance) {
    jstring S1;
    S1 = jstringValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00001_nativemethod (env, instance, S1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00002_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[2 - 1];

    jstring S1; jstring S2;
    S1 = jstringValue; S2 = jstringValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, S1, S2);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00002_run
(JNIEnv *env, jobject instance) {
    jstring S1; jstring S2;
    S1 = jstringValue; S2 = jstringValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00002_nativemethod (env, instance, S1, S2);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00003_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[3 - 1];

    jstring S1; jstring S2; jstring S3;
    S1 = jstringValue; S2 = jstringValue; S3 = jstringValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, S1, S2, S3);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00003_run
(JNIEnv *env, jobject instance) {
    jstring S1; jstring S2; jstring S3;
    S1 = jstringValue; S2 = jstringValue; S3 = jstringValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00003_nativemethod (env, instance, S1, S2, S3);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00004_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[4 - 1];

    jstring S1; jstring S2; jstring S3; jstring S4;
    S1 = jstringValue; S2 = jstringValue; S3 = jstringValue; S4 = jstringValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, S1, S2, S3, S4);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00004_run
(JNIEnv *env, jobject instance) {
    jstring S1; jstring S2; jstring S3; jstring S4;
    S1 = jstringValue; S2 = jstringValue; S3 = jstringValue; S4 = jstringValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00004_nativemethod (env, instance, S1, S2, S3, S4);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00005_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[5 - 1];

    jstring S1; jstring S2; jstring S3; jstring S4; jstring S5;
    S1 = jstringValue; S2 = jstringValue; S3 = jstringValue; S4 = jstringValue; S5 = jstringValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, S1, S2, S3, S4, S5);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00005_run
(JNIEnv *env, jobject instance) {
    jstring S1; jstring S2; jstring S3; jstring S4; jstring S5;
    S1 = jstringValue; S2 = jstringValue; S3 = jstringValue; S4 = jstringValue; S5 = jstringValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00005_nativemethod (env, instance, S1, S2, S3, S4, S5);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00006_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[6 - 1];

    jstring S1; jstring S2; jstring S3; jstring S4; jstring S5; jstring S6;
    S1 = jstringValue; S2 = jstringValue; S3 = jstringValue; S4 = jstringValue; S5 = jstringValue; S6 = jstringValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, S1, S2, S3, S4, S5, S6);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00006_run
(JNIEnv *env, jobject instance) {
    jstring S1; jstring S2; jstring S3; jstring S4; jstring S5; jstring S6;
    S1 = jstringValue; S2 = jstringValue; S3 = jstringValue; S4 = jstringValue; S5 = jstringValue; S6 = jstringValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00006_nativemethod (env, instance, S1, S2, S3, S4, S5, S6);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00007_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[7 - 1];

    jstring S1; jstring S2; jstring S3; jstring S4; jstring S5; jstring S6; jstring S7;
    S1 = jstringValue; S2 = jstringValue; S3 = jstringValue; S4 = jstringValue; S5 = jstringValue; S6 = jstringValue; S7 = jstringValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, S1, S2, S3, S4, S5, S6, S7);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00007_run
(JNIEnv *env, jobject instance) {
    jstring S1; jstring S2; jstring S3; jstring S4; jstring S5; jstring S6; jstring S7;
    S1 = jstringValue; S2 = jstringValue; S3 = jstringValue; S4 = jstringValue; S5 = jstringValue; S6 = jstringValue; S7 = jstringValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00007_nativemethod (env, instance, S1, S2, S3, S4, S5, S6, S7);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00008_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[8 - 1];

    jstring S1; jstring S2; jstring S3; jstring S4; jstring S5; jstring S6; jstring S7; jstring S8;
    S1 = jstringValue; S2 = jstringValue; S3 = jstringValue; S4 = jstringValue; S5 = jstringValue; S6 = jstringValue; S7 = jstringValue; S8 = jstringValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, S1, S2, S3, S4, S5, S6, S7, S8);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00008_run
(JNIEnv *env, jobject instance) {
    jstring S1; jstring S2; jstring S3; jstring S4; jstring S5; jstring S6; jstring S7; jstring S8;
    S1 = jstringValue; S2 = jstringValue; S3 = jstringValue; S4 = jstringValue; S5 = jstringValue; S6 = jstringValue; S7 = jstringValue; S8 = jstringValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00008_nativemethod (env, instance, S1, S2, S3, S4, S5, S6, S7, S8);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00009_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[9 - 1];

    jstring S1; jstring S2; jstring S3; jstring S4; jstring S5; jstring S6; jstring S7; jstring S8; jstring S9;
    S1 = jstringValue; S2 = jstringValue; S3 = jstringValue; S4 = jstringValue; S5 = jstringValue; S6 = jstringValue; S7 = jstringValue; S8 = jstringValue; S9 = jstringValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, S1, S2, S3, S4, S5, S6, S7, S8, S9);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00009_run
(JNIEnv *env, jobject instance) {
    jstring S1; jstring S2; jstring S3; jstring S4; jstring S5; jstring S6; jstring S7; jstring S8; jstring S9;
    S1 = jstringValue; S2 = jstringValue; S3 = jstringValue; S4 = jstringValue; S5 = jstringValue; S6 = jstringValue; S7 = jstringValue; S8 = jstringValue; S9 = jstringValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00009_nativemethod (env, instance, S1, S2, S3, S4, S5, S6, S7, S8, S9);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00010_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[10 - 1];

    jstring S1; jstring S2; jstring S3; jstring S4; jstring S5; jstring S6; jstring S7; jstring S8; jstring S9; jstring S10;
    S1 = jstringValue; S2 = jstringValue; S3 = jstringValue; S4 = jstringValue; S5 = jstringValue; S6 = jstringValue; S7 = jstringValue; S8 = jstringValue; S9 = jstringValue; S10 = jstringValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, S1, S2, S3, S4, S5, S6, S7, S8, S9, S10);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00010_run
(JNIEnv *env, jobject instance) {
    jstring S1; jstring S2; jstring S3; jstring S4; jstring S5; jstring S6; jstring S7; jstring S8; jstring S9; jstring S10;
    S1 = jstringValue; S2 = jstringValue; S3 = jstringValue; S4 = jstringValue; S5 = jstringValue; S6 = jstringValue; S7 = jstringValue; S8 = jstringValue; S9 = jstringValue; S10 = jstringValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00010_nativemethod (env, instance, S1, S2, S3, S4, S5, S6, S7, S8, S9, S10);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00011_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[11 - 1];

    jstring S1; jstring S2; jstring S3; jstring S4; jstring S5; jstring S6; jstring S7; jstring S8; jstring S9; jstring S10; jstring S11;
    S1 = jstringValue; S2 = jstringValue; S3 = jstringValue; S4 = jstringValue; S5 = jstringValue; S6 = jstringValue; S7 = jstringValue; S8 = jstringValue; S9 = jstringValue; S10 = jstringValue; S11 = jstringValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, S1, S2, S3, S4, S5, S6, S7, S8, S9, S10, S11);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00011_run
(JNIEnv *env, jobject instance) {
    jstring S1; jstring S2; jstring S3; jstring S4; jstring S5; jstring S6; jstring S7; jstring S8; jstring S9; jstring S10; jstring S11;
    S1 = jstringValue; S2 = jstringValue; S3 = jstringValue; S4 = jstringValue; S5 = jstringValue; S6 = jstringValue; S7 = jstringValue; S8 = jstringValue; S9 = jstringValue; S10 = jstringValue; S11 = jstringValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00011_nativemethod (env, instance, S1, S2, S3, S4, S5, S6, S7, S8, S9, S10, S11);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00012_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[12 - 1];

    jstring S1; jstring S2; jstring S3; jstring S4; jstring S5; jstring S6; jstring S7; jstring S8; jstring S9; jstring S10; jstring S11; jstring S12;
    S1 = jstringValue; S2 = jstringValue; S3 = jstringValue; S4 = jstringValue; S5 = jstringValue; S6 = jstringValue; S7 = jstringValue; S8 = jstringValue; S9 = jstringValue; S10 = jstringValue; S11 = jstringValue; S12 = jstringValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, S1, S2, S3, S4, S5, S6, S7, S8, S9, S10, S11, S12);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00012_run
(JNIEnv *env, jobject instance) {
    jstring S1; jstring S2; jstring S3; jstring S4; jstring S5; jstring S6; jstring S7; jstring S8; jstring S9; jstring S10; jstring S11; jstring S12;
    S1 = jstringValue; S2 = jstringValue; S3 = jstringValue; S4 = jstringValue; S5 = jstringValue; S6 = jstringValue; S7 = jstringValue; S8 = jstringValue; S9 = jstringValue; S10 = jstringValue; S11 = jstringValue; S12 = jstringValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00012_nativemethod (env, instance, S1, S2, S3, S4, S5, S6, S7, S8, S9, S10, S11, S12);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00013_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[13 - 1];

    jstring S1; jstring S2; jstring S3; jstring S4; jstring S5; jstring S6; jstring S7; jstring S8; jstring S9; jstring S10; jstring S11; jstring S12; jstring S13;
    S1 = jstringValue; S2 = jstringValue; S3 = jstringValue; S4 = jstringValue; S5 = jstringValue; S6 = jstringValue; S7 = jstringValue; S8 = jstringValue; S9 = jstringValue; S10 = jstringValue; S11 = jstringValue; S12 = jstringValue; S13 = jstringValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, S1, S2, S3, S4, S5, S6, S7, S8, S9, S10, S11, S12, S13);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00013_run
(JNIEnv *env, jobject instance) {
    jstring S1; jstring S2; jstring S3; jstring S4; jstring S5; jstring S6; jstring S7; jstring S8; jstring S9; jstring S10; jstring S11; jstring S12; jstring S13;
    S1 = jstringValue; S2 = jstringValue; S3 = jstringValue; S4 = jstringValue; S5 = jstringValue; S6 = jstringValue; S7 = jstringValue; S8 = jstringValue; S9 = jstringValue; S10 = jstringValue; S11 = jstringValue; S12 = jstringValue; S13 = jstringValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00013_nativemethod (env, instance, S1, S2, S3, S4, S5, S6, S7, S8, S9, S10, S11, S12, S13);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00014_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[14 - 1];

    jstring S1; jstring S2; jstring S3; jstring S4; jstring S5; jstring S6; jstring S7; jstring S8; jstring S9; jstring S10; jstring S11; jstring S12; jstring S13; jstring S14;
    S1 = jstringValue; S2 = jstringValue; S3 = jstringValue; S4 = jstringValue; S5 = jstringValue; S6 = jstringValue; S7 = jstringValue; S8 = jstringValue; S9 = jstringValue; S10 = jstringValue; S11 = jstringValue; S12 = jstringValue; S13 = jstringValue; S14 = jstringValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, S1, S2, S3, S4, S5, S6, S7, S8, S9, S10, S11, S12, S13, S14);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00014_run
(JNIEnv *env, jobject instance) {
    jstring S1; jstring S2; jstring S3; jstring S4; jstring S5; jstring S6; jstring S7; jstring S8; jstring S9; jstring S10; jstring S11; jstring S12; jstring S13; jstring S14;
    S1 = jstringValue; S2 = jstringValue; S3 = jstringValue; S4 = jstringValue; S5 = jstringValue; S6 = jstringValue; S7 = jstringValue; S8 = jstringValue; S9 = jstringValue; S10 = jstringValue; S11 = jstringValue; S12 = jstringValue; S13 = jstringValue; S14 = jstringValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00014_nativemethod (env, instance, S1, S2, S3, S4, S5, S6, S7, S8, S9, S10, S11, S12, S13, S14);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00015_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[15 - 1];

    jstring S1; jstring S2; jstring S3; jstring S4; jstring S5; jstring S6; jstring S7; jstring S8; jstring S9; jstring S10; jstring S11; jstring S12; jstring S13; jstring S14; jstring S15;
    S1 = jstringValue; S2 = jstringValue; S3 = jstringValue; S4 = jstringValue; S5 = jstringValue; S6 = jstringValue; S7 = jstringValue; S8 = jstringValue; S9 = jstringValue; S10 = jstringValue; S11 = jstringValue; S12 = jstringValue; S13 = jstringValue; S14 = jstringValue; S15 = jstringValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, S1, S2, S3, S4, S5, S6, S7, S8, S9, S10, S11, S12, S13, S14, S15);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00015_run
(JNIEnv *env, jobject instance) {
    jstring S1; jstring S2; jstring S3; jstring S4; jstring S5; jstring S6; jstring S7; jstring S8; jstring S9; jstring S10; jstring S11; jstring S12; jstring S13; jstring S14; jstring S15;
    S1 = jstringValue; S2 = jstringValue; S3 = jstringValue; S4 = jstringValue; S5 = jstringValue; S6 = jstringValue; S7 = jstringValue; S8 = jstringValue; S9 = jstringValue; S10 = jstringValue; S11 = jstringValue; S12 = jstringValue; S13 = jstringValue; S14 = jstringValue; S15 = jstringValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00015_nativemethod (env, instance, S1, S2, S3, S4, S5, S6, S7, S8, S9, S10, S11, S12, S13, S14, S15);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00016_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[16 - 1];

    jstring S1; jstring S2; jstring S3; jstring S4; jstring S5; jstring S6; jstring S7; jstring S8; jstring S9; jstring S10; jstring S11; jstring S12; jstring S13; jstring S14; jstring S15; jstring S16;
    S1 = jstringValue; S2 = jstringValue; S3 = jstringValue; S4 = jstringValue; S5 = jstringValue; S6 = jstringValue; S7 = jstringValue; S8 = jstringValue; S9 = jstringValue; S10 = jstringValue; S11 = jstringValue; S12 = jstringValue; S13 = jstringValue; S14 = jstringValue; S15 = jstringValue; S16 = jstringValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, S1, S2, S3, S4, S5, S6, S7, S8, S9, S10, S11, S12, S13, S14, S15, S16);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00016_run
(JNIEnv *env, jobject instance) {
    jstring S1; jstring S2; jstring S3; jstring S4; jstring S5; jstring S6; jstring S7; jstring S8; jstring S9; jstring S10; jstring S11; jstring S12; jstring S13; jstring S14; jstring S15; jstring S16;
    S1 = jstringValue; S2 = jstringValue; S3 = jstringValue; S4 = jstringValue; S5 = jstringValue; S6 = jstringValue; S7 = jstringValue; S8 = jstringValue; S9 = jstringValue; S10 = jstringValue; S11 = jstringValue; S12 = jstringValue; S13 = jstringValue; S14 = jstringValue; S15 = jstringValue; S16 = jstringValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00016_nativemethod (env, instance, S1, S2, S3, S4, S5, S6, S7, S8, S9, S10, S11, S12, S13, S14, S15, S16);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00017_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[17 - 1];

    jstring S1; jstring S2; jstring S3; jstring S4; jstring S5; jstring S6; jstring S7; jstring S8; jstring S9; jstring S10; jstring S11; jstring S12; jstring S13; jstring S14; jstring S15; jstring S16; jstring S17;
    S1 = jstringValue; S2 = jstringValue; S3 = jstringValue; S4 = jstringValue; S5 = jstringValue; S6 = jstringValue; S7 = jstringValue; S8 = jstringValue; S9 = jstringValue; S10 = jstringValue; S11 = jstringValue; S12 = jstringValue; S13 = jstringValue; S14 = jstringValue; S15 = jstringValue; S16 = jstringValue; S17 = jstringValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, S1, S2, S3, S4, S5, S6, S7, S8, S9, S10, S11, S12, S13, S14, S15, S16, S17);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00017_run
(JNIEnv *env, jobject instance) {
    jstring S1; jstring S2; jstring S3; jstring S4; jstring S5; jstring S6; jstring S7; jstring S8; jstring S9; jstring S10; jstring S11; jstring S12; jstring S13; jstring S14; jstring S15; jstring S16; jstring S17;
    S1 = jstringValue; S2 = jstringValue; S3 = jstringValue; S4 = jstringValue; S5 = jstringValue; S6 = jstringValue; S7 = jstringValue; S8 = jstringValue; S9 = jstringValue; S10 = jstringValue; S11 = jstringValue; S12 = jstringValue; S13 = jstringValue; S14 = jstringValue; S15 = jstringValue; S16 = jstringValue; S17 = jstringValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00017_nativemethod (env, instance, S1, S2, S3, S4, S5, S6, S7, S8, S9, S10, S11, S12, S13, S14, S15, S16, S17);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00018_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[18 - 1];

    jstring S1; jstring S2; jstring S3; jstring S4; jstring S5; jstring S6; jstring S7; jstring S8; jstring S9; jstring S10; jstring S11; jstring S12; jstring S13; jstring S14; jstring S15; jstring S16; jstring S17; jstring S18;
    S1 = jstringValue; S2 = jstringValue; S3 = jstringValue; S4 = jstringValue; S5 = jstringValue; S6 = jstringValue; S7 = jstringValue; S8 = jstringValue; S9 = jstringValue; S10 = jstringValue; S11 = jstringValue; S12 = jstringValue; S13 = jstringValue; S14 = jstringValue; S15 = jstringValue; S16 = jstringValue; S17 = jstringValue; S18 = jstringValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, S1, S2, S3, S4, S5, S6, S7, S8, S9, S10, S11, S12, S13, S14, S15, S16, S17, S18);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00018_run
(JNIEnv *env, jobject instance) {
    jstring S1; jstring S2; jstring S3; jstring S4; jstring S5; jstring S6; jstring S7; jstring S8; jstring S9; jstring S10; jstring S11; jstring S12; jstring S13; jstring S14; jstring S15; jstring S16; jstring S17; jstring S18;
    S1 = jstringValue; S2 = jstringValue; S3 = jstringValue; S4 = jstringValue; S5 = jstringValue; S6 = jstringValue; S7 = jstringValue; S8 = jstringValue; S9 = jstringValue; S10 = jstringValue; S11 = jstringValue; S12 = jstringValue; S13 = jstringValue; S14 = jstringValue; S15 = jstringValue; S16 = jstringValue; S17 = jstringValue; S18 = jstringValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00018_nativemethod (env, instance, S1, S2, S3, S4, S5, S6, S7, S8, S9, S10, S11, S12, S13, S14, S15, S16, S17, S18);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00019_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[19 - 1];

    jstring S1; jstring S2; jstring S3; jstring S4; jstring S5; jstring S6; jstring S7; jstring S8; jstring S9; jstring S10; jstring S11; jstring S12; jstring S13; jstring S14; jstring S15; jstring S16; jstring S17; jstring S18; jstring S19;
    S1 = jstringValue; S2 = jstringValue; S3 = jstringValue; S4 = jstringValue; S5 = jstringValue; S6 = jstringValue; S7 = jstringValue; S8 = jstringValue; S9 = jstringValue; S10 = jstringValue; S11 = jstringValue; S12 = jstringValue; S13 = jstringValue; S14 = jstringValue; S15 = jstringValue; S16 = jstringValue; S17 = jstringValue; S18 = jstringValue; S19 = jstringValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, S1, S2, S3, S4, S5, S6, S7, S8, S9, S10, S11, S12, S13, S14, S15, S16, S17, S18, S19);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00019_run
(JNIEnv *env, jobject instance) {
    jstring S1; jstring S2; jstring S3; jstring S4; jstring S5; jstring S6; jstring S7; jstring S8; jstring S9; jstring S10; jstring S11; jstring S12; jstring S13; jstring S14; jstring S15; jstring S16; jstring S17; jstring S18; jstring S19;
    S1 = jstringValue; S2 = jstringValue; S3 = jstringValue; S4 = jstringValue; S5 = jstringValue; S6 = jstringValue; S7 = jstringValue; S8 = jstringValue; S9 = jstringValue; S10 = jstringValue; S11 = jstringValue; S12 = jstringValue; S13 = jstringValue; S14 = jstringValue; S15 = jstringValue; S16 = jstringValue; S17 = jstringValue; S18 = jstringValue; S19 = jstringValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00019_nativemethod (env, instance, S1, S2, S3, S4, S5, S6, S7, S8, S9, S10, S11, S12, S13, S14, S15, S16, S17, S18, S19);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00020_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[20 - 1];

    jstring S1; jstring S2; jstring S3; jstring S4; jstring S5; jstring S6; jstring S7; jstring S8; jstring S9; jstring S10; jstring S11; jstring S12; jstring S13; jstring S14; jstring S15; jstring S16; jstring S17; jstring S18; jstring S19; jstring S20;
    S1 = jstringValue; S2 = jstringValue; S3 = jstringValue; S4 = jstringValue; S5 = jstringValue; S6 = jstringValue; S7 = jstringValue; S8 = jstringValue; S9 = jstringValue; S10 = jstringValue; S11 = jstringValue; S12 = jstringValue; S13 = jstringValue; S14 = jstringValue; S15 = jstringValue; S16 = jstringValue; S17 = jstringValue; S18 = jstringValue; S19 = jstringValue; S20 = jstringValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, S1, S2, S3, S4, S5, S6, S7, S8, S9, S10, S11, S12, S13, S14, S15, S16, S17, S18, S19, S20);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00020_run
(JNIEnv *env, jobject instance) {
    jstring S1; jstring S2; jstring S3; jstring S4; jstring S5; jstring S6; jstring S7; jstring S8; jstring S9; jstring S10; jstring S11; jstring S12; jstring S13; jstring S14; jstring S15; jstring S16; jstring S17; jstring S18; jstring S19; jstring S20;
    S1 = jstringValue; S2 = jstringValue; S3 = jstringValue; S4 = jstringValue; S5 = jstringValue; S6 = jstringValue; S7 = jstringValue; S8 = jstringValue; S9 = jstringValue; S10 = jstringValue; S11 = jstringValue; S12 = jstringValue; S13 = jstringValue; S14 = jstringValue; S15 = jstringValue; S16 = jstringValue; S17 = jstringValue; S18 = jstringValue; S19 = jstringValue; S20 = jstringValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00020_nativemethod (env, instance, S1, S2, S3, S4, S5, S6, S7, S8, S9, S10, S11, S12, S13, S14, S15, S16, S17, S18, S19, S20);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00021_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[21 - 1];

    jcharArray Ac1;
    Ac1 = jcharArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ac1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00021_run
(JNIEnv *env, jobject instance) {
    jcharArray Ac1;
    Ac1 = jcharArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00021_nativemethod (env, instance, Ac1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00022_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[22 - 1];

    jcharArray Ac1; jcharArray Ac2;
    Ac1 = jcharArrayValue; Ac2 = jcharArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ac1, Ac2);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00022_run
(JNIEnv *env, jobject instance) {
    jcharArray Ac1; jcharArray Ac2;
    Ac1 = jcharArrayValue; Ac2 = jcharArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00022_nativemethod (env, instance, Ac1, Ac2);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00023_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[23 - 1];

    jcharArray Ac1; jcharArray Ac2; jcharArray Ac3;
    Ac1 = jcharArrayValue; Ac2 = jcharArrayValue; Ac3 = jcharArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ac1, Ac2, Ac3);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00023_run
(JNIEnv *env, jobject instance) {
    jcharArray Ac1; jcharArray Ac2; jcharArray Ac3;
    Ac1 = jcharArrayValue; Ac2 = jcharArrayValue; Ac3 = jcharArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00023_nativemethod (env, instance, Ac1, Ac2, Ac3);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00024_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[24 - 1];

    jcharArray Ac1; jcharArray Ac2; jcharArray Ac3; jcharArray Ac4;
    Ac1 = jcharArrayValue; Ac2 = jcharArrayValue; Ac3 = jcharArrayValue; Ac4 = jcharArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ac1, Ac2, Ac3, Ac4);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00024_run
(JNIEnv *env, jobject instance) {
    jcharArray Ac1; jcharArray Ac2; jcharArray Ac3; jcharArray Ac4;
    Ac1 = jcharArrayValue; Ac2 = jcharArrayValue; Ac3 = jcharArrayValue; Ac4 = jcharArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00024_nativemethod (env, instance, Ac1, Ac2, Ac3, Ac4);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00025_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[25 - 1];

    jcharArray Ac1; jcharArray Ac2; jcharArray Ac3; jcharArray Ac4; jcharArray Ac5;
    Ac1 = jcharArrayValue; Ac2 = jcharArrayValue; Ac3 = jcharArrayValue; Ac4 = jcharArrayValue; Ac5 = jcharArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ac1, Ac2, Ac3, Ac4, Ac5);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00025_run
(JNIEnv *env, jobject instance) {
    jcharArray Ac1; jcharArray Ac2; jcharArray Ac3; jcharArray Ac4; jcharArray Ac5;
    Ac1 = jcharArrayValue; Ac2 = jcharArrayValue; Ac3 = jcharArrayValue; Ac4 = jcharArrayValue; Ac5 = jcharArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00025_nativemethod (env, instance, Ac1, Ac2, Ac3, Ac4, Ac5);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00026_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[26 - 1];

    jcharArray Ac1; jcharArray Ac2; jcharArray Ac3; jcharArray Ac4; jcharArray Ac5; jcharArray Ac6;
    Ac1 = jcharArrayValue; Ac2 = jcharArrayValue; Ac3 = jcharArrayValue; Ac4 = jcharArrayValue; Ac5 = jcharArrayValue; Ac6 = jcharArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ac1, Ac2, Ac3, Ac4, Ac5, Ac6);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00026_run
(JNIEnv *env, jobject instance) {
    jcharArray Ac1; jcharArray Ac2; jcharArray Ac3; jcharArray Ac4; jcharArray Ac5; jcharArray Ac6;
    Ac1 = jcharArrayValue; Ac2 = jcharArrayValue; Ac3 = jcharArrayValue; Ac4 = jcharArrayValue; Ac5 = jcharArrayValue; Ac6 = jcharArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00026_nativemethod (env, instance, Ac1, Ac2, Ac3, Ac4, Ac5, Ac6);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00027_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[27 - 1];

    jcharArray Ac1; jcharArray Ac2; jcharArray Ac3; jcharArray Ac4; jcharArray Ac5; jcharArray Ac6; jcharArray Ac7;
    Ac1 = jcharArrayValue; Ac2 = jcharArrayValue; Ac3 = jcharArrayValue; Ac4 = jcharArrayValue; Ac5 = jcharArrayValue; Ac6 = jcharArrayValue; Ac7 = jcharArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ac1, Ac2, Ac3, Ac4, Ac5, Ac6, Ac7);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00027_run
(JNIEnv *env, jobject instance) {
    jcharArray Ac1; jcharArray Ac2; jcharArray Ac3; jcharArray Ac4; jcharArray Ac5; jcharArray Ac6; jcharArray Ac7;
    Ac1 = jcharArrayValue; Ac2 = jcharArrayValue; Ac3 = jcharArrayValue; Ac4 = jcharArrayValue; Ac5 = jcharArrayValue; Ac6 = jcharArrayValue; Ac7 = jcharArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00027_nativemethod (env, instance, Ac1, Ac2, Ac3, Ac4, Ac5, Ac6, Ac7);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00028_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[28 - 1];

    jcharArray Ac1; jcharArray Ac2; jcharArray Ac3; jcharArray Ac4; jcharArray Ac5; jcharArray Ac6; jcharArray Ac7; jcharArray Ac8;
    Ac1 = jcharArrayValue; Ac2 = jcharArrayValue; Ac3 = jcharArrayValue; Ac4 = jcharArrayValue; Ac5 = jcharArrayValue; Ac6 = jcharArrayValue; Ac7 = jcharArrayValue; Ac8 = jcharArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ac1, Ac2, Ac3, Ac4, Ac5, Ac6, Ac7, Ac8);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00028_run
(JNIEnv *env, jobject instance) {
    jcharArray Ac1; jcharArray Ac2; jcharArray Ac3; jcharArray Ac4; jcharArray Ac5; jcharArray Ac6; jcharArray Ac7; jcharArray Ac8;
    Ac1 = jcharArrayValue; Ac2 = jcharArrayValue; Ac3 = jcharArrayValue; Ac4 = jcharArrayValue; Ac5 = jcharArrayValue; Ac6 = jcharArrayValue; Ac7 = jcharArrayValue; Ac8 = jcharArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00028_nativemethod (env, instance, Ac1, Ac2, Ac3, Ac4, Ac5, Ac6, Ac7, Ac8);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00029_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[29 - 1];

    jcharArray Ac1; jcharArray Ac2; jcharArray Ac3; jcharArray Ac4; jcharArray Ac5; jcharArray Ac6; jcharArray Ac7; jcharArray Ac8; jcharArray Ac9;
    Ac1 = jcharArrayValue; Ac2 = jcharArrayValue; Ac3 = jcharArrayValue; Ac4 = jcharArrayValue; Ac5 = jcharArrayValue; Ac6 = jcharArrayValue; Ac7 = jcharArrayValue; Ac8 = jcharArrayValue; Ac9 = jcharArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ac1, Ac2, Ac3, Ac4, Ac5, Ac6, Ac7, Ac8, Ac9);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00029_run
(JNIEnv *env, jobject instance) {
    jcharArray Ac1; jcharArray Ac2; jcharArray Ac3; jcharArray Ac4; jcharArray Ac5; jcharArray Ac6; jcharArray Ac7; jcharArray Ac8; jcharArray Ac9;
    Ac1 = jcharArrayValue; Ac2 = jcharArrayValue; Ac3 = jcharArrayValue; Ac4 = jcharArrayValue; Ac5 = jcharArrayValue; Ac6 = jcharArrayValue; Ac7 = jcharArrayValue; Ac8 = jcharArrayValue; Ac9 = jcharArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00029_nativemethod (env, instance, Ac1, Ac2, Ac3, Ac4, Ac5, Ac6, Ac7, Ac8, Ac9);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00030_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[30 - 1];

    jcharArray Ac1; jcharArray Ac2; jcharArray Ac3; jcharArray Ac4; jcharArray Ac5; jcharArray Ac6; jcharArray Ac7; jcharArray Ac8; jcharArray Ac9; jcharArray Ac10;
    Ac1 = jcharArrayValue; Ac2 = jcharArrayValue; Ac3 = jcharArrayValue; Ac4 = jcharArrayValue; Ac5 = jcharArrayValue; Ac6 = jcharArrayValue; Ac7 = jcharArrayValue; Ac8 = jcharArrayValue; Ac9 = jcharArrayValue; Ac10 = jcharArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ac1, Ac2, Ac3, Ac4, Ac5, Ac6, Ac7, Ac8, Ac9, Ac10);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00030_run
(JNIEnv *env, jobject instance) {
    jcharArray Ac1; jcharArray Ac2; jcharArray Ac3; jcharArray Ac4; jcharArray Ac5; jcharArray Ac6; jcharArray Ac7; jcharArray Ac8; jcharArray Ac9; jcharArray Ac10;
    Ac1 = jcharArrayValue; Ac2 = jcharArrayValue; Ac3 = jcharArrayValue; Ac4 = jcharArrayValue; Ac5 = jcharArrayValue; Ac6 = jcharArrayValue; Ac7 = jcharArrayValue; Ac8 = jcharArrayValue; Ac9 = jcharArrayValue; Ac10 = jcharArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00030_nativemethod (env, instance, Ac1, Ac2, Ac3, Ac4, Ac5, Ac6, Ac7, Ac8, Ac9, Ac10);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00031_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[31 - 1];

    jcharArray Ac1; jcharArray Ac2; jcharArray Ac3; jcharArray Ac4; jcharArray Ac5; jcharArray Ac6; jcharArray Ac7; jcharArray Ac8; jcharArray Ac9; jcharArray Ac10; jcharArray Ac11;
    Ac1 = jcharArrayValue; Ac2 = jcharArrayValue; Ac3 = jcharArrayValue; Ac4 = jcharArrayValue; Ac5 = jcharArrayValue; Ac6 = jcharArrayValue; Ac7 = jcharArrayValue; Ac8 = jcharArrayValue; Ac9 = jcharArrayValue; Ac10 = jcharArrayValue; Ac11 = jcharArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ac1, Ac2, Ac3, Ac4, Ac5, Ac6, Ac7, Ac8, Ac9, Ac10, Ac11);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00031_run
(JNIEnv *env, jobject instance) {
    jcharArray Ac1; jcharArray Ac2; jcharArray Ac3; jcharArray Ac4; jcharArray Ac5; jcharArray Ac6; jcharArray Ac7; jcharArray Ac8; jcharArray Ac9; jcharArray Ac10; jcharArray Ac11;
    Ac1 = jcharArrayValue; Ac2 = jcharArrayValue; Ac3 = jcharArrayValue; Ac4 = jcharArrayValue; Ac5 = jcharArrayValue; Ac6 = jcharArrayValue; Ac7 = jcharArrayValue; Ac8 = jcharArrayValue; Ac9 = jcharArrayValue; Ac10 = jcharArrayValue; Ac11 = jcharArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00031_nativemethod (env, instance, Ac1, Ac2, Ac3, Ac4, Ac5, Ac6, Ac7, Ac8, Ac9, Ac10, Ac11);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00032_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[32 - 1];

    jcharArray Ac1; jcharArray Ac2; jcharArray Ac3; jcharArray Ac4; jcharArray Ac5; jcharArray Ac6; jcharArray Ac7; jcharArray Ac8; jcharArray Ac9; jcharArray Ac10; jcharArray Ac11; jcharArray Ac12;
    Ac1 = jcharArrayValue; Ac2 = jcharArrayValue; Ac3 = jcharArrayValue; Ac4 = jcharArrayValue; Ac5 = jcharArrayValue; Ac6 = jcharArrayValue; Ac7 = jcharArrayValue; Ac8 = jcharArrayValue; Ac9 = jcharArrayValue; Ac10 = jcharArrayValue; Ac11 = jcharArrayValue; Ac12 = jcharArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ac1, Ac2, Ac3, Ac4, Ac5, Ac6, Ac7, Ac8, Ac9, Ac10, Ac11, Ac12);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00032_run
(JNIEnv *env, jobject instance) {
    jcharArray Ac1; jcharArray Ac2; jcharArray Ac3; jcharArray Ac4; jcharArray Ac5; jcharArray Ac6; jcharArray Ac7; jcharArray Ac8; jcharArray Ac9; jcharArray Ac10; jcharArray Ac11; jcharArray Ac12;
    Ac1 = jcharArrayValue; Ac2 = jcharArrayValue; Ac3 = jcharArrayValue; Ac4 = jcharArrayValue; Ac5 = jcharArrayValue; Ac6 = jcharArrayValue; Ac7 = jcharArrayValue; Ac8 = jcharArrayValue; Ac9 = jcharArrayValue; Ac10 = jcharArrayValue; Ac11 = jcharArrayValue; Ac12 = jcharArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00032_nativemethod (env, instance, Ac1, Ac2, Ac3, Ac4, Ac5, Ac6, Ac7, Ac8, Ac9, Ac10, Ac11, Ac12);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00033_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[33 - 1];

    jcharArray Ac1; jcharArray Ac2; jcharArray Ac3; jcharArray Ac4; jcharArray Ac5; jcharArray Ac6; jcharArray Ac7; jcharArray Ac8; jcharArray Ac9; jcharArray Ac10; jcharArray Ac11; jcharArray Ac12; jcharArray Ac13;
    Ac1 = jcharArrayValue; Ac2 = jcharArrayValue; Ac3 = jcharArrayValue; Ac4 = jcharArrayValue; Ac5 = jcharArrayValue; Ac6 = jcharArrayValue; Ac7 = jcharArrayValue; Ac8 = jcharArrayValue; Ac9 = jcharArrayValue; Ac10 = jcharArrayValue; Ac11 = jcharArrayValue; Ac12 = jcharArrayValue; Ac13 = jcharArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ac1, Ac2, Ac3, Ac4, Ac5, Ac6, Ac7, Ac8, Ac9, Ac10, Ac11, Ac12, Ac13);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00033_run
(JNIEnv *env, jobject instance) {
    jcharArray Ac1; jcharArray Ac2; jcharArray Ac3; jcharArray Ac4; jcharArray Ac5; jcharArray Ac6; jcharArray Ac7; jcharArray Ac8; jcharArray Ac9; jcharArray Ac10; jcharArray Ac11; jcharArray Ac12; jcharArray Ac13;
    Ac1 = jcharArrayValue; Ac2 = jcharArrayValue; Ac3 = jcharArrayValue; Ac4 = jcharArrayValue; Ac5 = jcharArrayValue; Ac6 = jcharArrayValue; Ac7 = jcharArrayValue; Ac8 = jcharArrayValue; Ac9 = jcharArrayValue; Ac10 = jcharArrayValue; Ac11 = jcharArrayValue; Ac12 = jcharArrayValue; Ac13 = jcharArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00033_nativemethod (env, instance, Ac1, Ac2, Ac3, Ac4, Ac5, Ac6, Ac7, Ac8, Ac9, Ac10, Ac11, Ac12, Ac13);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00034_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[34 - 1];

    jcharArray Ac1; jcharArray Ac2; jcharArray Ac3; jcharArray Ac4; jcharArray Ac5; jcharArray Ac6; jcharArray Ac7; jcharArray Ac8; jcharArray Ac9; jcharArray Ac10; jcharArray Ac11; jcharArray Ac12; jcharArray Ac13; jcharArray Ac14;
    Ac1 = jcharArrayValue; Ac2 = jcharArrayValue; Ac3 = jcharArrayValue; Ac4 = jcharArrayValue; Ac5 = jcharArrayValue; Ac6 = jcharArrayValue; Ac7 = jcharArrayValue; Ac8 = jcharArrayValue; Ac9 = jcharArrayValue; Ac10 = jcharArrayValue; Ac11 = jcharArrayValue; Ac12 = jcharArrayValue; Ac13 = jcharArrayValue; Ac14 = jcharArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ac1, Ac2, Ac3, Ac4, Ac5, Ac6, Ac7, Ac8, Ac9, Ac10, Ac11, Ac12, Ac13, Ac14);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00034_run
(JNIEnv *env, jobject instance) {
    jcharArray Ac1; jcharArray Ac2; jcharArray Ac3; jcharArray Ac4; jcharArray Ac5; jcharArray Ac6; jcharArray Ac7; jcharArray Ac8; jcharArray Ac9; jcharArray Ac10; jcharArray Ac11; jcharArray Ac12; jcharArray Ac13; jcharArray Ac14;
    Ac1 = jcharArrayValue; Ac2 = jcharArrayValue; Ac3 = jcharArrayValue; Ac4 = jcharArrayValue; Ac5 = jcharArrayValue; Ac6 = jcharArrayValue; Ac7 = jcharArrayValue; Ac8 = jcharArrayValue; Ac9 = jcharArrayValue; Ac10 = jcharArrayValue; Ac11 = jcharArrayValue; Ac12 = jcharArrayValue; Ac13 = jcharArrayValue; Ac14 = jcharArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00034_nativemethod (env, instance, Ac1, Ac2, Ac3, Ac4, Ac5, Ac6, Ac7, Ac8, Ac9, Ac10, Ac11, Ac12, Ac13, Ac14);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00035_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[35 - 1];

    jcharArray Ac1; jcharArray Ac2; jcharArray Ac3; jcharArray Ac4; jcharArray Ac5; jcharArray Ac6; jcharArray Ac7; jcharArray Ac8; jcharArray Ac9; jcharArray Ac10; jcharArray Ac11; jcharArray Ac12; jcharArray Ac13; jcharArray Ac14; jcharArray Ac15;
    Ac1 = jcharArrayValue; Ac2 = jcharArrayValue; Ac3 = jcharArrayValue; Ac4 = jcharArrayValue; Ac5 = jcharArrayValue; Ac6 = jcharArrayValue; Ac7 = jcharArrayValue; Ac8 = jcharArrayValue; Ac9 = jcharArrayValue; Ac10 = jcharArrayValue; Ac11 = jcharArrayValue; Ac12 = jcharArrayValue; Ac13 = jcharArrayValue; Ac14 = jcharArrayValue; Ac15 = jcharArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ac1, Ac2, Ac3, Ac4, Ac5, Ac6, Ac7, Ac8, Ac9, Ac10, Ac11, Ac12, Ac13, Ac14, Ac15);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00035_run
(JNIEnv *env, jobject instance) {
    jcharArray Ac1; jcharArray Ac2; jcharArray Ac3; jcharArray Ac4; jcharArray Ac5; jcharArray Ac6; jcharArray Ac7; jcharArray Ac8; jcharArray Ac9; jcharArray Ac10; jcharArray Ac11; jcharArray Ac12; jcharArray Ac13; jcharArray Ac14; jcharArray Ac15;
    Ac1 = jcharArrayValue; Ac2 = jcharArrayValue; Ac3 = jcharArrayValue; Ac4 = jcharArrayValue; Ac5 = jcharArrayValue; Ac6 = jcharArrayValue; Ac7 = jcharArrayValue; Ac8 = jcharArrayValue; Ac9 = jcharArrayValue; Ac10 = jcharArrayValue; Ac11 = jcharArrayValue; Ac12 = jcharArrayValue; Ac13 = jcharArrayValue; Ac14 = jcharArrayValue; Ac15 = jcharArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00035_nativemethod (env, instance, Ac1, Ac2, Ac3, Ac4, Ac5, Ac6, Ac7, Ac8, Ac9, Ac10, Ac11, Ac12, Ac13, Ac14, Ac15);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00036_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[36 - 1];

    jcharArray Ac1; jcharArray Ac2; jcharArray Ac3; jcharArray Ac4; jcharArray Ac5; jcharArray Ac6; jcharArray Ac7; jcharArray Ac8; jcharArray Ac9; jcharArray Ac10; jcharArray Ac11; jcharArray Ac12; jcharArray Ac13; jcharArray Ac14; jcharArray Ac15; jcharArray Ac16;
    Ac1 = jcharArrayValue; Ac2 = jcharArrayValue; Ac3 = jcharArrayValue; Ac4 = jcharArrayValue; Ac5 = jcharArrayValue; Ac6 = jcharArrayValue; Ac7 = jcharArrayValue; Ac8 = jcharArrayValue; Ac9 = jcharArrayValue; Ac10 = jcharArrayValue; Ac11 = jcharArrayValue; Ac12 = jcharArrayValue; Ac13 = jcharArrayValue; Ac14 = jcharArrayValue; Ac15 = jcharArrayValue; Ac16 = jcharArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ac1, Ac2, Ac3, Ac4, Ac5, Ac6, Ac7, Ac8, Ac9, Ac10, Ac11, Ac12, Ac13, Ac14, Ac15, Ac16);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00036_run
(JNIEnv *env, jobject instance) {
    jcharArray Ac1; jcharArray Ac2; jcharArray Ac3; jcharArray Ac4; jcharArray Ac5; jcharArray Ac6; jcharArray Ac7; jcharArray Ac8; jcharArray Ac9; jcharArray Ac10; jcharArray Ac11; jcharArray Ac12; jcharArray Ac13; jcharArray Ac14; jcharArray Ac15; jcharArray Ac16;
    Ac1 = jcharArrayValue; Ac2 = jcharArrayValue; Ac3 = jcharArrayValue; Ac4 = jcharArrayValue; Ac5 = jcharArrayValue; Ac6 = jcharArrayValue; Ac7 = jcharArrayValue; Ac8 = jcharArrayValue; Ac9 = jcharArrayValue; Ac10 = jcharArrayValue; Ac11 = jcharArrayValue; Ac12 = jcharArrayValue; Ac13 = jcharArrayValue; Ac14 = jcharArrayValue; Ac15 = jcharArrayValue; Ac16 = jcharArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00036_nativemethod (env, instance, Ac1, Ac2, Ac3, Ac4, Ac5, Ac6, Ac7, Ac8, Ac9, Ac10, Ac11, Ac12, Ac13, Ac14, Ac15, Ac16);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00037_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[37 - 1];

    jcharArray Ac1; jcharArray Ac2; jcharArray Ac3; jcharArray Ac4; jcharArray Ac5; jcharArray Ac6; jcharArray Ac7; jcharArray Ac8; jcharArray Ac9; jcharArray Ac10; jcharArray Ac11; jcharArray Ac12; jcharArray Ac13; jcharArray Ac14; jcharArray Ac15; jcharArray Ac16; jcharArray Ac17;
    Ac1 = jcharArrayValue; Ac2 = jcharArrayValue; Ac3 = jcharArrayValue; Ac4 = jcharArrayValue; Ac5 = jcharArrayValue; Ac6 = jcharArrayValue; Ac7 = jcharArrayValue; Ac8 = jcharArrayValue; Ac9 = jcharArrayValue; Ac10 = jcharArrayValue; Ac11 = jcharArrayValue; Ac12 = jcharArrayValue; Ac13 = jcharArrayValue; Ac14 = jcharArrayValue; Ac15 = jcharArrayValue; Ac16 = jcharArrayValue; Ac17 = jcharArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ac1, Ac2, Ac3, Ac4, Ac5, Ac6, Ac7, Ac8, Ac9, Ac10, Ac11, Ac12, Ac13, Ac14, Ac15, Ac16, Ac17);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00037_run
(JNIEnv *env, jobject instance) {
    jcharArray Ac1; jcharArray Ac2; jcharArray Ac3; jcharArray Ac4; jcharArray Ac5; jcharArray Ac6; jcharArray Ac7; jcharArray Ac8; jcharArray Ac9; jcharArray Ac10; jcharArray Ac11; jcharArray Ac12; jcharArray Ac13; jcharArray Ac14; jcharArray Ac15; jcharArray Ac16; jcharArray Ac17;
    Ac1 = jcharArrayValue; Ac2 = jcharArrayValue; Ac3 = jcharArrayValue; Ac4 = jcharArrayValue; Ac5 = jcharArrayValue; Ac6 = jcharArrayValue; Ac7 = jcharArrayValue; Ac8 = jcharArrayValue; Ac9 = jcharArrayValue; Ac10 = jcharArrayValue; Ac11 = jcharArrayValue; Ac12 = jcharArrayValue; Ac13 = jcharArrayValue; Ac14 = jcharArrayValue; Ac15 = jcharArrayValue; Ac16 = jcharArrayValue; Ac17 = jcharArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00037_nativemethod (env, instance, Ac1, Ac2, Ac3, Ac4, Ac5, Ac6, Ac7, Ac8, Ac9, Ac10, Ac11, Ac12, Ac13, Ac14, Ac15, Ac16, Ac17);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00038_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[38 - 1];

    jcharArray Ac1; jcharArray Ac2; jcharArray Ac3; jcharArray Ac4; jcharArray Ac5; jcharArray Ac6; jcharArray Ac7; jcharArray Ac8; jcharArray Ac9; jcharArray Ac10; jcharArray Ac11; jcharArray Ac12; jcharArray Ac13; jcharArray Ac14; jcharArray Ac15; jcharArray Ac16; jcharArray Ac17; jcharArray Ac18;
    Ac1 = jcharArrayValue; Ac2 = jcharArrayValue; Ac3 = jcharArrayValue; Ac4 = jcharArrayValue; Ac5 = jcharArrayValue; Ac6 = jcharArrayValue; Ac7 = jcharArrayValue; Ac8 = jcharArrayValue; Ac9 = jcharArrayValue; Ac10 = jcharArrayValue; Ac11 = jcharArrayValue; Ac12 = jcharArrayValue; Ac13 = jcharArrayValue; Ac14 = jcharArrayValue; Ac15 = jcharArrayValue; Ac16 = jcharArrayValue; Ac17 = jcharArrayValue; Ac18 = jcharArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ac1, Ac2, Ac3, Ac4, Ac5, Ac6, Ac7, Ac8, Ac9, Ac10, Ac11, Ac12, Ac13, Ac14, Ac15, Ac16, Ac17, Ac18);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00038_run
(JNIEnv *env, jobject instance) {
    jcharArray Ac1; jcharArray Ac2; jcharArray Ac3; jcharArray Ac4; jcharArray Ac5; jcharArray Ac6; jcharArray Ac7; jcharArray Ac8; jcharArray Ac9; jcharArray Ac10; jcharArray Ac11; jcharArray Ac12; jcharArray Ac13; jcharArray Ac14; jcharArray Ac15; jcharArray Ac16; jcharArray Ac17; jcharArray Ac18;
    Ac1 = jcharArrayValue; Ac2 = jcharArrayValue; Ac3 = jcharArrayValue; Ac4 = jcharArrayValue; Ac5 = jcharArrayValue; Ac6 = jcharArrayValue; Ac7 = jcharArrayValue; Ac8 = jcharArrayValue; Ac9 = jcharArrayValue; Ac10 = jcharArrayValue; Ac11 = jcharArrayValue; Ac12 = jcharArrayValue; Ac13 = jcharArrayValue; Ac14 = jcharArrayValue; Ac15 = jcharArrayValue; Ac16 = jcharArrayValue; Ac17 = jcharArrayValue; Ac18 = jcharArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00038_nativemethod (env, instance, Ac1, Ac2, Ac3, Ac4, Ac5, Ac6, Ac7, Ac8, Ac9, Ac10, Ac11, Ac12, Ac13, Ac14, Ac15, Ac16, Ac17, Ac18);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00039_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[39 - 1];

    jcharArray Ac1; jcharArray Ac2; jcharArray Ac3; jcharArray Ac4; jcharArray Ac5; jcharArray Ac6; jcharArray Ac7; jcharArray Ac8; jcharArray Ac9; jcharArray Ac10; jcharArray Ac11; jcharArray Ac12; jcharArray Ac13; jcharArray Ac14; jcharArray Ac15; jcharArray Ac16; jcharArray Ac17; jcharArray Ac18; jcharArray Ac19;
    Ac1 = jcharArrayValue; Ac2 = jcharArrayValue; Ac3 = jcharArrayValue; Ac4 = jcharArrayValue; Ac5 = jcharArrayValue; Ac6 = jcharArrayValue; Ac7 = jcharArrayValue; Ac8 = jcharArrayValue; Ac9 = jcharArrayValue; Ac10 = jcharArrayValue; Ac11 = jcharArrayValue; Ac12 = jcharArrayValue; Ac13 = jcharArrayValue; Ac14 = jcharArrayValue; Ac15 = jcharArrayValue; Ac16 = jcharArrayValue; Ac17 = jcharArrayValue; Ac18 = jcharArrayValue; Ac19 = jcharArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ac1, Ac2, Ac3, Ac4, Ac5, Ac6, Ac7, Ac8, Ac9, Ac10, Ac11, Ac12, Ac13, Ac14, Ac15, Ac16, Ac17, Ac18, Ac19);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00039_run
(JNIEnv *env, jobject instance) {
    jcharArray Ac1; jcharArray Ac2; jcharArray Ac3; jcharArray Ac4; jcharArray Ac5; jcharArray Ac6; jcharArray Ac7; jcharArray Ac8; jcharArray Ac9; jcharArray Ac10; jcharArray Ac11; jcharArray Ac12; jcharArray Ac13; jcharArray Ac14; jcharArray Ac15; jcharArray Ac16; jcharArray Ac17; jcharArray Ac18; jcharArray Ac19;
    Ac1 = jcharArrayValue; Ac2 = jcharArrayValue; Ac3 = jcharArrayValue; Ac4 = jcharArrayValue; Ac5 = jcharArrayValue; Ac6 = jcharArrayValue; Ac7 = jcharArrayValue; Ac8 = jcharArrayValue; Ac9 = jcharArrayValue; Ac10 = jcharArrayValue; Ac11 = jcharArrayValue; Ac12 = jcharArrayValue; Ac13 = jcharArrayValue; Ac14 = jcharArrayValue; Ac15 = jcharArrayValue; Ac16 = jcharArrayValue; Ac17 = jcharArrayValue; Ac18 = jcharArrayValue; Ac19 = jcharArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00039_nativemethod (env, instance, Ac1, Ac2, Ac3, Ac4, Ac5, Ac6, Ac7, Ac8, Ac9, Ac10, Ac11, Ac12, Ac13, Ac14, Ac15, Ac16, Ac17, Ac18, Ac19);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00040_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[40 - 1];

    jcharArray Ac1; jcharArray Ac2; jcharArray Ac3; jcharArray Ac4; jcharArray Ac5; jcharArray Ac6; jcharArray Ac7; jcharArray Ac8; jcharArray Ac9; jcharArray Ac10; jcharArray Ac11; jcharArray Ac12; jcharArray Ac13; jcharArray Ac14; jcharArray Ac15; jcharArray Ac16; jcharArray Ac17; jcharArray Ac18; jcharArray Ac19; jcharArray Ac20;
    Ac1 = jcharArrayValue; Ac2 = jcharArrayValue; Ac3 = jcharArrayValue; Ac4 = jcharArrayValue; Ac5 = jcharArrayValue; Ac6 = jcharArrayValue; Ac7 = jcharArrayValue; Ac8 = jcharArrayValue; Ac9 = jcharArrayValue; Ac10 = jcharArrayValue; Ac11 = jcharArrayValue; Ac12 = jcharArrayValue; Ac13 = jcharArrayValue; Ac14 = jcharArrayValue; Ac15 = jcharArrayValue; Ac16 = jcharArrayValue; Ac17 = jcharArrayValue; Ac18 = jcharArrayValue; Ac19 = jcharArrayValue; Ac20 = jcharArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ac1, Ac2, Ac3, Ac4, Ac5, Ac6, Ac7, Ac8, Ac9, Ac10, Ac11, Ac12, Ac13, Ac14, Ac15, Ac16, Ac17, Ac18, Ac19, Ac20);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00040_run
(JNIEnv *env, jobject instance) {
    jcharArray Ac1; jcharArray Ac2; jcharArray Ac3; jcharArray Ac4; jcharArray Ac5; jcharArray Ac6; jcharArray Ac7; jcharArray Ac8; jcharArray Ac9; jcharArray Ac10; jcharArray Ac11; jcharArray Ac12; jcharArray Ac13; jcharArray Ac14; jcharArray Ac15; jcharArray Ac16; jcharArray Ac17; jcharArray Ac18; jcharArray Ac19; jcharArray Ac20;
    Ac1 = jcharArrayValue; Ac2 = jcharArrayValue; Ac3 = jcharArrayValue; Ac4 = jcharArrayValue; Ac5 = jcharArrayValue; Ac6 = jcharArrayValue; Ac7 = jcharArrayValue; Ac8 = jcharArrayValue; Ac9 = jcharArrayValue; Ac10 = jcharArrayValue; Ac11 = jcharArrayValue; Ac12 = jcharArrayValue; Ac13 = jcharArrayValue; Ac14 = jcharArrayValue; Ac15 = jcharArrayValue; Ac16 = jcharArrayValue; Ac17 = jcharArrayValue; Ac18 = jcharArrayValue; Ac19 = jcharArrayValue; Ac20 = jcharArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00040_nativemethod (env, instance, Ac1, Ac2, Ac3, Ac4, Ac5, Ac6, Ac7, Ac8, Ac9, Ac10, Ac11, Ac12, Ac13, Ac14, Ac15, Ac16, Ac17, Ac18, Ac19, Ac20);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00041_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[41 - 1];

    jchar c1;
    c1 = 12;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, c1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00041_run
(JNIEnv *env, jobject instance) {
    jchar c1;
    c1 = 12;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00041_nativemethod (env, instance, c1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00042_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[42 - 1];

    jchar c1; jchar c2;
    c1 = 12; c2 = 12;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, c1, c2);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00042_run
(JNIEnv *env, jobject instance) {
    jchar c1; jchar c2;
    c1 = 12; c2 = 12;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00042_nativemethod (env, instance, c1, c2);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00043_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[43 - 1];

    jchar c1; jchar c2; jchar c3;
    c1 = 12; c2 = 12; c3 = 12;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, c1, c2, c3);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00043_run
(JNIEnv *env, jobject instance) {
    jchar c1; jchar c2; jchar c3;
    c1 = 12; c2 = 12; c3 = 12;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00043_nativemethod (env, instance, c1, c2, c3);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00044_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[44 - 1];

    jchar c1; jchar c2; jchar c3; jchar c4;
    c1 = 12; c2 = 12; c3 = 12; c4 = 12;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, c1, c2, c3, c4);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00044_run
(JNIEnv *env, jobject instance) {
    jchar c1; jchar c2; jchar c3; jchar c4;
    c1 = 12; c2 = 12; c3 = 12; c4 = 12;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00044_nativemethod (env, instance, c1, c2, c3, c4);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00045_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[45 - 1];

    jchar c1; jchar c2; jchar c3; jchar c4; jchar c5;
    c1 = 12; c2 = 12; c3 = 12; c4 = 12; c5 = 12;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, c1, c2, c3, c4, c5);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00045_run
(JNIEnv *env, jobject instance) {
    jchar c1; jchar c2; jchar c3; jchar c4; jchar c5;
    c1 = 12; c2 = 12; c3 = 12; c4 = 12; c5 = 12;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00045_nativemethod (env, instance, c1, c2, c3, c4, c5);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00046_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[46 - 1];

    jchar c1; jchar c2; jchar c3; jchar c4; jchar c5; jchar c6;
    c1 = 12; c2 = 12; c3 = 12; c4 = 12; c5 = 12; c6 = 12;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, c1, c2, c3, c4, c5, c6);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00046_run
(JNIEnv *env, jobject instance) {
    jchar c1; jchar c2; jchar c3; jchar c4; jchar c5; jchar c6;
    c1 = 12; c2 = 12; c3 = 12; c4 = 12; c5 = 12; c6 = 12;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00046_nativemethod (env, instance, c1, c2, c3, c4, c5, c6);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00047_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[47 - 1];

    jchar c1; jchar c2; jchar c3; jchar c4; jchar c5; jchar c6; jchar c7;
    c1 = 12; c2 = 12; c3 = 12; c4 = 12; c5 = 12; c6 = 12; c7 = 12;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, c1, c2, c3, c4, c5, c6, c7);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00047_run
(JNIEnv *env, jobject instance) {
    jchar c1; jchar c2; jchar c3; jchar c4; jchar c5; jchar c6; jchar c7;
    c1 = 12; c2 = 12; c3 = 12; c4 = 12; c5 = 12; c6 = 12; c7 = 12;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00047_nativemethod (env, instance, c1, c2, c3, c4, c5, c6, c7);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00048_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[48 - 1];

    jchar c1; jchar c2; jchar c3; jchar c4; jchar c5; jchar c6; jchar c7; jchar c8;
    c1 = 12; c2 = 12; c3 = 12; c4 = 12; c5 = 12; c6 = 12; c7 = 12; c8 = 12;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, c1, c2, c3, c4, c5, c6, c7, c8);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00048_run
(JNIEnv *env, jobject instance) {
    jchar c1; jchar c2; jchar c3; jchar c4; jchar c5; jchar c6; jchar c7; jchar c8;
    c1 = 12; c2 = 12; c3 = 12; c4 = 12; c5 = 12; c6 = 12; c7 = 12; c8 = 12;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00048_nativemethod (env, instance, c1, c2, c3, c4, c5, c6, c7, c8);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00049_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[49 - 1];

    jchar c1; jchar c2; jchar c3; jchar c4; jchar c5; jchar c6; jchar c7; jchar c8; jchar c9;
    c1 = 12; c2 = 12; c3 = 12; c4 = 12; c5 = 12; c6 = 12; c7 = 12; c8 = 12; c9 = 12;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, c1, c2, c3, c4, c5, c6, c7, c8, c9);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00049_run
(JNIEnv *env, jobject instance) {
    jchar c1; jchar c2; jchar c3; jchar c4; jchar c5; jchar c6; jchar c7; jchar c8; jchar c9;
    c1 = 12; c2 = 12; c3 = 12; c4 = 12; c5 = 12; c6 = 12; c7 = 12; c8 = 12; c9 = 12;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00049_nativemethod (env, instance, c1, c2, c3, c4, c5, c6, c7, c8, c9);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00050_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[50 - 1];

    jchar c1; jchar c2; jchar c3; jchar c4; jchar c5; jchar c6; jchar c7; jchar c8; jchar c9; jchar c10;
    c1 = 12; c2 = 12; c3 = 12; c4 = 12; c5 = 12; c6 = 12; c7 = 12; c8 = 12; c9 = 12; c10 = 12;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00050_run
(JNIEnv *env, jobject instance) {
    jchar c1; jchar c2; jchar c3; jchar c4; jchar c5; jchar c6; jchar c7; jchar c8; jchar c9; jchar c10;
    c1 = 12; c2 = 12; c3 = 12; c4 = 12; c5 = 12; c6 = 12; c7 = 12; c8 = 12; c9 = 12; c10 = 12;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00050_nativemethod (env, instance, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00051_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[51 - 1];

    jchar c1; jchar c2; jchar c3; jchar c4; jchar c5; jchar c6; jchar c7; jchar c8; jchar c9; jchar c10; jchar c11;
    c1 = 12; c2 = 12; c3 = 12; c4 = 12; c5 = 12; c6 = 12; c7 = 12; c8 = 12; c9 = 12; c10 = 12; c11 = 12;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00051_run
(JNIEnv *env, jobject instance) {
    jchar c1; jchar c2; jchar c3; jchar c4; jchar c5; jchar c6; jchar c7; jchar c8; jchar c9; jchar c10; jchar c11;
    c1 = 12; c2 = 12; c3 = 12; c4 = 12; c5 = 12; c6 = 12; c7 = 12; c8 = 12; c9 = 12; c10 = 12; c11 = 12;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00051_nativemethod (env, instance, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00052_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[52 - 1];

    jchar c1; jchar c2; jchar c3; jchar c4; jchar c5; jchar c6; jchar c7; jchar c8; jchar c9; jchar c10; jchar c11; jchar c12;
    c1 = 12; c2 = 12; c3 = 12; c4 = 12; c5 = 12; c6 = 12; c7 = 12; c8 = 12; c9 = 12; c10 = 12; c11 = 12; c12 = 12;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00052_run
(JNIEnv *env, jobject instance) {
    jchar c1; jchar c2; jchar c3; jchar c4; jchar c5; jchar c6; jchar c7; jchar c8; jchar c9; jchar c10; jchar c11; jchar c12;
    c1 = 12; c2 = 12; c3 = 12; c4 = 12; c5 = 12; c6 = 12; c7 = 12; c8 = 12; c9 = 12; c10 = 12; c11 = 12; c12 = 12;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00052_nativemethod (env, instance, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00053_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[53 - 1];

    jchar c1; jchar c2; jchar c3; jchar c4; jchar c5; jchar c6; jchar c7; jchar c8; jchar c9; jchar c10; jchar c11; jchar c12; jchar c13;
    c1 = 12; c2 = 12; c3 = 12; c4 = 12; c5 = 12; c6 = 12; c7 = 12; c8 = 12; c9 = 12; c10 = 12; c11 = 12; c12 = 12; c13 = 12;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00053_run
(JNIEnv *env, jobject instance) {
    jchar c1; jchar c2; jchar c3; jchar c4; jchar c5; jchar c6; jchar c7; jchar c8; jchar c9; jchar c10; jchar c11; jchar c12; jchar c13;
    c1 = 12; c2 = 12; c3 = 12; c4 = 12; c5 = 12; c6 = 12; c7 = 12; c8 = 12; c9 = 12; c10 = 12; c11 = 12; c12 = 12; c13 = 12;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00053_nativemethod (env, instance, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00054_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[54 - 1];

    jchar c1; jchar c2; jchar c3; jchar c4; jchar c5; jchar c6; jchar c7; jchar c8; jchar c9; jchar c10; jchar c11; jchar c12; jchar c13; jchar c14;
    c1 = 12; c2 = 12; c3 = 12; c4 = 12; c5 = 12; c6 = 12; c7 = 12; c8 = 12; c9 = 12; c10 = 12; c11 = 12; c12 = 12; c13 = 12; c14 = 12;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00054_run
(JNIEnv *env, jobject instance) {
    jchar c1; jchar c2; jchar c3; jchar c4; jchar c5; jchar c6; jchar c7; jchar c8; jchar c9; jchar c10; jchar c11; jchar c12; jchar c13; jchar c14;
    c1 = 12; c2 = 12; c3 = 12; c4 = 12; c5 = 12; c6 = 12; c7 = 12; c8 = 12; c9 = 12; c10 = 12; c11 = 12; c12 = 12; c13 = 12; c14 = 12;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00054_nativemethod (env, instance, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00055_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[55 - 1];

    jchar c1; jchar c2; jchar c3; jchar c4; jchar c5; jchar c6; jchar c7; jchar c8; jchar c9; jchar c10; jchar c11; jchar c12; jchar c13; jchar c14; jchar c15;
    c1 = 12; c2 = 12; c3 = 12; c4 = 12; c5 = 12; c6 = 12; c7 = 12; c8 = 12; c9 = 12; c10 = 12; c11 = 12; c12 = 12; c13 = 12; c14 = 12; c15 = 12;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14, c15);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00055_run
(JNIEnv *env, jobject instance) {
    jchar c1; jchar c2; jchar c3; jchar c4; jchar c5; jchar c6; jchar c7; jchar c8; jchar c9; jchar c10; jchar c11; jchar c12; jchar c13; jchar c14; jchar c15;
    c1 = 12; c2 = 12; c3 = 12; c4 = 12; c5 = 12; c6 = 12; c7 = 12; c8 = 12; c9 = 12; c10 = 12; c11 = 12; c12 = 12; c13 = 12; c14 = 12; c15 = 12;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00055_nativemethod (env, instance, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14, c15);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00056_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[56 - 1];

    jchar c1; jchar c2; jchar c3; jchar c4; jchar c5; jchar c6; jchar c7; jchar c8; jchar c9; jchar c10; jchar c11; jchar c12; jchar c13; jchar c14; jchar c15; jchar c16;
    c1 = 12; c2 = 12; c3 = 12; c4 = 12; c5 = 12; c6 = 12; c7 = 12; c8 = 12; c9 = 12; c10 = 12; c11 = 12; c12 = 12; c13 = 12; c14 = 12; c15 = 12; c16 = 12;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14, c15, c16);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00056_run
(JNIEnv *env, jobject instance) {
    jchar c1; jchar c2; jchar c3; jchar c4; jchar c5; jchar c6; jchar c7; jchar c8; jchar c9; jchar c10; jchar c11; jchar c12; jchar c13; jchar c14; jchar c15; jchar c16;
    c1 = 12; c2 = 12; c3 = 12; c4 = 12; c5 = 12; c6 = 12; c7 = 12; c8 = 12; c9 = 12; c10 = 12; c11 = 12; c12 = 12; c13 = 12; c14 = 12; c15 = 12; c16 = 12;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00056_nativemethod (env, instance, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14, c15, c16);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00057_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[57 - 1];

    jchar c1; jchar c2; jchar c3; jchar c4; jchar c5; jchar c6; jchar c7; jchar c8; jchar c9; jchar c10; jchar c11; jchar c12; jchar c13; jchar c14; jchar c15; jchar c16; jchar c17;
    c1 = 12; c2 = 12; c3 = 12; c4 = 12; c5 = 12; c6 = 12; c7 = 12; c8 = 12; c9 = 12; c10 = 12; c11 = 12; c12 = 12; c13 = 12; c14 = 12; c15 = 12; c16 = 12; c17 = 12;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14, c15, c16, c17);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00057_run
(JNIEnv *env, jobject instance) {
    jchar c1; jchar c2; jchar c3; jchar c4; jchar c5; jchar c6; jchar c7; jchar c8; jchar c9; jchar c10; jchar c11; jchar c12; jchar c13; jchar c14; jchar c15; jchar c16; jchar c17;
    c1 = 12; c2 = 12; c3 = 12; c4 = 12; c5 = 12; c6 = 12; c7 = 12; c8 = 12; c9 = 12; c10 = 12; c11 = 12; c12 = 12; c13 = 12; c14 = 12; c15 = 12; c16 = 12; c17 = 12;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00057_nativemethod (env, instance, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14, c15, c16, c17);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00058_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[58 - 1];

    jchar c1; jchar c2; jchar c3; jchar c4; jchar c5; jchar c6; jchar c7; jchar c8; jchar c9; jchar c10; jchar c11; jchar c12; jchar c13; jchar c14; jchar c15; jchar c16; jchar c17; jchar c18;
    c1 = 12; c2 = 12; c3 = 12; c4 = 12; c5 = 12; c6 = 12; c7 = 12; c8 = 12; c9 = 12; c10 = 12; c11 = 12; c12 = 12; c13 = 12; c14 = 12; c15 = 12; c16 = 12; c17 = 12; c18 = 12;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14, c15, c16, c17, c18);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00058_run
(JNIEnv *env, jobject instance) {
    jchar c1; jchar c2; jchar c3; jchar c4; jchar c5; jchar c6; jchar c7; jchar c8; jchar c9; jchar c10; jchar c11; jchar c12; jchar c13; jchar c14; jchar c15; jchar c16; jchar c17; jchar c18;
    c1 = 12; c2 = 12; c3 = 12; c4 = 12; c5 = 12; c6 = 12; c7 = 12; c8 = 12; c9 = 12; c10 = 12; c11 = 12; c12 = 12; c13 = 12; c14 = 12; c15 = 12; c16 = 12; c17 = 12; c18 = 12;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00058_nativemethod (env, instance, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14, c15, c16, c17, c18);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00059_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[59 - 1];

    jchar c1; jchar c2; jchar c3; jchar c4; jchar c5; jchar c6; jchar c7; jchar c8; jchar c9; jchar c10; jchar c11; jchar c12; jchar c13; jchar c14; jchar c15; jchar c16; jchar c17; jchar c18; jchar c19;
    c1 = 12; c2 = 12; c3 = 12; c4 = 12; c5 = 12; c6 = 12; c7 = 12; c8 = 12; c9 = 12; c10 = 12; c11 = 12; c12 = 12; c13 = 12; c14 = 12; c15 = 12; c16 = 12; c17 = 12; c18 = 12; c19 = 12;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14, c15, c16, c17, c18, c19);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00059_run
(JNIEnv *env, jobject instance) {
    jchar c1; jchar c2; jchar c3; jchar c4; jchar c5; jchar c6; jchar c7; jchar c8; jchar c9; jchar c10; jchar c11; jchar c12; jchar c13; jchar c14; jchar c15; jchar c16; jchar c17; jchar c18; jchar c19;
    c1 = 12; c2 = 12; c3 = 12; c4 = 12; c5 = 12; c6 = 12; c7 = 12; c8 = 12; c9 = 12; c10 = 12; c11 = 12; c12 = 12; c13 = 12; c14 = 12; c15 = 12; c16 = 12; c17 = 12; c18 = 12; c19 = 12;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00059_nativemethod (env, instance, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14, c15, c16, c17, c18, c19);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00060_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[60 - 1];

    jchar c1; jchar c2; jchar c3; jchar c4; jchar c5; jchar c6; jchar c7; jchar c8; jchar c9; jchar c10; jchar c11; jchar c12; jchar c13; jchar c14; jchar c15; jchar c16; jchar c17; jchar c18; jchar c19; jchar c20;
    c1 = 12; c2 = 12; c3 = 12; c4 = 12; c5 = 12; c6 = 12; c7 = 12; c8 = 12; c9 = 12; c10 = 12; c11 = 12; c12 = 12; c13 = 12; c14 = 12; c15 = 12; c16 = 12; c17 = 12; c18 = 12; c19 = 12; c20 = 12;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14, c15, c16, c17, c18, c19, c20);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00060_run
(JNIEnv *env, jobject instance) {
    jchar c1; jchar c2; jchar c3; jchar c4; jchar c5; jchar c6; jchar c7; jchar c8; jchar c9; jchar c10; jchar c11; jchar c12; jchar c13; jchar c14; jchar c15; jchar c16; jchar c17; jchar c18; jchar c19; jchar c20;
    c1 = 12; c2 = 12; c3 = 12; c4 = 12; c5 = 12; c6 = 12; c7 = 12; c8 = 12; c9 = 12; c10 = 12; c11 = 12; c12 = 12; c13 = 12; c14 = 12; c15 = 12; c16 = 12; c17 = 12; c18 = 12; c19 = 12; c20 = 12;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00060_nativemethod (env, instance, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14, c15, c16, c17, c18, c19, c20);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00061_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[61 - 1];

    jboolean b1;
    b1 = 1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, b1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00061_run
(JNIEnv *env, jobject instance) {
    jboolean b1;
    b1 = 1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00061_nativemethod (env, instance, b1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00062_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[62 - 1];

    jboolean b1; jboolean b2;
    b1 = 1; b2 = 1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, b1, b2);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00062_run
(JNIEnv *env, jobject instance) {
    jboolean b1; jboolean b2;
    b1 = 1; b2 = 1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00062_nativemethod (env, instance, b1, b2);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00063_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[63 - 1];

    jboolean b1; jboolean b2; jboolean b3;
    b1 = 1; b2 = 1; b3 = 1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, b1, b2, b3);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00063_run
(JNIEnv *env, jobject instance) {
    jboolean b1; jboolean b2; jboolean b3;
    b1 = 1; b2 = 1; b3 = 1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00063_nativemethod (env, instance, b1, b2, b3);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00064_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[64 - 1];

    jboolean b1; jboolean b2; jboolean b3; jboolean b4;
    b1 = 1; b2 = 1; b3 = 1; b4 = 1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, b1, b2, b3, b4);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00064_run
(JNIEnv *env, jobject instance) {
    jboolean b1; jboolean b2; jboolean b3; jboolean b4;
    b1 = 1; b2 = 1; b3 = 1; b4 = 1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00064_nativemethod (env, instance, b1, b2, b3, b4);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00065_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[65 - 1];

    jboolean b1; jboolean b2; jboolean b3; jboolean b4; jboolean b5;
    b1 = 1; b2 = 1; b3 = 1; b4 = 1; b5 = 1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, b1, b2, b3, b4, b5);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00065_run
(JNIEnv *env, jobject instance) {
    jboolean b1; jboolean b2; jboolean b3; jboolean b4; jboolean b5;
    b1 = 1; b2 = 1; b3 = 1; b4 = 1; b5 = 1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00065_nativemethod (env, instance, b1, b2, b3, b4, b5);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00066_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[66 - 1];

    jboolean b1; jboolean b2; jboolean b3; jboolean b4; jboolean b5; jboolean b6;
    b1 = 1; b2 = 1; b3 = 1; b4 = 1; b5 = 1; b6 = 1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, b1, b2, b3, b4, b5, b6);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00066_run
(JNIEnv *env, jobject instance) {
    jboolean b1; jboolean b2; jboolean b3; jboolean b4; jboolean b5; jboolean b6;
    b1 = 1; b2 = 1; b3 = 1; b4 = 1; b5 = 1; b6 = 1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00066_nativemethod (env, instance, b1, b2, b3, b4, b5, b6);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00067_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[67 - 1];

    jboolean b1; jboolean b2; jboolean b3; jboolean b4; jboolean b5; jboolean b6; jboolean b7;
    b1 = 1; b2 = 1; b3 = 1; b4 = 1; b5 = 1; b6 = 1; b7 = 1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, b1, b2, b3, b4, b5, b6, b7);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00067_run
(JNIEnv *env, jobject instance) {
    jboolean b1; jboolean b2; jboolean b3; jboolean b4; jboolean b5; jboolean b6; jboolean b7;
    b1 = 1; b2 = 1; b3 = 1; b4 = 1; b5 = 1; b6 = 1; b7 = 1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00067_nativemethod (env, instance, b1, b2, b3, b4, b5, b6, b7);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00068_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[68 - 1];

    jboolean b1; jboolean b2; jboolean b3; jboolean b4; jboolean b5; jboolean b6; jboolean b7; jboolean b8;
    b1 = 1; b2 = 1; b3 = 1; b4 = 1; b5 = 1; b6 = 1; b7 = 1; b8 = 1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, b1, b2, b3, b4, b5, b6, b7, b8);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00068_run
(JNIEnv *env, jobject instance) {
    jboolean b1; jboolean b2; jboolean b3; jboolean b4; jboolean b5; jboolean b6; jboolean b7; jboolean b8;
    b1 = 1; b2 = 1; b3 = 1; b4 = 1; b5 = 1; b6 = 1; b7 = 1; b8 = 1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00068_nativemethod (env, instance, b1, b2, b3, b4, b5, b6, b7, b8);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00069_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[69 - 1];

    jboolean b1; jboolean b2; jboolean b3; jboolean b4; jboolean b5; jboolean b6; jboolean b7; jboolean b8; jboolean b9;
    b1 = 1; b2 = 1; b3 = 1; b4 = 1; b5 = 1; b6 = 1; b7 = 1; b8 = 1; b9 = 1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, b1, b2, b3, b4, b5, b6, b7, b8, b9);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00069_run
(JNIEnv *env, jobject instance) {
    jboolean b1; jboolean b2; jboolean b3; jboolean b4; jboolean b5; jboolean b6; jboolean b7; jboolean b8; jboolean b9;
    b1 = 1; b2 = 1; b3 = 1; b4 = 1; b5 = 1; b6 = 1; b7 = 1; b8 = 1; b9 = 1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00069_nativemethod (env, instance, b1, b2, b3, b4, b5, b6, b7, b8, b9);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00070_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[70 - 1];

    jboolean b1; jboolean b2; jboolean b3; jboolean b4; jboolean b5; jboolean b6; jboolean b7; jboolean b8; jboolean b9; jboolean b10;
    b1 = 1; b2 = 1; b3 = 1; b4 = 1; b5 = 1; b6 = 1; b7 = 1; b8 = 1; b9 = 1; b10 = 1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00070_run
(JNIEnv *env, jobject instance) {
    jboolean b1; jboolean b2; jboolean b3; jboolean b4; jboolean b5; jboolean b6; jboolean b7; jboolean b8; jboolean b9; jboolean b10;
    b1 = 1; b2 = 1; b3 = 1; b4 = 1; b5 = 1; b6 = 1; b7 = 1; b8 = 1; b9 = 1; b10 = 1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00070_nativemethod (env, instance, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00071_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[71 - 1];

    jboolean b1; jboolean b2; jboolean b3; jboolean b4; jboolean b5; jboolean b6; jboolean b7; jboolean b8; jboolean b9; jboolean b10; jboolean b11;
    b1 = 1; b2 = 1; b3 = 1; b4 = 1; b5 = 1; b6 = 1; b7 = 1; b8 = 1; b9 = 1; b10 = 1; b11 = 1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00071_run
(JNIEnv *env, jobject instance) {
    jboolean b1; jboolean b2; jboolean b3; jboolean b4; jboolean b5; jboolean b6; jboolean b7; jboolean b8; jboolean b9; jboolean b10; jboolean b11;
    b1 = 1; b2 = 1; b3 = 1; b4 = 1; b5 = 1; b6 = 1; b7 = 1; b8 = 1; b9 = 1; b10 = 1; b11 = 1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00071_nativemethod (env, instance, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00072_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[72 - 1];

    jboolean b1; jboolean b2; jboolean b3; jboolean b4; jboolean b5; jboolean b6; jboolean b7; jboolean b8; jboolean b9; jboolean b10; jboolean b11; jboolean b12;
    b1 = 1; b2 = 1; b3 = 1; b4 = 1; b5 = 1; b6 = 1; b7 = 1; b8 = 1; b9 = 1; b10 = 1; b11 = 1; b12 = 1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11, b12);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00072_run
(JNIEnv *env, jobject instance) {
    jboolean b1; jboolean b2; jboolean b3; jboolean b4; jboolean b5; jboolean b6; jboolean b7; jboolean b8; jboolean b9; jboolean b10; jboolean b11; jboolean b12;
    b1 = 1; b2 = 1; b3 = 1; b4 = 1; b5 = 1; b6 = 1; b7 = 1; b8 = 1; b9 = 1; b10 = 1; b11 = 1; b12 = 1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00072_nativemethod (env, instance, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11, b12);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00073_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[73 - 1];

    jboolean b1; jboolean b2; jboolean b3; jboolean b4; jboolean b5; jboolean b6; jboolean b7; jboolean b8; jboolean b9; jboolean b10; jboolean b11; jboolean b12; jboolean b13;
    b1 = 1; b2 = 1; b3 = 1; b4 = 1; b5 = 1; b6 = 1; b7 = 1; b8 = 1; b9 = 1; b10 = 1; b11 = 1; b12 = 1; b13 = 1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11, b12, b13);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00073_run
(JNIEnv *env, jobject instance) {
    jboolean b1; jboolean b2; jboolean b3; jboolean b4; jboolean b5; jboolean b6; jboolean b7; jboolean b8; jboolean b9; jboolean b10; jboolean b11; jboolean b12; jboolean b13;
    b1 = 1; b2 = 1; b3 = 1; b4 = 1; b5 = 1; b6 = 1; b7 = 1; b8 = 1; b9 = 1; b10 = 1; b11 = 1; b12 = 1; b13 = 1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00073_nativemethod (env, instance, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11, b12, b13);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00074_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[74 - 1];

    jboolean b1; jboolean b2; jboolean b3; jboolean b4; jboolean b5; jboolean b6; jboolean b7; jboolean b8; jboolean b9; jboolean b10; jboolean b11; jboolean b12; jboolean b13; jboolean b14;
    b1 = 1; b2 = 1; b3 = 1; b4 = 1; b5 = 1; b6 = 1; b7 = 1; b8 = 1; b9 = 1; b10 = 1; b11 = 1; b12 = 1; b13 = 1; b14 = 1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11, b12, b13, b14);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00074_run
(JNIEnv *env, jobject instance) {
    jboolean b1; jboolean b2; jboolean b3; jboolean b4; jboolean b5; jboolean b6; jboolean b7; jboolean b8; jboolean b9; jboolean b10; jboolean b11; jboolean b12; jboolean b13; jboolean b14;
    b1 = 1; b2 = 1; b3 = 1; b4 = 1; b5 = 1; b6 = 1; b7 = 1; b8 = 1; b9 = 1; b10 = 1; b11 = 1; b12 = 1; b13 = 1; b14 = 1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00074_nativemethod (env, instance, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11, b12, b13, b14);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00075_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[75 - 1];

    jboolean b1; jboolean b2; jboolean b3; jboolean b4; jboolean b5; jboolean b6; jboolean b7; jboolean b8; jboolean b9; jboolean b10; jboolean b11; jboolean b12; jboolean b13; jboolean b14; jboolean b15;
    b1 = 1; b2 = 1; b3 = 1; b4 = 1; b5 = 1; b6 = 1; b7 = 1; b8 = 1; b9 = 1; b10 = 1; b11 = 1; b12 = 1; b13 = 1; b14 = 1; b15 = 1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11, b12, b13, b14, b15);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00075_run
(JNIEnv *env, jobject instance) {
    jboolean b1; jboolean b2; jboolean b3; jboolean b4; jboolean b5; jboolean b6; jboolean b7; jboolean b8; jboolean b9; jboolean b10; jboolean b11; jboolean b12; jboolean b13; jboolean b14; jboolean b15;
    b1 = 1; b2 = 1; b3 = 1; b4 = 1; b5 = 1; b6 = 1; b7 = 1; b8 = 1; b9 = 1; b10 = 1; b11 = 1; b12 = 1; b13 = 1; b14 = 1; b15 = 1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00075_nativemethod (env, instance, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11, b12, b13, b14, b15);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00076_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[76 - 1];

    jboolean b1; jboolean b2; jboolean b3; jboolean b4; jboolean b5; jboolean b6; jboolean b7; jboolean b8; jboolean b9; jboolean b10; jboolean b11; jboolean b12; jboolean b13; jboolean b14; jboolean b15; jboolean b16;
    b1 = 1; b2 = 1; b3 = 1; b4 = 1; b5 = 1; b6 = 1; b7 = 1; b8 = 1; b9 = 1; b10 = 1; b11 = 1; b12 = 1; b13 = 1; b14 = 1; b15 = 1; b16 = 1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11, b12, b13, b14, b15, b16);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00076_run
(JNIEnv *env, jobject instance) {
    jboolean b1; jboolean b2; jboolean b3; jboolean b4; jboolean b5; jboolean b6; jboolean b7; jboolean b8; jboolean b9; jboolean b10; jboolean b11; jboolean b12; jboolean b13; jboolean b14; jboolean b15; jboolean b16;
    b1 = 1; b2 = 1; b3 = 1; b4 = 1; b5 = 1; b6 = 1; b7 = 1; b8 = 1; b9 = 1; b10 = 1; b11 = 1; b12 = 1; b13 = 1; b14 = 1; b15 = 1; b16 = 1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00076_nativemethod (env, instance, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11, b12, b13, b14, b15, b16);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00077_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[77 - 1];

    jboolean b1; jboolean b2; jboolean b3; jboolean b4; jboolean b5; jboolean b6; jboolean b7; jboolean b8; jboolean b9; jboolean b10; jboolean b11; jboolean b12; jboolean b13; jboolean b14; jboolean b15; jboolean b16; jboolean b17;
    b1 = 1; b2 = 1; b3 = 1; b4 = 1; b5 = 1; b6 = 1; b7 = 1; b8 = 1; b9 = 1; b10 = 1; b11 = 1; b12 = 1; b13 = 1; b14 = 1; b15 = 1; b16 = 1; b17 = 1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11, b12, b13, b14, b15, b16, b17);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00077_run
(JNIEnv *env, jobject instance) {
    jboolean b1; jboolean b2; jboolean b3; jboolean b4; jboolean b5; jboolean b6; jboolean b7; jboolean b8; jboolean b9; jboolean b10; jboolean b11; jboolean b12; jboolean b13; jboolean b14; jboolean b15; jboolean b16; jboolean b17;
    b1 = 1; b2 = 1; b3 = 1; b4 = 1; b5 = 1; b6 = 1; b7 = 1; b8 = 1; b9 = 1; b10 = 1; b11 = 1; b12 = 1; b13 = 1; b14 = 1; b15 = 1; b16 = 1; b17 = 1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00077_nativemethod (env, instance, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11, b12, b13, b14, b15, b16, b17);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00078_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[78 - 1];

    jboolean b1; jboolean b2; jboolean b3; jboolean b4; jboolean b5; jboolean b6; jboolean b7; jboolean b8; jboolean b9; jboolean b10; jboolean b11; jboolean b12; jboolean b13; jboolean b14; jboolean b15; jboolean b16; jboolean b17; jboolean b18;
    b1 = 1; b2 = 1; b3 = 1; b4 = 1; b5 = 1; b6 = 1; b7 = 1; b8 = 1; b9 = 1; b10 = 1; b11 = 1; b12 = 1; b13 = 1; b14 = 1; b15 = 1; b16 = 1; b17 = 1; b18 = 1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11, b12, b13, b14, b15, b16, b17, b18);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00078_run
(JNIEnv *env, jobject instance) {
    jboolean b1; jboolean b2; jboolean b3; jboolean b4; jboolean b5; jboolean b6; jboolean b7; jboolean b8; jboolean b9; jboolean b10; jboolean b11; jboolean b12; jboolean b13; jboolean b14; jboolean b15; jboolean b16; jboolean b17; jboolean b18;
    b1 = 1; b2 = 1; b3 = 1; b4 = 1; b5 = 1; b6 = 1; b7 = 1; b8 = 1; b9 = 1; b10 = 1; b11 = 1; b12 = 1; b13 = 1; b14 = 1; b15 = 1; b16 = 1; b17 = 1; b18 = 1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00078_nativemethod (env, instance, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11, b12, b13, b14, b15, b16, b17, b18);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00079_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[79 - 1];

    jboolean b1; jboolean b2; jboolean b3; jboolean b4; jboolean b5; jboolean b6; jboolean b7; jboolean b8; jboolean b9; jboolean b10; jboolean b11; jboolean b12; jboolean b13; jboolean b14; jboolean b15; jboolean b16; jboolean b17; jboolean b18; jboolean b19;
    b1 = 1; b2 = 1; b3 = 1; b4 = 1; b5 = 1; b6 = 1; b7 = 1; b8 = 1; b9 = 1; b10 = 1; b11 = 1; b12 = 1; b13 = 1; b14 = 1; b15 = 1; b16 = 1; b17 = 1; b18 = 1; b19 = 1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11, b12, b13, b14, b15, b16, b17, b18, b19);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00079_run
(JNIEnv *env, jobject instance) {
    jboolean b1; jboolean b2; jboolean b3; jboolean b4; jboolean b5; jboolean b6; jboolean b7; jboolean b8; jboolean b9; jboolean b10; jboolean b11; jboolean b12; jboolean b13; jboolean b14; jboolean b15; jboolean b16; jboolean b17; jboolean b18; jboolean b19;
    b1 = 1; b2 = 1; b3 = 1; b4 = 1; b5 = 1; b6 = 1; b7 = 1; b8 = 1; b9 = 1; b10 = 1; b11 = 1; b12 = 1; b13 = 1; b14 = 1; b15 = 1; b16 = 1; b17 = 1; b18 = 1; b19 = 1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00079_nativemethod (env, instance, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11, b12, b13, b14, b15, b16, b17, b18, b19);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00080_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[80 - 1];

    jboolean b1; jboolean b2; jboolean b3; jboolean b4; jboolean b5; jboolean b6; jboolean b7; jboolean b8; jboolean b9; jboolean b10; jboolean b11; jboolean b12; jboolean b13; jboolean b14; jboolean b15; jboolean b16; jboolean b17; jboolean b18; jboolean b19; jboolean b20;
    b1 = 1; b2 = 1; b3 = 1; b4 = 1; b5 = 1; b6 = 1; b7 = 1; b8 = 1; b9 = 1; b10 = 1; b11 = 1; b12 = 1; b13 = 1; b14 = 1; b15 = 1; b16 = 1; b17 = 1; b18 = 1; b19 = 1; b20 = 1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11, b12, b13, b14, b15, b16, b17, b18, b19, b20);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00080_run
(JNIEnv *env, jobject instance) {
    jboolean b1; jboolean b2; jboolean b3; jboolean b4; jboolean b5; jboolean b6; jboolean b7; jboolean b8; jboolean b9; jboolean b10; jboolean b11; jboolean b12; jboolean b13; jboolean b14; jboolean b15; jboolean b16; jboolean b17; jboolean b18; jboolean b19; jboolean b20;
    b1 = 1; b2 = 1; b3 = 1; b4 = 1; b5 = 1; b6 = 1; b7 = 1; b8 = 1; b9 = 1; b10 = 1; b11 = 1; b12 = 1; b13 = 1; b14 = 1; b15 = 1; b16 = 1; b17 = 1; b18 = 1; b19 = 1; b20 = 1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00080_nativemethod (env, instance, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11, b12, b13, b14, b15, b16, b17, b18, b19, b20);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00081_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[81 - 1];

    jdouble d1;
    d1 = 105.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, d1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00081_run
(JNIEnv *env, jobject instance) {
    jdouble d1;
    d1 = 105.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00081_nativemethod (env, instance, d1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00082_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[82 - 1];

    jdouble d1; jdouble d2;
    d1 = 105.1; d2 = 105.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, d1, d2);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00082_run
(JNIEnv *env, jobject instance) {
    jdouble d1; jdouble d2;
    d1 = 105.1; d2 = 105.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00082_nativemethod (env, instance, d1, d2);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00083_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[83 - 1];

    jdouble d1; jdouble d2; jdouble d3;
    d1 = 105.1; d2 = 105.1; d3 = 105.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, d1, d2, d3);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00083_run
(JNIEnv *env, jobject instance) {
    jdouble d1; jdouble d2; jdouble d3;
    d1 = 105.1; d2 = 105.1; d3 = 105.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00083_nativemethod (env, instance, d1, d2, d3);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00084_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[84 - 1];

    jdouble d1; jdouble d2; jdouble d3; jdouble d4;
    d1 = 105.1; d2 = 105.1; d3 = 105.1; d4 = 105.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, d1, d2, d3, d4);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00084_run
(JNIEnv *env, jobject instance) {
    jdouble d1; jdouble d2; jdouble d3; jdouble d4;
    d1 = 105.1; d2 = 105.1; d3 = 105.1; d4 = 105.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00084_nativemethod (env, instance, d1, d2, d3, d4);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00085_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[85 - 1];

    jdouble d1; jdouble d2; jdouble d3; jdouble d4; jdouble d5;
    d1 = 105.1; d2 = 105.1; d3 = 105.1; d4 = 105.1; d5 = 105.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, d1, d2, d3, d4, d5);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00085_run
(JNIEnv *env, jobject instance) {
    jdouble d1; jdouble d2; jdouble d3; jdouble d4; jdouble d5;
    d1 = 105.1; d2 = 105.1; d3 = 105.1; d4 = 105.1; d5 = 105.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00085_nativemethod (env, instance, d1, d2, d3, d4, d5);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00086_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[86 - 1];

    jdouble d1; jdouble d2; jdouble d3; jdouble d4; jdouble d5; jdouble d6;
    d1 = 105.1; d2 = 105.1; d3 = 105.1; d4 = 105.1; d5 = 105.1; d6 = 105.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, d1, d2, d3, d4, d5, d6);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00086_run
(JNIEnv *env, jobject instance) {
    jdouble d1; jdouble d2; jdouble d3; jdouble d4; jdouble d5; jdouble d6;
    d1 = 105.1; d2 = 105.1; d3 = 105.1; d4 = 105.1; d5 = 105.1; d6 = 105.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00086_nativemethod (env, instance, d1, d2, d3, d4, d5, d6);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00087_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[87 - 1];

    jdouble d1; jdouble d2; jdouble d3; jdouble d4; jdouble d5; jdouble d6; jdouble d7;
    d1 = 105.1; d2 = 105.1; d3 = 105.1; d4 = 105.1; d5 = 105.1; d6 = 105.1; d7 = 105.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, d1, d2, d3, d4, d5, d6, d7);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00087_run
(JNIEnv *env, jobject instance) {
    jdouble d1; jdouble d2; jdouble d3; jdouble d4; jdouble d5; jdouble d6; jdouble d7;
    d1 = 105.1; d2 = 105.1; d3 = 105.1; d4 = 105.1; d5 = 105.1; d6 = 105.1; d7 = 105.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00087_nativemethod (env, instance, d1, d2, d3, d4, d5, d6, d7);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00088_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[88 - 1];

    jdouble d1; jdouble d2; jdouble d3; jdouble d4; jdouble d5; jdouble d6; jdouble d7; jdouble d8;
    d1 = 105.1; d2 = 105.1; d3 = 105.1; d4 = 105.1; d5 = 105.1; d6 = 105.1; d7 = 105.1; d8 = 105.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, d1, d2, d3, d4, d5, d6, d7, d8);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00088_run
(JNIEnv *env, jobject instance) {
    jdouble d1; jdouble d2; jdouble d3; jdouble d4; jdouble d5; jdouble d6; jdouble d7; jdouble d8;
    d1 = 105.1; d2 = 105.1; d3 = 105.1; d4 = 105.1; d5 = 105.1; d6 = 105.1; d7 = 105.1; d8 = 105.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00088_nativemethod (env, instance, d1, d2, d3, d4, d5, d6, d7, d8);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00089_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[89 - 1];

    jdouble d1; jdouble d2; jdouble d3; jdouble d4; jdouble d5; jdouble d6; jdouble d7; jdouble d8; jdouble d9;
    d1 = 105.1; d2 = 105.1; d3 = 105.1; d4 = 105.1; d5 = 105.1; d6 = 105.1; d7 = 105.1; d8 = 105.1; d9 = 105.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, d1, d2, d3, d4, d5, d6, d7, d8, d9);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00089_run
(JNIEnv *env, jobject instance) {
    jdouble d1; jdouble d2; jdouble d3; jdouble d4; jdouble d5; jdouble d6; jdouble d7; jdouble d8; jdouble d9;
    d1 = 105.1; d2 = 105.1; d3 = 105.1; d4 = 105.1; d5 = 105.1; d6 = 105.1; d7 = 105.1; d8 = 105.1; d9 = 105.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00089_nativemethod (env, instance, d1, d2, d3, d4, d5, d6, d7, d8, d9);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00090_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[90 - 1];

    jdouble d1; jdouble d2; jdouble d3; jdouble d4; jdouble d5; jdouble d6; jdouble d7; jdouble d8; jdouble d9; jdouble d10;
    d1 = 105.1; d2 = 105.1; d3 = 105.1; d4 = 105.1; d5 = 105.1; d6 = 105.1; d7 = 105.1; d8 = 105.1; d9 = 105.1; d10 = 105.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, d1, d2, d3, d4, d5, d6, d7, d8, d9, d10);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00090_run
(JNIEnv *env, jobject instance) {
    jdouble d1; jdouble d2; jdouble d3; jdouble d4; jdouble d5; jdouble d6; jdouble d7; jdouble d8; jdouble d9; jdouble d10;
    d1 = 105.1; d2 = 105.1; d3 = 105.1; d4 = 105.1; d5 = 105.1; d6 = 105.1; d7 = 105.1; d8 = 105.1; d9 = 105.1; d10 = 105.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00090_nativemethod (env, instance, d1, d2, d3, d4, d5, d6, d7, d8, d9, d10);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00091_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[91 - 1];

    jdouble d1; jdouble d2; jdouble d3; jdouble d4; jdouble d5; jdouble d6; jdouble d7; jdouble d8; jdouble d9; jdouble d10; jdouble d11;
    d1 = 105.1; d2 = 105.1; d3 = 105.1; d4 = 105.1; d5 = 105.1; d6 = 105.1; d7 = 105.1; d8 = 105.1; d9 = 105.1; d10 = 105.1; d11 = 105.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00091_run
(JNIEnv *env, jobject instance) {
    jdouble d1; jdouble d2; jdouble d3; jdouble d4; jdouble d5; jdouble d6; jdouble d7; jdouble d8; jdouble d9; jdouble d10; jdouble d11;
    d1 = 105.1; d2 = 105.1; d3 = 105.1; d4 = 105.1; d5 = 105.1; d6 = 105.1; d7 = 105.1; d8 = 105.1; d9 = 105.1; d10 = 105.1; d11 = 105.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00091_nativemethod (env, instance, d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00092_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[92 - 1];

    jdouble d1; jdouble d2; jdouble d3; jdouble d4; jdouble d5; jdouble d6; jdouble d7; jdouble d8; jdouble d9; jdouble d10; jdouble d11; jdouble d12;
    d1 = 105.1; d2 = 105.1; d3 = 105.1; d4 = 105.1; d5 = 105.1; d6 = 105.1; d7 = 105.1; d8 = 105.1; d9 = 105.1; d10 = 105.1; d11 = 105.1; d12 = 105.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00092_run
(JNIEnv *env, jobject instance) {
    jdouble d1; jdouble d2; jdouble d3; jdouble d4; jdouble d5; jdouble d6; jdouble d7; jdouble d8; jdouble d9; jdouble d10; jdouble d11; jdouble d12;
    d1 = 105.1; d2 = 105.1; d3 = 105.1; d4 = 105.1; d5 = 105.1; d6 = 105.1; d7 = 105.1; d8 = 105.1; d9 = 105.1; d10 = 105.1; d11 = 105.1; d12 = 105.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00092_nativemethod (env, instance, d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00093_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[93 - 1];

    jdouble d1; jdouble d2; jdouble d3; jdouble d4; jdouble d5; jdouble d6; jdouble d7; jdouble d8; jdouble d9; jdouble d10; jdouble d11; jdouble d12; jdouble d13;
    d1 = 105.1; d2 = 105.1; d3 = 105.1; d4 = 105.1; d5 = 105.1; d6 = 105.1; d7 = 105.1; d8 = 105.1; d9 = 105.1; d10 = 105.1; d11 = 105.1; d12 = 105.1; d13 = 105.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00093_run
(JNIEnv *env, jobject instance) {
    jdouble d1; jdouble d2; jdouble d3; jdouble d4; jdouble d5; jdouble d6; jdouble d7; jdouble d8; jdouble d9; jdouble d10; jdouble d11; jdouble d12; jdouble d13;
    d1 = 105.1; d2 = 105.1; d3 = 105.1; d4 = 105.1; d5 = 105.1; d6 = 105.1; d7 = 105.1; d8 = 105.1; d9 = 105.1; d10 = 105.1; d11 = 105.1; d12 = 105.1; d13 = 105.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00093_nativemethod (env, instance, d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00094_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[94 - 1];

    jdouble d1; jdouble d2; jdouble d3; jdouble d4; jdouble d5; jdouble d6; jdouble d7; jdouble d8; jdouble d9; jdouble d10; jdouble d11; jdouble d12; jdouble d13; jdouble d14;
    d1 = 105.1; d2 = 105.1; d3 = 105.1; d4 = 105.1; d5 = 105.1; d6 = 105.1; d7 = 105.1; d8 = 105.1; d9 = 105.1; d10 = 105.1; d11 = 105.1; d12 = 105.1; d13 = 105.1; d14 = 105.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13, d14);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00094_run
(JNIEnv *env, jobject instance) {
    jdouble d1; jdouble d2; jdouble d3; jdouble d4; jdouble d5; jdouble d6; jdouble d7; jdouble d8; jdouble d9; jdouble d10; jdouble d11; jdouble d12; jdouble d13; jdouble d14;
    d1 = 105.1; d2 = 105.1; d3 = 105.1; d4 = 105.1; d5 = 105.1; d6 = 105.1; d7 = 105.1; d8 = 105.1; d9 = 105.1; d10 = 105.1; d11 = 105.1; d12 = 105.1; d13 = 105.1; d14 = 105.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00094_nativemethod (env, instance, d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13, d14);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00095_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[95 - 1];

    jdouble d1; jdouble d2; jdouble d3; jdouble d4; jdouble d5; jdouble d6; jdouble d7; jdouble d8; jdouble d9; jdouble d10; jdouble d11; jdouble d12; jdouble d13; jdouble d14; jdouble d15;
    d1 = 105.1; d2 = 105.1; d3 = 105.1; d4 = 105.1; d5 = 105.1; d6 = 105.1; d7 = 105.1; d8 = 105.1; d9 = 105.1; d10 = 105.1; d11 = 105.1; d12 = 105.1; d13 = 105.1; d14 = 105.1; d15 = 105.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13, d14, d15);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00095_run
(JNIEnv *env, jobject instance) {
    jdouble d1; jdouble d2; jdouble d3; jdouble d4; jdouble d5; jdouble d6; jdouble d7; jdouble d8; jdouble d9; jdouble d10; jdouble d11; jdouble d12; jdouble d13; jdouble d14; jdouble d15;
    d1 = 105.1; d2 = 105.1; d3 = 105.1; d4 = 105.1; d5 = 105.1; d6 = 105.1; d7 = 105.1; d8 = 105.1; d9 = 105.1; d10 = 105.1; d11 = 105.1; d12 = 105.1; d13 = 105.1; d14 = 105.1; d15 = 105.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00095_nativemethod (env, instance, d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13, d14, d15);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00096_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[96 - 1];

    jdouble d1; jdouble d2; jdouble d3; jdouble d4; jdouble d5; jdouble d6; jdouble d7; jdouble d8; jdouble d9; jdouble d10; jdouble d11; jdouble d12; jdouble d13; jdouble d14; jdouble d15; jdouble d16;
    d1 = 105.1; d2 = 105.1; d3 = 105.1; d4 = 105.1; d5 = 105.1; d6 = 105.1; d7 = 105.1; d8 = 105.1; d9 = 105.1; d10 = 105.1; d11 = 105.1; d12 = 105.1; d13 = 105.1; d14 = 105.1; d15 = 105.1; d16 = 105.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13, d14, d15, d16);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00096_run
(JNIEnv *env, jobject instance) {
    jdouble d1; jdouble d2; jdouble d3; jdouble d4; jdouble d5; jdouble d6; jdouble d7; jdouble d8; jdouble d9; jdouble d10; jdouble d11; jdouble d12; jdouble d13; jdouble d14; jdouble d15; jdouble d16;
    d1 = 105.1; d2 = 105.1; d3 = 105.1; d4 = 105.1; d5 = 105.1; d6 = 105.1; d7 = 105.1; d8 = 105.1; d9 = 105.1; d10 = 105.1; d11 = 105.1; d12 = 105.1; d13 = 105.1; d14 = 105.1; d15 = 105.1; d16 = 105.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00096_nativemethod (env, instance, d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13, d14, d15, d16);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00097_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[97 - 1];

    jdouble d1; jdouble d2; jdouble d3; jdouble d4; jdouble d5; jdouble d6; jdouble d7; jdouble d8; jdouble d9; jdouble d10; jdouble d11; jdouble d12; jdouble d13; jdouble d14; jdouble d15; jdouble d16; jdouble d17;
    d1 = 105.1; d2 = 105.1; d3 = 105.1; d4 = 105.1; d5 = 105.1; d6 = 105.1; d7 = 105.1; d8 = 105.1; d9 = 105.1; d10 = 105.1; d11 = 105.1; d12 = 105.1; d13 = 105.1; d14 = 105.1; d15 = 105.1; d16 = 105.1; d17 = 105.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13, d14, d15, d16, d17);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00097_run
(JNIEnv *env, jobject instance) {
    jdouble d1; jdouble d2; jdouble d3; jdouble d4; jdouble d5; jdouble d6; jdouble d7; jdouble d8; jdouble d9; jdouble d10; jdouble d11; jdouble d12; jdouble d13; jdouble d14; jdouble d15; jdouble d16; jdouble d17;
    d1 = 105.1; d2 = 105.1; d3 = 105.1; d4 = 105.1; d5 = 105.1; d6 = 105.1; d7 = 105.1; d8 = 105.1; d9 = 105.1; d10 = 105.1; d11 = 105.1; d12 = 105.1; d13 = 105.1; d14 = 105.1; d15 = 105.1; d16 = 105.1; d17 = 105.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00097_nativemethod (env, instance, d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13, d14, d15, d16, d17);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00098_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[98 - 1];

    jdouble d1; jdouble d2; jdouble d3; jdouble d4; jdouble d5; jdouble d6; jdouble d7; jdouble d8; jdouble d9; jdouble d10; jdouble d11; jdouble d12; jdouble d13; jdouble d14; jdouble d15; jdouble d16; jdouble d17; jdouble d18;
    d1 = 105.1; d2 = 105.1; d3 = 105.1; d4 = 105.1; d5 = 105.1; d6 = 105.1; d7 = 105.1; d8 = 105.1; d9 = 105.1; d10 = 105.1; d11 = 105.1; d12 = 105.1; d13 = 105.1; d14 = 105.1; d15 = 105.1; d16 = 105.1; d17 = 105.1; d18 = 105.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13, d14, d15, d16, d17, d18);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00098_run
(JNIEnv *env, jobject instance) {
    jdouble d1; jdouble d2; jdouble d3; jdouble d4; jdouble d5; jdouble d6; jdouble d7; jdouble d8; jdouble d9; jdouble d10; jdouble d11; jdouble d12; jdouble d13; jdouble d14; jdouble d15; jdouble d16; jdouble d17; jdouble d18;
    d1 = 105.1; d2 = 105.1; d3 = 105.1; d4 = 105.1; d5 = 105.1; d6 = 105.1; d7 = 105.1; d8 = 105.1; d9 = 105.1; d10 = 105.1; d11 = 105.1; d12 = 105.1; d13 = 105.1; d14 = 105.1; d15 = 105.1; d16 = 105.1; d17 = 105.1; d18 = 105.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00098_nativemethod (env, instance, d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13, d14, d15, d16, d17, d18);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00099_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[99 - 1];

    jdouble d1; jdouble d2; jdouble d3; jdouble d4; jdouble d5; jdouble d6; jdouble d7; jdouble d8; jdouble d9; jdouble d10; jdouble d11; jdouble d12; jdouble d13; jdouble d14; jdouble d15; jdouble d16; jdouble d17; jdouble d18; jdouble d19;
    d1 = 105.1; d2 = 105.1; d3 = 105.1; d4 = 105.1; d5 = 105.1; d6 = 105.1; d7 = 105.1; d8 = 105.1; d9 = 105.1; d10 = 105.1; d11 = 105.1; d12 = 105.1; d13 = 105.1; d14 = 105.1; d15 = 105.1; d16 = 105.1; d17 = 105.1; d18 = 105.1; d19 = 105.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13, d14, d15, d16, d17, d18, d19);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00099_run
(JNIEnv *env, jobject instance) {
    jdouble d1; jdouble d2; jdouble d3; jdouble d4; jdouble d5; jdouble d6; jdouble d7; jdouble d8; jdouble d9; jdouble d10; jdouble d11; jdouble d12; jdouble d13; jdouble d14; jdouble d15; jdouble d16; jdouble d17; jdouble d18; jdouble d19;
    d1 = 105.1; d2 = 105.1; d3 = 105.1; d4 = 105.1; d5 = 105.1; d6 = 105.1; d7 = 105.1; d8 = 105.1; d9 = 105.1; d10 = 105.1; d11 = 105.1; d12 = 105.1; d13 = 105.1; d14 = 105.1; d15 = 105.1; d16 = 105.1; d17 = 105.1; d18 = 105.1; d19 = 105.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00099_nativemethod (env, instance, d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13, d14, d15, d16, d17, d18, d19);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00100_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[100 - 1];

    jdouble d1; jdouble d2; jdouble d3; jdouble d4; jdouble d5; jdouble d6; jdouble d7; jdouble d8; jdouble d9; jdouble d10; jdouble d11; jdouble d12; jdouble d13; jdouble d14; jdouble d15; jdouble d16; jdouble d17; jdouble d18; jdouble d19; jdouble d20;
    d1 = 105.1; d2 = 105.1; d3 = 105.1; d4 = 105.1; d5 = 105.1; d6 = 105.1; d7 = 105.1; d8 = 105.1; d9 = 105.1; d10 = 105.1; d11 = 105.1; d12 = 105.1; d13 = 105.1; d14 = 105.1; d15 = 105.1; d16 = 105.1; d17 = 105.1; d18 = 105.1; d19 = 105.1; d20 = 105.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13, d14, d15, d16, d17, d18, d19, d20);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00100_run
(JNIEnv *env, jobject instance) {
    jdouble d1; jdouble d2; jdouble d3; jdouble d4; jdouble d5; jdouble d6; jdouble d7; jdouble d8; jdouble d9; jdouble d10; jdouble d11; jdouble d12; jdouble d13; jdouble d14; jdouble d15; jdouble d16; jdouble d17; jdouble d18; jdouble d19; jdouble d20;
    d1 = 105.1; d2 = 105.1; d3 = 105.1; d4 = 105.1; d5 = 105.1; d6 = 105.1; d7 = 105.1; d8 = 105.1; d9 = 105.1; d10 = 105.1; d11 = 105.1; d12 = 105.1; d13 = 105.1; d14 = 105.1; d15 = 105.1; d16 = 105.1; d17 = 105.1; d18 = 105.1; d19 = 105.1; d20 = 105.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00100_nativemethod (env, instance, d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13, d14, d15, d16, d17, d18, d19, d20);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00101_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[101 - 1];

    jfloat f1;
    f1 = 104.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, f1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00101_run
(JNIEnv *env, jobject instance) {
    jfloat f1;
    f1 = 104.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00101_nativemethod (env, instance, f1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00102_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[102 - 1];

    jfloat f1; jfloat f2;
    f1 = 104.1; f2 = 104.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, f1, f2);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00102_run
(JNIEnv *env, jobject instance) {
    jfloat f1; jfloat f2;
    f1 = 104.1; f2 = 104.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00102_nativemethod (env, instance, f1, f2);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00103_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[103 - 1];

    jfloat f1; jfloat f2; jfloat f3;
    f1 = 104.1; f2 = 104.1; f3 = 104.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, f1, f2, f3);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00103_run
(JNIEnv *env, jobject instance) {
    jfloat f1; jfloat f2; jfloat f3;
    f1 = 104.1; f2 = 104.1; f3 = 104.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00103_nativemethod (env, instance, f1, f2, f3);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00104_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[104 - 1];

    jfloat f1; jfloat f2; jfloat f3; jfloat f4;
    f1 = 104.1; f2 = 104.1; f3 = 104.1; f4 = 104.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, f1, f2, f3, f4);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00104_run
(JNIEnv *env, jobject instance) {
    jfloat f1; jfloat f2; jfloat f3; jfloat f4;
    f1 = 104.1; f2 = 104.1; f3 = 104.1; f4 = 104.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00104_nativemethod (env, instance, f1, f2, f3, f4);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00105_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[105 - 1];

    jfloat f1; jfloat f2; jfloat f3; jfloat f4; jfloat f5;
    f1 = 104.1; f2 = 104.1; f3 = 104.1; f4 = 104.1; f5 = 104.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, f1, f2, f3, f4, f5);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00105_run
(JNIEnv *env, jobject instance) {
    jfloat f1; jfloat f2; jfloat f3; jfloat f4; jfloat f5;
    f1 = 104.1; f2 = 104.1; f3 = 104.1; f4 = 104.1; f5 = 104.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00105_nativemethod (env, instance, f1, f2, f3, f4, f5);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00106_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[106 - 1];

    jfloat f1; jfloat f2; jfloat f3; jfloat f4; jfloat f5; jfloat f6;
    f1 = 104.1; f2 = 104.1; f3 = 104.1; f4 = 104.1; f5 = 104.1; f6 = 104.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, f1, f2, f3, f4, f5, f6);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00106_run
(JNIEnv *env, jobject instance) {
    jfloat f1; jfloat f2; jfloat f3; jfloat f4; jfloat f5; jfloat f6;
    f1 = 104.1; f2 = 104.1; f3 = 104.1; f4 = 104.1; f5 = 104.1; f6 = 104.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00106_nativemethod (env, instance, f1, f2, f3, f4, f5, f6);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00107_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[107 - 1];

    jfloat f1; jfloat f2; jfloat f3; jfloat f4; jfloat f5; jfloat f6; jfloat f7;
    f1 = 104.1; f2 = 104.1; f3 = 104.1; f4 = 104.1; f5 = 104.1; f6 = 104.1; f7 = 104.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, f1, f2, f3, f4, f5, f6, f7);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00107_run
(JNIEnv *env, jobject instance) {
    jfloat f1; jfloat f2; jfloat f3; jfloat f4; jfloat f5; jfloat f6; jfloat f7;
    f1 = 104.1; f2 = 104.1; f3 = 104.1; f4 = 104.1; f5 = 104.1; f6 = 104.1; f7 = 104.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00107_nativemethod (env, instance, f1, f2, f3, f4, f5, f6, f7);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00108_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[108 - 1];

    jfloat f1; jfloat f2; jfloat f3; jfloat f4; jfloat f5; jfloat f6; jfloat f7; jfloat f8;
    f1 = 104.1; f2 = 104.1; f3 = 104.1; f4 = 104.1; f5 = 104.1; f6 = 104.1; f7 = 104.1; f8 = 104.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, f1, f2, f3, f4, f5, f6, f7, f8);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00108_run
(JNIEnv *env, jobject instance) {
    jfloat f1; jfloat f2; jfloat f3; jfloat f4; jfloat f5; jfloat f6; jfloat f7; jfloat f8;
    f1 = 104.1; f2 = 104.1; f3 = 104.1; f4 = 104.1; f5 = 104.1; f6 = 104.1; f7 = 104.1; f8 = 104.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00108_nativemethod (env, instance, f1, f2, f3, f4, f5, f6, f7, f8);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00109_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[109 - 1];

    jfloat f1; jfloat f2; jfloat f3; jfloat f4; jfloat f5; jfloat f6; jfloat f7; jfloat f8; jfloat f9;
    f1 = 104.1; f2 = 104.1; f3 = 104.1; f4 = 104.1; f5 = 104.1; f6 = 104.1; f7 = 104.1; f8 = 104.1; f9 = 104.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, f1, f2, f3, f4, f5, f6, f7, f8, f9);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00109_run
(JNIEnv *env, jobject instance) {
    jfloat f1; jfloat f2; jfloat f3; jfloat f4; jfloat f5; jfloat f6; jfloat f7; jfloat f8; jfloat f9;
    f1 = 104.1; f2 = 104.1; f3 = 104.1; f4 = 104.1; f5 = 104.1; f6 = 104.1; f7 = 104.1; f8 = 104.1; f9 = 104.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00109_nativemethod (env, instance, f1, f2, f3, f4, f5, f6, f7, f8, f9);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00110_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[110 - 1];

    jfloat f1; jfloat f2; jfloat f3; jfloat f4; jfloat f5; jfloat f6; jfloat f7; jfloat f8; jfloat f9; jfloat f10;
    f1 = 104.1; f2 = 104.1; f3 = 104.1; f4 = 104.1; f5 = 104.1; f6 = 104.1; f7 = 104.1; f8 = 104.1; f9 = 104.1; f10 = 104.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00110_run
(JNIEnv *env, jobject instance) {
    jfloat f1; jfloat f2; jfloat f3; jfloat f4; jfloat f5; jfloat f6; jfloat f7; jfloat f8; jfloat f9; jfloat f10;
    f1 = 104.1; f2 = 104.1; f3 = 104.1; f4 = 104.1; f5 = 104.1; f6 = 104.1; f7 = 104.1; f8 = 104.1; f9 = 104.1; f10 = 104.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00110_nativemethod (env, instance, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00111_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[111 - 1];

    jfloat f1; jfloat f2; jfloat f3; jfloat f4; jfloat f5; jfloat f6; jfloat f7; jfloat f8; jfloat f9; jfloat f10; jfloat f11;
    f1 = 104.1; f2 = 104.1; f3 = 104.1; f4 = 104.1; f5 = 104.1; f6 = 104.1; f7 = 104.1; f8 = 104.1; f9 = 104.1; f10 = 104.1; f11 = 104.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00111_run
(JNIEnv *env, jobject instance) {
    jfloat f1; jfloat f2; jfloat f3; jfloat f4; jfloat f5; jfloat f6; jfloat f7; jfloat f8; jfloat f9; jfloat f10; jfloat f11;
    f1 = 104.1; f2 = 104.1; f3 = 104.1; f4 = 104.1; f5 = 104.1; f6 = 104.1; f7 = 104.1; f8 = 104.1; f9 = 104.1; f10 = 104.1; f11 = 104.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00111_nativemethod (env, instance, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00112_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[112 - 1];

    jfloat f1; jfloat f2; jfloat f3; jfloat f4; jfloat f5; jfloat f6; jfloat f7; jfloat f8; jfloat f9; jfloat f10; jfloat f11; jfloat f12;
    f1 = 104.1; f2 = 104.1; f3 = 104.1; f4 = 104.1; f5 = 104.1; f6 = 104.1; f7 = 104.1; f8 = 104.1; f9 = 104.1; f10 = 104.1; f11 = 104.1; f12 = 104.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, f12);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00112_run
(JNIEnv *env, jobject instance) {
    jfloat f1; jfloat f2; jfloat f3; jfloat f4; jfloat f5; jfloat f6; jfloat f7; jfloat f8; jfloat f9; jfloat f10; jfloat f11; jfloat f12;
    f1 = 104.1; f2 = 104.1; f3 = 104.1; f4 = 104.1; f5 = 104.1; f6 = 104.1; f7 = 104.1; f8 = 104.1; f9 = 104.1; f10 = 104.1; f11 = 104.1; f12 = 104.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00112_nativemethod (env, instance, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, f12);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00113_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[113 - 1];

    jfloat f1; jfloat f2; jfloat f3; jfloat f4; jfloat f5; jfloat f6; jfloat f7; jfloat f8; jfloat f9; jfloat f10; jfloat f11; jfloat f12; jfloat f13;
    f1 = 104.1; f2 = 104.1; f3 = 104.1; f4 = 104.1; f5 = 104.1; f6 = 104.1; f7 = 104.1; f8 = 104.1; f9 = 104.1; f10 = 104.1; f11 = 104.1; f12 = 104.1; f13 = 104.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, f12, f13);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00113_run
(JNIEnv *env, jobject instance) {
    jfloat f1; jfloat f2; jfloat f3; jfloat f4; jfloat f5; jfloat f6; jfloat f7; jfloat f8; jfloat f9; jfloat f10; jfloat f11; jfloat f12; jfloat f13;
    f1 = 104.1; f2 = 104.1; f3 = 104.1; f4 = 104.1; f5 = 104.1; f6 = 104.1; f7 = 104.1; f8 = 104.1; f9 = 104.1; f10 = 104.1; f11 = 104.1; f12 = 104.1; f13 = 104.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00113_nativemethod (env, instance, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, f12, f13);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00114_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[114 - 1];

    jfloat f1; jfloat f2; jfloat f3; jfloat f4; jfloat f5; jfloat f6; jfloat f7; jfloat f8; jfloat f9; jfloat f10; jfloat f11; jfloat f12; jfloat f13; jfloat f14;
    f1 = 104.1; f2 = 104.1; f3 = 104.1; f4 = 104.1; f5 = 104.1; f6 = 104.1; f7 = 104.1; f8 = 104.1; f9 = 104.1; f10 = 104.1; f11 = 104.1; f12 = 104.1; f13 = 104.1; f14 = 104.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, f12, f13, f14);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00114_run
(JNIEnv *env, jobject instance) {
    jfloat f1; jfloat f2; jfloat f3; jfloat f4; jfloat f5; jfloat f6; jfloat f7; jfloat f8; jfloat f9; jfloat f10; jfloat f11; jfloat f12; jfloat f13; jfloat f14;
    f1 = 104.1; f2 = 104.1; f3 = 104.1; f4 = 104.1; f5 = 104.1; f6 = 104.1; f7 = 104.1; f8 = 104.1; f9 = 104.1; f10 = 104.1; f11 = 104.1; f12 = 104.1; f13 = 104.1; f14 = 104.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00114_nativemethod (env, instance, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, f12, f13, f14);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00115_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[115 - 1];

    jfloat f1; jfloat f2; jfloat f3; jfloat f4; jfloat f5; jfloat f6; jfloat f7; jfloat f8; jfloat f9; jfloat f10; jfloat f11; jfloat f12; jfloat f13; jfloat f14; jfloat f15;
    f1 = 104.1; f2 = 104.1; f3 = 104.1; f4 = 104.1; f5 = 104.1; f6 = 104.1; f7 = 104.1; f8 = 104.1; f9 = 104.1; f10 = 104.1; f11 = 104.1; f12 = 104.1; f13 = 104.1; f14 = 104.1; f15 = 104.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, f12, f13, f14, f15);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00115_run
(JNIEnv *env, jobject instance) {
    jfloat f1; jfloat f2; jfloat f3; jfloat f4; jfloat f5; jfloat f6; jfloat f7; jfloat f8; jfloat f9; jfloat f10; jfloat f11; jfloat f12; jfloat f13; jfloat f14; jfloat f15;
    f1 = 104.1; f2 = 104.1; f3 = 104.1; f4 = 104.1; f5 = 104.1; f6 = 104.1; f7 = 104.1; f8 = 104.1; f9 = 104.1; f10 = 104.1; f11 = 104.1; f12 = 104.1; f13 = 104.1; f14 = 104.1; f15 = 104.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00115_nativemethod (env, instance, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, f12, f13, f14, f15);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00116_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[116 - 1];

    jfloat f1; jfloat f2; jfloat f3; jfloat f4; jfloat f5; jfloat f6; jfloat f7; jfloat f8; jfloat f9; jfloat f10; jfloat f11; jfloat f12; jfloat f13; jfloat f14; jfloat f15; jfloat f16;
    f1 = 104.1; f2 = 104.1; f3 = 104.1; f4 = 104.1; f5 = 104.1; f6 = 104.1; f7 = 104.1; f8 = 104.1; f9 = 104.1; f10 = 104.1; f11 = 104.1; f12 = 104.1; f13 = 104.1; f14 = 104.1; f15 = 104.1; f16 = 104.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, f12, f13, f14, f15, f16);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00116_run
(JNIEnv *env, jobject instance) {
    jfloat f1; jfloat f2; jfloat f3; jfloat f4; jfloat f5; jfloat f6; jfloat f7; jfloat f8; jfloat f9; jfloat f10; jfloat f11; jfloat f12; jfloat f13; jfloat f14; jfloat f15; jfloat f16;
    f1 = 104.1; f2 = 104.1; f3 = 104.1; f4 = 104.1; f5 = 104.1; f6 = 104.1; f7 = 104.1; f8 = 104.1; f9 = 104.1; f10 = 104.1; f11 = 104.1; f12 = 104.1; f13 = 104.1; f14 = 104.1; f15 = 104.1; f16 = 104.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00116_nativemethod (env, instance, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, f12, f13, f14, f15, f16);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00117_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[117 - 1];

    jfloat f1; jfloat f2; jfloat f3; jfloat f4; jfloat f5; jfloat f6; jfloat f7; jfloat f8; jfloat f9; jfloat f10; jfloat f11; jfloat f12; jfloat f13; jfloat f14; jfloat f15; jfloat f16; jfloat f17;
    f1 = 104.1; f2 = 104.1; f3 = 104.1; f4 = 104.1; f5 = 104.1; f6 = 104.1; f7 = 104.1; f8 = 104.1; f9 = 104.1; f10 = 104.1; f11 = 104.1; f12 = 104.1; f13 = 104.1; f14 = 104.1; f15 = 104.1; f16 = 104.1; f17 = 104.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, f12, f13, f14, f15, f16, f17);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00117_run
(JNIEnv *env, jobject instance) {
    jfloat f1; jfloat f2; jfloat f3; jfloat f4; jfloat f5; jfloat f6; jfloat f7; jfloat f8; jfloat f9; jfloat f10; jfloat f11; jfloat f12; jfloat f13; jfloat f14; jfloat f15; jfloat f16; jfloat f17;
    f1 = 104.1; f2 = 104.1; f3 = 104.1; f4 = 104.1; f5 = 104.1; f6 = 104.1; f7 = 104.1; f8 = 104.1; f9 = 104.1; f10 = 104.1; f11 = 104.1; f12 = 104.1; f13 = 104.1; f14 = 104.1; f15 = 104.1; f16 = 104.1; f17 = 104.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00117_nativemethod (env, instance, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, f12, f13, f14, f15, f16, f17);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00118_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[118 - 1];

    jfloat f1; jfloat f2; jfloat f3; jfloat f4; jfloat f5; jfloat f6; jfloat f7; jfloat f8; jfloat f9; jfloat f10; jfloat f11; jfloat f12; jfloat f13; jfloat f14; jfloat f15; jfloat f16; jfloat f17; jfloat f18;
    f1 = 104.1; f2 = 104.1; f3 = 104.1; f4 = 104.1; f5 = 104.1; f6 = 104.1; f7 = 104.1; f8 = 104.1; f9 = 104.1; f10 = 104.1; f11 = 104.1; f12 = 104.1; f13 = 104.1; f14 = 104.1; f15 = 104.1; f16 = 104.1; f17 = 104.1; f18 = 104.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, f12, f13, f14, f15, f16, f17, f18);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00118_run
(JNIEnv *env, jobject instance) {
    jfloat f1; jfloat f2; jfloat f3; jfloat f4; jfloat f5; jfloat f6; jfloat f7; jfloat f8; jfloat f9; jfloat f10; jfloat f11; jfloat f12; jfloat f13; jfloat f14; jfloat f15; jfloat f16; jfloat f17; jfloat f18;
    f1 = 104.1; f2 = 104.1; f3 = 104.1; f4 = 104.1; f5 = 104.1; f6 = 104.1; f7 = 104.1; f8 = 104.1; f9 = 104.1; f10 = 104.1; f11 = 104.1; f12 = 104.1; f13 = 104.1; f14 = 104.1; f15 = 104.1; f16 = 104.1; f17 = 104.1; f18 = 104.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00118_nativemethod (env, instance, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, f12, f13, f14, f15, f16, f17, f18);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00119_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[119 - 1];

    jfloat f1; jfloat f2; jfloat f3; jfloat f4; jfloat f5; jfloat f6; jfloat f7; jfloat f8; jfloat f9; jfloat f10; jfloat f11; jfloat f12; jfloat f13; jfloat f14; jfloat f15; jfloat f16; jfloat f17; jfloat f18; jfloat f19;
    f1 = 104.1; f2 = 104.1; f3 = 104.1; f4 = 104.1; f5 = 104.1; f6 = 104.1; f7 = 104.1; f8 = 104.1; f9 = 104.1; f10 = 104.1; f11 = 104.1; f12 = 104.1; f13 = 104.1; f14 = 104.1; f15 = 104.1; f16 = 104.1; f17 = 104.1; f18 = 104.1; f19 = 104.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, f12, f13, f14, f15, f16, f17, f18, f19);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00119_run
(JNIEnv *env, jobject instance) {
    jfloat f1; jfloat f2; jfloat f3; jfloat f4; jfloat f5; jfloat f6; jfloat f7; jfloat f8; jfloat f9; jfloat f10; jfloat f11; jfloat f12; jfloat f13; jfloat f14; jfloat f15; jfloat f16; jfloat f17; jfloat f18; jfloat f19;
    f1 = 104.1; f2 = 104.1; f3 = 104.1; f4 = 104.1; f5 = 104.1; f6 = 104.1; f7 = 104.1; f8 = 104.1; f9 = 104.1; f10 = 104.1; f11 = 104.1; f12 = 104.1; f13 = 104.1; f14 = 104.1; f15 = 104.1; f16 = 104.1; f17 = 104.1; f18 = 104.1; f19 = 104.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00119_nativemethod (env, instance, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, f12, f13, f14, f15, f16, f17, f18, f19);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00120_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[120 - 1];

    jfloat f1; jfloat f2; jfloat f3; jfloat f4; jfloat f5; jfloat f6; jfloat f7; jfloat f8; jfloat f9; jfloat f10; jfloat f11; jfloat f12; jfloat f13; jfloat f14; jfloat f15; jfloat f16; jfloat f17; jfloat f18; jfloat f19; jfloat f20;
    f1 = 104.1; f2 = 104.1; f3 = 104.1; f4 = 104.1; f5 = 104.1; f6 = 104.1; f7 = 104.1; f8 = 104.1; f9 = 104.1; f10 = 104.1; f11 = 104.1; f12 = 104.1; f13 = 104.1; f14 = 104.1; f15 = 104.1; f16 = 104.1; f17 = 104.1; f18 = 104.1; f19 = 104.1; f20 = 104.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, f12, f13, f14, f15, f16, f17, f18, f19, f20);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00120_run
(JNIEnv *env, jobject instance) {
    jfloat f1; jfloat f2; jfloat f3; jfloat f4; jfloat f5; jfloat f6; jfloat f7; jfloat f8; jfloat f9; jfloat f10; jfloat f11; jfloat f12; jfloat f13; jfloat f14; jfloat f15; jfloat f16; jfloat f17; jfloat f18; jfloat f19; jfloat f20;
    f1 = 104.1; f2 = 104.1; f3 = 104.1; f4 = 104.1; f5 = 104.1; f6 = 104.1; f7 = 104.1; f8 = 104.1; f9 = 104.1; f10 = 104.1; f11 = 104.1; f12 = 104.1; f13 = 104.1; f14 = 104.1; f15 = 104.1; f16 = 104.1; f17 = 104.1; f18 = 104.1; f19 = 104.1; f20 = 104.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00120_nativemethod (env, instance, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, f12, f13, f14, f15, f16, f17, f18, f19, f20);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00121_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[121 - 1];

    jint i1;
    i1 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, i1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00121_run
(JNIEnv *env, jobject instance) {
    jint i1;
    i1 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00121_nativemethod (env, instance, i1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00122_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[122 - 1];

    jint i1; jint i2;
    i1 = 102; i2 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, i1, i2);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00122_run
(JNIEnv *env, jobject instance) {
    jint i1; jint i2;
    i1 = 102; i2 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00122_nativemethod (env, instance, i1, i2);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00123_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[123 - 1];

    jint i1; jint i2; jint i3;
    i1 = 102; i2 = 102; i3 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, i1, i2, i3);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00123_run
(JNIEnv *env, jobject instance) {
    jint i1; jint i2; jint i3;
    i1 = 102; i2 = 102; i3 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00123_nativemethod (env, instance, i1, i2, i3);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00124_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[124 - 1];

    jint i1; jint i2; jint i3; jint i4;
    i1 = 102; i2 = 102; i3 = 102; i4 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, i1, i2, i3, i4);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00124_run
(JNIEnv *env, jobject instance) {
    jint i1; jint i2; jint i3; jint i4;
    i1 = 102; i2 = 102; i3 = 102; i4 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00124_nativemethod (env, instance, i1, i2, i3, i4);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00125_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[125 - 1];

    jint i1; jint i2; jint i3; jint i4; jint i5;
    i1 = 102; i2 = 102; i3 = 102; i4 = 102; i5 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, i1, i2, i3, i4, i5);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00125_run
(JNIEnv *env, jobject instance) {
    jint i1; jint i2; jint i3; jint i4; jint i5;
    i1 = 102; i2 = 102; i3 = 102; i4 = 102; i5 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00125_nativemethod (env, instance, i1, i2, i3, i4, i5);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00126_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[126 - 1];

    jint i1; jint i2; jint i3; jint i4; jint i5; jint i6;
    i1 = 102; i2 = 102; i3 = 102; i4 = 102; i5 = 102; i6 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, i1, i2, i3, i4, i5, i6);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00126_run
(JNIEnv *env, jobject instance) {
    jint i1; jint i2; jint i3; jint i4; jint i5; jint i6;
    i1 = 102; i2 = 102; i3 = 102; i4 = 102; i5 = 102; i6 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00126_nativemethod (env, instance, i1, i2, i3, i4, i5, i6);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00127_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[127 - 1];

    jint i1; jint i2; jint i3; jint i4; jint i5; jint i6; jint i7;
    i1 = 102; i2 = 102; i3 = 102; i4 = 102; i5 = 102; i6 = 102; i7 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, i1, i2, i3, i4, i5, i6, i7);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00127_run
(JNIEnv *env, jobject instance) {
    jint i1; jint i2; jint i3; jint i4; jint i5; jint i6; jint i7;
    i1 = 102; i2 = 102; i3 = 102; i4 = 102; i5 = 102; i6 = 102; i7 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00127_nativemethod (env, instance, i1, i2, i3, i4, i5, i6, i7);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00128_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[128 - 1];

    jint i1; jint i2; jint i3; jint i4; jint i5; jint i6; jint i7; jint i8;
    i1 = 102; i2 = 102; i3 = 102; i4 = 102; i5 = 102; i6 = 102; i7 = 102; i8 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, i1, i2, i3, i4, i5, i6, i7, i8);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00128_run
(JNIEnv *env, jobject instance) {
    jint i1; jint i2; jint i3; jint i4; jint i5; jint i6; jint i7; jint i8;
    i1 = 102; i2 = 102; i3 = 102; i4 = 102; i5 = 102; i6 = 102; i7 = 102; i8 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00128_nativemethod (env, instance, i1, i2, i3, i4, i5, i6, i7, i8);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00129_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[129 - 1];

    jint i1; jint i2; jint i3; jint i4; jint i5; jint i6; jint i7; jint i8; jint i9;
    i1 = 102; i2 = 102; i3 = 102; i4 = 102; i5 = 102; i6 = 102; i7 = 102; i8 = 102; i9 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, i1, i2, i3, i4, i5, i6, i7, i8, i9);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00129_run
(JNIEnv *env, jobject instance) {
    jint i1; jint i2; jint i3; jint i4; jint i5; jint i6; jint i7; jint i8; jint i9;
    i1 = 102; i2 = 102; i3 = 102; i4 = 102; i5 = 102; i6 = 102; i7 = 102; i8 = 102; i9 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00129_nativemethod (env, instance, i1, i2, i3, i4, i5, i6, i7, i8, i9);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00130_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[130 - 1];

    jint i1; jint i2; jint i3; jint i4; jint i5; jint i6; jint i7; jint i8; jint i9; jint i10;
    i1 = 102; i2 = 102; i3 = 102; i4 = 102; i5 = 102; i6 = 102; i7 = 102; i8 = 102; i9 = 102; i10 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00130_run
(JNIEnv *env, jobject instance) {
    jint i1; jint i2; jint i3; jint i4; jint i5; jint i6; jint i7; jint i8; jint i9; jint i10;
    i1 = 102; i2 = 102; i3 = 102; i4 = 102; i5 = 102; i6 = 102; i7 = 102; i8 = 102; i9 = 102; i10 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00130_nativemethod (env, instance, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00131_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[131 - 1];

    jint i1; jint i2; jint i3; jint i4; jint i5; jint i6; jint i7; jint i8; jint i9; jint i10; jint i11;
    i1 = 102; i2 = 102; i3 = 102; i4 = 102; i5 = 102; i6 = 102; i7 = 102; i8 = 102; i9 = 102; i10 = 102; i11 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00131_run
(JNIEnv *env, jobject instance) {
    jint i1; jint i2; jint i3; jint i4; jint i5; jint i6; jint i7; jint i8; jint i9; jint i10; jint i11;
    i1 = 102; i2 = 102; i3 = 102; i4 = 102; i5 = 102; i6 = 102; i7 = 102; i8 = 102; i9 = 102; i10 = 102; i11 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00131_nativemethod (env, instance, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00132_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[132 - 1];

    jint i1; jint i2; jint i3; jint i4; jint i5; jint i6; jint i7; jint i8; jint i9; jint i10; jint i11; jint i12;
    i1 = 102; i2 = 102; i3 = 102; i4 = 102; i5 = 102; i6 = 102; i7 = 102; i8 = 102; i9 = 102; i10 = 102; i11 = 102; i12 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00132_run
(JNIEnv *env, jobject instance) {
    jint i1; jint i2; jint i3; jint i4; jint i5; jint i6; jint i7; jint i8; jint i9; jint i10; jint i11; jint i12;
    i1 = 102; i2 = 102; i3 = 102; i4 = 102; i5 = 102; i6 = 102; i7 = 102; i8 = 102; i9 = 102; i10 = 102; i11 = 102; i12 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00132_nativemethod (env, instance, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00133_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[133 - 1];

    jint i1; jint i2; jint i3; jint i4; jint i5; jint i6; jint i7; jint i8; jint i9; jint i10; jint i11; jint i12; jint i13;
    i1 = 102; i2 = 102; i3 = 102; i4 = 102; i5 = 102; i6 = 102; i7 = 102; i8 = 102; i9 = 102; i10 = 102; i11 = 102; i12 = 102; i13 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, i13);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00133_run
(JNIEnv *env, jobject instance) {
    jint i1; jint i2; jint i3; jint i4; jint i5; jint i6; jint i7; jint i8; jint i9; jint i10; jint i11; jint i12; jint i13;
    i1 = 102; i2 = 102; i3 = 102; i4 = 102; i5 = 102; i6 = 102; i7 = 102; i8 = 102; i9 = 102; i10 = 102; i11 = 102; i12 = 102; i13 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00133_nativemethod (env, instance, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, i13);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00134_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[134 - 1];

    jint i1; jint i2; jint i3; jint i4; jint i5; jint i6; jint i7; jint i8; jint i9; jint i10; jint i11; jint i12; jint i13; jint i14;
    i1 = 102; i2 = 102; i3 = 102; i4 = 102; i5 = 102; i6 = 102; i7 = 102; i8 = 102; i9 = 102; i10 = 102; i11 = 102; i12 = 102; i13 = 102; i14 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, i13, i14);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00134_run
(JNIEnv *env, jobject instance) {
    jint i1; jint i2; jint i3; jint i4; jint i5; jint i6; jint i7; jint i8; jint i9; jint i10; jint i11; jint i12; jint i13; jint i14;
    i1 = 102; i2 = 102; i3 = 102; i4 = 102; i5 = 102; i6 = 102; i7 = 102; i8 = 102; i9 = 102; i10 = 102; i11 = 102; i12 = 102; i13 = 102; i14 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00134_nativemethod (env, instance, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, i13, i14);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00135_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[135 - 1];

    jint i1; jint i2; jint i3; jint i4; jint i5; jint i6; jint i7; jint i8; jint i9; jint i10; jint i11; jint i12; jint i13; jint i14; jint i15;
    i1 = 102; i2 = 102; i3 = 102; i4 = 102; i5 = 102; i6 = 102; i7 = 102; i8 = 102; i9 = 102; i10 = 102; i11 = 102; i12 = 102; i13 = 102; i14 = 102; i15 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, i13, i14, i15);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00135_run
(JNIEnv *env, jobject instance) {
    jint i1; jint i2; jint i3; jint i4; jint i5; jint i6; jint i7; jint i8; jint i9; jint i10; jint i11; jint i12; jint i13; jint i14; jint i15;
    i1 = 102; i2 = 102; i3 = 102; i4 = 102; i5 = 102; i6 = 102; i7 = 102; i8 = 102; i9 = 102; i10 = 102; i11 = 102; i12 = 102; i13 = 102; i14 = 102; i15 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00135_nativemethod (env, instance, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, i13, i14, i15);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00136_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[136 - 1];

    jint i1; jint i2; jint i3; jint i4; jint i5; jint i6; jint i7; jint i8; jint i9; jint i10; jint i11; jint i12; jint i13; jint i14; jint i15; jint i16;
    i1 = 102; i2 = 102; i3 = 102; i4 = 102; i5 = 102; i6 = 102; i7 = 102; i8 = 102; i9 = 102; i10 = 102; i11 = 102; i12 = 102; i13 = 102; i14 = 102; i15 = 102; i16 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, i13, i14, i15, i16);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00136_run
(JNIEnv *env, jobject instance) {
    jint i1; jint i2; jint i3; jint i4; jint i5; jint i6; jint i7; jint i8; jint i9; jint i10; jint i11; jint i12; jint i13; jint i14; jint i15; jint i16;
    i1 = 102; i2 = 102; i3 = 102; i4 = 102; i5 = 102; i6 = 102; i7 = 102; i8 = 102; i9 = 102; i10 = 102; i11 = 102; i12 = 102; i13 = 102; i14 = 102; i15 = 102; i16 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00136_nativemethod (env, instance, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, i13, i14, i15, i16);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00137_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[137 - 1];

    jint i1; jint i2; jint i3; jint i4; jint i5; jint i6; jint i7; jint i8; jint i9; jint i10; jint i11; jint i12; jint i13; jint i14; jint i15; jint i16; jint i17;
    i1 = 102; i2 = 102; i3 = 102; i4 = 102; i5 = 102; i6 = 102; i7 = 102; i8 = 102; i9 = 102; i10 = 102; i11 = 102; i12 = 102; i13 = 102; i14 = 102; i15 = 102; i16 = 102; i17 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, i13, i14, i15, i16, i17);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00137_run
(JNIEnv *env, jobject instance) {
    jint i1; jint i2; jint i3; jint i4; jint i5; jint i6; jint i7; jint i8; jint i9; jint i10; jint i11; jint i12; jint i13; jint i14; jint i15; jint i16; jint i17;
    i1 = 102; i2 = 102; i3 = 102; i4 = 102; i5 = 102; i6 = 102; i7 = 102; i8 = 102; i9 = 102; i10 = 102; i11 = 102; i12 = 102; i13 = 102; i14 = 102; i15 = 102; i16 = 102; i17 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00137_nativemethod (env, instance, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, i13, i14, i15, i16, i17);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00138_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[138 - 1];

    jint i1; jint i2; jint i3; jint i4; jint i5; jint i6; jint i7; jint i8; jint i9; jint i10; jint i11; jint i12; jint i13; jint i14; jint i15; jint i16; jint i17; jint i18;
    i1 = 102; i2 = 102; i3 = 102; i4 = 102; i5 = 102; i6 = 102; i7 = 102; i8 = 102; i9 = 102; i10 = 102; i11 = 102; i12 = 102; i13 = 102; i14 = 102; i15 = 102; i16 = 102; i17 = 102; i18 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, i13, i14, i15, i16, i17, i18);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00138_run
(JNIEnv *env, jobject instance) {
    jint i1; jint i2; jint i3; jint i4; jint i5; jint i6; jint i7; jint i8; jint i9; jint i10; jint i11; jint i12; jint i13; jint i14; jint i15; jint i16; jint i17; jint i18;
    i1 = 102; i2 = 102; i3 = 102; i4 = 102; i5 = 102; i6 = 102; i7 = 102; i8 = 102; i9 = 102; i10 = 102; i11 = 102; i12 = 102; i13 = 102; i14 = 102; i15 = 102; i16 = 102; i17 = 102; i18 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00138_nativemethod (env, instance, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, i13, i14, i15, i16, i17, i18);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00139_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[139 - 1];

    jint i1; jint i2; jint i3; jint i4; jint i5; jint i6; jint i7; jint i8; jint i9; jint i10; jint i11; jint i12; jint i13; jint i14; jint i15; jint i16; jint i17; jint i18; jint i19;
    i1 = 102; i2 = 102; i3 = 102; i4 = 102; i5 = 102; i6 = 102; i7 = 102; i8 = 102; i9 = 102; i10 = 102; i11 = 102; i12 = 102; i13 = 102; i14 = 102; i15 = 102; i16 = 102; i17 = 102; i18 = 102; i19 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, i13, i14, i15, i16, i17, i18, i19);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00139_run
(JNIEnv *env, jobject instance) {
    jint i1; jint i2; jint i3; jint i4; jint i5; jint i6; jint i7; jint i8; jint i9; jint i10; jint i11; jint i12; jint i13; jint i14; jint i15; jint i16; jint i17; jint i18; jint i19;
    i1 = 102; i2 = 102; i3 = 102; i4 = 102; i5 = 102; i6 = 102; i7 = 102; i8 = 102; i9 = 102; i10 = 102; i11 = 102; i12 = 102; i13 = 102; i14 = 102; i15 = 102; i16 = 102; i17 = 102; i18 = 102; i19 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00139_nativemethod (env, instance, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, i13, i14, i15, i16, i17, i18, i19);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00140_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[140 - 1];

    jint i1; jint i2; jint i3; jint i4; jint i5; jint i6; jint i7; jint i8; jint i9; jint i10; jint i11; jint i12; jint i13; jint i14; jint i15; jint i16; jint i17; jint i18; jint i19; jint i20;
    i1 = 102; i2 = 102; i3 = 102; i4 = 102; i5 = 102; i6 = 102; i7 = 102; i8 = 102; i9 = 102; i10 = 102; i11 = 102; i12 = 102; i13 = 102; i14 = 102; i15 = 102; i16 = 102; i17 = 102; i18 = 102; i19 = 102; i20 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, i13, i14, i15, i16, i17, i18, i19, i20);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00140_run
(JNIEnv *env, jobject instance) {
    jint i1; jint i2; jint i3; jint i4; jint i5; jint i6; jint i7; jint i8; jint i9; jint i10; jint i11; jint i12; jint i13; jint i14; jint i15; jint i16; jint i17; jint i18; jint i19; jint i20;
    i1 = 102; i2 = 102; i3 = 102; i4 = 102; i5 = 102; i6 = 102; i7 = 102; i8 = 102; i9 = 102; i10 = 102; i11 = 102; i12 = 102; i13 = 102; i14 = 102; i15 = 102; i16 = 102; i17 = 102; i18 = 102; i19 = 102; i20 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00140_nativemethod (env, instance, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, i13, i14, i15, i16, i17, i18, i19, i20);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00141_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[141 - 1];

    jfloatArray Af1;
    Af1 = jfloatArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Af1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00141_run
(JNIEnv *env, jobject instance) {
    jfloatArray Af1;
    Af1 = jfloatArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00141_nativemethod (env, instance, Af1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00142_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[142 - 1];

    jfloatArray Af1; jfloatArray Af2;
    Af1 = jfloatArrayValue; Af2 = jfloatArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Af1, Af2);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00142_run
(JNIEnv *env, jobject instance) {
    jfloatArray Af1; jfloatArray Af2;
    Af1 = jfloatArrayValue; Af2 = jfloatArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00142_nativemethod (env, instance, Af1, Af2);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00143_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[143 - 1];

    jfloatArray Af1; jfloatArray Af2; jfloatArray Af3;
    Af1 = jfloatArrayValue; Af2 = jfloatArrayValue; Af3 = jfloatArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Af1, Af2, Af3);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00143_run
(JNIEnv *env, jobject instance) {
    jfloatArray Af1; jfloatArray Af2; jfloatArray Af3;
    Af1 = jfloatArrayValue; Af2 = jfloatArrayValue; Af3 = jfloatArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00143_nativemethod (env, instance, Af1, Af2, Af3);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00144_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[144 - 1];

    jfloatArray Af1; jfloatArray Af2; jfloatArray Af3; jfloatArray Af4;
    Af1 = jfloatArrayValue; Af2 = jfloatArrayValue; Af3 = jfloatArrayValue; Af4 = jfloatArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Af1, Af2, Af3, Af4);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00144_run
(JNIEnv *env, jobject instance) {
    jfloatArray Af1; jfloatArray Af2; jfloatArray Af3; jfloatArray Af4;
    Af1 = jfloatArrayValue; Af2 = jfloatArrayValue; Af3 = jfloatArrayValue; Af4 = jfloatArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00144_nativemethod (env, instance, Af1, Af2, Af3, Af4);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00145_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[145 - 1];

    jfloatArray Af1; jfloatArray Af2; jfloatArray Af3; jfloatArray Af4; jfloatArray Af5;
    Af1 = jfloatArrayValue; Af2 = jfloatArrayValue; Af3 = jfloatArrayValue; Af4 = jfloatArrayValue; Af5 = jfloatArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Af1, Af2, Af3, Af4, Af5);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00145_run
(JNIEnv *env, jobject instance) {
    jfloatArray Af1; jfloatArray Af2; jfloatArray Af3; jfloatArray Af4; jfloatArray Af5;
    Af1 = jfloatArrayValue; Af2 = jfloatArrayValue; Af3 = jfloatArrayValue; Af4 = jfloatArrayValue; Af5 = jfloatArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00145_nativemethod (env, instance, Af1, Af2, Af3, Af4, Af5);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00146_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[146 - 1];

    jfloatArray Af1; jfloatArray Af2; jfloatArray Af3; jfloatArray Af4; jfloatArray Af5; jfloatArray Af6;
    Af1 = jfloatArrayValue; Af2 = jfloatArrayValue; Af3 = jfloatArrayValue; Af4 = jfloatArrayValue; Af5 = jfloatArrayValue; Af6 = jfloatArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Af1, Af2, Af3, Af4, Af5, Af6);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00146_run
(JNIEnv *env, jobject instance) {
    jfloatArray Af1; jfloatArray Af2; jfloatArray Af3; jfloatArray Af4; jfloatArray Af5; jfloatArray Af6;
    Af1 = jfloatArrayValue; Af2 = jfloatArrayValue; Af3 = jfloatArrayValue; Af4 = jfloatArrayValue; Af5 = jfloatArrayValue; Af6 = jfloatArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00146_nativemethod (env, instance, Af1, Af2, Af3, Af4, Af5, Af6);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00147_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[147 - 1];

    jfloatArray Af1; jfloatArray Af2; jfloatArray Af3; jfloatArray Af4; jfloatArray Af5; jfloatArray Af6; jfloatArray Af7;
    Af1 = jfloatArrayValue; Af2 = jfloatArrayValue; Af3 = jfloatArrayValue; Af4 = jfloatArrayValue; Af5 = jfloatArrayValue; Af6 = jfloatArrayValue; Af7 = jfloatArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Af1, Af2, Af3, Af4, Af5, Af6, Af7);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00147_run
(JNIEnv *env, jobject instance) {
    jfloatArray Af1; jfloatArray Af2; jfloatArray Af3; jfloatArray Af4; jfloatArray Af5; jfloatArray Af6; jfloatArray Af7;
    Af1 = jfloatArrayValue; Af2 = jfloatArrayValue; Af3 = jfloatArrayValue; Af4 = jfloatArrayValue; Af5 = jfloatArrayValue; Af6 = jfloatArrayValue; Af7 = jfloatArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00147_nativemethod (env, instance, Af1, Af2, Af3, Af4, Af5, Af6, Af7);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00148_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[148 - 1];

    jfloatArray Af1; jfloatArray Af2; jfloatArray Af3; jfloatArray Af4; jfloatArray Af5; jfloatArray Af6; jfloatArray Af7; jfloatArray Af8;
    Af1 = jfloatArrayValue; Af2 = jfloatArrayValue; Af3 = jfloatArrayValue; Af4 = jfloatArrayValue; Af5 = jfloatArrayValue; Af6 = jfloatArrayValue; Af7 = jfloatArrayValue; Af8 = jfloatArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Af1, Af2, Af3, Af4, Af5, Af6, Af7, Af8);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00148_run
(JNIEnv *env, jobject instance) {
    jfloatArray Af1; jfloatArray Af2; jfloatArray Af3; jfloatArray Af4; jfloatArray Af5; jfloatArray Af6; jfloatArray Af7; jfloatArray Af8;
    Af1 = jfloatArrayValue; Af2 = jfloatArrayValue; Af3 = jfloatArrayValue; Af4 = jfloatArrayValue; Af5 = jfloatArrayValue; Af6 = jfloatArrayValue; Af7 = jfloatArrayValue; Af8 = jfloatArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00148_nativemethod (env, instance, Af1, Af2, Af3, Af4, Af5, Af6, Af7, Af8);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00149_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[149 - 1];

    jfloatArray Af1; jfloatArray Af2; jfloatArray Af3; jfloatArray Af4; jfloatArray Af5; jfloatArray Af6; jfloatArray Af7; jfloatArray Af8; jfloatArray Af9;
    Af1 = jfloatArrayValue; Af2 = jfloatArrayValue; Af3 = jfloatArrayValue; Af4 = jfloatArrayValue; Af5 = jfloatArrayValue; Af6 = jfloatArrayValue; Af7 = jfloatArrayValue; Af8 = jfloatArrayValue; Af9 = jfloatArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Af1, Af2, Af3, Af4, Af5, Af6, Af7, Af8, Af9);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00149_run
(JNIEnv *env, jobject instance) {
    jfloatArray Af1; jfloatArray Af2; jfloatArray Af3; jfloatArray Af4; jfloatArray Af5; jfloatArray Af6; jfloatArray Af7; jfloatArray Af8; jfloatArray Af9;
    Af1 = jfloatArrayValue; Af2 = jfloatArrayValue; Af3 = jfloatArrayValue; Af4 = jfloatArrayValue; Af5 = jfloatArrayValue; Af6 = jfloatArrayValue; Af7 = jfloatArrayValue; Af8 = jfloatArrayValue; Af9 = jfloatArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00149_nativemethod (env, instance, Af1, Af2, Af3, Af4, Af5, Af6, Af7, Af8, Af9);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00150_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[150 - 1];

    jfloatArray Af1; jfloatArray Af2; jfloatArray Af3; jfloatArray Af4; jfloatArray Af5; jfloatArray Af6; jfloatArray Af7; jfloatArray Af8; jfloatArray Af9; jfloatArray Af10;
    Af1 = jfloatArrayValue; Af2 = jfloatArrayValue; Af3 = jfloatArrayValue; Af4 = jfloatArrayValue; Af5 = jfloatArrayValue; Af6 = jfloatArrayValue; Af7 = jfloatArrayValue; Af8 = jfloatArrayValue; Af9 = jfloatArrayValue; Af10 = jfloatArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Af1, Af2, Af3, Af4, Af5, Af6, Af7, Af8, Af9, Af10);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00150_run
(JNIEnv *env, jobject instance) {
    jfloatArray Af1; jfloatArray Af2; jfloatArray Af3; jfloatArray Af4; jfloatArray Af5; jfloatArray Af6; jfloatArray Af7; jfloatArray Af8; jfloatArray Af9; jfloatArray Af10;
    Af1 = jfloatArrayValue; Af2 = jfloatArrayValue; Af3 = jfloatArrayValue; Af4 = jfloatArrayValue; Af5 = jfloatArrayValue; Af6 = jfloatArrayValue; Af7 = jfloatArrayValue; Af8 = jfloatArrayValue; Af9 = jfloatArrayValue; Af10 = jfloatArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00150_nativemethod (env, instance, Af1, Af2, Af3, Af4, Af5, Af6, Af7, Af8, Af9, Af10);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00151_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[151 - 1];

    jfloatArray Af1; jfloatArray Af2; jfloatArray Af3; jfloatArray Af4; jfloatArray Af5; jfloatArray Af6; jfloatArray Af7; jfloatArray Af8; jfloatArray Af9; jfloatArray Af10; jfloatArray Af11;
    Af1 = jfloatArrayValue; Af2 = jfloatArrayValue; Af3 = jfloatArrayValue; Af4 = jfloatArrayValue; Af5 = jfloatArrayValue; Af6 = jfloatArrayValue; Af7 = jfloatArrayValue; Af8 = jfloatArrayValue; Af9 = jfloatArrayValue; Af10 = jfloatArrayValue; Af11 = jfloatArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Af1, Af2, Af3, Af4, Af5, Af6, Af7, Af8, Af9, Af10, Af11);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00151_run
(JNIEnv *env, jobject instance) {
    jfloatArray Af1; jfloatArray Af2; jfloatArray Af3; jfloatArray Af4; jfloatArray Af5; jfloatArray Af6; jfloatArray Af7; jfloatArray Af8; jfloatArray Af9; jfloatArray Af10; jfloatArray Af11;
    Af1 = jfloatArrayValue; Af2 = jfloatArrayValue; Af3 = jfloatArrayValue; Af4 = jfloatArrayValue; Af5 = jfloatArrayValue; Af6 = jfloatArrayValue; Af7 = jfloatArrayValue; Af8 = jfloatArrayValue; Af9 = jfloatArrayValue; Af10 = jfloatArrayValue; Af11 = jfloatArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00151_nativemethod (env, instance, Af1, Af2, Af3, Af4, Af5, Af6, Af7, Af8, Af9, Af10, Af11);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00152_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[152 - 1];

    jfloatArray Af1; jfloatArray Af2; jfloatArray Af3; jfloatArray Af4; jfloatArray Af5; jfloatArray Af6; jfloatArray Af7; jfloatArray Af8; jfloatArray Af9; jfloatArray Af10; jfloatArray Af11; jfloatArray Af12;
    Af1 = jfloatArrayValue; Af2 = jfloatArrayValue; Af3 = jfloatArrayValue; Af4 = jfloatArrayValue; Af5 = jfloatArrayValue; Af6 = jfloatArrayValue; Af7 = jfloatArrayValue; Af8 = jfloatArrayValue; Af9 = jfloatArrayValue; Af10 = jfloatArrayValue; Af11 = jfloatArrayValue; Af12 = jfloatArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Af1, Af2, Af3, Af4, Af5, Af6, Af7, Af8, Af9, Af10, Af11, Af12);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00152_run
(JNIEnv *env, jobject instance) {
    jfloatArray Af1; jfloatArray Af2; jfloatArray Af3; jfloatArray Af4; jfloatArray Af5; jfloatArray Af6; jfloatArray Af7; jfloatArray Af8; jfloatArray Af9; jfloatArray Af10; jfloatArray Af11; jfloatArray Af12;
    Af1 = jfloatArrayValue; Af2 = jfloatArrayValue; Af3 = jfloatArrayValue; Af4 = jfloatArrayValue; Af5 = jfloatArrayValue; Af6 = jfloatArrayValue; Af7 = jfloatArrayValue; Af8 = jfloatArrayValue; Af9 = jfloatArrayValue; Af10 = jfloatArrayValue; Af11 = jfloatArrayValue; Af12 = jfloatArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00152_nativemethod (env, instance, Af1, Af2, Af3, Af4, Af5, Af6, Af7, Af8, Af9, Af10, Af11, Af12);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00153_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[153 - 1];

    jfloatArray Af1; jfloatArray Af2; jfloatArray Af3; jfloatArray Af4; jfloatArray Af5; jfloatArray Af6; jfloatArray Af7; jfloatArray Af8; jfloatArray Af9; jfloatArray Af10; jfloatArray Af11; jfloatArray Af12; jfloatArray Af13;
    Af1 = jfloatArrayValue; Af2 = jfloatArrayValue; Af3 = jfloatArrayValue; Af4 = jfloatArrayValue; Af5 = jfloatArrayValue; Af6 = jfloatArrayValue; Af7 = jfloatArrayValue; Af8 = jfloatArrayValue; Af9 = jfloatArrayValue; Af10 = jfloatArrayValue; Af11 = jfloatArrayValue; Af12 = jfloatArrayValue; Af13 = jfloatArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Af1, Af2, Af3, Af4, Af5, Af6, Af7, Af8, Af9, Af10, Af11, Af12, Af13);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00153_run
(JNIEnv *env, jobject instance) {
    jfloatArray Af1; jfloatArray Af2; jfloatArray Af3; jfloatArray Af4; jfloatArray Af5; jfloatArray Af6; jfloatArray Af7; jfloatArray Af8; jfloatArray Af9; jfloatArray Af10; jfloatArray Af11; jfloatArray Af12; jfloatArray Af13;
    Af1 = jfloatArrayValue; Af2 = jfloatArrayValue; Af3 = jfloatArrayValue; Af4 = jfloatArrayValue; Af5 = jfloatArrayValue; Af6 = jfloatArrayValue; Af7 = jfloatArrayValue; Af8 = jfloatArrayValue; Af9 = jfloatArrayValue; Af10 = jfloatArrayValue; Af11 = jfloatArrayValue; Af12 = jfloatArrayValue; Af13 = jfloatArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00153_nativemethod (env, instance, Af1, Af2, Af3, Af4, Af5, Af6, Af7, Af8, Af9, Af10, Af11, Af12, Af13);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00154_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[154 - 1];

    jfloatArray Af1; jfloatArray Af2; jfloatArray Af3; jfloatArray Af4; jfloatArray Af5; jfloatArray Af6; jfloatArray Af7; jfloatArray Af8; jfloatArray Af9; jfloatArray Af10; jfloatArray Af11; jfloatArray Af12; jfloatArray Af13; jfloatArray Af14;
    Af1 = jfloatArrayValue; Af2 = jfloatArrayValue; Af3 = jfloatArrayValue; Af4 = jfloatArrayValue; Af5 = jfloatArrayValue; Af6 = jfloatArrayValue; Af7 = jfloatArrayValue; Af8 = jfloatArrayValue; Af9 = jfloatArrayValue; Af10 = jfloatArrayValue; Af11 = jfloatArrayValue; Af12 = jfloatArrayValue; Af13 = jfloatArrayValue; Af14 = jfloatArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Af1, Af2, Af3, Af4, Af5, Af6, Af7, Af8, Af9, Af10, Af11, Af12, Af13, Af14);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00154_run
(JNIEnv *env, jobject instance) {
    jfloatArray Af1; jfloatArray Af2; jfloatArray Af3; jfloatArray Af4; jfloatArray Af5; jfloatArray Af6; jfloatArray Af7; jfloatArray Af8; jfloatArray Af9; jfloatArray Af10; jfloatArray Af11; jfloatArray Af12; jfloatArray Af13; jfloatArray Af14;
    Af1 = jfloatArrayValue; Af2 = jfloatArrayValue; Af3 = jfloatArrayValue; Af4 = jfloatArrayValue; Af5 = jfloatArrayValue; Af6 = jfloatArrayValue; Af7 = jfloatArrayValue; Af8 = jfloatArrayValue; Af9 = jfloatArrayValue; Af10 = jfloatArrayValue; Af11 = jfloatArrayValue; Af12 = jfloatArrayValue; Af13 = jfloatArrayValue; Af14 = jfloatArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00154_nativemethod (env, instance, Af1, Af2, Af3, Af4, Af5, Af6, Af7, Af8, Af9, Af10, Af11, Af12, Af13, Af14);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00155_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[155 - 1];

    jfloatArray Af1; jfloatArray Af2; jfloatArray Af3; jfloatArray Af4; jfloatArray Af5; jfloatArray Af6; jfloatArray Af7; jfloatArray Af8; jfloatArray Af9; jfloatArray Af10; jfloatArray Af11; jfloatArray Af12; jfloatArray Af13; jfloatArray Af14; jfloatArray Af15;
    Af1 = jfloatArrayValue; Af2 = jfloatArrayValue; Af3 = jfloatArrayValue; Af4 = jfloatArrayValue; Af5 = jfloatArrayValue; Af6 = jfloatArrayValue; Af7 = jfloatArrayValue; Af8 = jfloatArrayValue; Af9 = jfloatArrayValue; Af10 = jfloatArrayValue; Af11 = jfloatArrayValue; Af12 = jfloatArrayValue; Af13 = jfloatArrayValue; Af14 = jfloatArrayValue; Af15 = jfloatArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Af1, Af2, Af3, Af4, Af5, Af6, Af7, Af8, Af9, Af10, Af11, Af12, Af13, Af14, Af15);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00155_run
(JNIEnv *env, jobject instance) {
    jfloatArray Af1; jfloatArray Af2; jfloatArray Af3; jfloatArray Af4; jfloatArray Af5; jfloatArray Af6; jfloatArray Af7; jfloatArray Af8; jfloatArray Af9; jfloatArray Af10; jfloatArray Af11; jfloatArray Af12; jfloatArray Af13; jfloatArray Af14; jfloatArray Af15;
    Af1 = jfloatArrayValue; Af2 = jfloatArrayValue; Af3 = jfloatArrayValue; Af4 = jfloatArrayValue; Af5 = jfloatArrayValue; Af6 = jfloatArrayValue; Af7 = jfloatArrayValue; Af8 = jfloatArrayValue; Af9 = jfloatArrayValue; Af10 = jfloatArrayValue; Af11 = jfloatArrayValue; Af12 = jfloatArrayValue; Af13 = jfloatArrayValue; Af14 = jfloatArrayValue; Af15 = jfloatArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00155_nativemethod (env, instance, Af1, Af2, Af3, Af4, Af5, Af6, Af7, Af8, Af9, Af10, Af11, Af12, Af13, Af14, Af15);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00156_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[156 - 1];

    jfloatArray Af1; jfloatArray Af2; jfloatArray Af3; jfloatArray Af4; jfloatArray Af5; jfloatArray Af6; jfloatArray Af7; jfloatArray Af8; jfloatArray Af9; jfloatArray Af10; jfloatArray Af11; jfloatArray Af12; jfloatArray Af13; jfloatArray Af14; jfloatArray Af15; jfloatArray Af16;
    Af1 = jfloatArrayValue; Af2 = jfloatArrayValue; Af3 = jfloatArrayValue; Af4 = jfloatArrayValue; Af5 = jfloatArrayValue; Af6 = jfloatArrayValue; Af7 = jfloatArrayValue; Af8 = jfloatArrayValue; Af9 = jfloatArrayValue; Af10 = jfloatArrayValue; Af11 = jfloatArrayValue; Af12 = jfloatArrayValue; Af13 = jfloatArrayValue; Af14 = jfloatArrayValue; Af15 = jfloatArrayValue; Af16 = jfloatArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Af1, Af2, Af3, Af4, Af5, Af6, Af7, Af8, Af9, Af10, Af11, Af12, Af13, Af14, Af15, Af16);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00156_run
(JNIEnv *env, jobject instance) {
    jfloatArray Af1; jfloatArray Af2; jfloatArray Af3; jfloatArray Af4; jfloatArray Af5; jfloatArray Af6; jfloatArray Af7; jfloatArray Af8; jfloatArray Af9; jfloatArray Af10; jfloatArray Af11; jfloatArray Af12; jfloatArray Af13; jfloatArray Af14; jfloatArray Af15; jfloatArray Af16;
    Af1 = jfloatArrayValue; Af2 = jfloatArrayValue; Af3 = jfloatArrayValue; Af4 = jfloatArrayValue; Af5 = jfloatArrayValue; Af6 = jfloatArrayValue; Af7 = jfloatArrayValue; Af8 = jfloatArrayValue; Af9 = jfloatArrayValue; Af10 = jfloatArrayValue; Af11 = jfloatArrayValue; Af12 = jfloatArrayValue; Af13 = jfloatArrayValue; Af14 = jfloatArrayValue; Af15 = jfloatArrayValue; Af16 = jfloatArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00156_nativemethod (env, instance, Af1, Af2, Af3, Af4, Af5, Af6, Af7, Af8, Af9, Af10, Af11, Af12, Af13, Af14, Af15, Af16);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00157_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[157 - 1];

    jfloatArray Af1; jfloatArray Af2; jfloatArray Af3; jfloatArray Af4; jfloatArray Af5; jfloatArray Af6; jfloatArray Af7; jfloatArray Af8; jfloatArray Af9; jfloatArray Af10; jfloatArray Af11; jfloatArray Af12; jfloatArray Af13; jfloatArray Af14; jfloatArray Af15; jfloatArray Af16; jfloatArray Af17;
    Af1 = jfloatArrayValue; Af2 = jfloatArrayValue; Af3 = jfloatArrayValue; Af4 = jfloatArrayValue; Af5 = jfloatArrayValue; Af6 = jfloatArrayValue; Af7 = jfloatArrayValue; Af8 = jfloatArrayValue; Af9 = jfloatArrayValue; Af10 = jfloatArrayValue; Af11 = jfloatArrayValue; Af12 = jfloatArrayValue; Af13 = jfloatArrayValue; Af14 = jfloatArrayValue; Af15 = jfloatArrayValue; Af16 = jfloatArrayValue; Af17 = jfloatArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Af1, Af2, Af3, Af4, Af5, Af6, Af7, Af8, Af9, Af10, Af11, Af12, Af13, Af14, Af15, Af16, Af17);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00157_run
(JNIEnv *env, jobject instance) {
    jfloatArray Af1; jfloatArray Af2; jfloatArray Af3; jfloatArray Af4; jfloatArray Af5; jfloatArray Af6; jfloatArray Af7; jfloatArray Af8; jfloatArray Af9; jfloatArray Af10; jfloatArray Af11; jfloatArray Af12; jfloatArray Af13; jfloatArray Af14; jfloatArray Af15; jfloatArray Af16; jfloatArray Af17;
    Af1 = jfloatArrayValue; Af2 = jfloatArrayValue; Af3 = jfloatArrayValue; Af4 = jfloatArrayValue; Af5 = jfloatArrayValue; Af6 = jfloatArrayValue; Af7 = jfloatArrayValue; Af8 = jfloatArrayValue; Af9 = jfloatArrayValue; Af10 = jfloatArrayValue; Af11 = jfloatArrayValue; Af12 = jfloatArrayValue; Af13 = jfloatArrayValue; Af14 = jfloatArrayValue; Af15 = jfloatArrayValue; Af16 = jfloatArrayValue; Af17 = jfloatArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00157_nativemethod (env, instance, Af1, Af2, Af3, Af4, Af5, Af6, Af7, Af8, Af9, Af10, Af11, Af12, Af13, Af14, Af15, Af16, Af17);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00158_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[158 - 1];

    jfloatArray Af1; jfloatArray Af2; jfloatArray Af3; jfloatArray Af4; jfloatArray Af5; jfloatArray Af6; jfloatArray Af7; jfloatArray Af8; jfloatArray Af9; jfloatArray Af10; jfloatArray Af11; jfloatArray Af12; jfloatArray Af13; jfloatArray Af14; jfloatArray Af15; jfloatArray Af16; jfloatArray Af17; jfloatArray Af18;
    Af1 = jfloatArrayValue; Af2 = jfloatArrayValue; Af3 = jfloatArrayValue; Af4 = jfloatArrayValue; Af5 = jfloatArrayValue; Af6 = jfloatArrayValue; Af7 = jfloatArrayValue; Af8 = jfloatArrayValue; Af9 = jfloatArrayValue; Af10 = jfloatArrayValue; Af11 = jfloatArrayValue; Af12 = jfloatArrayValue; Af13 = jfloatArrayValue; Af14 = jfloatArrayValue; Af15 = jfloatArrayValue; Af16 = jfloatArrayValue; Af17 = jfloatArrayValue; Af18 = jfloatArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Af1, Af2, Af3, Af4, Af5, Af6, Af7, Af8, Af9, Af10, Af11, Af12, Af13, Af14, Af15, Af16, Af17, Af18);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00158_run
(JNIEnv *env, jobject instance) {
    jfloatArray Af1; jfloatArray Af2; jfloatArray Af3; jfloatArray Af4; jfloatArray Af5; jfloatArray Af6; jfloatArray Af7; jfloatArray Af8; jfloatArray Af9; jfloatArray Af10; jfloatArray Af11; jfloatArray Af12; jfloatArray Af13; jfloatArray Af14; jfloatArray Af15; jfloatArray Af16; jfloatArray Af17; jfloatArray Af18;
    Af1 = jfloatArrayValue; Af2 = jfloatArrayValue; Af3 = jfloatArrayValue; Af4 = jfloatArrayValue; Af5 = jfloatArrayValue; Af6 = jfloatArrayValue; Af7 = jfloatArrayValue; Af8 = jfloatArrayValue; Af9 = jfloatArrayValue; Af10 = jfloatArrayValue; Af11 = jfloatArrayValue; Af12 = jfloatArrayValue; Af13 = jfloatArrayValue; Af14 = jfloatArrayValue; Af15 = jfloatArrayValue; Af16 = jfloatArrayValue; Af17 = jfloatArrayValue; Af18 = jfloatArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00158_nativemethod (env, instance, Af1, Af2, Af3, Af4, Af5, Af6, Af7, Af8, Af9, Af10, Af11, Af12, Af13, Af14, Af15, Af16, Af17, Af18);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00159_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[159 - 1];

    jfloatArray Af1; jfloatArray Af2; jfloatArray Af3; jfloatArray Af4; jfloatArray Af5; jfloatArray Af6; jfloatArray Af7; jfloatArray Af8; jfloatArray Af9; jfloatArray Af10; jfloatArray Af11; jfloatArray Af12; jfloatArray Af13; jfloatArray Af14; jfloatArray Af15; jfloatArray Af16; jfloatArray Af17; jfloatArray Af18; jfloatArray Af19;
    Af1 = jfloatArrayValue; Af2 = jfloatArrayValue; Af3 = jfloatArrayValue; Af4 = jfloatArrayValue; Af5 = jfloatArrayValue; Af6 = jfloatArrayValue; Af7 = jfloatArrayValue; Af8 = jfloatArrayValue; Af9 = jfloatArrayValue; Af10 = jfloatArrayValue; Af11 = jfloatArrayValue; Af12 = jfloatArrayValue; Af13 = jfloatArrayValue; Af14 = jfloatArrayValue; Af15 = jfloatArrayValue; Af16 = jfloatArrayValue; Af17 = jfloatArrayValue; Af18 = jfloatArrayValue; Af19 = jfloatArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Af1, Af2, Af3, Af4, Af5, Af6, Af7, Af8, Af9, Af10, Af11, Af12, Af13, Af14, Af15, Af16, Af17, Af18, Af19);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00159_run
(JNIEnv *env, jobject instance) {
    jfloatArray Af1; jfloatArray Af2; jfloatArray Af3; jfloatArray Af4; jfloatArray Af5; jfloatArray Af6; jfloatArray Af7; jfloatArray Af8; jfloatArray Af9; jfloatArray Af10; jfloatArray Af11; jfloatArray Af12; jfloatArray Af13; jfloatArray Af14; jfloatArray Af15; jfloatArray Af16; jfloatArray Af17; jfloatArray Af18; jfloatArray Af19;
    Af1 = jfloatArrayValue; Af2 = jfloatArrayValue; Af3 = jfloatArrayValue; Af4 = jfloatArrayValue; Af5 = jfloatArrayValue; Af6 = jfloatArrayValue; Af7 = jfloatArrayValue; Af8 = jfloatArrayValue; Af9 = jfloatArrayValue; Af10 = jfloatArrayValue; Af11 = jfloatArrayValue; Af12 = jfloatArrayValue; Af13 = jfloatArrayValue; Af14 = jfloatArrayValue; Af15 = jfloatArrayValue; Af16 = jfloatArrayValue; Af17 = jfloatArrayValue; Af18 = jfloatArrayValue; Af19 = jfloatArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00159_nativemethod (env, instance, Af1, Af2, Af3, Af4, Af5, Af6, Af7, Af8, Af9, Af10, Af11, Af12, Af13, Af14, Af15, Af16, Af17, Af18, Af19);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00160_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[160 - 1];

    jfloatArray Af1; jfloatArray Af2; jfloatArray Af3; jfloatArray Af4; jfloatArray Af5; jfloatArray Af6; jfloatArray Af7; jfloatArray Af8; jfloatArray Af9; jfloatArray Af10; jfloatArray Af11; jfloatArray Af12; jfloatArray Af13; jfloatArray Af14; jfloatArray Af15; jfloatArray Af16; jfloatArray Af17; jfloatArray Af18; jfloatArray Af19; jfloatArray Af20;
    Af1 = jfloatArrayValue; Af2 = jfloatArrayValue; Af3 = jfloatArrayValue; Af4 = jfloatArrayValue; Af5 = jfloatArrayValue; Af6 = jfloatArrayValue; Af7 = jfloatArrayValue; Af8 = jfloatArrayValue; Af9 = jfloatArrayValue; Af10 = jfloatArrayValue; Af11 = jfloatArrayValue; Af12 = jfloatArrayValue; Af13 = jfloatArrayValue; Af14 = jfloatArrayValue; Af15 = jfloatArrayValue; Af16 = jfloatArrayValue; Af17 = jfloatArrayValue; Af18 = jfloatArrayValue; Af19 = jfloatArrayValue; Af20 = jfloatArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Af1, Af2, Af3, Af4, Af5, Af6, Af7, Af8, Af9, Af10, Af11, Af12, Af13, Af14, Af15, Af16, Af17, Af18, Af19, Af20);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00160_run
(JNIEnv *env, jobject instance) {
    jfloatArray Af1; jfloatArray Af2; jfloatArray Af3; jfloatArray Af4; jfloatArray Af5; jfloatArray Af6; jfloatArray Af7; jfloatArray Af8; jfloatArray Af9; jfloatArray Af10; jfloatArray Af11; jfloatArray Af12; jfloatArray Af13; jfloatArray Af14; jfloatArray Af15; jfloatArray Af16; jfloatArray Af17; jfloatArray Af18; jfloatArray Af19; jfloatArray Af20;
    Af1 = jfloatArrayValue; Af2 = jfloatArrayValue; Af3 = jfloatArrayValue; Af4 = jfloatArrayValue; Af5 = jfloatArrayValue; Af6 = jfloatArrayValue; Af7 = jfloatArrayValue; Af8 = jfloatArrayValue; Af9 = jfloatArrayValue; Af10 = jfloatArrayValue; Af11 = jfloatArrayValue; Af12 = jfloatArrayValue; Af13 = jfloatArrayValue; Af14 = jfloatArrayValue; Af15 = jfloatArrayValue; Af16 = jfloatArrayValue; Af17 = jfloatArrayValue; Af18 = jfloatArrayValue; Af19 = jfloatArrayValue; Af20 = jfloatArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00160_nativemethod (env, instance, Af1, Af2, Af3, Af4, Af5, Af6, Af7, Af8, Af9, Af10, Af11, Af12, Af13, Af14, Af15, Af16, Af17, Af18, Af19, Af20);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00161_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[161 - 1];

    jlong l1;
    l1 = 103;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, l1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00161_run
(JNIEnv *env, jobject instance) {
    jlong l1;
    l1 = 103;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00161_nativemethod (env, instance, l1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00162_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[162 - 1];

    jlong l1; jlong l2;
    l1 = 103; l2 = 103;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, l1, l2);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00162_run
(JNIEnv *env, jobject instance) {
    jlong l1; jlong l2;
    l1 = 103; l2 = 103;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00162_nativemethod (env, instance, l1, l2);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00163_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[163 - 1];

    jlong l1; jlong l2; jlong l3;
    l1 = 103; l2 = 103; l3 = 103;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, l1, l2, l3);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00163_run
(JNIEnv *env, jobject instance) {
    jlong l1; jlong l2; jlong l3;
    l1 = 103; l2 = 103; l3 = 103;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00163_nativemethod (env, instance, l1, l2, l3);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00164_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[164 - 1];

    jlong l1; jlong l2; jlong l3; jlong l4;
    l1 = 103; l2 = 103; l3 = 103; l4 = 103;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, l1, l2, l3, l4);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00164_run
(JNIEnv *env, jobject instance) {
    jlong l1; jlong l2; jlong l3; jlong l4;
    l1 = 103; l2 = 103; l3 = 103; l4 = 103;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00164_nativemethod (env, instance, l1, l2, l3, l4);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00165_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[165 - 1];

    jlong l1; jlong l2; jlong l3; jlong l4; jlong l5;
    l1 = 103; l2 = 103; l3 = 103; l4 = 103; l5 = 103;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, l1, l2, l3, l4, l5);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00165_run
(JNIEnv *env, jobject instance) {
    jlong l1; jlong l2; jlong l3; jlong l4; jlong l5;
    l1 = 103; l2 = 103; l3 = 103; l4 = 103; l5 = 103;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00165_nativemethod (env, instance, l1, l2, l3, l4, l5);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00166_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[166 - 1];

    jlong l1; jlong l2; jlong l3; jlong l4; jlong l5; jlong l6;
    l1 = 103; l2 = 103; l3 = 103; l4 = 103; l5 = 103; l6 = 103;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, l1, l2, l3, l4, l5, l6);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00166_run
(JNIEnv *env, jobject instance) {
    jlong l1; jlong l2; jlong l3; jlong l4; jlong l5; jlong l6;
    l1 = 103; l2 = 103; l3 = 103; l4 = 103; l5 = 103; l6 = 103;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00166_nativemethod (env, instance, l1, l2, l3, l4, l5, l6);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00167_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[167 - 1];

    jlong l1; jlong l2; jlong l3; jlong l4; jlong l5; jlong l6; jlong l7;
    l1 = 103; l2 = 103; l3 = 103; l4 = 103; l5 = 103; l6 = 103; l7 = 103;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, l1, l2, l3, l4, l5, l6, l7);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00167_run
(JNIEnv *env, jobject instance) {
    jlong l1; jlong l2; jlong l3; jlong l4; jlong l5; jlong l6; jlong l7;
    l1 = 103; l2 = 103; l3 = 103; l4 = 103; l5 = 103; l6 = 103; l7 = 103;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00167_nativemethod (env, instance, l1, l2, l3, l4, l5, l6, l7);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00168_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[168 - 1];

    jlong l1; jlong l2; jlong l3; jlong l4; jlong l5; jlong l6; jlong l7; jlong l8;
    l1 = 103; l2 = 103; l3 = 103; l4 = 103; l5 = 103; l6 = 103; l7 = 103; l8 = 103;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, l1, l2, l3, l4, l5, l6, l7, l8);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00168_run
(JNIEnv *env, jobject instance) {
    jlong l1; jlong l2; jlong l3; jlong l4; jlong l5; jlong l6; jlong l7; jlong l8;
    l1 = 103; l2 = 103; l3 = 103; l4 = 103; l5 = 103; l6 = 103; l7 = 103; l8 = 103;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00168_nativemethod (env, instance, l1, l2, l3, l4, l5, l6, l7, l8);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00169_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[169 - 1];

    jlong l1; jlong l2; jlong l3; jlong l4; jlong l5; jlong l6; jlong l7; jlong l8; jlong l9;
    l1 = 103; l2 = 103; l3 = 103; l4 = 103; l5 = 103; l6 = 103; l7 = 103; l8 = 103; l9 = 103;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, l1, l2, l3, l4, l5, l6, l7, l8, l9);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00169_run
(JNIEnv *env, jobject instance) {
    jlong l1; jlong l2; jlong l3; jlong l4; jlong l5; jlong l6; jlong l7; jlong l8; jlong l9;
    l1 = 103; l2 = 103; l3 = 103; l4 = 103; l5 = 103; l6 = 103; l7 = 103; l8 = 103; l9 = 103;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00169_nativemethod (env, instance, l1, l2, l3, l4, l5, l6, l7, l8, l9);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00170_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[170 - 1];

    jlong l1; jlong l2; jlong l3; jlong l4; jlong l5; jlong l6; jlong l7; jlong l8; jlong l9; jlong l10;
    l1 = 103; l2 = 103; l3 = 103; l4 = 103; l5 = 103; l6 = 103; l7 = 103; l8 = 103; l9 = 103; l10 = 103;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, l1, l2, l3, l4, l5, l6, l7, l8, l9, l10);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00170_run
(JNIEnv *env, jobject instance) {
    jlong l1; jlong l2; jlong l3; jlong l4; jlong l5; jlong l6; jlong l7; jlong l8; jlong l9; jlong l10;
    l1 = 103; l2 = 103; l3 = 103; l4 = 103; l5 = 103; l6 = 103; l7 = 103; l8 = 103; l9 = 103; l10 = 103;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00170_nativemethod (env, instance, l1, l2, l3, l4, l5, l6, l7, l8, l9, l10);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00171_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[171 - 1];

    jlong l1; jlong l2; jlong l3; jlong l4; jlong l5; jlong l6; jlong l7; jlong l8; jlong l9; jlong l10; jlong l11;
    l1 = 103; l2 = 103; l3 = 103; l4 = 103; l5 = 103; l6 = 103; l7 = 103; l8 = 103; l9 = 103; l10 = 103; l11 = 103;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, l1, l2, l3, l4, l5, l6, l7, l8, l9, l10, l11);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00171_run
(JNIEnv *env, jobject instance) {
    jlong l1; jlong l2; jlong l3; jlong l4; jlong l5; jlong l6; jlong l7; jlong l8; jlong l9; jlong l10; jlong l11;
    l1 = 103; l2 = 103; l3 = 103; l4 = 103; l5 = 103; l6 = 103; l7 = 103; l8 = 103; l9 = 103; l10 = 103; l11 = 103;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00171_nativemethod (env, instance, l1, l2, l3, l4, l5, l6, l7, l8, l9, l10, l11);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00172_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[172 - 1];

    jlong l1; jlong l2; jlong l3; jlong l4; jlong l5; jlong l6; jlong l7; jlong l8; jlong l9; jlong l10; jlong l11; jlong l12;
    l1 = 103; l2 = 103; l3 = 103; l4 = 103; l5 = 103; l6 = 103; l7 = 103; l8 = 103; l9 = 103; l10 = 103; l11 = 103; l12 = 103;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, l1, l2, l3, l4, l5, l6, l7, l8, l9, l10, l11, l12);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00172_run
(JNIEnv *env, jobject instance) {
    jlong l1; jlong l2; jlong l3; jlong l4; jlong l5; jlong l6; jlong l7; jlong l8; jlong l9; jlong l10; jlong l11; jlong l12;
    l1 = 103; l2 = 103; l3 = 103; l4 = 103; l5 = 103; l6 = 103; l7 = 103; l8 = 103; l9 = 103; l10 = 103; l11 = 103; l12 = 103;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00172_nativemethod (env, instance, l1, l2, l3, l4, l5, l6, l7, l8, l9, l10, l11, l12);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00173_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[173 - 1];

    jlong l1; jlong l2; jlong l3; jlong l4; jlong l5; jlong l6; jlong l7; jlong l8; jlong l9; jlong l10; jlong l11; jlong l12; jlong l13;
    l1 = 103; l2 = 103; l3 = 103; l4 = 103; l5 = 103; l6 = 103; l7 = 103; l8 = 103; l9 = 103; l10 = 103; l11 = 103; l12 = 103; l13 = 103;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, l1, l2, l3, l4, l5, l6, l7, l8, l9, l10, l11, l12, l13);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00173_run
(JNIEnv *env, jobject instance) {
    jlong l1; jlong l2; jlong l3; jlong l4; jlong l5; jlong l6; jlong l7; jlong l8; jlong l9; jlong l10; jlong l11; jlong l12; jlong l13;
    l1 = 103; l2 = 103; l3 = 103; l4 = 103; l5 = 103; l6 = 103; l7 = 103; l8 = 103; l9 = 103; l10 = 103; l11 = 103; l12 = 103; l13 = 103;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00173_nativemethod (env, instance, l1, l2, l3, l4, l5, l6, l7, l8, l9, l10, l11, l12, l13);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00174_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[174 - 1];

    jlong l1; jlong l2; jlong l3; jlong l4; jlong l5; jlong l6; jlong l7; jlong l8; jlong l9; jlong l10; jlong l11; jlong l12; jlong l13; jlong l14;
    l1 = 103; l2 = 103; l3 = 103; l4 = 103; l5 = 103; l6 = 103; l7 = 103; l8 = 103; l9 = 103; l10 = 103; l11 = 103; l12 = 103; l13 = 103; l14 = 103;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, l1, l2, l3, l4, l5, l6, l7, l8, l9, l10, l11, l12, l13, l14);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00174_run
(JNIEnv *env, jobject instance) {
    jlong l1; jlong l2; jlong l3; jlong l4; jlong l5; jlong l6; jlong l7; jlong l8; jlong l9; jlong l10; jlong l11; jlong l12; jlong l13; jlong l14;
    l1 = 103; l2 = 103; l3 = 103; l4 = 103; l5 = 103; l6 = 103; l7 = 103; l8 = 103; l9 = 103; l10 = 103; l11 = 103; l12 = 103; l13 = 103; l14 = 103;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00174_nativemethod (env, instance, l1, l2, l3, l4, l5, l6, l7, l8, l9, l10, l11, l12, l13, l14);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00175_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[175 - 1];

    jlong l1; jlong l2; jlong l3; jlong l4; jlong l5; jlong l6; jlong l7; jlong l8; jlong l9; jlong l10; jlong l11; jlong l12; jlong l13; jlong l14; jlong l15;
    l1 = 103; l2 = 103; l3 = 103; l4 = 103; l5 = 103; l6 = 103; l7 = 103; l8 = 103; l9 = 103; l10 = 103; l11 = 103; l12 = 103; l13 = 103; l14 = 103; l15 = 103;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, l1, l2, l3, l4, l5, l6, l7, l8, l9, l10, l11, l12, l13, l14, l15);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00175_run
(JNIEnv *env, jobject instance) {
    jlong l1; jlong l2; jlong l3; jlong l4; jlong l5; jlong l6; jlong l7; jlong l8; jlong l9; jlong l10; jlong l11; jlong l12; jlong l13; jlong l14; jlong l15;
    l1 = 103; l2 = 103; l3 = 103; l4 = 103; l5 = 103; l6 = 103; l7 = 103; l8 = 103; l9 = 103; l10 = 103; l11 = 103; l12 = 103; l13 = 103; l14 = 103; l15 = 103;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00175_nativemethod (env, instance, l1, l2, l3, l4, l5, l6, l7, l8, l9, l10, l11, l12, l13, l14, l15);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00176_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[176 - 1];

    jlong l1; jlong l2; jlong l3; jlong l4; jlong l5; jlong l6; jlong l7; jlong l8; jlong l9; jlong l10; jlong l11; jlong l12; jlong l13; jlong l14; jlong l15; jlong l16;
    l1 = 103; l2 = 103; l3 = 103; l4 = 103; l5 = 103; l6 = 103; l7 = 103; l8 = 103; l9 = 103; l10 = 103; l11 = 103; l12 = 103; l13 = 103; l14 = 103; l15 = 103; l16 = 103;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, l1, l2, l3, l4, l5, l6, l7, l8, l9, l10, l11, l12, l13, l14, l15, l16);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00176_run
(JNIEnv *env, jobject instance) {
    jlong l1; jlong l2; jlong l3; jlong l4; jlong l5; jlong l6; jlong l7; jlong l8; jlong l9; jlong l10; jlong l11; jlong l12; jlong l13; jlong l14; jlong l15; jlong l16;
    l1 = 103; l2 = 103; l3 = 103; l4 = 103; l5 = 103; l6 = 103; l7 = 103; l8 = 103; l9 = 103; l10 = 103; l11 = 103; l12 = 103; l13 = 103; l14 = 103; l15 = 103; l16 = 103;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00176_nativemethod (env, instance, l1, l2, l3, l4, l5, l6, l7, l8, l9, l10, l11, l12, l13, l14, l15, l16);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00177_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[177 - 1];

    jlong l1; jlong l2; jlong l3; jlong l4; jlong l5; jlong l6; jlong l7; jlong l8; jlong l9; jlong l10; jlong l11; jlong l12; jlong l13; jlong l14; jlong l15; jlong l16; jlong l17;
    l1 = 103; l2 = 103; l3 = 103; l4 = 103; l5 = 103; l6 = 103; l7 = 103; l8 = 103; l9 = 103; l10 = 103; l11 = 103; l12 = 103; l13 = 103; l14 = 103; l15 = 103; l16 = 103; l17 = 103;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, l1, l2, l3, l4, l5, l6, l7, l8, l9, l10, l11, l12, l13, l14, l15, l16, l17);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00177_run
(JNIEnv *env, jobject instance) {
    jlong l1; jlong l2; jlong l3; jlong l4; jlong l5; jlong l6; jlong l7; jlong l8; jlong l9; jlong l10; jlong l11; jlong l12; jlong l13; jlong l14; jlong l15; jlong l16; jlong l17;
    l1 = 103; l2 = 103; l3 = 103; l4 = 103; l5 = 103; l6 = 103; l7 = 103; l8 = 103; l9 = 103; l10 = 103; l11 = 103; l12 = 103; l13 = 103; l14 = 103; l15 = 103; l16 = 103; l17 = 103;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00177_nativemethod (env, instance, l1, l2, l3, l4, l5, l6, l7, l8, l9, l10, l11, l12, l13, l14, l15, l16, l17);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00178_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[178 - 1];

    jlong l1; jlong l2; jlong l3; jlong l4; jlong l5; jlong l6; jlong l7; jlong l8; jlong l9; jlong l10; jlong l11; jlong l12; jlong l13; jlong l14; jlong l15; jlong l16; jlong l17; jlong l18;
    l1 = 103; l2 = 103; l3 = 103; l4 = 103; l5 = 103; l6 = 103; l7 = 103; l8 = 103; l9 = 103; l10 = 103; l11 = 103; l12 = 103; l13 = 103; l14 = 103; l15 = 103; l16 = 103; l17 = 103; l18 = 103;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, l1, l2, l3, l4, l5, l6, l7, l8, l9, l10, l11, l12, l13, l14, l15, l16, l17, l18);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00178_run
(JNIEnv *env, jobject instance) {
    jlong l1; jlong l2; jlong l3; jlong l4; jlong l5; jlong l6; jlong l7; jlong l8; jlong l9; jlong l10; jlong l11; jlong l12; jlong l13; jlong l14; jlong l15; jlong l16; jlong l17; jlong l18;
    l1 = 103; l2 = 103; l3 = 103; l4 = 103; l5 = 103; l6 = 103; l7 = 103; l8 = 103; l9 = 103; l10 = 103; l11 = 103; l12 = 103; l13 = 103; l14 = 103; l15 = 103; l16 = 103; l17 = 103; l18 = 103;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00178_nativemethod (env, instance, l1, l2, l3, l4, l5, l6, l7, l8, l9, l10, l11, l12, l13, l14, l15, l16, l17, l18);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00179_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[179 - 1];

    jlong l1; jlong l2; jlong l3; jlong l4; jlong l5; jlong l6; jlong l7; jlong l8; jlong l9; jlong l10; jlong l11; jlong l12; jlong l13; jlong l14; jlong l15; jlong l16; jlong l17; jlong l18; jlong l19;
    l1 = 103; l2 = 103; l3 = 103; l4 = 103; l5 = 103; l6 = 103; l7 = 103; l8 = 103; l9 = 103; l10 = 103; l11 = 103; l12 = 103; l13 = 103; l14 = 103; l15 = 103; l16 = 103; l17 = 103; l18 = 103; l19 = 103;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, l1, l2, l3, l4, l5, l6, l7, l8, l9, l10, l11, l12, l13, l14, l15, l16, l17, l18, l19);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00179_run
(JNIEnv *env, jobject instance) {
    jlong l1; jlong l2; jlong l3; jlong l4; jlong l5; jlong l6; jlong l7; jlong l8; jlong l9; jlong l10; jlong l11; jlong l12; jlong l13; jlong l14; jlong l15; jlong l16; jlong l17; jlong l18; jlong l19;
    l1 = 103; l2 = 103; l3 = 103; l4 = 103; l5 = 103; l6 = 103; l7 = 103; l8 = 103; l9 = 103; l10 = 103; l11 = 103; l12 = 103; l13 = 103; l14 = 103; l15 = 103; l16 = 103; l17 = 103; l18 = 103; l19 = 103;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00179_nativemethod (env, instance, l1, l2, l3, l4, l5, l6, l7, l8, l9, l10, l11, l12, l13, l14, l15, l16, l17, l18, l19);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00180_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[180 - 1];

    jlong l1; jlong l2; jlong l3; jlong l4; jlong l5; jlong l6; jlong l7; jlong l8; jlong l9; jlong l10; jlong l11; jlong l12; jlong l13; jlong l14; jlong l15; jlong l16; jlong l17; jlong l18; jlong l19; jlong l20;
    l1 = 103; l2 = 103; l3 = 103; l4 = 103; l5 = 103; l6 = 103; l7 = 103; l8 = 103; l9 = 103; l10 = 103; l11 = 103; l12 = 103; l13 = 103; l14 = 103; l15 = 103; l16 = 103; l17 = 103; l18 = 103; l19 = 103; l20 = 103;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, l1, l2, l3, l4, l5, l6, l7, l8, l9, l10, l11, l12, l13, l14, l15, l16, l17, l18, l19, l20);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00180_run
(JNIEnv *env, jobject instance) {
    jlong l1; jlong l2; jlong l3; jlong l4; jlong l5; jlong l6; jlong l7; jlong l8; jlong l9; jlong l10; jlong l11; jlong l12; jlong l13; jlong l14; jlong l15; jlong l16; jlong l17; jlong l18; jlong l19; jlong l20;
    l1 = 103; l2 = 103; l3 = 103; l4 = 103; l5 = 103; l6 = 103; l7 = 103; l8 = 103; l9 = 103; l10 = 103; l11 = 103; l12 = 103; l13 = 103; l14 = 103; l15 = 103; l16 = 103; l17 = 103; l18 = 103; l19 = 103; l20 = 103;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00180_nativemethod (env, instance, l1, l2, l3, l4, l5, l6, l7, l8, l9, l10, l11, l12, l13, l14, l15, l16, l17, l18, l19, l20);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00181_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[181 - 1];

    jobject O1;
    O1 = jobjectValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, O1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00181_run
(JNIEnv *env, jobject instance) {
    jobject O1;
    O1 = jobjectValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00181_nativemethod (env, instance, O1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00182_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[182 - 1];

    jobject O1; jobject O2;
    O1 = jobjectValue; O2 = jobjectValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, O1, O2);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00182_run
(JNIEnv *env, jobject instance) {
    jobject O1; jobject O2;
    O1 = jobjectValue; O2 = jobjectValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00182_nativemethod (env, instance, O1, O2);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00183_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[183 - 1];

    jobject O1; jobject O2; jobject O3;
    O1 = jobjectValue; O2 = jobjectValue; O3 = jobjectValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, O1, O2, O3);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00183_run
(JNIEnv *env, jobject instance) {
    jobject O1; jobject O2; jobject O3;
    O1 = jobjectValue; O2 = jobjectValue; O3 = jobjectValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00183_nativemethod (env, instance, O1, O2, O3);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00184_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[184 - 1];

    jobject O1; jobject O2; jobject O3; jobject O4;
    O1 = jobjectValue; O2 = jobjectValue; O3 = jobjectValue; O4 = jobjectValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, O1, O2, O3, O4);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00184_run
(JNIEnv *env, jobject instance) {
    jobject O1; jobject O2; jobject O3; jobject O4;
    O1 = jobjectValue; O2 = jobjectValue; O3 = jobjectValue; O4 = jobjectValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00184_nativemethod (env, instance, O1, O2, O3, O4);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00185_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[185 - 1];

    jobject O1; jobject O2; jobject O3; jobject O4; jobject O5;
    O1 = jobjectValue; O2 = jobjectValue; O3 = jobjectValue; O4 = jobjectValue; O5 = jobjectValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, O1, O2, O3, O4, O5);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00185_run
(JNIEnv *env, jobject instance) {
    jobject O1; jobject O2; jobject O3; jobject O4; jobject O5;
    O1 = jobjectValue; O2 = jobjectValue; O3 = jobjectValue; O4 = jobjectValue; O5 = jobjectValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00185_nativemethod (env, instance, O1, O2, O3, O4, O5);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00186_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[186 - 1];

    jobject O1; jobject O2; jobject O3; jobject O4; jobject O5; jobject O6;
    O1 = jobjectValue; O2 = jobjectValue; O3 = jobjectValue; O4 = jobjectValue; O5 = jobjectValue; O6 = jobjectValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, O1, O2, O3, O4, O5, O6);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00186_run
(JNIEnv *env, jobject instance) {
    jobject O1; jobject O2; jobject O3; jobject O4; jobject O5; jobject O6;
    O1 = jobjectValue; O2 = jobjectValue; O3 = jobjectValue; O4 = jobjectValue; O5 = jobjectValue; O6 = jobjectValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00186_nativemethod (env, instance, O1, O2, O3, O4, O5, O6);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00187_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[187 - 1];

    jobject O1; jobject O2; jobject O3; jobject O4; jobject O5; jobject O6; jobject O7;
    O1 = jobjectValue; O2 = jobjectValue; O3 = jobjectValue; O4 = jobjectValue; O5 = jobjectValue; O6 = jobjectValue; O7 = jobjectValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, O1, O2, O3, O4, O5, O6, O7);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00187_run
(JNIEnv *env, jobject instance) {
    jobject O1; jobject O2; jobject O3; jobject O4; jobject O5; jobject O6; jobject O7;
    O1 = jobjectValue; O2 = jobjectValue; O3 = jobjectValue; O4 = jobjectValue; O5 = jobjectValue; O6 = jobjectValue; O7 = jobjectValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00187_nativemethod (env, instance, O1, O2, O3, O4, O5, O6, O7);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00188_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[188 - 1];

    jobject O1; jobject O2; jobject O3; jobject O4; jobject O5; jobject O6; jobject O7; jobject O8;
    O1 = jobjectValue; O2 = jobjectValue; O3 = jobjectValue; O4 = jobjectValue; O5 = jobjectValue; O6 = jobjectValue; O7 = jobjectValue; O8 = jobjectValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, O1, O2, O3, O4, O5, O6, O7, O8);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00188_run
(JNIEnv *env, jobject instance) {
    jobject O1; jobject O2; jobject O3; jobject O4; jobject O5; jobject O6; jobject O7; jobject O8;
    O1 = jobjectValue; O2 = jobjectValue; O3 = jobjectValue; O4 = jobjectValue; O5 = jobjectValue; O6 = jobjectValue; O7 = jobjectValue; O8 = jobjectValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00188_nativemethod (env, instance, O1, O2, O3, O4, O5, O6, O7, O8);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00189_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[189 - 1];

    jobject O1; jobject O2; jobject O3; jobject O4; jobject O5; jobject O6; jobject O7; jobject O8; jobject O9;
    O1 = jobjectValue; O2 = jobjectValue; O3 = jobjectValue; O4 = jobjectValue; O5 = jobjectValue; O6 = jobjectValue; O7 = jobjectValue; O8 = jobjectValue; O9 = jobjectValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, O1, O2, O3, O4, O5, O6, O7, O8, O9);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00189_run
(JNIEnv *env, jobject instance) {
    jobject O1; jobject O2; jobject O3; jobject O4; jobject O5; jobject O6; jobject O7; jobject O8; jobject O9;
    O1 = jobjectValue; O2 = jobjectValue; O3 = jobjectValue; O4 = jobjectValue; O5 = jobjectValue; O6 = jobjectValue; O7 = jobjectValue; O8 = jobjectValue; O9 = jobjectValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00189_nativemethod (env, instance, O1, O2, O3, O4, O5, O6, O7, O8, O9);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00190_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[190 - 1];

    jobject O1; jobject O2; jobject O3; jobject O4; jobject O5; jobject O6; jobject O7; jobject O8; jobject O9; jobject O10;
    O1 = jobjectValue; O2 = jobjectValue; O3 = jobjectValue; O4 = jobjectValue; O5 = jobjectValue; O6 = jobjectValue; O7 = jobjectValue; O8 = jobjectValue; O9 = jobjectValue; O10 = jobjectValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, O1, O2, O3, O4, O5, O6, O7, O8, O9, O10);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00190_run
(JNIEnv *env, jobject instance) {
    jobject O1; jobject O2; jobject O3; jobject O4; jobject O5; jobject O6; jobject O7; jobject O8; jobject O9; jobject O10;
    O1 = jobjectValue; O2 = jobjectValue; O3 = jobjectValue; O4 = jobjectValue; O5 = jobjectValue; O6 = jobjectValue; O7 = jobjectValue; O8 = jobjectValue; O9 = jobjectValue; O10 = jobjectValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00190_nativemethod (env, instance, O1, O2, O3, O4, O5, O6, O7, O8, O9, O10);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00191_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[191 - 1];

    jobject O1; jobject O2; jobject O3; jobject O4; jobject O5; jobject O6; jobject O7; jobject O8; jobject O9; jobject O10; jobject O11;
    O1 = jobjectValue; O2 = jobjectValue; O3 = jobjectValue; O4 = jobjectValue; O5 = jobjectValue; O6 = jobjectValue; O7 = jobjectValue; O8 = jobjectValue; O9 = jobjectValue; O10 = jobjectValue; O11 = jobjectValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, O1, O2, O3, O4, O5, O6, O7, O8, O9, O10, O11);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00191_run
(JNIEnv *env, jobject instance) {
    jobject O1; jobject O2; jobject O3; jobject O4; jobject O5; jobject O6; jobject O7; jobject O8; jobject O9; jobject O10; jobject O11;
    O1 = jobjectValue; O2 = jobjectValue; O3 = jobjectValue; O4 = jobjectValue; O5 = jobjectValue; O6 = jobjectValue; O7 = jobjectValue; O8 = jobjectValue; O9 = jobjectValue; O10 = jobjectValue; O11 = jobjectValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00191_nativemethod (env, instance, O1, O2, O3, O4, O5, O6, O7, O8, O9, O10, O11);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00192_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[192 - 1];

    jobject O1; jobject O2; jobject O3; jobject O4; jobject O5; jobject O6; jobject O7; jobject O8; jobject O9; jobject O10; jobject O11; jobject O12;
    O1 = jobjectValue; O2 = jobjectValue; O3 = jobjectValue; O4 = jobjectValue; O5 = jobjectValue; O6 = jobjectValue; O7 = jobjectValue; O8 = jobjectValue; O9 = jobjectValue; O10 = jobjectValue; O11 = jobjectValue; O12 = jobjectValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, O1, O2, O3, O4, O5, O6, O7, O8, O9, O10, O11, O12);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00192_run
(JNIEnv *env, jobject instance) {
    jobject O1; jobject O2; jobject O3; jobject O4; jobject O5; jobject O6; jobject O7; jobject O8; jobject O9; jobject O10; jobject O11; jobject O12;
    O1 = jobjectValue; O2 = jobjectValue; O3 = jobjectValue; O4 = jobjectValue; O5 = jobjectValue; O6 = jobjectValue; O7 = jobjectValue; O8 = jobjectValue; O9 = jobjectValue; O10 = jobjectValue; O11 = jobjectValue; O12 = jobjectValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00192_nativemethod (env, instance, O1, O2, O3, O4, O5, O6, O7, O8, O9, O10, O11, O12);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00193_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[193 - 1];

    jobject O1; jobject O2; jobject O3; jobject O4; jobject O5; jobject O6; jobject O7; jobject O8; jobject O9; jobject O10; jobject O11; jobject O12; jobject O13;
    O1 = jobjectValue; O2 = jobjectValue; O3 = jobjectValue; O4 = jobjectValue; O5 = jobjectValue; O6 = jobjectValue; O7 = jobjectValue; O8 = jobjectValue; O9 = jobjectValue; O10 = jobjectValue; O11 = jobjectValue; O12 = jobjectValue; O13 = jobjectValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, O1, O2, O3, O4, O5, O6, O7, O8, O9, O10, O11, O12, O13);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00193_run
(JNIEnv *env, jobject instance) {
    jobject O1; jobject O2; jobject O3; jobject O4; jobject O5; jobject O6; jobject O7; jobject O8; jobject O9; jobject O10; jobject O11; jobject O12; jobject O13;
    O1 = jobjectValue; O2 = jobjectValue; O3 = jobjectValue; O4 = jobjectValue; O5 = jobjectValue; O6 = jobjectValue; O7 = jobjectValue; O8 = jobjectValue; O9 = jobjectValue; O10 = jobjectValue; O11 = jobjectValue; O12 = jobjectValue; O13 = jobjectValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00193_nativemethod (env, instance, O1, O2, O3, O4, O5, O6, O7, O8, O9, O10, O11, O12, O13);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00194_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[194 - 1];

    jobject O1; jobject O2; jobject O3; jobject O4; jobject O5; jobject O6; jobject O7; jobject O8; jobject O9; jobject O10; jobject O11; jobject O12; jobject O13; jobject O14;
    O1 = jobjectValue; O2 = jobjectValue; O3 = jobjectValue; O4 = jobjectValue; O5 = jobjectValue; O6 = jobjectValue; O7 = jobjectValue; O8 = jobjectValue; O9 = jobjectValue; O10 = jobjectValue; O11 = jobjectValue; O12 = jobjectValue; O13 = jobjectValue; O14 = jobjectValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, O1, O2, O3, O4, O5, O6, O7, O8, O9, O10, O11, O12, O13, O14);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00194_run
(JNIEnv *env, jobject instance) {
    jobject O1; jobject O2; jobject O3; jobject O4; jobject O5; jobject O6; jobject O7; jobject O8; jobject O9; jobject O10; jobject O11; jobject O12; jobject O13; jobject O14;
    O1 = jobjectValue; O2 = jobjectValue; O3 = jobjectValue; O4 = jobjectValue; O5 = jobjectValue; O6 = jobjectValue; O7 = jobjectValue; O8 = jobjectValue; O9 = jobjectValue; O10 = jobjectValue; O11 = jobjectValue; O12 = jobjectValue; O13 = jobjectValue; O14 = jobjectValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00194_nativemethod (env, instance, O1, O2, O3, O4, O5, O6, O7, O8, O9, O10, O11, O12, O13, O14);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00195_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[195 - 1];

    jobject O1; jobject O2; jobject O3; jobject O4; jobject O5; jobject O6; jobject O7; jobject O8; jobject O9; jobject O10; jobject O11; jobject O12; jobject O13; jobject O14; jobject O15;
    O1 = jobjectValue; O2 = jobjectValue; O3 = jobjectValue; O4 = jobjectValue; O5 = jobjectValue; O6 = jobjectValue; O7 = jobjectValue; O8 = jobjectValue; O9 = jobjectValue; O10 = jobjectValue; O11 = jobjectValue; O12 = jobjectValue; O13 = jobjectValue; O14 = jobjectValue; O15 = jobjectValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, O1, O2, O3, O4, O5, O6, O7, O8, O9, O10, O11, O12, O13, O14, O15);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00195_run
(JNIEnv *env, jobject instance) {
    jobject O1; jobject O2; jobject O3; jobject O4; jobject O5; jobject O6; jobject O7; jobject O8; jobject O9; jobject O10; jobject O11; jobject O12; jobject O13; jobject O14; jobject O15;
    O1 = jobjectValue; O2 = jobjectValue; O3 = jobjectValue; O4 = jobjectValue; O5 = jobjectValue; O6 = jobjectValue; O7 = jobjectValue; O8 = jobjectValue; O9 = jobjectValue; O10 = jobjectValue; O11 = jobjectValue; O12 = jobjectValue; O13 = jobjectValue; O14 = jobjectValue; O15 = jobjectValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00195_nativemethod (env, instance, O1, O2, O3, O4, O5, O6, O7, O8, O9, O10, O11, O12, O13, O14, O15);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00196_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[196 - 1];

    jobject O1; jobject O2; jobject O3; jobject O4; jobject O5; jobject O6; jobject O7; jobject O8; jobject O9; jobject O10; jobject O11; jobject O12; jobject O13; jobject O14; jobject O15; jobject O16;
    O1 = jobjectValue; O2 = jobjectValue; O3 = jobjectValue; O4 = jobjectValue; O5 = jobjectValue; O6 = jobjectValue; O7 = jobjectValue; O8 = jobjectValue; O9 = jobjectValue; O10 = jobjectValue; O11 = jobjectValue; O12 = jobjectValue; O13 = jobjectValue; O14 = jobjectValue; O15 = jobjectValue; O16 = jobjectValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, O1, O2, O3, O4, O5, O6, O7, O8, O9, O10, O11, O12, O13, O14, O15, O16);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00196_run
(JNIEnv *env, jobject instance) {
    jobject O1; jobject O2; jobject O3; jobject O4; jobject O5; jobject O6; jobject O7; jobject O8; jobject O9; jobject O10; jobject O11; jobject O12; jobject O13; jobject O14; jobject O15; jobject O16;
    O1 = jobjectValue; O2 = jobjectValue; O3 = jobjectValue; O4 = jobjectValue; O5 = jobjectValue; O6 = jobjectValue; O7 = jobjectValue; O8 = jobjectValue; O9 = jobjectValue; O10 = jobjectValue; O11 = jobjectValue; O12 = jobjectValue; O13 = jobjectValue; O14 = jobjectValue; O15 = jobjectValue; O16 = jobjectValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00196_nativemethod (env, instance, O1, O2, O3, O4, O5, O6, O7, O8, O9, O10, O11, O12, O13, O14, O15, O16);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00197_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[197 - 1];

    jobject O1; jobject O2; jobject O3; jobject O4; jobject O5; jobject O6; jobject O7; jobject O8; jobject O9; jobject O10; jobject O11; jobject O12; jobject O13; jobject O14; jobject O15; jobject O16; jobject O17;
    O1 = jobjectValue; O2 = jobjectValue; O3 = jobjectValue; O4 = jobjectValue; O5 = jobjectValue; O6 = jobjectValue; O7 = jobjectValue; O8 = jobjectValue; O9 = jobjectValue; O10 = jobjectValue; O11 = jobjectValue; O12 = jobjectValue; O13 = jobjectValue; O14 = jobjectValue; O15 = jobjectValue; O16 = jobjectValue; O17 = jobjectValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, O1, O2, O3, O4, O5, O6, O7, O8, O9, O10, O11, O12, O13, O14, O15, O16, O17);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00197_run
(JNIEnv *env, jobject instance) {
    jobject O1; jobject O2; jobject O3; jobject O4; jobject O5; jobject O6; jobject O7; jobject O8; jobject O9; jobject O10; jobject O11; jobject O12; jobject O13; jobject O14; jobject O15; jobject O16; jobject O17;
    O1 = jobjectValue; O2 = jobjectValue; O3 = jobjectValue; O4 = jobjectValue; O5 = jobjectValue; O6 = jobjectValue; O7 = jobjectValue; O8 = jobjectValue; O9 = jobjectValue; O10 = jobjectValue; O11 = jobjectValue; O12 = jobjectValue; O13 = jobjectValue; O14 = jobjectValue; O15 = jobjectValue; O16 = jobjectValue; O17 = jobjectValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00197_nativemethod (env, instance, O1, O2, O3, O4, O5, O6, O7, O8, O9, O10, O11, O12, O13, O14, O15, O16, O17);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00198_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[198 - 1];

    jobject O1; jobject O2; jobject O3; jobject O4; jobject O5; jobject O6; jobject O7; jobject O8; jobject O9; jobject O10; jobject O11; jobject O12; jobject O13; jobject O14; jobject O15; jobject O16; jobject O17; jobject O18;
    O1 = jobjectValue; O2 = jobjectValue; O3 = jobjectValue; O4 = jobjectValue; O5 = jobjectValue; O6 = jobjectValue; O7 = jobjectValue; O8 = jobjectValue; O9 = jobjectValue; O10 = jobjectValue; O11 = jobjectValue; O12 = jobjectValue; O13 = jobjectValue; O14 = jobjectValue; O15 = jobjectValue; O16 = jobjectValue; O17 = jobjectValue; O18 = jobjectValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, O1, O2, O3, O4, O5, O6, O7, O8, O9, O10, O11, O12, O13, O14, O15, O16, O17, O18);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00198_run
(JNIEnv *env, jobject instance) {
    jobject O1; jobject O2; jobject O3; jobject O4; jobject O5; jobject O6; jobject O7; jobject O8; jobject O9; jobject O10; jobject O11; jobject O12; jobject O13; jobject O14; jobject O15; jobject O16; jobject O17; jobject O18;
    O1 = jobjectValue; O2 = jobjectValue; O3 = jobjectValue; O4 = jobjectValue; O5 = jobjectValue; O6 = jobjectValue; O7 = jobjectValue; O8 = jobjectValue; O9 = jobjectValue; O10 = jobjectValue; O11 = jobjectValue; O12 = jobjectValue; O13 = jobjectValue; O14 = jobjectValue; O15 = jobjectValue; O16 = jobjectValue; O17 = jobjectValue; O18 = jobjectValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00198_nativemethod (env, instance, O1, O2, O3, O4, O5, O6, O7, O8, O9, O10, O11, O12, O13, O14, O15, O16, O17, O18);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00199_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[199 - 1];

    jobject O1; jobject O2; jobject O3; jobject O4; jobject O5; jobject O6; jobject O7; jobject O8; jobject O9; jobject O10; jobject O11; jobject O12; jobject O13; jobject O14; jobject O15; jobject O16; jobject O17; jobject O18; jobject O19;
    O1 = jobjectValue; O2 = jobjectValue; O3 = jobjectValue; O4 = jobjectValue; O5 = jobjectValue; O6 = jobjectValue; O7 = jobjectValue; O8 = jobjectValue; O9 = jobjectValue; O10 = jobjectValue; O11 = jobjectValue; O12 = jobjectValue; O13 = jobjectValue; O14 = jobjectValue; O15 = jobjectValue; O16 = jobjectValue; O17 = jobjectValue; O18 = jobjectValue; O19 = jobjectValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, O1, O2, O3, O4, O5, O6, O7, O8, O9, O10, O11, O12, O13, O14, O15, O16, O17, O18, O19);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00199_run
(JNIEnv *env, jobject instance) {
    jobject O1; jobject O2; jobject O3; jobject O4; jobject O5; jobject O6; jobject O7; jobject O8; jobject O9; jobject O10; jobject O11; jobject O12; jobject O13; jobject O14; jobject O15; jobject O16; jobject O17; jobject O18; jobject O19;
    O1 = jobjectValue; O2 = jobjectValue; O3 = jobjectValue; O4 = jobjectValue; O5 = jobjectValue; O6 = jobjectValue; O7 = jobjectValue; O8 = jobjectValue; O9 = jobjectValue; O10 = jobjectValue; O11 = jobjectValue; O12 = jobjectValue; O13 = jobjectValue; O14 = jobjectValue; O15 = jobjectValue; O16 = jobjectValue; O17 = jobjectValue; O18 = jobjectValue; O19 = jobjectValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00199_nativemethod (env, instance, O1, O2, O3, O4, O5, O6, O7, O8, O9, O10, O11, O12, O13, O14, O15, O16, O17, O18, O19);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00200_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[200 - 1];

    jobject O1; jobject O2; jobject O3; jobject O4; jobject O5; jobject O6; jobject O7; jobject O8; jobject O9; jobject O10; jobject O11; jobject O12; jobject O13; jobject O14; jobject O15; jobject O16; jobject O17; jobject O18; jobject O19; jobject O20;
    O1 = jobjectValue; O2 = jobjectValue; O3 = jobjectValue; O4 = jobjectValue; O5 = jobjectValue; O6 = jobjectValue; O7 = jobjectValue; O8 = jobjectValue; O9 = jobjectValue; O10 = jobjectValue; O11 = jobjectValue; O12 = jobjectValue; O13 = jobjectValue; O14 = jobjectValue; O15 = jobjectValue; O16 = jobjectValue; O17 = jobjectValue; O18 = jobjectValue; O19 = jobjectValue; O20 = jobjectValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, O1, O2, O3, O4, O5, O6, O7, O8, O9, O10, O11, O12, O13, O14, O15, O16, O17, O18, O19, O20);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00200_run
(JNIEnv *env, jobject instance) {
    jobject O1; jobject O2; jobject O3; jobject O4; jobject O5; jobject O6; jobject O7; jobject O8; jobject O9; jobject O10; jobject O11; jobject O12; jobject O13; jobject O14; jobject O15; jobject O16; jobject O17; jobject O18; jobject O19; jobject O20;
    O1 = jobjectValue; O2 = jobjectValue; O3 = jobjectValue; O4 = jobjectValue; O5 = jobjectValue; O6 = jobjectValue; O7 = jobjectValue; O8 = jobjectValue; O9 = jobjectValue; O10 = jobjectValue; O11 = jobjectValue; O12 = jobjectValue; O13 = jobjectValue; O14 = jobjectValue; O15 = jobjectValue; O16 = jobjectValue; O17 = jobjectValue; O18 = jobjectValue; O19 = jobjectValue; O20 = jobjectValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00200_nativemethod (env, instance, O1, O2, O3, O4, O5, O6, O7, O8, O9, O10, O11, O12, O13, O14, O15, O16, O17, O18, O19, O20);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00201_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[201 - 1];

    jlongArray Al1;
    Al1 = jlongArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Al1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00201_run
(JNIEnv *env, jobject instance) {
    jlongArray Al1;
    Al1 = jlongArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00201_nativemethod (env, instance, Al1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00202_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[202 - 1];

    jlongArray Al1; jlongArray Al2;
    Al1 = jlongArrayValue; Al2 = jlongArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Al1, Al2);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00202_run
(JNIEnv *env, jobject instance) {
    jlongArray Al1; jlongArray Al2;
    Al1 = jlongArrayValue; Al2 = jlongArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00202_nativemethod (env, instance, Al1, Al2);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00203_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[203 - 1];

    jlongArray Al1; jlongArray Al2; jlongArray Al3;
    Al1 = jlongArrayValue; Al2 = jlongArrayValue; Al3 = jlongArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Al1, Al2, Al3);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00203_run
(JNIEnv *env, jobject instance) {
    jlongArray Al1; jlongArray Al2; jlongArray Al3;
    Al1 = jlongArrayValue; Al2 = jlongArrayValue; Al3 = jlongArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00203_nativemethod (env, instance, Al1, Al2, Al3);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00204_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[204 - 1];

    jlongArray Al1; jlongArray Al2; jlongArray Al3; jlongArray Al4;
    Al1 = jlongArrayValue; Al2 = jlongArrayValue; Al3 = jlongArrayValue; Al4 = jlongArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Al1, Al2, Al3, Al4);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00204_run
(JNIEnv *env, jobject instance) {
    jlongArray Al1; jlongArray Al2; jlongArray Al3; jlongArray Al4;
    Al1 = jlongArrayValue; Al2 = jlongArrayValue; Al3 = jlongArrayValue; Al4 = jlongArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00204_nativemethod (env, instance, Al1, Al2, Al3, Al4);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00205_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[205 - 1];

    jlongArray Al1; jlongArray Al2; jlongArray Al3; jlongArray Al4; jlongArray Al5;
    Al1 = jlongArrayValue; Al2 = jlongArrayValue; Al3 = jlongArrayValue; Al4 = jlongArrayValue; Al5 = jlongArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Al1, Al2, Al3, Al4, Al5);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00205_run
(JNIEnv *env, jobject instance) {
    jlongArray Al1; jlongArray Al2; jlongArray Al3; jlongArray Al4; jlongArray Al5;
    Al1 = jlongArrayValue; Al2 = jlongArrayValue; Al3 = jlongArrayValue; Al4 = jlongArrayValue; Al5 = jlongArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00205_nativemethod (env, instance, Al1, Al2, Al3, Al4, Al5);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00206_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[206 - 1];

    jlongArray Al1; jlongArray Al2; jlongArray Al3; jlongArray Al4; jlongArray Al5; jlongArray Al6;
    Al1 = jlongArrayValue; Al2 = jlongArrayValue; Al3 = jlongArrayValue; Al4 = jlongArrayValue; Al5 = jlongArrayValue; Al6 = jlongArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Al1, Al2, Al3, Al4, Al5, Al6);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00206_run
(JNIEnv *env, jobject instance) {
    jlongArray Al1; jlongArray Al2; jlongArray Al3; jlongArray Al4; jlongArray Al5; jlongArray Al6;
    Al1 = jlongArrayValue; Al2 = jlongArrayValue; Al3 = jlongArrayValue; Al4 = jlongArrayValue; Al5 = jlongArrayValue; Al6 = jlongArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00206_nativemethod (env, instance, Al1, Al2, Al3, Al4, Al5, Al6);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00207_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[207 - 1];

    jlongArray Al1; jlongArray Al2; jlongArray Al3; jlongArray Al4; jlongArray Al5; jlongArray Al6; jlongArray Al7;
    Al1 = jlongArrayValue; Al2 = jlongArrayValue; Al3 = jlongArrayValue; Al4 = jlongArrayValue; Al5 = jlongArrayValue; Al6 = jlongArrayValue; Al7 = jlongArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Al1, Al2, Al3, Al4, Al5, Al6, Al7);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00207_run
(JNIEnv *env, jobject instance) {
    jlongArray Al1; jlongArray Al2; jlongArray Al3; jlongArray Al4; jlongArray Al5; jlongArray Al6; jlongArray Al7;
    Al1 = jlongArrayValue; Al2 = jlongArrayValue; Al3 = jlongArrayValue; Al4 = jlongArrayValue; Al5 = jlongArrayValue; Al6 = jlongArrayValue; Al7 = jlongArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00207_nativemethod (env, instance, Al1, Al2, Al3, Al4, Al5, Al6, Al7);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00208_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[208 - 1];

    jlongArray Al1; jlongArray Al2; jlongArray Al3; jlongArray Al4; jlongArray Al5; jlongArray Al6; jlongArray Al7; jlongArray Al8;
    Al1 = jlongArrayValue; Al2 = jlongArrayValue; Al3 = jlongArrayValue; Al4 = jlongArrayValue; Al5 = jlongArrayValue; Al6 = jlongArrayValue; Al7 = jlongArrayValue; Al8 = jlongArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Al1, Al2, Al3, Al4, Al5, Al6, Al7, Al8);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00208_run
(JNIEnv *env, jobject instance) {
    jlongArray Al1; jlongArray Al2; jlongArray Al3; jlongArray Al4; jlongArray Al5; jlongArray Al6; jlongArray Al7; jlongArray Al8;
    Al1 = jlongArrayValue; Al2 = jlongArrayValue; Al3 = jlongArrayValue; Al4 = jlongArrayValue; Al5 = jlongArrayValue; Al6 = jlongArrayValue; Al7 = jlongArrayValue; Al8 = jlongArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00208_nativemethod (env, instance, Al1, Al2, Al3, Al4, Al5, Al6, Al7, Al8);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00209_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[209 - 1];

    jlongArray Al1; jlongArray Al2; jlongArray Al3; jlongArray Al4; jlongArray Al5; jlongArray Al6; jlongArray Al7; jlongArray Al8; jlongArray Al9;
    Al1 = jlongArrayValue; Al2 = jlongArrayValue; Al3 = jlongArrayValue; Al4 = jlongArrayValue; Al5 = jlongArrayValue; Al6 = jlongArrayValue; Al7 = jlongArrayValue; Al8 = jlongArrayValue; Al9 = jlongArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Al1, Al2, Al3, Al4, Al5, Al6, Al7, Al8, Al9);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00209_run
(JNIEnv *env, jobject instance) {
    jlongArray Al1; jlongArray Al2; jlongArray Al3; jlongArray Al4; jlongArray Al5; jlongArray Al6; jlongArray Al7; jlongArray Al8; jlongArray Al9;
    Al1 = jlongArrayValue; Al2 = jlongArrayValue; Al3 = jlongArrayValue; Al4 = jlongArrayValue; Al5 = jlongArrayValue; Al6 = jlongArrayValue; Al7 = jlongArrayValue; Al8 = jlongArrayValue; Al9 = jlongArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00209_nativemethod (env, instance, Al1, Al2, Al3, Al4, Al5, Al6, Al7, Al8, Al9);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00210_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[210 - 1];

    jlongArray Al1; jlongArray Al2; jlongArray Al3; jlongArray Al4; jlongArray Al5; jlongArray Al6; jlongArray Al7; jlongArray Al8; jlongArray Al9; jlongArray Al10;
    Al1 = jlongArrayValue; Al2 = jlongArrayValue; Al3 = jlongArrayValue; Al4 = jlongArrayValue; Al5 = jlongArrayValue; Al6 = jlongArrayValue; Al7 = jlongArrayValue; Al8 = jlongArrayValue; Al9 = jlongArrayValue; Al10 = jlongArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Al1, Al2, Al3, Al4, Al5, Al6, Al7, Al8, Al9, Al10);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00210_run
(JNIEnv *env, jobject instance) {
    jlongArray Al1; jlongArray Al2; jlongArray Al3; jlongArray Al4; jlongArray Al5; jlongArray Al6; jlongArray Al7; jlongArray Al8; jlongArray Al9; jlongArray Al10;
    Al1 = jlongArrayValue; Al2 = jlongArrayValue; Al3 = jlongArrayValue; Al4 = jlongArrayValue; Al5 = jlongArrayValue; Al6 = jlongArrayValue; Al7 = jlongArrayValue; Al8 = jlongArrayValue; Al9 = jlongArrayValue; Al10 = jlongArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00210_nativemethod (env, instance, Al1, Al2, Al3, Al4, Al5, Al6, Al7, Al8, Al9, Al10);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00211_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[211 - 1];

    jlongArray Al1; jlongArray Al2; jlongArray Al3; jlongArray Al4; jlongArray Al5; jlongArray Al6; jlongArray Al7; jlongArray Al8; jlongArray Al9; jlongArray Al10; jlongArray Al11;
    Al1 = jlongArrayValue; Al2 = jlongArrayValue; Al3 = jlongArrayValue; Al4 = jlongArrayValue; Al5 = jlongArrayValue; Al6 = jlongArrayValue; Al7 = jlongArrayValue; Al8 = jlongArrayValue; Al9 = jlongArrayValue; Al10 = jlongArrayValue; Al11 = jlongArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Al1, Al2, Al3, Al4, Al5, Al6, Al7, Al8, Al9, Al10, Al11);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00211_run
(JNIEnv *env, jobject instance) {
    jlongArray Al1; jlongArray Al2; jlongArray Al3; jlongArray Al4; jlongArray Al5; jlongArray Al6; jlongArray Al7; jlongArray Al8; jlongArray Al9; jlongArray Al10; jlongArray Al11;
    Al1 = jlongArrayValue; Al2 = jlongArrayValue; Al3 = jlongArrayValue; Al4 = jlongArrayValue; Al5 = jlongArrayValue; Al6 = jlongArrayValue; Al7 = jlongArrayValue; Al8 = jlongArrayValue; Al9 = jlongArrayValue; Al10 = jlongArrayValue; Al11 = jlongArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00211_nativemethod (env, instance, Al1, Al2, Al3, Al4, Al5, Al6, Al7, Al8, Al9, Al10, Al11);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00212_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[212 - 1];

    jlongArray Al1; jlongArray Al2; jlongArray Al3; jlongArray Al4; jlongArray Al5; jlongArray Al6; jlongArray Al7; jlongArray Al8; jlongArray Al9; jlongArray Al10; jlongArray Al11; jlongArray Al12;
    Al1 = jlongArrayValue; Al2 = jlongArrayValue; Al3 = jlongArrayValue; Al4 = jlongArrayValue; Al5 = jlongArrayValue; Al6 = jlongArrayValue; Al7 = jlongArrayValue; Al8 = jlongArrayValue; Al9 = jlongArrayValue; Al10 = jlongArrayValue; Al11 = jlongArrayValue; Al12 = jlongArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Al1, Al2, Al3, Al4, Al5, Al6, Al7, Al8, Al9, Al10, Al11, Al12);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00212_run
(JNIEnv *env, jobject instance) {
    jlongArray Al1; jlongArray Al2; jlongArray Al3; jlongArray Al4; jlongArray Al5; jlongArray Al6; jlongArray Al7; jlongArray Al8; jlongArray Al9; jlongArray Al10; jlongArray Al11; jlongArray Al12;
    Al1 = jlongArrayValue; Al2 = jlongArrayValue; Al3 = jlongArrayValue; Al4 = jlongArrayValue; Al5 = jlongArrayValue; Al6 = jlongArrayValue; Al7 = jlongArrayValue; Al8 = jlongArrayValue; Al9 = jlongArrayValue; Al10 = jlongArrayValue; Al11 = jlongArrayValue; Al12 = jlongArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00212_nativemethod (env, instance, Al1, Al2, Al3, Al4, Al5, Al6, Al7, Al8, Al9, Al10, Al11, Al12);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00213_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[213 - 1];

    jlongArray Al1; jlongArray Al2; jlongArray Al3; jlongArray Al4; jlongArray Al5; jlongArray Al6; jlongArray Al7; jlongArray Al8; jlongArray Al9; jlongArray Al10; jlongArray Al11; jlongArray Al12; jlongArray Al13;
    Al1 = jlongArrayValue; Al2 = jlongArrayValue; Al3 = jlongArrayValue; Al4 = jlongArrayValue; Al5 = jlongArrayValue; Al6 = jlongArrayValue; Al7 = jlongArrayValue; Al8 = jlongArrayValue; Al9 = jlongArrayValue; Al10 = jlongArrayValue; Al11 = jlongArrayValue; Al12 = jlongArrayValue; Al13 = jlongArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Al1, Al2, Al3, Al4, Al5, Al6, Al7, Al8, Al9, Al10, Al11, Al12, Al13);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00213_run
(JNIEnv *env, jobject instance) {
    jlongArray Al1; jlongArray Al2; jlongArray Al3; jlongArray Al4; jlongArray Al5; jlongArray Al6; jlongArray Al7; jlongArray Al8; jlongArray Al9; jlongArray Al10; jlongArray Al11; jlongArray Al12; jlongArray Al13;
    Al1 = jlongArrayValue; Al2 = jlongArrayValue; Al3 = jlongArrayValue; Al4 = jlongArrayValue; Al5 = jlongArrayValue; Al6 = jlongArrayValue; Al7 = jlongArrayValue; Al8 = jlongArrayValue; Al9 = jlongArrayValue; Al10 = jlongArrayValue; Al11 = jlongArrayValue; Al12 = jlongArrayValue; Al13 = jlongArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00213_nativemethod (env, instance, Al1, Al2, Al3, Al4, Al5, Al6, Al7, Al8, Al9, Al10, Al11, Al12, Al13);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00214_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[214 - 1];

    jlongArray Al1; jlongArray Al2; jlongArray Al3; jlongArray Al4; jlongArray Al5; jlongArray Al6; jlongArray Al7; jlongArray Al8; jlongArray Al9; jlongArray Al10; jlongArray Al11; jlongArray Al12; jlongArray Al13; jlongArray Al14;
    Al1 = jlongArrayValue; Al2 = jlongArrayValue; Al3 = jlongArrayValue; Al4 = jlongArrayValue; Al5 = jlongArrayValue; Al6 = jlongArrayValue; Al7 = jlongArrayValue; Al8 = jlongArrayValue; Al9 = jlongArrayValue; Al10 = jlongArrayValue; Al11 = jlongArrayValue; Al12 = jlongArrayValue; Al13 = jlongArrayValue; Al14 = jlongArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Al1, Al2, Al3, Al4, Al5, Al6, Al7, Al8, Al9, Al10, Al11, Al12, Al13, Al14);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00214_run
(JNIEnv *env, jobject instance) {
    jlongArray Al1; jlongArray Al2; jlongArray Al3; jlongArray Al4; jlongArray Al5; jlongArray Al6; jlongArray Al7; jlongArray Al8; jlongArray Al9; jlongArray Al10; jlongArray Al11; jlongArray Al12; jlongArray Al13; jlongArray Al14;
    Al1 = jlongArrayValue; Al2 = jlongArrayValue; Al3 = jlongArrayValue; Al4 = jlongArrayValue; Al5 = jlongArrayValue; Al6 = jlongArrayValue; Al7 = jlongArrayValue; Al8 = jlongArrayValue; Al9 = jlongArrayValue; Al10 = jlongArrayValue; Al11 = jlongArrayValue; Al12 = jlongArrayValue; Al13 = jlongArrayValue; Al14 = jlongArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00214_nativemethod (env, instance, Al1, Al2, Al3, Al4, Al5, Al6, Al7, Al8, Al9, Al10, Al11, Al12, Al13, Al14);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00215_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[215 - 1];

    jlongArray Al1; jlongArray Al2; jlongArray Al3; jlongArray Al4; jlongArray Al5; jlongArray Al6; jlongArray Al7; jlongArray Al8; jlongArray Al9; jlongArray Al10; jlongArray Al11; jlongArray Al12; jlongArray Al13; jlongArray Al14; jlongArray Al15;
    Al1 = jlongArrayValue; Al2 = jlongArrayValue; Al3 = jlongArrayValue; Al4 = jlongArrayValue; Al5 = jlongArrayValue; Al6 = jlongArrayValue; Al7 = jlongArrayValue; Al8 = jlongArrayValue; Al9 = jlongArrayValue; Al10 = jlongArrayValue; Al11 = jlongArrayValue; Al12 = jlongArrayValue; Al13 = jlongArrayValue; Al14 = jlongArrayValue; Al15 = jlongArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Al1, Al2, Al3, Al4, Al5, Al6, Al7, Al8, Al9, Al10, Al11, Al12, Al13, Al14, Al15);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00215_run
(JNIEnv *env, jobject instance) {
    jlongArray Al1; jlongArray Al2; jlongArray Al3; jlongArray Al4; jlongArray Al5; jlongArray Al6; jlongArray Al7; jlongArray Al8; jlongArray Al9; jlongArray Al10; jlongArray Al11; jlongArray Al12; jlongArray Al13; jlongArray Al14; jlongArray Al15;
    Al1 = jlongArrayValue; Al2 = jlongArrayValue; Al3 = jlongArrayValue; Al4 = jlongArrayValue; Al5 = jlongArrayValue; Al6 = jlongArrayValue; Al7 = jlongArrayValue; Al8 = jlongArrayValue; Al9 = jlongArrayValue; Al10 = jlongArrayValue; Al11 = jlongArrayValue; Al12 = jlongArrayValue; Al13 = jlongArrayValue; Al14 = jlongArrayValue; Al15 = jlongArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00215_nativemethod (env, instance, Al1, Al2, Al3, Al4, Al5, Al6, Al7, Al8, Al9, Al10, Al11, Al12, Al13, Al14, Al15);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00216_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[216 - 1];

    jlongArray Al1; jlongArray Al2; jlongArray Al3; jlongArray Al4; jlongArray Al5; jlongArray Al6; jlongArray Al7; jlongArray Al8; jlongArray Al9; jlongArray Al10; jlongArray Al11; jlongArray Al12; jlongArray Al13; jlongArray Al14; jlongArray Al15; jlongArray Al16;
    Al1 = jlongArrayValue; Al2 = jlongArrayValue; Al3 = jlongArrayValue; Al4 = jlongArrayValue; Al5 = jlongArrayValue; Al6 = jlongArrayValue; Al7 = jlongArrayValue; Al8 = jlongArrayValue; Al9 = jlongArrayValue; Al10 = jlongArrayValue; Al11 = jlongArrayValue; Al12 = jlongArrayValue; Al13 = jlongArrayValue; Al14 = jlongArrayValue; Al15 = jlongArrayValue; Al16 = jlongArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Al1, Al2, Al3, Al4, Al5, Al6, Al7, Al8, Al9, Al10, Al11, Al12, Al13, Al14, Al15, Al16);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00216_run
(JNIEnv *env, jobject instance) {
    jlongArray Al1; jlongArray Al2; jlongArray Al3; jlongArray Al4; jlongArray Al5; jlongArray Al6; jlongArray Al7; jlongArray Al8; jlongArray Al9; jlongArray Al10; jlongArray Al11; jlongArray Al12; jlongArray Al13; jlongArray Al14; jlongArray Al15; jlongArray Al16;
    Al1 = jlongArrayValue; Al2 = jlongArrayValue; Al3 = jlongArrayValue; Al4 = jlongArrayValue; Al5 = jlongArrayValue; Al6 = jlongArrayValue; Al7 = jlongArrayValue; Al8 = jlongArrayValue; Al9 = jlongArrayValue; Al10 = jlongArrayValue; Al11 = jlongArrayValue; Al12 = jlongArrayValue; Al13 = jlongArrayValue; Al14 = jlongArrayValue; Al15 = jlongArrayValue; Al16 = jlongArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00216_nativemethod (env, instance, Al1, Al2, Al3, Al4, Al5, Al6, Al7, Al8, Al9, Al10, Al11, Al12, Al13, Al14, Al15, Al16);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00217_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[217 - 1];

    jlongArray Al1; jlongArray Al2; jlongArray Al3; jlongArray Al4; jlongArray Al5; jlongArray Al6; jlongArray Al7; jlongArray Al8; jlongArray Al9; jlongArray Al10; jlongArray Al11; jlongArray Al12; jlongArray Al13; jlongArray Al14; jlongArray Al15; jlongArray Al16; jlongArray Al17;
    Al1 = jlongArrayValue; Al2 = jlongArrayValue; Al3 = jlongArrayValue; Al4 = jlongArrayValue; Al5 = jlongArrayValue; Al6 = jlongArrayValue; Al7 = jlongArrayValue; Al8 = jlongArrayValue; Al9 = jlongArrayValue; Al10 = jlongArrayValue; Al11 = jlongArrayValue; Al12 = jlongArrayValue; Al13 = jlongArrayValue; Al14 = jlongArrayValue; Al15 = jlongArrayValue; Al16 = jlongArrayValue; Al17 = jlongArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Al1, Al2, Al3, Al4, Al5, Al6, Al7, Al8, Al9, Al10, Al11, Al12, Al13, Al14, Al15, Al16, Al17);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00217_run
(JNIEnv *env, jobject instance) {
    jlongArray Al1; jlongArray Al2; jlongArray Al3; jlongArray Al4; jlongArray Al5; jlongArray Al6; jlongArray Al7; jlongArray Al8; jlongArray Al9; jlongArray Al10; jlongArray Al11; jlongArray Al12; jlongArray Al13; jlongArray Al14; jlongArray Al15; jlongArray Al16; jlongArray Al17;
    Al1 = jlongArrayValue; Al2 = jlongArrayValue; Al3 = jlongArrayValue; Al4 = jlongArrayValue; Al5 = jlongArrayValue; Al6 = jlongArrayValue; Al7 = jlongArrayValue; Al8 = jlongArrayValue; Al9 = jlongArrayValue; Al10 = jlongArrayValue; Al11 = jlongArrayValue; Al12 = jlongArrayValue; Al13 = jlongArrayValue; Al14 = jlongArrayValue; Al15 = jlongArrayValue; Al16 = jlongArrayValue; Al17 = jlongArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00217_nativemethod (env, instance, Al1, Al2, Al3, Al4, Al5, Al6, Al7, Al8, Al9, Al10, Al11, Al12, Al13, Al14, Al15, Al16, Al17);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00218_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[218 - 1];

    jlongArray Al1; jlongArray Al2; jlongArray Al3; jlongArray Al4; jlongArray Al5; jlongArray Al6; jlongArray Al7; jlongArray Al8; jlongArray Al9; jlongArray Al10; jlongArray Al11; jlongArray Al12; jlongArray Al13; jlongArray Al14; jlongArray Al15; jlongArray Al16; jlongArray Al17; jlongArray Al18;
    Al1 = jlongArrayValue; Al2 = jlongArrayValue; Al3 = jlongArrayValue; Al4 = jlongArrayValue; Al5 = jlongArrayValue; Al6 = jlongArrayValue; Al7 = jlongArrayValue; Al8 = jlongArrayValue; Al9 = jlongArrayValue; Al10 = jlongArrayValue; Al11 = jlongArrayValue; Al12 = jlongArrayValue; Al13 = jlongArrayValue; Al14 = jlongArrayValue; Al15 = jlongArrayValue; Al16 = jlongArrayValue; Al17 = jlongArrayValue; Al18 = jlongArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Al1, Al2, Al3, Al4, Al5, Al6, Al7, Al8, Al9, Al10, Al11, Al12, Al13, Al14, Al15, Al16, Al17, Al18);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00218_run
(JNIEnv *env, jobject instance) {
    jlongArray Al1; jlongArray Al2; jlongArray Al3; jlongArray Al4; jlongArray Al5; jlongArray Al6; jlongArray Al7; jlongArray Al8; jlongArray Al9; jlongArray Al10; jlongArray Al11; jlongArray Al12; jlongArray Al13; jlongArray Al14; jlongArray Al15; jlongArray Al16; jlongArray Al17; jlongArray Al18;
    Al1 = jlongArrayValue; Al2 = jlongArrayValue; Al3 = jlongArrayValue; Al4 = jlongArrayValue; Al5 = jlongArrayValue; Al6 = jlongArrayValue; Al7 = jlongArrayValue; Al8 = jlongArrayValue; Al9 = jlongArrayValue; Al10 = jlongArrayValue; Al11 = jlongArrayValue; Al12 = jlongArrayValue; Al13 = jlongArrayValue; Al14 = jlongArrayValue; Al15 = jlongArrayValue; Al16 = jlongArrayValue; Al17 = jlongArrayValue; Al18 = jlongArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00218_nativemethod (env, instance, Al1, Al2, Al3, Al4, Al5, Al6, Al7, Al8, Al9, Al10, Al11, Al12, Al13, Al14, Al15, Al16, Al17, Al18);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00219_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[219 - 1];

    jlongArray Al1; jlongArray Al2; jlongArray Al3; jlongArray Al4; jlongArray Al5; jlongArray Al6; jlongArray Al7; jlongArray Al8; jlongArray Al9; jlongArray Al10; jlongArray Al11; jlongArray Al12; jlongArray Al13; jlongArray Al14; jlongArray Al15; jlongArray Al16; jlongArray Al17; jlongArray Al18; jlongArray Al19;
    Al1 = jlongArrayValue; Al2 = jlongArrayValue; Al3 = jlongArrayValue; Al4 = jlongArrayValue; Al5 = jlongArrayValue; Al6 = jlongArrayValue; Al7 = jlongArrayValue; Al8 = jlongArrayValue; Al9 = jlongArrayValue; Al10 = jlongArrayValue; Al11 = jlongArrayValue; Al12 = jlongArrayValue; Al13 = jlongArrayValue; Al14 = jlongArrayValue; Al15 = jlongArrayValue; Al16 = jlongArrayValue; Al17 = jlongArrayValue; Al18 = jlongArrayValue; Al19 = jlongArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Al1, Al2, Al3, Al4, Al5, Al6, Al7, Al8, Al9, Al10, Al11, Al12, Al13, Al14, Al15, Al16, Al17, Al18, Al19);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00219_run
(JNIEnv *env, jobject instance) {
    jlongArray Al1; jlongArray Al2; jlongArray Al3; jlongArray Al4; jlongArray Al5; jlongArray Al6; jlongArray Al7; jlongArray Al8; jlongArray Al9; jlongArray Al10; jlongArray Al11; jlongArray Al12; jlongArray Al13; jlongArray Al14; jlongArray Al15; jlongArray Al16; jlongArray Al17; jlongArray Al18; jlongArray Al19;
    Al1 = jlongArrayValue; Al2 = jlongArrayValue; Al3 = jlongArrayValue; Al4 = jlongArrayValue; Al5 = jlongArrayValue; Al6 = jlongArrayValue; Al7 = jlongArrayValue; Al8 = jlongArrayValue; Al9 = jlongArrayValue; Al10 = jlongArrayValue; Al11 = jlongArrayValue; Al12 = jlongArrayValue; Al13 = jlongArrayValue; Al14 = jlongArrayValue; Al15 = jlongArrayValue; Al16 = jlongArrayValue; Al17 = jlongArrayValue; Al18 = jlongArrayValue; Al19 = jlongArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00219_nativemethod (env, instance, Al1, Al2, Al3, Al4, Al5, Al6, Al7, Al8, Al9, Al10, Al11, Al12, Al13, Al14, Al15, Al16, Al17, Al18, Al19);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00220_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[220 - 1];

    jlongArray Al1; jlongArray Al2; jlongArray Al3; jlongArray Al4; jlongArray Al5; jlongArray Al6; jlongArray Al7; jlongArray Al8; jlongArray Al9; jlongArray Al10; jlongArray Al11; jlongArray Al12; jlongArray Al13; jlongArray Al14; jlongArray Al15; jlongArray Al16; jlongArray Al17; jlongArray Al18; jlongArray Al19; jlongArray Al20;
    Al1 = jlongArrayValue; Al2 = jlongArrayValue; Al3 = jlongArrayValue; Al4 = jlongArrayValue; Al5 = jlongArrayValue; Al6 = jlongArrayValue; Al7 = jlongArrayValue; Al8 = jlongArrayValue; Al9 = jlongArrayValue; Al10 = jlongArrayValue; Al11 = jlongArrayValue; Al12 = jlongArrayValue; Al13 = jlongArrayValue; Al14 = jlongArrayValue; Al15 = jlongArrayValue; Al16 = jlongArrayValue; Al17 = jlongArrayValue; Al18 = jlongArrayValue; Al19 = jlongArrayValue; Al20 = jlongArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Al1, Al2, Al3, Al4, Al5, Al6, Al7, Al8, Al9, Al10, Al11, Al12, Al13, Al14, Al15, Al16, Al17, Al18, Al19, Al20);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00220_run
(JNIEnv *env, jobject instance) {
    jlongArray Al1; jlongArray Al2; jlongArray Al3; jlongArray Al4; jlongArray Al5; jlongArray Al6; jlongArray Al7; jlongArray Al8; jlongArray Al9; jlongArray Al10; jlongArray Al11; jlongArray Al12; jlongArray Al13; jlongArray Al14; jlongArray Al15; jlongArray Al16; jlongArray Al17; jlongArray Al18; jlongArray Al19; jlongArray Al20;
    Al1 = jlongArrayValue; Al2 = jlongArrayValue; Al3 = jlongArrayValue; Al4 = jlongArrayValue; Al5 = jlongArrayValue; Al6 = jlongArrayValue; Al7 = jlongArrayValue; Al8 = jlongArrayValue; Al9 = jlongArrayValue; Al10 = jlongArrayValue; Al11 = jlongArrayValue; Al12 = jlongArrayValue; Al13 = jlongArrayValue; Al14 = jlongArrayValue; Al15 = jlongArrayValue; Al16 = jlongArrayValue; Al17 = jlongArrayValue; Al18 = jlongArrayValue; Al19 = jlongArrayValue; Al20 = jlongArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00220_nativemethod (env, instance, Al1, Al2, Al3, Al4, Al5, Al6, Al7, Al8, Al9, Al10, Al11, Al12, Al13, Al14, Al15, Al16, Al17, Al18, Al19, Al20);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00221_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[221 - 1];

    jintArray Ai1;
    Ai1 = jintArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ai1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00221_run
(JNIEnv *env, jobject instance) {
    jintArray Ai1;
    Ai1 = jintArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00221_nativemethod (env, instance, Ai1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00222_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[222 - 1];

    jintArray Ai1; jintArray Ai2;
    Ai1 = jintArrayValue; Ai2 = jintArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ai1, Ai2);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00222_run
(JNIEnv *env, jobject instance) {
    jintArray Ai1; jintArray Ai2;
    Ai1 = jintArrayValue; Ai2 = jintArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00222_nativemethod (env, instance, Ai1, Ai2);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00223_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[223 - 1];

    jintArray Ai1; jintArray Ai2; jintArray Ai3;
    Ai1 = jintArrayValue; Ai2 = jintArrayValue; Ai3 = jintArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ai1, Ai2, Ai3);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00223_run
(JNIEnv *env, jobject instance) {
    jintArray Ai1; jintArray Ai2; jintArray Ai3;
    Ai1 = jintArrayValue; Ai2 = jintArrayValue; Ai3 = jintArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00223_nativemethod (env, instance, Ai1, Ai2, Ai3);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00224_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[224 - 1];

    jintArray Ai1; jintArray Ai2; jintArray Ai3; jintArray Ai4;
    Ai1 = jintArrayValue; Ai2 = jintArrayValue; Ai3 = jintArrayValue; Ai4 = jintArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ai1, Ai2, Ai3, Ai4);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00224_run
(JNIEnv *env, jobject instance) {
    jintArray Ai1; jintArray Ai2; jintArray Ai3; jintArray Ai4;
    Ai1 = jintArrayValue; Ai2 = jintArrayValue; Ai3 = jintArrayValue; Ai4 = jintArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00224_nativemethod (env, instance, Ai1, Ai2, Ai3, Ai4);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00225_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[225 - 1];

    jintArray Ai1; jintArray Ai2; jintArray Ai3; jintArray Ai4; jintArray Ai5;
    Ai1 = jintArrayValue; Ai2 = jintArrayValue; Ai3 = jintArrayValue; Ai4 = jintArrayValue; Ai5 = jintArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ai1, Ai2, Ai3, Ai4, Ai5);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00225_run
(JNIEnv *env, jobject instance) {
    jintArray Ai1; jintArray Ai2; jintArray Ai3; jintArray Ai4; jintArray Ai5;
    Ai1 = jintArrayValue; Ai2 = jintArrayValue; Ai3 = jintArrayValue; Ai4 = jintArrayValue; Ai5 = jintArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00225_nativemethod (env, instance, Ai1, Ai2, Ai3, Ai4, Ai5);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00226_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[226 - 1];

    jintArray Ai1; jintArray Ai2; jintArray Ai3; jintArray Ai4; jintArray Ai5; jintArray Ai6;
    Ai1 = jintArrayValue; Ai2 = jintArrayValue; Ai3 = jintArrayValue; Ai4 = jintArrayValue; Ai5 = jintArrayValue; Ai6 = jintArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ai1, Ai2, Ai3, Ai4, Ai5, Ai6);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00226_run
(JNIEnv *env, jobject instance) {
    jintArray Ai1; jintArray Ai2; jintArray Ai3; jintArray Ai4; jintArray Ai5; jintArray Ai6;
    Ai1 = jintArrayValue; Ai2 = jintArrayValue; Ai3 = jintArrayValue; Ai4 = jintArrayValue; Ai5 = jintArrayValue; Ai6 = jintArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00226_nativemethod (env, instance, Ai1, Ai2, Ai3, Ai4, Ai5, Ai6);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00227_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[227 - 1];

    jintArray Ai1; jintArray Ai2; jintArray Ai3; jintArray Ai4; jintArray Ai5; jintArray Ai6; jintArray Ai7;
    Ai1 = jintArrayValue; Ai2 = jintArrayValue; Ai3 = jintArrayValue; Ai4 = jintArrayValue; Ai5 = jintArrayValue; Ai6 = jintArrayValue; Ai7 = jintArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ai1, Ai2, Ai3, Ai4, Ai5, Ai6, Ai7);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00227_run
(JNIEnv *env, jobject instance) {
    jintArray Ai1; jintArray Ai2; jintArray Ai3; jintArray Ai4; jintArray Ai5; jintArray Ai6; jintArray Ai7;
    Ai1 = jintArrayValue; Ai2 = jintArrayValue; Ai3 = jintArrayValue; Ai4 = jintArrayValue; Ai5 = jintArrayValue; Ai6 = jintArrayValue; Ai7 = jintArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00227_nativemethod (env, instance, Ai1, Ai2, Ai3, Ai4, Ai5, Ai6, Ai7);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00228_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[228 - 1];

    jintArray Ai1; jintArray Ai2; jintArray Ai3; jintArray Ai4; jintArray Ai5; jintArray Ai6; jintArray Ai7; jintArray Ai8;
    Ai1 = jintArrayValue; Ai2 = jintArrayValue; Ai3 = jintArrayValue; Ai4 = jintArrayValue; Ai5 = jintArrayValue; Ai6 = jintArrayValue; Ai7 = jintArrayValue; Ai8 = jintArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ai1, Ai2, Ai3, Ai4, Ai5, Ai6, Ai7, Ai8);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00228_run
(JNIEnv *env, jobject instance) {
    jintArray Ai1; jintArray Ai2; jintArray Ai3; jintArray Ai4; jintArray Ai5; jintArray Ai6; jintArray Ai7; jintArray Ai8;
    Ai1 = jintArrayValue; Ai2 = jintArrayValue; Ai3 = jintArrayValue; Ai4 = jintArrayValue; Ai5 = jintArrayValue; Ai6 = jintArrayValue; Ai7 = jintArrayValue; Ai8 = jintArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00228_nativemethod (env, instance, Ai1, Ai2, Ai3, Ai4, Ai5, Ai6, Ai7, Ai8);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00229_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[229 - 1];

    jintArray Ai1; jintArray Ai2; jintArray Ai3; jintArray Ai4; jintArray Ai5; jintArray Ai6; jintArray Ai7; jintArray Ai8; jintArray Ai9;
    Ai1 = jintArrayValue; Ai2 = jintArrayValue; Ai3 = jintArrayValue; Ai4 = jintArrayValue; Ai5 = jintArrayValue; Ai6 = jintArrayValue; Ai7 = jintArrayValue; Ai8 = jintArrayValue; Ai9 = jintArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ai1, Ai2, Ai3, Ai4, Ai5, Ai6, Ai7, Ai8, Ai9);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00229_run
(JNIEnv *env, jobject instance) {
    jintArray Ai1; jintArray Ai2; jintArray Ai3; jintArray Ai4; jintArray Ai5; jintArray Ai6; jintArray Ai7; jintArray Ai8; jintArray Ai9;
    Ai1 = jintArrayValue; Ai2 = jintArrayValue; Ai3 = jintArrayValue; Ai4 = jintArrayValue; Ai5 = jintArrayValue; Ai6 = jintArrayValue; Ai7 = jintArrayValue; Ai8 = jintArrayValue; Ai9 = jintArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00229_nativemethod (env, instance, Ai1, Ai2, Ai3, Ai4, Ai5, Ai6, Ai7, Ai8, Ai9);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00230_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[230 - 1];

    jintArray Ai1; jintArray Ai2; jintArray Ai3; jintArray Ai4; jintArray Ai5; jintArray Ai6; jintArray Ai7; jintArray Ai8; jintArray Ai9; jintArray Ai10;
    Ai1 = jintArrayValue; Ai2 = jintArrayValue; Ai3 = jintArrayValue; Ai4 = jintArrayValue; Ai5 = jintArrayValue; Ai6 = jintArrayValue; Ai7 = jintArrayValue; Ai8 = jintArrayValue; Ai9 = jintArrayValue; Ai10 = jintArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ai1, Ai2, Ai3, Ai4, Ai5, Ai6, Ai7, Ai8, Ai9, Ai10);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00230_run
(JNIEnv *env, jobject instance) {
    jintArray Ai1; jintArray Ai2; jintArray Ai3; jintArray Ai4; jintArray Ai5; jintArray Ai6; jintArray Ai7; jintArray Ai8; jintArray Ai9; jintArray Ai10;
    Ai1 = jintArrayValue; Ai2 = jintArrayValue; Ai3 = jintArrayValue; Ai4 = jintArrayValue; Ai5 = jintArrayValue; Ai6 = jintArrayValue; Ai7 = jintArrayValue; Ai8 = jintArrayValue; Ai9 = jintArrayValue; Ai10 = jintArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00230_nativemethod (env, instance, Ai1, Ai2, Ai3, Ai4, Ai5, Ai6, Ai7, Ai8, Ai9, Ai10);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00231_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[231 - 1];

    jintArray Ai1; jintArray Ai2; jintArray Ai3; jintArray Ai4; jintArray Ai5; jintArray Ai6; jintArray Ai7; jintArray Ai8; jintArray Ai9; jintArray Ai10; jintArray Ai11;
    Ai1 = jintArrayValue; Ai2 = jintArrayValue; Ai3 = jintArrayValue; Ai4 = jintArrayValue; Ai5 = jintArrayValue; Ai6 = jintArrayValue; Ai7 = jintArrayValue; Ai8 = jintArrayValue; Ai9 = jintArrayValue; Ai10 = jintArrayValue; Ai11 = jintArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ai1, Ai2, Ai3, Ai4, Ai5, Ai6, Ai7, Ai8, Ai9, Ai10, Ai11);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00231_run
(JNIEnv *env, jobject instance) {
    jintArray Ai1; jintArray Ai2; jintArray Ai3; jintArray Ai4; jintArray Ai5; jintArray Ai6; jintArray Ai7; jintArray Ai8; jintArray Ai9; jintArray Ai10; jintArray Ai11;
    Ai1 = jintArrayValue; Ai2 = jintArrayValue; Ai3 = jintArrayValue; Ai4 = jintArrayValue; Ai5 = jintArrayValue; Ai6 = jintArrayValue; Ai7 = jintArrayValue; Ai8 = jintArrayValue; Ai9 = jintArrayValue; Ai10 = jintArrayValue; Ai11 = jintArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00231_nativemethod (env, instance, Ai1, Ai2, Ai3, Ai4, Ai5, Ai6, Ai7, Ai8, Ai9, Ai10, Ai11);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00232_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[232 - 1];

    jintArray Ai1; jintArray Ai2; jintArray Ai3; jintArray Ai4; jintArray Ai5; jintArray Ai6; jintArray Ai7; jintArray Ai8; jintArray Ai9; jintArray Ai10; jintArray Ai11; jintArray Ai12;
    Ai1 = jintArrayValue; Ai2 = jintArrayValue; Ai3 = jintArrayValue; Ai4 = jintArrayValue; Ai5 = jintArrayValue; Ai6 = jintArrayValue; Ai7 = jintArrayValue; Ai8 = jintArrayValue; Ai9 = jintArrayValue; Ai10 = jintArrayValue; Ai11 = jintArrayValue; Ai12 = jintArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ai1, Ai2, Ai3, Ai4, Ai5, Ai6, Ai7, Ai8, Ai9, Ai10, Ai11, Ai12);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00232_run
(JNIEnv *env, jobject instance) {
    jintArray Ai1; jintArray Ai2; jintArray Ai3; jintArray Ai4; jintArray Ai5; jintArray Ai6; jintArray Ai7; jintArray Ai8; jintArray Ai9; jintArray Ai10; jintArray Ai11; jintArray Ai12;
    Ai1 = jintArrayValue; Ai2 = jintArrayValue; Ai3 = jintArrayValue; Ai4 = jintArrayValue; Ai5 = jintArrayValue; Ai6 = jintArrayValue; Ai7 = jintArrayValue; Ai8 = jintArrayValue; Ai9 = jintArrayValue; Ai10 = jintArrayValue; Ai11 = jintArrayValue; Ai12 = jintArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00232_nativemethod (env, instance, Ai1, Ai2, Ai3, Ai4, Ai5, Ai6, Ai7, Ai8, Ai9, Ai10, Ai11, Ai12);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00233_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[233 - 1];

    jintArray Ai1; jintArray Ai2; jintArray Ai3; jintArray Ai4; jintArray Ai5; jintArray Ai6; jintArray Ai7; jintArray Ai8; jintArray Ai9; jintArray Ai10; jintArray Ai11; jintArray Ai12; jintArray Ai13;
    Ai1 = jintArrayValue; Ai2 = jintArrayValue; Ai3 = jintArrayValue; Ai4 = jintArrayValue; Ai5 = jintArrayValue; Ai6 = jintArrayValue; Ai7 = jintArrayValue; Ai8 = jintArrayValue; Ai9 = jintArrayValue; Ai10 = jintArrayValue; Ai11 = jintArrayValue; Ai12 = jintArrayValue; Ai13 = jintArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ai1, Ai2, Ai3, Ai4, Ai5, Ai6, Ai7, Ai8, Ai9, Ai10, Ai11, Ai12, Ai13);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00233_run
(JNIEnv *env, jobject instance) {
    jintArray Ai1; jintArray Ai2; jintArray Ai3; jintArray Ai4; jintArray Ai5; jintArray Ai6; jintArray Ai7; jintArray Ai8; jintArray Ai9; jintArray Ai10; jintArray Ai11; jintArray Ai12; jintArray Ai13;
    Ai1 = jintArrayValue; Ai2 = jintArrayValue; Ai3 = jintArrayValue; Ai4 = jintArrayValue; Ai5 = jintArrayValue; Ai6 = jintArrayValue; Ai7 = jintArrayValue; Ai8 = jintArrayValue; Ai9 = jintArrayValue; Ai10 = jintArrayValue; Ai11 = jintArrayValue; Ai12 = jintArrayValue; Ai13 = jintArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00233_nativemethod (env, instance, Ai1, Ai2, Ai3, Ai4, Ai5, Ai6, Ai7, Ai8, Ai9, Ai10, Ai11, Ai12, Ai13);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00234_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[234 - 1];

    jintArray Ai1; jintArray Ai2; jintArray Ai3; jintArray Ai4; jintArray Ai5; jintArray Ai6; jintArray Ai7; jintArray Ai8; jintArray Ai9; jintArray Ai10; jintArray Ai11; jintArray Ai12; jintArray Ai13; jintArray Ai14;
    Ai1 = jintArrayValue; Ai2 = jintArrayValue; Ai3 = jintArrayValue; Ai4 = jintArrayValue; Ai5 = jintArrayValue; Ai6 = jintArrayValue; Ai7 = jintArrayValue; Ai8 = jintArrayValue; Ai9 = jintArrayValue; Ai10 = jintArrayValue; Ai11 = jintArrayValue; Ai12 = jintArrayValue; Ai13 = jintArrayValue; Ai14 = jintArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ai1, Ai2, Ai3, Ai4, Ai5, Ai6, Ai7, Ai8, Ai9, Ai10, Ai11, Ai12, Ai13, Ai14);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00234_run
(JNIEnv *env, jobject instance) {
    jintArray Ai1; jintArray Ai2; jintArray Ai3; jintArray Ai4; jintArray Ai5; jintArray Ai6; jintArray Ai7; jintArray Ai8; jintArray Ai9; jintArray Ai10; jintArray Ai11; jintArray Ai12; jintArray Ai13; jintArray Ai14;
    Ai1 = jintArrayValue; Ai2 = jintArrayValue; Ai3 = jintArrayValue; Ai4 = jintArrayValue; Ai5 = jintArrayValue; Ai6 = jintArrayValue; Ai7 = jintArrayValue; Ai8 = jintArrayValue; Ai9 = jintArrayValue; Ai10 = jintArrayValue; Ai11 = jintArrayValue; Ai12 = jintArrayValue; Ai13 = jintArrayValue; Ai14 = jintArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00234_nativemethod (env, instance, Ai1, Ai2, Ai3, Ai4, Ai5, Ai6, Ai7, Ai8, Ai9, Ai10, Ai11, Ai12, Ai13, Ai14);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00235_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[235 - 1];

    jintArray Ai1; jintArray Ai2; jintArray Ai3; jintArray Ai4; jintArray Ai5; jintArray Ai6; jintArray Ai7; jintArray Ai8; jintArray Ai9; jintArray Ai10; jintArray Ai11; jintArray Ai12; jintArray Ai13; jintArray Ai14; jintArray Ai15;
    Ai1 = jintArrayValue; Ai2 = jintArrayValue; Ai3 = jintArrayValue; Ai4 = jintArrayValue; Ai5 = jintArrayValue; Ai6 = jintArrayValue; Ai7 = jintArrayValue; Ai8 = jintArrayValue; Ai9 = jintArrayValue; Ai10 = jintArrayValue; Ai11 = jintArrayValue; Ai12 = jintArrayValue; Ai13 = jintArrayValue; Ai14 = jintArrayValue; Ai15 = jintArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ai1, Ai2, Ai3, Ai4, Ai5, Ai6, Ai7, Ai8, Ai9, Ai10, Ai11, Ai12, Ai13, Ai14, Ai15);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00235_run
(JNIEnv *env, jobject instance) {
    jintArray Ai1; jintArray Ai2; jintArray Ai3; jintArray Ai4; jintArray Ai5; jintArray Ai6; jintArray Ai7; jintArray Ai8; jintArray Ai9; jintArray Ai10; jintArray Ai11; jintArray Ai12; jintArray Ai13; jintArray Ai14; jintArray Ai15;
    Ai1 = jintArrayValue; Ai2 = jintArrayValue; Ai3 = jintArrayValue; Ai4 = jintArrayValue; Ai5 = jintArrayValue; Ai6 = jintArrayValue; Ai7 = jintArrayValue; Ai8 = jintArrayValue; Ai9 = jintArrayValue; Ai10 = jintArrayValue; Ai11 = jintArrayValue; Ai12 = jintArrayValue; Ai13 = jintArrayValue; Ai14 = jintArrayValue; Ai15 = jintArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00235_nativemethod (env, instance, Ai1, Ai2, Ai3, Ai4, Ai5, Ai6, Ai7, Ai8, Ai9, Ai10, Ai11, Ai12, Ai13, Ai14, Ai15);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00236_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[236 - 1];

    jintArray Ai1; jintArray Ai2; jintArray Ai3; jintArray Ai4; jintArray Ai5; jintArray Ai6; jintArray Ai7; jintArray Ai8; jintArray Ai9; jintArray Ai10; jintArray Ai11; jintArray Ai12; jintArray Ai13; jintArray Ai14; jintArray Ai15; jintArray Ai16;
    Ai1 = jintArrayValue; Ai2 = jintArrayValue; Ai3 = jintArrayValue; Ai4 = jintArrayValue; Ai5 = jintArrayValue; Ai6 = jintArrayValue; Ai7 = jintArrayValue; Ai8 = jintArrayValue; Ai9 = jintArrayValue; Ai10 = jintArrayValue; Ai11 = jintArrayValue; Ai12 = jintArrayValue; Ai13 = jintArrayValue; Ai14 = jintArrayValue; Ai15 = jintArrayValue; Ai16 = jintArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ai1, Ai2, Ai3, Ai4, Ai5, Ai6, Ai7, Ai8, Ai9, Ai10, Ai11, Ai12, Ai13, Ai14, Ai15, Ai16);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00236_run
(JNIEnv *env, jobject instance) {
    jintArray Ai1; jintArray Ai2; jintArray Ai3; jintArray Ai4; jintArray Ai5; jintArray Ai6; jintArray Ai7; jintArray Ai8; jintArray Ai9; jintArray Ai10; jintArray Ai11; jintArray Ai12; jintArray Ai13; jintArray Ai14; jintArray Ai15; jintArray Ai16;
    Ai1 = jintArrayValue; Ai2 = jintArrayValue; Ai3 = jintArrayValue; Ai4 = jintArrayValue; Ai5 = jintArrayValue; Ai6 = jintArrayValue; Ai7 = jintArrayValue; Ai8 = jintArrayValue; Ai9 = jintArrayValue; Ai10 = jintArrayValue; Ai11 = jintArrayValue; Ai12 = jintArrayValue; Ai13 = jintArrayValue; Ai14 = jintArrayValue; Ai15 = jintArrayValue; Ai16 = jintArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00236_nativemethod (env, instance, Ai1, Ai2, Ai3, Ai4, Ai5, Ai6, Ai7, Ai8, Ai9, Ai10, Ai11, Ai12, Ai13, Ai14, Ai15, Ai16);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00237_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[237 - 1];

    jintArray Ai1; jintArray Ai2; jintArray Ai3; jintArray Ai4; jintArray Ai5; jintArray Ai6; jintArray Ai7; jintArray Ai8; jintArray Ai9; jintArray Ai10; jintArray Ai11; jintArray Ai12; jintArray Ai13; jintArray Ai14; jintArray Ai15; jintArray Ai16; jintArray Ai17;
    Ai1 = jintArrayValue; Ai2 = jintArrayValue; Ai3 = jintArrayValue; Ai4 = jintArrayValue; Ai5 = jintArrayValue; Ai6 = jintArrayValue; Ai7 = jintArrayValue; Ai8 = jintArrayValue; Ai9 = jintArrayValue; Ai10 = jintArrayValue; Ai11 = jintArrayValue; Ai12 = jintArrayValue; Ai13 = jintArrayValue; Ai14 = jintArrayValue; Ai15 = jintArrayValue; Ai16 = jintArrayValue; Ai17 = jintArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ai1, Ai2, Ai3, Ai4, Ai5, Ai6, Ai7, Ai8, Ai9, Ai10, Ai11, Ai12, Ai13, Ai14, Ai15, Ai16, Ai17);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00237_run
(JNIEnv *env, jobject instance) {
    jintArray Ai1; jintArray Ai2; jintArray Ai3; jintArray Ai4; jintArray Ai5; jintArray Ai6; jintArray Ai7; jintArray Ai8; jintArray Ai9; jintArray Ai10; jintArray Ai11; jintArray Ai12; jintArray Ai13; jintArray Ai14; jintArray Ai15; jintArray Ai16; jintArray Ai17;
    Ai1 = jintArrayValue; Ai2 = jintArrayValue; Ai3 = jintArrayValue; Ai4 = jintArrayValue; Ai5 = jintArrayValue; Ai6 = jintArrayValue; Ai7 = jintArrayValue; Ai8 = jintArrayValue; Ai9 = jintArrayValue; Ai10 = jintArrayValue; Ai11 = jintArrayValue; Ai12 = jintArrayValue; Ai13 = jintArrayValue; Ai14 = jintArrayValue; Ai15 = jintArrayValue; Ai16 = jintArrayValue; Ai17 = jintArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00237_nativemethod (env, instance, Ai1, Ai2, Ai3, Ai4, Ai5, Ai6, Ai7, Ai8, Ai9, Ai10, Ai11, Ai12, Ai13, Ai14, Ai15, Ai16, Ai17);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00238_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[238 - 1];

    jintArray Ai1; jintArray Ai2; jintArray Ai3; jintArray Ai4; jintArray Ai5; jintArray Ai6; jintArray Ai7; jintArray Ai8; jintArray Ai9; jintArray Ai10; jintArray Ai11; jintArray Ai12; jintArray Ai13; jintArray Ai14; jintArray Ai15; jintArray Ai16; jintArray Ai17; jintArray Ai18;
    Ai1 = jintArrayValue; Ai2 = jintArrayValue; Ai3 = jintArrayValue; Ai4 = jintArrayValue; Ai5 = jintArrayValue; Ai6 = jintArrayValue; Ai7 = jintArrayValue; Ai8 = jintArrayValue; Ai9 = jintArrayValue; Ai10 = jintArrayValue; Ai11 = jintArrayValue; Ai12 = jintArrayValue; Ai13 = jintArrayValue; Ai14 = jintArrayValue; Ai15 = jintArrayValue; Ai16 = jintArrayValue; Ai17 = jintArrayValue; Ai18 = jintArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ai1, Ai2, Ai3, Ai4, Ai5, Ai6, Ai7, Ai8, Ai9, Ai10, Ai11, Ai12, Ai13, Ai14, Ai15, Ai16, Ai17, Ai18);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00238_run
(JNIEnv *env, jobject instance) {
    jintArray Ai1; jintArray Ai2; jintArray Ai3; jintArray Ai4; jintArray Ai5; jintArray Ai6; jintArray Ai7; jintArray Ai8; jintArray Ai9; jintArray Ai10; jintArray Ai11; jintArray Ai12; jintArray Ai13; jintArray Ai14; jintArray Ai15; jintArray Ai16; jintArray Ai17; jintArray Ai18;
    Ai1 = jintArrayValue; Ai2 = jintArrayValue; Ai3 = jintArrayValue; Ai4 = jintArrayValue; Ai5 = jintArrayValue; Ai6 = jintArrayValue; Ai7 = jintArrayValue; Ai8 = jintArrayValue; Ai9 = jintArrayValue; Ai10 = jintArrayValue; Ai11 = jintArrayValue; Ai12 = jintArrayValue; Ai13 = jintArrayValue; Ai14 = jintArrayValue; Ai15 = jintArrayValue; Ai16 = jintArrayValue; Ai17 = jintArrayValue; Ai18 = jintArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00238_nativemethod (env, instance, Ai1, Ai2, Ai3, Ai4, Ai5, Ai6, Ai7, Ai8, Ai9, Ai10, Ai11, Ai12, Ai13, Ai14, Ai15, Ai16, Ai17, Ai18);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00239_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[239 - 1];

    jintArray Ai1; jintArray Ai2; jintArray Ai3; jintArray Ai4; jintArray Ai5; jintArray Ai6; jintArray Ai7; jintArray Ai8; jintArray Ai9; jintArray Ai10; jintArray Ai11; jintArray Ai12; jintArray Ai13; jintArray Ai14; jintArray Ai15; jintArray Ai16; jintArray Ai17; jintArray Ai18; jintArray Ai19;
    Ai1 = jintArrayValue; Ai2 = jintArrayValue; Ai3 = jintArrayValue; Ai4 = jintArrayValue; Ai5 = jintArrayValue; Ai6 = jintArrayValue; Ai7 = jintArrayValue; Ai8 = jintArrayValue; Ai9 = jintArrayValue; Ai10 = jintArrayValue; Ai11 = jintArrayValue; Ai12 = jintArrayValue; Ai13 = jintArrayValue; Ai14 = jintArrayValue; Ai15 = jintArrayValue; Ai16 = jintArrayValue; Ai17 = jintArrayValue; Ai18 = jintArrayValue; Ai19 = jintArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ai1, Ai2, Ai3, Ai4, Ai5, Ai6, Ai7, Ai8, Ai9, Ai10, Ai11, Ai12, Ai13, Ai14, Ai15, Ai16, Ai17, Ai18, Ai19);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00239_run
(JNIEnv *env, jobject instance) {
    jintArray Ai1; jintArray Ai2; jintArray Ai3; jintArray Ai4; jintArray Ai5; jintArray Ai6; jintArray Ai7; jintArray Ai8; jintArray Ai9; jintArray Ai10; jintArray Ai11; jintArray Ai12; jintArray Ai13; jintArray Ai14; jintArray Ai15; jintArray Ai16; jintArray Ai17; jintArray Ai18; jintArray Ai19;
    Ai1 = jintArrayValue; Ai2 = jintArrayValue; Ai3 = jintArrayValue; Ai4 = jintArrayValue; Ai5 = jintArrayValue; Ai6 = jintArrayValue; Ai7 = jintArrayValue; Ai8 = jintArrayValue; Ai9 = jintArrayValue; Ai10 = jintArrayValue; Ai11 = jintArrayValue; Ai12 = jintArrayValue; Ai13 = jintArrayValue; Ai14 = jintArrayValue; Ai15 = jintArrayValue; Ai16 = jintArrayValue; Ai17 = jintArrayValue; Ai18 = jintArrayValue; Ai19 = jintArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00239_nativemethod (env, instance, Ai1, Ai2, Ai3, Ai4, Ai5, Ai6, Ai7, Ai8, Ai9, Ai10, Ai11, Ai12, Ai13, Ai14, Ai15, Ai16, Ai17, Ai18, Ai19);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00240_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[240 - 1];

    jintArray Ai1; jintArray Ai2; jintArray Ai3; jintArray Ai4; jintArray Ai5; jintArray Ai6; jintArray Ai7; jintArray Ai8; jintArray Ai9; jintArray Ai10; jintArray Ai11; jintArray Ai12; jintArray Ai13; jintArray Ai14; jintArray Ai15; jintArray Ai16; jintArray Ai17; jintArray Ai18; jintArray Ai19; jintArray Ai20;
    Ai1 = jintArrayValue; Ai2 = jintArrayValue; Ai3 = jintArrayValue; Ai4 = jintArrayValue; Ai5 = jintArrayValue; Ai6 = jintArrayValue; Ai7 = jintArrayValue; Ai8 = jintArrayValue; Ai9 = jintArrayValue; Ai10 = jintArrayValue; Ai11 = jintArrayValue; Ai12 = jintArrayValue; Ai13 = jintArrayValue; Ai14 = jintArrayValue; Ai15 = jintArrayValue; Ai16 = jintArrayValue; Ai17 = jintArrayValue; Ai18 = jintArrayValue; Ai19 = jintArrayValue; Ai20 = jintArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ai1, Ai2, Ai3, Ai4, Ai5, Ai6, Ai7, Ai8, Ai9, Ai10, Ai11, Ai12, Ai13, Ai14, Ai15, Ai16, Ai17, Ai18, Ai19, Ai20);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00240_run
(JNIEnv *env, jobject instance) {
    jintArray Ai1; jintArray Ai2; jintArray Ai3; jintArray Ai4; jintArray Ai5; jintArray Ai6; jintArray Ai7; jintArray Ai8; jintArray Ai9; jintArray Ai10; jintArray Ai11; jintArray Ai12; jintArray Ai13; jintArray Ai14; jintArray Ai15; jintArray Ai16; jintArray Ai17; jintArray Ai18; jintArray Ai19; jintArray Ai20;
    Ai1 = jintArrayValue; Ai2 = jintArrayValue; Ai3 = jintArrayValue; Ai4 = jintArrayValue; Ai5 = jintArrayValue; Ai6 = jintArrayValue; Ai7 = jintArrayValue; Ai8 = jintArrayValue; Ai9 = jintArrayValue; Ai10 = jintArrayValue; Ai11 = jintArrayValue; Ai12 = jintArrayValue; Ai13 = jintArrayValue; Ai14 = jintArrayValue; Ai15 = jintArrayValue; Ai16 = jintArrayValue; Ai17 = jintArrayValue; Ai18 = jintArrayValue; Ai19 = jintArrayValue; Ai20 = jintArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00240_nativemethod (env, instance, Ai1, Ai2, Ai3, Ai4, Ai5, Ai6, Ai7, Ai8, Ai9, Ai10, Ai11, Ai12, Ai13, Ai14, Ai15, Ai16, Ai17, Ai18, Ai19, Ai20);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00241_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[241 - 1];

    jshort s1;
    s1 = 101;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, s1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00241_run
(JNIEnv *env, jobject instance) {
    jshort s1;
    s1 = 101;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00241_nativemethod (env, instance, s1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00242_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[242 - 1];

    jshort s1; jshort s2;
    s1 = 101; s2 = 101;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, s1, s2);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00242_run
(JNIEnv *env, jobject instance) {
    jshort s1; jshort s2;
    s1 = 101; s2 = 101;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00242_nativemethod (env, instance, s1, s2);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00243_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[243 - 1];

    jshort s1; jshort s2; jshort s3;
    s1 = 101; s2 = 101; s3 = 101;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, s1, s2, s3);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00243_run
(JNIEnv *env, jobject instance) {
    jshort s1; jshort s2; jshort s3;
    s1 = 101; s2 = 101; s3 = 101;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00243_nativemethod (env, instance, s1, s2, s3);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00244_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[244 - 1];

    jshort s1; jshort s2; jshort s3; jshort s4;
    s1 = 101; s2 = 101; s3 = 101; s4 = 101;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, s1, s2, s3, s4);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00244_run
(JNIEnv *env, jobject instance) {
    jshort s1; jshort s2; jshort s3; jshort s4;
    s1 = 101; s2 = 101; s3 = 101; s4 = 101;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00244_nativemethod (env, instance, s1, s2, s3, s4);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00245_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[245 - 1];

    jshort s1; jshort s2; jshort s3; jshort s4; jshort s5;
    s1 = 101; s2 = 101; s3 = 101; s4 = 101; s5 = 101;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, s1, s2, s3, s4, s5);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00245_run
(JNIEnv *env, jobject instance) {
    jshort s1; jshort s2; jshort s3; jshort s4; jshort s5;
    s1 = 101; s2 = 101; s3 = 101; s4 = 101; s5 = 101;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00245_nativemethod (env, instance, s1, s2, s3, s4, s5);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00246_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[246 - 1];

    jshort s1; jshort s2; jshort s3; jshort s4; jshort s5; jshort s6;
    s1 = 101; s2 = 101; s3 = 101; s4 = 101; s5 = 101; s6 = 101;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, s1, s2, s3, s4, s5, s6);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00246_run
(JNIEnv *env, jobject instance) {
    jshort s1; jshort s2; jshort s3; jshort s4; jshort s5; jshort s6;
    s1 = 101; s2 = 101; s3 = 101; s4 = 101; s5 = 101; s6 = 101;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00246_nativemethod (env, instance, s1, s2, s3, s4, s5, s6);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00247_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[247 - 1];

    jshort s1; jshort s2; jshort s3; jshort s4; jshort s5; jshort s6; jshort s7;
    s1 = 101; s2 = 101; s3 = 101; s4 = 101; s5 = 101; s6 = 101; s7 = 101;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, s1, s2, s3, s4, s5, s6, s7);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00247_run
(JNIEnv *env, jobject instance) {
    jshort s1; jshort s2; jshort s3; jshort s4; jshort s5; jshort s6; jshort s7;
    s1 = 101; s2 = 101; s3 = 101; s4 = 101; s5 = 101; s6 = 101; s7 = 101;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00247_nativemethod (env, instance, s1, s2, s3, s4, s5, s6, s7);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00248_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[248 - 1];

    jshort s1; jshort s2; jshort s3; jshort s4; jshort s5; jshort s6; jshort s7; jshort s8;
    s1 = 101; s2 = 101; s3 = 101; s4 = 101; s5 = 101; s6 = 101; s7 = 101; s8 = 101;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, s1, s2, s3, s4, s5, s6, s7, s8);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00248_run
(JNIEnv *env, jobject instance) {
    jshort s1; jshort s2; jshort s3; jshort s4; jshort s5; jshort s6; jshort s7; jshort s8;
    s1 = 101; s2 = 101; s3 = 101; s4 = 101; s5 = 101; s6 = 101; s7 = 101; s8 = 101;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00248_nativemethod (env, instance, s1, s2, s3, s4, s5, s6, s7, s8);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00249_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[249 - 1];

    jshort s1; jshort s2; jshort s3; jshort s4; jshort s5; jshort s6; jshort s7; jshort s8; jshort s9;
    s1 = 101; s2 = 101; s3 = 101; s4 = 101; s5 = 101; s6 = 101; s7 = 101; s8 = 101; s9 = 101;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, s1, s2, s3, s4, s5, s6, s7, s8, s9);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00249_run
(JNIEnv *env, jobject instance) {
    jshort s1; jshort s2; jshort s3; jshort s4; jshort s5; jshort s6; jshort s7; jshort s8; jshort s9;
    s1 = 101; s2 = 101; s3 = 101; s4 = 101; s5 = 101; s6 = 101; s7 = 101; s8 = 101; s9 = 101;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00249_nativemethod (env, instance, s1, s2, s3, s4, s5, s6, s7, s8, s9);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00250_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[250 - 1];

    jshort s1; jshort s2; jshort s3; jshort s4; jshort s5; jshort s6; jshort s7; jshort s8; jshort s9; jshort s10;
    s1 = 101; s2 = 101; s3 = 101; s4 = 101; s5 = 101; s6 = 101; s7 = 101; s8 = 101; s9 = 101; s10 = 101;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00250_run
(JNIEnv *env, jobject instance) {
    jshort s1; jshort s2; jshort s3; jshort s4; jshort s5; jshort s6; jshort s7; jshort s8; jshort s9; jshort s10;
    s1 = 101; s2 = 101; s3 = 101; s4 = 101; s5 = 101; s6 = 101; s7 = 101; s8 = 101; s9 = 101; s10 = 101;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00250_nativemethod (env, instance, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00251_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[251 - 1];

    jshort s1; jshort s2; jshort s3; jshort s4; jshort s5; jshort s6; jshort s7; jshort s8; jshort s9; jshort s10; jshort s11;
    s1 = 101; s2 = 101; s3 = 101; s4 = 101; s5 = 101; s6 = 101; s7 = 101; s8 = 101; s9 = 101; s10 = 101; s11 = 101;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00251_run
(JNIEnv *env, jobject instance) {
    jshort s1; jshort s2; jshort s3; jshort s4; jshort s5; jshort s6; jshort s7; jshort s8; jshort s9; jshort s10; jshort s11;
    s1 = 101; s2 = 101; s3 = 101; s4 = 101; s5 = 101; s6 = 101; s7 = 101; s8 = 101; s9 = 101; s10 = 101; s11 = 101;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00251_nativemethod (env, instance, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00252_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[252 - 1];

    jshort s1; jshort s2; jshort s3; jshort s4; jshort s5; jshort s6; jshort s7; jshort s8; jshort s9; jshort s10; jshort s11; jshort s12;
    s1 = 101; s2 = 101; s3 = 101; s4 = 101; s5 = 101; s6 = 101; s7 = 101; s8 = 101; s9 = 101; s10 = 101; s11 = 101; s12 = 101;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00252_run
(JNIEnv *env, jobject instance) {
    jshort s1; jshort s2; jshort s3; jshort s4; jshort s5; jshort s6; jshort s7; jshort s8; jshort s9; jshort s10; jshort s11; jshort s12;
    s1 = 101; s2 = 101; s3 = 101; s4 = 101; s5 = 101; s6 = 101; s7 = 101; s8 = 101; s9 = 101; s10 = 101; s11 = 101; s12 = 101;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00252_nativemethod (env, instance, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00253_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[253 - 1];

    jshort s1; jshort s2; jshort s3; jshort s4; jshort s5; jshort s6; jshort s7; jshort s8; jshort s9; jshort s10; jshort s11; jshort s12; jshort s13;
    s1 = 101; s2 = 101; s3 = 101; s4 = 101; s5 = 101; s6 = 101; s7 = 101; s8 = 101; s9 = 101; s10 = 101; s11 = 101; s12 = 101; s13 = 101;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00253_run
(JNIEnv *env, jobject instance) {
    jshort s1; jshort s2; jshort s3; jshort s4; jshort s5; jshort s6; jshort s7; jshort s8; jshort s9; jshort s10; jshort s11; jshort s12; jshort s13;
    s1 = 101; s2 = 101; s3 = 101; s4 = 101; s5 = 101; s6 = 101; s7 = 101; s8 = 101; s9 = 101; s10 = 101; s11 = 101; s12 = 101; s13 = 101;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00253_nativemethod (env, instance, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00254_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[254 - 1];

    jshort s1; jshort s2; jshort s3; jshort s4; jshort s5; jshort s6; jshort s7; jshort s8; jshort s9; jshort s10; jshort s11; jshort s12; jshort s13; jshort s14;
    s1 = 101; s2 = 101; s3 = 101; s4 = 101; s5 = 101; s6 = 101; s7 = 101; s8 = 101; s9 = 101; s10 = 101; s11 = 101; s12 = 101; s13 = 101; s14 = 101;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13, s14);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00254_run
(JNIEnv *env, jobject instance) {
    jshort s1; jshort s2; jshort s3; jshort s4; jshort s5; jshort s6; jshort s7; jshort s8; jshort s9; jshort s10; jshort s11; jshort s12; jshort s13; jshort s14;
    s1 = 101; s2 = 101; s3 = 101; s4 = 101; s5 = 101; s6 = 101; s7 = 101; s8 = 101; s9 = 101; s10 = 101; s11 = 101; s12 = 101; s13 = 101; s14 = 101;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00254_nativemethod (env, instance, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13, s14);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00255_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[255 - 1];

    jshort s1; jshort s2; jshort s3; jshort s4; jshort s5; jshort s6; jshort s7; jshort s8; jshort s9; jshort s10; jshort s11; jshort s12; jshort s13; jshort s14; jshort s15;
    s1 = 101; s2 = 101; s3 = 101; s4 = 101; s5 = 101; s6 = 101; s7 = 101; s8 = 101; s9 = 101; s10 = 101; s11 = 101; s12 = 101; s13 = 101; s14 = 101; s15 = 101;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13, s14, s15);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00255_run
(JNIEnv *env, jobject instance) {
    jshort s1; jshort s2; jshort s3; jshort s4; jshort s5; jshort s6; jshort s7; jshort s8; jshort s9; jshort s10; jshort s11; jshort s12; jshort s13; jshort s14; jshort s15;
    s1 = 101; s2 = 101; s3 = 101; s4 = 101; s5 = 101; s6 = 101; s7 = 101; s8 = 101; s9 = 101; s10 = 101; s11 = 101; s12 = 101; s13 = 101; s14 = 101; s15 = 101;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00255_nativemethod (env, instance, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13, s14, s15);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00256_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[256 - 1];

    jshort s1; jshort s2; jshort s3; jshort s4; jshort s5; jshort s6; jshort s7; jshort s8; jshort s9; jshort s10; jshort s11; jshort s12; jshort s13; jshort s14; jshort s15; jshort s16;
    s1 = 101; s2 = 101; s3 = 101; s4 = 101; s5 = 101; s6 = 101; s7 = 101; s8 = 101; s9 = 101; s10 = 101; s11 = 101; s12 = 101; s13 = 101; s14 = 101; s15 = 101; s16 = 101;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13, s14, s15, s16);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00256_run
(JNIEnv *env, jobject instance) {
    jshort s1; jshort s2; jshort s3; jshort s4; jshort s5; jshort s6; jshort s7; jshort s8; jshort s9; jshort s10; jshort s11; jshort s12; jshort s13; jshort s14; jshort s15; jshort s16;
    s1 = 101; s2 = 101; s3 = 101; s4 = 101; s5 = 101; s6 = 101; s7 = 101; s8 = 101; s9 = 101; s10 = 101; s11 = 101; s12 = 101; s13 = 101; s14 = 101; s15 = 101; s16 = 101;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00256_nativemethod (env, instance, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13, s14, s15, s16);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00257_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[257 - 1];

    jshort s1; jshort s2; jshort s3; jshort s4; jshort s5; jshort s6; jshort s7; jshort s8; jshort s9; jshort s10; jshort s11; jshort s12; jshort s13; jshort s14; jshort s15; jshort s16; jshort s17;
    s1 = 101; s2 = 101; s3 = 101; s4 = 101; s5 = 101; s6 = 101; s7 = 101; s8 = 101; s9 = 101; s10 = 101; s11 = 101; s12 = 101; s13 = 101; s14 = 101; s15 = 101; s16 = 101; s17 = 101;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13, s14, s15, s16, s17);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00257_run
(JNIEnv *env, jobject instance) {
    jshort s1; jshort s2; jshort s3; jshort s4; jshort s5; jshort s6; jshort s7; jshort s8; jshort s9; jshort s10; jshort s11; jshort s12; jshort s13; jshort s14; jshort s15; jshort s16; jshort s17;
    s1 = 101; s2 = 101; s3 = 101; s4 = 101; s5 = 101; s6 = 101; s7 = 101; s8 = 101; s9 = 101; s10 = 101; s11 = 101; s12 = 101; s13 = 101; s14 = 101; s15 = 101; s16 = 101; s17 = 101;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00257_nativemethod (env, instance, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13, s14, s15, s16, s17);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00258_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[258 - 1];

    jshort s1; jshort s2; jshort s3; jshort s4; jshort s5; jshort s6; jshort s7; jshort s8; jshort s9; jshort s10; jshort s11; jshort s12; jshort s13; jshort s14; jshort s15; jshort s16; jshort s17; jshort s18;
    s1 = 101; s2 = 101; s3 = 101; s4 = 101; s5 = 101; s6 = 101; s7 = 101; s8 = 101; s9 = 101; s10 = 101; s11 = 101; s12 = 101; s13 = 101; s14 = 101; s15 = 101; s16 = 101; s17 = 101; s18 = 101;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13, s14, s15, s16, s17, s18);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00258_run
(JNIEnv *env, jobject instance) {
    jshort s1; jshort s2; jshort s3; jshort s4; jshort s5; jshort s6; jshort s7; jshort s8; jshort s9; jshort s10; jshort s11; jshort s12; jshort s13; jshort s14; jshort s15; jshort s16; jshort s17; jshort s18;
    s1 = 101; s2 = 101; s3 = 101; s4 = 101; s5 = 101; s6 = 101; s7 = 101; s8 = 101; s9 = 101; s10 = 101; s11 = 101; s12 = 101; s13 = 101; s14 = 101; s15 = 101; s16 = 101; s17 = 101; s18 = 101;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00258_nativemethod (env, instance, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13, s14, s15, s16, s17, s18);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00259_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[259 - 1];

    jshort s1; jshort s2; jshort s3; jshort s4; jshort s5; jshort s6; jshort s7; jshort s8; jshort s9; jshort s10; jshort s11; jshort s12; jshort s13; jshort s14; jshort s15; jshort s16; jshort s17; jshort s18; jshort s19;
    s1 = 101; s2 = 101; s3 = 101; s4 = 101; s5 = 101; s6 = 101; s7 = 101; s8 = 101; s9 = 101; s10 = 101; s11 = 101; s12 = 101; s13 = 101; s14 = 101; s15 = 101; s16 = 101; s17 = 101; s18 = 101; s19 = 101;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13, s14, s15, s16, s17, s18, s19);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00259_run
(JNIEnv *env, jobject instance) {
    jshort s1; jshort s2; jshort s3; jshort s4; jshort s5; jshort s6; jshort s7; jshort s8; jshort s9; jshort s10; jshort s11; jshort s12; jshort s13; jshort s14; jshort s15; jshort s16; jshort s17; jshort s18; jshort s19;
    s1 = 101; s2 = 101; s3 = 101; s4 = 101; s5 = 101; s6 = 101; s7 = 101; s8 = 101; s9 = 101; s10 = 101; s11 = 101; s12 = 101; s13 = 101; s14 = 101; s15 = 101; s16 = 101; s17 = 101; s18 = 101; s19 = 101;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00259_nativemethod (env, instance, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13, s14, s15, s16, s17, s18, s19);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00260_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[260 - 1];

    jshort s1; jshort s2; jshort s3; jshort s4; jshort s5; jshort s6; jshort s7; jshort s8; jshort s9; jshort s10; jshort s11; jshort s12; jshort s13; jshort s14; jshort s15; jshort s16; jshort s17; jshort s18; jshort s19; jshort s20;
    s1 = 101; s2 = 101; s3 = 101; s4 = 101; s5 = 101; s6 = 101; s7 = 101; s8 = 101; s9 = 101; s10 = 101; s11 = 101; s12 = 101; s13 = 101; s14 = 101; s15 = 101; s16 = 101; s17 = 101; s18 = 101; s19 = 101; s20 = 101;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13, s14, s15, s16, s17, s18, s19, s20);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00260_run
(JNIEnv *env, jobject instance) {
    jshort s1; jshort s2; jshort s3; jshort s4; jshort s5; jshort s6; jshort s7; jshort s8; jshort s9; jshort s10; jshort s11; jshort s12; jshort s13; jshort s14; jshort s15; jshort s16; jshort s17; jshort s18; jshort s19; jshort s20;
    s1 = 101; s2 = 101; s3 = 101; s4 = 101; s5 = 101; s6 = 101; s7 = 101; s8 = 101; s9 = 101; s10 = 101; s11 = 101; s12 = 101; s13 = 101; s14 = 101; s15 = 101; s16 = 101; s17 = 101; s18 = 101; s19 = 101; s20 = 101;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00260_nativemethod (env, instance, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13, s14, s15, s16, s17, s18, s19, s20);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00261_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[261 - 1];

    jbooleanArray Ab1;
    Ab1 = jbooleanArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ab1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00261_run
(JNIEnv *env, jobject instance) {
    jbooleanArray Ab1;
    Ab1 = jbooleanArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00261_nativemethod (env, instance, Ab1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00262_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[262 - 1];

    jbooleanArray Ab1; jbooleanArray Ab2;
    Ab1 = jbooleanArrayValue; Ab2 = jbooleanArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ab1, Ab2);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00262_run
(JNIEnv *env, jobject instance) {
    jbooleanArray Ab1; jbooleanArray Ab2;
    Ab1 = jbooleanArrayValue; Ab2 = jbooleanArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00262_nativemethod (env, instance, Ab1, Ab2);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00263_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[263 - 1];

    jbooleanArray Ab1; jbooleanArray Ab2; jbooleanArray Ab3;
    Ab1 = jbooleanArrayValue; Ab2 = jbooleanArrayValue; Ab3 = jbooleanArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ab1, Ab2, Ab3);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00263_run
(JNIEnv *env, jobject instance) {
    jbooleanArray Ab1; jbooleanArray Ab2; jbooleanArray Ab3;
    Ab1 = jbooleanArrayValue; Ab2 = jbooleanArrayValue; Ab3 = jbooleanArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00263_nativemethod (env, instance, Ab1, Ab2, Ab3);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00264_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[264 - 1];

    jbooleanArray Ab1; jbooleanArray Ab2; jbooleanArray Ab3; jbooleanArray Ab4;
    Ab1 = jbooleanArrayValue; Ab2 = jbooleanArrayValue; Ab3 = jbooleanArrayValue; Ab4 = jbooleanArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ab1, Ab2, Ab3, Ab4);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00264_run
(JNIEnv *env, jobject instance) {
    jbooleanArray Ab1; jbooleanArray Ab2; jbooleanArray Ab3; jbooleanArray Ab4;
    Ab1 = jbooleanArrayValue; Ab2 = jbooleanArrayValue; Ab3 = jbooleanArrayValue; Ab4 = jbooleanArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00264_nativemethod (env, instance, Ab1, Ab2, Ab3, Ab4);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00265_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[265 - 1];

    jbooleanArray Ab1; jbooleanArray Ab2; jbooleanArray Ab3; jbooleanArray Ab4; jbooleanArray Ab5;
    Ab1 = jbooleanArrayValue; Ab2 = jbooleanArrayValue; Ab3 = jbooleanArrayValue; Ab4 = jbooleanArrayValue; Ab5 = jbooleanArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ab1, Ab2, Ab3, Ab4, Ab5);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00265_run
(JNIEnv *env, jobject instance) {
    jbooleanArray Ab1; jbooleanArray Ab2; jbooleanArray Ab3; jbooleanArray Ab4; jbooleanArray Ab5;
    Ab1 = jbooleanArrayValue; Ab2 = jbooleanArrayValue; Ab3 = jbooleanArrayValue; Ab4 = jbooleanArrayValue; Ab5 = jbooleanArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00265_nativemethod (env, instance, Ab1, Ab2, Ab3, Ab4, Ab5);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00266_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[266 - 1];

    jbooleanArray Ab1; jbooleanArray Ab2; jbooleanArray Ab3; jbooleanArray Ab4; jbooleanArray Ab5; jbooleanArray Ab6;
    Ab1 = jbooleanArrayValue; Ab2 = jbooleanArrayValue; Ab3 = jbooleanArrayValue; Ab4 = jbooleanArrayValue; Ab5 = jbooleanArrayValue; Ab6 = jbooleanArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ab1, Ab2, Ab3, Ab4, Ab5, Ab6);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00266_run
(JNIEnv *env, jobject instance) {
    jbooleanArray Ab1; jbooleanArray Ab2; jbooleanArray Ab3; jbooleanArray Ab4; jbooleanArray Ab5; jbooleanArray Ab6;
    Ab1 = jbooleanArrayValue; Ab2 = jbooleanArrayValue; Ab3 = jbooleanArrayValue; Ab4 = jbooleanArrayValue; Ab5 = jbooleanArrayValue; Ab6 = jbooleanArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00266_nativemethod (env, instance, Ab1, Ab2, Ab3, Ab4, Ab5, Ab6);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00267_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[267 - 1];

    jbooleanArray Ab1; jbooleanArray Ab2; jbooleanArray Ab3; jbooleanArray Ab4; jbooleanArray Ab5; jbooleanArray Ab6; jbooleanArray Ab7;
    Ab1 = jbooleanArrayValue; Ab2 = jbooleanArrayValue; Ab3 = jbooleanArrayValue; Ab4 = jbooleanArrayValue; Ab5 = jbooleanArrayValue; Ab6 = jbooleanArrayValue; Ab7 = jbooleanArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ab1, Ab2, Ab3, Ab4, Ab5, Ab6, Ab7);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00267_run
(JNIEnv *env, jobject instance) {
    jbooleanArray Ab1; jbooleanArray Ab2; jbooleanArray Ab3; jbooleanArray Ab4; jbooleanArray Ab5; jbooleanArray Ab6; jbooleanArray Ab7;
    Ab1 = jbooleanArrayValue; Ab2 = jbooleanArrayValue; Ab3 = jbooleanArrayValue; Ab4 = jbooleanArrayValue; Ab5 = jbooleanArrayValue; Ab6 = jbooleanArrayValue; Ab7 = jbooleanArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00267_nativemethod (env, instance, Ab1, Ab2, Ab3, Ab4, Ab5, Ab6, Ab7);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00268_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[268 - 1];

    jbooleanArray Ab1; jbooleanArray Ab2; jbooleanArray Ab3; jbooleanArray Ab4; jbooleanArray Ab5; jbooleanArray Ab6; jbooleanArray Ab7; jbooleanArray Ab8;
    Ab1 = jbooleanArrayValue; Ab2 = jbooleanArrayValue; Ab3 = jbooleanArrayValue; Ab4 = jbooleanArrayValue; Ab5 = jbooleanArrayValue; Ab6 = jbooleanArrayValue; Ab7 = jbooleanArrayValue; Ab8 = jbooleanArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ab1, Ab2, Ab3, Ab4, Ab5, Ab6, Ab7, Ab8);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00268_run
(JNIEnv *env, jobject instance) {
    jbooleanArray Ab1; jbooleanArray Ab2; jbooleanArray Ab3; jbooleanArray Ab4; jbooleanArray Ab5; jbooleanArray Ab6; jbooleanArray Ab7; jbooleanArray Ab8;
    Ab1 = jbooleanArrayValue; Ab2 = jbooleanArrayValue; Ab3 = jbooleanArrayValue; Ab4 = jbooleanArrayValue; Ab5 = jbooleanArrayValue; Ab6 = jbooleanArrayValue; Ab7 = jbooleanArrayValue; Ab8 = jbooleanArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00268_nativemethod (env, instance, Ab1, Ab2, Ab3, Ab4, Ab5, Ab6, Ab7, Ab8);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00269_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[269 - 1];

    jbooleanArray Ab1; jbooleanArray Ab2; jbooleanArray Ab3; jbooleanArray Ab4; jbooleanArray Ab5; jbooleanArray Ab6; jbooleanArray Ab7; jbooleanArray Ab8; jbooleanArray Ab9;
    Ab1 = jbooleanArrayValue; Ab2 = jbooleanArrayValue; Ab3 = jbooleanArrayValue; Ab4 = jbooleanArrayValue; Ab5 = jbooleanArrayValue; Ab6 = jbooleanArrayValue; Ab7 = jbooleanArrayValue; Ab8 = jbooleanArrayValue; Ab9 = jbooleanArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ab1, Ab2, Ab3, Ab4, Ab5, Ab6, Ab7, Ab8, Ab9);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00269_run
(JNIEnv *env, jobject instance) {
    jbooleanArray Ab1; jbooleanArray Ab2; jbooleanArray Ab3; jbooleanArray Ab4; jbooleanArray Ab5; jbooleanArray Ab6; jbooleanArray Ab7; jbooleanArray Ab8; jbooleanArray Ab9;
    Ab1 = jbooleanArrayValue; Ab2 = jbooleanArrayValue; Ab3 = jbooleanArrayValue; Ab4 = jbooleanArrayValue; Ab5 = jbooleanArrayValue; Ab6 = jbooleanArrayValue; Ab7 = jbooleanArrayValue; Ab8 = jbooleanArrayValue; Ab9 = jbooleanArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00269_nativemethod (env, instance, Ab1, Ab2, Ab3, Ab4, Ab5, Ab6, Ab7, Ab8, Ab9);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00270_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[270 - 1];

    jbooleanArray Ab1; jbooleanArray Ab2; jbooleanArray Ab3; jbooleanArray Ab4; jbooleanArray Ab5; jbooleanArray Ab6; jbooleanArray Ab7; jbooleanArray Ab8; jbooleanArray Ab9; jbooleanArray Ab10;
    Ab1 = jbooleanArrayValue; Ab2 = jbooleanArrayValue; Ab3 = jbooleanArrayValue; Ab4 = jbooleanArrayValue; Ab5 = jbooleanArrayValue; Ab6 = jbooleanArrayValue; Ab7 = jbooleanArrayValue; Ab8 = jbooleanArrayValue; Ab9 = jbooleanArrayValue; Ab10 = jbooleanArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ab1, Ab2, Ab3, Ab4, Ab5, Ab6, Ab7, Ab8, Ab9, Ab10);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00270_run
(JNIEnv *env, jobject instance) {
    jbooleanArray Ab1; jbooleanArray Ab2; jbooleanArray Ab3; jbooleanArray Ab4; jbooleanArray Ab5; jbooleanArray Ab6; jbooleanArray Ab7; jbooleanArray Ab8; jbooleanArray Ab9; jbooleanArray Ab10;
    Ab1 = jbooleanArrayValue; Ab2 = jbooleanArrayValue; Ab3 = jbooleanArrayValue; Ab4 = jbooleanArrayValue; Ab5 = jbooleanArrayValue; Ab6 = jbooleanArrayValue; Ab7 = jbooleanArrayValue; Ab8 = jbooleanArrayValue; Ab9 = jbooleanArrayValue; Ab10 = jbooleanArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00270_nativemethod (env, instance, Ab1, Ab2, Ab3, Ab4, Ab5, Ab6, Ab7, Ab8, Ab9, Ab10);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00271_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[271 - 1];

    jbooleanArray Ab1; jbooleanArray Ab2; jbooleanArray Ab3; jbooleanArray Ab4; jbooleanArray Ab5; jbooleanArray Ab6; jbooleanArray Ab7; jbooleanArray Ab8; jbooleanArray Ab9; jbooleanArray Ab10; jbooleanArray Ab11;
    Ab1 = jbooleanArrayValue; Ab2 = jbooleanArrayValue; Ab3 = jbooleanArrayValue; Ab4 = jbooleanArrayValue; Ab5 = jbooleanArrayValue; Ab6 = jbooleanArrayValue; Ab7 = jbooleanArrayValue; Ab8 = jbooleanArrayValue; Ab9 = jbooleanArrayValue; Ab10 = jbooleanArrayValue; Ab11 = jbooleanArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ab1, Ab2, Ab3, Ab4, Ab5, Ab6, Ab7, Ab8, Ab9, Ab10, Ab11);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00271_run
(JNIEnv *env, jobject instance) {
    jbooleanArray Ab1; jbooleanArray Ab2; jbooleanArray Ab3; jbooleanArray Ab4; jbooleanArray Ab5; jbooleanArray Ab6; jbooleanArray Ab7; jbooleanArray Ab8; jbooleanArray Ab9; jbooleanArray Ab10; jbooleanArray Ab11;
    Ab1 = jbooleanArrayValue; Ab2 = jbooleanArrayValue; Ab3 = jbooleanArrayValue; Ab4 = jbooleanArrayValue; Ab5 = jbooleanArrayValue; Ab6 = jbooleanArrayValue; Ab7 = jbooleanArrayValue; Ab8 = jbooleanArrayValue; Ab9 = jbooleanArrayValue; Ab10 = jbooleanArrayValue; Ab11 = jbooleanArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00271_nativemethod (env, instance, Ab1, Ab2, Ab3, Ab4, Ab5, Ab6, Ab7, Ab8, Ab9, Ab10, Ab11);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00272_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[272 - 1];

    jbooleanArray Ab1; jbooleanArray Ab2; jbooleanArray Ab3; jbooleanArray Ab4; jbooleanArray Ab5; jbooleanArray Ab6; jbooleanArray Ab7; jbooleanArray Ab8; jbooleanArray Ab9; jbooleanArray Ab10; jbooleanArray Ab11; jbooleanArray Ab12;
    Ab1 = jbooleanArrayValue; Ab2 = jbooleanArrayValue; Ab3 = jbooleanArrayValue; Ab4 = jbooleanArrayValue; Ab5 = jbooleanArrayValue; Ab6 = jbooleanArrayValue; Ab7 = jbooleanArrayValue; Ab8 = jbooleanArrayValue; Ab9 = jbooleanArrayValue; Ab10 = jbooleanArrayValue; Ab11 = jbooleanArrayValue; Ab12 = jbooleanArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ab1, Ab2, Ab3, Ab4, Ab5, Ab6, Ab7, Ab8, Ab9, Ab10, Ab11, Ab12);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00272_run
(JNIEnv *env, jobject instance) {
    jbooleanArray Ab1; jbooleanArray Ab2; jbooleanArray Ab3; jbooleanArray Ab4; jbooleanArray Ab5; jbooleanArray Ab6; jbooleanArray Ab7; jbooleanArray Ab8; jbooleanArray Ab9; jbooleanArray Ab10; jbooleanArray Ab11; jbooleanArray Ab12;
    Ab1 = jbooleanArrayValue; Ab2 = jbooleanArrayValue; Ab3 = jbooleanArrayValue; Ab4 = jbooleanArrayValue; Ab5 = jbooleanArrayValue; Ab6 = jbooleanArrayValue; Ab7 = jbooleanArrayValue; Ab8 = jbooleanArrayValue; Ab9 = jbooleanArrayValue; Ab10 = jbooleanArrayValue; Ab11 = jbooleanArrayValue; Ab12 = jbooleanArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00272_nativemethod (env, instance, Ab1, Ab2, Ab3, Ab4, Ab5, Ab6, Ab7, Ab8, Ab9, Ab10, Ab11, Ab12);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00273_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[273 - 1];

    jbooleanArray Ab1; jbooleanArray Ab2; jbooleanArray Ab3; jbooleanArray Ab4; jbooleanArray Ab5; jbooleanArray Ab6; jbooleanArray Ab7; jbooleanArray Ab8; jbooleanArray Ab9; jbooleanArray Ab10; jbooleanArray Ab11; jbooleanArray Ab12; jbooleanArray Ab13;
    Ab1 = jbooleanArrayValue; Ab2 = jbooleanArrayValue; Ab3 = jbooleanArrayValue; Ab4 = jbooleanArrayValue; Ab5 = jbooleanArrayValue; Ab6 = jbooleanArrayValue; Ab7 = jbooleanArrayValue; Ab8 = jbooleanArrayValue; Ab9 = jbooleanArrayValue; Ab10 = jbooleanArrayValue; Ab11 = jbooleanArrayValue; Ab12 = jbooleanArrayValue; Ab13 = jbooleanArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ab1, Ab2, Ab3, Ab4, Ab5, Ab6, Ab7, Ab8, Ab9, Ab10, Ab11, Ab12, Ab13);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00273_run
(JNIEnv *env, jobject instance) {
    jbooleanArray Ab1; jbooleanArray Ab2; jbooleanArray Ab3; jbooleanArray Ab4; jbooleanArray Ab5; jbooleanArray Ab6; jbooleanArray Ab7; jbooleanArray Ab8; jbooleanArray Ab9; jbooleanArray Ab10; jbooleanArray Ab11; jbooleanArray Ab12; jbooleanArray Ab13;
    Ab1 = jbooleanArrayValue; Ab2 = jbooleanArrayValue; Ab3 = jbooleanArrayValue; Ab4 = jbooleanArrayValue; Ab5 = jbooleanArrayValue; Ab6 = jbooleanArrayValue; Ab7 = jbooleanArrayValue; Ab8 = jbooleanArrayValue; Ab9 = jbooleanArrayValue; Ab10 = jbooleanArrayValue; Ab11 = jbooleanArrayValue; Ab12 = jbooleanArrayValue; Ab13 = jbooleanArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00273_nativemethod (env, instance, Ab1, Ab2, Ab3, Ab4, Ab5, Ab6, Ab7, Ab8, Ab9, Ab10, Ab11, Ab12, Ab13);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00274_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[274 - 1];

    jbooleanArray Ab1; jbooleanArray Ab2; jbooleanArray Ab3; jbooleanArray Ab4; jbooleanArray Ab5; jbooleanArray Ab6; jbooleanArray Ab7; jbooleanArray Ab8; jbooleanArray Ab9; jbooleanArray Ab10; jbooleanArray Ab11; jbooleanArray Ab12; jbooleanArray Ab13; jbooleanArray Ab14;
    Ab1 = jbooleanArrayValue; Ab2 = jbooleanArrayValue; Ab3 = jbooleanArrayValue; Ab4 = jbooleanArrayValue; Ab5 = jbooleanArrayValue; Ab6 = jbooleanArrayValue; Ab7 = jbooleanArrayValue; Ab8 = jbooleanArrayValue; Ab9 = jbooleanArrayValue; Ab10 = jbooleanArrayValue; Ab11 = jbooleanArrayValue; Ab12 = jbooleanArrayValue; Ab13 = jbooleanArrayValue; Ab14 = jbooleanArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ab1, Ab2, Ab3, Ab4, Ab5, Ab6, Ab7, Ab8, Ab9, Ab10, Ab11, Ab12, Ab13, Ab14);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00274_run
(JNIEnv *env, jobject instance) {
    jbooleanArray Ab1; jbooleanArray Ab2; jbooleanArray Ab3; jbooleanArray Ab4; jbooleanArray Ab5; jbooleanArray Ab6; jbooleanArray Ab7; jbooleanArray Ab8; jbooleanArray Ab9; jbooleanArray Ab10; jbooleanArray Ab11; jbooleanArray Ab12; jbooleanArray Ab13; jbooleanArray Ab14;
    Ab1 = jbooleanArrayValue; Ab2 = jbooleanArrayValue; Ab3 = jbooleanArrayValue; Ab4 = jbooleanArrayValue; Ab5 = jbooleanArrayValue; Ab6 = jbooleanArrayValue; Ab7 = jbooleanArrayValue; Ab8 = jbooleanArrayValue; Ab9 = jbooleanArrayValue; Ab10 = jbooleanArrayValue; Ab11 = jbooleanArrayValue; Ab12 = jbooleanArrayValue; Ab13 = jbooleanArrayValue; Ab14 = jbooleanArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00274_nativemethod (env, instance, Ab1, Ab2, Ab3, Ab4, Ab5, Ab6, Ab7, Ab8, Ab9, Ab10, Ab11, Ab12, Ab13, Ab14);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00275_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[275 - 1];

    jbooleanArray Ab1; jbooleanArray Ab2; jbooleanArray Ab3; jbooleanArray Ab4; jbooleanArray Ab5; jbooleanArray Ab6; jbooleanArray Ab7; jbooleanArray Ab8; jbooleanArray Ab9; jbooleanArray Ab10; jbooleanArray Ab11; jbooleanArray Ab12; jbooleanArray Ab13; jbooleanArray Ab14; jbooleanArray Ab15;
    Ab1 = jbooleanArrayValue; Ab2 = jbooleanArrayValue; Ab3 = jbooleanArrayValue; Ab4 = jbooleanArrayValue; Ab5 = jbooleanArrayValue; Ab6 = jbooleanArrayValue; Ab7 = jbooleanArrayValue; Ab8 = jbooleanArrayValue; Ab9 = jbooleanArrayValue; Ab10 = jbooleanArrayValue; Ab11 = jbooleanArrayValue; Ab12 = jbooleanArrayValue; Ab13 = jbooleanArrayValue; Ab14 = jbooleanArrayValue; Ab15 = jbooleanArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ab1, Ab2, Ab3, Ab4, Ab5, Ab6, Ab7, Ab8, Ab9, Ab10, Ab11, Ab12, Ab13, Ab14, Ab15);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00275_run
(JNIEnv *env, jobject instance) {
    jbooleanArray Ab1; jbooleanArray Ab2; jbooleanArray Ab3; jbooleanArray Ab4; jbooleanArray Ab5; jbooleanArray Ab6; jbooleanArray Ab7; jbooleanArray Ab8; jbooleanArray Ab9; jbooleanArray Ab10; jbooleanArray Ab11; jbooleanArray Ab12; jbooleanArray Ab13; jbooleanArray Ab14; jbooleanArray Ab15;
    Ab1 = jbooleanArrayValue; Ab2 = jbooleanArrayValue; Ab3 = jbooleanArrayValue; Ab4 = jbooleanArrayValue; Ab5 = jbooleanArrayValue; Ab6 = jbooleanArrayValue; Ab7 = jbooleanArrayValue; Ab8 = jbooleanArrayValue; Ab9 = jbooleanArrayValue; Ab10 = jbooleanArrayValue; Ab11 = jbooleanArrayValue; Ab12 = jbooleanArrayValue; Ab13 = jbooleanArrayValue; Ab14 = jbooleanArrayValue; Ab15 = jbooleanArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00275_nativemethod (env, instance, Ab1, Ab2, Ab3, Ab4, Ab5, Ab6, Ab7, Ab8, Ab9, Ab10, Ab11, Ab12, Ab13, Ab14, Ab15);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00276_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[276 - 1];

    jbooleanArray Ab1; jbooleanArray Ab2; jbooleanArray Ab3; jbooleanArray Ab4; jbooleanArray Ab5; jbooleanArray Ab6; jbooleanArray Ab7; jbooleanArray Ab8; jbooleanArray Ab9; jbooleanArray Ab10; jbooleanArray Ab11; jbooleanArray Ab12; jbooleanArray Ab13; jbooleanArray Ab14; jbooleanArray Ab15; jbooleanArray Ab16;
    Ab1 = jbooleanArrayValue; Ab2 = jbooleanArrayValue; Ab3 = jbooleanArrayValue; Ab4 = jbooleanArrayValue; Ab5 = jbooleanArrayValue; Ab6 = jbooleanArrayValue; Ab7 = jbooleanArrayValue; Ab8 = jbooleanArrayValue; Ab9 = jbooleanArrayValue; Ab10 = jbooleanArrayValue; Ab11 = jbooleanArrayValue; Ab12 = jbooleanArrayValue; Ab13 = jbooleanArrayValue; Ab14 = jbooleanArrayValue; Ab15 = jbooleanArrayValue; Ab16 = jbooleanArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ab1, Ab2, Ab3, Ab4, Ab5, Ab6, Ab7, Ab8, Ab9, Ab10, Ab11, Ab12, Ab13, Ab14, Ab15, Ab16);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00276_run
(JNIEnv *env, jobject instance) {
    jbooleanArray Ab1; jbooleanArray Ab2; jbooleanArray Ab3; jbooleanArray Ab4; jbooleanArray Ab5; jbooleanArray Ab6; jbooleanArray Ab7; jbooleanArray Ab8; jbooleanArray Ab9; jbooleanArray Ab10; jbooleanArray Ab11; jbooleanArray Ab12; jbooleanArray Ab13; jbooleanArray Ab14; jbooleanArray Ab15; jbooleanArray Ab16;
    Ab1 = jbooleanArrayValue; Ab2 = jbooleanArrayValue; Ab3 = jbooleanArrayValue; Ab4 = jbooleanArrayValue; Ab5 = jbooleanArrayValue; Ab6 = jbooleanArrayValue; Ab7 = jbooleanArrayValue; Ab8 = jbooleanArrayValue; Ab9 = jbooleanArrayValue; Ab10 = jbooleanArrayValue; Ab11 = jbooleanArrayValue; Ab12 = jbooleanArrayValue; Ab13 = jbooleanArrayValue; Ab14 = jbooleanArrayValue; Ab15 = jbooleanArrayValue; Ab16 = jbooleanArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00276_nativemethod (env, instance, Ab1, Ab2, Ab3, Ab4, Ab5, Ab6, Ab7, Ab8, Ab9, Ab10, Ab11, Ab12, Ab13, Ab14, Ab15, Ab16);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00277_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[277 - 1];

    jbooleanArray Ab1; jbooleanArray Ab2; jbooleanArray Ab3; jbooleanArray Ab4; jbooleanArray Ab5; jbooleanArray Ab6; jbooleanArray Ab7; jbooleanArray Ab8; jbooleanArray Ab9; jbooleanArray Ab10; jbooleanArray Ab11; jbooleanArray Ab12; jbooleanArray Ab13; jbooleanArray Ab14; jbooleanArray Ab15; jbooleanArray Ab16; jbooleanArray Ab17;
    Ab1 = jbooleanArrayValue; Ab2 = jbooleanArrayValue; Ab3 = jbooleanArrayValue; Ab4 = jbooleanArrayValue; Ab5 = jbooleanArrayValue; Ab6 = jbooleanArrayValue; Ab7 = jbooleanArrayValue; Ab8 = jbooleanArrayValue; Ab9 = jbooleanArrayValue; Ab10 = jbooleanArrayValue; Ab11 = jbooleanArrayValue; Ab12 = jbooleanArrayValue; Ab13 = jbooleanArrayValue; Ab14 = jbooleanArrayValue; Ab15 = jbooleanArrayValue; Ab16 = jbooleanArrayValue; Ab17 = jbooleanArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ab1, Ab2, Ab3, Ab4, Ab5, Ab6, Ab7, Ab8, Ab9, Ab10, Ab11, Ab12, Ab13, Ab14, Ab15, Ab16, Ab17);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00277_run
(JNIEnv *env, jobject instance) {
    jbooleanArray Ab1; jbooleanArray Ab2; jbooleanArray Ab3; jbooleanArray Ab4; jbooleanArray Ab5; jbooleanArray Ab6; jbooleanArray Ab7; jbooleanArray Ab8; jbooleanArray Ab9; jbooleanArray Ab10; jbooleanArray Ab11; jbooleanArray Ab12; jbooleanArray Ab13; jbooleanArray Ab14; jbooleanArray Ab15; jbooleanArray Ab16; jbooleanArray Ab17;
    Ab1 = jbooleanArrayValue; Ab2 = jbooleanArrayValue; Ab3 = jbooleanArrayValue; Ab4 = jbooleanArrayValue; Ab5 = jbooleanArrayValue; Ab6 = jbooleanArrayValue; Ab7 = jbooleanArrayValue; Ab8 = jbooleanArrayValue; Ab9 = jbooleanArrayValue; Ab10 = jbooleanArrayValue; Ab11 = jbooleanArrayValue; Ab12 = jbooleanArrayValue; Ab13 = jbooleanArrayValue; Ab14 = jbooleanArrayValue; Ab15 = jbooleanArrayValue; Ab16 = jbooleanArrayValue; Ab17 = jbooleanArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00277_nativemethod (env, instance, Ab1, Ab2, Ab3, Ab4, Ab5, Ab6, Ab7, Ab8, Ab9, Ab10, Ab11, Ab12, Ab13, Ab14, Ab15, Ab16, Ab17);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00278_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[278 - 1];

    jbooleanArray Ab1; jbooleanArray Ab2; jbooleanArray Ab3; jbooleanArray Ab4; jbooleanArray Ab5; jbooleanArray Ab6; jbooleanArray Ab7; jbooleanArray Ab8; jbooleanArray Ab9; jbooleanArray Ab10; jbooleanArray Ab11; jbooleanArray Ab12; jbooleanArray Ab13; jbooleanArray Ab14; jbooleanArray Ab15; jbooleanArray Ab16; jbooleanArray Ab17; jbooleanArray Ab18;
    Ab1 = jbooleanArrayValue; Ab2 = jbooleanArrayValue; Ab3 = jbooleanArrayValue; Ab4 = jbooleanArrayValue; Ab5 = jbooleanArrayValue; Ab6 = jbooleanArrayValue; Ab7 = jbooleanArrayValue; Ab8 = jbooleanArrayValue; Ab9 = jbooleanArrayValue; Ab10 = jbooleanArrayValue; Ab11 = jbooleanArrayValue; Ab12 = jbooleanArrayValue; Ab13 = jbooleanArrayValue; Ab14 = jbooleanArrayValue; Ab15 = jbooleanArrayValue; Ab16 = jbooleanArrayValue; Ab17 = jbooleanArrayValue; Ab18 = jbooleanArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ab1, Ab2, Ab3, Ab4, Ab5, Ab6, Ab7, Ab8, Ab9, Ab10, Ab11, Ab12, Ab13, Ab14, Ab15, Ab16, Ab17, Ab18);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00278_run
(JNIEnv *env, jobject instance) {
    jbooleanArray Ab1; jbooleanArray Ab2; jbooleanArray Ab3; jbooleanArray Ab4; jbooleanArray Ab5; jbooleanArray Ab6; jbooleanArray Ab7; jbooleanArray Ab8; jbooleanArray Ab9; jbooleanArray Ab10; jbooleanArray Ab11; jbooleanArray Ab12; jbooleanArray Ab13; jbooleanArray Ab14; jbooleanArray Ab15; jbooleanArray Ab16; jbooleanArray Ab17; jbooleanArray Ab18;
    Ab1 = jbooleanArrayValue; Ab2 = jbooleanArrayValue; Ab3 = jbooleanArrayValue; Ab4 = jbooleanArrayValue; Ab5 = jbooleanArrayValue; Ab6 = jbooleanArrayValue; Ab7 = jbooleanArrayValue; Ab8 = jbooleanArrayValue; Ab9 = jbooleanArrayValue; Ab10 = jbooleanArrayValue; Ab11 = jbooleanArrayValue; Ab12 = jbooleanArrayValue; Ab13 = jbooleanArrayValue; Ab14 = jbooleanArrayValue; Ab15 = jbooleanArrayValue; Ab16 = jbooleanArrayValue; Ab17 = jbooleanArrayValue; Ab18 = jbooleanArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00278_nativemethod (env, instance, Ab1, Ab2, Ab3, Ab4, Ab5, Ab6, Ab7, Ab8, Ab9, Ab10, Ab11, Ab12, Ab13, Ab14, Ab15, Ab16, Ab17, Ab18);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00279_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[279 - 1];

    jbooleanArray Ab1; jbooleanArray Ab2; jbooleanArray Ab3; jbooleanArray Ab4; jbooleanArray Ab5; jbooleanArray Ab6; jbooleanArray Ab7; jbooleanArray Ab8; jbooleanArray Ab9; jbooleanArray Ab10; jbooleanArray Ab11; jbooleanArray Ab12; jbooleanArray Ab13; jbooleanArray Ab14; jbooleanArray Ab15; jbooleanArray Ab16; jbooleanArray Ab17; jbooleanArray Ab18; jbooleanArray Ab19;
    Ab1 = jbooleanArrayValue; Ab2 = jbooleanArrayValue; Ab3 = jbooleanArrayValue; Ab4 = jbooleanArrayValue; Ab5 = jbooleanArrayValue; Ab6 = jbooleanArrayValue; Ab7 = jbooleanArrayValue; Ab8 = jbooleanArrayValue; Ab9 = jbooleanArrayValue; Ab10 = jbooleanArrayValue; Ab11 = jbooleanArrayValue; Ab12 = jbooleanArrayValue; Ab13 = jbooleanArrayValue; Ab14 = jbooleanArrayValue; Ab15 = jbooleanArrayValue; Ab16 = jbooleanArrayValue; Ab17 = jbooleanArrayValue; Ab18 = jbooleanArrayValue; Ab19 = jbooleanArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ab1, Ab2, Ab3, Ab4, Ab5, Ab6, Ab7, Ab8, Ab9, Ab10, Ab11, Ab12, Ab13, Ab14, Ab15, Ab16, Ab17, Ab18, Ab19);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00279_run
(JNIEnv *env, jobject instance) {
    jbooleanArray Ab1; jbooleanArray Ab2; jbooleanArray Ab3; jbooleanArray Ab4; jbooleanArray Ab5; jbooleanArray Ab6; jbooleanArray Ab7; jbooleanArray Ab8; jbooleanArray Ab9; jbooleanArray Ab10; jbooleanArray Ab11; jbooleanArray Ab12; jbooleanArray Ab13; jbooleanArray Ab14; jbooleanArray Ab15; jbooleanArray Ab16; jbooleanArray Ab17; jbooleanArray Ab18; jbooleanArray Ab19;
    Ab1 = jbooleanArrayValue; Ab2 = jbooleanArrayValue; Ab3 = jbooleanArrayValue; Ab4 = jbooleanArrayValue; Ab5 = jbooleanArrayValue; Ab6 = jbooleanArrayValue; Ab7 = jbooleanArrayValue; Ab8 = jbooleanArrayValue; Ab9 = jbooleanArrayValue; Ab10 = jbooleanArrayValue; Ab11 = jbooleanArrayValue; Ab12 = jbooleanArrayValue; Ab13 = jbooleanArrayValue; Ab14 = jbooleanArrayValue; Ab15 = jbooleanArrayValue; Ab16 = jbooleanArrayValue; Ab17 = jbooleanArrayValue; Ab18 = jbooleanArrayValue; Ab19 = jbooleanArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00279_nativemethod (env, instance, Ab1, Ab2, Ab3, Ab4, Ab5, Ab6, Ab7, Ab8, Ab9, Ab10, Ab11, Ab12, Ab13, Ab14, Ab15, Ab16, Ab17, Ab18, Ab19);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00280_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[280 - 1];

    jbooleanArray Ab1; jbooleanArray Ab2; jbooleanArray Ab3; jbooleanArray Ab4; jbooleanArray Ab5; jbooleanArray Ab6; jbooleanArray Ab7; jbooleanArray Ab8; jbooleanArray Ab9; jbooleanArray Ab10; jbooleanArray Ab11; jbooleanArray Ab12; jbooleanArray Ab13; jbooleanArray Ab14; jbooleanArray Ab15; jbooleanArray Ab16; jbooleanArray Ab17; jbooleanArray Ab18; jbooleanArray Ab19; jbooleanArray Ab20;
    Ab1 = jbooleanArrayValue; Ab2 = jbooleanArrayValue; Ab3 = jbooleanArrayValue; Ab4 = jbooleanArrayValue; Ab5 = jbooleanArrayValue; Ab6 = jbooleanArrayValue; Ab7 = jbooleanArrayValue; Ab8 = jbooleanArrayValue; Ab9 = jbooleanArrayValue; Ab10 = jbooleanArrayValue; Ab11 = jbooleanArrayValue; Ab12 = jbooleanArrayValue; Ab13 = jbooleanArrayValue; Ab14 = jbooleanArrayValue; Ab15 = jbooleanArrayValue; Ab16 = jbooleanArrayValue; Ab17 = jbooleanArrayValue; Ab18 = jbooleanArrayValue; Ab19 = jbooleanArrayValue; Ab20 = jbooleanArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ab1, Ab2, Ab3, Ab4, Ab5, Ab6, Ab7, Ab8, Ab9, Ab10, Ab11, Ab12, Ab13, Ab14, Ab15, Ab16, Ab17, Ab18, Ab19, Ab20);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00280_run
(JNIEnv *env, jobject instance) {
    jbooleanArray Ab1; jbooleanArray Ab2; jbooleanArray Ab3; jbooleanArray Ab4; jbooleanArray Ab5; jbooleanArray Ab6; jbooleanArray Ab7; jbooleanArray Ab8; jbooleanArray Ab9; jbooleanArray Ab10; jbooleanArray Ab11; jbooleanArray Ab12; jbooleanArray Ab13; jbooleanArray Ab14; jbooleanArray Ab15; jbooleanArray Ab16; jbooleanArray Ab17; jbooleanArray Ab18; jbooleanArray Ab19; jbooleanArray Ab20;
    Ab1 = jbooleanArrayValue; Ab2 = jbooleanArrayValue; Ab3 = jbooleanArrayValue; Ab4 = jbooleanArrayValue; Ab5 = jbooleanArrayValue; Ab6 = jbooleanArrayValue; Ab7 = jbooleanArrayValue; Ab8 = jbooleanArrayValue; Ab9 = jbooleanArrayValue; Ab10 = jbooleanArrayValue; Ab11 = jbooleanArrayValue; Ab12 = jbooleanArrayValue; Ab13 = jbooleanArrayValue; Ab14 = jbooleanArrayValue; Ab15 = jbooleanArrayValue; Ab16 = jbooleanArrayValue; Ab17 = jbooleanArrayValue; Ab18 = jbooleanArrayValue; Ab19 = jbooleanArrayValue; Ab20 = jbooleanArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00280_nativemethod (env, instance, Ab1, Ab2, Ab3, Ab4, Ab5, Ab6, Ab7, Ab8, Ab9, Ab10, Ab11, Ab12, Ab13, Ab14, Ab15, Ab16, Ab17, Ab18, Ab19, Ab20);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00281_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[281 - 1];

    jthrowable T1;
    T1 = jthrowableValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, T1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00281_run
(JNIEnv *env, jobject instance) {
    jthrowable T1;
    T1 = jthrowableValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00281_nativemethod (env, instance, T1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00282_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[282 - 1];

    jthrowable T1; jthrowable T2;
    T1 = jthrowableValue; T2 = jthrowableValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, T1, T2);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00282_run
(JNIEnv *env, jobject instance) {
    jthrowable T1; jthrowable T2;
    T1 = jthrowableValue; T2 = jthrowableValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00282_nativemethod (env, instance, T1, T2);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00283_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[283 - 1];

    jthrowable T1; jthrowable T2; jthrowable T3;
    T1 = jthrowableValue; T2 = jthrowableValue; T3 = jthrowableValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, T1, T2, T3);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00283_run
(JNIEnv *env, jobject instance) {
    jthrowable T1; jthrowable T2; jthrowable T3;
    T1 = jthrowableValue; T2 = jthrowableValue; T3 = jthrowableValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00283_nativemethod (env, instance, T1, T2, T3);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00284_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[284 - 1];

    jthrowable T1; jthrowable T2; jthrowable T3; jthrowable T4;
    T1 = jthrowableValue; T2 = jthrowableValue; T3 = jthrowableValue; T4 = jthrowableValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, T1, T2, T3, T4);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00284_run
(JNIEnv *env, jobject instance) {
    jthrowable T1; jthrowable T2; jthrowable T3; jthrowable T4;
    T1 = jthrowableValue; T2 = jthrowableValue; T3 = jthrowableValue; T4 = jthrowableValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00284_nativemethod (env, instance, T1, T2, T3, T4);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00285_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[285 - 1];

    jthrowable T1; jthrowable T2; jthrowable T3; jthrowable T4; jthrowable T5;
    T1 = jthrowableValue; T2 = jthrowableValue; T3 = jthrowableValue; T4 = jthrowableValue; T5 = jthrowableValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, T1, T2, T3, T4, T5);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00285_run
(JNIEnv *env, jobject instance) {
    jthrowable T1; jthrowable T2; jthrowable T3; jthrowable T4; jthrowable T5;
    T1 = jthrowableValue; T2 = jthrowableValue; T3 = jthrowableValue; T4 = jthrowableValue; T5 = jthrowableValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00285_nativemethod (env, instance, T1, T2, T3, T4, T5);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00286_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[286 - 1];

    jthrowable T1; jthrowable T2; jthrowable T3; jthrowable T4; jthrowable T5; jthrowable T6;
    T1 = jthrowableValue; T2 = jthrowableValue; T3 = jthrowableValue; T4 = jthrowableValue; T5 = jthrowableValue; T6 = jthrowableValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, T1, T2, T3, T4, T5, T6);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00286_run
(JNIEnv *env, jobject instance) {
    jthrowable T1; jthrowable T2; jthrowable T3; jthrowable T4; jthrowable T5; jthrowable T6;
    T1 = jthrowableValue; T2 = jthrowableValue; T3 = jthrowableValue; T4 = jthrowableValue; T5 = jthrowableValue; T6 = jthrowableValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00286_nativemethod (env, instance, T1, T2, T3, T4, T5, T6);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00287_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[287 - 1];

    jthrowable T1; jthrowable T2; jthrowable T3; jthrowable T4; jthrowable T5; jthrowable T6; jthrowable T7;
    T1 = jthrowableValue; T2 = jthrowableValue; T3 = jthrowableValue; T4 = jthrowableValue; T5 = jthrowableValue; T6 = jthrowableValue; T7 = jthrowableValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, T1, T2, T3, T4, T5, T6, T7);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00287_run
(JNIEnv *env, jobject instance) {
    jthrowable T1; jthrowable T2; jthrowable T3; jthrowable T4; jthrowable T5; jthrowable T6; jthrowable T7;
    T1 = jthrowableValue; T2 = jthrowableValue; T3 = jthrowableValue; T4 = jthrowableValue; T5 = jthrowableValue; T6 = jthrowableValue; T7 = jthrowableValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00287_nativemethod (env, instance, T1, T2, T3, T4, T5, T6, T7);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00288_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[288 - 1];

    jthrowable T1; jthrowable T2; jthrowable T3; jthrowable T4; jthrowable T5; jthrowable T6; jthrowable T7; jthrowable T8;
    T1 = jthrowableValue; T2 = jthrowableValue; T3 = jthrowableValue; T4 = jthrowableValue; T5 = jthrowableValue; T6 = jthrowableValue; T7 = jthrowableValue; T8 = jthrowableValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, T1, T2, T3, T4, T5, T6, T7, T8);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00288_run
(JNIEnv *env, jobject instance) {
    jthrowable T1; jthrowable T2; jthrowable T3; jthrowable T4; jthrowable T5; jthrowable T6; jthrowable T7; jthrowable T8;
    T1 = jthrowableValue; T2 = jthrowableValue; T3 = jthrowableValue; T4 = jthrowableValue; T5 = jthrowableValue; T6 = jthrowableValue; T7 = jthrowableValue; T8 = jthrowableValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00288_nativemethod (env, instance, T1, T2, T3, T4, T5, T6, T7, T8);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00289_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[289 - 1];

    jthrowable T1; jthrowable T2; jthrowable T3; jthrowable T4; jthrowable T5; jthrowable T6; jthrowable T7; jthrowable T8; jthrowable T9;
    T1 = jthrowableValue; T2 = jthrowableValue; T3 = jthrowableValue; T4 = jthrowableValue; T5 = jthrowableValue; T6 = jthrowableValue; T7 = jthrowableValue; T8 = jthrowableValue; T9 = jthrowableValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, T1, T2, T3, T4, T5, T6, T7, T8, T9);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00289_run
(JNIEnv *env, jobject instance) {
    jthrowable T1; jthrowable T2; jthrowable T3; jthrowable T4; jthrowable T5; jthrowable T6; jthrowable T7; jthrowable T8; jthrowable T9;
    T1 = jthrowableValue; T2 = jthrowableValue; T3 = jthrowableValue; T4 = jthrowableValue; T5 = jthrowableValue; T6 = jthrowableValue; T7 = jthrowableValue; T8 = jthrowableValue; T9 = jthrowableValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00289_nativemethod (env, instance, T1, T2, T3, T4, T5, T6, T7, T8, T9);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00290_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[290 - 1];

    jthrowable T1; jthrowable T2; jthrowable T3; jthrowable T4; jthrowable T5; jthrowable T6; jthrowable T7; jthrowable T8; jthrowable T9; jthrowable T10;
    T1 = jthrowableValue; T2 = jthrowableValue; T3 = jthrowableValue; T4 = jthrowableValue; T5 = jthrowableValue; T6 = jthrowableValue; T7 = jthrowableValue; T8 = jthrowableValue; T9 = jthrowableValue; T10 = jthrowableValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00290_run
(JNIEnv *env, jobject instance) {
    jthrowable T1; jthrowable T2; jthrowable T3; jthrowable T4; jthrowable T5; jthrowable T6; jthrowable T7; jthrowable T8; jthrowable T9; jthrowable T10;
    T1 = jthrowableValue; T2 = jthrowableValue; T3 = jthrowableValue; T4 = jthrowableValue; T5 = jthrowableValue; T6 = jthrowableValue; T7 = jthrowableValue; T8 = jthrowableValue; T9 = jthrowableValue; T10 = jthrowableValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00290_nativemethod (env, instance, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00291_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[291 - 1];

    jthrowable T1; jthrowable T2; jthrowable T3; jthrowable T4; jthrowable T5; jthrowable T6; jthrowable T7; jthrowable T8; jthrowable T9; jthrowable T10; jthrowable T11;
    T1 = jthrowableValue; T2 = jthrowableValue; T3 = jthrowableValue; T4 = jthrowableValue; T5 = jthrowableValue; T6 = jthrowableValue; T7 = jthrowableValue; T8 = jthrowableValue; T9 = jthrowableValue; T10 = jthrowableValue; T11 = jthrowableValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00291_run
(JNIEnv *env, jobject instance) {
    jthrowable T1; jthrowable T2; jthrowable T3; jthrowable T4; jthrowable T5; jthrowable T6; jthrowable T7; jthrowable T8; jthrowable T9; jthrowable T10; jthrowable T11;
    T1 = jthrowableValue; T2 = jthrowableValue; T3 = jthrowableValue; T4 = jthrowableValue; T5 = jthrowableValue; T6 = jthrowableValue; T7 = jthrowableValue; T8 = jthrowableValue; T9 = jthrowableValue; T10 = jthrowableValue; T11 = jthrowableValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00291_nativemethod (env, instance, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00292_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[292 - 1];

    jthrowable T1; jthrowable T2; jthrowable T3; jthrowable T4; jthrowable T5; jthrowable T6; jthrowable T7; jthrowable T8; jthrowable T9; jthrowable T10; jthrowable T11; jthrowable T12;
    T1 = jthrowableValue; T2 = jthrowableValue; T3 = jthrowableValue; T4 = jthrowableValue; T5 = jthrowableValue; T6 = jthrowableValue; T7 = jthrowableValue; T8 = jthrowableValue; T9 = jthrowableValue; T10 = jthrowableValue; T11 = jthrowableValue; T12 = jthrowableValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00292_run
(JNIEnv *env, jobject instance) {
    jthrowable T1; jthrowable T2; jthrowable T3; jthrowable T4; jthrowable T5; jthrowable T6; jthrowable T7; jthrowable T8; jthrowable T9; jthrowable T10; jthrowable T11; jthrowable T12;
    T1 = jthrowableValue; T2 = jthrowableValue; T3 = jthrowableValue; T4 = jthrowableValue; T5 = jthrowableValue; T6 = jthrowableValue; T7 = jthrowableValue; T8 = jthrowableValue; T9 = jthrowableValue; T10 = jthrowableValue; T11 = jthrowableValue; T12 = jthrowableValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00292_nativemethod (env, instance, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00293_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[293 - 1];

    jthrowable T1; jthrowable T2; jthrowable T3; jthrowable T4; jthrowable T5; jthrowable T6; jthrowable T7; jthrowable T8; jthrowable T9; jthrowable T10; jthrowable T11; jthrowable T12; jthrowable T13;
    T1 = jthrowableValue; T2 = jthrowableValue; T3 = jthrowableValue; T4 = jthrowableValue; T5 = jthrowableValue; T6 = jthrowableValue; T7 = jthrowableValue; T8 = jthrowableValue; T9 = jthrowableValue; T10 = jthrowableValue; T11 = jthrowableValue; T12 = jthrowableValue; T13 = jthrowableValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00293_run
(JNIEnv *env, jobject instance) {
    jthrowable T1; jthrowable T2; jthrowable T3; jthrowable T4; jthrowable T5; jthrowable T6; jthrowable T7; jthrowable T8; jthrowable T9; jthrowable T10; jthrowable T11; jthrowable T12; jthrowable T13;
    T1 = jthrowableValue; T2 = jthrowableValue; T3 = jthrowableValue; T4 = jthrowableValue; T5 = jthrowableValue; T6 = jthrowableValue; T7 = jthrowableValue; T8 = jthrowableValue; T9 = jthrowableValue; T10 = jthrowableValue; T11 = jthrowableValue; T12 = jthrowableValue; T13 = jthrowableValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00293_nativemethod (env, instance, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00294_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[294 - 1];

    jthrowable T1; jthrowable T2; jthrowable T3; jthrowable T4; jthrowable T5; jthrowable T6; jthrowable T7; jthrowable T8; jthrowable T9; jthrowable T10; jthrowable T11; jthrowable T12; jthrowable T13; jthrowable T14;
    T1 = jthrowableValue; T2 = jthrowableValue; T3 = jthrowableValue; T4 = jthrowableValue; T5 = jthrowableValue; T6 = jthrowableValue; T7 = jthrowableValue; T8 = jthrowableValue; T9 = jthrowableValue; T10 = jthrowableValue; T11 = jthrowableValue; T12 = jthrowableValue; T13 = jthrowableValue; T14 = jthrowableValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00294_run
(JNIEnv *env, jobject instance) {
    jthrowable T1; jthrowable T2; jthrowable T3; jthrowable T4; jthrowable T5; jthrowable T6; jthrowable T7; jthrowable T8; jthrowable T9; jthrowable T10; jthrowable T11; jthrowable T12; jthrowable T13; jthrowable T14;
    T1 = jthrowableValue; T2 = jthrowableValue; T3 = jthrowableValue; T4 = jthrowableValue; T5 = jthrowableValue; T6 = jthrowableValue; T7 = jthrowableValue; T8 = jthrowableValue; T9 = jthrowableValue; T10 = jthrowableValue; T11 = jthrowableValue; T12 = jthrowableValue; T13 = jthrowableValue; T14 = jthrowableValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00294_nativemethod (env, instance, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00295_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[295 - 1];

    jthrowable T1; jthrowable T2; jthrowable T3; jthrowable T4; jthrowable T5; jthrowable T6; jthrowable T7; jthrowable T8; jthrowable T9; jthrowable T10; jthrowable T11; jthrowable T12; jthrowable T13; jthrowable T14; jthrowable T15;
    T1 = jthrowableValue; T2 = jthrowableValue; T3 = jthrowableValue; T4 = jthrowableValue; T5 = jthrowableValue; T6 = jthrowableValue; T7 = jthrowableValue; T8 = jthrowableValue; T9 = jthrowableValue; T10 = jthrowableValue; T11 = jthrowableValue; T12 = jthrowableValue; T13 = jthrowableValue; T14 = jthrowableValue; T15 = jthrowableValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00295_run
(JNIEnv *env, jobject instance) {
    jthrowable T1; jthrowable T2; jthrowable T3; jthrowable T4; jthrowable T5; jthrowable T6; jthrowable T7; jthrowable T8; jthrowable T9; jthrowable T10; jthrowable T11; jthrowable T12; jthrowable T13; jthrowable T14; jthrowable T15;
    T1 = jthrowableValue; T2 = jthrowableValue; T3 = jthrowableValue; T4 = jthrowableValue; T5 = jthrowableValue; T6 = jthrowableValue; T7 = jthrowableValue; T8 = jthrowableValue; T9 = jthrowableValue; T10 = jthrowableValue; T11 = jthrowableValue; T12 = jthrowableValue; T13 = jthrowableValue; T14 = jthrowableValue; T15 = jthrowableValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00295_nativemethod (env, instance, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00296_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[296 - 1];

    jthrowable T1; jthrowable T2; jthrowable T3; jthrowable T4; jthrowable T5; jthrowable T6; jthrowable T7; jthrowable T8; jthrowable T9; jthrowable T10; jthrowable T11; jthrowable T12; jthrowable T13; jthrowable T14; jthrowable T15; jthrowable T16;
    T1 = jthrowableValue; T2 = jthrowableValue; T3 = jthrowableValue; T4 = jthrowableValue; T5 = jthrowableValue; T6 = jthrowableValue; T7 = jthrowableValue; T8 = jthrowableValue; T9 = jthrowableValue; T10 = jthrowableValue; T11 = jthrowableValue; T12 = jthrowableValue; T13 = jthrowableValue; T14 = jthrowableValue; T15 = jthrowableValue; T16 = jthrowableValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00296_run
(JNIEnv *env, jobject instance) {
    jthrowable T1; jthrowable T2; jthrowable T3; jthrowable T4; jthrowable T5; jthrowable T6; jthrowable T7; jthrowable T8; jthrowable T9; jthrowable T10; jthrowable T11; jthrowable T12; jthrowable T13; jthrowable T14; jthrowable T15; jthrowable T16;
    T1 = jthrowableValue; T2 = jthrowableValue; T3 = jthrowableValue; T4 = jthrowableValue; T5 = jthrowableValue; T6 = jthrowableValue; T7 = jthrowableValue; T8 = jthrowableValue; T9 = jthrowableValue; T10 = jthrowableValue; T11 = jthrowableValue; T12 = jthrowableValue; T13 = jthrowableValue; T14 = jthrowableValue; T15 = jthrowableValue; T16 = jthrowableValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00296_nativemethod (env, instance, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00297_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[297 - 1];

    jthrowable T1; jthrowable T2; jthrowable T3; jthrowable T4; jthrowable T5; jthrowable T6; jthrowable T7; jthrowable T8; jthrowable T9; jthrowable T10; jthrowable T11; jthrowable T12; jthrowable T13; jthrowable T14; jthrowable T15; jthrowable T16; jthrowable T17;
    T1 = jthrowableValue; T2 = jthrowableValue; T3 = jthrowableValue; T4 = jthrowableValue; T5 = jthrowableValue; T6 = jthrowableValue; T7 = jthrowableValue; T8 = jthrowableValue; T9 = jthrowableValue; T10 = jthrowableValue; T11 = jthrowableValue; T12 = jthrowableValue; T13 = jthrowableValue; T14 = jthrowableValue; T15 = jthrowableValue; T16 = jthrowableValue; T17 = jthrowableValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00297_run
(JNIEnv *env, jobject instance) {
    jthrowable T1; jthrowable T2; jthrowable T3; jthrowable T4; jthrowable T5; jthrowable T6; jthrowable T7; jthrowable T8; jthrowable T9; jthrowable T10; jthrowable T11; jthrowable T12; jthrowable T13; jthrowable T14; jthrowable T15; jthrowable T16; jthrowable T17;
    T1 = jthrowableValue; T2 = jthrowableValue; T3 = jthrowableValue; T4 = jthrowableValue; T5 = jthrowableValue; T6 = jthrowableValue; T7 = jthrowableValue; T8 = jthrowableValue; T9 = jthrowableValue; T10 = jthrowableValue; T11 = jthrowableValue; T12 = jthrowableValue; T13 = jthrowableValue; T14 = jthrowableValue; T15 = jthrowableValue; T16 = jthrowableValue; T17 = jthrowableValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00297_nativemethod (env, instance, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00298_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[298 - 1];

    jthrowable T1; jthrowable T2; jthrowable T3; jthrowable T4; jthrowable T5; jthrowable T6; jthrowable T7; jthrowable T8; jthrowable T9; jthrowable T10; jthrowable T11; jthrowable T12; jthrowable T13; jthrowable T14; jthrowable T15; jthrowable T16; jthrowable T17; jthrowable T18;
    T1 = jthrowableValue; T2 = jthrowableValue; T3 = jthrowableValue; T4 = jthrowableValue; T5 = jthrowableValue; T6 = jthrowableValue; T7 = jthrowableValue; T8 = jthrowableValue; T9 = jthrowableValue; T10 = jthrowableValue; T11 = jthrowableValue; T12 = jthrowableValue; T13 = jthrowableValue; T14 = jthrowableValue; T15 = jthrowableValue; T16 = jthrowableValue; T17 = jthrowableValue; T18 = jthrowableValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00298_run
(JNIEnv *env, jobject instance) {
    jthrowable T1; jthrowable T2; jthrowable T3; jthrowable T4; jthrowable T5; jthrowable T6; jthrowable T7; jthrowable T8; jthrowable T9; jthrowable T10; jthrowable T11; jthrowable T12; jthrowable T13; jthrowable T14; jthrowable T15; jthrowable T16; jthrowable T17; jthrowable T18;
    T1 = jthrowableValue; T2 = jthrowableValue; T3 = jthrowableValue; T4 = jthrowableValue; T5 = jthrowableValue; T6 = jthrowableValue; T7 = jthrowableValue; T8 = jthrowableValue; T9 = jthrowableValue; T10 = jthrowableValue; T11 = jthrowableValue; T12 = jthrowableValue; T13 = jthrowableValue; T14 = jthrowableValue; T15 = jthrowableValue; T16 = jthrowableValue; T17 = jthrowableValue; T18 = jthrowableValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00298_nativemethod (env, instance, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00299_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[299 - 1];

    jthrowable T1; jthrowable T2; jthrowable T3; jthrowable T4; jthrowable T5; jthrowable T6; jthrowable T7; jthrowable T8; jthrowable T9; jthrowable T10; jthrowable T11; jthrowable T12; jthrowable T13; jthrowable T14; jthrowable T15; jthrowable T16; jthrowable T17; jthrowable T18; jthrowable T19;
    T1 = jthrowableValue; T2 = jthrowableValue; T3 = jthrowableValue; T4 = jthrowableValue; T5 = jthrowableValue; T6 = jthrowableValue; T7 = jthrowableValue; T8 = jthrowableValue; T9 = jthrowableValue; T10 = jthrowableValue; T11 = jthrowableValue; T12 = jthrowableValue; T13 = jthrowableValue; T14 = jthrowableValue; T15 = jthrowableValue; T16 = jthrowableValue; T17 = jthrowableValue; T18 = jthrowableValue; T19 = jthrowableValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00299_run
(JNIEnv *env, jobject instance) {
    jthrowable T1; jthrowable T2; jthrowable T3; jthrowable T4; jthrowable T5; jthrowable T6; jthrowable T7; jthrowable T8; jthrowable T9; jthrowable T10; jthrowable T11; jthrowable T12; jthrowable T13; jthrowable T14; jthrowable T15; jthrowable T16; jthrowable T17; jthrowable T18; jthrowable T19;
    T1 = jthrowableValue; T2 = jthrowableValue; T3 = jthrowableValue; T4 = jthrowableValue; T5 = jthrowableValue; T6 = jthrowableValue; T7 = jthrowableValue; T8 = jthrowableValue; T9 = jthrowableValue; T10 = jthrowableValue; T11 = jthrowableValue; T12 = jthrowableValue; T13 = jthrowableValue; T14 = jthrowableValue; T15 = jthrowableValue; T16 = jthrowableValue; T17 = jthrowableValue; T18 = jthrowableValue; T19 = jthrowableValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00299_nativemethod (env, instance, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00300_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[300 - 1];

    jthrowable T1; jthrowable T2; jthrowable T3; jthrowable T4; jthrowable T5; jthrowable T6; jthrowable T7; jthrowable T8; jthrowable T9; jthrowable T10; jthrowable T11; jthrowable T12; jthrowable T13; jthrowable T14; jthrowable T15; jthrowable T16; jthrowable T17; jthrowable T18; jthrowable T19; jthrowable T20;
    T1 = jthrowableValue; T2 = jthrowableValue; T3 = jthrowableValue; T4 = jthrowableValue; T5 = jthrowableValue; T6 = jthrowableValue; T7 = jthrowableValue; T8 = jthrowableValue; T9 = jthrowableValue; T10 = jthrowableValue; T11 = jthrowableValue; T12 = jthrowableValue; T13 = jthrowableValue; T14 = jthrowableValue; T15 = jthrowableValue; T16 = jthrowableValue; T17 = jthrowableValue; T18 = jthrowableValue; T19 = jthrowableValue; T20 = jthrowableValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00300_run
(JNIEnv *env, jobject instance) {
    jthrowable T1; jthrowable T2; jthrowable T3; jthrowable T4; jthrowable T5; jthrowable T6; jthrowable T7; jthrowable T8; jthrowable T9; jthrowable T10; jthrowable T11; jthrowable T12; jthrowable T13; jthrowable T14; jthrowable T15; jthrowable T16; jthrowable T17; jthrowable T18; jthrowable T19; jthrowable T20;
    T1 = jthrowableValue; T2 = jthrowableValue; T3 = jthrowableValue; T4 = jthrowableValue; T5 = jthrowableValue; T6 = jthrowableValue; T7 = jthrowableValue; T8 = jthrowableValue; T9 = jthrowableValue; T10 = jthrowableValue; T11 = jthrowableValue; T12 = jthrowableValue; T13 = jthrowableValue; T14 = jthrowableValue; T15 = jthrowableValue; T16 = jthrowableValue; T17 = jthrowableValue; T18 = jthrowableValue; T19 = jthrowableValue; T20 = jthrowableValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00300_nativemethod (env, instance, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00301_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[301 - 1];

    jobjectArray AO1;
    AO1 = jobjectArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, AO1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00301_run
(JNIEnv *env, jobject instance) {
    jobjectArray AO1;
    AO1 = jobjectArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00301_nativemethod (env, instance, AO1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00302_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[302 - 1];

    jobjectArray AO1; jobjectArray AO2;
    AO1 = jobjectArrayValue; AO2 = jobjectArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, AO1, AO2);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00302_run
(JNIEnv *env, jobject instance) {
    jobjectArray AO1; jobjectArray AO2;
    AO1 = jobjectArrayValue; AO2 = jobjectArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00302_nativemethod (env, instance, AO1, AO2);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00303_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[303 - 1];

    jobjectArray AO1; jobjectArray AO2; jobjectArray AO3;
    AO1 = jobjectArrayValue; AO2 = jobjectArrayValue; AO3 = jobjectArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, AO1, AO2, AO3);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00303_run
(JNIEnv *env, jobject instance) {
    jobjectArray AO1; jobjectArray AO2; jobjectArray AO3;
    AO1 = jobjectArrayValue; AO2 = jobjectArrayValue; AO3 = jobjectArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00303_nativemethod (env, instance, AO1, AO2, AO3);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00304_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[304 - 1];

    jobjectArray AO1; jobjectArray AO2; jobjectArray AO3; jobjectArray AO4;
    AO1 = jobjectArrayValue; AO2 = jobjectArrayValue; AO3 = jobjectArrayValue; AO4 = jobjectArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, AO1, AO2, AO3, AO4);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00304_run
(JNIEnv *env, jobject instance) {
    jobjectArray AO1; jobjectArray AO2; jobjectArray AO3; jobjectArray AO4;
    AO1 = jobjectArrayValue; AO2 = jobjectArrayValue; AO3 = jobjectArrayValue; AO4 = jobjectArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00304_nativemethod (env, instance, AO1, AO2, AO3, AO4);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00305_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[305 - 1];

    jobjectArray AO1; jobjectArray AO2; jobjectArray AO3; jobjectArray AO4; jobjectArray AO5;
    AO1 = jobjectArrayValue; AO2 = jobjectArrayValue; AO3 = jobjectArrayValue; AO4 = jobjectArrayValue; AO5 = jobjectArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, AO1, AO2, AO3, AO4, AO5);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00305_run
(JNIEnv *env, jobject instance) {
    jobjectArray AO1; jobjectArray AO2; jobjectArray AO3; jobjectArray AO4; jobjectArray AO5;
    AO1 = jobjectArrayValue; AO2 = jobjectArrayValue; AO3 = jobjectArrayValue; AO4 = jobjectArrayValue; AO5 = jobjectArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00305_nativemethod (env, instance, AO1, AO2, AO3, AO4, AO5);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00306_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[306 - 1];

    jobjectArray AO1; jobjectArray AO2; jobjectArray AO3; jobjectArray AO4; jobjectArray AO5; jobjectArray AO6;
    AO1 = jobjectArrayValue; AO2 = jobjectArrayValue; AO3 = jobjectArrayValue; AO4 = jobjectArrayValue; AO5 = jobjectArrayValue; AO6 = jobjectArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, AO1, AO2, AO3, AO4, AO5, AO6);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00306_run
(JNIEnv *env, jobject instance) {
    jobjectArray AO1; jobjectArray AO2; jobjectArray AO3; jobjectArray AO4; jobjectArray AO5; jobjectArray AO6;
    AO1 = jobjectArrayValue; AO2 = jobjectArrayValue; AO3 = jobjectArrayValue; AO4 = jobjectArrayValue; AO5 = jobjectArrayValue; AO6 = jobjectArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00306_nativemethod (env, instance, AO1, AO2, AO3, AO4, AO5, AO6);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00307_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[307 - 1];

    jobjectArray AO1; jobjectArray AO2; jobjectArray AO3; jobjectArray AO4; jobjectArray AO5; jobjectArray AO6; jobjectArray AO7;
    AO1 = jobjectArrayValue; AO2 = jobjectArrayValue; AO3 = jobjectArrayValue; AO4 = jobjectArrayValue; AO5 = jobjectArrayValue; AO6 = jobjectArrayValue; AO7 = jobjectArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, AO1, AO2, AO3, AO4, AO5, AO6, AO7);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00307_run
(JNIEnv *env, jobject instance) {
    jobjectArray AO1; jobjectArray AO2; jobjectArray AO3; jobjectArray AO4; jobjectArray AO5; jobjectArray AO6; jobjectArray AO7;
    AO1 = jobjectArrayValue; AO2 = jobjectArrayValue; AO3 = jobjectArrayValue; AO4 = jobjectArrayValue; AO5 = jobjectArrayValue; AO6 = jobjectArrayValue; AO7 = jobjectArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00307_nativemethod (env, instance, AO1, AO2, AO3, AO4, AO5, AO6, AO7);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00308_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[308 - 1];

    jobjectArray AO1; jobjectArray AO2; jobjectArray AO3; jobjectArray AO4; jobjectArray AO5; jobjectArray AO6; jobjectArray AO7; jobjectArray AO8;
    AO1 = jobjectArrayValue; AO2 = jobjectArrayValue; AO3 = jobjectArrayValue; AO4 = jobjectArrayValue; AO5 = jobjectArrayValue; AO6 = jobjectArrayValue; AO7 = jobjectArrayValue; AO8 = jobjectArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, AO1, AO2, AO3, AO4, AO5, AO6, AO7, AO8);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00308_run
(JNIEnv *env, jobject instance) {
    jobjectArray AO1; jobjectArray AO2; jobjectArray AO3; jobjectArray AO4; jobjectArray AO5; jobjectArray AO6; jobjectArray AO7; jobjectArray AO8;
    AO1 = jobjectArrayValue; AO2 = jobjectArrayValue; AO3 = jobjectArrayValue; AO4 = jobjectArrayValue; AO5 = jobjectArrayValue; AO6 = jobjectArrayValue; AO7 = jobjectArrayValue; AO8 = jobjectArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00308_nativemethod (env, instance, AO1, AO2, AO3, AO4, AO5, AO6, AO7, AO8);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00309_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[309 - 1];

    jobjectArray AO1; jobjectArray AO2; jobjectArray AO3; jobjectArray AO4; jobjectArray AO5; jobjectArray AO6; jobjectArray AO7; jobjectArray AO8; jobjectArray AO9;
    AO1 = jobjectArrayValue; AO2 = jobjectArrayValue; AO3 = jobjectArrayValue; AO4 = jobjectArrayValue; AO5 = jobjectArrayValue; AO6 = jobjectArrayValue; AO7 = jobjectArrayValue; AO8 = jobjectArrayValue; AO9 = jobjectArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, AO1, AO2, AO3, AO4, AO5, AO6, AO7, AO8, AO9);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00309_run
(JNIEnv *env, jobject instance) {
    jobjectArray AO1; jobjectArray AO2; jobjectArray AO3; jobjectArray AO4; jobjectArray AO5; jobjectArray AO6; jobjectArray AO7; jobjectArray AO8; jobjectArray AO9;
    AO1 = jobjectArrayValue; AO2 = jobjectArrayValue; AO3 = jobjectArrayValue; AO4 = jobjectArrayValue; AO5 = jobjectArrayValue; AO6 = jobjectArrayValue; AO7 = jobjectArrayValue; AO8 = jobjectArrayValue; AO9 = jobjectArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00309_nativemethod (env, instance, AO1, AO2, AO3, AO4, AO5, AO6, AO7, AO8, AO9);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00310_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[310 - 1];

    jobjectArray AO1; jobjectArray AO2; jobjectArray AO3; jobjectArray AO4; jobjectArray AO5; jobjectArray AO6; jobjectArray AO7; jobjectArray AO8; jobjectArray AO9; jobjectArray AO10;
    AO1 = jobjectArrayValue; AO2 = jobjectArrayValue; AO3 = jobjectArrayValue; AO4 = jobjectArrayValue; AO5 = jobjectArrayValue; AO6 = jobjectArrayValue; AO7 = jobjectArrayValue; AO8 = jobjectArrayValue; AO9 = jobjectArrayValue; AO10 = jobjectArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, AO1, AO2, AO3, AO4, AO5, AO6, AO7, AO8, AO9, AO10);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00310_run
(JNIEnv *env, jobject instance) {
    jobjectArray AO1; jobjectArray AO2; jobjectArray AO3; jobjectArray AO4; jobjectArray AO5; jobjectArray AO6; jobjectArray AO7; jobjectArray AO8; jobjectArray AO9; jobjectArray AO10;
    AO1 = jobjectArrayValue; AO2 = jobjectArrayValue; AO3 = jobjectArrayValue; AO4 = jobjectArrayValue; AO5 = jobjectArrayValue; AO6 = jobjectArrayValue; AO7 = jobjectArrayValue; AO8 = jobjectArrayValue; AO9 = jobjectArrayValue; AO10 = jobjectArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00310_nativemethod (env, instance, AO1, AO2, AO3, AO4, AO5, AO6, AO7, AO8, AO9, AO10);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00311_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[311 - 1];

    jobjectArray AO1; jobjectArray AO2; jobjectArray AO3; jobjectArray AO4; jobjectArray AO5; jobjectArray AO6; jobjectArray AO7; jobjectArray AO8; jobjectArray AO9; jobjectArray AO10; jobjectArray AO11;
    AO1 = jobjectArrayValue; AO2 = jobjectArrayValue; AO3 = jobjectArrayValue; AO4 = jobjectArrayValue; AO5 = jobjectArrayValue; AO6 = jobjectArrayValue; AO7 = jobjectArrayValue; AO8 = jobjectArrayValue; AO9 = jobjectArrayValue; AO10 = jobjectArrayValue; AO11 = jobjectArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, AO1, AO2, AO3, AO4, AO5, AO6, AO7, AO8, AO9, AO10, AO11);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00311_run
(JNIEnv *env, jobject instance) {
    jobjectArray AO1; jobjectArray AO2; jobjectArray AO3; jobjectArray AO4; jobjectArray AO5; jobjectArray AO6; jobjectArray AO7; jobjectArray AO8; jobjectArray AO9; jobjectArray AO10; jobjectArray AO11;
    AO1 = jobjectArrayValue; AO2 = jobjectArrayValue; AO3 = jobjectArrayValue; AO4 = jobjectArrayValue; AO5 = jobjectArrayValue; AO6 = jobjectArrayValue; AO7 = jobjectArrayValue; AO8 = jobjectArrayValue; AO9 = jobjectArrayValue; AO10 = jobjectArrayValue; AO11 = jobjectArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00311_nativemethod (env, instance, AO1, AO2, AO3, AO4, AO5, AO6, AO7, AO8, AO9, AO10, AO11);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00312_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[312 - 1];

    jobjectArray AO1; jobjectArray AO2; jobjectArray AO3; jobjectArray AO4; jobjectArray AO5; jobjectArray AO6; jobjectArray AO7; jobjectArray AO8; jobjectArray AO9; jobjectArray AO10; jobjectArray AO11; jobjectArray AO12;
    AO1 = jobjectArrayValue; AO2 = jobjectArrayValue; AO3 = jobjectArrayValue; AO4 = jobjectArrayValue; AO5 = jobjectArrayValue; AO6 = jobjectArrayValue; AO7 = jobjectArrayValue; AO8 = jobjectArrayValue; AO9 = jobjectArrayValue; AO10 = jobjectArrayValue; AO11 = jobjectArrayValue; AO12 = jobjectArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, AO1, AO2, AO3, AO4, AO5, AO6, AO7, AO8, AO9, AO10, AO11, AO12);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00312_run
(JNIEnv *env, jobject instance) {
    jobjectArray AO1; jobjectArray AO2; jobjectArray AO3; jobjectArray AO4; jobjectArray AO5; jobjectArray AO6; jobjectArray AO7; jobjectArray AO8; jobjectArray AO9; jobjectArray AO10; jobjectArray AO11; jobjectArray AO12;
    AO1 = jobjectArrayValue; AO2 = jobjectArrayValue; AO3 = jobjectArrayValue; AO4 = jobjectArrayValue; AO5 = jobjectArrayValue; AO6 = jobjectArrayValue; AO7 = jobjectArrayValue; AO8 = jobjectArrayValue; AO9 = jobjectArrayValue; AO10 = jobjectArrayValue; AO11 = jobjectArrayValue; AO12 = jobjectArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00312_nativemethod (env, instance, AO1, AO2, AO3, AO4, AO5, AO6, AO7, AO8, AO9, AO10, AO11, AO12);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00313_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[313 - 1];

    jobjectArray AO1; jobjectArray AO2; jobjectArray AO3; jobjectArray AO4; jobjectArray AO5; jobjectArray AO6; jobjectArray AO7; jobjectArray AO8; jobjectArray AO9; jobjectArray AO10; jobjectArray AO11; jobjectArray AO12; jobjectArray AO13;
    AO1 = jobjectArrayValue; AO2 = jobjectArrayValue; AO3 = jobjectArrayValue; AO4 = jobjectArrayValue; AO5 = jobjectArrayValue; AO6 = jobjectArrayValue; AO7 = jobjectArrayValue; AO8 = jobjectArrayValue; AO9 = jobjectArrayValue; AO10 = jobjectArrayValue; AO11 = jobjectArrayValue; AO12 = jobjectArrayValue; AO13 = jobjectArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, AO1, AO2, AO3, AO4, AO5, AO6, AO7, AO8, AO9, AO10, AO11, AO12, AO13);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00313_run
(JNIEnv *env, jobject instance) {
    jobjectArray AO1; jobjectArray AO2; jobjectArray AO3; jobjectArray AO4; jobjectArray AO5; jobjectArray AO6; jobjectArray AO7; jobjectArray AO8; jobjectArray AO9; jobjectArray AO10; jobjectArray AO11; jobjectArray AO12; jobjectArray AO13;
    AO1 = jobjectArrayValue; AO2 = jobjectArrayValue; AO3 = jobjectArrayValue; AO4 = jobjectArrayValue; AO5 = jobjectArrayValue; AO6 = jobjectArrayValue; AO7 = jobjectArrayValue; AO8 = jobjectArrayValue; AO9 = jobjectArrayValue; AO10 = jobjectArrayValue; AO11 = jobjectArrayValue; AO12 = jobjectArrayValue; AO13 = jobjectArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00313_nativemethod (env, instance, AO1, AO2, AO3, AO4, AO5, AO6, AO7, AO8, AO9, AO10, AO11, AO12, AO13);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00314_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[314 - 1];

    jobjectArray AO1; jobjectArray AO2; jobjectArray AO3; jobjectArray AO4; jobjectArray AO5; jobjectArray AO6; jobjectArray AO7; jobjectArray AO8; jobjectArray AO9; jobjectArray AO10; jobjectArray AO11; jobjectArray AO12; jobjectArray AO13; jobjectArray AO14;
    AO1 = jobjectArrayValue; AO2 = jobjectArrayValue; AO3 = jobjectArrayValue; AO4 = jobjectArrayValue; AO5 = jobjectArrayValue; AO6 = jobjectArrayValue; AO7 = jobjectArrayValue; AO8 = jobjectArrayValue; AO9 = jobjectArrayValue; AO10 = jobjectArrayValue; AO11 = jobjectArrayValue; AO12 = jobjectArrayValue; AO13 = jobjectArrayValue; AO14 = jobjectArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, AO1, AO2, AO3, AO4, AO5, AO6, AO7, AO8, AO9, AO10, AO11, AO12, AO13, AO14);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00314_run
(JNIEnv *env, jobject instance) {
    jobjectArray AO1; jobjectArray AO2; jobjectArray AO3; jobjectArray AO4; jobjectArray AO5; jobjectArray AO6; jobjectArray AO7; jobjectArray AO8; jobjectArray AO9; jobjectArray AO10; jobjectArray AO11; jobjectArray AO12; jobjectArray AO13; jobjectArray AO14;
    AO1 = jobjectArrayValue; AO2 = jobjectArrayValue; AO3 = jobjectArrayValue; AO4 = jobjectArrayValue; AO5 = jobjectArrayValue; AO6 = jobjectArrayValue; AO7 = jobjectArrayValue; AO8 = jobjectArrayValue; AO9 = jobjectArrayValue; AO10 = jobjectArrayValue; AO11 = jobjectArrayValue; AO12 = jobjectArrayValue; AO13 = jobjectArrayValue; AO14 = jobjectArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00314_nativemethod (env, instance, AO1, AO2, AO3, AO4, AO5, AO6, AO7, AO8, AO9, AO10, AO11, AO12, AO13, AO14);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00315_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[315 - 1];

    jobjectArray AO1; jobjectArray AO2; jobjectArray AO3; jobjectArray AO4; jobjectArray AO5; jobjectArray AO6; jobjectArray AO7; jobjectArray AO8; jobjectArray AO9; jobjectArray AO10; jobjectArray AO11; jobjectArray AO12; jobjectArray AO13; jobjectArray AO14; jobjectArray AO15;
    AO1 = jobjectArrayValue; AO2 = jobjectArrayValue; AO3 = jobjectArrayValue; AO4 = jobjectArrayValue; AO5 = jobjectArrayValue; AO6 = jobjectArrayValue; AO7 = jobjectArrayValue; AO8 = jobjectArrayValue; AO9 = jobjectArrayValue; AO10 = jobjectArrayValue; AO11 = jobjectArrayValue; AO12 = jobjectArrayValue; AO13 = jobjectArrayValue; AO14 = jobjectArrayValue; AO15 = jobjectArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, AO1, AO2, AO3, AO4, AO5, AO6, AO7, AO8, AO9, AO10, AO11, AO12, AO13, AO14, AO15);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00315_run
(JNIEnv *env, jobject instance) {
    jobjectArray AO1; jobjectArray AO2; jobjectArray AO3; jobjectArray AO4; jobjectArray AO5; jobjectArray AO6; jobjectArray AO7; jobjectArray AO8; jobjectArray AO9; jobjectArray AO10; jobjectArray AO11; jobjectArray AO12; jobjectArray AO13; jobjectArray AO14; jobjectArray AO15;
    AO1 = jobjectArrayValue; AO2 = jobjectArrayValue; AO3 = jobjectArrayValue; AO4 = jobjectArrayValue; AO5 = jobjectArrayValue; AO6 = jobjectArrayValue; AO7 = jobjectArrayValue; AO8 = jobjectArrayValue; AO9 = jobjectArrayValue; AO10 = jobjectArrayValue; AO11 = jobjectArrayValue; AO12 = jobjectArrayValue; AO13 = jobjectArrayValue; AO14 = jobjectArrayValue; AO15 = jobjectArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00315_nativemethod (env, instance, AO1, AO2, AO3, AO4, AO5, AO6, AO7, AO8, AO9, AO10, AO11, AO12, AO13, AO14, AO15);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00316_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[316 - 1];

    jobjectArray AO1; jobjectArray AO2; jobjectArray AO3; jobjectArray AO4; jobjectArray AO5; jobjectArray AO6; jobjectArray AO7; jobjectArray AO8; jobjectArray AO9; jobjectArray AO10; jobjectArray AO11; jobjectArray AO12; jobjectArray AO13; jobjectArray AO14; jobjectArray AO15; jobjectArray AO16;
    AO1 = jobjectArrayValue; AO2 = jobjectArrayValue; AO3 = jobjectArrayValue; AO4 = jobjectArrayValue; AO5 = jobjectArrayValue; AO6 = jobjectArrayValue; AO7 = jobjectArrayValue; AO8 = jobjectArrayValue; AO9 = jobjectArrayValue; AO10 = jobjectArrayValue; AO11 = jobjectArrayValue; AO12 = jobjectArrayValue; AO13 = jobjectArrayValue; AO14 = jobjectArrayValue; AO15 = jobjectArrayValue; AO16 = jobjectArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, AO1, AO2, AO3, AO4, AO5, AO6, AO7, AO8, AO9, AO10, AO11, AO12, AO13, AO14, AO15, AO16);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00316_run
(JNIEnv *env, jobject instance) {
    jobjectArray AO1; jobjectArray AO2; jobjectArray AO3; jobjectArray AO4; jobjectArray AO5; jobjectArray AO6; jobjectArray AO7; jobjectArray AO8; jobjectArray AO9; jobjectArray AO10; jobjectArray AO11; jobjectArray AO12; jobjectArray AO13; jobjectArray AO14; jobjectArray AO15; jobjectArray AO16;
    AO1 = jobjectArrayValue; AO2 = jobjectArrayValue; AO3 = jobjectArrayValue; AO4 = jobjectArrayValue; AO5 = jobjectArrayValue; AO6 = jobjectArrayValue; AO7 = jobjectArrayValue; AO8 = jobjectArrayValue; AO9 = jobjectArrayValue; AO10 = jobjectArrayValue; AO11 = jobjectArrayValue; AO12 = jobjectArrayValue; AO13 = jobjectArrayValue; AO14 = jobjectArrayValue; AO15 = jobjectArrayValue; AO16 = jobjectArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00316_nativemethod (env, instance, AO1, AO2, AO3, AO4, AO5, AO6, AO7, AO8, AO9, AO10, AO11, AO12, AO13, AO14, AO15, AO16);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00317_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[317 - 1];

    jobjectArray AO1; jobjectArray AO2; jobjectArray AO3; jobjectArray AO4; jobjectArray AO5; jobjectArray AO6; jobjectArray AO7; jobjectArray AO8; jobjectArray AO9; jobjectArray AO10; jobjectArray AO11; jobjectArray AO12; jobjectArray AO13; jobjectArray AO14; jobjectArray AO15; jobjectArray AO16; jobjectArray AO17;
    AO1 = jobjectArrayValue; AO2 = jobjectArrayValue; AO3 = jobjectArrayValue; AO4 = jobjectArrayValue; AO5 = jobjectArrayValue; AO6 = jobjectArrayValue; AO7 = jobjectArrayValue; AO8 = jobjectArrayValue; AO9 = jobjectArrayValue; AO10 = jobjectArrayValue; AO11 = jobjectArrayValue; AO12 = jobjectArrayValue; AO13 = jobjectArrayValue; AO14 = jobjectArrayValue; AO15 = jobjectArrayValue; AO16 = jobjectArrayValue; AO17 = jobjectArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, AO1, AO2, AO3, AO4, AO5, AO6, AO7, AO8, AO9, AO10, AO11, AO12, AO13, AO14, AO15, AO16, AO17);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00317_run
(JNIEnv *env, jobject instance) {
    jobjectArray AO1; jobjectArray AO2; jobjectArray AO3; jobjectArray AO4; jobjectArray AO5; jobjectArray AO6; jobjectArray AO7; jobjectArray AO8; jobjectArray AO9; jobjectArray AO10; jobjectArray AO11; jobjectArray AO12; jobjectArray AO13; jobjectArray AO14; jobjectArray AO15; jobjectArray AO16; jobjectArray AO17;
    AO1 = jobjectArrayValue; AO2 = jobjectArrayValue; AO3 = jobjectArrayValue; AO4 = jobjectArrayValue; AO5 = jobjectArrayValue; AO6 = jobjectArrayValue; AO7 = jobjectArrayValue; AO8 = jobjectArrayValue; AO9 = jobjectArrayValue; AO10 = jobjectArrayValue; AO11 = jobjectArrayValue; AO12 = jobjectArrayValue; AO13 = jobjectArrayValue; AO14 = jobjectArrayValue; AO15 = jobjectArrayValue; AO16 = jobjectArrayValue; AO17 = jobjectArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00317_nativemethod (env, instance, AO1, AO2, AO3, AO4, AO5, AO6, AO7, AO8, AO9, AO10, AO11, AO12, AO13, AO14, AO15, AO16, AO17);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00318_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[318 - 1];

    jobjectArray AO1; jobjectArray AO2; jobjectArray AO3; jobjectArray AO4; jobjectArray AO5; jobjectArray AO6; jobjectArray AO7; jobjectArray AO8; jobjectArray AO9; jobjectArray AO10; jobjectArray AO11; jobjectArray AO12; jobjectArray AO13; jobjectArray AO14; jobjectArray AO15; jobjectArray AO16; jobjectArray AO17; jobjectArray AO18;
    AO1 = jobjectArrayValue; AO2 = jobjectArrayValue; AO3 = jobjectArrayValue; AO4 = jobjectArrayValue; AO5 = jobjectArrayValue; AO6 = jobjectArrayValue; AO7 = jobjectArrayValue; AO8 = jobjectArrayValue; AO9 = jobjectArrayValue; AO10 = jobjectArrayValue; AO11 = jobjectArrayValue; AO12 = jobjectArrayValue; AO13 = jobjectArrayValue; AO14 = jobjectArrayValue; AO15 = jobjectArrayValue; AO16 = jobjectArrayValue; AO17 = jobjectArrayValue; AO18 = jobjectArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, AO1, AO2, AO3, AO4, AO5, AO6, AO7, AO8, AO9, AO10, AO11, AO12, AO13, AO14, AO15, AO16, AO17, AO18);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00318_run
(JNIEnv *env, jobject instance) {
    jobjectArray AO1; jobjectArray AO2; jobjectArray AO3; jobjectArray AO4; jobjectArray AO5; jobjectArray AO6; jobjectArray AO7; jobjectArray AO8; jobjectArray AO9; jobjectArray AO10; jobjectArray AO11; jobjectArray AO12; jobjectArray AO13; jobjectArray AO14; jobjectArray AO15; jobjectArray AO16; jobjectArray AO17; jobjectArray AO18;
    AO1 = jobjectArrayValue; AO2 = jobjectArrayValue; AO3 = jobjectArrayValue; AO4 = jobjectArrayValue; AO5 = jobjectArrayValue; AO6 = jobjectArrayValue; AO7 = jobjectArrayValue; AO8 = jobjectArrayValue; AO9 = jobjectArrayValue; AO10 = jobjectArrayValue; AO11 = jobjectArrayValue; AO12 = jobjectArrayValue; AO13 = jobjectArrayValue; AO14 = jobjectArrayValue; AO15 = jobjectArrayValue; AO16 = jobjectArrayValue; AO17 = jobjectArrayValue; AO18 = jobjectArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00318_nativemethod (env, instance, AO1, AO2, AO3, AO4, AO5, AO6, AO7, AO8, AO9, AO10, AO11, AO12, AO13, AO14, AO15, AO16, AO17, AO18);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00319_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[319 - 1];

    jobjectArray AO1; jobjectArray AO2; jobjectArray AO3; jobjectArray AO4; jobjectArray AO5; jobjectArray AO6; jobjectArray AO7; jobjectArray AO8; jobjectArray AO9; jobjectArray AO10; jobjectArray AO11; jobjectArray AO12; jobjectArray AO13; jobjectArray AO14; jobjectArray AO15; jobjectArray AO16; jobjectArray AO17; jobjectArray AO18; jobjectArray AO19;
    AO1 = jobjectArrayValue; AO2 = jobjectArrayValue; AO3 = jobjectArrayValue; AO4 = jobjectArrayValue; AO5 = jobjectArrayValue; AO6 = jobjectArrayValue; AO7 = jobjectArrayValue; AO8 = jobjectArrayValue; AO9 = jobjectArrayValue; AO10 = jobjectArrayValue; AO11 = jobjectArrayValue; AO12 = jobjectArrayValue; AO13 = jobjectArrayValue; AO14 = jobjectArrayValue; AO15 = jobjectArrayValue; AO16 = jobjectArrayValue; AO17 = jobjectArrayValue; AO18 = jobjectArrayValue; AO19 = jobjectArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, AO1, AO2, AO3, AO4, AO5, AO6, AO7, AO8, AO9, AO10, AO11, AO12, AO13, AO14, AO15, AO16, AO17, AO18, AO19);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00319_run
(JNIEnv *env, jobject instance) {
    jobjectArray AO1; jobjectArray AO2; jobjectArray AO3; jobjectArray AO4; jobjectArray AO5; jobjectArray AO6; jobjectArray AO7; jobjectArray AO8; jobjectArray AO9; jobjectArray AO10; jobjectArray AO11; jobjectArray AO12; jobjectArray AO13; jobjectArray AO14; jobjectArray AO15; jobjectArray AO16; jobjectArray AO17; jobjectArray AO18; jobjectArray AO19;
    AO1 = jobjectArrayValue; AO2 = jobjectArrayValue; AO3 = jobjectArrayValue; AO4 = jobjectArrayValue; AO5 = jobjectArrayValue; AO6 = jobjectArrayValue; AO7 = jobjectArrayValue; AO8 = jobjectArrayValue; AO9 = jobjectArrayValue; AO10 = jobjectArrayValue; AO11 = jobjectArrayValue; AO12 = jobjectArrayValue; AO13 = jobjectArrayValue; AO14 = jobjectArrayValue; AO15 = jobjectArrayValue; AO16 = jobjectArrayValue; AO17 = jobjectArrayValue; AO18 = jobjectArrayValue; AO19 = jobjectArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00319_nativemethod (env, instance, AO1, AO2, AO3, AO4, AO5, AO6, AO7, AO8, AO9, AO10, AO11, AO12, AO13, AO14, AO15, AO16, AO17, AO18, AO19);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00320_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[320 - 1];

    jobjectArray AO1; jobjectArray AO2; jobjectArray AO3; jobjectArray AO4; jobjectArray AO5; jobjectArray AO6; jobjectArray AO7; jobjectArray AO8; jobjectArray AO9; jobjectArray AO10; jobjectArray AO11; jobjectArray AO12; jobjectArray AO13; jobjectArray AO14; jobjectArray AO15; jobjectArray AO16; jobjectArray AO17; jobjectArray AO18; jobjectArray AO19; jobjectArray AO20;
    AO1 = jobjectArrayValue; AO2 = jobjectArrayValue; AO3 = jobjectArrayValue; AO4 = jobjectArrayValue; AO5 = jobjectArrayValue; AO6 = jobjectArrayValue; AO7 = jobjectArrayValue; AO8 = jobjectArrayValue; AO9 = jobjectArrayValue; AO10 = jobjectArrayValue; AO11 = jobjectArrayValue; AO12 = jobjectArrayValue; AO13 = jobjectArrayValue; AO14 = jobjectArrayValue; AO15 = jobjectArrayValue; AO16 = jobjectArrayValue; AO17 = jobjectArrayValue; AO18 = jobjectArrayValue; AO19 = jobjectArrayValue; AO20 = jobjectArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, AO1, AO2, AO3, AO4, AO5, AO6, AO7, AO8, AO9, AO10, AO11, AO12, AO13, AO14, AO15, AO16, AO17, AO18, AO19, AO20);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00320_run
(JNIEnv *env, jobject instance) {
    jobjectArray AO1; jobjectArray AO2; jobjectArray AO3; jobjectArray AO4; jobjectArray AO5; jobjectArray AO6; jobjectArray AO7; jobjectArray AO8; jobjectArray AO9; jobjectArray AO10; jobjectArray AO11; jobjectArray AO12; jobjectArray AO13; jobjectArray AO14; jobjectArray AO15; jobjectArray AO16; jobjectArray AO17; jobjectArray AO18; jobjectArray AO19; jobjectArray AO20;
    AO1 = jobjectArrayValue; AO2 = jobjectArrayValue; AO3 = jobjectArrayValue; AO4 = jobjectArrayValue; AO5 = jobjectArrayValue; AO6 = jobjectArrayValue; AO7 = jobjectArrayValue; AO8 = jobjectArrayValue; AO9 = jobjectArrayValue; AO10 = jobjectArrayValue; AO11 = jobjectArrayValue; AO12 = jobjectArrayValue; AO13 = jobjectArrayValue; AO14 = jobjectArrayValue; AO15 = jobjectArrayValue; AO16 = jobjectArrayValue; AO17 = jobjectArrayValue; AO18 = jobjectArrayValue; AO19 = jobjectArrayValue; AO20 = jobjectArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00320_nativemethod (env, instance, AO1, AO2, AO3, AO4, AO5, AO6, AO7, AO8, AO9, AO10, AO11, AO12, AO13, AO14, AO15, AO16, AO17, AO18, AO19, AO20);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00321_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[321 - 1];

    jbyteArray Ay1;
    Ay1 = jbyteArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ay1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00321_run
(JNIEnv *env, jobject instance) {
    jbyteArray Ay1;
    Ay1 = jbyteArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00321_nativemethod (env, instance, Ay1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00322_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[322 - 1];

    jbyteArray Ay1; jbyteArray Ay2;
    Ay1 = jbyteArrayValue; Ay2 = jbyteArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ay1, Ay2);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00322_run
(JNIEnv *env, jobject instance) {
    jbyteArray Ay1; jbyteArray Ay2;
    Ay1 = jbyteArrayValue; Ay2 = jbyteArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00322_nativemethod (env, instance, Ay1, Ay2);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00323_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[323 - 1];

    jbyteArray Ay1; jbyteArray Ay2; jbyteArray Ay3;
    Ay1 = jbyteArrayValue; Ay2 = jbyteArrayValue; Ay3 = jbyteArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ay1, Ay2, Ay3);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00323_run
(JNIEnv *env, jobject instance) {
    jbyteArray Ay1; jbyteArray Ay2; jbyteArray Ay3;
    Ay1 = jbyteArrayValue; Ay2 = jbyteArrayValue; Ay3 = jbyteArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00323_nativemethod (env, instance, Ay1, Ay2, Ay3);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00324_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[324 - 1];

    jbyteArray Ay1; jbyteArray Ay2; jbyteArray Ay3; jbyteArray Ay4;
    Ay1 = jbyteArrayValue; Ay2 = jbyteArrayValue; Ay3 = jbyteArrayValue; Ay4 = jbyteArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ay1, Ay2, Ay3, Ay4);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00324_run
(JNIEnv *env, jobject instance) {
    jbyteArray Ay1; jbyteArray Ay2; jbyteArray Ay3; jbyteArray Ay4;
    Ay1 = jbyteArrayValue; Ay2 = jbyteArrayValue; Ay3 = jbyteArrayValue; Ay4 = jbyteArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00324_nativemethod (env, instance, Ay1, Ay2, Ay3, Ay4);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00325_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[325 - 1];

    jbyteArray Ay1; jbyteArray Ay2; jbyteArray Ay3; jbyteArray Ay4; jbyteArray Ay5;
    Ay1 = jbyteArrayValue; Ay2 = jbyteArrayValue; Ay3 = jbyteArrayValue; Ay4 = jbyteArrayValue; Ay5 = jbyteArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ay1, Ay2, Ay3, Ay4, Ay5);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00325_run
(JNIEnv *env, jobject instance) {
    jbyteArray Ay1; jbyteArray Ay2; jbyteArray Ay3; jbyteArray Ay4; jbyteArray Ay5;
    Ay1 = jbyteArrayValue; Ay2 = jbyteArrayValue; Ay3 = jbyteArrayValue; Ay4 = jbyteArrayValue; Ay5 = jbyteArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00325_nativemethod (env, instance, Ay1, Ay2, Ay3, Ay4, Ay5);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00326_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[326 - 1];

    jbyteArray Ay1; jbyteArray Ay2; jbyteArray Ay3; jbyteArray Ay4; jbyteArray Ay5; jbyteArray Ay6;
    Ay1 = jbyteArrayValue; Ay2 = jbyteArrayValue; Ay3 = jbyteArrayValue; Ay4 = jbyteArrayValue; Ay5 = jbyteArrayValue; Ay6 = jbyteArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ay1, Ay2, Ay3, Ay4, Ay5, Ay6);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00326_run
(JNIEnv *env, jobject instance) {
    jbyteArray Ay1; jbyteArray Ay2; jbyteArray Ay3; jbyteArray Ay4; jbyteArray Ay5; jbyteArray Ay6;
    Ay1 = jbyteArrayValue; Ay2 = jbyteArrayValue; Ay3 = jbyteArrayValue; Ay4 = jbyteArrayValue; Ay5 = jbyteArrayValue; Ay6 = jbyteArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00326_nativemethod (env, instance, Ay1, Ay2, Ay3, Ay4, Ay5, Ay6);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00327_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[327 - 1];

    jbyteArray Ay1; jbyteArray Ay2; jbyteArray Ay3; jbyteArray Ay4; jbyteArray Ay5; jbyteArray Ay6; jbyteArray Ay7;
    Ay1 = jbyteArrayValue; Ay2 = jbyteArrayValue; Ay3 = jbyteArrayValue; Ay4 = jbyteArrayValue; Ay5 = jbyteArrayValue; Ay6 = jbyteArrayValue; Ay7 = jbyteArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ay1, Ay2, Ay3, Ay4, Ay5, Ay6, Ay7);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00327_run
(JNIEnv *env, jobject instance) {
    jbyteArray Ay1; jbyteArray Ay2; jbyteArray Ay3; jbyteArray Ay4; jbyteArray Ay5; jbyteArray Ay6; jbyteArray Ay7;
    Ay1 = jbyteArrayValue; Ay2 = jbyteArrayValue; Ay3 = jbyteArrayValue; Ay4 = jbyteArrayValue; Ay5 = jbyteArrayValue; Ay6 = jbyteArrayValue; Ay7 = jbyteArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00327_nativemethod (env, instance, Ay1, Ay2, Ay3, Ay4, Ay5, Ay6, Ay7);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00328_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[328 - 1];

    jbyteArray Ay1; jbyteArray Ay2; jbyteArray Ay3; jbyteArray Ay4; jbyteArray Ay5; jbyteArray Ay6; jbyteArray Ay7; jbyteArray Ay8;
    Ay1 = jbyteArrayValue; Ay2 = jbyteArrayValue; Ay3 = jbyteArrayValue; Ay4 = jbyteArrayValue; Ay5 = jbyteArrayValue; Ay6 = jbyteArrayValue; Ay7 = jbyteArrayValue; Ay8 = jbyteArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ay1, Ay2, Ay3, Ay4, Ay5, Ay6, Ay7, Ay8);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00328_run
(JNIEnv *env, jobject instance) {
    jbyteArray Ay1; jbyteArray Ay2; jbyteArray Ay3; jbyteArray Ay4; jbyteArray Ay5; jbyteArray Ay6; jbyteArray Ay7; jbyteArray Ay8;
    Ay1 = jbyteArrayValue; Ay2 = jbyteArrayValue; Ay3 = jbyteArrayValue; Ay4 = jbyteArrayValue; Ay5 = jbyteArrayValue; Ay6 = jbyteArrayValue; Ay7 = jbyteArrayValue; Ay8 = jbyteArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00328_nativemethod (env, instance, Ay1, Ay2, Ay3, Ay4, Ay5, Ay6, Ay7, Ay8);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00329_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[329 - 1];

    jbyteArray Ay1; jbyteArray Ay2; jbyteArray Ay3; jbyteArray Ay4; jbyteArray Ay5; jbyteArray Ay6; jbyteArray Ay7; jbyteArray Ay8; jbyteArray Ay9;
    Ay1 = jbyteArrayValue; Ay2 = jbyteArrayValue; Ay3 = jbyteArrayValue; Ay4 = jbyteArrayValue; Ay5 = jbyteArrayValue; Ay6 = jbyteArrayValue; Ay7 = jbyteArrayValue; Ay8 = jbyteArrayValue; Ay9 = jbyteArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ay1, Ay2, Ay3, Ay4, Ay5, Ay6, Ay7, Ay8, Ay9);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00329_run
(JNIEnv *env, jobject instance) {
    jbyteArray Ay1; jbyteArray Ay2; jbyteArray Ay3; jbyteArray Ay4; jbyteArray Ay5; jbyteArray Ay6; jbyteArray Ay7; jbyteArray Ay8; jbyteArray Ay9;
    Ay1 = jbyteArrayValue; Ay2 = jbyteArrayValue; Ay3 = jbyteArrayValue; Ay4 = jbyteArrayValue; Ay5 = jbyteArrayValue; Ay6 = jbyteArrayValue; Ay7 = jbyteArrayValue; Ay8 = jbyteArrayValue; Ay9 = jbyteArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00329_nativemethod (env, instance, Ay1, Ay2, Ay3, Ay4, Ay5, Ay6, Ay7, Ay8, Ay9);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00330_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[330 - 1];

    jbyteArray Ay1; jbyteArray Ay2; jbyteArray Ay3; jbyteArray Ay4; jbyteArray Ay5; jbyteArray Ay6; jbyteArray Ay7; jbyteArray Ay8; jbyteArray Ay9; jbyteArray Ay10;
    Ay1 = jbyteArrayValue; Ay2 = jbyteArrayValue; Ay3 = jbyteArrayValue; Ay4 = jbyteArrayValue; Ay5 = jbyteArrayValue; Ay6 = jbyteArrayValue; Ay7 = jbyteArrayValue; Ay8 = jbyteArrayValue; Ay9 = jbyteArrayValue; Ay10 = jbyteArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ay1, Ay2, Ay3, Ay4, Ay5, Ay6, Ay7, Ay8, Ay9, Ay10);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00330_run
(JNIEnv *env, jobject instance) {
    jbyteArray Ay1; jbyteArray Ay2; jbyteArray Ay3; jbyteArray Ay4; jbyteArray Ay5; jbyteArray Ay6; jbyteArray Ay7; jbyteArray Ay8; jbyteArray Ay9; jbyteArray Ay10;
    Ay1 = jbyteArrayValue; Ay2 = jbyteArrayValue; Ay3 = jbyteArrayValue; Ay4 = jbyteArrayValue; Ay5 = jbyteArrayValue; Ay6 = jbyteArrayValue; Ay7 = jbyteArrayValue; Ay8 = jbyteArrayValue; Ay9 = jbyteArrayValue; Ay10 = jbyteArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00330_nativemethod (env, instance, Ay1, Ay2, Ay3, Ay4, Ay5, Ay6, Ay7, Ay8, Ay9, Ay10);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00331_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[331 - 1];

    jbyteArray Ay1; jbyteArray Ay2; jbyteArray Ay3; jbyteArray Ay4; jbyteArray Ay5; jbyteArray Ay6; jbyteArray Ay7; jbyteArray Ay8; jbyteArray Ay9; jbyteArray Ay10; jbyteArray Ay11;
    Ay1 = jbyteArrayValue; Ay2 = jbyteArrayValue; Ay3 = jbyteArrayValue; Ay4 = jbyteArrayValue; Ay5 = jbyteArrayValue; Ay6 = jbyteArrayValue; Ay7 = jbyteArrayValue; Ay8 = jbyteArrayValue; Ay9 = jbyteArrayValue; Ay10 = jbyteArrayValue; Ay11 = jbyteArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ay1, Ay2, Ay3, Ay4, Ay5, Ay6, Ay7, Ay8, Ay9, Ay10, Ay11);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00331_run
(JNIEnv *env, jobject instance) {
    jbyteArray Ay1; jbyteArray Ay2; jbyteArray Ay3; jbyteArray Ay4; jbyteArray Ay5; jbyteArray Ay6; jbyteArray Ay7; jbyteArray Ay8; jbyteArray Ay9; jbyteArray Ay10; jbyteArray Ay11;
    Ay1 = jbyteArrayValue; Ay2 = jbyteArrayValue; Ay3 = jbyteArrayValue; Ay4 = jbyteArrayValue; Ay5 = jbyteArrayValue; Ay6 = jbyteArrayValue; Ay7 = jbyteArrayValue; Ay8 = jbyteArrayValue; Ay9 = jbyteArrayValue; Ay10 = jbyteArrayValue; Ay11 = jbyteArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00331_nativemethod (env, instance, Ay1, Ay2, Ay3, Ay4, Ay5, Ay6, Ay7, Ay8, Ay9, Ay10, Ay11);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00332_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[332 - 1];

    jbyteArray Ay1; jbyteArray Ay2; jbyteArray Ay3; jbyteArray Ay4; jbyteArray Ay5; jbyteArray Ay6; jbyteArray Ay7; jbyteArray Ay8; jbyteArray Ay9; jbyteArray Ay10; jbyteArray Ay11; jbyteArray Ay12;
    Ay1 = jbyteArrayValue; Ay2 = jbyteArrayValue; Ay3 = jbyteArrayValue; Ay4 = jbyteArrayValue; Ay5 = jbyteArrayValue; Ay6 = jbyteArrayValue; Ay7 = jbyteArrayValue; Ay8 = jbyteArrayValue; Ay9 = jbyteArrayValue; Ay10 = jbyteArrayValue; Ay11 = jbyteArrayValue; Ay12 = jbyteArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ay1, Ay2, Ay3, Ay4, Ay5, Ay6, Ay7, Ay8, Ay9, Ay10, Ay11, Ay12);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00332_run
(JNIEnv *env, jobject instance) {
    jbyteArray Ay1; jbyteArray Ay2; jbyteArray Ay3; jbyteArray Ay4; jbyteArray Ay5; jbyteArray Ay6; jbyteArray Ay7; jbyteArray Ay8; jbyteArray Ay9; jbyteArray Ay10; jbyteArray Ay11; jbyteArray Ay12;
    Ay1 = jbyteArrayValue; Ay2 = jbyteArrayValue; Ay3 = jbyteArrayValue; Ay4 = jbyteArrayValue; Ay5 = jbyteArrayValue; Ay6 = jbyteArrayValue; Ay7 = jbyteArrayValue; Ay8 = jbyteArrayValue; Ay9 = jbyteArrayValue; Ay10 = jbyteArrayValue; Ay11 = jbyteArrayValue; Ay12 = jbyteArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00332_nativemethod (env, instance, Ay1, Ay2, Ay3, Ay4, Ay5, Ay6, Ay7, Ay8, Ay9, Ay10, Ay11, Ay12);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00333_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[333 - 1];

    jbyteArray Ay1; jbyteArray Ay2; jbyteArray Ay3; jbyteArray Ay4; jbyteArray Ay5; jbyteArray Ay6; jbyteArray Ay7; jbyteArray Ay8; jbyteArray Ay9; jbyteArray Ay10; jbyteArray Ay11; jbyteArray Ay12; jbyteArray Ay13;
    Ay1 = jbyteArrayValue; Ay2 = jbyteArrayValue; Ay3 = jbyteArrayValue; Ay4 = jbyteArrayValue; Ay5 = jbyteArrayValue; Ay6 = jbyteArrayValue; Ay7 = jbyteArrayValue; Ay8 = jbyteArrayValue; Ay9 = jbyteArrayValue; Ay10 = jbyteArrayValue; Ay11 = jbyteArrayValue; Ay12 = jbyteArrayValue; Ay13 = jbyteArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ay1, Ay2, Ay3, Ay4, Ay5, Ay6, Ay7, Ay8, Ay9, Ay10, Ay11, Ay12, Ay13);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00333_run
(JNIEnv *env, jobject instance) {
    jbyteArray Ay1; jbyteArray Ay2; jbyteArray Ay3; jbyteArray Ay4; jbyteArray Ay5; jbyteArray Ay6; jbyteArray Ay7; jbyteArray Ay8; jbyteArray Ay9; jbyteArray Ay10; jbyteArray Ay11; jbyteArray Ay12; jbyteArray Ay13;
    Ay1 = jbyteArrayValue; Ay2 = jbyteArrayValue; Ay3 = jbyteArrayValue; Ay4 = jbyteArrayValue; Ay5 = jbyteArrayValue; Ay6 = jbyteArrayValue; Ay7 = jbyteArrayValue; Ay8 = jbyteArrayValue; Ay9 = jbyteArrayValue; Ay10 = jbyteArrayValue; Ay11 = jbyteArrayValue; Ay12 = jbyteArrayValue; Ay13 = jbyteArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00333_nativemethod (env, instance, Ay1, Ay2, Ay3, Ay4, Ay5, Ay6, Ay7, Ay8, Ay9, Ay10, Ay11, Ay12, Ay13);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00334_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[334 - 1];

    jbyteArray Ay1; jbyteArray Ay2; jbyteArray Ay3; jbyteArray Ay4; jbyteArray Ay5; jbyteArray Ay6; jbyteArray Ay7; jbyteArray Ay8; jbyteArray Ay9; jbyteArray Ay10; jbyteArray Ay11; jbyteArray Ay12; jbyteArray Ay13; jbyteArray Ay14;
    Ay1 = jbyteArrayValue; Ay2 = jbyteArrayValue; Ay3 = jbyteArrayValue; Ay4 = jbyteArrayValue; Ay5 = jbyteArrayValue; Ay6 = jbyteArrayValue; Ay7 = jbyteArrayValue; Ay8 = jbyteArrayValue; Ay9 = jbyteArrayValue; Ay10 = jbyteArrayValue; Ay11 = jbyteArrayValue; Ay12 = jbyteArrayValue; Ay13 = jbyteArrayValue; Ay14 = jbyteArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ay1, Ay2, Ay3, Ay4, Ay5, Ay6, Ay7, Ay8, Ay9, Ay10, Ay11, Ay12, Ay13, Ay14);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00334_run
(JNIEnv *env, jobject instance) {
    jbyteArray Ay1; jbyteArray Ay2; jbyteArray Ay3; jbyteArray Ay4; jbyteArray Ay5; jbyteArray Ay6; jbyteArray Ay7; jbyteArray Ay8; jbyteArray Ay9; jbyteArray Ay10; jbyteArray Ay11; jbyteArray Ay12; jbyteArray Ay13; jbyteArray Ay14;
    Ay1 = jbyteArrayValue; Ay2 = jbyteArrayValue; Ay3 = jbyteArrayValue; Ay4 = jbyteArrayValue; Ay5 = jbyteArrayValue; Ay6 = jbyteArrayValue; Ay7 = jbyteArrayValue; Ay8 = jbyteArrayValue; Ay9 = jbyteArrayValue; Ay10 = jbyteArrayValue; Ay11 = jbyteArrayValue; Ay12 = jbyteArrayValue; Ay13 = jbyteArrayValue; Ay14 = jbyteArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00334_nativemethod (env, instance, Ay1, Ay2, Ay3, Ay4, Ay5, Ay6, Ay7, Ay8, Ay9, Ay10, Ay11, Ay12, Ay13, Ay14);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00335_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[335 - 1];

    jbyteArray Ay1; jbyteArray Ay2; jbyteArray Ay3; jbyteArray Ay4; jbyteArray Ay5; jbyteArray Ay6; jbyteArray Ay7; jbyteArray Ay8; jbyteArray Ay9; jbyteArray Ay10; jbyteArray Ay11; jbyteArray Ay12; jbyteArray Ay13; jbyteArray Ay14; jbyteArray Ay15;
    Ay1 = jbyteArrayValue; Ay2 = jbyteArrayValue; Ay3 = jbyteArrayValue; Ay4 = jbyteArrayValue; Ay5 = jbyteArrayValue; Ay6 = jbyteArrayValue; Ay7 = jbyteArrayValue; Ay8 = jbyteArrayValue; Ay9 = jbyteArrayValue; Ay10 = jbyteArrayValue; Ay11 = jbyteArrayValue; Ay12 = jbyteArrayValue; Ay13 = jbyteArrayValue; Ay14 = jbyteArrayValue; Ay15 = jbyteArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ay1, Ay2, Ay3, Ay4, Ay5, Ay6, Ay7, Ay8, Ay9, Ay10, Ay11, Ay12, Ay13, Ay14, Ay15);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00335_run
(JNIEnv *env, jobject instance) {
    jbyteArray Ay1; jbyteArray Ay2; jbyteArray Ay3; jbyteArray Ay4; jbyteArray Ay5; jbyteArray Ay6; jbyteArray Ay7; jbyteArray Ay8; jbyteArray Ay9; jbyteArray Ay10; jbyteArray Ay11; jbyteArray Ay12; jbyteArray Ay13; jbyteArray Ay14; jbyteArray Ay15;
    Ay1 = jbyteArrayValue; Ay2 = jbyteArrayValue; Ay3 = jbyteArrayValue; Ay4 = jbyteArrayValue; Ay5 = jbyteArrayValue; Ay6 = jbyteArrayValue; Ay7 = jbyteArrayValue; Ay8 = jbyteArrayValue; Ay9 = jbyteArrayValue; Ay10 = jbyteArrayValue; Ay11 = jbyteArrayValue; Ay12 = jbyteArrayValue; Ay13 = jbyteArrayValue; Ay14 = jbyteArrayValue; Ay15 = jbyteArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00335_nativemethod (env, instance, Ay1, Ay2, Ay3, Ay4, Ay5, Ay6, Ay7, Ay8, Ay9, Ay10, Ay11, Ay12, Ay13, Ay14, Ay15);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00336_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[336 - 1];

    jbyteArray Ay1; jbyteArray Ay2; jbyteArray Ay3; jbyteArray Ay4; jbyteArray Ay5; jbyteArray Ay6; jbyteArray Ay7; jbyteArray Ay8; jbyteArray Ay9; jbyteArray Ay10; jbyteArray Ay11; jbyteArray Ay12; jbyteArray Ay13; jbyteArray Ay14; jbyteArray Ay15; jbyteArray Ay16;
    Ay1 = jbyteArrayValue; Ay2 = jbyteArrayValue; Ay3 = jbyteArrayValue; Ay4 = jbyteArrayValue; Ay5 = jbyteArrayValue; Ay6 = jbyteArrayValue; Ay7 = jbyteArrayValue; Ay8 = jbyteArrayValue; Ay9 = jbyteArrayValue; Ay10 = jbyteArrayValue; Ay11 = jbyteArrayValue; Ay12 = jbyteArrayValue; Ay13 = jbyteArrayValue; Ay14 = jbyteArrayValue; Ay15 = jbyteArrayValue; Ay16 = jbyteArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ay1, Ay2, Ay3, Ay4, Ay5, Ay6, Ay7, Ay8, Ay9, Ay10, Ay11, Ay12, Ay13, Ay14, Ay15, Ay16);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00336_run
(JNIEnv *env, jobject instance) {
    jbyteArray Ay1; jbyteArray Ay2; jbyteArray Ay3; jbyteArray Ay4; jbyteArray Ay5; jbyteArray Ay6; jbyteArray Ay7; jbyteArray Ay8; jbyteArray Ay9; jbyteArray Ay10; jbyteArray Ay11; jbyteArray Ay12; jbyteArray Ay13; jbyteArray Ay14; jbyteArray Ay15; jbyteArray Ay16;
    Ay1 = jbyteArrayValue; Ay2 = jbyteArrayValue; Ay3 = jbyteArrayValue; Ay4 = jbyteArrayValue; Ay5 = jbyteArrayValue; Ay6 = jbyteArrayValue; Ay7 = jbyteArrayValue; Ay8 = jbyteArrayValue; Ay9 = jbyteArrayValue; Ay10 = jbyteArrayValue; Ay11 = jbyteArrayValue; Ay12 = jbyteArrayValue; Ay13 = jbyteArrayValue; Ay14 = jbyteArrayValue; Ay15 = jbyteArrayValue; Ay16 = jbyteArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00336_nativemethod (env, instance, Ay1, Ay2, Ay3, Ay4, Ay5, Ay6, Ay7, Ay8, Ay9, Ay10, Ay11, Ay12, Ay13, Ay14, Ay15, Ay16);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00337_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[337 - 1];

    jbyteArray Ay1; jbyteArray Ay2; jbyteArray Ay3; jbyteArray Ay4; jbyteArray Ay5; jbyteArray Ay6; jbyteArray Ay7; jbyteArray Ay8; jbyteArray Ay9; jbyteArray Ay10; jbyteArray Ay11; jbyteArray Ay12; jbyteArray Ay13; jbyteArray Ay14; jbyteArray Ay15; jbyteArray Ay16; jbyteArray Ay17;
    Ay1 = jbyteArrayValue; Ay2 = jbyteArrayValue; Ay3 = jbyteArrayValue; Ay4 = jbyteArrayValue; Ay5 = jbyteArrayValue; Ay6 = jbyteArrayValue; Ay7 = jbyteArrayValue; Ay8 = jbyteArrayValue; Ay9 = jbyteArrayValue; Ay10 = jbyteArrayValue; Ay11 = jbyteArrayValue; Ay12 = jbyteArrayValue; Ay13 = jbyteArrayValue; Ay14 = jbyteArrayValue; Ay15 = jbyteArrayValue; Ay16 = jbyteArrayValue; Ay17 = jbyteArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ay1, Ay2, Ay3, Ay4, Ay5, Ay6, Ay7, Ay8, Ay9, Ay10, Ay11, Ay12, Ay13, Ay14, Ay15, Ay16, Ay17);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00337_run
(JNIEnv *env, jobject instance) {
    jbyteArray Ay1; jbyteArray Ay2; jbyteArray Ay3; jbyteArray Ay4; jbyteArray Ay5; jbyteArray Ay6; jbyteArray Ay7; jbyteArray Ay8; jbyteArray Ay9; jbyteArray Ay10; jbyteArray Ay11; jbyteArray Ay12; jbyteArray Ay13; jbyteArray Ay14; jbyteArray Ay15; jbyteArray Ay16; jbyteArray Ay17;
    Ay1 = jbyteArrayValue; Ay2 = jbyteArrayValue; Ay3 = jbyteArrayValue; Ay4 = jbyteArrayValue; Ay5 = jbyteArrayValue; Ay6 = jbyteArrayValue; Ay7 = jbyteArrayValue; Ay8 = jbyteArrayValue; Ay9 = jbyteArrayValue; Ay10 = jbyteArrayValue; Ay11 = jbyteArrayValue; Ay12 = jbyteArrayValue; Ay13 = jbyteArrayValue; Ay14 = jbyteArrayValue; Ay15 = jbyteArrayValue; Ay16 = jbyteArrayValue; Ay17 = jbyteArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00337_nativemethod (env, instance, Ay1, Ay2, Ay3, Ay4, Ay5, Ay6, Ay7, Ay8, Ay9, Ay10, Ay11, Ay12, Ay13, Ay14, Ay15, Ay16, Ay17);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00338_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[338 - 1];

    jbyteArray Ay1; jbyteArray Ay2; jbyteArray Ay3; jbyteArray Ay4; jbyteArray Ay5; jbyteArray Ay6; jbyteArray Ay7; jbyteArray Ay8; jbyteArray Ay9; jbyteArray Ay10; jbyteArray Ay11; jbyteArray Ay12; jbyteArray Ay13; jbyteArray Ay14; jbyteArray Ay15; jbyteArray Ay16; jbyteArray Ay17; jbyteArray Ay18;
    Ay1 = jbyteArrayValue; Ay2 = jbyteArrayValue; Ay3 = jbyteArrayValue; Ay4 = jbyteArrayValue; Ay5 = jbyteArrayValue; Ay6 = jbyteArrayValue; Ay7 = jbyteArrayValue; Ay8 = jbyteArrayValue; Ay9 = jbyteArrayValue; Ay10 = jbyteArrayValue; Ay11 = jbyteArrayValue; Ay12 = jbyteArrayValue; Ay13 = jbyteArrayValue; Ay14 = jbyteArrayValue; Ay15 = jbyteArrayValue; Ay16 = jbyteArrayValue; Ay17 = jbyteArrayValue; Ay18 = jbyteArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ay1, Ay2, Ay3, Ay4, Ay5, Ay6, Ay7, Ay8, Ay9, Ay10, Ay11, Ay12, Ay13, Ay14, Ay15, Ay16, Ay17, Ay18);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00338_run
(JNIEnv *env, jobject instance) {
    jbyteArray Ay1; jbyteArray Ay2; jbyteArray Ay3; jbyteArray Ay4; jbyteArray Ay5; jbyteArray Ay6; jbyteArray Ay7; jbyteArray Ay8; jbyteArray Ay9; jbyteArray Ay10; jbyteArray Ay11; jbyteArray Ay12; jbyteArray Ay13; jbyteArray Ay14; jbyteArray Ay15; jbyteArray Ay16; jbyteArray Ay17; jbyteArray Ay18;
    Ay1 = jbyteArrayValue; Ay2 = jbyteArrayValue; Ay3 = jbyteArrayValue; Ay4 = jbyteArrayValue; Ay5 = jbyteArrayValue; Ay6 = jbyteArrayValue; Ay7 = jbyteArrayValue; Ay8 = jbyteArrayValue; Ay9 = jbyteArrayValue; Ay10 = jbyteArrayValue; Ay11 = jbyteArrayValue; Ay12 = jbyteArrayValue; Ay13 = jbyteArrayValue; Ay14 = jbyteArrayValue; Ay15 = jbyteArrayValue; Ay16 = jbyteArrayValue; Ay17 = jbyteArrayValue; Ay18 = jbyteArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00338_nativemethod (env, instance, Ay1, Ay2, Ay3, Ay4, Ay5, Ay6, Ay7, Ay8, Ay9, Ay10, Ay11, Ay12, Ay13, Ay14, Ay15, Ay16, Ay17, Ay18);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00339_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[339 - 1];

    jbyteArray Ay1; jbyteArray Ay2; jbyteArray Ay3; jbyteArray Ay4; jbyteArray Ay5; jbyteArray Ay6; jbyteArray Ay7; jbyteArray Ay8; jbyteArray Ay9; jbyteArray Ay10; jbyteArray Ay11; jbyteArray Ay12; jbyteArray Ay13; jbyteArray Ay14; jbyteArray Ay15; jbyteArray Ay16; jbyteArray Ay17; jbyteArray Ay18; jbyteArray Ay19;
    Ay1 = jbyteArrayValue; Ay2 = jbyteArrayValue; Ay3 = jbyteArrayValue; Ay4 = jbyteArrayValue; Ay5 = jbyteArrayValue; Ay6 = jbyteArrayValue; Ay7 = jbyteArrayValue; Ay8 = jbyteArrayValue; Ay9 = jbyteArrayValue; Ay10 = jbyteArrayValue; Ay11 = jbyteArrayValue; Ay12 = jbyteArrayValue; Ay13 = jbyteArrayValue; Ay14 = jbyteArrayValue; Ay15 = jbyteArrayValue; Ay16 = jbyteArrayValue; Ay17 = jbyteArrayValue; Ay18 = jbyteArrayValue; Ay19 = jbyteArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ay1, Ay2, Ay3, Ay4, Ay5, Ay6, Ay7, Ay8, Ay9, Ay10, Ay11, Ay12, Ay13, Ay14, Ay15, Ay16, Ay17, Ay18, Ay19);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00339_run
(JNIEnv *env, jobject instance) {
    jbyteArray Ay1; jbyteArray Ay2; jbyteArray Ay3; jbyteArray Ay4; jbyteArray Ay5; jbyteArray Ay6; jbyteArray Ay7; jbyteArray Ay8; jbyteArray Ay9; jbyteArray Ay10; jbyteArray Ay11; jbyteArray Ay12; jbyteArray Ay13; jbyteArray Ay14; jbyteArray Ay15; jbyteArray Ay16; jbyteArray Ay17; jbyteArray Ay18; jbyteArray Ay19;
    Ay1 = jbyteArrayValue; Ay2 = jbyteArrayValue; Ay3 = jbyteArrayValue; Ay4 = jbyteArrayValue; Ay5 = jbyteArrayValue; Ay6 = jbyteArrayValue; Ay7 = jbyteArrayValue; Ay8 = jbyteArrayValue; Ay9 = jbyteArrayValue; Ay10 = jbyteArrayValue; Ay11 = jbyteArrayValue; Ay12 = jbyteArrayValue; Ay13 = jbyteArrayValue; Ay14 = jbyteArrayValue; Ay15 = jbyteArrayValue; Ay16 = jbyteArrayValue; Ay17 = jbyteArrayValue; Ay18 = jbyteArrayValue; Ay19 = jbyteArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00339_nativemethod (env, instance, Ay1, Ay2, Ay3, Ay4, Ay5, Ay6, Ay7, Ay8, Ay9, Ay10, Ay11, Ay12, Ay13, Ay14, Ay15, Ay16, Ay17, Ay18, Ay19);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00340_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[340 - 1];

    jbyteArray Ay1; jbyteArray Ay2; jbyteArray Ay3; jbyteArray Ay4; jbyteArray Ay5; jbyteArray Ay6; jbyteArray Ay7; jbyteArray Ay8; jbyteArray Ay9; jbyteArray Ay10; jbyteArray Ay11; jbyteArray Ay12; jbyteArray Ay13; jbyteArray Ay14; jbyteArray Ay15; jbyteArray Ay16; jbyteArray Ay17; jbyteArray Ay18; jbyteArray Ay19; jbyteArray Ay20;
    Ay1 = jbyteArrayValue; Ay2 = jbyteArrayValue; Ay3 = jbyteArrayValue; Ay4 = jbyteArrayValue; Ay5 = jbyteArrayValue; Ay6 = jbyteArrayValue; Ay7 = jbyteArrayValue; Ay8 = jbyteArrayValue; Ay9 = jbyteArrayValue; Ay10 = jbyteArrayValue; Ay11 = jbyteArrayValue; Ay12 = jbyteArrayValue; Ay13 = jbyteArrayValue; Ay14 = jbyteArrayValue; Ay15 = jbyteArrayValue; Ay16 = jbyteArrayValue; Ay17 = jbyteArrayValue; Ay18 = jbyteArrayValue; Ay19 = jbyteArrayValue; Ay20 = jbyteArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ay1, Ay2, Ay3, Ay4, Ay5, Ay6, Ay7, Ay8, Ay9, Ay10, Ay11, Ay12, Ay13, Ay14, Ay15, Ay16, Ay17, Ay18, Ay19, Ay20);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00340_run
(JNIEnv *env, jobject instance) {
    jbyteArray Ay1; jbyteArray Ay2; jbyteArray Ay3; jbyteArray Ay4; jbyteArray Ay5; jbyteArray Ay6; jbyteArray Ay7; jbyteArray Ay8; jbyteArray Ay9; jbyteArray Ay10; jbyteArray Ay11; jbyteArray Ay12; jbyteArray Ay13; jbyteArray Ay14; jbyteArray Ay15; jbyteArray Ay16; jbyteArray Ay17; jbyteArray Ay18; jbyteArray Ay19; jbyteArray Ay20;
    Ay1 = jbyteArrayValue; Ay2 = jbyteArrayValue; Ay3 = jbyteArrayValue; Ay4 = jbyteArrayValue; Ay5 = jbyteArrayValue; Ay6 = jbyteArrayValue; Ay7 = jbyteArrayValue; Ay8 = jbyteArrayValue; Ay9 = jbyteArrayValue; Ay10 = jbyteArrayValue; Ay11 = jbyteArrayValue; Ay12 = jbyteArrayValue; Ay13 = jbyteArrayValue; Ay14 = jbyteArrayValue; Ay15 = jbyteArrayValue; Ay16 = jbyteArrayValue; Ay17 = jbyteArrayValue; Ay18 = jbyteArrayValue; Ay19 = jbyteArrayValue; Ay20 = jbyteArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00340_nativemethod (env, instance, Ay1, Ay2, Ay3, Ay4, Ay5, Ay6, Ay7, Ay8, Ay9, Ay10, Ay11, Ay12, Ay13, Ay14, Ay15, Ay16, Ay17, Ay18, Ay19, Ay20);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00341_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[341 - 1];

    jbyte y1;
    y1 = 'a';

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, y1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00341_run
(JNIEnv *env, jobject instance) {
    jbyte y1;
    y1 = 'a';

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00341_nativemethod (env, instance, y1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00342_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[342 - 1];

    jbyte y1; jbyte y2;
    y1 = 'a'; y2 = 'a';

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, y1, y2);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00342_run
(JNIEnv *env, jobject instance) {
    jbyte y1; jbyte y2;
    y1 = 'a'; y2 = 'a';

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00342_nativemethod (env, instance, y1, y2);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00343_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[343 - 1];

    jbyte y1; jbyte y2; jbyte y3;
    y1 = 'a'; y2 = 'a'; y3 = 'a';

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, y1, y2, y3);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00343_run
(JNIEnv *env, jobject instance) {
    jbyte y1; jbyte y2; jbyte y3;
    y1 = 'a'; y2 = 'a'; y3 = 'a';

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00343_nativemethod (env, instance, y1, y2, y3);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00344_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[344 - 1];

    jbyte y1; jbyte y2; jbyte y3; jbyte y4;
    y1 = 'a'; y2 = 'a'; y3 = 'a'; y4 = 'a';

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, y1, y2, y3, y4);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00344_run
(JNIEnv *env, jobject instance) {
    jbyte y1; jbyte y2; jbyte y3; jbyte y4;
    y1 = 'a'; y2 = 'a'; y3 = 'a'; y4 = 'a';

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00344_nativemethod (env, instance, y1, y2, y3, y4);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00345_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[345 - 1];

    jbyte y1; jbyte y2; jbyte y3; jbyte y4; jbyte y5;
    y1 = 'a'; y2 = 'a'; y3 = 'a'; y4 = 'a'; y5 = 'a';

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, y1, y2, y3, y4, y5);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00345_run
(JNIEnv *env, jobject instance) {
    jbyte y1; jbyte y2; jbyte y3; jbyte y4; jbyte y5;
    y1 = 'a'; y2 = 'a'; y3 = 'a'; y4 = 'a'; y5 = 'a';

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00345_nativemethod (env, instance, y1, y2, y3, y4, y5);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00346_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[346 - 1];

    jbyte y1; jbyte y2; jbyte y3; jbyte y4; jbyte y5; jbyte y6;
    y1 = 'a'; y2 = 'a'; y3 = 'a'; y4 = 'a'; y5 = 'a'; y6 = 'a';

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, y1, y2, y3, y4, y5, y6);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00346_run
(JNIEnv *env, jobject instance) {
    jbyte y1; jbyte y2; jbyte y3; jbyte y4; jbyte y5; jbyte y6;
    y1 = 'a'; y2 = 'a'; y3 = 'a'; y4 = 'a'; y5 = 'a'; y6 = 'a';

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00346_nativemethod (env, instance, y1, y2, y3, y4, y5, y6);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00347_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[347 - 1];

    jbyte y1; jbyte y2; jbyte y3; jbyte y4; jbyte y5; jbyte y6; jbyte y7;
    y1 = 'a'; y2 = 'a'; y3 = 'a'; y4 = 'a'; y5 = 'a'; y6 = 'a'; y7 = 'a';

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, y1, y2, y3, y4, y5, y6, y7);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00347_run
(JNIEnv *env, jobject instance) {
    jbyte y1; jbyte y2; jbyte y3; jbyte y4; jbyte y5; jbyte y6; jbyte y7;
    y1 = 'a'; y2 = 'a'; y3 = 'a'; y4 = 'a'; y5 = 'a'; y6 = 'a'; y7 = 'a';

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00347_nativemethod (env, instance, y1, y2, y3, y4, y5, y6, y7);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00348_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[348 - 1];

    jbyte y1; jbyte y2; jbyte y3; jbyte y4; jbyte y5; jbyte y6; jbyte y7; jbyte y8;
    y1 = 'a'; y2 = 'a'; y3 = 'a'; y4 = 'a'; y5 = 'a'; y6 = 'a'; y7 = 'a'; y8 = 'a';

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, y1, y2, y3, y4, y5, y6, y7, y8);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00348_run
(JNIEnv *env, jobject instance) {
    jbyte y1; jbyte y2; jbyte y3; jbyte y4; jbyte y5; jbyte y6; jbyte y7; jbyte y8;
    y1 = 'a'; y2 = 'a'; y3 = 'a'; y4 = 'a'; y5 = 'a'; y6 = 'a'; y7 = 'a'; y8 = 'a';

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00348_nativemethod (env, instance, y1, y2, y3, y4, y5, y6, y7, y8);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00349_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[349 - 1];

    jbyte y1; jbyte y2; jbyte y3; jbyte y4; jbyte y5; jbyte y6; jbyte y7; jbyte y8; jbyte y9;
    y1 = 'a'; y2 = 'a'; y3 = 'a'; y4 = 'a'; y5 = 'a'; y6 = 'a'; y7 = 'a'; y8 = 'a'; y9 = 'a';

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, y1, y2, y3, y4, y5, y6, y7, y8, y9);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00349_run
(JNIEnv *env, jobject instance) {
    jbyte y1; jbyte y2; jbyte y3; jbyte y4; jbyte y5; jbyte y6; jbyte y7; jbyte y8; jbyte y9;
    y1 = 'a'; y2 = 'a'; y3 = 'a'; y4 = 'a'; y5 = 'a'; y6 = 'a'; y7 = 'a'; y8 = 'a'; y9 = 'a';

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00349_nativemethod (env, instance, y1, y2, y3, y4, y5, y6, y7, y8, y9);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00350_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[350 - 1];

    jbyte y1; jbyte y2; jbyte y3; jbyte y4; jbyte y5; jbyte y6; jbyte y7; jbyte y8; jbyte y9; jbyte y10;
    y1 = 'a'; y2 = 'a'; y3 = 'a'; y4 = 'a'; y5 = 'a'; y6 = 'a'; y7 = 'a'; y8 = 'a'; y9 = 'a'; y10 = 'a';

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, y1, y2, y3, y4, y5, y6, y7, y8, y9, y10);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00350_run
(JNIEnv *env, jobject instance) {
    jbyte y1; jbyte y2; jbyte y3; jbyte y4; jbyte y5; jbyte y6; jbyte y7; jbyte y8; jbyte y9; jbyte y10;
    y1 = 'a'; y2 = 'a'; y3 = 'a'; y4 = 'a'; y5 = 'a'; y6 = 'a'; y7 = 'a'; y8 = 'a'; y9 = 'a'; y10 = 'a';

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00350_nativemethod (env, instance, y1, y2, y3, y4, y5, y6, y7, y8, y9, y10);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00351_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[351 - 1];

    jbyte y1; jbyte y2; jbyte y3; jbyte y4; jbyte y5; jbyte y6; jbyte y7; jbyte y8; jbyte y9; jbyte y10; jbyte y11;
    y1 = 'a'; y2 = 'a'; y3 = 'a'; y4 = 'a'; y5 = 'a'; y6 = 'a'; y7 = 'a'; y8 = 'a'; y9 = 'a'; y10 = 'a'; y11 = 'a';

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, y1, y2, y3, y4, y5, y6, y7, y8, y9, y10, y11);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00351_run
(JNIEnv *env, jobject instance) {
    jbyte y1; jbyte y2; jbyte y3; jbyte y4; jbyte y5; jbyte y6; jbyte y7; jbyte y8; jbyte y9; jbyte y10; jbyte y11;
    y1 = 'a'; y2 = 'a'; y3 = 'a'; y4 = 'a'; y5 = 'a'; y6 = 'a'; y7 = 'a'; y8 = 'a'; y9 = 'a'; y10 = 'a'; y11 = 'a';

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00351_nativemethod (env, instance, y1, y2, y3, y4, y5, y6, y7, y8, y9, y10, y11);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00352_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[352 - 1];

    jbyte y1; jbyte y2; jbyte y3; jbyte y4; jbyte y5; jbyte y6; jbyte y7; jbyte y8; jbyte y9; jbyte y10; jbyte y11; jbyte y12;
    y1 = 'a'; y2 = 'a'; y3 = 'a'; y4 = 'a'; y5 = 'a'; y6 = 'a'; y7 = 'a'; y8 = 'a'; y9 = 'a'; y10 = 'a'; y11 = 'a'; y12 = 'a';

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, y1, y2, y3, y4, y5, y6, y7, y8, y9, y10, y11, y12);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00352_run
(JNIEnv *env, jobject instance) {
    jbyte y1; jbyte y2; jbyte y3; jbyte y4; jbyte y5; jbyte y6; jbyte y7; jbyte y8; jbyte y9; jbyte y10; jbyte y11; jbyte y12;
    y1 = 'a'; y2 = 'a'; y3 = 'a'; y4 = 'a'; y5 = 'a'; y6 = 'a'; y7 = 'a'; y8 = 'a'; y9 = 'a'; y10 = 'a'; y11 = 'a'; y12 = 'a';

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00352_nativemethod (env, instance, y1, y2, y3, y4, y5, y6, y7, y8, y9, y10, y11, y12);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00353_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[353 - 1];

    jbyte y1; jbyte y2; jbyte y3; jbyte y4; jbyte y5; jbyte y6; jbyte y7; jbyte y8; jbyte y9; jbyte y10; jbyte y11; jbyte y12; jbyte y13;
    y1 = 'a'; y2 = 'a'; y3 = 'a'; y4 = 'a'; y5 = 'a'; y6 = 'a'; y7 = 'a'; y8 = 'a'; y9 = 'a'; y10 = 'a'; y11 = 'a'; y12 = 'a'; y13 = 'a';

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, y1, y2, y3, y4, y5, y6, y7, y8, y9, y10, y11, y12, y13);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00353_run
(JNIEnv *env, jobject instance) {
    jbyte y1; jbyte y2; jbyte y3; jbyte y4; jbyte y5; jbyte y6; jbyte y7; jbyte y8; jbyte y9; jbyte y10; jbyte y11; jbyte y12; jbyte y13;
    y1 = 'a'; y2 = 'a'; y3 = 'a'; y4 = 'a'; y5 = 'a'; y6 = 'a'; y7 = 'a'; y8 = 'a'; y9 = 'a'; y10 = 'a'; y11 = 'a'; y12 = 'a'; y13 = 'a';

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00353_nativemethod (env, instance, y1, y2, y3, y4, y5, y6, y7, y8, y9, y10, y11, y12, y13);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00354_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[354 - 1];

    jbyte y1; jbyte y2; jbyte y3; jbyte y4; jbyte y5; jbyte y6; jbyte y7; jbyte y8; jbyte y9; jbyte y10; jbyte y11; jbyte y12; jbyte y13; jbyte y14;
    y1 = 'a'; y2 = 'a'; y3 = 'a'; y4 = 'a'; y5 = 'a'; y6 = 'a'; y7 = 'a'; y8 = 'a'; y9 = 'a'; y10 = 'a'; y11 = 'a'; y12 = 'a'; y13 = 'a'; y14 = 'a';

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, y1, y2, y3, y4, y5, y6, y7, y8, y9, y10, y11, y12, y13, y14);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00354_run
(JNIEnv *env, jobject instance) {
    jbyte y1; jbyte y2; jbyte y3; jbyte y4; jbyte y5; jbyte y6; jbyte y7; jbyte y8; jbyte y9; jbyte y10; jbyte y11; jbyte y12; jbyte y13; jbyte y14;
    y1 = 'a'; y2 = 'a'; y3 = 'a'; y4 = 'a'; y5 = 'a'; y6 = 'a'; y7 = 'a'; y8 = 'a'; y9 = 'a'; y10 = 'a'; y11 = 'a'; y12 = 'a'; y13 = 'a'; y14 = 'a';

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00354_nativemethod (env, instance, y1, y2, y3, y4, y5, y6, y7, y8, y9, y10, y11, y12, y13, y14);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00355_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[355 - 1];

    jbyte y1; jbyte y2; jbyte y3; jbyte y4; jbyte y5; jbyte y6; jbyte y7; jbyte y8; jbyte y9; jbyte y10; jbyte y11; jbyte y12; jbyte y13; jbyte y14; jbyte y15;
    y1 = 'a'; y2 = 'a'; y3 = 'a'; y4 = 'a'; y5 = 'a'; y6 = 'a'; y7 = 'a'; y8 = 'a'; y9 = 'a'; y10 = 'a'; y11 = 'a'; y12 = 'a'; y13 = 'a'; y14 = 'a'; y15 = 'a';

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, y1, y2, y3, y4, y5, y6, y7, y8, y9, y10, y11, y12, y13, y14, y15);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00355_run
(JNIEnv *env, jobject instance) {
    jbyte y1; jbyte y2; jbyte y3; jbyte y4; jbyte y5; jbyte y6; jbyte y7; jbyte y8; jbyte y9; jbyte y10; jbyte y11; jbyte y12; jbyte y13; jbyte y14; jbyte y15;
    y1 = 'a'; y2 = 'a'; y3 = 'a'; y4 = 'a'; y5 = 'a'; y6 = 'a'; y7 = 'a'; y8 = 'a'; y9 = 'a'; y10 = 'a'; y11 = 'a'; y12 = 'a'; y13 = 'a'; y14 = 'a'; y15 = 'a';

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00355_nativemethod (env, instance, y1, y2, y3, y4, y5, y6, y7, y8, y9, y10, y11, y12, y13, y14, y15);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00356_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[356 - 1];

    jbyte y1; jbyte y2; jbyte y3; jbyte y4; jbyte y5; jbyte y6; jbyte y7; jbyte y8; jbyte y9; jbyte y10; jbyte y11; jbyte y12; jbyte y13; jbyte y14; jbyte y15; jbyte y16;
    y1 = 'a'; y2 = 'a'; y3 = 'a'; y4 = 'a'; y5 = 'a'; y6 = 'a'; y7 = 'a'; y8 = 'a'; y9 = 'a'; y10 = 'a'; y11 = 'a'; y12 = 'a'; y13 = 'a'; y14 = 'a'; y15 = 'a'; y16 = 'a';

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, y1, y2, y3, y4, y5, y6, y7, y8, y9, y10, y11, y12, y13, y14, y15, y16);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00356_run
(JNIEnv *env, jobject instance) {
    jbyte y1; jbyte y2; jbyte y3; jbyte y4; jbyte y5; jbyte y6; jbyte y7; jbyte y8; jbyte y9; jbyte y10; jbyte y11; jbyte y12; jbyte y13; jbyte y14; jbyte y15; jbyte y16;
    y1 = 'a'; y2 = 'a'; y3 = 'a'; y4 = 'a'; y5 = 'a'; y6 = 'a'; y7 = 'a'; y8 = 'a'; y9 = 'a'; y10 = 'a'; y11 = 'a'; y12 = 'a'; y13 = 'a'; y14 = 'a'; y15 = 'a'; y16 = 'a';

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00356_nativemethod (env, instance, y1, y2, y3, y4, y5, y6, y7, y8, y9, y10, y11, y12, y13, y14, y15, y16);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00357_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[357 - 1];

    jbyte y1; jbyte y2; jbyte y3; jbyte y4; jbyte y5; jbyte y6; jbyte y7; jbyte y8; jbyte y9; jbyte y10; jbyte y11; jbyte y12; jbyte y13; jbyte y14; jbyte y15; jbyte y16; jbyte y17;
    y1 = 'a'; y2 = 'a'; y3 = 'a'; y4 = 'a'; y5 = 'a'; y6 = 'a'; y7 = 'a'; y8 = 'a'; y9 = 'a'; y10 = 'a'; y11 = 'a'; y12 = 'a'; y13 = 'a'; y14 = 'a'; y15 = 'a'; y16 = 'a'; y17 = 'a';

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, y1, y2, y3, y4, y5, y6, y7, y8, y9, y10, y11, y12, y13, y14, y15, y16, y17);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00357_run
(JNIEnv *env, jobject instance) {
    jbyte y1; jbyte y2; jbyte y3; jbyte y4; jbyte y5; jbyte y6; jbyte y7; jbyte y8; jbyte y9; jbyte y10; jbyte y11; jbyte y12; jbyte y13; jbyte y14; jbyte y15; jbyte y16; jbyte y17;
    y1 = 'a'; y2 = 'a'; y3 = 'a'; y4 = 'a'; y5 = 'a'; y6 = 'a'; y7 = 'a'; y8 = 'a'; y9 = 'a'; y10 = 'a'; y11 = 'a'; y12 = 'a'; y13 = 'a'; y14 = 'a'; y15 = 'a'; y16 = 'a'; y17 = 'a';

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00357_nativemethod (env, instance, y1, y2, y3, y4, y5, y6, y7, y8, y9, y10, y11, y12, y13, y14, y15, y16, y17);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00358_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[358 - 1];

    jbyte y1; jbyte y2; jbyte y3; jbyte y4; jbyte y5; jbyte y6; jbyte y7; jbyte y8; jbyte y9; jbyte y10; jbyte y11; jbyte y12; jbyte y13; jbyte y14; jbyte y15; jbyte y16; jbyte y17; jbyte y18;
    y1 = 'a'; y2 = 'a'; y3 = 'a'; y4 = 'a'; y5 = 'a'; y6 = 'a'; y7 = 'a'; y8 = 'a'; y9 = 'a'; y10 = 'a'; y11 = 'a'; y12 = 'a'; y13 = 'a'; y14 = 'a'; y15 = 'a'; y16 = 'a'; y17 = 'a'; y18 = 'a';

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, y1, y2, y3, y4, y5, y6, y7, y8, y9, y10, y11, y12, y13, y14, y15, y16, y17, y18);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00358_run
(JNIEnv *env, jobject instance) {
    jbyte y1; jbyte y2; jbyte y3; jbyte y4; jbyte y5; jbyte y6; jbyte y7; jbyte y8; jbyte y9; jbyte y10; jbyte y11; jbyte y12; jbyte y13; jbyte y14; jbyte y15; jbyte y16; jbyte y17; jbyte y18;
    y1 = 'a'; y2 = 'a'; y3 = 'a'; y4 = 'a'; y5 = 'a'; y6 = 'a'; y7 = 'a'; y8 = 'a'; y9 = 'a'; y10 = 'a'; y11 = 'a'; y12 = 'a'; y13 = 'a'; y14 = 'a'; y15 = 'a'; y16 = 'a'; y17 = 'a'; y18 = 'a';

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00358_nativemethod (env, instance, y1, y2, y3, y4, y5, y6, y7, y8, y9, y10, y11, y12, y13, y14, y15, y16, y17, y18);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00359_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[359 - 1];

    jbyte y1; jbyte y2; jbyte y3; jbyte y4; jbyte y5; jbyte y6; jbyte y7; jbyte y8; jbyte y9; jbyte y10; jbyte y11; jbyte y12; jbyte y13; jbyte y14; jbyte y15; jbyte y16; jbyte y17; jbyte y18; jbyte y19;
    y1 = 'a'; y2 = 'a'; y3 = 'a'; y4 = 'a'; y5 = 'a'; y6 = 'a'; y7 = 'a'; y8 = 'a'; y9 = 'a'; y10 = 'a'; y11 = 'a'; y12 = 'a'; y13 = 'a'; y14 = 'a'; y15 = 'a'; y16 = 'a'; y17 = 'a'; y18 = 'a'; y19 = 'a';

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, y1, y2, y3, y4, y5, y6, y7, y8, y9, y10, y11, y12, y13, y14, y15, y16, y17, y18, y19);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00359_run
(JNIEnv *env, jobject instance) {
    jbyte y1; jbyte y2; jbyte y3; jbyte y4; jbyte y5; jbyte y6; jbyte y7; jbyte y8; jbyte y9; jbyte y10; jbyte y11; jbyte y12; jbyte y13; jbyte y14; jbyte y15; jbyte y16; jbyte y17; jbyte y18; jbyte y19;
    y1 = 'a'; y2 = 'a'; y3 = 'a'; y4 = 'a'; y5 = 'a'; y6 = 'a'; y7 = 'a'; y8 = 'a'; y9 = 'a'; y10 = 'a'; y11 = 'a'; y12 = 'a'; y13 = 'a'; y14 = 'a'; y15 = 'a'; y16 = 'a'; y17 = 'a'; y18 = 'a'; y19 = 'a';

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00359_nativemethod (env, instance, y1, y2, y3, y4, y5, y6, y7, y8, y9, y10, y11, y12, y13, y14, y15, y16, y17, y18, y19);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00360_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[360 - 1];

    jbyte y1; jbyte y2; jbyte y3; jbyte y4; jbyte y5; jbyte y6; jbyte y7; jbyte y8; jbyte y9; jbyte y10; jbyte y11; jbyte y12; jbyte y13; jbyte y14; jbyte y15; jbyte y16; jbyte y17; jbyte y18; jbyte y19; jbyte y20;
    y1 = 'a'; y2 = 'a'; y3 = 'a'; y4 = 'a'; y5 = 'a'; y6 = 'a'; y7 = 'a'; y8 = 'a'; y9 = 'a'; y10 = 'a'; y11 = 'a'; y12 = 'a'; y13 = 'a'; y14 = 'a'; y15 = 'a'; y16 = 'a'; y17 = 'a'; y18 = 'a'; y19 = 'a'; y20 = 'a';

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, y1, y2, y3, y4, y5, y6, y7, y8, y9, y10, y11, y12, y13, y14, y15, y16, y17, y18, y19, y20);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00360_run
(JNIEnv *env, jobject instance) {
    jbyte y1; jbyte y2; jbyte y3; jbyte y4; jbyte y5; jbyte y6; jbyte y7; jbyte y8; jbyte y9; jbyte y10; jbyte y11; jbyte y12; jbyte y13; jbyte y14; jbyte y15; jbyte y16; jbyte y17; jbyte y18; jbyte y19; jbyte y20;
    y1 = 'a'; y2 = 'a'; y3 = 'a'; y4 = 'a'; y5 = 'a'; y6 = 'a'; y7 = 'a'; y8 = 'a'; y9 = 'a'; y10 = 'a'; y11 = 'a'; y12 = 'a'; y13 = 'a'; y14 = 'a'; y15 = 'a'; y16 = 'a'; y17 = 'a'; y18 = 'a'; y19 = 'a'; y20 = 'a';

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00360_nativemethod (env, instance, y1, y2, y3, y4, y5, y6, y7, y8, y9, y10, y11, y12, y13, y14, y15, y16, y17, y18, y19, y20);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00361_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[361 - 1];

    jshortArray As1;
    As1 = jshortArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, As1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00361_run
(JNIEnv *env, jobject instance) {
    jshortArray As1;
    As1 = jshortArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00361_nativemethod (env, instance, As1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00362_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[362 - 1];

    jshortArray As1; jshortArray As2;
    As1 = jshortArrayValue; As2 = jshortArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, As1, As2);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00362_run
(JNIEnv *env, jobject instance) {
    jshortArray As1; jshortArray As2;
    As1 = jshortArrayValue; As2 = jshortArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00362_nativemethod (env, instance, As1, As2);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00363_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[363 - 1];

    jshortArray As1; jshortArray As2; jshortArray As3;
    As1 = jshortArrayValue; As2 = jshortArrayValue; As3 = jshortArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, As1, As2, As3);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00363_run
(JNIEnv *env, jobject instance) {
    jshortArray As1; jshortArray As2; jshortArray As3;
    As1 = jshortArrayValue; As2 = jshortArrayValue; As3 = jshortArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00363_nativemethod (env, instance, As1, As2, As3);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00364_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[364 - 1];

    jshortArray As1; jshortArray As2; jshortArray As3; jshortArray As4;
    As1 = jshortArrayValue; As2 = jshortArrayValue; As3 = jshortArrayValue; As4 = jshortArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, As1, As2, As3, As4);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00364_run
(JNIEnv *env, jobject instance) {
    jshortArray As1; jshortArray As2; jshortArray As3; jshortArray As4;
    As1 = jshortArrayValue; As2 = jshortArrayValue; As3 = jshortArrayValue; As4 = jshortArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00364_nativemethod (env, instance, As1, As2, As3, As4);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00365_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[365 - 1];

    jshortArray As1; jshortArray As2; jshortArray As3; jshortArray As4; jshortArray As5;
    As1 = jshortArrayValue; As2 = jshortArrayValue; As3 = jshortArrayValue; As4 = jshortArrayValue; As5 = jshortArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, As1, As2, As3, As4, As5);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00365_run
(JNIEnv *env, jobject instance) {
    jshortArray As1; jshortArray As2; jshortArray As3; jshortArray As4; jshortArray As5;
    As1 = jshortArrayValue; As2 = jshortArrayValue; As3 = jshortArrayValue; As4 = jshortArrayValue; As5 = jshortArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00365_nativemethod (env, instance, As1, As2, As3, As4, As5);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00366_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[366 - 1];

    jshortArray As1; jshortArray As2; jshortArray As3; jshortArray As4; jshortArray As5; jshortArray As6;
    As1 = jshortArrayValue; As2 = jshortArrayValue; As3 = jshortArrayValue; As4 = jshortArrayValue; As5 = jshortArrayValue; As6 = jshortArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, As1, As2, As3, As4, As5, As6);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00366_run
(JNIEnv *env, jobject instance) {
    jshortArray As1; jshortArray As2; jshortArray As3; jshortArray As4; jshortArray As5; jshortArray As6;
    As1 = jshortArrayValue; As2 = jshortArrayValue; As3 = jshortArrayValue; As4 = jshortArrayValue; As5 = jshortArrayValue; As6 = jshortArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00366_nativemethod (env, instance, As1, As2, As3, As4, As5, As6);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00367_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[367 - 1];

    jshortArray As1; jshortArray As2; jshortArray As3; jshortArray As4; jshortArray As5; jshortArray As6; jshortArray As7;
    As1 = jshortArrayValue; As2 = jshortArrayValue; As3 = jshortArrayValue; As4 = jshortArrayValue; As5 = jshortArrayValue; As6 = jshortArrayValue; As7 = jshortArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, As1, As2, As3, As4, As5, As6, As7);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00367_run
(JNIEnv *env, jobject instance) {
    jshortArray As1; jshortArray As2; jshortArray As3; jshortArray As4; jshortArray As5; jshortArray As6; jshortArray As7;
    As1 = jshortArrayValue; As2 = jshortArrayValue; As3 = jshortArrayValue; As4 = jshortArrayValue; As5 = jshortArrayValue; As6 = jshortArrayValue; As7 = jshortArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00367_nativemethod (env, instance, As1, As2, As3, As4, As5, As6, As7);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00368_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[368 - 1];

    jshortArray As1; jshortArray As2; jshortArray As3; jshortArray As4; jshortArray As5; jshortArray As6; jshortArray As7; jshortArray As8;
    As1 = jshortArrayValue; As2 = jshortArrayValue; As3 = jshortArrayValue; As4 = jshortArrayValue; As5 = jshortArrayValue; As6 = jshortArrayValue; As7 = jshortArrayValue; As8 = jshortArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, As1, As2, As3, As4, As5, As6, As7, As8);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00368_run
(JNIEnv *env, jobject instance) {
    jshortArray As1; jshortArray As2; jshortArray As3; jshortArray As4; jshortArray As5; jshortArray As6; jshortArray As7; jshortArray As8;
    As1 = jshortArrayValue; As2 = jshortArrayValue; As3 = jshortArrayValue; As4 = jshortArrayValue; As5 = jshortArrayValue; As6 = jshortArrayValue; As7 = jshortArrayValue; As8 = jshortArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00368_nativemethod (env, instance, As1, As2, As3, As4, As5, As6, As7, As8);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00369_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[369 - 1];

    jshortArray As1; jshortArray As2; jshortArray As3; jshortArray As4; jshortArray As5; jshortArray As6; jshortArray As7; jshortArray As8; jshortArray As9;
    As1 = jshortArrayValue; As2 = jshortArrayValue; As3 = jshortArrayValue; As4 = jshortArrayValue; As5 = jshortArrayValue; As6 = jshortArrayValue; As7 = jshortArrayValue; As8 = jshortArrayValue; As9 = jshortArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, As1, As2, As3, As4, As5, As6, As7, As8, As9);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00369_run
(JNIEnv *env, jobject instance) {
    jshortArray As1; jshortArray As2; jshortArray As3; jshortArray As4; jshortArray As5; jshortArray As6; jshortArray As7; jshortArray As8; jshortArray As9;
    As1 = jshortArrayValue; As2 = jshortArrayValue; As3 = jshortArrayValue; As4 = jshortArrayValue; As5 = jshortArrayValue; As6 = jshortArrayValue; As7 = jshortArrayValue; As8 = jshortArrayValue; As9 = jshortArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00369_nativemethod (env, instance, As1, As2, As3, As4, As5, As6, As7, As8, As9);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00370_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[370 - 1];

    jshortArray As1; jshortArray As2; jshortArray As3; jshortArray As4; jshortArray As5; jshortArray As6; jshortArray As7; jshortArray As8; jshortArray As9; jshortArray As10;
    As1 = jshortArrayValue; As2 = jshortArrayValue; As3 = jshortArrayValue; As4 = jshortArrayValue; As5 = jshortArrayValue; As6 = jshortArrayValue; As7 = jshortArrayValue; As8 = jshortArrayValue; As9 = jshortArrayValue; As10 = jshortArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, As1, As2, As3, As4, As5, As6, As7, As8, As9, As10);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00370_run
(JNIEnv *env, jobject instance) {
    jshortArray As1; jshortArray As2; jshortArray As3; jshortArray As4; jshortArray As5; jshortArray As6; jshortArray As7; jshortArray As8; jshortArray As9; jshortArray As10;
    As1 = jshortArrayValue; As2 = jshortArrayValue; As3 = jshortArrayValue; As4 = jshortArrayValue; As5 = jshortArrayValue; As6 = jshortArrayValue; As7 = jshortArrayValue; As8 = jshortArrayValue; As9 = jshortArrayValue; As10 = jshortArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00370_nativemethod (env, instance, As1, As2, As3, As4, As5, As6, As7, As8, As9, As10);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00371_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[371 - 1];

    jshortArray As1; jshortArray As2; jshortArray As3; jshortArray As4; jshortArray As5; jshortArray As6; jshortArray As7; jshortArray As8; jshortArray As9; jshortArray As10; jshortArray As11;
    As1 = jshortArrayValue; As2 = jshortArrayValue; As3 = jshortArrayValue; As4 = jshortArrayValue; As5 = jshortArrayValue; As6 = jshortArrayValue; As7 = jshortArrayValue; As8 = jshortArrayValue; As9 = jshortArrayValue; As10 = jshortArrayValue; As11 = jshortArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, As1, As2, As3, As4, As5, As6, As7, As8, As9, As10, As11);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00371_run
(JNIEnv *env, jobject instance) {
    jshortArray As1; jshortArray As2; jshortArray As3; jshortArray As4; jshortArray As5; jshortArray As6; jshortArray As7; jshortArray As8; jshortArray As9; jshortArray As10; jshortArray As11;
    As1 = jshortArrayValue; As2 = jshortArrayValue; As3 = jshortArrayValue; As4 = jshortArrayValue; As5 = jshortArrayValue; As6 = jshortArrayValue; As7 = jshortArrayValue; As8 = jshortArrayValue; As9 = jshortArrayValue; As10 = jshortArrayValue; As11 = jshortArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00371_nativemethod (env, instance, As1, As2, As3, As4, As5, As6, As7, As8, As9, As10, As11);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00372_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[372 - 1];

    jshortArray As1; jshortArray As2; jshortArray As3; jshortArray As4; jshortArray As5; jshortArray As6; jshortArray As7; jshortArray As8; jshortArray As9; jshortArray As10; jshortArray As11; jshortArray As12;
    As1 = jshortArrayValue; As2 = jshortArrayValue; As3 = jshortArrayValue; As4 = jshortArrayValue; As5 = jshortArrayValue; As6 = jshortArrayValue; As7 = jshortArrayValue; As8 = jshortArrayValue; As9 = jshortArrayValue; As10 = jshortArrayValue; As11 = jshortArrayValue; As12 = jshortArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, As1, As2, As3, As4, As5, As6, As7, As8, As9, As10, As11, As12);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00372_run
(JNIEnv *env, jobject instance) {
    jshortArray As1; jshortArray As2; jshortArray As3; jshortArray As4; jshortArray As5; jshortArray As6; jshortArray As7; jshortArray As8; jshortArray As9; jshortArray As10; jshortArray As11; jshortArray As12;
    As1 = jshortArrayValue; As2 = jshortArrayValue; As3 = jshortArrayValue; As4 = jshortArrayValue; As5 = jshortArrayValue; As6 = jshortArrayValue; As7 = jshortArrayValue; As8 = jshortArrayValue; As9 = jshortArrayValue; As10 = jshortArrayValue; As11 = jshortArrayValue; As12 = jshortArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00372_nativemethod (env, instance, As1, As2, As3, As4, As5, As6, As7, As8, As9, As10, As11, As12);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00373_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[373 - 1];

    jshortArray As1; jshortArray As2; jshortArray As3; jshortArray As4; jshortArray As5; jshortArray As6; jshortArray As7; jshortArray As8; jshortArray As9; jshortArray As10; jshortArray As11; jshortArray As12; jshortArray As13;
    As1 = jshortArrayValue; As2 = jshortArrayValue; As3 = jshortArrayValue; As4 = jshortArrayValue; As5 = jshortArrayValue; As6 = jshortArrayValue; As7 = jshortArrayValue; As8 = jshortArrayValue; As9 = jshortArrayValue; As10 = jshortArrayValue; As11 = jshortArrayValue; As12 = jshortArrayValue; As13 = jshortArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, As1, As2, As3, As4, As5, As6, As7, As8, As9, As10, As11, As12, As13);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00373_run
(JNIEnv *env, jobject instance) {
    jshortArray As1; jshortArray As2; jshortArray As3; jshortArray As4; jshortArray As5; jshortArray As6; jshortArray As7; jshortArray As8; jshortArray As9; jshortArray As10; jshortArray As11; jshortArray As12; jshortArray As13;
    As1 = jshortArrayValue; As2 = jshortArrayValue; As3 = jshortArrayValue; As4 = jshortArrayValue; As5 = jshortArrayValue; As6 = jshortArrayValue; As7 = jshortArrayValue; As8 = jshortArrayValue; As9 = jshortArrayValue; As10 = jshortArrayValue; As11 = jshortArrayValue; As12 = jshortArrayValue; As13 = jshortArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00373_nativemethod (env, instance, As1, As2, As3, As4, As5, As6, As7, As8, As9, As10, As11, As12, As13);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00374_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[374 - 1];

    jshortArray As1; jshortArray As2; jshortArray As3; jshortArray As4; jshortArray As5; jshortArray As6; jshortArray As7; jshortArray As8; jshortArray As9; jshortArray As10; jshortArray As11; jshortArray As12; jshortArray As13; jshortArray As14;
    As1 = jshortArrayValue; As2 = jshortArrayValue; As3 = jshortArrayValue; As4 = jshortArrayValue; As5 = jshortArrayValue; As6 = jshortArrayValue; As7 = jshortArrayValue; As8 = jshortArrayValue; As9 = jshortArrayValue; As10 = jshortArrayValue; As11 = jshortArrayValue; As12 = jshortArrayValue; As13 = jshortArrayValue; As14 = jshortArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, As1, As2, As3, As4, As5, As6, As7, As8, As9, As10, As11, As12, As13, As14);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00374_run
(JNIEnv *env, jobject instance) {
    jshortArray As1; jshortArray As2; jshortArray As3; jshortArray As4; jshortArray As5; jshortArray As6; jshortArray As7; jshortArray As8; jshortArray As9; jshortArray As10; jshortArray As11; jshortArray As12; jshortArray As13; jshortArray As14;
    As1 = jshortArrayValue; As2 = jshortArrayValue; As3 = jshortArrayValue; As4 = jshortArrayValue; As5 = jshortArrayValue; As6 = jshortArrayValue; As7 = jshortArrayValue; As8 = jshortArrayValue; As9 = jshortArrayValue; As10 = jshortArrayValue; As11 = jshortArrayValue; As12 = jshortArrayValue; As13 = jshortArrayValue; As14 = jshortArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00374_nativemethod (env, instance, As1, As2, As3, As4, As5, As6, As7, As8, As9, As10, As11, As12, As13, As14);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00375_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[375 - 1];

    jshortArray As1; jshortArray As2; jshortArray As3; jshortArray As4; jshortArray As5; jshortArray As6; jshortArray As7; jshortArray As8; jshortArray As9; jshortArray As10; jshortArray As11; jshortArray As12; jshortArray As13; jshortArray As14; jshortArray As15;
    As1 = jshortArrayValue; As2 = jshortArrayValue; As3 = jshortArrayValue; As4 = jshortArrayValue; As5 = jshortArrayValue; As6 = jshortArrayValue; As7 = jshortArrayValue; As8 = jshortArrayValue; As9 = jshortArrayValue; As10 = jshortArrayValue; As11 = jshortArrayValue; As12 = jshortArrayValue; As13 = jshortArrayValue; As14 = jshortArrayValue; As15 = jshortArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, As1, As2, As3, As4, As5, As6, As7, As8, As9, As10, As11, As12, As13, As14, As15);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00375_run
(JNIEnv *env, jobject instance) {
    jshortArray As1; jshortArray As2; jshortArray As3; jshortArray As4; jshortArray As5; jshortArray As6; jshortArray As7; jshortArray As8; jshortArray As9; jshortArray As10; jshortArray As11; jshortArray As12; jshortArray As13; jshortArray As14; jshortArray As15;
    As1 = jshortArrayValue; As2 = jshortArrayValue; As3 = jshortArrayValue; As4 = jshortArrayValue; As5 = jshortArrayValue; As6 = jshortArrayValue; As7 = jshortArrayValue; As8 = jshortArrayValue; As9 = jshortArrayValue; As10 = jshortArrayValue; As11 = jshortArrayValue; As12 = jshortArrayValue; As13 = jshortArrayValue; As14 = jshortArrayValue; As15 = jshortArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00375_nativemethod (env, instance, As1, As2, As3, As4, As5, As6, As7, As8, As9, As10, As11, As12, As13, As14, As15);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00376_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[376 - 1];

    jshortArray As1; jshortArray As2; jshortArray As3; jshortArray As4; jshortArray As5; jshortArray As6; jshortArray As7; jshortArray As8; jshortArray As9; jshortArray As10; jshortArray As11; jshortArray As12; jshortArray As13; jshortArray As14; jshortArray As15; jshortArray As16;
    As1 = jshortArrayValue; As2 = jshortArrayValue; As3 = jshortArrayValue; As4 = jshortArrayValue; As5 = jshortArrayValue; As6 = jshortArrayValue; As7 = jshortArrayValue; As8 = jshortArrayValue; As9 = jshortArrayValue; As10 = jshortArrayValue; As11 = jshortArrayValue; As12 = jshortArrayValue; As13 = jshortArrayValue; As14 = jshortArrayValue; As15 = jshortArrayValue; As16 = jshortArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, As1, As2, As3, As4, As5, As6, As7, As8, As9, As10, As11, As12, As13, As14, As15, As16);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00376_run
(JNIEnv *env, jobject instance) {
    jshortArray As1; jshortArray As2; jshortArray As3; jshortArray As4; jshortArray As5; jshortArray As6; jshortArray As7; jshortArray As8; jshortArray As9; jshortArray As10; jshortArray As11; jshortArray As12; jshortArray As13; jshortArray As14; jshortArray As15; jshortArray As16;
    As1 = jshortArrayValue; As2 = jshortArrayValue; As3 = jshortArrayValue; As4 = jshortArrayValue; As5 = jshortArrayValue; As6 = jshortArrayValue; As7 = jshortArrayValue; As8 = jshortArrayValue; As9 = jshortArrayValue; As10 = jshortArrayValue; As11 = jshortArrayValue; As12 = jshortArrayValue; As13 = jshortArrayValue; As14 = jshortArrayValue; As15 = jshortArrayValue; As16 = jshortArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00376_nativemethod (env, instance, As1, As2, As3, As4, As5, As6, As7, As8, As9, As10, As11, As12, As13, As14, As15, As16);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00377_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[377 - 1];

    jshortArray As1; jshortArray As2; jshortArray As3; jshortArray As4; jshortArray As5; jshortArray As6; jshortArray As7; jshortArray As8; jshortArray As9; jshortArray As10; jshortArray As11; jshortArray As12; jshortArray As13; jshortArray As14; jshortArray As15; jshortArray As16; jshortArray As17;
    As1 = jshortArrayValue; As2 = jshortArrayValue; As3 = jshortArrayValue; As4 = jshortArrayValue; As5 = jshortArrayValue; As6 = jshortArrayValue; As7 = jshortArrayValue; As8 = jshortArrayValue; As9 = jshortArrayValue; As10 = jshortArrayValue; As11 = jshortArrayValue; As12 = jshortArrayValue; As13 = jshortArrayValue; As14 = jshortArrayValue; As15 = jshortArrayValue; As16 = jshortArrayValue; As17 = jshortArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, As1, As2, As3, As4, As5, As6, As7, As8, As9, As10, As11, As12, As13, As14, As15, As16, As17);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00377_run
(JNIEnv *env, jobject instance) {
    jshortArray As1; jshortArray As2; jshortArray As3; jshortArray As4; jshortArray As5; jshortArray As6; jshortArray As7; jshortArray As8; jshortArray As9; jshortArray As10; jshortArray As11; jshortArray As12; jshortArray As13; jshortArray As14; jshortArray As15; jshortArray As16; jshortArray As17;
    As1 = jshortArrayValue; As2 = jshortArrayValue; As3 = jshortArrayValue; As4 = jshortArrayValue; As5 = jshortArrayValue; As6 = jshortArrayValue; As7 = jshortArrayValue; As8 = jshortArrayValue; As9 = jshortArrayValue; As10 = jshortArrayValue; As11 = jshortArrayValue; As12 = jshortArrayValue; As13 = jshortArrayValue; As14 = jshortArrayValue; As15 = jshortArrayValue; As16 = jshortArrayValue; As17 = jshortArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00377_nativemethod (env, instance, As1, As2, As3, As4, As5, As6, As7, As8, As9, As10, As11, As12, As13, As14, As15, As16, As17);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00378_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[378 - 1];

    jshortArray As1; jshortArray As2; jshortArray As3; jshortArray As4; jshortArray As5; jshortArray As6; jshortArray As7; jshortArray As8; jshortArray As9; jshortArray As10; jshortArray As11; jshortArray As12; jshortArray As13; jshortArray As14; jshortArray As15; jshortArray As16; jshortArray As17; jshortArray As18;
    As1 = jshortArrayValue; As2 = jshortArrayValue; As3 = jshortArrayValue; As4 = jshortArrayValue; As5 = jshortArrayValue; As6 = jshortArrayValue; As7 = jshortArrayValue; As8 = jshortArrayValue; As9 = jshortArrayValue; As10 = jshortArrayValue; As11 = jshortArrayValue; As12 = jshortArrayValue; As13 = jshortArrayValue; As14 = jshortArrayValue; As15 = jshortArrayValue; As16 = jshortArrayValue; As17 = jshortArrayValue; As18 = jshortArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, As1, As2, As3, As4, As5, As6, As7, As8, As9, As10, As11, As12, As13, As14, As15, As16, As17, As18);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00378_run
(JNIEnv *env, jobject instance) {
    jshortArray As1; jshortArray As2; jshortArray As3; jshortArray As4; jshortArray As5; jshortArray As6; jshortArray As7; jshortArray As8; jshortArray As9; jshortArray As10; jshortArray As11; jshortArray As12; jshortArray As13; jshortArray As14; jshortArray As15; jshortArray As16; jshortArray As17; jshortArray As18;
    As1 = jshortArrayValue; As2 = jshortArrayValue; As3 = jshortArrayValue; As4 = jshortArrayValue; As5 = jshortArrayValue; As6 = jshortArrayValue; As7 = jshortArrayValue; As8 = jshortArrayValue; As9 = jshortArrayValue; As10 = jshortArrayValue; As11 = jshortArrayValue; As12 = jshortArrayValue; As13 = jshortArrayValue; As14 = jshortArrayValue; As15 = jshortArrayValue; As16 = jshortArrayValue; As17 = jshortArrayValue; As18 = jshortArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00378_nativemethod (env, instance, As1, As2, As3, As4, As5, As6, As7, As8, As9, As10, As11, As12, As13, As14, As15, As16, As17, As18);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00379_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[379 - 1];

    jshortArray As1; jshortArray As2; jshortArray As3; jshortArray As4; jshortArray As5; jshortArray As6; jshortArray As7; jshortArray As8; jshortArray As9; jshortArray As10; jshortArray As11; jshortArray As12; jshortArray As13; jshortArray As14; jshortArray As15; jshortArray As16; jshortArray As17; jshortArray As18; jshortArray As19;
    As1 = jshortArrayValue; As2 = jshortArrayValue; As3 = jshortArrayValue; As4 = jshortArrayValue; As5 = jshortArrayValue; As6 = jshortArrayValue; As7 = jshortArrayValue; As8 = jshortArrayValue; As9 = jshortArrayValue; As10 = jshortArrayValue; As11 = jshortArrayValue; As12 = jshortArrayValue; As13 = jshortArrayValue; As14 = jshortArrayValue; As15 = jshortArrayValue; As16 = jshortArrayValue; As17 = jshortArrayValue; As18 = jshortArrayValue; As19 = jshortArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, As1, As2, As3, As4, As5, As6, As7, As8, As9, As10, As11, As12, As13, As14, As15, As16, As17, As18, As19);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00379_run
(JNIEnv *env, jobject instance) {
    jshortArray As1; jshortArray As2; jshortArray As3; jshortArray As4; jshortArray As5; jshortArray As6; jshortArray As7; jshortArray As8; jshortArray As9; jshortArray As10; jshortArray As11; jshortArray As12; jshortArray As13; jshortArray As14; jshortArray As15; jshortArray As16; jshortArray As17; jshortArray As18; jshortArray As19;
    As1 = jshortArrayValue; As2 = jshortArrayValue; As3 = jshortArrayValue; As4 = jshortArrayValue; As5 = jshortArrayValue; As6 = jshortArrayValue; As7 = jshortArrayValue; As8 = jshortArrayValue; As9 = jshortArrayValue; As10 = jshortArrayValue; As11 = jshortArrayValue; As12 = jshortArrayValue; As13 = jshortArrayValue; As14 = jshortArrayValue; As15 = jshortArrayValue; As16 = jshortArrayValue; As17 = jshortArrayValue; As18 = jshortArrayValue; As19 = jshortArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00379_nativemethod (env, instance, As1, As2, As3, As4, As5, As6, As7, As8, As9, As10, As11, As12, As13, As14, As15, As16, As17, As18, As19);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00380_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[380 - 1];

    jshortArray As1; jshortArray As2; jshortArray As3; jshortArray As4; jshortArray As5; jshortArray As6; jshortArray As7; jshortArray As8; jshortArray As9; jshortArray As10; jshortArray As11; jshortArray As12; jshortArray As13; jshortArray As14; jshortArray As15; jshortArray As16; jshortArray As17; jshortArray As18; jshortArray As19; jshortArray As20;
    As1 = jshortArrayValue; As2 = jshortArrayValue; As3 = jshortArrayValue; As4 = jshortArrayValue; As5 = jshortArrayValue; As6 = jshortArrayValue; As7 = jshortArrayValue; As8 = jshortArrayValue; As9 = jshortArrayValue; As10 = jshortArrayValue; As11 = jshortArrayValue; As12 = jshortArrayValue; As13 = jshortArrayValue; As14 = jshortArrayValue; As15 = jshortArrayValue; As16 = jshortArrayValue; As17 = jshortArrayValue; As18 = jshortArrayValue; As19 = jshortArrayValue; As20 = jshortArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, As1, As2, As3, As4, As5, As6, As7, As8, As9, As10, As11, As12, As13, As14, As15, As16, As17, As18, As19, As20);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00380_run
(JNIEnv *env, jobject instance) {
    jshortArray As1; jshortArray As2; jshortArray As3; jshortArray As4; jshortArray As5; jshortArray As6; jshortArray As7; jshortArray As8; jshortArray As9; jshortArray As10; jshortArray As11; jshortArray As12; jshortArray As13; jshortArray As14; jshortArray As15; jshortArray As16; jshortArray As17; jshortArray As18; jshortArray As19; jshortArray As20;
    As1 = jshortArrayValue; As2 = jshortArrayValue; As3 = jshortArrayValue; As4 = jshortArrayValue; As5 = jshortArrayValue; As6 = jshortArrayValue; As7 = jshortArrayValue; As8 = jshortArrayValue; As9 = jshortArrayValue; As10 = jshortArrayValue; As11 = jshortArrayValue; As12 = jshortArrayValue; As13 = jshortArrayValue; As14 = jshortArrayValue; As15 = jshortArrayValue; As16 = jshortArrayValue; As17 = jshortArrayValue; As18 = jshortArrayValue; As19 = jshortArrayValue; As20 = jshortArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00380_nativemethod (env, instance, As1, As2, As3, As4, As5, As6, As7, As8, As9, As10, As11, As12, As13, As14, As15, As16, As17, As18, As19, As20);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00381_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[381 - 1];

    jclass C1;
    C1 = jclassValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, C1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00381_run
(JNIEnv *env, jobject instance) {
    jclass C1;
    C1 = jclassValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00381_nativemethod (env, instance, C1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00382_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[382 - 1];

    jclass C1; jclass C2;
    C1 = jclassValue; C2 = jclassValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, C1, C2);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00382_run
(JNIEnv *env, jobject instance) {
    jclass C1; jclass C2;
    C1 = jclassValue; C2 = jclassValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00382_nativemethod (env, instance, C1, C2);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00383_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[383 - 1];

    jclass C1; jclass C2; jclass C3;
    C1 = jclassValue; C2 = jclassValue; C3 = jclassValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, C1, C2, C3);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00383_run
(JNIEnv *env, jobject instance) {
    jclass C1; jclass C2; jclass C3;
    C1 = jclassValue; C2 = jclassValue; C3 = jclassValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00383_nativemethod (env, instance, C1, C2, C3);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00384_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[384 - 1];

    jclass C1; jclass C2; jclass C3; jclass C4;
    C1 = jclassValue; C2 = jclassValue; C3 = jclassValue; C4 = jclassValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, C1, C2, C3, C4);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00384_run
(JNIEnv *env, jobject instance) {
    jclass C1; jclass C2; jclass C3; jclass C4;
    C1 = jclassValue; C2 = jclassValue; C3 = jclassValue; C4 = jclassValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00384_nativemethod (env, instance, C1, C2, C3, C4);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00385_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[385 - 1];

    jclass C1; jclass C2; jclass C3; jclass C4; jclass C5;
    C1 = jclassValue; C2 = jclassValue; C3 = jclassValue; C4 = jclassValue; C5 = jclassValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, C1, C2, C3, C4, C5);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00385_run
(JNIEnv *env, jobject instance) {
    jclass C1; jclass C2; jclass C3; jclass C4; jclass C5;
    C1 = jclassValue; C2 = jclassValue; C3 = jclassValue; C4 = jclassValue; C5 = jclassValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00385_nativemethod (env, instance, C1, C2, C3, C4, C5);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00386_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[386 - 1];

    jclass C1; jclass C2; jclass C3; jclass C4; jclass C5; jclass C6;
    C1 = jclassValue; C2 = jclassValue; C3 = jclassValue; C4 = jclassValue; C5 = jclassValue; C6 = jclassValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, C1, C2, C3, C4, C5, C6);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00386_run
(JNIEnv *env, jobject instance) {
    jclass C1; jclass C2; jclass C3; jclass C4; jclass C5; jclass C6;
    C1 = jclassValue; C2 = jclassValue; C3 = jclassValue; C4 = jclassValue; C5 = jclassValue; C6 = jclassValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00386_nativemethod (env, instance, C1, C2, C3, C4, C5, C6);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00387_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[387 - 1];

    jclass C1; jclass C2; jclass C3; jclass C4; jclass C5; jclass C6; jclass C7;
    C1 = jclassValue; C2 = jclassValue; C3 = jclassValue; C4 = jclassValue; C5 = jclassValue; C6 = jclassValue; C7 = jclassValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, C1, C2, C3, C4, C5, C6, C7);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00387_run
(JNIEnv *env, jobject instance) {
    jclass C1; jclass C2; jclass C3; jclass C4; jclass C5; jclass C6; jclass C7;
    C1 = jclassValue; C2 = jclassValue; C3 = jclassValue; C4 = jclassValue; C5 = jclassValue; C6 = jclassValue; C7 = jclassValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00387_nativemethod (env, instance, C1, C2, C3, C4, C5, C6, C7);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00388_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[388 - 1];

    jclass C1; jclass C2; jclass C3; jclass C4; jclass C5; jclass C6; jclass C7; jclass C8;
    C1 = jclassValue; C2 = jclassValue; C3 = jclassValue; C4 = jclassValue; C5 = jclassValue; C6 = jclassValue; C7 = jclassValue; C8 = jclassValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, C1, C2, C3, C4, C5, C6, C7, C8);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00388_run
(JNIEnv *env, jobject instance) {
    jclass C1; jclass C2; jclass C3; jclass C4; jclass C5; jclass C6; jclass C7; jclass C8;
    C1 = jclassValue; C2 = jclassValue; C3 = jclassValue; C4 = jclassValue; C5 = jclassValue; C6 = jclassValue; C7 = jclassValue; C8 = jclassValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00388_nativemethod (env, instance, C1, C2, C3, C4, C5, C6, C7, C8);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00389_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[389 - 1];

    jclass C1; jclass C2; jclass C3; jclass C4; jclass C5; jclass C6; jclass C7; jclass C8; jclass C9;
    C1 = jclassValue; C2 = jclassValue; C3 = jclassValue; C4 = jclassValue; C5 = jclassValue; C6 = jclassValue; C7 = jclassValue; C8 = jclassValue; C9 = jclassValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, C1, C2, C3, C4, C5, C6, C7, C8, C9);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00389_run
(JNIEnv *env, jobject instance) {
    jclass C1; jclass C2; jclass C3; jclass C4; jclass C5; jclass C6; jclass C7; jclass C8; jclass C9;
    C1 = jclassValue; C2 = jclassValue; C3 = jclassValue; C4 = jclassValue; C5 = jclassValue; C6 = jclassValue; C7 = jclassValue; C8 = jclassValue; C9 = jclassValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00389_nativemethod (env, instance, C1, C2, C3, C4, C5, C6, C7, C8, C9);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00390_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[390 - 1];

    jclass C1; jclass C2; jclass C3; jclass C4; jclass C5; jclass C6; jclass C7; jclass C8; jclass C9; jclass C10;
    C1 = jclassValue; C2 = jclassValue; C3 = jclassValue; C4 = jclassValue; C5 = jclassValue; C6 = jclassValue; C7 = jclassValue; C8 = jclassValue; C9 = jclassValue; C10 = jclassValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, C1, C2, C3, C4, C5, C6, C7, C8, C9, C10);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00390_run
(JNIEnv *env, jobject instance) {
    jclass C1; jclass C2; jclass C3; jclass C4; jclass C5; jclass C6; jclass C7; jclass C8; jclass C9; jclass C10;
    C1 = jclassValue; C2 = jclassValue; C3 = jclassValue; C4 = jclassValue; C5 = jclassValue; C6 = jclassValue; C7 = jclassValue; C8 = jclassValue; C9 = jclassValue; C10 = jclassValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00390_nativemethod (env, instance, C1, C2, C3, C4, C5, C6, C7, C8, C9, C10);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00391_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[391 - 1];

    jclass C1; jclass C2; jclass C3; jclass C4; jclass C5; jclass C6; jclass C7; jclass C8; jclass C9; jclass C10; jclass C11;
    C1 = jclassValue; C2 = jclassValue; C3 = jclassValue; C4 = jclassValue; C5 = jclassValue; C6 = jclassValue; C7 = jclassValue; C8 = jclassValue; C9 = jclassValue; C10 = jclassValue; C11 = jclassValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, C1, C2, C3, C4, C5, C6, C7, C8, C9, C10, C11);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00391_run
(JNIEnv *env, jobject instance) {
    jclass C1; jclass C2; jclass C3; jclass C4; jclass C5; jclass C6; jclass C7; jclass C8; jclass C9; jclass C10; jclass C11;
    C1 = jclassValue; C2 = jclassValue; C3 = jclassValue; C4 = jclassValue; C5 = jclassValue; C6 = jclassValue; C7 = jclassValue; C8 = jclassValue; C9 = jclassValue; C10 = jclassValue; C11 = jclassValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00391_nativemethod (env, instance, C1, C2, C3, C4, C5, C6, C7, C8, C9, C10, C11);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00392_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[392 - 1];

    jclass C1; jclass C2; jclass C3; jclass C4; jclass C5; jclass C6; jclass C7; jclass C8; jclass C9; jclass C10; jclass C11; jclass C12;
    C1 = jclassValue; C2 = jclassValue; C3 = jclassValue; C4 = jclassValue; C5 = jclassValue; C6 = jclassValue; C7 = jclassValue; C8 = jclassValue; C9 = jclassValue; C10 = jclassValue; C11 = jclassValue; C12 = jclassValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, C1, C2, C3, C4, C5, C6, C7, C8, C9, C10, C11, C12);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00392_run
(JNIEnv *env, jobject instance) {
    jclass C1; jclass C2; jclass C3; jclass C4; jclass C5; jclass C6; jclass C7; jclass C8; jclass C9; jclass C10; jclass C11; jclass C12;
    C1 = jclassValue; C2 = jclassValue; C3 = jclassValue; C4 = jclassValue; C5 = jclassValue; C6 = jclassValue; C7 = jclassValue; C8 = jclassValue; C9 = jclassValue; C10 = jclassValue; C11 = jclassValue; C12 = jclassValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00392_nativemethod (env, instance, C1, C2, C3, C4, C5, C6, C7, C8, C9, C10, C11, C12);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00393_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[393 - 1];

    jclass C1; jclass C2; jclass C3; jclass C4; jclass C5; jclass C6; jclass C7; jclass C8; jclass C9; jclass C10; jclass C11; jclass C12; jclass C13;
    C1 = jclassValue; C2 = jclassValue; C3 = jclassValue; C4 = jclassValue; C5 = jclassValue; C6 = jclassValue; C7 = jclassValue; C8 = jclassValue; C9 = jclassValue; C10 = jclassValue; C11 = jclassValue; C12 = jclassValue; C13 = jclassValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, C1, C2, C3, C4, C5, C6, C7, C8, C9, C10, C11, C12, C13);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00393_run
(JNIEnv *env, jobject instance) {
    jclass C1; jclass C2; jclass C3; jclass C4; jclass C5; jclass C6; jclass C7; jclass C8; jclass C9; jclass C10; jclass C11; jclass C12; jclass C13;
    C1 = jclassValue; C2 = jclassValue; C3 = jclassValue; C4 = jclassValue; C5 = jclassValue; C6 = jclassValue; C7 = jclassValue; C8 = jclassValue; C9 = jclassValue; C10 = jclassValue; C11 = jclassValue; C12 = jclassValue; C13 = jclassValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00393_nativemethod (env, instance, C1, C2, C3, C4, C5, C6, C7, C8, C9, C10, C11, C12, C13);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00394_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[394 - 1];

    jclass C1; jclass C2; jclass C3; jclass C4; jclass C5; jclass C6; jclass C7; jclass C8; jclass C9; jclass C10; jclass C11; jclass C12; jclass C13; jclass C14;
    C1 = jclassValue; C2 = jclassValue; C3 = jclassValue; C4 = jclassValue; C5 = jclassValue; C6 = jclassValue; C7 = jclassValue; C8 = jclassValue; C9 = jclassValue; C10 = jclassValue; C11 = jclassValue; C12 = jclassValue; C13 = jclassValue; C14 = jclassValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, C1, C2, C3, C4, C5, C6, C7, C8, C9, C10, C11, C12, C13, C14);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00394_run
(JNIEnv *env, jobject instance) {
    jclass C1; jclass C2; jclass C3; jclass C4; jclass C5; jclass C6; jclass C7; jclass C8; jclass C9; jclass C10; jclass C11; jclass C12; jclass C13; jclass C14;
    C1 = jclassValue; C2 = jclassValue; C3 = jclassValue; C4 = jclassValue; C5 = jclassValue; C6 = jclassValue; C7 = jclassValue; C8 = jclassValue; C9 = jclassValue; C10 = jclassValue; C11 = jclassValue; C12 = jclassValue; C13 = jclassValue; C14 = jclassValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00394_nativemethod (env, instance, C1, C2, C3, C4, C5, C6, C7, C8, C9, C10, C11, C12, C13, C14);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00395_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[395 - 1];

    jclass C1; jclass C2; jclass C3; jclass C4; jclass C5; jclass C6; jclass C7; jclass C8; jclass C9; jclass C10; jclass C11; jclass C12; jclass C13; jclass C14; jclass C15;
    C1 = jclassValue; C2 = jclassValue; C3 = jclassValue; C4 = jclassValue; C5 = jclassValue; C6 = jclassValue; C7 = jclassValue; C8 = jclassValue; C9 = jclassValue; C10 = jclassValue; C11 = jclassValue; C12 = jclassValue; C13 = jclassValue; C14 = jclassValue; C15 = jclassValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, C1, C2, C3, C4, C5, C6, C7, C8, C9, C10, C11, C12, C13, C14, C15);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00395_run
(JNIEnv *env, jobject instance) {
    jclass C1; jclass C2; jclass C3; jclass C4; jclass C5; jclass C6; jclass C7; jclass C8; jclass C9; jclass C10; jclass C11; jclass C12; jclass C13; jclass C14; jclass C15;
    C1 = jclassValue; C2 = jclassValue; C3 = jclassValue; C4 = jclassValue; C5 = jclassValue; C6 = jclassValue; C7 = jclassValue; C8 = jclassValue; C9 = jclassValue; C10 = jclassValue; C11 = jclassValue; C12 = jclassValue; C13 = jclassValue; C14 = jclassValue; C15 = jclassValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00395_nativemethod (env, instance, C1, C2, C3, C4, C5, C6, C7, C8, C9, C10, C11, C12, C13, C14, C15);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00396_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[396 - 1];

    jclass C1; jclass C2; jclass C3; jclass C4; jclass C5; jclass C6; jclass C7; jclass C8; jclass C9; jclass C10; jclass C11; jclass C12; jclass C13; jclass C14; jclass C15; jclass C16;
    C1 = jclassValue; C2 = jclassValue; C3 = jclassValue; C4 = jclassValue; C5 = jclassValue; C6 = jclassValue; C7 = jclassValue; C8 = jclassValue; C9 = jclassValue; C10 = jclassValue; C11 = jclassValue; C12 = jclassValue; C13 = jclassValue; C14 = jclassValue; C15 = jclassValue; C16 = jclassValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, C1, C2, C3, C4, C5, C6, C7, C8, C9, C10, C11, C12, C13, C14, C15, C16);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00396_run
(JNIEnv *env, jobject instance) {
    jclass C1; jclass C2; jclass C3; jclass C4; jclass C5; jclass C6; jclass C7; jclass C8; jclass C9; jclass C10; jclass C11; jclass C12; jclass C13; jclass C14; jclass C15; jclass C16;
    C1 = jclassValue; C2 = jclassValue; C3 = jclassValue; C4 = jclassValue; C5 = jclassValue; C6 = jclassValue; C7 = jclassValue; C8 = jclassValue; C9 = jclassValue; C10 = jclassValue; C11 = jclassValue; C12 = jclassValue; C13 = jclassValue; C14 = jclassValue; C15 = jclassValue; C16 = jclassValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00396_nativemethod (env, instance, C1, C2, C3, C4, C5, C6, C7, C8, C9, C10, C11, C12, C13, C14, C15, C16);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00397_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[397 - 1];

    jclass C1; jclass C2; jclass C3; jclass C4; jclass C5; jclass C6; jclass C7; jclass C8; jclass C9; jclass C10; jclass C11; jclass C12; jclass C13; jclass C14; jclass C15; jclass C16; jclass C17;
    C1 = jclassValue; C2 = jclassValue; C3 = jclassValue; C4 = jclassValue; C5 = jclassValue; C6 = jclassValue; C7 = jclassValue; C8 = jclassValue; C9 = jclassValue; C10 = jclassValue; C11 = jclassValue; C12 = jclassValue; C13 = jclassValue; C14 = jclassValue; C15 = jclassValue; C16 = jclassValue; C17 = jclassValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, C1, C2, C3, C4, C5, C6, C7, C8, C9, C10, C11, C12, C13, C14, C15, C16, C17);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00397_run
(JNIEnv *env, jobject instance) {
    jclass C1; jclass C2; jclass C3; jclass C4; jclass C5; jclass C6; jclass C7; jclass C8; jclass C9; jclass C10; jclass C11; jclass C12; jclass C13; jclass C14; jclass C15; jclass C16; jclass C17;
    C1 = jclassValue; C2 = jclassValue; C3 = jclassValue; C4 = jclassValue; C5 = jclassValue; C6 = jclassValue; C7 = jclassValue; C8 = jclassValue; C9 = jclassValue; C10 = jclassValue; C11 = jclassValue; C12 = jclassValue; C13 = jclassValue; C14 = jclassValue; C15 = jclassValue; C16 = jclassValue; C17 = jclassValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00397_nativemethod (env, instance, C1, C2, C3, C4, C5, C6, C7, C8, C9, C10, C11, C12, C13, C14, C15, C16, C17);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00398_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[398 - 1];

    jclass C1; jclass C2; jclass C3; jclass C4; jclass C5; jclass C6; jclass C7; jclass C8; jclass C9; jclass C10; jclass C11; jclass C12; jclass C13; jclass C14; jclass C15; jclass C16; jclass C17; jclass C18;
    C1 = jclassValue; C2 = jclassValue; C3 = jclassValue; C4 = jclassValue; C5 = jclassValue; C6 = jclassValue; C7 = jclassValue; C8 = jclassValue; C9 = jclassValue; C10 = jclassValue; C11 = jclassValue; C12 = jclassValue; C13 = jclassValue; C14 = jclassValue; C15 = jclassValue; C16 = jclassValue; C17 = jclassValue; C18 = jclassValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, C1, C2, C3, C4, C5, C6, C7, C8, C9, C10, C11, C12, C13, C14, C15, C16, C17, C18);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00398_run
(JNIEnv *env, jobject instance) {
    jclass C1; jclass C2; jclass C3; jclass C4; jclass C5; jclass C6; jclass C7; jclass C8; jclass C9; jclass C10; jclass C11; jclass C12; jclass C13; jclass C14; jclass C15; jclass C16; jclass C17; jclass C18;
    C1 = jclassValue; C2 = jclassValue; C3 = jclassValue; C4 = jclassValue; C5 = jclassValue; C6 = jclassValue; C7 = jclassValue; C8 = jclassValue; C9 = jclassValue; C10 = jclassValue; C11 = jclassValue; C12 = jclassValue; C13 = jclassValue; C14 = jclassValue; C15 = jclassValue; C16 = jclassValue; C17 = jclassValue; C18 = jclassValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00398_nativemethod (env, instance, C1, C2, C3, C4, C5, C6, C7, C8, C9, C10, C11, C12, C13, C14, C15, C16, C17, C18);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00399_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[399 - 1];

    jclass C1; jclass C2; jclass C3; jclass C4; jclass C5; jclass C6; jclass C7; jclass C8; jclass C9; jclass C10; jclass C11; jclass C12; jclass C13; jclass C14; jclass C15; jclass C16; jclass C17; jclass C18; jclass C19;
    C1 = jclassValue; C2 = jclassValue; C3 = jclassValue; C4 = jclassValue; C5 = jclassValue; C6 = jclassValue; C7 = jclassValue; C8 = jclassValue; C9 = jclassValue; C10 = jclassValue; C11 = jclassValue; C12 = jclassValue; C13 = jclassValue; C14 = jclassValue; C15 = jclassValue; C16 = jclassValue; C17 = jclassValue; C18 = jclassValue; C19 = jclassValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, C1, C2, C3, C4, C5, C6, C7, C8, C9, C10, C11, C12, C13, C14, C15, C16, C17, C18, C19);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00399_run
(JNIEnv *env, jobject instance) {
    jclass C1; jclass C2; jclass C3; jclass C4; jclass C5; jclass C6; jclass C7; jclass C8; jclass C9; jclass C10; jclass C11; jclass C12; jclass C13; jclass C14; jclass C15; jclass C16; jclass C17; jclass C18; jclass C19;
    C1 = jclassValue; C2 = jclassValue; C3 = jclassValue; C4 = jclassValue; C5 = jclassValue; C6 = jclassValue; C7 = jclassValue; C8 = jclassValue; C9 = jclassValue; C10 = jclassValue; C11 = jclassValue; C12 = jclassValue; C13 = jclassValue; C14 = jclassValue; C15 = jclassValue; C16 = jclassValue; C17 = jclassValue; C18 = jclassValue; C19 = jclassValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00399_nativemethod (env, instance, C1, C2, C3, C4, C5, C6, C7, C8, C9, C10, C11, C12, C13, C14, C15, C16, C17, C18, C19);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00400_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[400 - 1];

    jclass C1; jclass C2; jclass C3; jclass C4; jclass C5; jclass C6; jclass C7; jclass C8; jclass C9; jclass C10; jclass C11; jclass C12; jclass C13; jclass C14; jclass C15; jclass C16; jclass C17; jclass C18; jclass C19; jclass C20;
    C1 = jclassValue; C2 = jclassValue; C3 = jclassValue; C4 = jclassValue; C5 = jclassValue; C6 = jclassValue; C7 = jclassValue; C8 = jclassValue; C9 = jclassValue; C10 = jclassValue; C11 = jclassValue; C12 = jclassValue; C13 = jclassValue; C14 = jclassValue; C15 = jclassValue; C16 = jclassValue; C17 = jclassValue; C18 = jclassValue; C19 = jclassValue; C20 = jclassValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, C1, C2, C3, C4, C5, C6, C7, C8, C9, C10, C11, C12, C13, C14, C15, C16, C17, C18, C19, C20);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00400_run
(JNIEnv *env, jobject instance) {
    jclass C1; jclass C2; jclass C3; jclass C4; jclass C5; jclass C6; jclass C7; jclass C8; jclass C9; jclass C10; jclass C11; jclass C12; jclass C13; jclass C14; jclass C15; jclass C16; jclass C17; jclass C18; jclass C19; jclass C20;
    C1 = jclassValue; C2 = jclassValue; C3 = jclassValue; C4 = jclassValue; C5 = jclassValue; C6 = jclassValue; C7 = jclassValue; C8 = jclassValue; C9 = jclassValue; C10 = jclassValue; C11 = jclassValue; C12 = jclassValue; C13 = jclassValue; C14 = jclassValue; C15 = jclassValue; C16 = jclassValue; C17 = jclassValue; C18 = jclassValue; C19 = jclassValue; C20 = jclassValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00400_nativemethod (env, instance, C1, C2, C3, C4, C5, C6, C7, C8, C9, C10, C11, C12, C13, C14, C15, C16, C17, C18, C19, C20);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00401_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[401 - 1];

    jdoubleArray Ad1;
    Ad1 = jdoubleArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ad1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00401_run
(JNIEnv *env, jobject instance) {
    jdoubleArray Ad1;
    Ad1 = jdoubleArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00401_nativemethod (env, instance, Ad1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00402_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[402 - 1];

    jdoubleArray Ad1; jdoubleArray Ad2;
    Ad1 = jdoubleArrayValue; Ad2 = jdoubleArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ad1, Ad2);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00402_run
(JNIEnv *env, jobject instance) {
    jdoubleArray Ad1; jdoubleArray Ad2;
    Ad1 = jdoubleArrayValue; Ad2 = jdoubleArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00402_nativemethod (env, instance, Ad1, Ad2);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00403_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[403 - 1];

    jdoubleArray Ad1; jdoubleArray Ad2; jdoubleArray Ad3;
    Ad1 = jdoubleArrayValue; Ad2 = jdoubleArrayValue; Ad3 = jdoubleArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ad1, Ad2, Ad3);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00403_run
(JNIEnv *env, jobject instance) {
    jdoubleArray Ad1; jdoubleArray Ad2; jdoubleArray Ad3;
    Ad1 = jdoubleArrayValue; Ad2 = jdoubleArrayValue; Ad3 = jdoubleArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00403_nativemethod (env, instance, Ad1, Ad2, Ad3);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00404_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[404 - 1];

    jdoubleArray Ad1; jdoubleArray Ad2; jdoubleArray Ad3; jdoubleArray Ad4;
    Ad1 = jdoubleArrayValue; Ad2 = jdoubleArrayValue; Ad3 = jdoubleArrayValue; Ad4 = jdoubleArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ad1, Ad2, Ad3, Ad4);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00404_run
(JNIEnv *env, jobject instance) {
    jdoubleArray Ad1; jdoubleArray Ad2; jdoubleArray Ad3; jdoubleArray Ad4;
    Ad1 = jdoubleArrayValue; Ad2 = jdoubleArrayValue; Ad3 = jdoubleArrayValue; Ad4 = jdoubleArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00404_nativemethod (env, instance, Ad1, Ad2, Ad3, Ad4);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00405_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[405 - 1];

    jdoubleArray Ad1; jdoubleArray Ad2; jdoubleArray Ad3; jdoubleArray Ad4; jdoubleArray Ad5;
    Ad1 = jdoubleArrayValue; Ad2 = jdoubleArrayValue; Ad3 = jdoubleArrayValue; Ad4 = jdoubleArrayValue; Ad5 = jdoubleArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ad1, Ad2, Ad3, Ad4, Ad5);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00405_run
(JNIEnv *env, jobject instance) {
    jdoubleArray Ad1; jdoubleArray Ad2; jdoubleArray Ad3; jdoubleArray Ad4; jdoubleArray Ad5;
    Ad1 = jdoubleArrayValue; Ad2 = jdoubleArrayValue; Ad3 = jdoubleArrayValue; Ad4 = jdoubleArrayValue; Ad5 = jdoubleArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00405_nativemethod (env, instance, Ad1, Ad2, Ad3, Ad4, Ad5);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00406_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[406 - 1];

    jdoubleArray Ad1; jdoubleArray Ad2; jdoubleArray Ad3; jdoubleArray Ad4; jdoubleArray Ad5; jdoubleArray Ad6;
    Ad1 = jdoubleArrayValue; Ad2 = jdoubleArrayValue; Ad3 = jdoubleArrayValue; Ad4 = jdoubleArrayValue; Ad5 = jdoubleArrayValue; Ad6 = jdoubleArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ad1, Ad2, Ad3, Ad4, Ad5, Ad6);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00406_run
(JNIEnv *env, jobject instance) {
    jdoubleArray Ad1; jdoubleArray Ad2; jdoubleArray Ad3; jdoubleArray Ad4; jdoubleArray Ad5; jdoubleArray Ad6;
    Ad1 = jdoubleArrayValue; Ad2 = jdoubleArrayValue; Ad3 = jdoubleArrayValue; Ad4 = jdoubleArrayValue; Ad5 = jdoubleArrayValue; Ad6 = jdoubleArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00406_nativemethod (env, instance, Ad1, Ad2, Ad3, Ad4, Ad5, Ad6);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00407_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[407 - 1];

    jdoubleArray Ad1; jdoubleArray Ad2; jdoubleArray Ad3; jdoubleArray Ad4; jdoubleArray Ad5; jdoubleArray Ad6; jdoubleArray Ad7;
    Ad1 = jdoubleArrayValue; Ad2 = jdoubleArrayValue; Ad3 = jdoubleArrayValue; Ad4 = jdoubleArrayValue; Ad5 = jdoubleArrayValue; Ad6 = jdoubleArrayValue; Ad7 = jdoubleArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ad1, Ad2, Ad3, Ad4, Ad5, Ad6, Ad7);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00407_run
(JNIEnv *env, jobject instance) {
    jdoubleArray Ad1; jdoubleArray Ad2; jdoubleArray Ad3; jdoubleArray Ad4; jdoubleArray Ad5; jdoubleArray Ad6; jdoubleArray Ad7;
    Ad1 = jdoubleArrayValue; Ad2 = jdoubleArrayValue; Ad3 = jdoubleArrayValue; Ad4 = jdoubleArrayValue; Ad5 = jdoubleArrayValue; Ad6 = jdoubleArrayValue; Ad7 = jdoubleArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00407_nativemethod (env, instance, Ad1, Ad2, Ad3, Ad4, Ad5, Ad6, Ad7);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00408_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[408 - 1];

    jdoubleArray Ad1; jdoubleArray Ad2; jdoubleArray Ad3; jdoubleArray Ad4; jdoubleArray Ad5; jdoubleArray Ad6; jdoubleArray Ad7; jdoubleArray Ad8;
    Ad1 = jdoubleArrayValue; Ad2 = jdoubleArrayValue; Ad3 = jdoubleArrayValue; Ad4 = jdoubleArrayValue; Ad5 = jdoubleArrayValue; Ad6 = jdoubleArrayValue; Ad7 = jdoubleArrayValue; Ad8 = jdoubleArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ad1, Ad2, Ad3, Ad4, Ad5, Ad6, Ad7, Ad8);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00408_run
(JNIEnv *env, jobject instance) {
    jdoubleArray Ad1; jdoubleArray Ad2; jdoubleArray Ad3; jdoubleArray Ad4; jdoubleArray Ad5; jdoubleArray Ad6; jdoubleArray Ad7; jdoubleArray Ad8;
    Ad1 = jdoubleArrayValue; Ad2 = jdoubleArrayValue; Ad3 = jdoubleArrayValue; Ad4 = jdoubleArrayValue; Ad5 = jdoubleArrayValue; Ad6 = jdoubleArrayValue; Ad7 = jdoubleArrayValue; Ad8 = jdoubleArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00408_nativemethod (env, instance, Ad1, Ad2, Ad3, Ad4, Ad5, Ad6, Ad7, Ad8);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00409_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[409 - 1];

    jdoubleArray Ad1; jdoubleArray Ad2; jdoubleArray Ad3; jdoubleArray Ad4; jdoubleArray Ad5; jdoubleArray Ad6; jdoubleArray Ad7; jdoubleArray Ad8; jdoubleArray Ad9;
    Ad1 = jdoubleArrayValue; Ad2 = jdoubleArrayValue; Ad3 = jdoubleArrayValue; Ad4 = jdoubleArrayValue; Ad5 = jdoubleArrayValue; Ad6 = jdoubleArrayValue; Ad7 = jdoubleArrayValue; Ad8 = jdoubleArrayValue; Ad9 = jdoubleArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ad1, Ad2, Ad3, Ad4, Ad5, Ad6, Ad7, Ad8, Ad9);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00409_run
(JNIEnv *env, jobject instance) {
    jdoubleArray Ad1; jdoubleArray Ad2; jdoubleArray Ad3; jdoubleArray Ad4; jdoubleArray Ad5; jdoubleArray Ad6; jdoubleArray Ad7; jdoubleArray Ad8; jdoubleArray Ad9;
    Ad1 = jdoubleArrayValue; Ad2 = jdoubleArrayValue; Ad3 = jdoubleArrayValue; Ad4 = jdoubleArrayValue; Ad5 = jdoubleArrayValue; Ad6 = jdoubleArrayValue; Ad7 = jdoubleArrayValue; Ad8 = jdoubleArrayValue; Ad9 = jdoubleArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00409_nativemethod (env, instance, Ad1, Ad2, Ad3, Ad4, Ad5, Ad6, Ad7, Ad8, Ad9);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00410_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[410 - 1];

    jdoubleArray Ad1; jdoubleArray Ad2; jdoubleArray Ad3; jdoubleArray Ad4; jdoubleArray Ad5; jdoubleArray Ad6; jdoubleArray Ad7; jdoubleArray Ad8; jdoubleArray Ad9; jdoubleArray Ad10;
    Ad1 = jdoubleArrayValue; Ad2 = jdoubleArrayValue; Ad3 = jdoubleArrayValue; Ad4 = jdoubleArrayValue; Ad5 = jdoubleArrayValue; Ad6 = jdoubleArrayValue; Ad7 = jdoubleArrayValue; Ad8 = jdoubleArrayValue; Ad9 = jdoubleArrayValue; Ad10 = jdoubleArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ad1, Ad2, Ad3, Ad4, Ad5, Ad6, Ad7, Ad8, Ad9, Ad10);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00410_run
(JNIEnv *env, jobject instance) {
    jdoubleArray Ad1; jdoubleArray Ad2; jdoubleArray Ad3; jdoubleArray Ad4; jdoubleArray Ad5; jdoubleArray Ad6; jdoubleArray Ad7; jdoubleArray Ad8; jdoubleArray Ad9; jdoubleArray Ad10;
    Ad1 = jdoubleArrayValue; Ad2 = jdoubleArrayValue; Ad3 = jdoubleArrayValue; Ad4 = jdoubleArrayValue; Ad5 = jdoubleArrayValue; Ad6 = jdoubleArrayValue; Ad7 = jdoubleArrayValue; Ad8 = jdoubleArrayValue; Ad9 = jdoubleArrayValue; Ad10 = jdoubleArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00410_nativemethod (env, instance, Ad1, Ad2, Ad3, Ad4, Ad5, Ad6, Ad7, Ad8, Ad9, Ad10);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00411_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[411 - 1];

    jdoubleArray Ad1; jdoubleArray Ad2; jdoubleArray Ad3; jdoubleArray Ad4; jdoubleArray Ad5; jdoubleArray Ad6; jdoubleArray Ad7; jdoubleArray Ad8; jdoubleArray Ad9; jdoubleArray Ad10; jdoubleArray Ad11;
    Ad1 = jdoubleArrayValue; Ad2 = jdoubleArrayValue; Ad3 = jdoubleArrayValue; Ad4 = jdoubleArrayValue; Ad5 = jdoubleArrayValue; Ad6 = jdoubleArrayValue; Ad7 = jdoubleArrayValue; Ad8 = jdoubleArrayValue; Ad9 = jdoubleArrayValue; Ad10 = jdoubleArrayValue; Ad11 = jdoubleArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ad1, Ad2, Ad3, Ad4, Ad5, Ad6, Ad7, Ad8, Ad9, Ad10, Ad11);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00411_run
(JNIEnv *env, jobject instance) {
    jdoubleArray Ad1; jdoubleArray Ad2; jdoubleArray Ad3; jdoubleArray Ad4; jdoubleArray Ad5; jdoubleArray Ad6; jdoubleArray Ad7; jdoubleArray Ad8; jdoubleArray Ad9; jdoubleArray Ad10; jdoubleArray Ad11;
    Ad1 = jdoubleArrayValue; Ad2 = jdoubleArrayValue; Ad3 = jdoubleArrayValue; Ad4 = jdoubleArrayValue; Ad5 = jdoubleArrayValue; Ad6 = jdoubleArrayValue; Ad7 = jdoubleArrayValue; Ad8 = jdoubleArrayValue; Ad9 = jdoubleArrayValue; Ad10 = jdoubleArrayValue; Ad11 = jdoubleArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00411_nativemethod (env, instance, Ad1, Ad2, Ad3, Ad4, Ad5, Ad6, Ad7, Ad8, Ad9, Ad10, Ad11);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00412_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[412 - 1];

    jdoubleArray Ad1; jdoubleArray Ad2; jdoubleArray Ad3; jdoubleArray Ad4; jdoubleArray Ad5; jdoubleArray Ad6; jdoubleArray Ad7; jdoubleArray Ad8; jdoubleArray Ad9; jdoubleArray Ad10; jdoubleArray Ad11; jdoubleArray Ad12;
    Ad1 = jdoubleArrayValue; Ad2 = jdoubleArrayValue; Ad3 = jdoubleArrayValue; Ad4 = jdoubleArrayValue; Ad5 = jdoubleArrayValue; Ad6 = jdoubleArrayValue; Ad7 = jdoubleArrayValue; Ad8 = jdoubleArrayValue; Ad9 = jdoubleArrayValue; Ad10 = jdoubleArrayValue; Ad11 = jdoubleArrayValue; Ad12 = jdoubleArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ad1, Ad2, Ad3, Ad4, Ad5, Ad6, Ad7, Ad8, Ad9, Ad10, Ad11, Ad12);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00412_run
(JNIEnv *env, jobject instance) {
    jdoubleArray Ad1; jdoubleArray Ad2; jdoubleArray Ad3; jdoubleArray Ad4; jdoubleArray Ad5; jdoubleArray Ad6; jdoubleArray Ad7; jdoubleArray Ad8; jdoubleArray Ad9; jdoubleArray Ad10; jdoubleArray Ad11; jdoubleArray Ad12;
    Ad1 = jdoubleArrayValue; Ad2 = jdoubleArrayValue; Ad3 = jdoubleArrayValue; Ad4 = jdoubleArrayValue; Ad5 = jdoubleArrayValue; Ad6 = jdoubleArrayValue; Ad7 = jdoubleArrayValue; Ad8 = jdoubleArrayValue; Ad9 = jdoubleArrayValue; Ad10 = jdoubleArrayValue; Ad11 = jdoubleArrayValue; Ad12 = jdoubleArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00412_nativemethod (env, instance, Ad1, Ad2, Ad3, Ad4, Ad5, Ad6, Ad7, Ad8, Ad9, Ad10, Ad11, Ad12);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00413_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[413 - 1];

    jdoubleArray Ad1; jdoubleArray Ad2; jdoubleArray Ad3; jdoubleArray Ad4; jdoubleArray Ad5; jdoubleArray Ad6; jdoubleArray Ad7; jdoubleArray Ad8; jdoubleArray Ad9; jdoubleArray Ad10; jdoubleArray Ad11; jdoubleArray Ad12; jdoubleArray Ad13;
    Ad1 = jdoubleArrayValue; Ad2 = jdoubleArrayValue; Ad3 = jdoubleArrayValue; Ad4 = jdoubleArrayValue; Ad5 = jdoubleArrayValue; Ad6 = jdoubleArrayValue; Ad7 = jdoubleArrayValue; Ad8 = jdoubleArrayValue; Ad9 = jdoubleArrayValue; Ad10 = jdoubleArrayValue; Ad11 = jdoubleArrayValue; Ad12 = jdoubleArrayValue; Ad13 = jdoubleArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ad1, Ad2, Ad3, Ad4, Ad5, Ad6, Ad7, Ad8, Ad9, Ad10, Ad11, Ad12, Ad13);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00413_run
(JNIEnv *env, jobject instance) {
    jdoubleArray Ad1; jdoubleArray Ad2; jdoubleArray Ad3; jdoubleArray Ad4; jdoubleArray Ad5; jdoubleArray Ad6; jdoubleArray Ad7; jdoubleArray Ad8; jdoubleArray Ad9; jdoubleArray Ad10; jdoubleArray Ad11; jdoubleArray Ad12; jdoubleArray Ad13;
    Ad1 = jdoubleArrayValue; Ad2 = jdoubleArrayValue; Ad3 = jdoubleArrayValue; Ad4 = jdoubleArrayValue; Ad5 = jdoubleArrayValue; Ad6 = jdoubleArrayValue; Ad7 = jdoubleArrayValue; Ad8 = jdoubleArrayValue; Ad9 = jdoubleArrayValue; Ad10 = jdoubleArrayValue; Ad11 = jdoubleArrayValue; Ad12 = jdoubleArrayValue; Ad13 = jdoubleArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00413_nativemethod (env, instance, Ad1, Ad2, Ad3, Ad4, Ad5, Ad6, Ad7, Ad8, Ad9, Ad10, Ad11, Ad12, Ad13);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00414_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[414 - 1];

    jdoubleArray Ad1; jdoubleArray Ad2; jdoubleArray Ad3; jdoubleArray Ad4; jdoubleArray Ad5; jdoubleArray Ad6; jdoubleArray Ad7; jdoubleArray Ad8; jdoubleArray Ad9; jdoubleArray Ad10; jdoubleArray Ad11; jdoubleArray Ad12; jdoubleArray Ad13; jdoubleArray Ad14;
    Ad1 = jdoubleArrayValue; Ad2 = jdoubleArrayValue; Ad3 = jdoubleArrayValue; Ad4 = jdoubleArrayValue; Ad5 = jdoubleArrayValue; Ad6 = jdoubleArrayValue; Ad7 = jdoubleArrayValue; Ad8 = jdoubleArrayValue; Ad9 = jdoubleArrayValue; Ad10 = jdoubleArrayValue; Ad11 = jdoubleArrayValue; Ad12 = jdoubleArrayValue; Ad13 = jdoubleArrayValue; Ad14 = jdoubleArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ad1, Ad2, Ad3, Ad4, Ad5, Ad6, Ad7, Ad8, Ad9, Ad10, Ad11, Ad12, Ad13, Ad14);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00414_run
(JNIEnv *env, jobject instance) {
    jdoubleArray Ad1; jdoubleArray Ad2; jdoubleArray Ad3; jdoubleArray Ad4; jdoubleArray Ad5; jdoubleArray Ad6; jdoubleArray Ad7; jdoubleArray Ad8; jdoubleArray Ad9; jdoubleArray Ad10; jdoubleArray Ad11; jdoubleArray Ad12; jdoubleArray Ad13; jdoubleArray Ad14;
    Ad1 = jdoubleArrayValue; Ad2 = jdoubleArrayValue; Ad3 = jdoubleArrayValue; Ad4 = jdoubleArrayValue; Ad5 = jdoubleArrayValue; Ad6 = jdoubleArrayValue; Ad7 = jdoubleArrayValue; Ad8 = jdoubleArrayValue; Ad9 = jdoubleArrayValue; Ad10 = jdoubleArrayValue; Ad11 = jdoubleArrayValue; Ad12 = jdoubleArrayValue; Ad13 = jdoubleArrayValue; Ad14 = jdoubleArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00414_nativemethod (env, instance, Ad1, Ad2, Ad3, Ad4, Ad5, Ad6, Ad7, Ad8, Ad9, Ad10, Ad11, Ad12, Ad13, Ad14);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00415_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[415 - 1];

    jdoubleArray Ad1; jdoubleArray Ad2; jdoubleArray Ad3; jdoubleArray Ad4; jdoubleArray Ad5; jdoubleArray Ad6; jdoubleArray Ad7; jdoubleArray Ad8; jdoubleArray Ad9; jdoubleArray Ad10; jdoubleArray Ad11; jdoubleArray Ad12; jdoubleArray Ad13; jdoubleArray Ad14; jdoubleArray Ad15;
    Ad1 = jdoubleArrayValue; Ad2 = jdoubleArrayValue; Ad3 = jdoubleArrayValue; Ad4 = jdoubleArrayValue; Ad5 = jdoubleArrayValue; Ad6 = jdoubleArrayValue; Ad7 = jdoubleArrayValue; Ad8 = jdoubleArrayValue; Ad9 = jdoubleArrayValue; Ad10 = jdoubleArrayValue; Ad11 = jdoubleArrayValue; Ad12 = jdoubleArrayValue; Ad13 = jdoubleArrayValue; Ad14 = jdoubleArrayValue; Ad15 = jdoubleArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ad1, Ad2, Ad3, Ad4, Ad5, Ad6, Ad7, Ad8, Ad9, Ad10, Ad11, Ad12, Ad13, Ad14, Ad15);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00415_run
(JNIEnv *env, jobject instance) {
    jdoubleArray Ad1; jdoubleArray Ad2; jdoubleArray Ad3; jdoubleArray Ad4; jdoubleArray Ad5; jdoubleArray Ad6; jdoubleArray Ad7; jdoubleArray Ad8; jdoubleArray Ad9; jdoubleArray Ad10; jdoubleArray Ad11; jdoubleArray Ad12; jdoubleArray Ad13; jdoubleArray Ad14; jdoubleArray Ad15;
    Ad1 = jdoubleArrayValue; Ad2 = jdoubleArrayValue; Ad3 = jdoubleArrayValue; Ad4 = jdoubleArrayValue; Ad5 = jdoubleArrayValue; Ad6 = jdoubleArrayValue; Ad7 = jdoubleArrayValue; Ad8 = jdoubleArrayValue; Ad9 = jdoubleArrayValue; Ad10 = jdoubleArrayValue; Ad11 = jdoubleArrayValue; Ad12 = jdoubleArrayValue; Ad13 = jdoubleArrayValue; Ad14 = jdoubleArrayValue; Ad15 = jdoubleArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00415_nativemethod (env, instance, Ad1, Ad2, Ad3, Ad4, Ad5, Ad6, Ad7, Ad8, Ad9, Ad10, Ad11, Ad12, Ad13, Ad14, Ad15);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00416_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[416 - 1];

    jdoubleArray Ad1; jdoubleArray Ad2; jdoubleArray Ad3; jdoubleArray Ad4; jdoubleArray Ad5; jdoubleArray Ad6; jdoubleArray Ad7; jdoubleArray Ad8; jdoubleArray Ad9; jdoubleArray Ad10; jdoubleArray Ad11; jdoubleArray Ad12; jdoubleArray Ad13; jdoubleArray Ad14; jdoubleArray Ad15; jdoubleArray Ad16;
    Ad1 = jdoubleArrayValue; Ad2 = jdoubleArrayValue; Ad3 = jdoubleArrayValue; Ad4 = jdoubleArrayValue; Ad5 = jdoubleArrayValue; Ad6 = jdoubleArrayValue; Ad7 = jdoubleArrayValue; Ad8 = jdoubleArrayValue; Ad9 = jdoubleArrayValue; Ad10 = jdoubleArrayValue; Ad11 = jdoubleArrayValue; Ad12 = jdoubleArrayValue; Ad13 = jdoubleArrayValue; Ad14 = jdoubleArrayValue; Ad15 = jdoubleArrayValue; Ad16 = jdoubleArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ad1, Ad2, Ad3, Ad4, Ad5, Ad6, Ad7, Ad8, Ad9, Ad10, Ad11, Ad12, Ad13, Ad14, Ad15, Ad16);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00416_run
(JNIEnv *env, jobject instance) {
    jdoubleArray Ad1; jdoubleArray Ad2; jdoubleArray Ad3; jdoubleArray Ad4; jdoubleArray Ad5; jdoubleArray Ad6; jdoubleArray Ad7; jdoubleArray Ad8; jdoubleArray Ad9; jdoubleArray Ad10; jdoubleArray Ad11; jdoubleArray Ad12; jdoubleArray Ad13; jdoubleArray Ad14; jdoubleArray Ad15; jdoubleArray Ad16;
    Ad1 = jdoubleArrayValue; Ad2 = jdoubleArrayValue; Ad3 = jdoubleArrayValue; Ad4 = jdoubleArrayValue; Ad5 = jdoubleArrayValue; Ad6 = jdoubleArrayValue; Ad7 = jdoubleArrayValue; Ad8 = jdoubleArrayValue; Ad9 = jdoubleArrayValue; Ad10 = jdoubleArrayValue; Ad11 = jdoubleArrayValue; Ad12 = jdoubleArrayValue; Ad13 = jdoubleArrayValue; Ad14 = jdoubleArrayValue; Ad15 = jdoubleArrayValue; Ad16 = jdoubleArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00416_nativemethod (env, instance, Ad1, Ad2, Ad3, Ad4, Ad5, Ad6, Ad7, Ad8, Ad9, Ad10, Ad11, Ad12, Ad13, Ad14, Ad15, Ad16);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00417_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[417 - 1];

    jdoubleArray Ad1; jdoubleArray Ad2; jdoubleArray Ad3; jdoubleArray Ad4; jdoubleArray Ad5; jdoubleArray Ad6; jdoubleArray Ad7; jdoubleArray Ad8; jdoubleArray Ad9; jdoubleArray Ad10; jdoubleArray Ad11; jdoubleArray Ad12; jdoubleArray Ad13; jdoubleArray Ad14; jdoubleArray Ad15; jdoubleArray Ad16; jdoubleArray Ad17;
    Ad1 = jdoubleArrayValue; Ad2 = jdoubleArrayValue; Ad3 = jdoubleArrayValue; Ad4 = jdoubleArrayValue; Ad5 = jdoubleArrayValue; Ad6 = jdoubleArrayValue; Ad7 = jdoubleArrayValue; Ad8 = jdoubleArrayValue; Ad9 = jdoubleArrayValue; Ad10 = jdoubleArrayValue; Ad11 = jdoubleArrayValue; Ad12 = jdoubleArrayValue; Ad13 = jdoubleArrayValue; Ad14 = jdoubleArrayValue; Ad15 = jdoubleArrayValue; Ad16 = jdoubleArrayValue; Ad17 = jdoubleArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ad1, Ad2, Ad3, Ad4, Ad5, Ad6, Ad7, Ad8, Ad9, Ad10, Ad11, Ad12, Ad13, Ad14, Ad15, Ad16, Ad17);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00417_run
(JNIEnv *env, jobject instance) {
    jdoubleArray Ad1; jdoubleArray Ad2; jdoubleArray Ad3; jdoubleArray Ad4; jdoubleArray Ad5; jdoubleArray Ad6; jdoubleArray Ad7; jdoubleArray Ad8; jdoubleArray Ad9; jdoubleArray Ad10; jdoubleArray Ad11; jdoubleArray Ad12; jdoubleArray Ad13; jdoubleArray Ad14; jdoubleArray Ad15; jdoubleArray Ad16; jdoubleArray Ad17;
    Ad1 = jdoubleArrayValue; Ad2 = jdoubleArrayValue; Ad3 = jdoubleArrayValue; Ad4 = jdoubleArrayValue; Ad5 = jdoubleArrayValue; Ad6 = jdoubleArrayValue; Ad7 = jdoubleArrayValue; Ad8 = jdoubleArrayValue; Ad9 = jdoubleArrayValue; Ad10 = jdoubleArrayValue; Ad11 = jdoubleArrayValue; Ad12 = jdoubleArrayValue; Ad13 = jdoubleArrayValue; Ad14 = jdoubleArrayValue; Ad15 = jdoubleArrayValue; Ad16 = jdoubleArrayValue; Ad17 = jdoubleArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00417_nativemethod (env, instance, Ad1, Ad2, Ad3, Ad4, Ad5, Ad6, Ad7, Ad8, Ad9, Ad10, Ad11, Ad12, Ad13, Ad14, Ad15, Ad16, Ad17);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00418_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[418 - 1];

    jdoubleArray Ad1; jdoubleArray Ad2; jdoubleArray Ad3; jdoubleArray Ad4; jdoubleArray Ad5; jdoubleArray Ad6; jdoubleArray Ad7; jdoubleArray Ad8; jdoubleArray Ad9; jdoubleArray Ad10; jdoubleArray Ad11; jdoubleArray Ad12; jdoubleArray Ad13; jdoubleArray Ad14; jdoubleArray Ad15; jdoubleArray Ad16; jdoubleArray Ad17; jdoubleArray Ad18;
    Ad1 = jdoubleArrayValue; Ad2 = jdoubleArrayValue; Ad3 = jdoubleArrayValue; Ad4 = jdoubleArrayValue; Ad5 = jdoubleArrayValue; Ad6 = jdoubleArrayValue; Ad7 = jdoubleArrayValue; Ad8 = jdoubleArrayValue; Ad9 = jdoubleArrayValue; Ad10 = jdoubleArrayValue; Ad11 = jdoubleArrayValue; Ad12 = jdoubleArrayValue; Ad13 = jdoubleArrayValue; Ad14 = jdoubleArrayValue; Ad15 = jdoubleArrayValue; Ad16 = jdoubleArrayValue; Ad17 = jdoubleArrayValue; Ad18 = jdoubleArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ad1, Ad2, Ad3, Ad4, Ad5, Ad6, Ad7, Ad8, Ad9, Ad10, Ad11, Ad12, Ad13, Ad14, Ad15, Ad16, Ad17, Ad18);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00418_run
(JNIEnv *env, jobject instance) {
    jdoubleArray Ad1; jdoubleArray Ad2; jdoubleArray Ad3; jdoubleArray Ad4; jdoubleArray Ad5; jdoubleArray Ad6; jdoubleArray Ad7; jdoubleArray Ad8; jdoubleArray Ad9; jdoubleArray Ad10; jdoubleArray Ad11; jdoubleArray Ad12; jdoubleArray Ad13; jdoubleArray Ad14; jdoubleArray Ad15; jdoubleArray Ad16; jdoubleArray Ad17; jdoubleArray Ad18;
    Ad1 = jdoubleArrayValue; Ad2 = jdoubleArrayValue; Ad3 = jdoubleArrayValue; Ad4 = jdoubleArrayValue; Ad5 = jdoubleArrayValue; Ad6 = jdoubleArrayValue; Ad7 = jdoubleArrayValue; Ad8 = jdoubleArrayValue; Ad9 = jdoubleArrayValue; Ad10 = jdoubleArrayValue; Ad11 = jdoubleArrayValue; Ad12 = jdoubleArrayValue; Ad13 = jdoubleArrayValue; Ad14 = jdoubleArrayValue; Ad15 = jdoubleArrayValue; Ad16 = jdoubleArrayValue; Ad17 = jdoubleArrayValue; Ad18 = jdoubleArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00418_nativemethod (env, instance, Ad1, Ad2, Ad3, Ad4, Ad5, Ad6, Ad7, Ad8, Ad9, Ad10, Ad11, Ad12, Ad13, Ad14, Ad15, Ad16, Ad17, Ad18);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00419_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[419 - 1];

    jdoubleArray Ad1; jdoubleArray Ad2; jdoubleArray Ad3; jdoubleArray Ad4; jdoubleArray Ad5; jdoubleArray Ad6; jdoubleArray Ad7; jdoubleArray Ad8; jdoubleArray Ad9; jdoubleArray Ad10; jdoubleArray Ad11; jdoubleArray Ad12; jdoubleArray Ad13; jdoubleArray Ad14; jdoubleArray Ad15; jdoubleArray Ad16; jdoubleArray Ad17; jdoubleArray Ad18; jdoubleArray Ad19;
    Ad1 = jdoubleArrayValue; Ad2 = jdoubleArrayValue; Ad3 = jdoubleArrayValue; Ad4 = jdoubleArrayValue; Ad5 = jdoubleArrayValue; Ad6 = jdoubleArrayValue; Ad7 = jdoubleArrayValue; Ad8 = jdoubleArrayValue; Ad9 = jdoubleArrayValue; Ad10 = jdoubleArrayValue; Ad11 = jdoubleArrayValue; Ad12 = jdoubleArrayValue; Ad13 = jdoubleArrayValue; Ad14 = jdoubleArrayValue; Ad15 = jdoubleArrayValue; Ad16 = jdoubleArrayValue; Ad17 = jdoubleArrayValue; Ad18 = jdoubleArrayValue; Ad19 = jdoubleArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ad1, Ad2, Ad3, Ad4, Ad5, Ad6, Ad7, Ad8, Ad9, Ad10, Ad11, Ad12, Ad13, Ad14, Ad15, Ad16, Ad17, Ad18, Ad19);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00419_run
(JNIEnv *env, jobject instance) {
    jdoubleArray Ad1; jdoubleArray Ad2; jdoubleArray Ad3; jdoubleArray Ad4; jdoubleArray Ad5; jdoubleArray Ad6; jdoubleArray Ad7; jdoubleArray Ad8; jdoubleArray Ad9; jdoubleArray Ad10; jdoubleArray Ad11; jdoubleArray Ad12; jdoubleArray Ad13; jdoubleArray Ad14; jdoubleArray Ad15; jdoubleArray Ad16; jdoubleArray Ad17; jdoubleArray Ad18; jdoubleArray Ad19;
    Ad1 = jdoubleArrayValue; Ad2 = jdoubleArrayValue; Ad3 = jdoubleArrayValue; Ad4 = jdoubleArrayValue; Ad5 = jdoubleArrayValue; Ad6 = jdoubleArrayValue; Ad7 = jdoubleArrayValue; Ad8 = jdoubleArrayValue; Ad9 = jdoubleArrayValue; Ad10 = jdoubleArrayValue; Ad11 = jdoubleArrayValue; Ad12 = jdoubleArrayValue; Ad13 = jdoubleArrayValue; Ad14 = jdoubleArrayValue; Ad15 = jdoubleArrayValue; Ad16 = jdoubleArrayValue; Ad17 = jdoubleArrayValue; Ad18 = jdoubleArrayValue; Ad19 = jdoubleArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00419_nativemethod (env, instance, Ad1, Ad2, Ad3, Ad4, Ad5, Ad6, Ad7, Ad8, Ad9, Ad10, Ad11, Ad12, Ad13, Ad14, Ad15, Ad16, Ad17, Ad18, Ad19);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00420_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[420 - 1];

    jdoubleArray Ad1; jdoubleArray Ad2; jdoubleArray Ad3; jdoubleArray Ad4; jdoubleArray Ad5; jdoubleArray Ad6; jdoubleArray Ad7; jdoubleArray Ad8; jdoubleArray Ad9; jdoubleArray Ad10; jdoubleArray Ad11; jdoubleArray Ad12; jdoubleArray Ad13; jdoubleArray Ad14; jdoubleArray Ad15; jdoubleArray Ad16; jdoubleArray Ad17; jdoubleArray Ad18; jdoubleArray Ad19; jdoubleArray Ad20;
    Ad1 = jdoubleArrayValue; Ad2 = jdoubleArrayValue; Ad3 = jdoubleArrayValue; Ad4 = jdoubleArrayValue; Ad5 = jdoubleArrayValue; Ad6 = jdoubleArrayValue; Ad7 = jdoubleArrayValue; Ad8 = jdoubleArrayValue; Ad9 = jdoubleArrayValue; Ad10 = jdoubleArrayValue; Ad11 = jdoubleArrayValue; Ad12 = jdoubleArrayValue; Ad13 = jdoubleArrayValue; Ad14 = jdoubleArrayValue; Ad15 = jdoubleArrayValue; Ad16 = jdoubleArrayValue; Ad17 = jdoubleArrayValue; Ad18 = jdoubleArrayValue; Ad19 = jdoubleArrayValue; Ad20 = jdoubleArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, Ad1, Ad2, Ad3, Ad4, Ad5, Ad6, Ad7, Ad8, Ad9, Ad10, Ad11, Ad12, Ad13, Ad14, Ad15, Ad16, Ad17, Ad18, Ad19, Ad20);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00420_run
(JNIEnv *env, jobject instance) {
    jdoubleArray Ad1; jdoubleArray Ad2; jdoubleArray Ad3; jdoubleArray Ad4; jdoubleArray Ad5; jdoubleArray Ad6; jdoubleArray Ad7; jdoubleArray Ad8; jdoubleArray Ad9; jdoubleArray Ad10; jdoubleArray Ad11; jdoubleArray Ad12; jdoubleArray Ad13; jdoubleArray Ad14; jdoubleArray Ad15; jdoubleArray Ad16; jdoubleArray Ad17; jdoubleArray Ad18; jdoubleArray Ad19; jdoubleArray Ad20;
    Ad1 = jdoubleArrayValue; Ad2 = jdoubleArrayValue; Ad3 = jdoubleArrayValue; Ad4 = jdoubleArrayValue; Ad5 = jdoubleArrayValue; Ad6 = jdoubleArrayValue; Ad7 = jdoubleArrayValue; Ad8 = jdoubleArrayValue; Ad9 = jdoubleArrayValue; Ad10 = jdoubleArrayValue; Ad11 = jdoubleArrayValue; Ad12 = jdoubleArrayValue; Ad13 = jdoubleArrayValue; Ad14 = jdoubleArrayValue; Ad15 = jdoubleArrayValue; Ad16 = jdoubleArrayValue; Ad17 = jdoubleArrayValue; Ad18 = jdoubleArrayValue; Ad19 = jdoubleArrayValue; Ad20 = jdoubleArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00420_nativemethod (env, instance, Ad1, Ad2, Ad3, Ad4, Ad5, Ad6, Ad7, Ad8, Ad9, Ad10, Ad11, Ad12, Ad13, Ad14, Ad15, Ad16, Ad17, Ad18, Ad19, Ad20);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00421_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[421 - 1];

    jstring S1;
    S1 = jstringValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, S1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00421_run
(JNIEnv *env, jobject instance) {
    jstring S1;
    S1 = jstringValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00421_nativemethod (env, instance, S1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00422_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[422 - 1];

    jstring S1; jcharArray Ac2;
    S1 = jstringValue; Ac2 = jcharArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, S1, Ac2);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00422_run
(JNIEnv *env, jobject instance) {
    jstring S1; jcharArray Ac2;
    S1 = jstringValue; Ac2 = jcharArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00422_nativemethod (env, instance, S1, Ac2);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00423_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[423 - 1];

    jstring S1; jcharArray Ac2; jchar c3;
    S1 = jstringValue; Ac2 = jcharArrayValue; c3 = 12;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, S1, Ac2, c3);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00423_run
(JNIEnv *env, jobject instance) {
    jstring S1; jcharArray Ac2; jchar c3;
    S1 = jstringValue; Ac2 = jcharArrayValue; c3 = 12;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00423_nativemethod (env, instance, S1, Ac2, c3);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00424_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[424 - 1];

    jstring S1; jcharArray Ac2; jchar c3; jboolean b4;
    S1 = jstringValue; Ac2 = jcharArrayValue; c3 = 12; b4 = 1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, S1, Ac2, c3, b4);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00424_run
(JNIEnv *env, jobject instance) {
    jstring S1; jcharArray Ac2; jchar c3; jboolean b4;
    S1 = jstringValue; Ac2 = jcharArrayValue; c3 = 12; b4 = 1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00424_nativemethod (env, instance, S1, Ac2, c3, b4);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00425_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[425 - 1];

    jstring S1; jcharArray Ac2; jchar c3; jboolean b4; jdouble d5;
    S1 = jstringValue; Ac2 = jcharArrayValue; c3 = 12; b4 = 1; d5 = 105.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, S1, Ac2, c3, b4, d5);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00425_run
(JNIEnv *env, jobject instance) {
    jstring S1; jcharArray Ac2; jchar c3; jboolean b4; jdouble d5;
    S1 = jstringValue; Ac2 = jcharArrayValue; c3 = 12; b4 = 1; d5 = 105.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00425_nativemethod (env, instance, S1, Ac2, c3, b4, d5);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00426_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[426 - 1];

    jstring S1; jcharArray Ac2; jchar c3; jboolean b4; jdouble d5; jfloat f6;
    S1 = jstringValue; Ac2 = jcharArrayValue; c3 = 12; b4 = 1; d5 = 105.1; f6 = 104.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, S1, Ac2, c3, b4, d5, f6);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00426_run
(JNIEnv *env, jobject instance) {
    jstring S1; jcharArray Ac2; jchar c3; jboolean b4; jdouble d5; jfloat f6;
    S1 = jstringValue; Ac2 = jcharArrayValue; c3 = 12; b4 = 1; d5 = 105.1; f6 = 104.1;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00426_nativemethod (env, instance, S1, Ac2, c3, b4, d5, f6);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00427_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[427 - 1];

    jstring S1; jcharArray Ac2; jchar c3; jboolean b4; jdouble d5; jfloat f6; jint i7;
    S1 = jstringValue; Ac2 = jcharArrayValue; c3 = 12; b4 = 1; d5 = 105.1; f6 = 104.1; i7 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, S1, Ac2, c3, b4, d5, f6, i7);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00427_run
(JNIEnv *env, jobject instance) {
    jstring S1; jcharArray Ac2; jchar c3; jboolean b4; jdouble d5; jfloat f6; jint i7;
    S1 = jstringValue; Ac2 = jcharArrayValue; c3 = 12; b4 = 1; d5 = 105.1; f6 = 104.1; i7 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00427_nativemethod (env, instance, S1, Ac2, c3, b4, d5, f6, i7);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00428_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[428 - 1];

    jstring S1; jcharArray Ac2; jchar c3; jboolean b4; jdouble d5; jfloat f6; jint i7; jfloatArray Af8;
    S1 = jstringValue; Ac2 = jcharArrayValue; c3 = 12; b4 = 1; d5 = 105.1; f6 = 104.1; i7 = 102; Af8 = jfloatArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, S1, Ac2, c3, b4, d5, f6, i7, Af8);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00428_run
(JNIEnv *env, jobject instance) {
    jstring S1; jcharArray Ac2; jchar c3; jboolean b4; jdouble d5; jfloat f6; jint i7; jfloatArray Af8;
    S1 = jstringValue; Ac2 = jcharArrayValue; c3 = 12; b4 = 1; d5 = 105.1; f6 = 104.1; i7 = 102; Af8 = jfloatArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00428_nativemethod (env, instance, S1, Ac2, c3, b4, d5, f6, i7, Af8);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00429_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[429 - 1];

    jstring S1; jcharArray Ac2; jchar c3; jboolean b4; jdouble d5; jfloat f6; jint i7; jfloatArray Af8; jlong l9;
    S1 = jstringValue; Ac2 = jcharArrayValue; c3 = 12; b4 = 1; d5 = 105.1; f6 = 104.1; i7 = 102; Af8 = jfloatArrayValue; l9 = 103;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, S1, Ac2, c3, b4, d5, f6, i7, Af8, l9);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00429_run
(JNIEnv *env, jobject instance) {
    jstring S1; jcharArray Ac2; jchar c3; jboolean b4; jdouble d5; jfloat f6; jint i7; jfloatArray Af8; jlong l9;
    S1 = jstringValue; Ac2 = jcharArrayValue; c3 = 12; b4 = 1; d5 = 105.1; f6 = 104.1; i7 = 102; Af8 = jfloatArrayValue; l9 = 103;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00429_nativemethod (env, instance, S1, Ac2, c3, b4, d5, f6, i7, Af8, l9);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00430_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[430 - 1];

    jstring S1; jcharArray Ac2; jchar c3; jboolean b4; jdouble d5; jfloat f6; jint i7; jfloatArray Af8; jlong l9; jobject O10;
    S1 = jstringValue; Ac2 = jcharArrayValue; c3 = 12; b4 = 1; d5 = 105.1; f6 = 104.1; i7 = 102; Af8 = jfloatArrayValue; l9 = 103; O10 = jobjectValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, S1, Ac2, c3, b4, d5, f6, i7, Af8, l9, O10);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00430_run
(JNIEnv *env, jobject instance) {
    jstring S1; jcharArray Ac2; jchar c3; jboolean b4; jdouble d5; jfloat f6; jint i7; jfloatArray Af8; jlong l9; jobject O10;
    S1 = jstringValue; Ac2 = jcharArrayValue; c3 = 12; b4 = 1; d5 = 105.1; f6 = 104.1; i7 = 102; Af8 = jfloatArrayValue; l9 = 103; O10 = jobjectValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00430_nativemethod (env, instance, S1, Ac2, c3, b4, d5, f6, i7, Af8, l9, O10);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00431_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[431 - 1];

    jstring S1; jcharArray Ac2; jchar c3; jboolean b4; jdouble d5; jfloat f6; jint i7; jfloatArray Af8; jlong l9; jobject O10; jlongArray Al11;
    S1 = jstringValue; Ac2 = jcharArrayValue; c3 = 12; b4 = 1; d5 = 105.1; f6 = 104.1; i7 = 102; Af8 = jfloatArrayValue; l9 = 103; O10 = jobjectValue; Al11 = jlongArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, S1, Ac2, c3, b4, d5, f6, i7, Af8, l9, O10, Al11);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00431_run
(JNIEnv *env, jobject instance) {
    jstring S1; jcharArray Ac2; jchar c3; jboolean b4; jdouble d5; jfloat f6; jint i7; jfloatArray Af8; jlong l9; jobject O10; jlongArray Al11;
    S1 = jstringValue; Ac2 = jcharArrayValue; c3 = 12; b4 = 1; d5 = 105.1; f6 = 104.1; i7 = 102; Af8 = jfloatArrayValue; l9 = 103; O10 = jobjectValue; Al11 = jlongArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00431_nativemethod (env, instance, S1, Ac2, c3, b4, d5, f6, i7, Af8, l9, O10, Al11);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00432_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[432 - 1];

    jstring S1; jcharArray Ac2; jchar c3; jboolean b4; jdouble d5; jfloat f6; jint i7; jfloatArray Af8; jlong l9; jobject O10; jlongArray Al11; jintArray Ai12;
    S1 = jstringValue; Ac2 = jcharArrayValue; c3 = 12; b4 = 1; d5 = 105.1; f6 = 104.1; i7 = 102; Af8 = jfloatArrayValue; l9 = 103; O10 = jobjectValue; Al11 = jlongArrayValue; Ai12 = jintArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, S1, Ac2, c3, b4, d5, f6, i7, Af8, l9, O10, Al11, Ai12);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00432_run
(JNIEnv *env, jobject instance) {
    jstring S1; jcharArray Ac2; jchar c3; jboolean b4; jdouble d5; jfloat f6; jint i7; jfloatArray Af8; jlong l9; jobject O10; jlongArray Al11; jintArray Ai12;
    S1 = jstringValue; Ac2 = jcharArrayValue; c3 = 12; b4 = 1; d5 = 105.1; f6 = 104.1; i7 = 102; Af8 = jfloatArrayValue; l9 = 103; O10 = jobjectValue; Al11 = jlongArrayValue; Ai12 = jintArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00432_nativemethod (env, instance, S1, Ac2, c3, b4, d5, f6, i7, Af8, l9, O10, Al11, Ai12);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00433_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[433 - 1];

    jstring S1; jcharArray Ac2; jchar c3; jboolean b4; jdouble d5; jfloat f6; jint i7; jfloatArray Af8; jlong l9; jobject O10; jlongArray Al11; jintArray Ai12; jshort s13;
    S1 = jstringValue; Ac2 = jcharArrayValue; c3 = 12; b4 = 1; d5 = 105.1; f6 = 104.1; i7 = 102; Af8 = jfloatArrayValue; l9 = 103; O10 = jobjectValue; Al11 = jlongArrayValue; Ai12 = jintArrayValue; s13 = 101;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, S1, Ac2, c3, b4, d5, f6, i7, Af8, l9, O10, Al11, Ai12, s13);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00433_run
(JNIEnv *env, jobject instance) {
    jstring S1; jcharArray Ac2; jchar c3; jboolean b4; jdouble d5; jfloat f6; jint i7; jfloatArray Af8; jlong l9; jobject O10; jlongArray Al11; jintArray Ai12; jshort s13;
    S1 = jstringValue; Ac2 = jcharArrayValue; c3 = 12; b4 = 1; d5 = 105.1; f6 = 104.1; i7 = 102; Af8 = jfloatArrayValue; l9 = 103; O10 = jobjectValue; Al11 = jlongArrayValue; Ai12 = jintArrayValue; s13 = 101;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00433_nativemethod (env, instance, S1, Ac2, c3, b4, d5, f6, i7, Af8, l9, O10, Al11, Ai12, s13);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00434_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[434 - 1];

    jstring S1; jcharArray Ac2; jchar c3; jboolean b4; jdouble d5; jfloat f6; jint i7; jfloatArray Af8; jlong l9; jobject O10; jlongArray Al11; jintArray Ai12; jshort s13; jbooleanArray Ab14;
    S1 = jstringValue; Ac2 = jcharArrayValue; c3 = 12; b4 = 1; d5 = 105.1; f6 = 104.1; i7 = 102; Af8 = jfloatArrayValue; l9 = 103; O10 = jobjectValue; Al11 = jlongArrayValue; Ai12 = jintArrayValue; s13 = 101; Ab14 = jbooleanArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, S1, Ac2, c3, b4, d5, f6, i7, Af8, l9, O10, Al11, Ai12, s13, Ab14);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00434_run
(JNIEnv *env, jobject instance) {
    jstring S1; jcharArray Ac2; jchar c3; jboolean b4; jdouble d5; jfloat f6; jint i7; jfloatArray Af8; jlong l9; jobject O10; jlongArray Al11; jintArray Ai12; jshort s13; jbooleanArray Ab14;
    S1 = jstringValue; Ac2 = jcharArrayValue; c3 = 12; b4 = 1; d5 = 105.1; f6 = 104.1; i7 = 102; Af8 = jfloatArrayValue; l9 = 103; O10 = jobjectValue; Al11 = jlongArrayValue; Ai12 = jintArrayValue; s13 = 101; Ab14 = jbooleanArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00434_nativemethod (env, instance, S1, Ac2, c3, b4, d5, f6, i7, Af8, l9, O10, Al11, Ai12, s13, Ab14);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00435_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[435 - 1];

    jstring S1; jcharArray Ac2; jchar c3; jboolean b4; jdouble d5; jfloat f6; jint i7; jfloatArray Af8; jlong l9; jobject O10; jlongArray Al11; jintArray Ai12; jshort s13; jbooleanArray Ab14; jthrowable T15;
    S1 = jstringValue; Ac2 = jcharArrayValue; c3 = 12; b4 = 1; d5 = 105.1; f6 = 104.1; i7 = 102; Af8 = jfloatArrayValue; l9 = 103; O10 = jobjectValue; Al11 = jlongArrayValue; Ai12 = jintArrayValue; s13 = 101; Ab14 = jbooleanArrayValue; T15 = jthrowableValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, S1, Ac2, c3, b4, d5, f6, i7, Af8, l9, O10, Al11, Ai12, s13, Ab14, T15);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00435_run
(JNIEnv *env, jobject instance) {
    jstring S1; jcharArray Ac2; jchar c3; jboolean b4; jdouble d5; jfloat f6; jint i7; jfloatArray Af8; jlong l9; jobject O10; jlongArray Al11; jintArray Ai12; jshort s13; jbooleanArray Ab14; jthrowable T15;
    S1 = jstringValue; Ac2 = jcharArrayValue; c3 = 12; b4 = 1; d5 = 105.1; f6 = 104.1; i7 = 102; Af8 = jfloatArrayValue; l9 = 103; O10 = jobjectValue; Al11 = jlongArrayValue; Ai12 = jintArrayValue; s13 = 101; Ab14 = jbooleanArrayValue; T15 = jthrowableValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00435_nativemethod (env, instance, S1, Ac2, c3, b4, d5, f6, i7, Af8, l9, O10, Al11, Ai12, s13, Ab14, T15);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00436_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[436 - 1];

    jstring S1; jcharArray Ac2; jchar c3; jboolean b4; jdouble d5; jfloat f6; jint i7; jfloatArray Af8; jlong l9; jobject O10; jlongArray Al11; jintArray Ai12; jshort s13; jbooleanArray Ab14; jthrowable T15; jobjectArray AO16;
    S1 = jstringValue; Ac2 = jcharArrayValue; c3 = 12; b4 = 1; d5 = 105.1; f6 = 104.1; i7 = 102; Af8 = jfloatArrayValue; l9 = 103; O10 = jobjectValue; Al11 = jlongArrayValue; Ai12 = jintArrayValue; s13 = 101; Ab14 = jbooleanArrayValue; T15 = jthrowableValue; AO16 = jobjectArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, S1, Ac2, c3, b4, d5, f6, i7, Af8, l9, O10, Al11, Ai12, s13, Ab14, T15, AO16);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00436_run
(JNIEnv *env, jobject instance) {
    jstring S1; jcharArray Ac2; jchar c3; jboolean b4; jdouble d5; jfloat f6; jint i7; jfloatArray Af8; jlong l9; jobject O10; jlongArray Al11; jintArray Ai12; jshort s13; jbooleanArray Ab14; jthrowable T15; jobjectArray AO16;
    S1 = jstringValue; Ac2 = jcharArrayValue; c3 = 12; b4 = 1; d5 = 105.1; f6 = 104.1; i7 = 102; Af8 = jfloatArrayValue; l9 = 103; O10 = jobjectValue; Al11 = jlongArrayValue; Ai12 = jintArrayValue; s13 = 101; Ab14 = jbooleanArrayValue; T15 = jthrowableValue; AO16 = jobjectArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00436_nativemethod (env, instance, S1, Ac2, c3, b4, d5, f6, i7, Af8, l9, O10, Al11, Ai12, s13, Ab14, T15, AO16);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00437_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[437 - 1];

    jstring S1; jcharArray Ac2; jchar c3; jboolean b4; jdouble d5; jfloat f6; jint i7; jfloatArray Af8; jlong l9; jobject O10; jlongArray Al11; jintArray Ai12; jshort s13; jbooleanArray Ab14; jthrowable T15; jobjectArray AO16; jbyteArray Ay17;
    S1 = jstringValue; Ac2 = jcharArrayValue; c3 = 12; b4 = 1; d5 = 105.1; f6 = 104.1; i7 = 102; Af8 = jfloatArrayValue; l9 = 103; O10 = jobjectValue; Al11 = jlongArrayValue; Ai12 = jintArrayValue; s13 = 101; Ab14 = jbooleanArrayValue; T15 = jthrowableValue; AO16 = jobjectArrayValue; Ay17 = jbyteArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, S1, Ac2, c3, b4, d5, f6, i7, Af8, l9, O10, Al11, Ai12, s13, Ab14, T15, AO16, Ay17);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00437_run
(JNIEnv *env, jobject instance) {
    jstring S1; jcharArray Ac2; jchar c3; jboolean b4; jdouble d5; jfloat f6; jint i7; jfloatArray Af8; jlong l9; jobject O10; jlongArray Al11; jintArray Ai12; jshort s13; jbooleanArray Ab14; jthrowable T15; jobjectArray AO16; jbyteArray Ay17;
    S1 = jstringValue; Ac2 = jcharArrayValue; c3 = 12; b4 = 1; d5 = 105.1; f6 = 104.1; i7 = 102; Af8 = jfloatArrayValue; l9 = 103; O10 = jobjectValue; Al11 = jlongArrayValue; Ai12 = jintArrayValue; s13 = 101; Ab14 = jbooleanArrayValue; T15 = jthrowableValue; AO16 = jobjectArrayValue; Ay17 = jbyteArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00437_nativemethod (env, instance, S1, Ac2, c3, b4, d5, f6, i7, Af8, l9, O10, Al11, Ai12, s13, Ab14, T15, AO16, Ay17);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00438_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[438 - 1];

    jstring S1; jcharArray Ac2; jchar c3; jboolean b4; jdouble d5; jfloat f6; jint i7; jfloatArray Af8; jlong l9; jobject O10; jlongArray Al11; jintArray Ai12; jshort s13; jbooleanArray Ab14; jthrowable T15; jobjectArray AO16; jbyteArray Ay17; jbyte y18;
    S1 = jstringValue; Ac2 = jcharArrayValue; c3 = 12; b4 = 1; d5 = 105.1; f6 = 104.1; i7 = 102; Af8 = jfloatArrayValue; l9 = 103; O10 = jobjectValue; Al11 = jlongArrayValue; Ai12 = jintArrayValue; s13 = 101; Ab14 = jbooleanArrayValue; T15 = jthrowableValue; AO16 = jobjectArrayValue; Ay17 = jbyteArrayValue; y18 = 'a';

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, S1, Ac2, c3, b4, d5, f6, i7, Af8, l9, O10, Al11, Ai12, s13, Ab14, T15, AO16, Ay17, y18);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00438_run
(JNIEnv *env, jobject instance) {
    jstring S1; jcharArray Ac2; jchar c3; jboolean b4; jdouble d5; jfloat f6; jint i7; jfloatArray Af8; jlong l9; jobject O10; jlongArray Al11; jintArray Ai12; jshort s13; jbooleanArray Ab14; jthrowable T15; jobjectArray AO16; jbyteArray Ay17; jbyte y18;
    S1 = jstringValue; Ac2 = jcharArrayValue; c3 = 12; b4 = 1; d5 = 105.1; f6 = 104.1; i7 = 102; Af8 = jfloatArrayValue; l9 = 103; O10 = jobjectValue; Al11 = jlongArrayValue; Ai12 = jintArrayValue; s13 = 101; Ab14 = jbooleanArrayValue; T15 = jthrowableValue; AO16 = jobjectArrayValue; Ay17 = jbyteArrayValue; y18 = 'a';

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00438_nativemethod (env, instance, S1, Ac2, c3, b4, d5, f6, i7, Af8, l9, O10, Al11, Ai12, s13, Ab14, T15, AO16, Ay17, y18);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00439_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[439 - 1];

    jstring S1; jcharArray Ac2; jchar c3; jboolean b4; jdouble d5; jfloat f6; jint i7; jfloatArray Af8; jlong l9; jobject O10; jlongArray Al11; jintArray Ai12; jshort s13; jbooleanArray Ab14; jthrowable T15; jobjectArray AO16; jbyteArray Ay17; jbyte y18; jshortArray As19;
    S1 = jstringValue; Ac2 = jcharArrayValue; c3 = 12; b4 = 1; d5 = 105.1; f6 = 104.1; i7 = 102; Af8 = jfloatArrayValue; l9 = 103; O10 = jobjectValue; Al11 = jlongArrayValue; Ai12 = jintArrayValue; s13 = 101; Ab14 = jbooleanArrayValue; T15 = jthrowableValue; AO16 = jobjectArrayValue; Ay17 = jbyteArrayValue; y18 = 'a'; As19 = jshortArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, S1, Ac2, c3, b4, d5, f6, i7, Af8, l9, O10, Al11, Ai12, s13, Ab14, T15, AO16, Ay17, y18, As19);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00439_run
(JNIEnv *env, jobject instance) {
    jstring S1; jcharArray Ac2; jchar c3; jboolean b4; jdouble d5; jfloat f6; jint i7; jfloatArray Af8; jlong l9; jobject O10; jlongArray Al11; jintArray Ai12; jshort s13; jbooleanArray Ab14; jthrowable T15; jobjectArray AO16; jbyteArray Ay17; jbyte y18; jshortArray As19;
    S1 = jstringValue; Ac2 = jcharArrayValue; c3 = 12; b4 = 1; d5 = 105.1; f6 = 104.1; i7 = 102; Af8 = jfloatArrayValue; l9 = 103; O10 = jobjectValue; Al11 = jlongArrayValue; Ai12 = jintArrayValue; s13 = 101; Ab14 = jbooleanArrayValue; T15 = jthrowableValue; AO16 = jobjectArrayValue; Ay17 = jbyteArrayValue; y18 = 'a'; As19 = jshortArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00439_nativemethod (env, instance, S1, Ac2, c3, b4, d5, f6, i7, Af8, l9, O10, Al11, Ai12, s13, Ab14, T15, AO16, Ay17, y18, As19);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00440_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[440 - 1];

    jstring S1; jcharArray Ac2; jchar c3; jboolean b4; jdouble d5; jfloat f6; jint i7; jfloatArray Af8; jlong l9; jobject O10; jlongArray Al11; jintArray Ai12; jshort s13; jbooleanArray Ab14; jthrowable T15; jobjectArray AO16; jbyteArray Ay17; jbyte y18; jshortArray As19; jclass C20;
    S1 = jstringValue; Ac2 = jcharArrayValue; c3 = 12; b4 = 1; d5 = 105.1; f6 = 104.1; i7 = 102; Af8 = jfloatArrayValue; l9 = 103; O10 = jobjectValue; Al11 = jlongArrayValue; Ai12 = jintArrayValue; s13 = 101; Ab14 = jbooleanArrayValue; T15 = jthrowableValue; AO16 = jobjectArrayValue; Ay17 = jbyteArrayValue; y18 = 'a'; As19 = jshortArrayValue; C20 = jclassValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, S1, Ac2, c3, b4, d5, f6, i7, Af8, l9, O10, Al11, Ai12, s13, Ab14, T15, AO16, Ay17, y18, As19, C20);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00440_run
(JNIEnv *env, jobject instance) {
    jstring S1; jcharArray Ac2; jchar c3; jboolean b4; jdouble d5; jfloat f6; jint i7; jfloatArray Af8; jlong l9; jobject O10; jlongArray Al11; jintArray Ai12; jshort s13; jbooleanArray Ab14; jthrowable T15; jobjectArray AO16; jbyteArray Ay17; jbyte y18; jshortArray As19; jclass C20;
    S1 = jstringValue; Ac2 = jcharArrayValue; c3 = 12; b4 = 1; d5 = 105.1; f6 = 104.1; i7 = 102; Af8 = jfloatArrayValue; l9 = 103; O10 = jobjectValue; Al11 = jlongArrayValue; Ai12 = jintArrayValue; s13 = 101; Ab14 = jbooleanArrayValue; T15 = jthrowableValue; AO16 = jobjectArrayValue; Ay17 = jbyteArrayValue; y18 = 'a'; As19 = jshortArrayValue; C20 = jclassValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00440_nativemethod (env, instance, S1, Ac2, c3, b4, d5, f6, i7, Af8, l9, O10, Al11, Ai12, s13, Ab14, T15, AO16, Ay17, y18, As19, C20);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00441_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[441 - 1];

    jstring S1; jcharArray Ac2; jchar c3; jboolean b4; jdouble d5; jfloat f6; jint i7; jfloatArray Af8; jlong l9; jobject O10; jlongArray Al11; jintArray Ai12; jshort s13; jbooleanArray Ab14; jthrowable T15; jobjectArray AO16; jbyteArray Ay17; jbyte y18; jshortArray As19; jclass C20; jdoubleArray Ad21;
    S1 = jstringValue; Ac2 = jcharArrayValue; c3 = 12; b4 = 1; d5 = 105.1; f6 = 104.1; i7 = 102; Af8 = jfloatArrayValue; l9 = 103; O10 = jobjectValue; Al11 = jlongArrayValue; Ai12 = jintArrayValue; s13 = 101; Ab14 = jbooleanArrayValue; T15 = jthrowableValue; AO16 = jobjectArrayValue; Ay17 = jbyteArrayValue; y18 = 'a'; As19 = jshortArrayValue; C20 = jclassValue; Ad21 = jdoubleArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallVoidMethod(env, instance, mid, S1, Ac2, c3, b4, d5, f6, i7, Af8, l9, O10, Al11, Ai12, s13, Ab14, T15, AO16, Ay17, y18, As19, C20, Ad21);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00441_run
(JNIEnv *env, jobject instance) {
    jstring S1; jcharArray Ac2; jchar c3; jboolean b4; jdouble d5; jfloat f6; jint i7; jfloatArray Af8; jlong l9; jobject O10; jlongArray Al11; jintArray Ai12; jshort s13; jbooleanArray Ab14; jthrowable T15; jobjectArray AO16; jbyteArray Ay17; jbyte y18; jshortArray As19; jclass C20; jdoubleArray Ad21;
    S1 = jstringValue; Ac2 = jcharArrayValue; c3 = 12; b4 = 1; d5 = 105.1; f6 = 104.1; i7 = 102; Af8 = jfloatArrayValue; l9 = 103; O10 = jobjectValue; Al11 = jlongArrayValue; Ai12 = jintArrayValue; s13 = 101; Ab14 = jbooleanArrayValue; T15 = jthrowableValue; AO16 = jobjectArrayValue; Ay17 = jbyteArrayValue; y18 = 'a'; As19 = jshortArrayValue; C20 = jclassValue; Ad21 = jdoubleArrayValue;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00441_nativemethod (env, instance, S1, Ac2, c3, b4, d5, f6, i7, Af8, l9, O10, Al11, Ai12, s13, Ab14, T15, AO16, Ay17, y18, As19, C20, Ad21);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00442_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[442 - 1];

    jint i1;
    i1 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallIntMethod(env, instance, mid, i1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00442_run
(JNIEnv *env, jobject instance) {
    jint i1;
    i1 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00442_nativemethod (env, instance, i1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00443_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[443 - 1];

    jint i1;
    i1 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallIntMethod(env, instance, mid, i1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00443_run
(JNIEnv *env, jobject instance) {
    jint i1;
    i1 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00443_nativemethod (env, instance, i1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00444_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[444 - 1];

    jint i1;
    i1 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallIntMethod(env, instance, mid, i1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00444_run
(JNIEnv *env, jobject instance) {
    jint i1;
    i1 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00444_nativemethod (env, instance, i1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00445_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[445 - 1];

    jint i1;
    i1 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallIntMethod(env, instance, mid, i1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00445_run
(JNIEnv *env, jobject instance) {
    jint i1;
    i1 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00445_nativemethod (env, instance, i1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00446_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[446 - 1];

    jint i1;
    i1 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallIntMethod(env, instance, mid, i1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00446_run
(JNIEnv *env, jobject instance) {
    jint i1;
    i1 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00446_nativemethod (env, instance, i1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00447_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[447 - 1];

    jint i1;
    i1 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallIntMethod(env, instance, mid, i1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00447_run
(JNIEnv *env, jobject instance) {
    jint i1;
    i1 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00447_nativemethod (env, instance, i1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00448_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[448 - 1];

    jint i1;
    i1 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallObjectMethod(env, instance, mid, i1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00448_run
(JNIEnv *env, jobject instance) {
    jint i1;
    i1 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00448_nativemethod (env, instance, i1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00449_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[449 - 1];

    jint i1;
    i1 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallObjectMethod(env, instance, mid, i1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00449_run
(JNIEnv *env, jobject instance) {
    jint i1;
    i1 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00449_nativemethod (env, instance, i1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00450_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[450 - 1];

    jint i1;
    i1 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallCharMethod(env, instance, mid, i1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00450_run
(JNIEnv *env, jobject instance) {
    jint i1;
    i1 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00450_nativemethod (env, instance, i1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00451_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[451 - 1];

    jint i1;
    i1 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallBooleanMethod(env, instance, mid, i1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00451_run
(JNIEnv *env, jobject instance) {
    jint i1;
    i1 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00451_nativemethod (env, instance, i1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00452_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[452 - 1];

    jint i1;
    i1 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallDoubleMethod(env, instance, mid, i1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00452_run
(JNIEnv *env, jobject instance) {
    jint i1;
    i1 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00452_nativemethod (env, instance, i1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00453_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[453 - 1];

    jint i1;
    i1 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallFloatMethod(env, instance, mid, i1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00453_run
(JNIEnv *env, jobject instance) {
    jint i1;
    i1 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00453_nativemethod (env, instance, i1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00454_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[454 - 1];

    jint i1;
    i1 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallIntMethod(env, instance, mid, i1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00454_run
(JNIEnv *env, jobject instance) {
    jint i1;
    i1 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00454_nativemethod (env, instance, i1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00455_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[455 - 1];

    jint i1;
    i1 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallObjectMethod(env, instance, mid, i1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00455_run
(JNIEnv *env, jobject instance) {
    jint i1;
    i1 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00455_nativemethod (env, instance, i1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00456_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[456 - 1];

    jint i1;
    i1 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallLongMethod(env, instance, mid, i1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00456_run
(JNIEnv *env, jobject instance) {
    jint i1;
    i1 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00456_nativemethod (env, instance, i1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00457_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[457 - 1];

    jint i1;
    i1 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallObjectMethod(env, instance, mid, i1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00457_run
(JNIEnv *env, jobject instance) {
    jint i1;
    i1 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00457_nativemethod (env, instance, i1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00458_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[458 - 1];

    jint i1;
    i1 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallObjectMethod(env, instance, mid, i1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00458_run
(JNIEnv *env, jobject instance) {
    jint i1;
    i1 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00458_nativemethod (env, instance, i1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00459_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[459 - 1];

    jint i1;
    i1 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallObjectMethod(env, instance, mid, i1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00459_run
(JNIEnv *env, jobject instance) {
    jint i1;
    i1 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00459_nativemethod (env, instance, i1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00460_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[460 - 1];

    jint i1;
    i1 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallShortMethod(env, instance, mid, i1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00460_run
(JNIEnv *env, jobject instance) {
    jint i1;
    i1 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00460_nativemethod (env, instance, i1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00461_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[461 - 1];

    jint i1;
    i1 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallObjectMethod(env, instance, mid, i1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00461_run
(JNIEnv *env, jobject instance) {
    jint i1;
    i1 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00461_nativemethod (env, instance, i1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00462_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[462 - 1];

    jint i1;
    i1 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallObjectMethod(env, instance, mid, i1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00462_run
(JNIEnv *env, jobject instance) {
    jint i1;
    i1 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00462_nativemethod (env, instance, i1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00463_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[463 - 1];

    jint i1;
    i1 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallObjectMethod(env, instance, mid, i1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00463_run
(JNIEnv *env, jobject instance) {
    jint i1;
    i1 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00463_nativemethod (env, instance, i1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00464_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[464 - 1];

    jint i1;
    i1 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallObjectMethod(env, instance, mid, i1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00464_run
(JNIEnv *env, jobject instance) {
    jint i1;
    i1 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00464_nativemethod (env, instance, i1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00465_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[465 - 1];

    jint i1;
    i1 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallByteMethod(env, instance, mid, i1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00465_run
(JNIEnv *env, jobject instance) {
    jint i1;
    i1 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00465_nativemethod (env, instance, i1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00466_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[466 - 1];

    jint i1;
    i1 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallObjectMethod(env, instance, mid, i1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00466_run
(JNIEnv *env, jobject instance) {
    jint i1;
    i1 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00466_nativemethod (env, instance, i1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00467_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[467 - 1];

    jint i1;
    i1 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallObjectMethod(env, instance, mid, i1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00467_run
(JNIEnv *env, jobject instance) {
    jint i1;
    i1 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00467_nativemethod (env, instance, i1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2JBenchmark00468_run
(JNIEnv *env, jobject instance) {
    jmethodID mid = mids[468 - 1];

    jint i1;
    i1 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        (*env)->CallObjectMethod(env, instance, mid, i1);
    }
}



JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_C2CBenchmark00468_run
(JNIEnv *env, jobject instance) {
    jint i1;
    i1 = 102;

    jlong i;
    for (i = 0; i < repetitions; i++) {
        Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_J2CBenchmark00468_nativemethod (env, instance, i1);
    }
}



