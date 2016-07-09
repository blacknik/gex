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

// DefenceBuff
struct DefenceBuff_t1717588131;
// Unit
struct Unit_t2641317;
// Buff
struct Buff_t2081907;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Unit2641316.h"

// System.Void DefenceBuff::.ctor(System.Int32,System.Int32)
extern "C"  void DefenceBuff__ctor_m649682430 (DefenceBuff_t1717588131 * __this, int32_t ___duration0, int32_t ___factor1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 DefenceBuff::get_Duration()
extern "C"  int32_t DefenceBuff_get_Duration_m829459819 (DefenceBuff_t1717588131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DefenceBuff::set_Duration(System.Int32)
extern "C"  void DefenceBuff_set_Duration_m1632146814 (DefenceBuff_t1717588131 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DefenceBuff::Apply(Unit)
extern "C"  void DefenceBuff_Apply_m110944400 (DefenceBuff_t1717588131 * __this, Unit_t2641317 * ___unit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DefenceBuff::Undo(Unit)
extern "C"  void DefenceBuff_Undo_m3544672604 (DefenceBuff_t1717588131 * __this, Unit_t2641317 * ___unit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Buff DefenceBuff::Clone()
extern "C"  Il2CppObject * DefenceBuff_Clone_m4185348493 (DefenceBuff_t1717588131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
