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

// GenericUnit
struct GenericUnit_t2767469531;
// Unit
struct Unit_t2641317;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Unit2641316.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"

// System.Void GenericUnit::.ctor()
extern "C"  void GenericUnit__ctor_m3902629360 (GenericUnit_t2767469531 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GenericUnit::Initialize()
extern "C"  void GenericUnit_Initialize_m418457252 (GenericUnit_t2767469531 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GenericUnit::OnUnitDeselected()
extern "C"  void GenericUnit_OnUnitDeselected_m4245059475 (GenericUnit_t2767469531 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GenericUnit::MarkAsAttacking(Unit)
extern "C"  void GenericUnit_MarkAsAttacking_m97895013 (GenericUnit_t2767469531 * __this, Unit_t2641317 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GenericUnit::MarkAsDefending(Unit)
extern "C"  void GenericUnit_MarkAsDefending_m2731999671 (GenericUnit_t2767469531 * __this, Unit_t2641317 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GenericUnit::MarkAsDestroyed()
extern "C"  void GenericUnit_MarkAsDestroyed_m3458832712 (GenericUnit_t2767469531 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GenericUnit::Jerk(Unit)
extern "C"  Il2CppObject * GenericUnit_Jerk_m2941908252 (GenericUnit_t2767469531 * __this, Unit_t2641317 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GenericUnit::Glow(UnityEngine.Color,System.Single)
extern "C"  Il2CppObject * GenericUnit_Glow_m1255666450 (GenericUnit_t2767469531 * __this, Color_t1588175760  ___color0, float ___cooloutTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GenericUnit::Pulse(System.Single,System.Single,System.Single)
extern "C"  Il2CppObject * GenericUnit_Pulse_m1513743974 (GenericUnit_t2767469531 * __this, float ___breakTime0, float ___delay1, float ___scaleFactor2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GenericUnit::MarkAsFriendly()
extern "C"  void GenericUnit_MarkAsFriendly_m2853079230 (GenericUnit_t2767469531 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GenericUnit::MarkAsReachableEnemy()
extern "C"  void GenericUnit_MarkAsReachableEnemy_m1556349134 (GenericUnit_t2767469531 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GenericUnit::MarkAsSelected()
extern "C"  void GenericUnit_MarkAsSelected_m2953565870 (GenericUnit_t2767469531 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GenericUnit::MarkAsFinished()
extern "C"  void GenericUnit_MarkAsFinished_m1466075845 (GenericUnit_t2767469531 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GenericUnit::UnMark()
extern "C"  void GenericUnit_UnMark_m15756314 (GenericUnit_t2767469531 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GenericUnit::SetColor(UnityEngine.Color)
extern "C"  void GenericUnit_SetColor_m2089088785 (GenericUnit_t2767469531 * __this, Color_t1588175760  ___color0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
