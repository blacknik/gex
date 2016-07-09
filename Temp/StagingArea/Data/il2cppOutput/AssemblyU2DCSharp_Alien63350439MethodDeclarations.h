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

// Alien
struct Alien_t63350439;
// Cell
struct Cell_t2096514;
// Unit
struct Unit_t2641317;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Cell2096514.h"
#include "AssemblyU2DCSharp_Unit2641316.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"

// System.Void Alien::.ctor()
extern "C"  void Alien__ctor_m4264734372 (Alien_t63350439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Alien::Initialize()
extern "C"  void Alien_Initialize_m1217474160 (Alien_t63350439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Alien::IsCellMovableTo(Cell)
extern "C"  bool Alien_IsCellMovableTo_m1578451185 (Alien_t63350439 * __this, Cell_t2096514 * ___cell0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Alien::IsCellTraversable(Cell)
extern "C"  bool Alien_IsCellTraversable_m1641242453 (Alien_t63350439 * __this, Cell_t2096514 * ___cell0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Alien::OnUnitDeselected()
extern "C"  void Alien_OnUnitDeselected_m1740404319 (Alien_t63350439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Alien::MarkAsAttacking(Unit)
extern "C"  void Alien_MarkAsAttacking_m382976025 (Alien_t63350439 * __this, Unit_t2641317 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Alien::MarkAsDefending(Unit)
extern "C"  void Alien_MarkAsDefending_m3017080683 (Alien_t63350439 * __this, Unit_t2641317 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Alien::MarkAsDestroyed()
extern "C"  void Alien_MarkAsDestroyed_m2962395388 (Alien_t63350439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Alien::Jerk(Unit,System.Single)
extern "C"  Il2CppObject * Alien_Jerk_m3198779085 (Alien_t63350439 * __this, Unit_t2641317 * ___other0, float ___movementTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Alien::Glow(UnityEngine.Color,System.Single)
extern "C"  Il2CppObject * Alien_Glow_m3084443334 (Alien_t63350439 * __this, Color_t1588175760  ___color0, float ___cooloutTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Alien::Pulse(System.Single,System.Single,System.Single)
extern "C"  Il2CppObject * Alien_Pulse_m1223713330 (Alien_t63350439 * __this, float ___breakTime0, float ___delay1, float ___scaleFactor2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Alien::MarkAsFriendly()
extern "C"  void Alien_MarkAsFriendly_m2005781130 (Alien_t63350439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Alien::MarkAsReachableEnemy()
extern "C"  void Alien_MarkAsReachableEnemy_m1803925914 (Alien_t63350439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Alien::MarkAsSelected()
extern "C"  void Alien_MarkAsSelected_m2106267770 (Alien_t63350439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Alien::MarkAsFinished()
extern "C"  void Alien_MarkAsFinished_m618777745 (Alien_t63350439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Alien::UnMark()
extern "C"  void Alien_UnMark_m2651077094 (Alien_t63350439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Alien::SetColor(UnityEngine.Color)
extern "C"  void Alien_SetColor_m3593657797 (Alien_t63350439 * __this, Color_t1588175760  ___color0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Alien::SetHighlighterColor(UnityEngine.Color)
extern "C"  void Alien_SetHighlighterColor_m2934613472 (Alien_t63350439 * __this, Color_t1588175760  ___color0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
