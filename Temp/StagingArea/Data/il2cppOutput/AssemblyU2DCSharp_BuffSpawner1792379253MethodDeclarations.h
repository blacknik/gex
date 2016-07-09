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

// BuffSpawner
struct BuffSpawner_t1792379253;
// Buff
struct Buff_t2081907;
// Cell
struct Cell_t2096514;
// Unit
struct Unit_t2641317;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Cell2096514.h"
#include "AssemblyU2DCSharp_Unit2641316.h"

// System.Void BuffSpawner::.ctor()
extern "C"  void BuffSpawner__ctor_m990954902 (BuffSpawner_t1792379253 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BuffSpawner::SpawnBuff(Buff,Cell,Unit,System.Int32,System.Boolean)
extern "C"  void BuffSpawner_SpawnBuff_m3870186931 (BuffSpawner_t1792379253 * __this, Il2CppObject * ___buff0, Cell_t2096514 * ___center1, Unit_t2641317 * ___buffer2, int32_t ___range3, bool ___self4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
