#include "jni.h"


/* --- mock data --- */

static const char* mock_string = "MOCK_STRING";
static const jchar mock_jstring[10];

struct _jfieldID {  int id; };
struct _jmethodID {  int id; };
static struct _jfieldID mock_fid = {
  5
};
static struct _jmethodID mock_mid = {
  5
};

static void* void_ptr = (void *) "MOCK_STRING";

#define JBOOLEAN_V 't'
#define JINT_V 1
#define JLONG_V 1
#define JSIZE_V 1



/* ------- mock implementation ----- */

static const char* GetStringUTFChars(JNIEnv* env, jstring jstr, jboolean* isCopy) {
  return mock_string;
}
static const jchar* GetStringChars(JNIEnv* env, jstring jstr, jboolean* isCopy) {
  return mock_jstring;
}
static const jchar* GetStringCritical(JNIEnv* env, jstring jstr, jboolean* isCopy) {
  return mock_jstring;
}
static jboolean ExceptionCheck(JNIEnv* env) {
  return JBOOLEAN_V;
}
static jboolean IsAssignableFrom(JNIEnv* env, jclass jclazz1, jclass jclazz2) {
  return JBOOLEAN_V;
}
static jboolean IsInstanceOf(JNIEnv* env, jobject jobj, jclass jclazz) {
  return JBOOLEAN_V;
}
static jboolean IsSameObject(JNIEnv* env, jobject jref1, jobject jref2) {
  return JBOOLEAN_V;
}
static jint AttachCurrentThread(JavaVM* vm, JNIEnv** p_env, void* thr_args) {
  return JINT_V;
}
static jint AttachCurrentThreadAsDaemon(JavaVM* vm, JNIEnv** p_env, void* thr_args){
  return JINT_V;
}
static jint DestroyJavaVM(JavaVM* vm) {
  return JINT_V;
}
static jint DetachCurrentThread(JavaVM* vm) {
  return JINT_V;
}
static jint EnsureLocalCapacity(JNIEnv* env, jint capacity) {
  return JINT_V;
}
static jint GetEnv(JavaVM* vm, void** env, jint version) {
  return JINT_V;
}
static jint GetJavaVM(JNIEnv* env, JavaVM** vm) {
  return JINT_V;
}
static jint GetVersion(JNIEnv* env) {
  return JINT_V;
}
static jint MonitorEnter(JNIEnv* env, jobject jobj) {
  return JINT_V;
}
static jint MonitorExit(JNIEnv* env, jobject jobj) {
  return JINT_V;
}
static jint PushLocalFrame(JNIEnv* env, jint capacity) {
  return JINT_V;
}
static jint RegisterNatives(JNIEnv* env, jclass jclazz, const JNINativeMethod* methods, jint nMethods){
  return JINT_V;
}
static jint Throw(JNIEnv* env, jthrowable jobj) {
  return JINT_V;
}
static jint ThrowNew(JNIEnv* env, jclass jclazz, const char* message) {
  return JINT_V;
}
static jint UnregisterNatives(JNIEnv* env, jclass jclazz) {
  return JINT_V;
}
static jlong GetDirectBufferCapacity(JNIEnv* env, jobject jbuf) {
  return JLONG_V;
}
static jsize GetArrayLength(JNIEnv* env, jarray jarr) {
  return JSIZE_V;
}
static jsize GetStringLength(JNIEnv* env, jstring jstr) {
  return JSIZE_V;
}
static jsize GetStringUTFLength(JNIEnv* env, jstring jstr) {
  return JSIZE_V;
}
static jmethodID FromReflectedMethod(JNIEnv* env, jobject jmethod) {
  return &mock_mid;
}
static jmethodID GetMethodID(JNIEnv* env, jclass jclazz, const char* name, const char* sig) {
  return &mock_mid;
}
static jmethodID GetStaticMethodID(JNIEnv* env, jclass jclazz, const char* name, const char* sig) {
  return &mock_mid;
}
static jfieldID FromReflectedField(JNIEnv* env, jobject jfield) {
  return &mock_fid;
}
static jfieldID GetFieldID(JNIEnv* env, jclass jclazz, const char* name, const char* sig) {
  return &mock_fid;
}
static jfieldID GetStaticFieldID(JNIEnv* env, jclass jclazz, const char* name, const char* sig) {
  return &mock_fid;
}
static jobject AllocObject(JNIEnv* env, jclass jclazz) {
  return void_ptr;
}
static jobject GetObjectArrayElement(JNIEnv* env, jobjectArray jarr, jsize index) {
  return void_ptr;
}
static jobject NewDirectByteBuffer(JNIEnv* env, void* address, jlong capacity) {
  return void_ptr;
}
static jobject NewGlobalRef(JNIEnv* env, jobject jobj) {
  return void_ptr;
}
static jobject NewLocalRef(JNIEnv* env, jobject jobj) {
  return void_ptr;
}
static jobject NewObject(JNIEnv* env, jclass jclazz, jmethodID methodID, ...) {
  return void_ptr;
}
static jobject NewObjectA(JNIEnv* env, jclass jclazz, jmethodID methodID, jvalue* args) {
  return void_ptr;
}
static jobject NewObjectV(JNIEnv* env, jclass jclazz, jmethodID methodID, va_list args) {
  return void_ptr;
}
static jobject PopLocalFrame(JNIEnv* env, jobject jresult) {
  return void_ptr;
}
static jobject ToReflectedField(JNIEnv* env, jclass jcls, jfieldID fieldID, jboolean isStatic) {
  return void_ptr;
}
static jobject ToReflectedMethod(JNIEnv* env, jclass jcls, jmethodID methodID, jboolean isStatic) {
  return void_ptr;
}
static jclass DefineClass(JNIEnv* env, const char *name, jobject loader, const jbyte* buf, jsize bufLen){
  return void_ptr;
}
static jclass FindClass(JNIEnv* env, const char* name) {
  return void_ptr;
}
static jclass GetObjectClass(JNIEnv* env, jobject jobj) {
  return void_ptr;
}
static jclass GetSuperclass(JNIEnv* env, jclass jclazz) {
  return void_ptr;
}
static jobjectArray NewObjectArray(JNIEnv* env, jsize length, jclass jelementClass, jobject jinitialElement){
  return void_ptr;
}
static jobjectRefType GetObjectRefType(JNIEnv* env, jobject jobj) {
  return 1;
}
static jstring NewString(JNIEnv* env, const jchar* unicodeChars, jsize len) {
  return void_ptr;
}
static jstring NewStringUTF(JNIEnv* env, const char* bytes) {
  return void_ptr;
}
static jthrowable ExceptionOccurred(JNIEnv* env) {
  return void_ptr;
}
static jweak NewWeakGlobalRef(JNIEnv* env, jobject jobj) {
  return void_ptr;
}
static void* GetDirectBufferAddress(JNIEnv* env, jobject jbuf) {
  return void_ptr;
}
static void* GetPrimitiveArrayCritical(JNIEnv* env, jarray jarr, jboolean* isCopy) {
  return void_ptr;
}
static void DeleteGlobalRef(JNIEnv* env, jobject jglobalRef) {
  return;
}
static void DeleteLocalRef(JNIEnv* env, jobject jlocalRef) {
  return;
}
static void DeleteWeakGlobalRef(JNIEnv* env, jweak wref) {
  return;
}
static void ExceptionClear(JNIEnv* env) {
  return;
}
static void ExceptionDescribe(JNIEnv* env) {
  return;
}
static void FatalError(JNIEnv* env, const char* msg) {
  return;
}
static void GetStringRegion(JNIEnv* env, jstring jstr, jsize start, jsize len, jchar* buf) {
  return;
}
static void GetStringUTFRegion(JNIEnv* env, jstring jstr, jsize start, jsize len, char* buf) {
  return;
}
static void ReleasePrimitiveArrayCritical(JNIEnv* env, jarray jarr, void* carray, jint mode) {
  return;
}
static void ReleaseStringChars(JNIEnv* env, jstring jstr, const jchar* chars) {
  return;
}
static void ReleaseStringCritical(JNIEnv* env, jstring jstr, const jchar* carray) {
  return;
}
static void ReleaseStringUTFChars(JNIEnv* env, jstring jstr, const char* utf) {
  return;
}
static void SetObjectArrayElement(JNIEnv* env, jobjectArray jarr, jsize index, jobject jobj) {
  return;
}

int main() {
  return 1;
}
