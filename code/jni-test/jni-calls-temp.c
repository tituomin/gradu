
static jint GetVersion(JNIEnv* env)
static jclass DefineClass(JNIEnv* env, const char *name, jobject loader, const jbyte* buf, jsize bufLen)
static jclass FindClass(JNIEnv* env, const char* name)
static jclass GetSuperclass(JNIEnv* env, jclass jclazz)
static jboolean IsAssignableFrom(JNIEnv* env, jclass jclazz1, jclass jclazz2)
static jmethodID FromReflectedMethod(JNIEnv* env, jobject jmethod)
static jfieldID FromReflectedField(JNIEnv* env, jobject jfield)
static jobject ToReflectedMethod(JNIEnv* env, jclass jcls, jmethodID methodID, jboolean isStatic)
static jobject ToReflectedField(JNIEnv* env, jclass jcls, jfieldID fieldID, jboolean isStatic)
static jint Throw(JNIEnv* env, jthrowable jobj)
static jint ThrowNew(JNIEnv* env, jclass jclazz, const char* message)
static jthrowable ExceptionOccurred(JNIEnv* env)
static void ExceptionDescribe(JNIEnv* env)
static void ExceptionClear(JNIEnv* env)
static void FatalError(JNIEnv* env, const char* msg)
static jint PushLocalFrame(JNIEnv* env, jint capacity)
static jobject PopLocalFrame(JNIEnv* env, jobject jresult)
static jobject NewGlobalRef(JNIEnv* env, jobject jobj)
static void DeleteGlobalRef(JNIEnv* env, jobject jglobalRef)
static jobject NewLocalRef(JNIEnv* env, jobject jobj)
static void DeleteLocalRef(JNIEnv* env, jobject jlocalRef)
static jint EnsureLocalCapacity(JNIEnv* env, jint capacity)
static jboolean IsSameObject(JNIEnv* env, jobject jref1, jobject jref2)
static jobject AllocObject(JNIEnv* env, jclass jclazz)
static jobject NewObject(JNIEnv* env, jclass jclazz, jmethodID methodID, ...)
static jobject NewObjectV(JNIEnv* env, jclass jclazz, jmethodID methodID, va_list args)
static jobject NewObjectA(JNIEnv* env, jclass jclazz, jmethodID methodID, jvalue* args)
static jclass GetObjectClass(JNIEnv* env, jobject jobj)
static jboolean IsInstanceOf(JNIEnv* env, jobject jobj, jclass jclazz)
static jmethodID GetMethodID(JNIEnv* env, jclass jclazz, const char* name, const char* sig)
static jfieldID GetFieldID(JNIEnv* env, jclass jclazz, const char* name, const char* sig)
static jmethodID GetStaticMethodID(JNIEnv* env, jclass jclazz, const char* name, const char* sig)
static jfieldID GetStaticFieldID(JNIEnv* env, jclass jclazz, const char* name, const char* sig)
static jstring NewString(JNIEnv* env, const jchar* unicodeChars, jsize len)
static jsize GetStringLength(JNIEnv* env, jstring jstr)
static const jchar* GetStringChars(JNIEnv* env, jstring jstr, jboolean* isCopy)
static void ReleaseStringChars(JNIEnv* env, jstring jstr, const jchar* chars)
static jstring NewStringUTF(JNIEnv* env, const char* bytes)
static jsize GetStringUTFLength(JNIEnv* env, jstring jstr)
static const char* GetStringUTFChars(JNIEnv* env, jstring jstr, jboolean* isCopy)
static void ReleaseStringUTFChars(JNIEnv* env, jstring jstr, const char* utf)
static jsize GetArrayLength(JNIEnv* env, jarray jarr)
static jobjectArray NewObjectArray(JNIEnv* env, jsize length, jclass jelementClass, jobject jinitialElement)
static bool checkArrayElementBounds(ArrayObject* arrayObj, jsize index)
static jobject GetObjectArrayElement(JNIEnv* env, jobjectArray jarr, jsize index)
static void SetObjectArrayElement(JNIEnv* env, jobjectArray jarr, jsize index, jobject jobj)
static void throwArrayRegionOutOfBounds(ArrayObject* arrayObj, jsize start, jsize len, const char* arrayIdentifier)
static jint RegisterNatives(JNIEnv* env, jclass jclazz, const JNINativeMethod* methods, jint nMethods)
static jint UnregisterNatives(JNIEnv* env, jclass jclazz)
static jint MonitorEnter(JNIEnv* env, jobject jobj)
static jint MonitorExit(JNIEnv* env, jobject jobj)
static jint GetJavaVM(JNIEnv* env, JavaVM** vm)
static void GetStringRegion(JNIEnv* env, jstring jstr, jsize start, jsize len, jchar* buf)
static void GetStringUTFRegion(JNIEnv* env, jstring jstr, jsize start, jsize len, char* buf)
static void* GetPrimitiveArrayCritical(JNIEnv* env, jarray jarr, jboolean* isCopy)
static void ReleasePrimitiveArrayCritical(JNIEnv* env, jarray jarr, void* carray, jint mode)
static const jchar* GetStringCritical(JNIEnv* env, jstring jstr, jboolean* isCopy)
static void ReleaseStringCritical(JNIEnv* env, jstring jstr, const jchar* carray)
static jweak NewWeakGlobalRef(JNIEnv* env, jobject jobj)
static void DeleteWeakGlobalRef(JNIEnv* env, jweak wref)
static jboolean ExceptionCheck(JNIEnv* env)
static jobjectRefType GetObjectRefType(JNIEnv* env, jobject jobj)
static jobject NewDirectByteBuffer(JNIEnv* env, void* address, jlong capacity)
static void* GetDirectBufferAddress(JNIEnv* env, jobject jbuf)
static jlong GetDirectBufferCapacity(JNIEnv* env, jobject jbuf)
static jint attachThread(JavaVM* vm, JNIEnv** p_env, void* thr_args, bool isDaemon)
static jint AttachCurrentThread(JavaVM* vm, JNIEnv** p_env, void* thr_args)
static jint AttachCurrentThreadAsDaemon(JavaVM* vm, JNIEnv** p_env, void* thr_args)
static jint DetachCurrentThread(JavaVM* vm)
static jint GetEnv(JavaVM* vm, void** env, jint version)
static jint DestroyJavaVM(JavaVM* vm)
