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

// System.Action`1<UnityEngine.UIVertex>
struct Action_1_t2408514310;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UnityEngine_UIVertex2260061605.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Action`1<UnityEngine.UIVertex>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_1__ctor_m2498358983_gshared (Action_1_t2408514310 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Action_1__ctor_m2498358983(__this, ___object0, ___method1, method) ((  void (*) (Action_1_t2408514310 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_1__ctor_m2498358983_gshared)(__this, ___object0, ___method1, method)
// System.Void System.Action`1<UnityEngine.UIVertex>::Invoke(T)
extern "C"  void Action_1_Invoke_m3515923357_gshared (Action_1_t2408514310 * __this, UIVertex_t2260061605  ___obj0, const MethodInfo* method);
#define Action_1_Invoke_m3515923357(__this, ___obj0, method) ((  void (*) (Action_1_t2408514310 *, UIVertex_t2260061605 , const MethodInfo*))Action_1_Invoke_m3515923357_gshared)(__this, ___obj0, method)
// System.IAsyncResult System.Action`1<UnityEngine.UIVertex>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_1_BeginInvoke_m3258405874_gshared (Action_1_t2408514310 * __this, UIVertex_t2260061605  ___obj0, AsyncCallback_t1363551830 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define Action_1_BeginInvoke_m3258405874(__this, ___obj0, ___callback1, ___object2, method) ((  Il2CppObject * (*) (Action_1_t2408514310 *, UIVertex_t2260061605 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Action_1_BeginInvoke_m3258405874_gshared)(__this, ___obj0, ___callback1, ___object2, method)
// System.Void System.Action`1<UnityEngine.UIVertex>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_1_EndInvoke_m916053079_gshared (Action_1_t2408514310 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Action_1_EndInvoke_m916053079(__this, ___result0, method) ((  void (*) (Action_1_t2408514310 *, Il2CppObject *, const MethodInfo*))Action_1_EndInvoke_m916053079_gshared)(__this, ___result0, method)
