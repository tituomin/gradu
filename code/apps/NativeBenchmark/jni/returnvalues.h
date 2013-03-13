
#ifndef RETURNVALUES_H_
#define RETURNVALUES_H_

#define RETURN_VALUE(type) static type type ## Value;
#define NULL 0


#define CHECK_AND_CALL(variable, Type, signature)                   \
                                                                    \
    jmethodID retrieve ## Type = (*env)->GetMethodID(               \
        env, cls, "retrieve" # Type, signature);                    \
                                                                    \
    if (retrieve ## Type == NULL) {                                 \
        __android_log_write(ANDROID_LOG_ERROR,                      \
            "nativebenchmark", "missing method for " # Type);       \
       return 0;                                                    \
    }                                                               \
    local_reference = (*env)->CallObjectMethod(                     \
        env, benchmarkParameter, retrieve ## Type);                 \
                                                                    \
    variable ## Value = (*env)->NewGlobalRef(env, local_reference); \
    if (variable ## Value == NULL) {                                \
        __android_log_write(ANDROID_LOG_ERROR,                      \
            "nativebenchmark", "can't create global reference"); }  

RETURN_VALUE(jclass)
RETURN_VALUE(jobject)
RETURN_VALUE(jstring)
RETURN_VALUE(jthrowable)
RETURN_VALUE(jcharArray)
RETURN_VALUE(jfloatArray)
RETURN_VALUE(jlongArray)
RETURN_VALUE(jintArray)
RETURN_VALUE(jbooleanArray)
RETURN_VALUE(jobjectArray)
RETURN_VALUE(jbyteArray)
RETURN_VALUE(jshortArray)
RETURN_VALUE(jdoubleArray)

JNIEXPORT int JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_BenchmarkParameter_initReturnvalues
(JNIEnv* env, jobject benchmarkParameter)
{
    jclass cls = (*env)->GetObjectClass(env, benchmarkParameter);
    jobject local_reference;

    CHECK_AND_CALL(jbooleanArray, BooleanArray, "()[Z")
    CHECK_AND_CALL(jbyteArray,    ByteArray,    "()[B")
    CHECK_AND_CALL(jcharArray,    CharArray,    "()[C")
    CHECK_AND_CALL(jdoubleArray,  DoubleArray,  "()[D")
    CHECK_AND_CALL(jfloatArray,   FloatArray,   "()[F")
    CHECK_AND_CALL(jintArray,     IntArray,     "()[I")
    CHECK_AND_CALL(jlongArray,    LongArray,    "()[J")
    CHECK_AND_CALL(jshortArray,   ShortArray,   "()[S")
    CHECK_AND_CALL(jobjectArray,  ObjectArray,  "()[Ljava/lang/Object;")
    CHECK_AND_CALL(jobject,       Object,       "()Ljava/lang/Object;")
    CHECK_AND_CALL(jclass,        Class,        "()Ljava/lang/Class;")
    CHECK_AND_CALL(jstring,       String,       "()Ljava/lang/String;")
    CHECK_AND_CALL(jthrowable,    Throwable,    "()Ljava/lang/Throwable")

    return 1;

}

JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_benchmark_BenchmarkParameter_freeReturnvalues
(JNIEnv* env, jobject benchmarkParameter)
{
    (*env)->DeleteGlobalRef(env, jclassValue);
    (*env)->DeleteGlobalRef(env, jobjectValue);
    (*env)->DeleteGlobalRef(env, jstringValue);
    (*env)->DeleteGlobalRef(env, jthrowableValue);
    (*env)->DeleteGlobalRef(env, jcharArrayValue);
    (*env)->DeleteGlobalRef(env, jfloatArrayValue);
    (*env)->DeleteGlobalRef(env, jlongArrayValue);
    (*env)->DeleteGlobalRef(env, jintArrayValue);
    (*env)->DeleteGlobalRef(env, jbooleanArrayValue);
    (*env)->DeleteGlobalRef(env, jobjectArrayValue);
    (*env)->DeleteGlobalRef(env, jbyteArrayValue);
    (*env)->DeleteGlobalRef(env, jshortArrayValue);
    (*env)->DeleteGlobalRef(env, jdoubleArrayValue);
}

#endif
