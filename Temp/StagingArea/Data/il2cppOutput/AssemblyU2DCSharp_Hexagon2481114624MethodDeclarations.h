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

// Hexagon
struct Hexagon_t2481114624;
// Cell
struct Cell_t2096514;
// System.Collections.Generic.List`1<Cell>
struct List_1_t799055483;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "AssemblyU2DCSharp_Cell2096514.h"

// System.Void Hexagon::.ctor()
extern "C"  void Hexagon__ctor_m1972248939 (Hexagon_t2481114624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Hexagon::.cctor()
extern "C"  void Hexagon__cctor_m528078754 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Hexagon::get_CubeCoord()
extern "C"  Vector3_t3525329789  Hexagon_get_CubeCoord_m1658430042 (Hexagon_t2481114624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Hexagon::CubeToOffsetCoords(UnityEngine.Vector3)
extern "C"  Vector2_t3525329788  Hexagon_CubeToOffsetCoords_m1808551034 (Hexagon_t2481114624 * __this, Vector3_t3525329789  ___cubeCoords0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Hexagon::GetDistance(Cell)
extern "C"  int32_t Hexagon_GetDistance_m1422662912 (Hexagon_t2481114624 * __this, Cell_t2096514 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Cell> Hexagon::GetNeighbours(System.Collections.Generic.List`1<Cell>)
extern "C"  List_1_t799055483 * Hexagon_GetNeighbours_m1620757418 (Hexagon_t2481114624 * __this, List_1_t799055483 * ___cells0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
