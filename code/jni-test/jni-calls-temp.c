
/* puuttuu!!! makroversiot...) */

/* OK arrays, strings */

jsizeIn = (*env)->GetArrayLength(env, jarray jarr);
jsizeIn = (*env)->GetStringLength(env, jstring jstr);
jsizeIn = (*env)->GetStringUTFLength(env, jstring jstr);

const char_ptrIn = (*env)->GetStringUTFChars(env, jstring jstr, jboolean* isCopy);
const jchar_ptrIn = (*env)->GetStringChars(env, jstring jstr, jboolean* isCopy);
const jchar_ptrIn = (*env)->GetStringCritical(env, jstring jstr, jboolean* isCopy);
(*env)->ReleaseStringChars(env, jstring jstr, const jchar* chars);
(*env)->ReleaseStringCritical(env, jstring jstr, const jchar* carray);
(*env)->ReleaseStringUTFChars(env, jstring jstr, const char* utf);

(*env)->GetStringRegion(env, jstring jstr, jsize start, jsize len, jchar* buf);

void*In = (*env)->GetPrimitiveArrayCritical(env, jarray jarr, jboolean* isCopy);
(*env)->ReleasePrimitiveArrayCritical(env, jarray jarr, void* carray, jint mode);

jobjectIn = (*env)->GetObjectArrayElement(env, jobjectArray jarr, jsize index);
(*env)->SetObjectArrayElement(env, jobjectArray jarr, jsize index, jobject jobj);

/* nio */
jlongIn = (*env)->GetDirectBufferCapacity(env, jobject jbuf);
void_ptrIn = (*env)->GetDirectBufferAddress(env, jobject jbuf);

/* OK id search */

jclassIn = (*env)->GetObjectClass(env, jobjectValue);
jclassIn = (*env)->FindClass(env, const char* name);
jfieldIDIn = (*env)->GetFieldID(env, jclass jclazz, const char* name, const char* sig);
jfieldIDIn = (*env)->GetStaticFieldID(env, jclass jclazz, const char* name, const char* sig);
jmethodIDIn = (*env)->GetMethodID(env, jclass jclazz, const char* name, const char* sig);
jmethodIDIn = (*env)->GetStaticMethodID(env, jclass jclazz, const char* name, const char* sig);

/* OK ... allocation */
jobjectIn = (*env)->AllocObject(env, jclass jclazz); // todo: ignore?

jstringIn = (*env)->NewStringUTF(env, const char* bytes);
jstringIn = (*env)->NewString(env, const jchar* unicodeChars, jsize len);

jobjectArrayIn = (*env)->NewObjectArray(env, jsize length, jclass jelementClass, jobject jinitialElement);
jobjectIn = (*env)->NewDirectByteBuffer(env, void* address, jlong capacity);

// todo: impossible to make generic -> examples or generate intelligently?
// "make database of classes and objects" ..
// or: reflect and get the object fields etc before measuring
jobjectIn = (*env)->NewObject(env, jclass jclazz, jmethodID methodID, ...);
jobjectIn = (*env)->NewObjectV(env, jclass jclazz, jmethodID methodID, va_list args);
jobjectIn = (*env)->NewObjectA(env, jclass jclazz, jmethodID methodID, jvalue* args);

/* references */
jobjectIn = (*env)->NewGlobalRef(env, jobject jobj);
(*env)->DeleteGlobalRef(env, jobject jglobalRef);

jobjectIn = (*env)->NewLocalRef(env, jobject jobj);
(*env)->DeleteLocalRef(env, jobject jlocalRef);

jweakIn = (*env)->NewWeakGlobalRef(env, jobject jobj);
(*env)->DeleteWeakGlobalRef(env, jweak wref);

jintIn = (*env)->PushLocalFrame(env, jint capacity);
jobjectIn = (*env)->PopLocalFrame(env, jobject jresult);

jintIn = (*env)->EnsureLocalCapacity(env, jint capacity); // todo: how to test
jobjectRefTypeIn = (*env)->GetObjectRefType(env, jobject jobj); // todo: ignore?

/* register */

jintIn = (*env)->RegisterNatives(env, jclass jclazz, const JNINativeMethod* methods, jint nMethods);
jintIn = (*env)->UnregisterNatives(env, jclass jclazz);


/* reflection */
jfieldIDIn = (*env)->FromReflectedField(env, jobject jfield);
jmethodIDIn = (*env)->FromReflectedMethod(env, jobject jmethod);
jobjectIn = (*env)->ToReflectedField(env, jclass jcls, jfieldID fieldID, jboolean isStatic);
jobjectIn = (*env)->ToReflectedMethod(env, jclass jcls, jmethodID methodID, jboolean isStatic);

/* misc utils */
jbooleanIn = (*env)->IsAssignableFrom(env, jclass jclazz1, jclass jclazz2);
jbooleanIn = (*env)->IsInstanceOf(env, jobject jobj, jclass jclazz);
jbooleanIn = (*env)->IsSameObject(env, jobject jref1, jobject jref2);
jclassIn = (*env)->GetSuperclass(env, jclass jclazz);

/* exceptions */

jintIn = (*env)->Throw(env, jthrowable jobj);
jintIn = (*env)->ThrowNew(env, jclass jclazz, const char* message);
jbooleanIn = (*env)->ExceptionCheck(env);
jthrowableIn = (*env)->ExceptionOccurred(env);
(*env)->ExceptionClear(env);
(*env)->ExceptionDescribe(env);
(*env)->FatalError(env, const char* msg);

/* threads */

jintIn = (*env)->MonitorEnter(env, jobject jobj);
jintIn = (*env)->MonitorExit(env, jobject jobj);
jintIn = (*env)->attachThread (JavaVM* vm, JNIEnv** p_env, void* thr_args, bool isDaemon);
jintIn = (*env)->AttachCurrentThread (JavaVM* vm, JNIEnv** p_env, void* thr_args);
jintIn = (*env)->AttachCurrentThreadAsDaemon (JavaVM* vm, JNIEnv** p_env, void* thr_args);
jintIn = (*env)->DetachCurrentThread (JavaVM* vm);

/* create class */
jclassIn = (*env)->DefineClass(env, const char *name, jobject loader, const jbyte* buf, jsize bufLen);


/* environment */

jintIn = (*env)->DestroyJavaVM (JavaVM* vm);
jintIn = (*env)->GetJavaVM(env, JavaVM** vm);
jintIn = (*env)->GetVersion(env);
jintIn = (*env)->GetEnv (JavaVM* vm, void** env, jint version);


/* todo */

// makrot:
/*val = (*env)-> GET_STATIC_TYPE_FIELD(_ctype, _jname, _isref) */
/* SET_STATIC_TYPE_FIELD(_ctype, _ctype2, _jname, _isref) */
/* GET_TYPE_FIELD(_ctype, _jname, _isref) */
/* SET_TYPE_FIELD(_ctype, _ctype2, _jname, _isref) */

/* CALL_VIRTUAL(_ctype, _jname, _retfail, _retok, _isref) */
/* CALL_NONVIRTUAL(_ctype, _jname, _retfail, _retok, _isref) */
/* CALL_STATIC(_ctype, _jname, _retfail, _retok, _isref) */

/* NEW_PRIMITIVE_ARRAY(_artype, _jname, _typechar) */

/* GET_PRIMITIVE_ARRAY_ELEMENTS(_ctype, _jname) */
/* RELEASE_PRIMITIVE_ARRAY_ELEMENTS(_ctype, _jname) */
/* GET_PRIMITIVE_ARRAY_REGION(_ctype, _jname) */
/* SET_PRIMITIVE_ARRAY_REGION(_ctype, _jname) */

/* PRIMITIVE_ARRAY_FUNCTIONS(_ctype, _jname) */

// idea: poimi makroilla luodut versiot 
// kääntäjän preprosessoritulostuksesta

