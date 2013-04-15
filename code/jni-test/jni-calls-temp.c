
/* puuttuu!!! makroversiot...) */

GET_STATIC_TYPE_FIELD(jobject, Object, true);
GET_STATIC_TYPE_FIELD(jboolean, Boolean, false);
GET_STATIC_TYPE_FIELD(jbyte, Byte, false);
GET_STATIC_TYPE_FIELD(jchar, Char, false);
GET_STATIC_TYPE_FIELD(jshort, Short, false);
GET_STATIC_TYPE_FIELD(jint, Int, false);
GET_STATIC_TYPE_FIELD(jlong, Long, false);
GET_STATIC_TYPE_FIELD(jfloat, Float, false);
GET_STATIC_TYPE_FIELD(jdouble, Double, false);
SET_STATIC_TYPE_FIELD(jobject, Object*, Object, true);
SET_STATIC_TYPE_FIELD(jboolean, bool, Boolean, false);
SET_STATIC_TYPE_FIELD(jbyte, s1, Byte, false);
SET_STATIC_TYPE_FIELD(jchar, u2, Char, false);
SET_STATIC_TYPE_FIELD(jshort, s2, Short, false);
SET_STATIC_TYPE_FIELD(jint, s4, Int, false);
SET_STATIC_TYPE_FIELD(jlong, s8, Long, false);
SET_STATIC_TYPE_FIELD(jfloat, float, Float, false);
SET_STATIC_TYPE_FIELD(jdouble, double, Double, false);
GET_TYPE_FIELD(jobject, Object, true);
GET_TYPE_FIELD(jboolean, Boolean, false);
GET_TYPE_FIELD(jbyte, Byte, false);
GET_TYPE_FIELD(jchar, Char, false);
GET_TYPE_FIELD(jshort, Short, false);
GET_TYPE_FIELD(jint, Int, false);
GET_TYPE_FIELD(jlong, Long, false);
GET_TYPE_FIELD(jfloat, Float, false);
GET_TYPE_FIELD(jdouble, Double, false);
SET_TYPE_FIELD(jobject, Object*, Object, true);
SET_TYPE_FIELD(jboolean, bool, Boolean, false);
SET_TYPE_FIELD(jbyte, s1, Byte, false);
SET_TYPE_FIELD(jchar, u2, Char, false);
SET_TYPE_FIELD(jshort, s2, Short, false);
SET_TYPE_FIELD(jint, s4, Int, false);
SET_TYPE_FIELD(jlong, s8, Long, false);
SET_TYPE_FIELD(jfloat, float, Float, false);
SET_TYPE_FIELD(jdouble, double, Double, false);
CALL_VIRTUAL(jobject, Object, NULL, (jobject) result.l, true);
CALL_VIRTUAL(jboolean, Boolean, 0, result.z, false);
CALL_VIRTUAL(jbyte, Byte, 0, result.b, false);
CALL_VIRTUAL(jchar, Char, 0, result.c, false);
CALL_VIRTUAL(jshort, Short, 0, result.s, false);
CALL_VIRTUAL(jint, Int, 0, result.i, false);
CALL_VIRTUAL(jlong, Long, 0, result.j, false);
CALL_VIRTUAL(jfloat, Float, 0.0f, result.f, false);
CALL_VIRTUAL(jdouble, Double, 0.0, result.d, false);
CALL_VIRTUAL(void, Void, , , false);
CALL_NONVIRTUAL(jobject, Object, NULL, (jobject) result.l, true);
CALL_NONVIRTUAL(jboolean, Boolean, 0, result.z, false);
CALL_NONVIRTUAL(jbyte, Byte, 0, result.b, false);
CALL_NONVIRTUAL(jchar, Char, 0, result.c, false);
CALL_NONVIRTUAL(jshort, Short, 0, result.s, false);
CALL_NONVIRTUAL(jint, Int, 0, result.i, false);
CALL_NONVIRTUAL(jlong, Long, 0, result.j, false);
CALL_NONVIRTUAL(jfloat, Float, 0.0f, result.f, false);
CALL_NONVIRTUAL(jdouble, Double, 0.0, result.d, false);
CALL_NONVIRTUAL(void, Void, , , false);
CALL_STATIC(jobject, Object, NULL, (jobject) result.l, true);
CALL_STATIC(jboolean, Boolean, 0, result.z, false);
CALL_STATIC(jbyte, Byte, 0, result.b, false);
CALL_STATIC(jchar, Char, 0, result.c, false);
CALL_STATIC(jshort, Short, 0, result.s, false);
CALL_STATIC(jint, Int, 0, result.i, false);
CALL_STATIC(jlong, Long, 0, result.j, false);
CALL_STATIC(jfloat, Float, 0.0f, result.f, false);
CALL_STATIC(jdouble, Double, 0.0, result.d, false);
CALL_STATIC(void, Void, , , false);
NEW_PRIMITIVE_ARRAY(jbooleanArray, Boolean, 'Z');
NEW_PRIMITIVE_ARRAY(jbyteArray, Byte, 'B');
NEW_PRIMITIVE_ARRAY(jcharArray, Char, 'C');
NEW_PRIMITIVE_ARRAY(jshortArray, Short, 'S');
NEW_PRIMITIVE_ARRAY(jintArray, Int, 'I');
NEW_PRIMITIVE_ARRAY(jlongArray, Long, 'J');
NEW_PRIMITIVE_ARRAY(jfloatArray, Float, 'F');
NEW_PRIMITIVE_ARRAY(jdoubleArray, Double, 'D');

    GET_PRIMITIVE_ARRAY_ELEMENTS(_ctype, _jname);                           \
    RELEASE_PRIMITIVE_ARRAY_ELEMENTS(_ctype, _jname);                       \
    GET_PRIMITIVE_ARRAY_REGION(_ctype, _jname);                             \
    SET_PRIMITIVE_ARRAY_REGION(_ctype, _jname);
 

PRIMITIVE_ARRAY_FUNCTIONS(jboolean, Boolean);
PRIMITIVE_ARRAY_FUNCTIONS(jbyte, Byte);
PRIMITIVE_ARRAY_FUNCTIONS(jchar, Char);
PRIMITIVE_ARRAY_FUNCTIONS(jshort, Short);
PRIMITIVE_ARRAY_FUNCTIONS(jint, Int);
PRIMITIVE_ARRAY_FUNCTIONS(jlong, Long);
PRIMITIVE_ARRAY_FUNCTIONS(jfloat, Float);
PRIMITIVE_ARRAY_FUNCTIONS(jdouble, Double);


/* TODO */
// todo: impossible to make generic -> examples or generate intelligently?
// "make database of classes and objects" ..
// or: reflect and get the object fields etc before measuring
jobjectIn = (*env)->NewObject(env, jclass jclazz, jmethodID methodID, ...);
jobjectIn = (*env)->NewObjectV(env, jclass jclazz, jmethodID methodID, va_list args);
jobjectIn = (*env)->NewObjectA(env, jclass jclazz, jmethodID methodID, jvalue* args);


/* OK arrays, strings */

jsizeIn = (*env)->GetArrayLength(env, jarray jarr);
jsizeIn = (*env)->GetStringLength(env, jstring jstr);
jsizeIn = (*env)->GetStringUTFLength(env, jstring jstr);

char_ptrIn = (*env)->GetStringUTFChars(env, jstring jstr, jboolean* isCopy);
jchar_ptrIn = (*env)->GetStringChars(env, jstring jstr, jboolean* isCopy);
jchar_ptrIn = (*env)->GetStringCritical(env, jstring jstr, jboolean* isCopy);
(*env)->ReleaseStringChars(env, jstring jstr, const jchar* chars);
(*env)->ReleaseStringCritical(env, jstring jstr, const jchar* carray);
(*env)->ReleaseStringUTFChars(env, jstring jstr, const char* utf);

(*env)->GetStringRegion(env, jstring jstr, jsize start, jsize len, jchar* buf);

void*In = (*env)->GetPrimitiveArrayCritical(env, jarray jarr, jboolean* isCopy);
(*env)->ReleasePrimitiveArrayCritical(env, jarray jarr, void* carray, jint mode);

jobjectIn = (*env)->GetObjectArrayElement(env, jobjectArray jarr, jsize index);
(*env)->SetObjectArrayElement(env, jobjectArray jarr, jsize index, jobject jobj);

/* OK nio */
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


/* OK references */
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

/* OK exceptions */

jintIn = (*env)->Throw(env, jthrowable jobj);
jintIn = (*env)->ThrowNew(env, jclass jclazz, const char* message);
jbooleanIn = (*env)->ExceptionCheck(env);
jthrowableIn = (*env)->ExceptionOccurred(env);
(*env)->ExceptionClear(env);
(*env)->ExceptionDescribe(env);
(*env)->FatalError(env, const char* msg);


/* ---------------- ignore line ------------- */

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

