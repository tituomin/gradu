/*
 * ===========================================================================
 *      JNI implementation
 * ===========================================================================
 */

/*
 * Return the version of the native method interface.
 */
static jint GetVersion(JNIEnv* env) {
    /*
     * There is absolutely no need to toggle the mode for correct behavior.
     * However, it does provide native code with a simple "suspend self
     * if necessary" call.
     */
    ScopedJniThreadState ts(env);
    return JNI_VERSION_1_6;
}

/*
 * Create a new class from a bag of bytes.
 *
 * This is not currently supported within Dalvik.
 */
static jclass DefineClass(JNIEnv* env, const char *name, jobject loader,
    const jbyte* buf, jsize bufLen)
{
    UNUSED_PARAMETER(name);
    UNUSED_PARAMETER(loader);
    UNUSED_PARAMETER(buf);
    UNUSED_PARAMETER(bufLen);

    ScopedJniThreadState ts(env);
    ALOGW("JNI DefineClass is not supported");
    return NULL;
}

/*
 * Find a class by name.
 *
 * We have to use the "no init" version of FindClass here, because we might
 * be getting the class prior to registering native methods that will be
 * used in <clinit>.
 *
 * We need to get the class loader associated with the current native
 * method.  If there is no native method, e.g. we're calling this from native
 * code right after creating the VM, the spec says we need to use the class
 * loader returned by "ClassLoader.getBaseClassLoader".  There is no such
 * method, but it's likely they meant ClassLoader.getSystemClassLoader.
 * We can't get that until after the VM has initialized though.
 */
static jclass FindClass(JNIEnv* env, const char* name) {
    ScopedJniThreadState ts(env);

    const Method* thisMethod = dvmGetCurrentJNIMethod();
    assert(thisMethod != NULL);

    Object* loader;
    Object* trackedLoader = NULL;
    if (ts.self()->classLoaderOverride != NULL) {
        /* hack for JNI_OnLoad */
        assert(strcmp(thisMethod->name, "nativeLoad") == 0);
        loader = ts.self()->classLoaderOverride;
    } else if (thisMethod == gDvm.methDalvikSystemNativeStart_main ||
               thisMethod == gDvm.methDalvikSystemNativeStart_run) {
        /* start point of invocation interface */
        if (!gDvm.initializing) {
            loader = trackedLoader = dvmGetSystemClassLoader();
        } else {
            loader = NULL;
        }
    } else {
        loader = thisMethod->clazz->classLoader;
    }

    char* descriptor = dvmNameToDescriptor(name);
    if (descriptor == NULL) {
        return NULL;
    }
    ClassObject* clazz = dvmFindClassNoInit(descriptor, loader);
    free(descriptor);

    jclass jclazz = (jclass) addLocalReference(ts.self(), (Object*) clazz);
    dvmReleaseTrackedAlloc(trackedLoader, ts.self());
    return jclazz;
}

/*
 * Return the superclass of a class.
 */
static jclass GetSuperclass(JNIEnv* env, jclass jclazz) {
    ScopedJniThreadState ts(env);
    ClassObject* clazz = (ClassObject*) dvmDecodeIndirectRef(ts.self(), jclazz);
    return (jclass) addLocalReference(ts.self(), (Object*)clazz->super);
}

/*
 * Determine whether an object of clazz1 can be safely cast to clazz2.
 *
 * Like IsInstanceOf, but with a pair of class objects instead of obj+class.
 */
static jboolean IsAssignableFrom(JNIEnv* env, jclass jclazz1, jclass jclazz2) {
    ScopedJniThreadState ts(env);
    ClassObject* clazz1 = (ClassObject*) dvmDecodeIndirectRef(ts.self(), jclazz1);
    ClassObject* clazz2 = (ClassObject*) dvmDecodeIndirectRef(ts.self(), jclazz2);
    return dvmInstanceof(clazz1, clazz2);
}

/*
 * Given a java.lang.reflect.Method or .Constructor, return a methodID.
 */
static jmethodID FromReflectedMethod(JNIEnv* env, jobject jmethod) {
    ScopedJniThreadState ts(env);
    Object* method = dvmDecodeIndirectRef(ts.self(), jmethod);
    return (jmethodID) dvmGetMethodFromReflectObj(method);
}

/*
 * Given a java.lang.reflect.Field, return a fieldID.
 */
static jfieldID FromReflectedField(JNIEnv* env, jobject jfield) {
    ScopedJniThreadState ts(env);
    Object* field = dvmDecodeIndirectRef(ts.self(), jfield);
    return (jfieldID) dvmGetFieldFromReflectObj(field);
}

/*
 * Convert a methodID to a java.lang.reflect.Method or .Constructor.
 *
 * (The "isStatic" field does not appear in the spec.)
 *
 * Throws OutOfMemory and returns NULL on failure.
 */
static jobject ToReflectedMethod(JNIEnv* env, jclass jcls, jmethodID methodID, jboolean isStatic) {
    ScopedJniThreadState ts(env);
    ClassObject* clazz = (ClassObject*) dvmDecodeIndirectRef(ts.self(), jcls);
    Object* obj = dvmCreateReflectObjForMethod(clazz, (Method*) methodID);
    dvmReleaseTrackedAlloc(obj, NULL);
    return addLocalReference(ts.self(), obj);
}

/*
 * Convert a fieldID to a java.lang.reflect.Field.
 *
 * (The "isStatic" field does not appear in the spec.)
 *
 * Throws OutOfMemory and returns NULL on failure.
 */
static jobject ToReflectedField(JNIEnv* env, jclass jcls, jfieldID fieldID, jboolean isStatic) {
    ScopedJniThreadState ts(env);
    ClassObject* clazz = (ClassObject*) dvmDecodeIndirectRef(ts.self(), jcls);
    Object* obj = dvmCreateReflectObjForField(clazz, (Field*) fieldID);
    dvmReleaseTrackedAlloc(obj, NULL);
    return addLocalReference(ts.self(), obj);
}

/*
 * Take this exception and throw it.
 */
static jint Throw(JNIEnv* env, jthrowable jobj) {
    ScopedJniThreadState ts(env);
    if (jobj != NULL) {
        Object* obj = dvmDecodeIndirectRef(ts.self(), jobj);
        dvmSetException(ts.self(), obj);
        return JNI_OK;
    }
    return JNI_ERR;
}

/*
 * Constructs an exception object from the specified class with the message
 * specified by "message", and throws it.
 */
static jint ThrowNew(JNIEnv* env, jclass jclazz, const char* message) {
    ScopedJniThreadState ts(env);
    ClassObject* clazz = (ClassObject*) dvmDecodeIndirectRef(ts.self(), jclazz);
    dvmThrowException(clazz, message);
    // TODO: should return failure if this didn't work (e.g. OOM)
    return JNI_OK;
}

/*
 * If an exception is being thrown, return the exception object.  Otherwise,
 * return NULL.
 *
 * TODO: if there is no pending exception, we should be able to skip the
 * enter/exit checks.  If we find one, we need to enter and then re-fetch
 * the exception (in case it got moved by a compacting GC).
 */
static jthrowable ExceptionOccurred(JNIEnv* env) {
    ScopedJniThreadState ts(env);
    Object* exception = dvmGetException(ts.self());
    jthrowable localException = (jthrowable) addLocalReference(ts.self(), exception);
    if (localException == NULL && exception != NULL) {
        /*
         * We were unable to add a new local reference, and threw a new
         * exception.  We can't return "exception", because it's not a
         * local reference.  So we have to return NULL, indicating that
         * there was no exception, even though it's pretty much raining
         * exceptions in here.
         */
        ALOGW("JNI WARNING: addLocal/exception combo");
    }
    return localException;
}

/*
 * Print an exception and stack trace to stderr.
 */
static void ExceptionDescribe(JNIEnv* env) {
    ScopedJniThreadState ts(env);
    Object* exception = dvmGetException(ts.self());
    if (exception != NULL) {
        dvmPrintExceptionStackTrace();
    } else {
        ALOGI("Odd: ExceptionDescribe called, but no exception pending");
    }
}

/*
 * Clear the exception currently being thrown.
 *
 * TODO: we should be able to skip the enter/exit stuff.
 */
static void ExceptionClear(JNIEnv* env) {
    ScopedJniThreadState ts(env);
    dvmClearException(ts.self());
}

/*
 * Kill the VM.  This function does not return.
 */
static void FatalError(JNIEnv* env, const char* msg) {
    //dvmChangeStatus(NULL, THREAD_RUNNING);
    ALOGE("JNI posting fatal error: %s", msg);
    dvmAbort();
}

/*
 * Push a new JNI frame on the stack, with a new set of locals.
 *
 * The new frame must have the same method pointer.  (If for no other
 * reason than FindClass needs it to get the appropriate class loader.)
 */
static jint PushLocalFrame(JNIEnv* env, jint capacity) {
    ScopedJniThreadState ts(env);
    if (!ensureLocalCapacity(ts.self(), capacity) ||
            !dvmPushLocalFrame(ts.self(), dvmGetCurrentJNIMethod()))
    {
        /* yes, OutOfMemoryError, not StackOverflowError */
        dvmClearException(ts.self());
        dvmThrowOutOfMemoryError("out of stack in JNI PushLocalFrame");
        return JNI_ERR;
    }
    return JNI_OK;
}

/*
 * Pop the local frame off.  If "jresult" is not null, add it as a
 * local reference on the now-current frame.
 */
static jobject PopLocalFrame(JNIEnv* env, jobject jresult) {
    ScopedJniThreadState ts(env);
    Object* result = dvmDecodeIndirectRef(ts.self(), jresult);
    if (!dvmPopLocalFrame(ts.self())) {
        ALOGW("JNI WARNING: too many PopLocalFrame calls");
        dvmClearException(ts.self());
        dvmThrowRuntimeException("too many PopLocalFrame calls");
    }
    return addLocalReference(ts.self(), result);
}

/*
 * Add a reference to the global list.
 */
static jobject NewGlobalRef(JNIEnv* env, jobject jobj) {
    ScopedJniThreadState ts(env);
    Object* obj = dvmDecodeIndirectRef(ts.self(), jobj);
    return addGlobalReference(obj);
}

/*
 * Delete a reference from the global list.
 */
static void DeleteGlobalRef(JNIEnv* env, jobject jglobalRef) {
    ScopedJniThreadState ts(env);
    deleteGlobalReference(jglobalRef);
}


/*
 * Add a reference to the local list.
 */
static jobject NewLocalRef(JNIEnv* env, jobject jobj) {
    ScopedJniThreadState ts(env);
    Object* obj = dvmDecodeIndirectRef(ts.self(), jobj);
    return addLocalReference(ts.self(), obj);
}

/*
 * Delete a reference from the local list.
 */
static void DeleteLocalRef(JNIEnv* env, jobject jlocalRef) {
    ScopedJniThreadState ts(env);
    deleteLocalReference(ts.self(), jlocalRef);
}

/*
 * Ensure that the local references table can hold at least this many
 * references.
 */
static jint EnsureLocalCapacity(JNIEnv* env, jint capacity) {
    ScopedJniThreadState ts(env);
    bool okay = ensureLocalCapacity(ts.self(), capacity);
    if (!okay) {
        dvmThrowOutOfMemoryError("can't ensure local reference capacity");
    }
    return okay ? 0 : -1;
}


/*
 * Determine whether two Object references refer to the same underlying object.
 */
static jboolean IsSameObject(JNIEnv* env, jobject jref1, jobject jref2) {
    ScopedJniThreadState ts(env);
    Object* obj1 = dvmDecodeIndirectRef(ts.self(), jref1);
    Object* obj2 = dvmDecodeIndirectRef(ts.self(), jref2);
    return (obj1 == obj2);
}

/*
 * Allocate a new object without invoking any constructors.
 */
static jobject AllocObject(JNIEnv* env, jclass jclazz) {
    ScopedJniThreadState ts(env);

    ClassObject* clazz = (ClassObject*) dvmDecodeIndirectRef(ts.self(), jclazz);
    if (!canAllocClass(clazz) ||
        (!dvmIsClassInitialized(clazz) && !dvmInitClass(clazz)))
    {
        assert(dvmCheckException(ts.self()));
        return NULL;
    }

    Object* newObj = dvmAllocObject(clazz, ALLOC_DONT_TRACK);
    return addLocalReference(ts.self(), newObj);
}

/*
 * Allocate a new object and invoke the supplied constructor.
 */
static jobject NewObject(JNIEnv* env, jclass jclazz, jmethodID methodID, ...) {
    ScopedJniThreadState ts(env);
    ClassObject* clazz = (ClassObject*) dvmDecodeIndirectRef(ts.self(), jclazz);

    if (!canAllocClass(clazz) || (!dvmIsClassInitialized(clazz) && !dvmInitClass(clazz))) {
        assert(dvmCheckException(ts.self()));
        return NULL;
    }

    Object* newObj = dvmAllocObject(clazz, ALLOC_DONT_TRACK);
    jobject result = addLocalReference(ts.self(), newObj);
    if (newObj != NULL) {
        JValue unused;
        va_list args;
        va_start(args, methodID);
        dvmCallMethodV(ts.self(), (Method*) methodID, newObj, true, &unused, args);
        va_end(args);
    }
    return result;
}

static jobject NewObjectV(JNIEnv* env, jclass jclazz, jmethodID methodID, va_list args) {
    ScopedJniThreadState ts(env);
    ClassObject* clazz = (ClassObject*) dvmDecodeIndirectRef(ts.self(), jclazz);

    if (!canAllocClass(clazz) || (!dvmIsClassInitialized(clazz) && !dvmInitClass(clazz))) {
        assert(dvmCheckException(ts.self()));
        return NULL;
    }

    Object* newObj = dvmAllocObject(clazz, ALLOC_DONT_TRACK);
    jobject result = addLocalReference(ts.self(), newObj);
    if (newObj != NULL) {
        JValue unused;
        dvmCallMethodV(ts.self(), (Method*) methodID, newObj, true, &unused, args);
    }
    return result;
}

static jobject NewObjectA(JNIEnv* env, jclass jclazz, jmethodID methodID, jvalue* args) {
    ScopedJniThreadState ts(env);
    ClassObject* clazz = (ClassObject*) dvmDecodeIndirectRef(ts.self(), jclazz);

    if (!canAllocClass(clazz) || (!dvmIsClassInitialized(clazz) && !dvmInitClass(clazz))) {
        assert(dvmCheckException(ts.self()));
        return NULL;
    }

    Object* newObj = dvmAllocObject(clazz, ALLOC_DONT_TRACK);
    jobject result = addLocalReference(ts.self(), newObj);
    if (newObj != NULL) {
        JValue unused;
        dvmCallMethodA(ts.self(), (Method*) methodID, newObj, true, &unused, args);
    }
    return result;
}

/*
 * Returns the class of an object.
 *
 * JNI spec says: obj must not be NULL.
 */
static jclass GetObjectClass(JNIEnv* env, jobject jobj) {
    ScopedJniThreadState ts(env);

    assert(jobj != NULL);

    Object* obj = dvmDecodeIndirectRef(ts.self(), jobj);
    return (jclass) addLocalReference(ts.self(), (Object*) obj->clazz);
}

/*
 * Determine whether "obj" is an instance of "clazz".
 */
static jboolean IsInstanceOf(JNIEnv* env, jobject jobj, jclass jclazz) {
    ScopedJniThreadState ts(env);

    assert(jclazz != NULL);
    if (jobj == NULL) {
        return true;
    }

    Object* obj = dvmDecodeIndirectRef(ts.self(), jobj);
    ClassObject* clazz = (ClassObject*) dvmDecodeIndirectRef(ts.self(), jclazz);
    return dvmInstanceof(obj->clazz, clazz);
}

/*
 * Get a method ID for an instance method.
 *
 * While Dalvik bytecode has distinct instructions for virtual, super,
 * static, direct, and interface method invocation, JNI only provides
 * two functions for acquiring a method ID.  This call handles everything
 * but static methods.
 *
 * JNI defines <init> as an instance method, but Dalvik considers it a
 * "direct" method, so we have to special-case it here.
 *
 * Dalvik also puts all private methods into the "direct" list, so we
 * really need to just search both lists.
 */
static jmethodID GetMethodID(JNIEnv* env, jclass jclazz, const char* name, const char* sig) {
    ScopedJniThreadState ts(env);

    ClassObject* clazz = (ClassObject*) dvmDecodeIndirectRef(ts.self(), jclazz);
    if (!dvmIsClassInitialized(clazz) && !dvmInitClass(clazz)) {
        assert(dvmCheckException(ts.self()));
    } else if (dvmIsInterfaceClass(clazz)) {
        Method* meth = dvmFindInterfaceMethodHierByDescriptor(clazz, name, sig);
        if (meth == NULL) {
            dvmThrowExceptionFmt(gDvm.exNoSuchMethodError,
                "no method with name='%s' signature='%s' in interface %s",
                name, sig, clazz->descriptor);
        }
        return (jmethodID) meth;
    }
    Method* meth = dvmFindVirtualMethodHierByDescriptor(clazz, name, sig);
    if (meth == NULL) {
        /* search private methods and constructors; non-hierarchical */
        meth = dvmFindDirectMethodByDescriptor(clazz, name, sig);
    }
    if (meth != NULL && dvmIsStaticMethod(meth)) {
        IF_ALOGD() {
            char* desc = dexProtoCopyMethodDescriptor(&meth->prototype);
            ALOGD("GetMethodID: not returning static method %s.%s %s",
                    clazz->descriptor, meth->name, desc);
            free(desc);
        }
        meth = NULL;
    }
    if (meth == NULL) {
        dvmThrowExceptionFmt(gDvm.exNoSuchMethodError,
                "no method with name='%s' signature='%s' in class %s",
                name, sig, clazz->descriptor);
    } else {
        /*
         * The method's class may not be the same as clazz, but if
         * it isn't this must be a virtual method and the class must
         * be a superclass (and, hence, already initialized).
         */
        assert(dvmIsClassInitialized(meth->clazz) || dvmIsClassInitializing(meth->clazz));
    }
    return (jmethodID) meth;
}

/*
 * Get a field ID (instance fields).
 */
static jfieldID GetFieldID(JNIEnv* env, jclass jclazz, const char* name, const char* sig) {
    ScopedJniThreadState ts(env);

    ClassObject* clazz = (ClassObject*) dvmDecodeIndirectRef(ts.self(), jclazz);

    if (!dvmIsClassInitialized(clazz) && !dvmInitClass(clazz)) {
        assert(dvmCheckException(ts.self()));
        return NULL;
    }

    jfieldID id = (jfieldID) dvmFindInstanceFieldHier(clazz, name, sig);
    if (id == NULL) {
        dvmThrowExceptionFmt(gDvm.exNoSuchFieldError,
                "no field with name='%s' signature='%s' in class %s",
                name, sig, clazz->descriptor);
    }
    return id;
}

/*
 * Get the method ID for a static method in a class.
 */
static jmethodID GetStaticMethodID(JNIEnv* env, jclass jclazz, const char* name, const char* sig) {
    ScopedJniThreadState ts(env);

    ClassObject* clazz = (ClassObject*) dvmDecodeIndirectRef(ts.self(), jclazz);
    if (!dvmIsClassInitialized(clazz) && !dvmInitClass(clazz)) {
        assert(dvmCheckException(ts.self()));
        return NULL;
    }

    Method* meth = dvmFindDirectMethodHierByDescriptor(clazz, name, sig);

    /* make sure it's static, not virtual+private */
    if (meth != NULL && !dvmIsStaticMethod(meth)) {
        IF_ALOGD() {
            char* desc = dexProtoCopyMethodDescriptor(&meth->prototype);
            ALOGD("GetStaticMethodID: not returning nonstatic method %s.%s %s",
                    clazz->descriptor, meth->name, desc);
            free(desc);
        }
        meth = NULL;
    }

    jmethodID id = (jmethodID) meth;
    if (id == NULL) {
        dvmThrowExceptionFmt(gDvm.exNoSuchMethodError,
                "no static method with name='%s' signature='%s' in class %s",
                name, sig, clazz->descriptor);
    }
    return id;
}

/*
 * Get a field ID (static fields).
 */
static jfieldID GetStaticFieldID(JNIEnv* env, jclass jclazz, const char* name, const char* sig) {
    ScopedJniThreadState ts(env);

    ClassObject* clazz = (ClassObject*) dvmDecodeIndirectRef(ts.self(), jclazz);
    if (!dvmIsClassInitialized(clazz) && !dvmInitClass(clazz)) {
        assert(dvmCheckException(ts.self()));
        return NULL;
    }

    jfieldID id = (jfieldID) dvmFindStaticFieldHier(clazz, name, sig);
    if (id == NULL) {
        dvmThrowExceptionFmt(gDvm.exNoSuchFieldError,
                "no static field with name='%s' signature='%s' in class %s",
                name, sig, clazz->descriptor);
    }
    return id;
}

/*
 * Get a static field.
 *
 * If we get an object reference, add it to the local refs list.
 */
#define GET_STATIC_TYPE_FIELD(_ctype, _jname, _isref)                       \
    static _ctype GetStatic##_jname##Field(JNIEnv* env, jclass jclazz,      \
        jfieldID fieldID)                                                   \
    {                                                                       \
        UNUSED_PARAMETER(jclazz);                                           \
        ScopedJniThreadState ts(env);                                       \
        StaticField* sfield = (StaticField*) fieldID;                       \
        _ctype value;                                                       \
        if (dvmIsVolatileField(sfield)) {                                   \
            if (_isref) {   /* only when _ctype==jobject */                 \
                Object* obj = dvmGetStaticFieldObjectVolatile(sfield);      \
                value = (_ctype)(u4)addLocalReference(ts.self(), obj);            \
            } else {                                                        \
                value = (_ctype) dvmGetStaticField##_jname##Volatile(sfield);\
            }                                                               \
        } else {                                                            \
            if (_isref) {                                                   \
                Object* obj = dvmGetStaticFieldObject(sfield);              \
                value = (_ctype)(u4)addLocalReference(ts.self(), obj);            \
            } else {                                                        \
                value = (_ctype) dvmGetStaticField##_jname(sfield);         \
            }                                                               \
        }                                                                   \
        return value;                                                       \
    }
GET_STATIC_TYPE_FIELD(jobject, Object, true);
GET_STATIC_TYPE_FIELD(jboolean, Boolean, false);
GET_STATIC_TYPE_FIELD(jbyte, Byte, false);
GET_STATIC_TYPE_FIELD(jchar, Char, false);
GET_STATIC_TYPE_FIELD(jshort, Short, false);
GET_STATIC_TYPE_FIELD(jint, Int, false);
GET_STATIC_TYPE_FIELD(jlong, Long, false);
GET_STATIC_TYPE_FIELD(jfloat, Float, false);
GET_STATIC_TYPE_FIELD(jdouble, Double, false);

/*
 * Set a static field.
 */
#define SET_STATIC_TYPE_FIELD(_ctype, _ctype2, _jname, _isref)              \
    static void SetStatic##_jname##Field(JNIEnv* env, jclass jclazz,        \
        jfieldID fieldID, _ctype value)                                     \
    {                                                                       \
        UNUSED_PARAMETER(jclazz);                                           \
        ScopedJniThreadState ts(env);                                       \
        StaticField* sfield = (StaticField*) fieldID;                       \
        if (dvmIsVolatileField(sfield)) {                                   \
            if (_isref) {   /* only when _ctype==jobject */                 \
                Object* valObj = dvmDecodeIndirectRef(ts.self(), (jobject)(u4)value); \
                dvmSetStaticFieldObjectVolatile(sfield, valObj);            \
            } else {                                                        \
                dvmSetStaticField##_jname##Volatile(sfield, (_ctype2)value);\
            }                                                               \
        } else {                                                            \
            if (_isref) {                                                   \
                Object* valObj = dvmDecodeIndirectRef(ts.self(), (jobject)(u4)value); \
                dvmSetStaticFieldObject(sfield, valObj);                    \
            } else {                                                        \
                dvmSetStaticField##_jname(sfield, (_ctype2)value);          \
            }                                                               \
        }                                                                   \
    }
SET_STATIC_TYPE_FIELD(jobject, Object*, Object, true);
SET_STATIC_TYPE_FIELD(jboolean, bool, Boolean, false);
SET_STATIC_TYPE_FIELD(jbyte, s1, Byte, false);
SET_STATIC_TYPE_FIELD(jchar, u2, Char, false);
SET_STATIC_TYPE_FIELD(jshort, s2, Short, false);
SET_STATIC_TYPE_FIELD(jint, s4, Int, false);
SET_STATIC_TYPE_FIELD(jlong, s8, Long, false);
SET_STATIC_TYPE_FIELD(jfloat, float, Float, false);
SET_STATIC_TYPE_FIELD(jdouble, double, Double, false);

/*
 * Get an instance field.
 *
 * If we get an object reference, add it to the local refs list.
 */
#define GET_TYPE_FIELD(_ctype, _jname, _isref)                              \
    static _ctype Get##_jname##Field(JNIEnv* env, jobject jobj,             \
        jfieldID fieldID)                                                   \
    {                                                                       \
        ScopedJniThreadState ts(env);                                       \
        Object* obj = dvmDecodeIndirectRef(ts.self(), jobj);                      \
        InstField* field = (InstField*) fieldID;                            \
        _ctype value;                                                       \
        if (dvmIsVolatileField(field)) {                            \
            if (_isref) {   /* only when _ctype==jobject */                 \
                Object* valObj =                                            \
                    dvmGetFieldObjectVolatile(obj, field->byteOffset);      \
                value = (_ctype)(u4)addLocalReference(ts.self(), valObj);         \
            } else {                                                        \
                value = (_ctype)                                            \
                    dvmGetField##_jname##Volatile(obj, field->byteOffset);  \
            }                                                               \
        } else {                                                            \
            if (_isref) {                                                   \
                Object* valObj = dvmGetFieldObject(obj, field->byteOffset); \
                value = (_ctype)(u4)addLocalReference(ts.self(), valObj);         \
            } else {                                                        \
                value = (_ctype) dvmGetField##_jname(obj, field->byteOffset);\
            }                                                               \
        }                                                                   \
        return value;                                                       \
    }
GET_TYPE_FIELD(jobject, Object, true);
GET_TYPE_FIELD(jboolean, Boolean, false);
GET_TYPE_FIELD(jbyte, Byte, false);
GET_TYPE_FIELD(jchar, Char, false);
GET_TYPE_FIELD(jshort, Short, false);
GET_TYPE_FIELD(jint, Int, false);
GET_TYPE_FIELD(jlong, Long, false);
GET_TYPE_FIELD(jfloat, Float, false);
GET_TYPE_FIELD(jdouble, Double, false);

/*
 * Set an instance field.
 */
#define SET_TYPE_FIELD(_ctype, _ctype2, _jname, _isref)                     \
    static void Set##_jname##Field(JNIEnv* env, jobject jobj,               \
        jfieldID fieldID, _ctype value)                                     \
    {                                                                       \
        ScopedJniThreadState ts(env);                                       \
        Object* obj = dvmDecodeIndirectRef(ts.self(), jobj); \
        InstField* field = (InstField*) fieldID;                            \
        if (dvmIsVolatileField(field)) {                                    \
            if (_isref) {   /* only when _ctype==jobject */                 \
                Object* valObj = dvmDecodeIndirectRef(ts.self(), (jobject)(u4)value); \
                dvmSetFieldObjectVolatile(obj, field->byteOffset, valObj);  \
            } else {                                                        \
                dvmSetField##_jname##Volatile(obj,                          \
                    field->byteOffset, (_ctype2)value);                     \
            }                                                               \
        } else {                                                            \
            if (_isref) {                                                   \
                Object* valObj = dvmDecodeIndirectRef(ts.self(), (jobject)(u4)value); \
                dvmSetFieldObject(obj, field->byteOffset, valObj);          \
            } else {                                                        \
                dvmSetField##_jname(obj,                                    \
                    field->byteOffset, (_ctype2)value);                     \
            }                                                               \
        }                                                                   \
    }
SET_TYPE_FIELD(jobject, Object*, Object, true);
SET_TYPE_FIELD(jboolean, bool, Boolean, false);
SET_TYPE_FIELD(jbyte, s1, Byte, false);
SET_TYPE_FIELD(jchar, u2, Char, false);
SET_TYPE_FIELD(jshort, s2, Short, false);
SET_TYPE_FIELD(jint, s4, Int, false);
SET_TYPE_FIELD(jlong, s8, Long, false);
SET_TYPE_FIELD(jfloat, float, Float, false);
SET_TYPE_FIELD(jdouble, double, Double, false);

/*
 * Make a virtual method call.
 *
 * Three versions (..., va_list, jvalue[]) for each return type.  If we're
 * returning an Object, we have to add it to the local references table.
 */
#define CALL_VIRTUAL(_ctype, _jname, _retfail, _retok, _isref)              \
    static _ctype Call##_jname##Method(JNIEnv* env, jobject jobj,           \
        jmethodID methodID, ...)                                            \
    {                                                                       \
        ScopedJniThreadState ts(env);                                       \
        Object* obj = dvmDecodeIndirectRef(ts.self(), jobj);                      \
        const Method* meth;                                                 \
        va_list args;                                                       \
        JValue result;                                                      \
        meth = dvmGetVirtualizedMethod(obj->clazz, (Method*)methodID);      \
        if (meth == NULL) {                                                 \
            return _retfail;                                                \
        }                                                                   \
        va_start(args, methodID);                                           \
        dvmCallMethodV(ts.self(), meth, obj, true, &result, args);          \
        va_end(args);                                                       \
        if (_isref && !dvmCheckException(ts.self()))                        \
            result.l = (Object*)addLocalReference(ts.self(), result.l);           \
        return _retok;                                                      \
    }                                                                       \
    static _ctype Call##_jname##MethodV(JNIEnv* env, jobject jobj,          \
        jmethodID methodID, va_list args)                                   \
    {                                                                       \
        ScopedJniThreadState ts(env);                                       \
        Object* obj = dvmDecodeIndirectRef(ts.self(), jobj);                      \
        const Method* meth;                                                 \
        JValue result;                                                      \
        meth = dvmGetVirtualizedMethod(obj->clazz, (Method*)methodID);      \
        if (meth == NULL) {                                                 \
            return _retfail;                                                \
        }                                                                   \
        dvmCallMethodV(ts.self(), meth, obj, true, &result, args);          \
        if (_isref && !dvmCheckException(ts.self()))                        \
            result.l = (Object*)addLocalReference(ts.self(), result.l);           \
        return _retok;                                                      \
    }                                                                       \
    static _ctype Call##_jname##MethodA(JNIEnv* env, jobject jobj,          \
        jmethodID methodID, jvalue* args)                                   \
    {                                                                       \
        ScopedJniThreadState ts(env);                                       \
        Object* obj = dvmDecodeIndirectRef(ts.self(), jobj);                      \
        const Method* meth;                                                 \
        JValue result;                                                      \
        meth = dvmGetVirtualizedMethod(obj->clazz, (Method*)methodID);      \
        if (meth == NULL) {                                                 \
            return _retfail;                                                \
        }                                                                   \
        dvmCallMethodA(ts.self(), meth, obj, true, &result, args);          \
        if (_isref && !dvmCheckException(ts.self()))                        \
            result.l = (Object*)addLocalReference(ts.self(), result.l);           \
        return _retok;                                                      \
    }
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

/*
 * Make a "non-virtual" method call.  We're still calling a virtual method,
 * but this time we're not doing an indirection through the object's vtable.
 * The "clazz" parameter defines which implementation of a method we want.
 *
 * Three versions (..., va_list, jvalue[]) for each return type.
 */
#define CALL_NONVIRTUAL(_ctype, _jname, _retfail, _retok, _isref)           \
    static _ctype CallNonvirtual##_jname##Method(JNIEnv* env, jobject jobj, \
        jclass jclazz, jmethodID methodID, ...)                             \
    {                                                                       \
        ScopedJniThreadState ts(env);                                       \
        Object* obj = dvmDecodeIndirectRef(ts.self(), jobj);                      \
        ClassObject* clazz = (ClassObject*) dvmDecodeIndirectRef(ts.self(), jclazz); \
        const Method* meth;                                                 \
        va_list args;                                                       \
        JValue result;                                                      \
        meth = dvmGetVirtualizedMethod(clazz, (Method*)methodID);           \
        if (meth == NULL) {                                                 \
            return _retfail;                                                \
        }                                                                   \
        va_start(args, methodID);                                           \
        dvmCallMethodV(ts.self(), meth, obj, true, &result, args);          \
        if (_isref && !dvmCheckException(ts.self()))                        \
            result.l = (Object*)addLocalReference(ts.self(), result.l);           \
        va_end(args);                                                       \
        return _retok;                                                      \
    }                                                                       \
    static _ctype CallNonvirtual##_jname##MethodV(JNIEnv* env, jobject jobj,\
        jclass jclazz, jmethodID methodID, va_list args)                    \
    {                                                                       \
        ScopedJniThreadState ts(env);                                       \
        Object* obj = dvmDecodeIndirectRef(ts.self(), jobj);                      \
        ClassObject* clazz = (ClassObject*) dvmDecodeIndirectRef(ts.self(), jclazz); \
        const Method* meth;                                                 \
        JValue result;                                                      \
        meth = dvmGetVirtualizedMethod(clazz, (Method*)methodID);           \
        if (meth == NULL) {                                                 \
            return _retfail;                                                \
        }                                                                   \
        dvmCallMethodV(ts.self(), meth, obj, true, &result, args);          \
        if (_isref && !dvmCheckException(ts.self()))                        \
            result.l = (Object*)addLocalReference(ts.self(), result.l);           \
        return _retok;                                                      \
    }                                                                       \
    static _ctype CallNonvirtual##_jname##MethodA(JNIEnv* env, jobject jobj,\
        jclass jclazz, jmethodID methodID, jvalue* args)                    \
    {                                                                       \
        ScopedJniThreadState ts(env);                                       \
        Object* obj = dvmDecodeIndirectRef(ts.self(), jobj); \
        ClassObject* clazz = (ClassObject*) dvmDecodeIndirectRef(ts.self(), jclazz); \
        const Method* meth;                                                 \
        JValue result;                                                      \
        meth = dvmGetVirtualizedMethod(clazz, (Method*)methodID);           \
        if (meth == NULL) {                                                 \
            return _retfail;                                                \
        }                                                                   \
        dvmCallMethodA(ts.self(), meth, obj, true, &result, args);          \
        if (_isref && !dvmCheckException(ts.self()))                        \
            result.l = (Object*)addLocalReference(ts.self(), result.l);           \
        return _retok;                                                      \
    }
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


/*
 * Call a static method.
 */
#define CALL_STATIC(_ctype, _jname, _retfail, _retok, _isref)               \
    static _ctype CallStatic##_jname##Method(JNIEnv* env, jclass jclazz,    \
        jmethodID methodID, ...)                                            \
    {                                                                       \
        UNUSED_PARAMETER(jclazz);                                           \
        ScopedJniThreadState ts(env);                                       \
        JValue result;                                                      \
        va_list args;                                                       \
        va_start(args, methodID);                                           \
        dvmCallMethodV(ts.self(), (Method*)methodID, NULL, true, &result, args);\
        va_end(args);                                                       \
        if (_isref && !dvmCheckException(ts.self()))                        \
            result.l = (Object*)addLocalReference(ts.self(), result.l);           \
        return _retok;                                                      \
    }                                                                       \
    static _ctype CallStatic##_jname##MethodV(JNIEnv* env, jclass jclazz,   \
        jmethodID methodID, va_list args)                                   \
    {                                                                       \
        UNUSED_PARAMETER(jclazz);                                           \
        ScopedJniThreadState ts(env);                                       \
        JValue result;                                                      \
        dvmCallMethodV(ts.self(), (Method*)methodID, NULL, true, &result, args);\
        if (_isref && !dvmCheckException(ts.self()))                        \
            result.l = (Object*)addLocalReference(ts.self(), result.l);           \
        return _retok;                                                      \
    }                                                                       \
    static _ctype CallStatic##_jname##MethodA(JNIEnv* env, jclass jclazz,   \
        jmethodID methodID, jvalue* args)                                   \
    {                                                                       \
        UNUSED_PARAMETER(jclazz);                                           \
        ScopedJniThreadState ts(env);                                       \
        JValue result;                                                      \
        dvmCallMethodA(ts.self(), (Method*)methodID, NULL, true, &result, args);\
        if (_isref && !dvmCheckException(ts.self()))                        \
            result.l = (Object*)addLocalReference(ts.self(), result.l);           \
        return _retok;                                                      \
    }
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

/*
 * Create a new String from Unicode data.
 *
 * If "len" is zero, we will return an empty string even if "unicodeChars"
 * is NULL.  (The JNI spec is vague here.)
 */
static jstring NewString(JNIEnv* env, const jchar* unicodeChars, jsize len) {
    ScopedJniThreadState ts(env);
    StringObject* jstr = dvmCreateStringFromUnicode(unicodeChars, len);
    if (jstr == NULL) {
        return NULL;
    }
    dvmReleaseTrackedAlloc((Object*) jstr, NULL);
    return (jstring) addLocalReference(ts.self(), (Object*) jstr);
}

/*
 * Return the length of a String in Unicode character units.
 */
static jsize GetStringLength(JNIEnv* env, jstring jstr) {
    ScopedJniThreadState ts(env);
    StringObject* strObj = (StringObject*) dvmDecodeIndirectRef(ts.self(), jstr);
    return strObj->length();
}


/*
 * Get a string's character data.
 *
 * The result is guaranteed to be valid until ReleaseStringChars is
 * called, which means we have to pin it or return a copy.
 */
static const jchar* GetStringChars(JNIEnv* env, jstring jstr, jboolean* isCopy) {
    ScopedJniThreadState ts(env);

    StringObject* strObj = (StringObject*) dvmDecodeIndirectRef(ts.self(), jstr);
    ArrayObject* strChars = strObj->array();

    pinPrimitiveArray(strChars);

    const u2* data = strObj->chars();
    if (isCopy != NULL) {
        *isCopy = JNI_FALSE;
    }
    return (jchar*) data;
}

/*
 * Release our grip on some characters from a string.
 */
static void ReleaseStringChars(JNIEnv* env, jstring jstr, const jchar* chars) {
    ScopedJniThreadState ts(env);
    StringObject* strObj = (StringObject*) dvmDecodeIndirectRef(ts.self(), jstr);
    ArrayObject* strChars = strObj->array();
    unpinPrimitiveArray(strChars);
}

/*
 * Create a new java.lang.String object from chars in modified UTF-8 form.
 *
 * The spec doesn't say how to handle a NULL string.  Popular desktop VMs
 * accept it and return a NULL pointer in response.
 */
static jstring NewStringUTF(JNIEnv* env, const char* bytes) {
    ScopedJniThreadState ts(env);
    if (bytes == NULL) {
        return NULL;
    }
    /* note newStr could come back NULL on OOM */
    StringObject* newStr = dvmCreateStringFromCstr(bytes);
    jstring result = (jstring) addLocalReference(ts.self(), (Object*) newStr);
    dvmReleaseTrackedAlloc((Object*)newStr, NULL);
    return result;
}

/*
 * Return the length in bytes of the modified UTF-8 form of the string.
 */
static jsize GetStringUTFLength(JNIEnv* env, jstring jstr) {
    ScopedJniThreadState ts(env);
    StringObject* strObj = (StringObject*) dvmDecodeIndirectRef(ts.self(), jstr);
    if (strObj == NULL) {
        return 0; // Should we throw something or assert?
    }
    return strObj->utfLength();
}

/*
 * Convert "string" to modified UTF-8 and return a pointer.  The returned
 * value must be released with ReleaseStringUTFChars.
 *
 * According to the JNI reference, "Returns a pointer to a UTF-8 string,
 * or NULL if the operation fails. Returns NULL if and only if an invocation
 * of this function has thrown an exception."
 *
 * The behavior here currently follows that of other open-source VMs, which
 * quietly return NULL if "string" is NULL.  We should consider throwing an
 * NPE.  (The CheckJNI code blows up if you try to pass in a NULL string,
 * which should catch this sort of thing during development.)  Certain other
 * VMs will crash with a segmentation fault.
 */
static const char* GetStringUTFChars(JNIEnv* env, jstring jstr, jboolean* isCopy) {
    ScopedJniThreadState ts(env);
    if (jstr == NULL) {
        /* this shouldn't happen; throw NPE? */
        return NULL;
    }
    if (isCopy != NULL) {
        *isCopy = JNI_TRUE;
    }
    StringObject* strObj = (StringObject*) dvmDecodeIndirectRef(ts.self(), jstr);
    char* newStr = dvmCreateCstrFromString(strObj);
    if (newStr == NULL) {
        /* assume memory failure */
        dvmThrowOutOfMemoryError("native heap string alloc failed");
    }
    return newStr;
}

/*
 * Release a string created by GetStringUTFChars().
 */
static void ReleaseStringUTFChars(JNIEnv* env, jstring jstr, const char* utf) {
    ScopedJniThreadState ts(env);
    free((char*) utf);
}

/*
 * Return the capacity of the array.
 */
static jsize GetArrayLength(JNIEnv* env, jarray jarr) {
    ScopedJniThreadState ts(env);
    ArrayObject* arrObj = (ArrayObject*) dvmDecodeIndirectRef(ts.self(), jarr);
    return arrObj->length;
}

/*
 * Construct a new array that holds objects from class "elementClass".
 */
static jobjectArray NewObjectArray(JNIEnv* env, jsize length,
    jclass jelementClass, jobject jinitialElement)
{
    ScopedJniThreadState ts(env);

    if (jelementClass == NULL) {
        dvmThrowNullPointerException("JNI NewObjectArray elementClass == NULL");
        return NULL;
    }

    ClassObject* elemClassObj = (ClassObject*) dvmDecodeIndirectRef(ts.self(), jelementClass);
    ClassObject* arrayClass = dvmFindArrayClassForElement(elemClassObj);
    ArrayObject* newObj = dvmAllocArrayByClass(arrayClass, length, ALLOC_DEFAULT);
    if (newObj == NULL) {
        assert(dvmCheckException(ts.self()));
        return NULL;
    }
    jobjectArray newArray = (jobjectArray) addLocalReference(ts.self(), (Object*) newObj);
    dvmReleaseTrackedAlloc((Object*) newObj, NULL);

    /*
     * Initialize the array.
     */
    if (jinitialElement != NULL) {
        Object* initialElement = dvmDecodeIndirectRef(ts.self(), jinitialElement);
        Object** arrayData = (Object**) (void*) newObj->contents;
        for (jsize i = 0; i < length; ++i) {
            arrayData[i] = initialElement;
        }
    }

    return newArray;
}

static bool checkArrayElementBounds(ArrayObject* arrayObj, jsize index) {
    assert(arrayObj != NULL);
    if (index < 0 || index >= (int) arrayObj->length) {
        dvmThrowArrayIndexOutOfBoundsException(arrayObj->length, index);
        return false;
    }
    return true;
}

/*
 * Get one element of an Object array.
 *
 * Add the object to the local references table in case the array goes away.
 */
static jobject GetObjectArrayElement(JNIEnv* env, jobjectArray jarr, jsize index) {
    ScopedJniThreadState ts(env);

    ArrayObject* arrayObj = (ArrayObject*) dvmDecodeIndirectRef(ts.self(), jarr);
    if (!checkArrayElementBounds(arrayObj, index)) {
        return NULL;
    }

    Object* value = ((Object**) (void*) arrayObj->contents)[index];
    return addLocalReference(ts.self(), value);
}

/*
 * Set one element of an Object array.
 */
static void SetObjectArrayElement(JNIEnv* env, jobjectArray jarr, jsize index, jobject jobj) {
    ScopedJniThreadState ts(env);

    ArrayObject* arrayObj = (ArrayObject*) dvmDecodeIndirectRef(ts.self(), jarr);
    if (!checkArrayElementBounds(arrayObj, index)) {
        return;
    }

    Object* obj = dvmDecodeIndirectRef(ts.self(), jobj);

    if (obj != NULL && !dvmCanPutArrayElement(obj->clazz, arrayObj->clazz)) {
      ALOGV("Can't put a '%s'(%p) into array type='%s'(%p)",
            obj->clazz->descriptor, obj,
            arrayObj->clazz->descriptor, arrayObj);
      dvmThrowArrayStoreExceptionIncompatibleElement(obj->clazz, arrayObj->clazz);
      return;
    }

    //ALOGV("JNI: set element %d in array %p to %p", index, array, value);

    dvmSetObjectArrayElement(arrayObj, index, obj);
}

/*
 * Create a new array of primitive elements.
 */
#define NEW_PRIMITIVE_ARRAY(_artype, _jname, _typechar) \
    static _artype New##_jname##Array(JNIEnv* env, jsize length) { \
        ScopedJniThreadState ts(env); \
        ArrayObject* arrayObj = dvmAllocPrimitiveArray(_typechar, length, ALLOC_DEFAULT); \
        if (arrayObj == NULL) { \
            return NULL; \
        } \
        _artype result = (_artype) addLocalReference(ts.self(), (Object*) arrayObj); \
        dvmReleaseTrackedAlloc((Object*) arrayObj, NULL); \
        return result; \
    }
NEW_PRIMITIVE_ARRAY(jbooleanArray, Boolean, 'Z');
NEW_PRIMITIVE_ARRAY(jbyteArray, Byte, 'B');
NEW_PRIMITIVE_ARRAY(jcharArray, Char, 'C');
NEW_PRIMITIVE_ARRAY(jshortArray, Short, 'S');
NEW_PRIMITIVE_ARRAY(jintArray, Int, 'I');
NEW_PRIMITIVE_ARRAY(jlongArray, Long, 'J');
NEW_PRIMITIVE_ARRAY(jfloatArray, Float, 'F');
NEW_PRIMITIVE_ARRAY(jdoubleArray, Double, 'D');

/*
 * Get a pointer to a C array of primitive elements from an array object
 * of the matching type.
 *
 * In a compacting GC, we either need to return a copy of the elements or
 * "pin" the memory.  Otherwise we run the risk of native code using the
 * buffer as the destination of e.g. a blocking read() call that wakes up
 * during a GC.
 */
#define GET_PRIMITIVE_ARRAY_ELEMENTS(_ctype, _jname) \
    static _ctype* Get##_jname##ArrayElements(JNIEnv* env, \
        _ctype##Array jarr, jboolean* isCopy) \
    { \
        ScopedJniThreadState ts(env); \
        ArrayObject* arrayObj = (ArrayObject*) dvmDecodeIndirectRef(ts.self(), jarr); \
        pinPrimitiveArray(arrayObj); \
        _ctype* data = (_ctype*) (void*) arrayObj->contents; \
        if (isCopy != NULL) { \
            *isCopy = JNI_FALSE; \
        } \
        return data; \
    }

/*
 * Release the storage locked down by the "get" function.
 *
 * The spec says, "'mode' has no effect if 'elems' is not a copy of the
 * elements in 'array'."  They apparently did not anticipate the need to
 * un-pin memory.
 */
#define RELEASE_PRIMITIVE_ARRAY_ELEMENTS(_ctype, _jname)                    \
    static void Release##_jname##ArrayElements(JNIEnv* env,                 \
        _ctype##Array jarr, _ctype* elems, jint mode)                       \
    {                                                                       \
        UNUSED_PARAMETER(elems);                                            \
        if (mode != JNI_COMMIT) {                                           \
            ScopedJniThreadState ts(env);                                   \
            ArrayObject* arrayObj = (ArrayObject*) dvmDecodeIndirectRef(ts.self(), jarr); \
            unpinPrimitiveArray(arrayObj);                                  \
        }                                                                   \
    }

static void throwArrayRegionOutOfBounds(ArrayObject* arrayObj, jsize start,
    jsize len, const char* arrayIdentifier)
{
    dvmThrowExceptionFmt(gDvm.exArrayIndexOutOfBoundsException,
        "%s offset=%d length=%d %s.length=%d",
        arrayObj->clazz->descriptor, start, len, arrayIdentifier,
        arrayObj->length);
}

/*
 * Copy a section of a primitive array to a buffer.
 */
#define GET_PRIMITIVE_ARRAY_REGION(_ctype, _jname) \
    static void Get##_jname##ArrayRegion(JNIEnv* env, \
        _ctype##Array jarr, jsize start, jsize len, _ctype* buf) \
    { \
        ScopedJniThreadState ts(env); \
        ArrayObject* arrayObj = (ArrayObject*) dvmDecodeIndirectRef(ts.self(), jarr); \
        _ctype* data = (_ctype*) (void*) arrayObj->contents; \
        if (start < 0 || len < 0 || start + len > (int) arrayObj->length) { \
            throwArrayRegionOutOfBounds(arrayObj, start, len, "src"); \
        } else { \
            memcpy(buf, data + start, len * sizeof(_ctype)); \
        } \
    }

/*
 * Copy a section of a primitive array from a buffer.
 */
#define SET_PRIMITIVE_ARRAY_REGION(_ctype, _jname) \
    static void Set##_jname##ArrayRegion(JNIEnv* env, \
        _ctype##Array jarr, jsize start, jsize len, const _ctype* buf) \
    { \
        ScopedJniThreadState ts(env); \
        ArrayObject* arrayObj = (ArrayObject*) dvmDecodeIndirectRef(ts.self(), jarr); \
        _ctype* data = (_ctype*) (void*) arrayObj->contents; \
        if (start < 0 || len < 0 || start + len > (int) arrayObj->length) { \
            throwArrayRegionOutOfBounds(arrayObj, start, len, "dst"); \
        } else { \
            memcpy(data + start, buf, len * sizeof(_ctype)); \
        } \
    }

/*
 * 4-in-1:
 *  Get<Type>ArrayElements
 *  Release<Type>ArrayElements
 *  Get<Type>ArrayRegion
 *  Set<Type>ArrayRegion
 */
#define PRIMITIVE_ARRAY_FUNCTIONS(_ctype, _jname)                           \
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

/*
 * Register one or more native functions in one class.
 *
 * This can be called multiple times on the same method, allowing the
 * caller to redefine the method implementation at will.
 */
static jint RegisterNatives(JNIEnv* env, jclass jclazz,
    const JNINativeMethod* methods, jint nMethods)
{
    ScopedJniThreadState ts(env);

    ClassObject* clazz = (ClassObject*) dvmDecodeIndirectRef(ts.self(), jclazz);

    if (gDvm.verboseJni) {
        ALOGI("[Registering JNI native methods for class %s]",
            clazz->descriptor);
    }

    for (int i = 0; i < nMethods; i++) {
        if (!dvmRegisterJNIMethod(clazz, methods[i].name,
                methods[i].signature, methods[i].fnPtr))
        {
            return JNI_ERR;
        }
    }
    return JNI_OK;
}

/*
 * Un-register all native methods associated with the class.
 *
 * The JNI docs refer to this as a way to reload/relink native libraries,
 * and say it "should not be used in normal native code".  In particular,
 * there is no need to do this during shutdown, and you do not need to do
 * this before redefining a method implementation with RegisterNatives.
 *
 * It's chiefly useful for a native "plugin"-style library that wasn't
 * loaded with System.loadLibrary() (since there's no way to unload those).
 * For example, the library could upgrade itself by:
 *
 *  1. call UnregisterNatives to unbind the old methods
 *  2. ensure that no code is still executing inside it (somehow)
 *  3. dlclose() the library
 *  4. dlopen() the new library
 *  5. use RegisterNatives to bind the methods from the new library
 *
 * The above can work correctly without the UnregisterNatives call, but
 * creates a window of opportunity in which somebody might try to call a
 * method that is pointing at unmapped memory, crashing the VM.  In theory
 * the same guards that prevent dlclose() from unmapping executing code could
 * prevent that anyway, but with this we can be more thorough and also deal
 * with methods that only exist in the old or new form of the library (maybe
 * the lib wants to try the call and catch the UnsatisfiedLinkError).
 */
static jint UnregisterNatives(JNIEnv* env, jclass jclazz) {
    ScopedJniThreadState ts(env);

    ClassObject* clazz = (ClassObject*) dvmDecodeIndirectRef(ts.self(), jclazz);
    if (gDvm.verboseJni) {
        ALOGI("[Unregistering JNI native methods for class %s]",
            clazz->descriptor);
    }
    dvmUnregisterJNINativeMethods(clazz);
    return JNI_OK;
}

/*
 * Lock the monitor.
 *
 * We have to track all monitor enters and exits, so that we can undo any
 * outstanding synchronization before the thread exits.
 */
static jint MonitorEnter(JNIEnv* env, jobject jobj) {
    ScopedJniThreadState ts(env);
    Object* obj = dvmDecodeIndirectRef(ts.self(), jobj);
    dvmLockObject(ts.self(), obj);
    trackMonitorEnter(ts.self(), obj);
    return JNI_OK;
}

/*
 * Unlock the monitor.
 *
 * Throws an IllegalMonitorStateException if the current thread
 * doesn't own the monitor.  (dvmUnlockObject() takes care of the throw.)
 *
 * According to the 1.6 spec, it's legal to call here with an exception
 * pending.  If this fails, we'll stomp the original exception.
 */
static jint MonitorExit(JNIEnv* env, jobject jobj) {
    ScopedJniThreadState ts(env);
    Object* obj = dvmDecodeIndirectRef(ts.self(), jobj);
    bool success = dvmUnlockObject(ts.self(), obj);
    if (success) {
        trackMonitorExit(ts.self(), obj);
    }
    return success ? JNI_OK : JNI_ERR;
}

/*
 * Return the JavaVM interface associated with the current thread.
 */
static jint GetJavaVM(JNIEnv* env, JavaVM** vm) {
    ScopedJniThreadState ts(env);
    *vm = gDvmJni.jniVm;
    return (*vm == NULL) ? JNI_ERR : JNI_OK;
}

/*
 * Copies "len" Unicode characters, from offset "start".
 */
static void GetStringRegion(JNIEnv* env, jstring jstr, jsize start, jsize len, jchar* buf) {
    ScopedJniThreadState ts(env);
    StringObject* strObj = (StringObject*) dvmDecodeIndirectRef(ts.self(), jstr);
    int strLen = strObj->length();
    if (((start|len) < 0) || (start + len > strLen)) {
        dvmThrowStringIndexOutOfBoundsExceptionWithRegion(strLen, start, len);
        return;
    }
    memcpy(buf, strObj->chars() + start, len * sizeof(u2));
}

/*
 * Translates "len" Unicode characters, from offset "start", into
 * modified UTF-8 encoding.
 */
static void GetStringUTFRegion(JNIEnv* env, jstring jstr, jsize start, jsize len, char* buf) {
    ScopedJniThreadState ts(env);
    StringObject* strObj = (StringObject*) dvmDecodeIndirectRef(ts.self(), jstr);
    int strLen = strObj->length();
    if (((start|len) < 0) || (start + len > strLen)) {
        dvmThrowStringIndexOutOfBoundsExceptionWithRegion(strLen, start, len);
        return;
    }
    dvmGetStringUtfRegion(strObj, start, len, buf);
}

/*
 * Get a raw pointer to array data.
 *
 * The caller is expected to call "release" before doing any JNI calls
 * or blocking I/O operations.
 *
 * We need to pin the memory or block GC.
 */
static void* GetPrimitiveArrayCritical(JNIEnv* env, jarray jarr, jboolean* isCopy) {
    ScopedJniThreadState ts(env);
    ArrayObject* arrayObj = (ArrayObject*) dvmDecodeIndirectRef(ts.self(), jarr);
    pinPrimitiveArray(arrayObj);
    void* data = arrayObj->contents;
    if (UNLIKELY(isCopy != NULL)) {
        *isCopy = JNI_FALSE;
    }
    return data;
}

/*
 * Release an array obtained with GetPrimitiveArrayCritical.
 */
static void ReleasePrimitiveArrayCritical(JNIEnv* env, jarray jarr, void* carray, jint mode) {
    if (mode != JNI_COMMIT) {
        ScopedJniThreadState ts(env);
        ArrayObject* arrayObj = (ArrayObject*) dvmDecodeIndirectRef(ts.self(), jarr);
        unpinPrimitiveArray(arrayObj);
    }
}

/*
 * Like GetStringChars, but with restricted use.
 */
static const jchar* GetStringCritical(JNIEnv* env, jstring jstr, jboolean* isCopy) {
    ScopedJniThreadState ts(env);

    StringObject* strObj = (StringObject*) dvmDecodeIndirectRef(ts.self(), jstr);
    ArrayObject* strChars = strObj->array();

    pinPrimitiveArray(strChars);

    const u2* data = strObj->chars();
    if (isCopy != NULL) {
        *isCopy = JNI_FALSE;
    }
    return (jchar*) data;
}

/*
 * Like ReleaseStringChars, but with restricted use.
 */
static void ReleaseStringCritical(JNIEnv* env, jstring jstr, const jchar* carray) {
    ScopedJniThreadState ts(env);
    StringObject* strObj = (StringObject*) dvmDecodeIndirectRef(ts.self(), jstr);
    ArrayObject* strChars = strObj->array();
    unpinPrimitiveArray(strChars);
}

/*
 * Create a new weak global reference.
 */
static jweak NewWeakGlobalRef(JNIEnv* env, jobject jobj) {
    ScopedJniThreadState ts(env);
    Object *obj = dvmDecodeIndirectRef(ts.self(), jobj);
    return (jweak) addWeakGlobalReference(obj);
}

/*
 * Delete the specified weak global reference.
 */
static void DeleteWeakGlobalRef(JNIEnv* env, jweak wref) {
    ScopedJniThreadState ts(env);
    deleteWeakGlobalReference(wref);
}

/*
 * Quick check for pending exceptions.
 *
 * TODO: we should be able to skip the enter/exit macros here.
 */
static jboolean ExceptionCheck(JNIEnv* env) {
    ScopedJniThreadState ts(env);
    return dvmCheckException(ts.self());
}

/*
 * Returns the type of the object referred to by "obj".  It can be local,
 * global, or weak global.
 *
 * In the current implementation, references can be global and local at
 * the same time, so while the return value is accurate it may not tell
 * the whole story.
 */
static jobjectRefType GetObjectRefType(JNIEnv* env, jobject jobj) {
    ScopedJniThreadState ts(env);
    return dvmGetJNIRefType(ts.self(), jobj);
}

/*
 * Allocate and return a new java.nio.ByteBuffer for this block of memory.
 *
 * "address" may not be NULL, and "capacity" must be > 0.  (These are only
 * verified when CheckJNI is enabled.)
 */
static jobject NewDirectByteBuffer(JNIEnv* env, void* address, jlong capacity) {
    ScopedJniThreadState ts(env);

    /* create an instance of java.nio.ReadWriteDirectByteBuffer */
    ClassObject* bufferClazz = gDvm.classJavaNioReadWriteDirectByteBuffer;
    if (!dvmIsClassInitialized(bufferClazz) && !dvmInitClass(bufferClazz)) {
        return NULL;
    }
    Object* newObj = dvmAllocObject(bufferClazz, ALLOC_DONT_TRACK);
    if (newObj == NULL) {
        return NULL;
    }
    /* call the constructor */
    jobject result = addLocalReference(ts.self(), newObj);
    JValue unused;
    dvmCallMethod(ts.self(), gDvm.methJavaNioReadWriteDirectByteBuffer_init,
            newObj, &unused, (jint) address, (jint) capacity);
    if (dvmGetException(ts.self()) != NULL) {
        deleteLocalReference(ts.self(), result);
        return NULL;
    }
    return result;
}

/*
 * Get the starting address of the buffer for the specified java.nio.Buffer.
 *
 * If this is not a "direct" buffer, we return NULL.
 */
static void* GetDirectBufferAddress(JNIEnv* env, jobject jbuf) {
    ScopedJniThreadState ts(env);

    // All Buffer objects have an effectiveDirectAddress field.
    Object* bufObj = dvmDecodeIndirectRef(ts.self(), jbuf);
    return (void*) dvmGetFieldInt(bufObj, gDvm.offJavaNioBuffer_effectiveDirectAddress);
}

/*
 * Get the capacity of the buffer for the specified java.nio.Buffer.
 *
 * Returns -1 if the object is not a direct buffer.  (We actually skip
 * this check, since it's expensive to determine, and just return the
 * capacity regardless.)
 */
static jlong GetDirectBufferCapacity(JNIEnv* env, jobject jbuf) {
    ScopedJniThreadState ts(env);

    /*
     * The capacity is always in the Buffer.capacity field.
     *
     * (The "check" version should verify that this is actually a Buffer,
     * but we're not required to do so here.)
     */
    Object* buf = dvmDecodeIndirectRef(ts.self(), jbuf);
    return dvmGetFieldInt(buf, gDvm.offJavaNioBuffer_capacity);
}


/*
 * ===========================================================================
 *      JNI invocation functions
 * ===========================================================================
 */

/*
 * Handle AttachCurrentThread{AsDaemon}.
 *
 * We need to make sure the VM is actually running.  For example, if we start
 * up, issue an Attach, and the VM exits almost immediately, by the time the
 * attaching happens the VM could already be shutting down.
 *
 * It's hard to avoid a race condition here because we don't want to hold
 * a lock across the entire operation.  What we can do is temporarily
 * increment the thread count to prevent a VM exit.
 *
 * This could potentially still have problems if a daemon thread calls here
 * while the VM is shutting down.  dvmThreadSelf() will work, since it just
 * uses pthread TLS, but dereferencing "vm" could fail.  Such is life when
 * you shut down a VM while threads are still running inside it.
 *
 * Remember that some code may call this as a way to find the per-thread
 * JNIEnv pointer.  Don't do excess work for that case.
 */
static jint attachThread(JavaVM* vm, JNIEnv** p_env, void* thr_args, bool isDaemon) {
    JavaVMAttachArgs* args = (JavaVMAttachArgs*) thr_args;

    /*
     * Return immediately if we're already one with the VM.
     */
    Thread* self = dvmThreadSelf();
    if (self != NULL) {
        *p_env = self->jniEnv;
        return JNI_OK;
    }

    /*
     * No threads allowed in zygote mode.
     */
    if (gDvm.zygote) {
        return JNI_ERR;
    }

    /* increment the count to keep the VM from bailing while we run */
    dvmLockThreadList(NULL);
    if (gDvm.nonDaemonThreadCount == 0) {
        // dead or dying
        ALOGV("Refusing to attach thread '%s' -- VM is shutting down",
            (thr_args == NULL) ? "(unknown)" : args->name);
        dvmUnlockThreadList();
        return JNI_ERR;
    }
    gDvm.nonDaemonThreadCount++;
    dvmUnlockThreadList();

    /* tweak the JavaVMAttachArgs as needed */
    JavaVMAttachArgs argsCopy;
    if (args == NULL) {
        /* allow the v1.1 calling convention */
        argsCopy.version = JNI_VERSION_1_2;
        argsCopy.name = NULL;
        argsCopy.group = (jobject) dvmGetMainThreadGroup();
    } else {
        assert(args->version >= JNI_VERSION_1_2);

        argsCopy.version = args->version;
        argsCopy.name = args->name;
        if (args->group != NULL) {
            argsCopy.group = (jobject) dvmDecodeIndirectRef(NULL, args->group);
        } else {
            argsCopy.group = (jobject) dvmGetMainThreadGroup();
        }
    }

    bool result = dvmAttachCurrentThread(&argsCopy, isDaemon);

    /* restore the count */
    dvmLockThreadList(NULL);
    gDvm.nonDaemonThreadCount--;
    dvmUnlockThreadList();

    /*
     * Change the status to indicate that we're out in native code.  This
     * call is not guarded with state-change macros, so we have to do it
     * by hand.
     */
    if (result) {
        self = dvmThreadSelf();
        assert(self != NULL);
        dvmChangeStatus(self, THREAD_NATIVE);
        *p_env = self->jniEnv;
        return JNI_OK;
    } else {
        return JNI_ERR;
    }
}

/*
 * Attach the current thread to the VM.  If the thread is already attached,
 * this is a no-op.
 */
static jint AttachCurrentThread(JavaVM* vm, JNIEnv** p_env, void* thr_args) {
    return attachThread(vm, p_env, thr_args, false);
}

/*
 * Like AttachCurrentThread, but set the "daemon" flag.
 */
static jint AttachCurrentThreadAsDaemon(JavaVM* vm, JNIEnv** p_env, void* thr_args)
{
    return attachThread(vm, p_env, thr_args, true);
}

/*
 * Dissociate the current thread from the VM.
 */
static jint DetachCurrentThread(JavaVM* vm) {
    Thread* self = dvmThreadSelf();
    if (self == NULL) {
        /* not attached, can't do anything */
        return JNI_ERR;
    }

    /* switch to "running" to check for suspension */
    dvmChangeStatus(self, THREAD_RUNNING);

    /* detach the thread */
    dvmDetachCurrentThread();

    /* (no need to change status back -- we have no status) */
    return JNI_OK;
}

/*
 * If current thread is attached to VM, return the associated JNIEnv.
 * Otherwise, stuff NULL in and return JNI_EDETACHED.
 *
 * JVMTI overloads this by specifying a magic value for "version", so we
 * do want to check that here.
 */
static jint GetEnv(JavaVM* vm, void** env, jint version) {
    Thread* self = dvmThreadSelf();

    if (version < JNI_VERSION_1_1 || version > JNI_VERSION_1_6) {
        return JNI_EVERSION;
    }

    if (self == NULL) {
        *env = NULL;
    } else {
        /* TODO: status change is probably unnecessary */
        dvmChangeStatus(self, THREAD_RUNNING);
        *env = (void*) dvmGetThreadJNIEnv(self);
        dvmChangeStatus(self, THREAD_NATIVE);
    }
    return (*env != NULL) ? JNI_OK : JNI_EDETACHED;
}

/*
 * Destroy the VM.  This may be called from any thread.
 *
 * If the current thread is attached, wait until the current thread is
 * the only non-daemon user-level thread.  If the current thread is not
 * attached, we attach it and do the processing as usual.  (If the attach
 * fails, it's probably because all the non-daemon threads have already
 * exited and the VM doesn't want to let us back in.)
 *
 * TODO: we don't really deal with the situation where more than one thread
 * has called here.  One thread wins, the other stays trapped waiting on
 * the condition variable forever.  Not sure this situation is interesting
 * in real life.
 */
static jint DestroyJavaVM(JavaVM* vm) {
    JavaVMExt* ext = (JavaVMExt*) vm;
    if (ext == NULL) {
        return JNI_ERR;
    }

    if (gDvm.verboseShutdown) {
        ALOGD("DestroyJavaVM waiting for non-daemon threads to exit");
    }

    /*
     * Sleep on a condition variable until it's okay to exit.
     */
    Thread* self = dvmThreadSelf();
    if (self == NULL) {
        JNIEnv* tmpEnv;
        if (AttachCurrentThread(vm, &tmpEnv, NULL) != JNI_OK) {
            ALOGV("Unable to reattach main for Destroy; assuming VM is shutting down (count=%d)",
                gDvm.nonDaemonThreadCount);
            goto shutdown;
        } else {
            ALOGV("Attached to wait for shutdown in Destroy");
        }
    }
    dvmChangeStatus(self, THREAD_VMWAIT);

    dvmLockThreadList(self);
    gDvm.nonDaemonThreadCount--;    // remove current thread from count

    while (gDvm.nonDaemonThreadCount > 0) {
        pthread_cond_wait(&gDvm.vmExitCond, &gDvm.threadListLock);
    }

    dvmUnlockThreadList();
    self = NULL;

shutdown:
    // TODO: call System.exit() to run any registered shutdown hooks
    // (this may not return -- figure out how this should work)

    if (gDvm.verboseShutdown) {
        ALOGD("DestroyJavaVM shutting VM down");
    }
    dvmShutdown();

    // TODO - free resources associated with JNI-attached daemon threads
    free(ext->envList);
    free(ext);

    return JNI_OK;
}
