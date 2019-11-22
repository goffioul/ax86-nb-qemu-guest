/*
 * nb-qemu-guest
 * 
 * Copyright (c) 2019 Michael Goffioul
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, see <http://www.gnu.org/licenses/>.
 *
 */

#define LOG_TAG "libnb-qemu-guest"

#include <sys/syscall.h>
#include <unistd.h>
#include <log/log.h>
#include <jni.h>

extern JNIEnv nb_qemu_JNIEnv;
extern JavaVM nb_qemu_JavaVM;

#define __NR_host_jnienv (__NR_SYSCALL_BASE + 0x01000)
#define __NR_host_javavm (__NR_SYSCALL_BASE + 0x01001)
#define CALLBACK_ID(type, cb) (offsetof(type, cb) / sizeof(void *))
#define JAVAVM_CALLBACK_ID(cb) CALLBACK_ID(struct JNIInvokeInterface, cb)
#define JNIENV_CALLBACK_ID(cb) CALLBACK_ID(struct JNINativeInterface, cb)
#define UNUSED(x) x __attribute__((unused))

static jint nb_qemu_jnienv_GetVersion(JNIEnv* UNUSED(env)) {
    return syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(GetVersion));
}

static jclass nb_qemu_jnienv_DefineClass(JNIEnv* UNUSED(env), const char *name, jobject loader, const jbyte *buf, jsize bufLen) {
    jclass ret;
    if (syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(DefineClass), name, loader, buf, bufLen, &ret) == 0)
      return ret;
    return NULL;
}

static jclass nb_qemu_jnienv_FindClass(JNIEnv* UNUSED(env), const char *name) {
    jclass cls;
    if (syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(FindClass), name, &cls) == 0)
      return cls;
    return NULL;
}

static jmethodID nb_qemu_jnienv_FromReflectedMethod(JNIEnv* UNUSED(env), jobject method) {
    jmethodID ret;
    if (syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(FromReflectedMethod), method, &ret) == 0)
      return ret;
    return NULL;
}

static jfieldID nb_qemu_jnienv_FromReflectedField(JNIEnv* UNUSED(env), jobject field) {
    jfieldID ret;
    if (syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(FromReflectedField), field, &ret) == 0)
      return ret;
    return NULL;
}

static jobject nb_qemu_jnienv_ToReflectedMethod(JNIEnv* UNUSED(env), jclass cls, jmethodID mID, jboolean isStatic) {
    jobject ret;
    if (syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(ToReflectedMethod), cls, mID, isStatic, &ret) == 0)
      return ret;
    return NULL;
}

static jclass nb_qemu_jnienv_GetSuperclass(JNIEnv* UNUSED(env), jclass cls) {
    jclass ret;
    if (syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(GetSuperclass), cls, &ret) == 0)
      return ret;
    return NULL;
}

static jboolean nb_qemu_jnienv_IsAssignableFrom(JNIEnv* UNUSED(env), jclass cls1, jclass cls2) {
    return syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(IsAssignableFrom), cls1, cls2);
}

static jobject nb_qemu_jnienv_ToReflectedField(JNIEnv* UNUSED(env), jclass cls, jfieldID fID, jboolean isStatic) {
    jobject ret;
    if (syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(ToReflectedField), cls, fID, isStatic, &ret) == 0)
      return ret;
    return NULL;
}

static jint nb_qemu_jnienv_Throw(JNIEnv* UNUSED(env), jthrowable thr) {
    return syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(Throw), thr);
}

static jint nb_qemu_jnienv_ThrowNew(JNIEnv* UNUSED(env), jclass cls, const char *message) {
    return syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(ThrowNew), cls, message);
}

static jthrowable nb_qemu_jnienv_ExceptionOccurred(JNIEnv* UNUSED(env)) {
    jthrowable thr;
    if (syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(ExceptionOccurred), &thr) == 0)
      return thr;
    return NULL;
}

static void nb_qemu_jnienv_ExceptionDescribe(JNIEnv* UNUSED(env)) {
    syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(ExceptionDescribe));
}

static void nb_qemu_jnienv_ExceptionClear(JNIEnv* UNUSED(env)) {
    syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(ExceptionClear));
}

static void nb_qemu_jnienv_FatalError(JNIEnv* UNUSED(env), const char *msg) {
    syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(FatalError), msg);
}

static jint nb_qemu_jnienv_PushLocalFrame(JNIEnv* UNUSED(env), jint capacity) {
    return syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(PushLocalFrame), capacity);
}

static jobject nb_qemu_jnienv_PopLocalFrame(JNIEnv* UNUSED(env), jobject result) {
    jobject ret;
    if (syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(PopLocalFrame), result, &ret) == 0)
      return ret;
    return NULL;
}

static jobject nb_qemu_jnienv_NewGlobalRef(JNIEnv* UNUSED(env), jobject obj) {
    jobject ret;
    if (syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(NewGlobalRef), obj, &ret) == 0)
      return ret;
    return NULL;
}

static void nb_qemu_jnienv_DeleteGlobalRef(JNIEnv* UNUSED(env), jobject obj) {
    syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(DeleteGlobalRef), obj);
}

static void nb_qemu_jnienv_DeleteLocalRef(JNIEnv* UNUSED(env), jobject obj) {
    syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(DeleteLocalRef), obj);
}

static jboolean nb_qemu_jnienv_IsSameObject(JNIEnv* UNUSED(env), jobject obj1, jobject obj2) {
    return syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(IsSameObject), obj1, obj2);
}

static jobject nb_qemu_jnienv_NewLocalRef(JNIEnv* UNUSED(env), jobject obj) {
    jobject ret;
    if (syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(NewLocalRef), obj, &ret) == 0)
      return ret;
    return NULL;
}

static jint nb_qemu_jnienv_EnsureLocalCapacity(JNIEnv* UNUSED(env), jint capacity) {
    return syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(EnsureLocalCapacity), capacity);
}

static jobject nb_qemu_jnienv_AllocObject(JNIEnv* UNUSED(env), jclass cls) {
    jobject ret;
    if (syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(AllocObject), cls, &ret) == 0)
      return ret;
    return NULL;
}

static jobject nb_qemu_jnienv_NewObject(JNIEnv *env, jclass cls, jmethodID mID, ...) {
    va_list args;
    jobject ret;
    va_start(args, mID);
    ret = (*env)->NewObjectV(env, cls, mID, args);
    va_end(args);
    return ret;
}

static jobject nb_qemu_jnienv_NewObjectV(JNIEnv* UNUSED(env), jclass cls, jmethodID mID, va_list args) {
    jobject ret;
    if (syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(NewObjectV), cls, mID, args, &ret) == 0)
      return ret;
    return NULL;
}

static jobject nb_qemu_jnienv_NewObjectA(JNIEnv* UNUSED(env), jclass cls, jmethodID mID, const jvalue *args) {
    jobject ret;
    if (syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(NewObjectA), cls, mID, args, &ret) == 0)
      return ret;
    return NULL;
}

static jclass nb_qemu_jnienv_GetObjectClass(JNIEnv* UNUSED(env), jobject obj) {
    jclass ret;
    if (syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(GetObjectClass), obj, &ret) == 0)
      return ret;
    return NULL;
}

static jboolean nb_qemu_jnienv_IsInstanceOf(JNIEnv* UNUSED(env), jobject obj, jclass cls) {
    return syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(IsInstanceOf), obj, cls);
}

static jmethodID nb_qemu_jnienv_GetMethodID(JNIEnv* UNUSED(env), jclass cls, const char *name, const char *sig) {
    jmethodID mID;
    if (syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(GetMethodID), cls, name, sig, &mID) == 0)
      return mID;
    return NULL;
}

#define CALL_METHOD_WRAPPER(name, type, null) \
static type nb_qemu_jnienv_Call##name##Method(JNIEnv *env, jobject obj, jmethodID mID, ...) { \
    va_list args; \
    type ret; \
    va_start(args, mID); \
    ret = (*env)->Call##name##MethodV(env, obj, mID, args); \
    va_end(args); \
    return ret; \
} \
 \
static type nb_qemu_jnienv_Call##name##MethodV(JNIEnv* UNUSED(env), jobject obj, jmethodID mID, va_list args) { \
    type ret; \
    if (syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(Call##name##MethodV), obj, mID, args, &ret) == 0) \
      return ret; \
    return null; \
} \
 \
static type nb_qemu_jnienv_Call##name##MethodA(JNIEnv* UNUSED(env), jobject obj, jmethodID mID, const jvalue *args) { \
    type ret; \
    if (syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(Call##name##MethodA), obj, mID, args, &ret) == 0) \
      return ret; \
    return null; \
}

CALL_METHOD_WRAPPER(Object, jobject, NULL)
CALL_METHOD_WRAPPER(Boolean, jboolean, JNI_FALSE)
CALL_METHOD_WRAPPER(Byte, jbyte, 0)
CALL_METHOD_WRAPPER(Char, jchar, 0)
CALL_METHOD_WRAPPER(Short, jshort, 0)
CALL_METHOD_WRAPPER(Int, jint, 0)
CALL_METHOD_WRAPPER(Long, jlong, 0)
CALL_METHOD_WRAPPER(Float, jfloat, 0)
CALL_METHOD_WRAPPER(Double, jdouble, 0)

static void nb_qemu_jnienv_CallVoidMethod(JNIEnv *env, jobject obj, jmethodID mID, ...) {
    va_list args;
    va_start(args, mID);
    (*env)->CallVoidMethodV(env, obj, mID, args);
    va_end(args);
}

static void nb_qemu_jnienv_CallVoidMethodV(JNIEnv* UNUSED(env), jobject obj, jmethodID mID, va_list args) {
    syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(CallVoidMethodV), obj, mID, args);
}

static void nb_qemu_jnienv_CallVoidMethodA(JNIEnv* UNUSED(env), jobject obj, jmethodID mID, const jvalue *args) {
    syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(CallVoidMethodA), obj, mID, args);
}

#define CALL_NONVIRTUAL_METHOD_WRAPPER(name, type, null) \
static type nb_qemu_jnienv_CallNonvirtual##name##Method(JNIEnv *env, jobject obj, jclass cls, jmethodID mID, ...) { \
    va_list args; \
    type ret; \
    va_start(args, mID); \
    ret = (*env)->CallNonvirtual##name##MethodV(env, obj, cls, mID, args); \
    va_end(args); \
    return ret; \
} \
 \
static type nb_qemu_jnienv_CallNonvirtual##name##MethodV(JNIEnv* UNUSED(env), jobject obj, jclass cls, jmethodID mID, va_list args) { \
    type ret; \
    if (syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(CallNonvirtual##name##MethodV), obj, cls, mID, args, &ret) == 0) \
      return ret; \
    return null; \
} \
 \
static type nb_qemu_jnienv_CallNonvirtual##name##MethodA(JNIEnv* UNUSED(env), jobject obj, jclass cls, jmethodID mID, const jvalue *args) { \
    type ret; \
    if (syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(CallNonvirtual##name##MethodA), obj, cls, mID, args, &ret) == 0) \
      return ret; \
    return null; \
}

CALL_NONVIRTUAL_METHOD_WRAPPER(Object, jobject, NULL)
CALL_NONVIRTUAL_METHOD_WRAPPER(Boolean, jboolean, JNI_FALSE)
CALL_NONVIRTUAL_METHOD_WRAPPER(Byte, jbyte, 0)
CALL_NONVIRTUAL_METHOD_WRAPPER(Char, jchar, 0)
CALL_NONVIRTUAL_METHOD_WRAPPER(Short, jshort, 0)
CALL_NONVIRTUAL_METHOD_WRAPPER(Int, jint, 0)
CALL_NONVIRTUAL_METHOD_WRAPPER(Long, jlong, 0)
CALL_NONVIRTUAL_METHOD_WRAPPER(Float, jfloat, 0)
CALL_NONVIRTUAL_METHOD_WRAPPER(Double, jdouble, 0)

static void nb_qemu_jnienv_CallNonvirtualVoidMethod(JNIEnv *env, jobject obj, jclass cls, jmethodID mID, ...) {
    va_list args;
    va_start(args, mID);
    (*env)->CallNonvirtualVoidMethodV(env, obj, cls, mID, args);
    va_end(args);
}

static void nb_qemu_jnienv_CallNonvirtualVoidMethodV(JNIEnv* UNUSED(env), jobject obj, jclass cls, jmethodID mID, va_list args) {
    syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(CallNonvirtualVoidMethodV), obj, cls, mID, args);
}

static void nb_qemu_jnienv_CallNonvirtualVoidMethodA(JNIEnv* UNUSED(env), jobject obj, jclass cls, jmethodID mID, const jvalue *args) {
    syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(CallNonvirtualVoidMethodA), obj, cls, mID, args);
}

static jfieldID nb_qemu_jnienv_GetFieldID(JNIEnv* UNUSED(env), jclass cls, const char *name, const char *sig) {
    jfieldID fID;
    if (syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(GetFieldID), cls, name, sig, &fID) == 0)
      return fID;
    return NULL;
}

#define GET_FIELD_WRAPPER(name, type, null) \
static type nb_qemu_jnienv_Get##name##Field(JNIEnv* UNUSED(env), jobject obj, jfieldID fID) { \
    type ret = null; \
    syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(Get##name##Field), obj, fID, &ret); \
    return ret; \
}

GET_FIELD_WRAPPER(Object, jobject, NULL)
GET_FIELD_WRAPPER(Boolean, jboolean, JNI_FALSE)
GET_FIELD_WRAPPER(Byte, jbyte, 0)
GET_FIELD_WRAPPER(Char, jchar, 0)
GET_FIELD_WRAPPER(Short, jshort, 0)
GET_FIELD_WRAPPER(Int, jint, 0)
GET_FIELD_WRAPPER(Long, jlong, 0)
GET_FIELD_WRAPPER(Float, jfloat, 0)
GET_FIELD_WRAPPER(Double, jdouble, 0)

#define SET_FIELD_WRAPPER(name, type) \
static void nb_qemu_jnienv_Set##name##Field(JNIEnv* UNUSED(env), jobject obj, jfieldID fID, type value) { \
    syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(Set##name##Field), obj, fID, &value); \
}

SET_FIELD_WRAPPER(Object, jobject)
SET_FIELD_WRAPPER(Boolean, jboolean)
SET_FIELD_WRAPPER(Byte, jbyte)
SET_FIELD_WRAPPER(Char, jchar)
SET_FIELD_WRAPPER(Short, jshort)
SET_FIELD_WRAPPER(Int, jint)
SET_FIELD_WRAPPER(Long, jlong)
SET_FIELD_WRAPPER(Float, jfloat)
SET_FIELD_WRAPPER(Double, jdouble)

static jmethodID nb_qemu_jnienv_GetStaticMethodID(JNIEnv* UNUSED(env), jclass cls, const char *name, const char *sig) {
    jmethodID mID;
    if (syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(GetStaticMethodID), cls, name, sig, &mID) == 0)
      return mID;
    return NULL;
}

#define CALL_STATIC_METHOD_WRAPPER(name, type, null) \
static type nb_qemu_jnienv_CallStatic##name##Method(JNIEnv *env, jclass cls, jmethodID mID, ...) { \
    va_list args; \
    type ret; \
    va_start(args, mID); \
    ret = (*env)->CallStatic##name##MethodV(env, cls, mID, args); \
    va_end(args); \
    return ret; \
} \
 \
static type nb_qemu_jnienv_CallStatic##name##MethodV(JNIEnv* UNUSED(env), jclass cls, jmethodID mID, va_list args) { \
    type ret; \
    if (syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(CallStatic##name##MethodV), cls, mID, args, &ret) == 0) \
      return ret; \
    return null; \
} \
 \
static type nb_qemu_jnienv_CallStatic##name##MethodA(JNIEnv* UNUSED(env), jclass cls, jmethodID mID, const jvalue *args) { \
    type ret; \
    if (syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(CallStatic##name##MethodA), cls, mID, args, &ret) == 0) \
      return ret; \
    return null; \
}

CALL_STATIC_METHOD_WRAPPER(Object, jobject, NULL)
CALL_STATIC_METHOD_WRAPPER(Boolean, jboolean, JNI_FALSE)
CALL_STATIC_METHOD_WRAPPER(Byte, jbyte, 0)
CALL_STATIC_METHOD_WRAPPER(Char, jchar, 0)
CALL_STATIC_METHOD_WRAPPER(Short, jshort, 0)
CALL_STATIC_METHOD_WRAPPER(Int, jint, 0)
CALL_STATIC_METHOD_WRAPPER(Long, jlong, 0)
CALL_STATIC_METHOD_WRAPPER(Float, jfloat, 0)
CALL_STATIC_METHOD_WRAPPER(Double, jdouble, 0)

static void nb_qemu_jnienv_CallStaticVoidMethod(JNIEnv *env, jclass cls, jmethodID mID, ...) {
    va_list args;
    va_start(args, mID);
    (*env)->CallStaticVoidMethodV(env, cls, mID, args);
    va_end(args);
}

static void nb_qemu_jnienv_CallStaticVoidMethodV(JNIEnv* UNUSED(env), jclass cls, jmethodID mID, va_list args) {
    syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(CallStaticVoidMethodV), cls, mID, args);
}

static void nb_qemu_jnienv_CallStaticVoidMethodA(JNIEnv* UNUSED(env), jclass cls, jmethodID mID, const jvalue *args) {
    syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(CallStaticVoidMethodA), cls, mID, args);
}

static jfieldID nb_qemu_jnienv_GetStaticFieldID(JNIEnv* UNUSED(env), jclass cls, const char *name, const char *sig) {
    jfieldID fID;
    if (syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(GetStaticFieldID), cls, name, sig, &fID) == 0)
      return fID;
    return NULL;
}

#define GET_STATIC_FIELD_WRAPPER(name, type, null) \
static type nb_qemu_jnienv_GetStatic##name##Field(JNIEnv* UNUSED(env), jclass cls, jfieldID fID) { \
    type ret = null; \
    syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(GetStatic##name##Field), cls, fID, &ret); \
    return ret; \
}

GET_STATIC_FIELD_WRAPPER(Object, jobject, NULL)
GET_STATIC_FIELD_WRAPPER(Boolean, jboolean, JNI_FALSE)
GET_STATIC_FIELD_WRAPPER(Byte, jbyte, 0)
GET_STATIC_FIELD_WRAPPER(Char, jchar, 0)
GET_STATIC_FIELD_WRAPPER(Short, jshort, 0)
GET_STATIC_FIELD_WRAPPER(Int, jint, 0)
GET_STATIC_FIELD_WRAPPER(Long, jlong, 0)
GET_STATIC_FIELD_WRAPPER(Float, jfloat, 0)
GET_STATIC_FIELD_WRAPPER(Double, jdouble, 0)

#define SET_STATIC_FIELD_WRAPPER(name, type) \
static void nb_qemu_jnienv_SetStatic##name##Field(JNIEnv* UNUSED(env), jclass cls, jfieldID fID, type value) { \
    syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(SetStatic##name##Field), cls, fID, &value); \
}

SET_STATIC_FIELD_WRAPPER(Object, jobject)
SET_STATIC_FIELD_WRAPPER(Boolean, jboolean)
SET_STATIC_FIELD_WRAPPER(Byte, jbyte)
SET_STATIC_FIELD_WRAPPER(Char, jchar)
SET_STATIC_FIELD_WRAPPER(Short, jshort)
SET_STATIC_FIELD_WRAPPER(Int, jint)
SET_STATIC_FIELD_WRAPPER(Long, jlong)
SET_STATIC_FIELD_WRAPPER(Float, jfloat)
SET_STATIC_FIELD_WRAPPER(Double, jdouble)

static jstring nb_qemu_jnienv_NewString(JNIEnv* UNUSED(env), const jchar *chars, jsize len) {
    jstring ret;
    if (syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(NewString), chars, len, &ret) == 0)
      return ret;
    return NULL;
}

static jsize nb_qemu_jnienv_GetStringLength(JNIEnv* UNUSED(env), jstring str) {
    return syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(GetStringLength), str);
}

static const jchar *nb_qemu_jnienv_GetStringChars(JNIEnv* UNUSED(env), jstring str, jboolean *isCopy) {
    const jchar *ptr;
    if (syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(GetStringChars), str, isCopy, &ptr) == 0)
      return ptr;
    return NULL;
}

static void nb_qemu_jnienv_ReleaseStringChars(JNIEnv* UNUSED(env), jstring str, const jchar *chars) {
    syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(ReleaseStringChars), str, chars);
}

static jstring nb_qemu_jnienv_NewStringUTF(JNIEnv* UNUSED(env), const char *bytes) {
    jstring ret;
    if (syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(NewStringUTF), bytes, &ret) == 0)
      return ret;
    return NULL;
}

static jsize nb_qemu_jnienv_GetStringUTFLength(JNIEnv* UNUSED(env), jstring str) {
    return syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(GetStringUTFLength), str);
}

static const char *nb_qemu_jnienv_GetStringUTFChars(JNIEnv* UNUSED(env), jstring str, jboolean *isCopy) {
    const char *ptr;
    if (syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(GetStringUTFChars), str, isCopy, &ptr) == 0)
      return ptr;
    return NULL;
}

static void nb_qemu_jnienv_ReleaseStringUTFChars(JNIEnv* UNUSED(env), jstring str, const char *utf) {
    syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(ReleaseStringUTFChars), str, utf);
}

static jsize nb_qemu_jnienv_GetArrayLength(JNIEnv* UNUSED(env), jarray array) {
    return syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(GetArrayLength), array);
}

static jobjectArray nb_qemu_jnienv_NewObjectArray(JNIEnv* UNUSED(env), jsize len, jclass cls, jobject obj) {
    jobjectArray ret;
    if (syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(NewObjectArray), len, cls, obj, &ret) == 0)
      return ret;
    return NULL;
}

static jobject nb_qemu_jnienv_GetObjectArrayElement(JNIEnv* UNUSED(env), jobjectArray array, jsize index) {
    jobject ret;
    if (syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(GetObjectArrayElement), array, index, &ret) == 0)
      return ret;
    return NULL;
}

static void nb_qemu_jnienv_SetObjectArrayElement(JNIEnv* UNUSED(env), jobjectArray array, jsize index, jobject value) {
    syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(SetObjectArrayElement), array, index, value);
}

#define NEW_ARRAY_WRAPPER(name, atype) \
static atype nb_qemu_jnienv_New##name##Array(JNIEnv* UNUSED(env), jsize len) { \
    atype ret; \
    if (syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(New##name##Array), len, &ret) == 0) \
      return ret; \
    return NULL; \
}

NEW_ARRAY_WRAPPER(Boolean, jbooleanArray)
NEW_ARRAY_WRAPPER(Byte, jbyteArray)
NEW_ARRAY_WRAPPER(Char, jcharArray)
NEW_ARRAY_WRAPPER(Short, jshortArray)
NEW_ARRAY_WRAPPER(Int, jintArray)
NEW_ARRAY_WRAPPER(Long, jlongArray)
NEW_ARRAY_WRAPPER(Float, jfloatArray)
NEW_ARRAY_WRAPPER(Double, jdoubleArray)

#define ACCESS_ARRAY_ELEMENTS(name, type, atype) \
static type *nb_qemu_jnienv_Get##name##ArrayElements(JNIEnv* UNUSED(env), atype array, jboolean *isCopy) { \
    type *ptr; \
    if (syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(Get##name##ArrayElements), array, isCopy, &ptr) == 0) \
      return ptr; \
    return NULL; \
} \
 \
static void nb_qemu_jnienv_Release##name##ArrayElements(JNIEnv* UNUSED(env), atype array, type *elems, jint mode) { \
    syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(Release##name##ArrayElements), array, elems, mode); \
}

ACCESS_ARRAY_ELEMENTS(Boolean, jboolean, jbooleanArray)
ACCESS_ARRAY_ELEMENTS(Byte, jbyte, jbyteArray)
ACCESS_ARRAY_ELEMENTS(Char, jchar, jcharArray)
ACCESS_ARRAY_ELEMENTS(Short, jshort, jshortArray)
ACCESS_ARRAY_ELEMENTS(Int, jint, jintArray)
ACCESS_ARRAY_ELEMENTS(Long, jlong, jlongArray)
ACCESS_ARRAY_ELEMENTS(Float, jfloat, jfloatArray)
ACCESS_ARRAY_ELEMENTS(Double, jdouble, jdoubleArray)

#define ACCESS_ARRAY_REGION(name, type, atype) \
static void nb_qemu_jnienv_Get##name##ArrayRegion(JNIEnv* UNUSED(env), atype array, jsize start, jsize len, type *buf) { \
    syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(Get##name##ArrayRegion), array, start, len, buf); \
} \
 \
static void nb_qemu_jnienv_Set##name##ArrayRegion(JNIEnv* UNUSED(env), atype array, jsize start, jsize len, const type *buf) { \
    syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(Set##name##ArrayRegion), array, start, len, buf); \
}

ACCESS_ARRAY_REGION(Boolean, jboolean, jbooleanArray)
ACCESS_ARRAY_REGION(Byte, jbyte, jbyteArray)
ACCESS_ARRAY_REGION(Char, jchar, jcharArray)
ACCESS_ARRAY_REGION(Short, jshort, jshortArray)
ACCESS_ARRAY_REGION(Int, jint, jintArray)
ACCESS_ARRAY_REGION(Long, jlong, jlongArray)
ACCESS_ARRAY_REGION(Float, jfloat, jfloatArray)
ACCESS_ARRAY_REGION(Double, jdouble, jdoubleArray)

static jint nb_qemu_jnienv_RegisterNatives(JNIEnv* UNUSED(env), jclass cls, const JNINativeMethod *methods, jint nMethods) {
    return syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(RegisterNatives), cls, methods, nMethods);
}

static jint nb_qemu_jnienv_UnregisterNatives(JNIEnv* UNUSED(env), jclass cls) {
    return syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(UnregisterNatives), cls);
}

static jint nb_qemu_jnienv_MonitorEnter(JNIEnv* UNUSED(env), jobject obj) {
    return syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(MonitorEnter), obj);
}

static jint nb_qemu_jnienv_MonitorExit(JNIEnv* UNUSED(env), jobject obj) {
    return syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(MonitorExit), obj);
}

static jint nb_qemu_jnienv_GetJavaVM(JNIEnv* UNUSED(env), JavaVM **vm) {
    int ret = syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(GetJavaVM));
    if (ret == 0)
      *vm = &nb_qemu_JavaVM;
    return 0;
}

static void nb_qemu_jnienv_GetStringRegion(JNIEnv* UNUSED(env), jstring str, jsize start, jsize len, jchar *buf) {
    syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(GetStringRegion), str, start, len, buf);
}

static void nb_qemu_jnienv_GetStringUTFRegion(JNIEnv* UNUSED(env), jstring str, jsize start, jsize len, char *buf) {
    syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(GetStringUTFRegion), str, start, len, buf);
}

static void *nb_qemu_jnienv_GetPrimitiveArrayCritical(JNIEnv* UNUSED(env), jarray array, jboolean *isCopy) {
    void *ptr;
    if (syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(GetPrimitiveArrayCritical), array, isCopy, &ptr) == 0)
      return ptr;
    return NULL;
}

static void nb_qemu_jnienv_ReleasePrimitiveArrayCritical(JNIEnv* UNUSED(env), jarray array, void *carray, jint mode) {
    syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(ReleasePrimitiveArrayCritical), array, carray, mode);
}

static const jchar *nb_qemu_jnienv_GetStringCritical(JNIEnv* UNUSED(env), jstring str, jboolean *isCopy) {
    const jchar *ptr;
    if (syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(GetStringCritical), str, isCopy, &ptr) == 0)
      return ptr;
    return NULL;
}

static void nb_qemu_jnienv_ReleaseStringCritical(JNIEnv* UNUSED(env), jstring str, const jchar *chars) {
    syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(ReleaseStringCritical), str, chars);
}

static jweak nb_qemu_jnienv_NewWeakGlobalRef(JNIEnv* UNUSED(env), jobject obj) {
    jweak ret;
    if (syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(NewWeakGlobalRef), obj, &ret) == 0)
      return ret;
    return NULL;
}

static void nb_qemu_jnienv_DeleteWeakGlobalRef(JNIEnv* UNUSED(env), jweak obj) {
    syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(DeleteWeakGlobalRef), obj);
}

static jboolean nb_qemu_jnienv_ExceptionCheck(JNIEnv* UNUSED(env)) {
    return syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(ExceptionCheck)) == 0 ? JNI_FALSE : JNI_TRUE;
}

static jobject nb_qemu_jnienv_NewDirectByteBuffer(JNIEnv* UNUSED(env), void *address, jlong capacity) {
    jobject ret;
    if (syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(NewDirectByteBuffer), address, &capacity, &ret) == 0)
      return ret;
    return NULL;
}

static void *nb_qemu_jnienv_GetDirectBufferAddress(JNIEnv* UNUSED(env), jobject buf) {
    void *ret;
    if (syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(GetDirectBufferAddress), buf, &ret) == 0)
      return ret;
    return NULL;
}

static jlong nb_qemu_jnienv_GetDirectBufferCapacity(JNIEnv* UNUSED(env), jobject buf) {
    jlong ret;
    if (syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(GetDirectBufferCapacity), buf, &ret) == 0)
      return ret;
    return -1LL;
}

static jobjectRefType nb_qemu_jnienv_GetObjectRefType(JNIEnv* UNUSED(env), jobject obj) {
    return syscall(__NR_host_jnienv, JNIENV_CALLBACK_ID(GetObjectRefType), obj);
}

static struct JNINativeInterface _jni_iface = {
    .reserved0 = NULL,
    .reserved1 = NULL,
    .reserved2 = NULL,
    .reserved3 = NULL,
    .GetVersion = nb_qemu_jnienv_GetVersion,
    .DefineClass = nb_qemu_jnienv_DefineClass,
    .FindClass = nb_qemu_jnienv_FindClass,
    .FromReflectedMethod = nb_qemu_jnienv_FromReflectedMethod,
    .FromReflectedField = nb_qemu_jnienv_FromReflectedField,
    .ToReflectedMethod = nb_qemu_jnienv_ToReflectedMethod,
    .GetSuperclass = nb_qemu_jnienv_GetSuperclass,
    .IsAssignableFrom = nb_qemu_jnienv_IsAssignableFrom,
    .ToReflectedField = nb_qemu_jnienv_ToReflectedField,
    .Throw = nb_qemu_jnienv_Throw,
    .ThrowNew = nb_qemu_jnienv_ThrowNew,
    .ExceptionOccurred = nb_qemu_jnienv_ExceptionOccurred,
    .ExceptionDescribe = nb_qemu_jnienv_ExceptionDescribe,
    .ExceptionClear = nb_qemu_jnienv_ExceptionClear,
    .FatalError = nb_qemu_jnienv_FatalError,
    .PushLocalFrame = nb_qemu_jnienv_PushLocalFrame,
    .PopLocalFrame = nb_qemu_jnienv_PopLocalFrame,
    .NewGlobalRef = nb_qemu_jnienv_NewGlobalRef,
    .DeleteGlobalRef = nb_qemu_jnienv_DeleteGlobalRef,
    .DeleteLocalRef = nb_qemu_jnienv_DeleteLocalRef,
    .IsSameObject = nb_qemu_jnienv_IsSameObject,
    .NewLocalRef = nb_qemu_jnienv_NewLocalRef,
    .EnsureLocalCapacity = nb_qemu_jnienv_EnsureLocalCapacity,
    .AllocObject = nb_qemu_jnienv_AllocObject,
    .NewObject = nb_qemu_jnienv_NewObject,
    .NewObjectV = nb_qemu_jnienv_NewObjectV,
    .NewObjectA = nb_qemu_jnienv_NewObjectA,
    .GetObjectClass = nb_qemu_jnienv_GetObjectClass,
    .IsInstanceOf = nb_qemu_jnienv_IsInstanceOf,
    .GetMethodID = nb_qemu_jnienv_GetMethodID,
    .CallObjectMethod = nb_qemu_jnienv_CallObjectMethod,
    .CallObjectMethodV = nb_qemu_jnienv_CallObjectMethodV,
    .CallObjectMethodA = nb_qemu_jnienv_CallObjectMethodA,
    .CallBooleanMethod = nb_qemu_jnienv_CallBooleanMethod,
    .CallBooleanMethodV = nb_qemu_jnienv_CallBooleanMethodV,
    .CallBooleanMethodA = nb_qemu_jnienv_CallBooleanMethodA,
    .CallByteMethod = nb_qemu_jnienv_CallByteMethod,
    .CallByteMethodV = nb_qemu_jnienv_CallByteMethodV,
    .CallByteMethodA = nb_qemu_jnienv_CallByteMethodA,
    .CallCharMethod = nb_qemu_jnienv_CallCharMethod,
    .CallCharMethodV = nb_qemu_jnienv_CallCharMethodV,
    .CallCharMethodA = nb_qemu_jnienv_CallCharMethodA,
    .CallShortMethod = nb_qemu_jnienv_CallShortMethod,
    .CallShortMethodV = nb_qemu_jnienv_CallShortMethodV,
    .CallShortMethodA = nb_qemu_jnienv_CallShortMethodA,
    .CallIntMethod = nb_qemu_jnienv_CallIntMethod,
    .CallIntMethodV = nb_qemu_jnienv_CallIntMethodV,
    .CallIntMethodA = nb_qemu_jnienv_CallIntMethodA,
    .CallLongMethod = nb_qemu_jnienv_CallLongMethod,
    .CallLongMethodV = nb_qemu_jnienv_CallLongMethodV,
    .CallLongMethodA = nb_qemu_jnienv_CallLongMethodA,
    .CallFloatMethod = nb_qemu_jnienv_CallFloatMethod,
    .CallFloatMethodV = nb_qemu_jnienv_CallFloatMethodV,
    .CallFloatMethodA = nb_qemu_jnienv_CallFloatMethodA,
    .CallDoubleMethod = nb_qemu_jnienv_CallDoubleMethod,
    .CallDoubleMethodV = nb_qemu_jnienv_CallDoubleMethodV,
    .CallDoubleMethodA = nb_qemu_jnienv_CallDoubleMethodA,
    .CallVoidMethod = nb_qemu_jnienv_CallVoidMethod,
    .CallVoidMethodV = nb_qemu_jnienv_CallVoidMethodV,
    .CallVoidMethodA = nb_qemu_jnienv_CallVoidMethodA,
    .CallNonvirtualObjectMethod = nb_qemu_jnienv_CallNonvirtualObjectMethod,
    .CallNonvirtualObjectMethodV = nb_qemu_jnienv_CallNonvirtualObjectMethodV,
    .CallNonvirtualObjectMethodA = nb_qemu_jnienv_CallNonvirtualObjectMethodA,
    .CallNonvirtualBooleanMethod = nb_qemu_jnienv_CallNonvirtualBooleanMethod,
    .CallNonvirtualBooleanMethodV = nb_qemu_jnienv_CallNonvirtualBooleanMethodV,
    .CallNonvirtualBooleanMethodA = nb_qemu_jnienv_CallNonvirtualBooleanMethodA,
    .CallNonvirtualByteMethod = nb_qemu_jnienv_CallNonvirtualByteMethod,
    .CallNonvirtualByteMethodV = nb_qemu_jnienv_CallNonvirtualByteMethodV,
    .CallNonvirtualByteMethodA = nb_qemu_jnienv_CallNonvirtualByteMethodA,
    .CallNonvirtualCharMethod = nb_qemu_jnienv_CallNonvirtualCharMethod,
    .CallNonvirtualCharMethodV = nb_qemu_jnienv_CallNonvirtualCharMethodV,
    .CallNonvirtualCharMethodA = nb_qemu_jnienv_CallNonvirtualCharMethodA,
    .CallNonvirtualShortMethod = nb_qemu_jnienv_CallNonvirtualShortMethod,
    .CallNonvirtualShortMethodV = nb_qemu_jnienv_CallNonvirtualShortMethodV,
    .CallNonvirtualShortMethodA = nb_qemu_jnienv_CallNonvirtualShortMethodA,
    .CallNonvirtualIntMethod = nb_qemu_jnienv_CallNonvirtualIntMethod,
    .CallNonvirtualIntMethodV = nb_qemu_jnienv_CallNonvirtualIntMethodV,
    .CallNonvirtualIntMethodA = nb_qemu_jnienv_CallNonvirtualIntMethodA,
    .CallNonvirtualLongMethod = nb_qemu_jnienv_CallNonvirtualLongMethod,
    .CallNonvirtualLongMethodV = nb_qemu_jnienv_CallNonvirtualLongMethodV,
    .CallNonvirtualLongMethodA = nb_qemu_jnienv_CallNonvirtualLongMethodA,
    .CallNonvirtualFloatMethod = nb_qemu_jnienv_CallNonvirtualFloatMethod,
    .CallNonvirtualFloatMethodV = nb_qemu_jnienv_CallNonvirtualFloatMethodV,
    .CallNonvirtualFloatMethodA = nb_qemu_jnienv_CallNonvirtualFloatMethodA,
    .CallNonvirtualDoubleMethod = nb_qemu_jnienv_CallNonvirtualDoubleMethod,
    .CallNonvirtualDoubleMethodV = nb_qemu_jnienv_CallNonvirtualDoubleMethodV,
    .CallNonvirtualDoubleMethodA = nb_qemu_jnienv_CallNonvirtualDoubleMethodA,
    .CallNonvirtualVoidMethod = nb_qemu_jnienv_CallNonvirtualVoidMethod,
    .CallNonvirtualVoidMethodV = nb_qemu_jnienv_CallNonvirtualVoidMethodV,
    .CallNonvirtualVoidMethodA = nb_qemu_jnienv_CallNonvirtualVoidMethodA,
    .GetFieldID = nb_qemu_jnienv_GetFieldID,
    .GetObjectField = nb_qemu_jnienv_GetObjectField,
    .GetBooleanField = nb_qemu_jnienv_GetBooleanField,
    .GetByteField = nb_qemu_jnienv_GetByteField,
    .GetCharField = nb_qemu_jnienv_GetCharField,
    .GetShortField = nb_qemu_jnienv_GetShortField,
    .GetIntField = nb_qemu_jnienv_GetIntField,
    .GetLongField = nb_qemu_jnienv_GetLongField,
    .GetFloatField = nb_qemu_jnienv_GetFloatField,
    .GetDoubleField = nb_qemu_jnienv_GetDoubleField,
    .SetObjectField = nb_qemu_jnienv_SetObjectField,
    .SetBooleanField = nb_qemu_jnienv_SetBooleanField,
    .SetByteField = nb_qemu_jnienv_SetByteField,
    .SetCharField = nb_qemu_jnienv_SetCharField,
    .SetShortField = nb_qemu_jnienv_SetShortField,
    .SetIntField = nb_qemu_jnienv_SetIntField,
    .SetLongField = nb_qemu_jnienv_SetLongField,
    .SetFloatField = nb_qemu_jnienv_SetFloatField,
    .SetDoubleField = nb_qemu_jnienv_SetDoubleField,
    .GetStaticMethodID = nb_qemu_jnienv_GetStaticMethodID,
    .CallStaticObjectMethod = nb_qemu_jnienv_CallStaticObjectMethod,
    .CallStaticObjectMethodV = nb_qemu_jnienv_CallStaticObjectMethodV,
    .CallStaticObjectMethodA = nb_qemu_jnienv_CallStaticObjectMethodA,
    .CallStaticBooleanMethod = nb_qemu_jnienv_CallStaticBooleanMethod,
    .CallStaticBooleanMethodV = nb_qemu_jnienv_CallStaticBooleanMethodV,
    .CallStaticBooleanMethodA = nb_qemu_jnienv_CallStaticBooleanMethodA,
    .CallStaticByteMethod = nb_qemu_jnienv_CallStaticByteMethod,
    .CallStaticByteMethodV = nb_qemu_jnienv_CallStaticByteMethodV,
    .CallStaticByteMethodA = nb_qemu_jnienv_CallStaticByteMethodA,
    .CallStaticCharMethod = nb_qemu_jnienv_CallStaticCharMethod,
    .CallStaticCharMethodV = nb_qemu_jnienv_CallStaticCharMethodV,
    .CallStaticCharMethodA = nb_qemu_jnienv_CallStaticCharMethodA,
    .CallStaticShortMethod = nb_qemu_jnienv_CallStaticShortMethod,
    .CallStaticShortMethodV = nb_qemu_jnienv_CallStaticShortMethodV,
    .CallStaticShortMethodA = nb_qemu_jnienv_CallStaticShortMethodA,
    .CallStaticIntMethod = nb_qemu_jnienv_CallStaticIntMethod,
    .CallStaticIntMethodV = nb_qemu_jnienv_CallStaticIntMethodV,
    .CallStaticIntMethodA = nb_qemu_jnienv_CallStaticIntMethodA,
    .CallStaticLongMethod = nb_qemu_jnienv_CallStaticLongMethod,
    .CallStaticLongMethodV = nb_qemu_jnienv_CallStaticLongMethodV,
    .CallStaticLongMethodA = nb_qemu_jnienv_CallStaticLongMethodA,
    .CallStaticFloatMethod = nb_qemu_jnienv_CallStaticFloatMethod,
    .CallStaticFloatMethodV = nb_qemu_jnienv_CallStaticFloatMethodV,
    .CallStaticFloatMethodA = nb_qemu_jnienv_CallStaticFloatMethodA,
    .CallStaticDoubleMethod = nb_qemu_jnienv_CallStaticDoubleMethod,
    .CallStaticDoubleMethodV = nb_qemu_jnienv_CallStaticDoubleMethodV,
    .CallStaticDoubleMethodA = nb_qemu_jnienv_CallStaticDoubleMethodA,
    .CallStaticVoidMethod = nb_qemu_jnienv_CallStaticVoidMethod,
    .CallStaticVoidMethodV = nb_qemu_jnienv_CallStaticVoidMethodV,
    .CallStaticVoidMethodA = nb_qemu_jnienv_CallStaticVoidMethodA,
    .GetStaticFieldID = nb_qemu_jnienv_GetStaticFieldID,
    .GetStaticObjectField = nb_qemu_jnienv_GetStaticObjectField,
    .GetStaticBooleanField = nb_qemu_jnienv_GetStaticBooleanField,
    .GetStaticByteField = nb_qemu_jnienv_GetStaticByteField,
    .GetStaticCharField = nb_qemu_jnienv_GetStaticCharField,
    .GetStaticShortField = nb_qemu_jnienv_GetStaticShortField,
    .GetStaticIntField = nb_qemu_jnienv_GetStaticIntField,
    .GetStaticLongField = nb_qemu_jnienv_GetStaticLongField,
    .GetStaticFloatField = nb_qemu_jnienv_GetStaticFloatField,
    .GetStaticDoubleField = nb_qemu_jnienv_GetStaticDoubleField,
    .SetStaticObjectField = nb_qemu_jnienv_SetStaticObjectField,
    .SetStaticBooleanField = nb_qemu_jnienv_SetStaticBooleanField,
    .SetStaticByteField = nb_qemu_jnienv_SetStaticByteField,
    .SetStaticCharField = nb_qemu_jnienv_SetStaticCharField,
    .SetStaticShortField = nb_qemu_jnienv_SetStaticShortField,
    .SetStaticIntField = nb_qemu_jnienv_SetStaticIntField,
    .SetStaticLongField = nb_qemu_jnienv_SetStaticLongField,
    .SetStaticFloatField = nb_qemu_jnienv_SetStaticFloatField,
    .SetStaticDoubleField = nb_qemu_jnienv_SetStaticDoubleField,
    .NewString = nb_qemu_jnienv_NewString,
    .GetStringLength = nb_qemu_jnienv_GetStringLength,
    .GetStringChars = nb_qemu_jnienv_GetStringChars,
    .ReleaseStringChars = nb_qemu_jnienv_ReleaseStringChars,
    .NewStringUTF = nb_qemu_jnienv_NewStringUTF,
    .GetStringUTFLength = nb_qemu_jnienv_GetStringUTFLength,
    .GetStringUTFChars = nb_qemu_jnienv_GetStringUTFChars,
    .ReleaseStringUTFChars = nb_qemu_jnienv_ReleaseStringUTFChars,
    .GetArrayLength = nb_qemu_jnienv_GetArrayLength,
    .NewObjectArray = nb_qemu_jnienv_NewObjectArray,
    .GetObjectArrayElement = nb_qemu_jnienv_GetObjectArrayElement,
    .SetObjectArrayElement = nb_qemu_jnienv_SetObjectArrayElement,
    .NewBooleanArray = nb_qemu_jnienv_NewBooleanArray,
    .NewByteArray = nb_qemu_jnienv_NewByteArray,
    .NewCharArray = nb_qemu_jnienv_NewCharArray,
    .NewShortArray = nb_qemu_jnienv_NewShortArray,
    .NewIntArray = nb_qemu_jnienv_NewIntArray,
    .NewLongArray = nb_qemu_jnienv_NewLongArray,
    .NewFloatArray = nb_qemu_jnienv_NewFloatArray,
    .NewDoubleArray = nb_qemu_jnienv_NewDoubleArray,
    .GetBooleanArrayElements = nb_qemu_jnienv_GetBooleanArrayElements,
    .GetByteArrayElements = nb_qemu_jnienv_GetByteArrayElements,
    .GetCharArrayElements = nb_qemu_jnienv_GetCharArrayElements,
    .GetShortArrayElements = nb_qemu_jnienv_GetShortArrayElements,
    .GetIntArrayElements = nb_qemu_jnienv_GetIntArrayElements,
    .GetLongArrayElements = nb_qemu_jnienv_GetLongArrayElements,
    .GetFloatArrayElements = nb_qemu_jnienv_GetFloatArrayElements,
    .GetDoubleArrayElements = nb_qemu_jnienv_GetDoubleArrayElements,
    .ReleaseBooleanArrayElements = nb_qemu_jnienv_ReleaseBooleanArrayElements,
    .ReleaseByteArrayElements = nb_qemu_jnienv_ReleaseByteArrayElements,
    .ReleaseCharArrayElements = nb_qemu_jnienv_ReleaseCharArrayElements,
    .ReleaseShortArrayElements = nb_qemu_jnienv_ReleaseShortArrayElements,
    .ReleaseIntArrayElements = nb_qemu_jnienv_ReleaseIntArrayElements,
    .ReleaseLongArrayElements = nb_qemu_jnienv_ReleaseLongArrayElements,
    .ReleaseFloatArrayElements = nb_qemu_jnienv_ReleaseFloatArrayElements,
    .ReleaseDoubleArrayElements = nb_qemu_jnienv_ReleaseDoubleArrayElements,
    .GetBooleanArrayRegion = nb_qemu_jnienv_GetBooleanArrayRegion,
    .GetByteArrayRegion = nb_qemu_jnienv_GetByteArrayRegion,
    .GetCharArrayRegion = nb_qemu_jnienv_GetCharArrayRegion,
    .GetShortArrayRegion = nb_qemu_jnienv_GetShortArrayRegion,
    .GetIntArrayRegion = nb_qemu_jnienv_GetIntArrayRegion,
    .GetLongArrayRegion = nb_qemu_jnienv_GetLongArrayRegion,
    .GetFloatArrayRegion = nb_qemu_jnienv_GetFloatArrayRegion,
    .GetDoubleArrayRegion = nb_qemu_jnienv_GetDoubleArrayRegion,
    .SetBooleanArrayRegion = nb_qemu_jnienv_SetBooleanArrayRegion,
    .SetByteArrayRegion = nb_qemu_jnienv_SetByteArrayRegion,
    .SetCharArrayRegion = nb_qemu_jnienv_SetCharArrayRegion,
    .SetShortArrayRegion = nb_qemu_jnienv_SetShortArrayRegion,
    .SetIntArrayRegion = nb_qemu_jnienv_SetIntArrayRegion,
    .SetLongArrayRegion = nb_qemu_jnienv_SetLongArrayRegion,
    .SetFloatArrayRegion = nb_qemu_jnienv_SetFloatArrayRegion,
    .SetDoubleArrayRegion = nb_qemu_jnienv_SetDoubleArrayRegion,
    .RegisterNatives = nb_qemu_jnienv_RegisterNatives,
    .UnregisterNatives = nb_qemu_jnienv_UnregisterNatives,
    .MonitorEnter = nb_qemu_jnienv_MonitorEnter,
    .MonitorExit = nb_qemu_jnienv_MonitorExit,
    .GetJavaVM = nb_qemu_jnienv_GetJavaVM,
    .GetStringRegion = nb_qemu_jnienv_GetStringRegion,
    .GetStringUTFRegion = nb_qemu_jnienv_GetStringUTFRegion,
    .GetPrimitiveArrayCritical = nb_qemu_jnienv_GetPrimitiveArrayCritical,
    .ReleasePrimitiveArrayCritical = nb_qemu_jnienv_ReleasePrimitiveArrayCritical,
    .GetStringCritical = nb_qemu_jnienv_GetStringCritical,
    .ReleaseStringCritical = nb_qemu_jnienv_ReleaseStringCritical,
    .NewWeakGlobalRef = nb_qemu_jnienv_NewWeakGlobalRef,
    .DeleteWeakGlobalRef = nb_qemu_jnienv_DeleteWeakGlobalRef,
    .ExceptionCheck = nb_qemu_jnienv_ExceptionCheck,
    .NewDirectByteBuffer = nb_qemu_jnienv_NewDirectByteBuffer,
    .GetDirectBufferAddress = nb_qemu_jnienv_GetDirectBufferAddress,
    .GetDirectBufferCapacity = nb_qemu_jnienv_GetDirectBufferCapacity,
    .GetObjectRefType = nb_qemu_jnienv_GetObjectRefType,
};

JNIEnv nb_qemu_JNIEnv = &_jni_iface;

static jint nb_qemu_javavm_DestroyJavaVM(JavaVM* UNUSED(vm)) {
    ALOGE("*** NOT SUPPORTED: DestroyJavaVM");
    return JNI_ERR;
}

static jint nb_qemu_javavm_AttachCurrentThread(JavaVM* UNUSED(vm), JNIEnv **p_env, void *thr_args) {
    jint result = syscall(__NR_host_javavm, JAVAVM_CALLBACK_ID(AttachCurrentThread), thr_args);
    if (result == JNI_OK)
      *p_env = &nb_qemu_JNIEnv;
    return result;
}

static jint nb_qemu_javavm_DetachCurrentThread(JavaVM* UNUSED(vm)) {
    return syscall(__NR_host_javavm, JAVAVM_CALLBACK_ID(DetachCurrentThread));
}

static jint nb_qemu_javavm_GetEnv(JavaVM* UNUSED(vm), void **env, jint version) {
    jint result = syscall(__NR_host_javavm, JAVAVM_CALLBACK_ID(GetEnv), version);
    if (result == JNI_OK)
      *env = &nb_qemu_JNIEnv;
    return result;
}

static jint nb_qemu_javavm_AttachCurrentThreadAsDaemon(JavaVM* UNUSED(vm), JNIEnv** UNUSED(penv), void* UNUSED(args)) {
    ALOGE("*** NOT SUPPORTED: AttachCurrentThreadAsDaemon");
    return JNI_ERR;
}

struct JNIInvokeInterface _javavm_iface = {
    .reserved0 = NULL,
    .reserved1 = NULL,
    .reserved2 = NULL,
    .DestroyJavaVM = nb_qemu_javavm_DestroyJavaVM,
    .AttachCurrentThread = nb_qemu_javavm_AttachCurrentThread,
    .DetachCurrentThread = nb_qemu_javavm_DetachCurrentThread,
    .GetEnv = nb_qemu_javavm_GetEnv,
    .AttachCurrentThreadAsDaemon = nb_qemu_javavm_AttachCurrentThreadAsDaemon,
};

JavaVM nb_qemu_JavaVM = &_javavm_iface;
