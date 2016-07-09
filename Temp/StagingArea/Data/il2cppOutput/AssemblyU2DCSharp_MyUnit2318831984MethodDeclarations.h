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

// MyUnit
struct MyUnit_t2318831984;
// Unit
struct Unit_t2641317;
// Cell
struct Cell_t2096514;
// System.Collections.Generic.List`1<Cell>
struct List_1_t799055483;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Unit2641316.h"
#include "AssemblyU2DCSharp_Cell2096514.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"

// System.Void MyUnit::.ctor()
extern "C"  void MyUnit__ctor_m1476751659 (MyUnit_t2318831984 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MyUnit::Initialize()
extern "C"  void MyUnit_Initialize_m881190985 (MyUnit_t2318831984 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MyUnit::Defend(Unit,System.Int32)
extern "C"  void MyUnit_Defend_m2499393772 (MyUnit_t2318831984 * __this, Unit_t2641317 * ___other0, int32_t ___damage1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MyUnit::Move(Cell,System.Collections.Generic.List`1<Cell>)
extern "C"  void MyUnit_Move_m2737347062 (MyUnit_t2318831984 * __this, Cell_t2096514 * ___destinationCell0, List_1_t799055483 * ___path1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MyUnit::MarkAsAttacking(Unit)
extern "C"  void MyUnit_MarkAsAttacking_m2187332192 (MyUnit_t2318831984 * __this, Unit_t2641317 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MyUnit::MarkAsDefending(Unit)
extern "C"  void MyUnit_MarkAsDefending_m526469554 (MyUnit_t2318831984 * __this, Unit_t2641317 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MyUnit::MarkAsDestroyed()
extern "C"  void MyUnit_MarkAsDestroyed_m1073026755 (MyUnit_t2318831984 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MyUnit::Jerk(Unit)
extern "C"  Il2CppObject * MyUnit_Jerk_m4192954257 (MyUnit_t2318831984 * __this, Unit_t2641317 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MyUnit::Glow(UnityEngine.Color,System.Single)
extern "C"  Il2CppObject * MyUnit_Glow_m309829501 (MyUnit_t2318831984 * __this, Color_t1588175760  ___color0, float ___cooloutTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MyUnit::MarkAsFriendly()
extern "C"  void MyUnit_MarkAsFriendly_m2221928419 (MyUnit_t2318831984 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MyUnit::MarkAsReachableEnemy()
extern "C"  void MyUnit_MarkAsReachableEnemy_m1904392243 (MyUnit_t2318831984 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MyUnit::MarkAsSelected()
extern "C"  void MyUnit_MarkAsSelected_m2322415059 (MyUnit_t2318831984 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MyUnit::MarkAsFinished()
extern "C"  void MyUnit_MarkAsFinished_m834925034 (MyUnit_t2318831984 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MyUnit::UnMark()
extern "C"  void MyUnit_UnMark_m2122958911 (MyUnit_t2318831984 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MyUnit::UpdateHpBar()
extern "C"  void MyUnit_UpdateHpBar_m650446443 (MyUnit_t2318831984 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MyUnit::SetColor(UnityEngine.Color)
extern "C"  void MyUnit_SetColor_m2713327308 (MyUnit_t2318831984 * __this, Color_t1588175760  ___color0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MyUnit::SetHighlighterColor(UnityEngine.Color)
extern "C"  void MyUnit_SetHighlighterColor_m4239479417 (MyUnit_t2318831984 * __this, Color_t1588175760  ___color0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
