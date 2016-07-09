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

// UnitStateNormal
struct UnitStateNormal_t3574081684;
// Unit
struct Unit_t2641317;
// UnitState
struct UnitState_t1520594253;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Unit2641316.h"
#include "AssemblyU2DCSharp_UnitState1520594253.h"

// System.Void UnitStateNormal::.ctor(Unit)
extern "C"  void UnitStateNormal__ctor_m924919091 (UnitStateNormal_t3574081684 * __this, Unit_t2641317 * ___unit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitStateNormal::Apply()
extern "C"  void UnitStateNormal_Apply_m3712862819 (UnitStateNormal_t3574081684 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnitStateNormal::MakeTransition(UnitState)
extern "C"  void UnitStateNormal_MakeTransition_m4115849557 (UnitStateNormal_t3574081684 * __this, UnitState_t1520594253 * ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
