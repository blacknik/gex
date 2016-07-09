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

// CustomUnitGenerator
struct CustomUnitGenerator_t162832798;
// System.Collections.Generic.List`1<Unit>
struct List_1_t799600285;
// System.Collections.Generic.List`1<Cell>
struct List_1_t799055483;

#include "codegen/il2cpp-codegen.h"

// System.Void CustomUnitGenerator::.ctor()
extern "C"  void CustomUnitGenerator__ctor_m945972109 (CustomUnitGenerator_t162832798 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Unit> CustomUnitGenerator::SpawnUnits(System.Collections.Generic.List`1<Cell>)
extern "C"  List_1_t799600285 * CustomUnitGenerator_SpawnUnits_m4097121536 (CustomUnitGenerator_t162832798 * __this, List_1_t799055483 * ___cells0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CustomUnitGenerator::SnapToGrid()
extern "C"  void CustomUnitGenerator_SnapToGrid_m1135651234 (CustomUnitGenerator_t162832798 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
