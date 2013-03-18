
#ifndef RETURNVALUES_H_
#define RETURNVALUES_H_

#define RETURN_VALUE(type) type type ## Value;
#define NULL 0

#define LOCAL_FRAME_SIZE 100

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



#endif
