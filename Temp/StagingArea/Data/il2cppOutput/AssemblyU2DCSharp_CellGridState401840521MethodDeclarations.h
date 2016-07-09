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

// CellGridState
struct CellGridState_t401840521;
// CellGrid
struct CellGrid_t3441650664;
// Unit
struct Unit_t2641317;
// Cell
struct Cell_t2096514;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_CellGrid3441650664.h"
#include "AssemblyU2DCSharp_Unit2641316.h"
#include "AssemblyU2DCSharp_Cell2096514.h"

// System.Void CellGridState::.ctor(CellGrid)
extern "C"  void CellGridState__ctor_m1515952666 (CellGridState_t401840521 * __this, CellGrid_t3441650664 * ___cellGrid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CellGridState::OnUnitClicked(Unit)
extern "C"  void CellGridState_OnUnitClicked_m1814833952 (CellGridState_t401840521 * __this, Unit_t2641317 * ___unit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CellGridState::OnCellDeselected(Cell)
extern "C"  void CellGridState_OnCellDeselected_m2609227485 (CellGridState_t401840521 * __this, Cell_t2096514 * ___cell0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CellGridState::OnCellSelected(Cell)
extern "C"  void CellGridState_OnCellSelected_m2894243996 (CellGridState_t401840521 * __this, Cell_t2096514 * ___cell0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CellGridState::OnCellClicked(Cell)
extern "C"  void CellGridState_OnCellClicked_m3485204452 (CellGridState_t401840521 * __this, Cell_t2096514 * ___cell0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CellGridState::OnStateEnter()
extern "C"  void CellGridState_OnStateEnter_m2751683720 (CellGridState_t401840521 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CellGridState::OnStateExit()
extern "C"  void CellGridState_OnStateExit_m3699914256 (CellGridState_t401840521 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CellGridState::<OnStateEnter>m__D(Unit)
extern "C"  int32_t CellGridState_U3COnStateEnterU3Em__D_m3709767779 (Il2CppObject * __this /* static, unused */, Unit_t2641317 * ___u0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
