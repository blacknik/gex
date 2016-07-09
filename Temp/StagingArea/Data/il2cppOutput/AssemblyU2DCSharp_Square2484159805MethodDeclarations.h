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

// Square
struct Square_t2484159805;
// Cell
struct Cell_t2096514;
// System.Collections.Generic.List`1<Cell>
struct List_1_t799055483;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Cell2096514.h"

// System.Void Square::.ctor()
extern "C"  void Square__ctor_m3159602174 (Square_t2484159805 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Square::.cctor()
extern "C"  void Square__cctor_m2976290671 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Square::GetDistance(Cell)
extern "C"  int32_t Square_GetDistance_m2918445303 (Square_t2484159805 * __this, Cell_t2096514 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Cell> Square::GetNeighbours(System.Collections.Generic.List`1<Cell>)
extern "C"  List_1_t799055483 * Square_GetNeighbours_m4251383617 (Square_t2484159805 * __this, List_1_t799055483 * ___cells0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
