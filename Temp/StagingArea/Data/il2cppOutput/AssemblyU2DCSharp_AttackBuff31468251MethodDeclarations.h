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

// AttackBuff
struct AttackBuff_t31468251;
// Unit
struct Unit_t2641317;
// Buff
struct Buff_t2081907;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Unit2641316.h"

// System.Void AttackBuff::.ctor(System.Int32,System.Int32)
extern "C"  void AttackBuff__ctor_m3619078918 (AttackBuff_t31468251 * __this, int32_t ___duration0, int32_t ___factor1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 AttackBuff::get_Duration()
extern "C"  int32_t AttackBuff_get_Duration_m3476564943 (AttackBuff_t31468251 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AttackBuff::set_Duration(System.Int32)
extern "C"  void AttackBuff_set_Duration_m1633181830 (AttackBuff_t31468251 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AttackBuff::Apply(Unit)
extern "C"  void AttackBuff_Apply_m731997832 (AttackBuff_t31468251 * __this, Unit_t2641317 * ___unit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AttackBuff::Undo(Unit)
extern "C"  void AttackBuff_Undo_m1763591268 (AttackBuff_t31468251 * __this, Unit_t2641317 * ___unit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Buff AttackBuff::Clone()
extern "C"  Il2CppObject * AttackBuff_Clone_m4192165361 (AttackBuff_t31468251 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
