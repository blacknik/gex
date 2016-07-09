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

// HealingBuff
struct HealingBuff_t3056042061;
// Unit
struct Unit_t2641317;
// Buff
struct Buff_t2081907;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Unit2641316.h"

// System.Void HealingBuff::.ctor(System.Int32,System.Int32)
extern "C"  void HealingBuff__ctor_m3689161512 (HealingBuff_t3056042061 * __this, int32_t ___duration0, int32_t ___healingFactor1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 HealingBuff::get_Duration()
extern "C"  int32_t HealingBuff_get_Duration_m3553044757 (HealingBuff_t3056042061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HealingBuff::set_Duration(System.Int32)
extern "C"  void HealingBuff_set_Duration_m3935371816 (HealingBuff_t3056042061 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HealingBuff::Apply(Unit)
extern "C"  void HealingBuff_Apply_m2273441062 (HealingBuff_t3056042061 * __this, Unit_t2641317 * ___unit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HealingBuff::Undo(Unit)
extern "C"  void HealingBuff_Undo_m566389254 (HealingBuff_t3056042061 * __this, Unit_t2641317 * ___unit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Buff HealingBuff::Clone()
extern "C"  Il2CppObject * HealingBuff_Clone_m773466403 (HealingBuff_t3056042061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HealingBuff::AddHitPoints(Unit,System.Int32)
extern "C"  void HealingBuff_AddHitPoints_m2269638688 (HealingBuff_t3056042061 * __this, Unit_t2641317 * ___unit0, int32_t ___amount1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
