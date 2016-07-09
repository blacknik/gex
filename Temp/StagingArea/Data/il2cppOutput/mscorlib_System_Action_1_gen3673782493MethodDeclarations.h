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

// System.Action`1<UnityEngine.Vector2>
struct Action_1_t3673782493;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Action`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_1__ctor_m3358603980_gshared (Action_1_t3673782493 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Action_1__ctor_m3358603980(__this, ___object0, ___method1, method) ((  void (*) (Action_1_t3673782493 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_1__ctor_m3358603980_gshared)(__this, ___object0, ___method1, method)
// System.Void System.Action`1<UnityEngine.Vector2>::Invoke(T)
extern "C"  void Action_1_Invoke_m1100151800_gshared (Action_1_t3673782493 * __this, Vector2_t3525329788  ___obj0, const MethodInfo* method);
#define Action_1_Invoke_m1100151800(__this, ___obj0, method) ((  void (*) (Action_1_t3673782493 *, Vector2_t3525329788 , const MethodInfo*))Action_1_Invoke_m1100151800_gshared)(__this, ___obj0, method)
// System.IAsyncResult System.Action`1<UnityEngine.Vector2>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_1_BeginInvoke_m1779820485_gshared (Action_1_t3673782493 * __this, Vector2_t3525329788  ___obj0, AsyncCallback_t1363551830 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define Action_1_BeginInvoke_m1779820485(__this, ___obj0, ___callback1, ___object2, method) ((  Il2CppObject * (*) (Action_1_t3673782493 *, Vector2_t3525329788 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Action_1_BeginInvoke_m1779820485_gshared)(__this, ___obj0, ___callback1, ___object2, method)
// System.Void System.Action`1<UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_1_EndInvoke_m2080961244_gshared (Action_1_t3673782493 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Action_1_EndInvoke_m2080961244(__this, ___result0, method) ((  void (*) (Action_1_t3673782493 *, Il2CppObject *, const MethodInfo*))Action_1_EndInvoke_m2080961244_gshared)(__this, ___result0, method)
