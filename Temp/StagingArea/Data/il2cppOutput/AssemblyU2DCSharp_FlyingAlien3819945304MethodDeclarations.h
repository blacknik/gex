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

// FlyingAlien
struct FlyingAlien_t3819945304;
// Cell
struct Cell_t2096514;
// System.Collections.Generic.List`1<Cell>
struct List_1_t799055483;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Cell2096514.h"

// System.Void FlyingAlien::.ctor()
extern "C"  void FlyingAlien__ctor_m1444888851 (FlyingAlien_t3819945304 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlyingAlien::Initialize()
extern "C"  void FlyingAlien_Initialize_m3843672417 (FlyingAlien_t3819945304 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FlyingAlien::IsCellTraversable(Cell)
extern "C"  bool FlyingAlien_IsCellTraversable_m2114755780 (FlyingAlien_t3819945304 * __this, Cell_t2096514 * ___cell0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlyingAlien::Move(Cell,System.Collections.Generic.List`1<Cell>)
extern "C"  void FlyingAlien_Move_m4276283662 (FlyingAlien_t3819945304 * __this, Cell_t2096514 * ___destinationCell0, List_1_t799055483 * ___path1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator FlyingAlien::MovementAnimation(System.Collections.Generic.List`1<Cell>)
extern "C"  Il2CppObject * FlyingAlien_MovementAnimation_m1004361254 (FlyingAlien_t3819945304 * __this, List_1_t799055483 * ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlyingAlien::OnDestroyed()
extern "C"  void FlyingAlien_OnDestroyed_m1204682411 (FlyingAlien_t3819945304 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
