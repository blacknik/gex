#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Action`1<System.Reflection.CustomAttributeNamedArgument>
struct Action_1_t467187834;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Reflection_CustomAttributeNamedArgu318735129.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Action`1<System.Reflection.CustomAttributeNamedArgument>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_1__ctor_m1819105799_gshared (Action_1_t467187834 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Action_1__ctor_m1819105799(__this, ___object0, ___method1, method) ((  void (*) (Action_1_t467187834 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_1__ctor_m1819105799_gshared)(__this, ___object0, ___method1, method)
// System.Void System.Action`1<System.Reflection.CustomAttributeNamedArgument>::Invoke(T)
extern "C"  void Action_1_Invoke_m4053608541_gshared (Action_1_t467187834 * __this, CustomAttributeNamedArgument_t318735129  ___obj0, const MethodInfo* method);
#define Action_1_Invoke_m4053608541(__this, ___obj0, method) ((  void (*) (Action_1_t467187834 *, CustomAttributeNamedArgument_t318735129 , const MethodInfo*))Action_1_Invoke_m4053608541_gshared)(__this, ___obj0, method)
// System.IAsyncResult System.Action`1<System.Reflection.CustomAttributeNamedArgument>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_1_BeginInvoke_m4060881842_gshared (Action_1_t467187834 * __this, CustomAttributeNamedArgument_t318735129  ___obj0, AsyncCallback_t1363551830 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define Action_1_BeginInvoke_m4060881842(__this, ___obj0, ___callback1, ___object2, method) ((  Il2CppObject * (*) (Action_1_t467187834 *, CustomAttributeNamedArgument_t318735129 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Action_1_BeginInvoke_m4060881842_gshared)(__this, ___obj0, ___callback1, ___object2, method)
// System.Void System.Action`1<System.Reflection.CustomAttributeNamedArgument>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_1_EndInvoke_m622126999_gshared (Action_1_t467187834 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Action_1_EndInvoke_m622126999(__this, ___result0, method) ((  void (*) (Action_1_t467187834 *, Il2CppObject *, const MethodInfo*))Action_1_EndInvoke_m622126999_gshared)(__this, ___result0, method)
