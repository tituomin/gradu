
/* puuttuu!!! makroversiot...) */

/* 1 */
jboolean       ExceptionCheck (                JNIEnv* env )
jint           GetVersion (                    JNIEnv* env )
jthrowable     ExceptionOccurred (             JNIEnv* env )
void           ExceptionClear (                JNIEnv* env )
void           ExceptionDescribe (             JNIEnv* env )

/* 2 */
void           DeleteGlobalRef (               JNIEnv* env,           jobject jglobalRef )
void           DeleteLocalRef (                JNIEnv* env,           jobject jlocalRef )
void           DeleteWeakGlobalRef (           JNIEnv* env,           jweak wref )
void           FatalError (                    JNIEnv* env,           const char* msg )

jint           EnsureLocalCapacity (           JNIEnv* env,           jint capacity )
jint           GetJavaVM (                     JNIEnv* env,           JavaVM** vm )
jint           MonitorEnter (                  JNIEnv* env,           jobject jobj )
jint           MonitorExit (                   JNIEnv* env,           jobject jobj )
jint           PushLocalFrame (                JNIEnv* env,           jint capacity )
jint           Throw (                         JNIEnv* env,           jthrowable jobj )
jint           UnregisterNatives (             JNIEnv* env,           jclass jclazz )
jlong          GetDirectBufferCapacity (       JNIEnv* env,           jobject jbuf )
jsize          GetArrayLength (                JNIEnv* env,           jarray jarr )
jsize          GetStringLength (               JNIEnv* env,           jstring jstr )
jsize          GetStringUTFLength (            JNIEnv* env,           jstring jstr )

jobject        AllocObject (                   JNIEnv* env,           jclass jclazz )
jobject        NewGlobalRef (                  JNIEnv* env,           jobject jobj )
jobject        NewLocalRef (                   JNIEnv* env,           jobject jobj )
jobject        PopLocalFrame (                 JNIEnv* env,           jobject jresult )
jclass         FindClass (                     JNIEnv* env,           const char* name )
jclass         GetObjectClass (                JNIEnv* env,           jobject jobj )
jclass         GetSuperclass (                 JNIEnv* env,           jclass jclazz )

jstring        NewStringUTF (                  JNIEnv* env,           const char* bytes )

jfieldID       FromReflectedField (            JNIEnv* env,           jobject jfield )
jmethodID      FromReflectedMethod (           JNIEnv* env,           jobject jmethod )

jobjectRefType GetObjectRefType (              JNIEnv* env,           jobject jobj )

jweak          NewWeakGlobalRef (              JNIEnv* env,           jobject jobj )

void*          GetDirectBufferAddress (        JNIEnv* env,           jobject jbuf )

/* 3 */
const char*    GetStringUTFChars (             JNIEnv* env,           jstring jstr,              jboolean* isCopy )
const jchar*   GetStringChars (                JNIEnv* env,           jstring jstr,              jboolean* isCopy )
const jchar*   GetStringCritical (             JNIEnv* env,           jstring jstr,              jboolean* isCopy )
jboolean       IsAssignableFrom (              JNIEnv* env,           jclass jclazz1,            jclass jclazz2 )
jboolean       IsInstanceOf (                  JNIEnv* env,           jobject jobj,              jclass jclazz )
jboolean       IsSameObject (                  JNIEnv* env,           jobject jref1,             jobject jref2 )
jint           ThrowNew (                      JNIEnv* env,           jclass jclazz,             const char* message )
jobject        GetObjectArrayElement (         JNIEnv* env,           jobjectArray jarr,         jsize index )
jobject        NewDirectByteBuffer (           JNIEnv* env,           void* address,             jlong capacity )
jstring        NewString (                     JNIEnv* env,           const jchar* unicodeChars, jsize len )
void           ReleaseStringChars (            JNIEnv* env,           jstring jstr,              const jchar* chars )
void           ReleaseStringCritical (         JNIEnv* env,           jstring jstr,              const jchar* carray )
void           ReleaseStringUTFChars (         JNIEnv* env,           jstring jstr,              const char* utf )
void*          GetPrimitiveArrayCritical (     JNIEnv* env,           jarray jarr,               jboolean* isCopy )

/* 4 */
jfieldID       GetFieldID (                    JNIEnv* env,           jclass jclazz,             const char* name,               const char* sig )
jfieldID       GetStaticFieldID (              JNIEnv* env,           jclass jclazz,             const char* name,               const char* sig )
jint           RegisterNatives (               JNIEnv* env,           jclass jclazz,             const JNINativeMethod* methods, jint nMethods )
jint           attachThread (                  JavaVM* vm,            JNIEnv** p_env,            void* thr_args,                 bool isDaemon )
jmethodID      GetMethodID (                   JNIEnv* env,           jclass jclazz,             const char* name,               const char* sig )
jmethodID      GetStaticMethodID (             JNIEnv* env,           jclass jclazz,             const char* name,               const char* sig )
jobject        ToReflectedField (              JNIEnv* env,           jclass jcls,               jfieldID fieldID,               jboolean isStatic )
jobject        ToReflectedMethod (             JNIEnv* env,           jclass jcls,               jmethodID methodID,             jboolean isStatic )
jobjectArray   NewObjectArray (                JNIEnv* env,           jsize length,              jclass jelementClass,           jobject jinitialElement )
void           ReleasePrimitiveArrayCritical ( JNIEnv* env,           jarray jarr,               void* carray,                   jint mode )
void           SetObjectArrayElement (         JNIEnv* env,           jobjectArray jarr,         jsize index,                    jobject jobj )
void           throwArrayRegionOutOfBounds (   ArrayObject* arrayObj, jsize start,               jsize len,                      const char* arrayIdentifier )

/* 5 */
jclass         DefineClass (                   JNIEnv* env,           const char *name,          jobject loader,                 const jbyte* buf, jsize bufLen )
void           GetStringRegion (               JNIEnv* env,           jstring jstr,              jsize start,                    jsize len,        jchar* buf )
void           GetStringUTFRegion (            JNIEnv* env,           jstring jstr,              jsize start,                    jsize len,        char* buf )

jobject        NewObject (                     JNIEnv* env,           jclass jclazz,             jmethodID methodID,             ... )
jobject        NewObjectV (                    JNIEnv* env,           jclass jclazz,             jmethodID methodID,             va_list args )
jobject        NewObjectA (                    JNIEnv* env,           jclass jclazz,             jmethodID methodID,             jvalue* args )

/* -- */

jint           AttachCurrentThread (           JavaVM* vm,            JNIEnv** p_env,            void* thr_args )
jint           AttachCurrentThreadAsDaemon (   JavaVM* vm,            JNIEnv** p_env,            void* thr_args )
jint           GetEnv (                        JavaVM* vm,            void** env,                jint version )

jint           DetachCurrentThread (           JavaVM* vm )
jint           DestroyJavaVM (                 JavaVM* vm )


// makrot:
/* GET_STATIC_TYPE_FIELD(_ctype, _jname, _isref) */
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

