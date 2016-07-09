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

// Unit
struct Unit_t2641317;
// System.EventHandler
struct EventHandler_t247020293;
// System.EventHandler`1<AttackEventArgs>
struct EventHandler_1_t2173242362;
// System.EventHandler`1<MovementEventArgs>
struct EventHandler_1_t2263369075;
// UnitState
struct UnitState_t1520594253;
// System.Collections.Generic.List`1<Buff>
struct List_1_t799040876;
// Cell
struct Cell_t2096514;
// System.Collections.Generic.List`1<Cell>
struct List_1_t799055483;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Collections.Generic.Dictionary`2<Cell,System.Collections.Generic.Dictionary`2<Cell,System.Int32>>
struct Dictionary_2_t1374841995;
// Buff
struct Buff_t2081907;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_EventHandler247020293.h"
#include "AssemblyU2DCSharp_UnitState1520594253.h"
#include "AssemblyU2DCSharp_Cell2096514.h"
#include "AssemblyU2DCSharp_Unit2641316.h"

// System.Void Unit::.ctor()
extern "C"  void Unit__ctor_m1080710519 (Unit_t2641317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unit::.cctor()
extern "C"  void Unit__cctor_m2955158806 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unit::add_UnitClicked(System.EventHandler)
extern "C"  void Unit_add_UnitClicked_m1962807849 (Unit_t2641317 * __this, EventHandler_t247020293 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unit::remove_UnitClicked(System.EventHandler)
extern "C"  void Unit_remove_UnitClicked_m3008887182 (Unit_t2641317 * __this, EventHandler_t247020293 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unit::add_UnitSelected(System.EventHandler)
extern "C"  void Unit_add_UnitSelected_m4171768089 (Unit_t2641317 * __this, EventHandler_t247020293 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unit::remove_UnitSelected(System.EventHandler)
extern "C"  void Unit_remove_UnitSelected_m2240489044 (Unit_t2641317 * __this, EventHandler_t247020293 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unit::add_UnitDeselected(System.EventHandler)
extern "C"  void Unit_add_UnitDeselected_m2261091256 (Unit_t2641317 * __this, EventHandler_t247020293 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unit::remove_UnitDeselected(System.EventHandler)
extern "C"  void Unit_remove_UnitDeselected_m1727800883 (Unit_t2641317 * __this, EventHandler_t247020293 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unit::add_UnitHighlighted(System.EventHandler)
extern "C"  void Unit_add_UnitHighlighted_m889590397 (Unit_t2641317 * __this, EventHandler_t247020293 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unit::remove_UnitHighlighted(System.EventHandler)
extern "C"  void Unit_remove_UnitHighlighted_m1537458018 (Unit_t2641317 * __this, EventHandler_t247020293 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unit::add_UnitDehighlighted(System.EventHandler)
extern "C"  void Unit_add_UnitDehighlighted_m1117632382 (Unit_t2641317 * __this, EventHandler_t247020293 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unit::remove_UnitDehighlighted(System.EventHandler)
extern "C"  void Unit_remove_UnitDehighlighted_m948158243 (Unit_t2641317 * __this, EventHandler_t247020293 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unit::add_UnitAttacked(System.EventHandler`1<AttackEventArgs>)
extern "C"  void Unit_add_UnitAttacked_m1170186539 (Unit_t2641317 * __this, EventHandler_1_t2173242362 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unit::remove_UnitAttacked(System.EventHandler`1<AttackEventArgs>)
extern "C"  void Unit_remove_UnitAttacked_m3682133008 (Unit_t2641317 * __this, EventHandler_1_t2173242362 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unit::add_UnitDestroyed(System.EventHandler`1<AttackEventArgs>)
extern "C"  void Unit_add_UnitDestroyed_m2133613377 (Unit_t2641317 * __this, EventHandler_1_t2173242362 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unit::remove_UnitDestroyed(System.EventHandler`1<AttackEventArgs>)
extern "C"  void Unit_remove_UnitDestroyed_m2694542588 (Unit_t2641317 * __this, EventHandler_1_t2173242362 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unit::add_UnitMoved(System.EventHandler`1<MovementEventArgs>)
extern "C"  void Unit_add_UnitMoved_m697411028 (Unit_t2641317 * __this, EventHandler_1_t2263369075 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unit::remove_UnitMoved(System.EventHandler`1<MovementEventArgs>)
extern "C"  void Unit_remove_UnitMoved_m501346895 (Unit_t2641317 * __this, EventHandler_1_t2263369075 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnitState Unit::get_UnitState()
extern "C"  UnitState_t1520594253 * Unit_get_UnitState_m2203077235 (Unit_t2641317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unit::set_UnitState(UnitState)
extern "C"  void Unit_set_UnitState_m1632185280 (Unit_t2641317 * __this, UnitState_t1520594253 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unit::SetState(UnitState)
extern "C"  void Unit_SetState_m222528905 (Unit_t2641317 * __this, UnitState_t1520594253 * ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Buff> Unit::get_Buffs()
extern "C"  List_1_t799040876 * Unit_get_Buffs_m1500845030 (Unit_t2641317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unit::set_Buffs(System.Collections.Generic.List`1<Buff>)
extern "C"  void Unit_set_Buffs_m1829027885 (Unit_t2641317 * __this, List_1_t799040876 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Unit::get_TotalHitPoints()
extern "C"  int32_t Unit_get_TotalHitPoints_m586581302 (Unit_t2641317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unit::set_TotalHitPoints(System.Int32)
extern "C"  void Unit_set_TotalHitPoints_m3626233965 (Unit_t2641317 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Cell Unit::get_Cell()
extern "C"  Cell_t2096514 * Unit_get_Cell_m354579667 (Unit_t2641317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unit::set_Cell(Cell)
extern "C"  void Unit_set_Cell_m359536522 (Unit_t2641317 * __this, Cell_t2096514 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Unit::get_isMoving()
extern "C"  bool Unit_get_isMoving_m1212992034 (Unit_t2641317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unit::set_isMoving(System.Boolean)
extern "C"  void Unit_set_isMoving_m4267520729 (Unit_t2641317 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unit::Initialize()
extern "C"  void Unit_Initialize_m2101334909 (Unit_t2641317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unit::OnMouseDown()
extern "C"  void Unit_OnMouseDown_m1113825629 (Unit_t2641317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unit::OnMouseEnter()
extern "C"  void Unit_OnMouseEnter_m1024763103 (Unit_t2641317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unit::OnMouseExit()
extern "C"  void Unit_OnMouseExit_m1150355161 (Unit_t2641317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unit::OnTurnStart()
extern "C"  void Unit_OnTurnStart_m3810195675 (Unit_t2641317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unit::OnTurnEnd()
extern "C"  void Unit_OnTurnEnd_m3226607892 (Unit_t2641317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unit::OnDestroyed()
extern "C"  void Unit_OnDestroyed_m3026794511 (Unit_t2641317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unit::OnUnitSelected()
extern "C"  void Unit_OnUnitSelected_m309220907 (Unit_t2641317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unit::OnUnitDeselected()
extern "C"  void Unit_OnUnitDeselected_m4123811244 (Unit_t2641317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Unit::IsUnitAttackable(Unit,Cell)
extern "C"  bool Unit_IsUnitAttackable_m1774078039 (Unit_t2641317 * __this, Unit_t2641317 * ___other0, Cell_t2096514 * ___sourceCell1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unit::DealDamage(Unit)
extern "C"  void Unit_DealDamage_m3637222276 (Unit_t2641317 * __this, Unit_t2641317 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unit::Defend(Unit,System.Int32)
extern "C"  void Unit_Defend_m2046992952 (Unit_t2641317 * __this, Unit_t2641317 * ___other0, int32_t ___damage1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unit::Move(Cell,System.Collections.Generic.List`1<Cell>)
extern "C"  void Unit_Move_m1347190314 (Unit_t2641317 * __this, Cell_t2096514 * ___destinationCell0, List_1_t799055483 * ___path1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Unit::MovementAnimation(System.Collections.Generic.List`1<Cell>)
extern "C"  Il2CppObject * Unit_MovementAnimation_m1389866194 (Unit_t2641317 * __this, List_1_t799055483 * ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Unit::IsCellMovableTo(Cell)
extern "C"  bool Unit_IsCellMovableTo_m1166008988 (Unit_t2641317 * __this, Cell_t2096514 * ___cell0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Unit::IsCellTraversable(Cell)
extern "C"  bool Unit_IsCellTraversable_m421282368 (Unit_t2641317 * __this, Cell_t2096514 * ___cell0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Cell> Unit::GetAvailableDestinations(System.Collections.Generic.List`1<Cell>)
extern "C"  List_1_t799055483 * Unit_GetAvailableDestinations_m4023299930 (Unit_t2641317 * __this, List_1_t799055483 * ___cells0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Cell> Unit::FindPath(System.Collections.Generic.List`1<Cell>,Cell)
extern "C"  List_1_t799055483 * Unit_FindPath_m1728808144 (Unit_t2641317 * __this, List_1_t799055483 * ___cells0, Cell_t2096514 * ___destination1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<Cell,System.Collections.Generic.Dictionary`2<Cell,System.Int32>> Unit::GetGraphEdges(System.Collections.Generic.List`1<Cell>)
extern "C"  Dictionary_2_t1374841995 * Unit_GetGraphEdges_m60072975 (Unit_t2641317 * __this, List_1_t799055483 * ___cells0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Unit::<OnTurnEnd>m__24(Buff)
extern "C"  bool Unit_U3COnTurnEndU3Em__24_m2665196578 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unit::<OnTurnEnd>m__25(Buff)
extern "C"  void Unit_U3COnTurnEndU3Em__25_m2029276847 (Unit_t2641317 * __this, Il2CppObject * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Unit::<OnTurnEnd>m__26(Buff)
extern "C"  bool Unit_U3COnTurnEndU3Em__26_m145236644 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Unit::<OnTurnEnd>m__27(Buff)
extern "C"  void Unit_U3COnTurnEndU3Em__27_m3804284209 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Unit::<Move>m__28(Cell)
extern "C"  int32_t Unit_U3CMoveU3Em__28_m272886823 (Il2CppObject * __this /* static, unused */, Cell_t2096514 * ___h0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Unit::<GetAvailableDestinations>m__29(Cell)
extern "C"  bool Unit_U3CGetAvailableDestinationsU3Em__29_m2201941385 (Unit_t2641317 * __this, Cell_t2096514 * ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Unit::<GetAvailableDestinations>m__2A(Cell)
extern "C"  bool Unit_U3CGetAvailableDestinationsU3Em__2A_m712036241 (Unit_t2641317 * __this, Cell_t2096514 * ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Unit::<GetAvailableDestinations>m__2B(Cell)
extern "C"  int32_t Unit_U3CGetAvailableDestinationsU3Em__2B_m42009400 (Il2CppObject * __this /* static, unused */, Cell_t2096514 * ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
