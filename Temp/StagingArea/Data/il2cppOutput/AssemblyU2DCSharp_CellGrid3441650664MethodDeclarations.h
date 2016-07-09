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

// CellGrid
struct CellGrid_t3441650664;
// System.EventHandler
struct EventHandler_t247020293;
// CellGridState
struct CellGridState_t401840521;
// Player
struct Player_t2393081601;
// System.Collections.Generic.List`1<Player>
struct List_1_t3190040570;
// System.Collections.Generic.List`1<Cell>
struct List_1_t799055483;
// System.Collections.Generic.List`1<Unit>
struct List_1_t799600285;
// System.Object
struct Il2CppObject;
// System.EventArgs
struct EventArgs_t516466188;
// AttackEventArgs
struct AttackEventArgs_t1330664719;
// Unit
struct Unit_t2641317;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_EventHandler247020293.h"
#include "AssemblyU2DCSharp_CellGridState401840521.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_EventArgs516466188.h"
#include "AssemblyU2DCSharp_AttackEventArgs1330664719.h"
#include "AssemblyU2DCSharp_Player2393081601.h"
#include "AssemblyU2DCSharp_Unit2641316.h"

// System.Void CellGrid::.ctor()
extern "C"  void CellGrid__ctor_m1737766835 (CellGrid_t3441650664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CellGrid::add_GameStarted(System.EventHandler)
extern "C"  void CellGrid_add_GameStarted_m984561345 (CellGrid_t3441650664 * __this, EventHandler_t247020293 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CellGrid::remove_GameStarted(System.EventHandler)
extern "C"  void CellGrid_remove_GameStarted_m1632205086 (CellGrid_t3441650664 * __this, EventHandler_t247020293 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CellGrid::add_GameEnded(System.EventHandler)
extern "C"  void CellGrid_add_GameEnded_m2407645736 (CellGrid_t3441650664 * __this, EventHandler_t247020293 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CellGrid::remove_GameEnded(System.EventHandler)
extern "C"  void CellGrid_remove_GameEnded_m4120049605 (CellGrid_t3441650664 * __this, EventHandler_t247020293 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CellGrid::add_TurnEnded(System.EventHandler)
extern "C"  void CellGrid_add_TurnEnded_m2322796275 (CellGrid_t3441650664 * __this, EventHandler_t247020293 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CellGrid::remove_TurnEnded(System.EventHandler)
extern "C"  void CellGrid_remove_TurnEnded_m4035200144 (CellGrid_t3441650664 * __this, EventHandler_t247020293 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CellGridState CellGrid::get_CellGridState()
extern "C"  CellGridState_t401840521 * CellGrid_get_CellGridState_m1865488679 (CellGrid_t3441650664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CellGrid::set_CellGridState(CellGridState)
extern "C"  void CellGrid_set_CellGridState_m3357689356 (CellGrid_t3441650664 * __this, CellGridState_t401840521 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CellGrid::get_NumberOfPlayers()
extern "C"  int32_t CellGrid_get_NumberOfPlayers_m3362796140 (CellGrid_t3441650664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CellGrid::set_NumberOfPlayers(System.Int32)
extern "C"  void CellGrid_set_NumberOfPlayers_m3902608535 (CellGrid_t3441650664 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Player CellGrid::get_CurrentPlayer()
extern "C"  Player_t2393081601 * CellGrid_get_CurrentPlayer_m2865385350 (CellGrid_t3441650664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CellGrid::get_CurrentPlayerNumber()
extern "C"  int32_t CellGrid_get_CurrentPlayerNumber_m390837437 (CellGrid_t3441650664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CellGrid::set_CurrentPlayerNumber(System.Int32)
extern "C"  void CellGrid_set_CurrentPlayerNumber_m542353512 (CellGrid_t3441650664 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Player> CellGrid::get_Players()
extern "C"  List_1_t3190040570 * CellGrid_get_Players_m2689518854 (CellGrid_t3441650664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CellGrid::set_Players(System.Collections.Generic.List`1<Player>)
extern "C"  void CellGrid_set_Players_m2876405005 (CellGrid_t3441650664 * __this, List_1_t3190040570 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Cell> CellGrid::get_Cells()
extern "C"  List_1_t799055483 * CellGrid_get_Cells_m723749316 (CellGrid_t3441650664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CellGrid::set_Cells(System.Collections.Generic.List`1<Cell>)
extern "C"  void CellGrid_set_Cells_m738129935 (CellGrid_t3441650664 * __this, List_1_t799055483 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Unit> CellGrid::get_Units()
extern "C"  List_1_t799600285 * CellGrid_get_Units_m1583044608 (CellGrid_t3441650664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CellGrid::set_Units(System.Collections.Generic.List`1<Unit>)
extern "C"  void CellGrid_set_Units_m2793983315 (CellGrid_t3441650664 * __this, List_1_t799600285 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CellGrid::Start()
extern "C"  void CellGrid_Start_m684904627 (CellGrid_t3441650664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CellGrid::OnCellDehighlighted(System.Object,System.EventArgs)
extern "C"  void CellGrid_OnCellDehighlighted_m1793461436 (CellGrid_t3441650664 * __this, Il2CppObject * ___sender0, EventArgs_t516466188 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CellGrid::OnCellHighlighted(System.Object,System.EventArgs)
extern "C"  void CellGrid_OnCellHighlighted_m1189941149 (CellGrid_t3441650664 * __this, Il2CppObject * ___sender0, EventArgs_t516466188 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CellGrid::OnCellClicked(System.Object,System.EventArgs)
extern "C"  void CellGrid_OnCellClicked_m2070807281 (CellGrid_t3441650664 * __this, Il2CppObject * ___sender0, EventArgs_t516466188 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CellGrid::OnUnitClicked(System.Object,System.EventArgs)
extern "C"  void CellGrid_OnUnitClicked_m4020613263 (CellGrid_t3441650664 * __this, Il2CppObject * ___sender0, EventArgs_t516466188 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CellGrid::OnUnitDestroyed(System.Object,AttackEventArgs)
extern "C"  void CellGrid_OnUnitDestroyed_m2596709706 (CellGrid_t3441650664 * __this, Il2CppObject * ___sender0, AttackEventArgs_t1330664719 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CellGrid::StartGame()
extern "C"  void CellGrid_StartGame_m619948869 (CellGrid_t3441650664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CellGrid::EndTurn()
extern "C"  void CellGrid_EndTurn_m537813705 (CellGrid_t3441650664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CellGrid::<get_CurrentPlayer>m__0(Player)
extern "C"  bool CellGrid_U3Cget_CurrentPlayerU3Em__0_m2437495624 (CellGrid_t3441650664 * __this, Player_t2393081601 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CellGrid::<Start>m__1(Player)
extern "C"  int32_t CellGrid_U3CStartU3Em__1_m2153353470 (Il2CppObject * __this /* static, unused */, Player_t2393081601 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CellGrid::<OnUnitDestroyed>m__2(Unit)
extern "C"  int32_t CellGrid_U3COnUnitDestroyedU3Em__2_m1292777608 (Il2CppObject * __this /* static, unused */, Unit_t2641317 * ___u0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CellGrid::<StartGame>m__3(Unit)
extern "C"  bool CellGrid_U3CStartGameU3Em__3_m19020805 (CellGrid_t3441650664 * __this, Unit_t2641317 * ___u0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CellGrid::<StartGame>m__4(Unit)
extern "C"  void CellGrid_U3CStartGameU3Em__4_m1519074426 (Il2CppObject * __this /* static, unused */, Unit_t2641317 * ___u0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CellGrid::<StartGame>m__5(Player)
extern "C"  bool CellGrid_U3CStartGameU3Em__5_m1572195402 (CellGrid_t3441650664 * __this, Player_t2393081601 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CellGrid::<EndTurn>m__6(Unit)
extern "C"  int32_t CellGrid_U3CEndTurnU3Em__6_m2712405930 (Il2CppObject * __this /* static, unused */, Unit_t2641317 * ___u0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CellGrid::<EndTurn>m__7(Unit)
extern "C"  bool CellGrid_U3CEndTurnU3Em__7_m979255301 (CellGrid_t3441650664 * __this, Unit_t2641317 * ___u0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CellGrid::<EndTurn>m__8(Unit)
extern "C"  void CellGrid_U3CEndTurnU3Em__8_m1885273466 (Il2CppObject * __this /* static, unused */, Unit_t2641317 * ___u0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CellGrid::<EndTurn>m__9(Unit)
extern "C"  bool CellGrid_U3CEndTurnU3Em__9_m2754262663 (CellGrid_t3441650664 * __this, Unit_t2641317 * ___u0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CellGrid::<EndTurn>m__A(Unit)
extern "C"  bool CellGrid_U3CEndTurnU3Em__A_m1264357519 (CellGrid_t3441650664 * __this, Unit_t2641317 * ___u0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CellGrid::<EndTurn>m__B(Unit)
extern "C"  void CellGrid_U3CEndTurnU3Em__B_m2170375684 (Il2CppObject * __this /* static, unused */, Unit_t2641317 * ___u0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CellGrid::<EndTurn>m__C(Player)
extern "C"  bool CellGrid_U3CEndTurnU3Em__C_m44901972 (CellGrid_t3441650664 * __this, Player_t2393081601 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
