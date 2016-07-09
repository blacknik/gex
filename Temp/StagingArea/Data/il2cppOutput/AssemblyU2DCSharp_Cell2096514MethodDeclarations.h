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

// Cell
struct Cell_t2096514;
// System.EventHandler
struct EventHandler_t247020293;
// IGraphNode
struct IGraphNode_t3664506407;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_EventHandler247020293.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

// System.Void Cell::.ctor()
extern "C"  void Cell__ctor_m1381474137 (Cell_t2096514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cell::add_CellClicked(System.EventHandler)
extern "C"  void Cell_add_CellClicked_m595870309 (Cell_t2096514 * __this, EventHandler_t247020293 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cell::remove_CellClicked(System.EventHandler)
extern "C"  void Cell_remove_CellClicked_m3595080270 (Cell_t2096514 * __this, EventHandler_t247020293 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cell::add_CellHighlighted(System.EventHandler)
extern "C"  void Cell_add_CellHighlighted_m3628188857 (Cell_t2096514 * __this, EventHandler_t247020293 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cell::remove_CellHighlighted(System.EventHandler)
extern "C"  void Cell_remove_CellHighlighted_m4011456546 (Cell_t2096514 * __this, EventHandler_t247020293 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cell::add_CellDehighlighted(System.EventHandler)
extern "C"  void Cell_add_CellDehighlighted_m95799994 (Cell_t2096514 * __this, EventHandler_t247020293 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cell::remove_CellDehighlighted(System.EventHandler)
extern "C"  void Cell_remove_CellDehighlighted_m3343828963 (Cell_t2096514 * __this, EventHandler_t247020293 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Cell::get_OffsetCoord()
extern "C"  Vector2_t3525329788  Cell_get_OffsetCoord_m276457909 (Cell_t2096514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cell::set_OffsetCoord(UnityEngine.Vector2)
extern "C"  void Cell_set_OffsetCoord_m2951170238 (Cell_t2096514 * __this, Vector2_t3525329788  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cell::OnMouseEnter()
extern "C"  void Cell_OnMouseEnter_m2166151357 (Cell_t2096514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cell::OnMouseExit()
extern "C"  void Cell_OnMouseExit_m3403931451 (Cell_t2096514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cell::OnMouseDown()
extern "C"  void Cell_OnMouseDown_m3367401919 (Cell_t2096514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Cell::GetDistance(IGraphNode)
extern "C"  int32_t Cell_GetDistance_m2054193869 (Cell_t2096514 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
