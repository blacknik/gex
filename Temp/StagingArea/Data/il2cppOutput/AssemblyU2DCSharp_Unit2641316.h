#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// IPathfinding
struct IPathfinding_t2023097275;
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
// System.Predicate`1<Buff>
struct Predicate_1_t573045805;
// System.Action`1<Buff>
struct Action_1_t150534612;
// System.Func`2<Cell,System.Int32>
struct Func_2_t422486593;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unit
struct  Unit_t2641317  : public MonoBehaviour_t3012272455
{
public:
	// System.Int32 Unit::TotalMovementPoints
	int32_t ___TotalMovementPoints_2;
	// System.Int32 Unit::TotalActionPoints
	int32_t ___TotalActionPoints_3;
	// System.Int32 Unit::HitPoints
	int32_t ___HitPoints_4;
	// System.Int32 Unit::AttackRange
	int32_t ___AttackRange_5;
	// System.Int32 Unit::AttackFactor
	int32_t ___AttackFactor_6;
	// System.Int32 Unit::DefenceFactor
	int32_t ___DefenceFactor_7;
	// System.Int32 Unit::MovementPoints
	int32_t ___MovementPoints_8;
	// System.Single Unit::MovementSpeed
	float ___MovementSpeed_9;
	// System.Int32 Unit::ActionPoints
	int32_t ___ActionPoints_10;
	// System.Int32 Unit::PlayerNumber
	int32_t ___PlayerNumber_11;
	// System.EventHandler Unit::UnitClicked
	EventHandler_t247020293 * ___UnitClicked_13;
	// System.EventHandler Unit::UnitSelected
	EventHandler_t247020293 * ___UnitSelected_14;
	// System.EventHandler Unit::UnitDeselected
	EventHandler_t247020293 * ___UnitDeselected_15;
	// System.EventHandler Unit::UnitHighlighted
	EventHandler_t247020293 * ___UnitHighlighted_16;
	// System.EventHandler Unit::UnitDehighlighted
	EventHandler_t247020293 * ___UnitDehighlighted_17;
	// System.EventHandler`1<AttackEventArgs> Unit::UnitAttacked
	EventHandler_1_t2173242362 * ___UnitAttacked_18;
	// System.EventHandler`1<AttackEventArgs> Unit::UnitDestroyed
	EventHandler_1_t2173242362 * ___UnitDestroyed_19;
	// System.EventHandler`1<MovementEventArgs> Unit::UnitMoved
	EventHandler_1_t2263369075 * ___UnitMoved_20;
	// UnitState Unit::<UnitState>k__BackingField
	UnitState_t1520594253 * ___U3CUnitStateU3Ek__BackingField_21;
	// System.Collections.Generic.List`1<Buff> Unit::<Buffs>k__BackingField
	List_1_t799040876 * ___U3CBuffsU3Ek__BackingField_22;
	// System.Int32 Unit::<TotalHitPoints>k__BackingField
	int32_t ___U3CTotalHitPointsU3Ek__BackingField_23;
	// Cell Unit::<Cell>k__BackingField
	Cell_t2096514 * ___U3CCellU3Ek__BackingField_24;
	// System.Boolean Unit::<isMoving>k__BackingField
	bool ___U3CisMovingU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_TotalMovementPoints_2() { return static_cast<int32_t>(offsetof(Unit_t2641317, ___TotalMovementPoints_2)); }
	inline int32_t get_TotalMovementPoints_2() const { return ___TotalMovementPoints_2; }
	inline int32_t* get_address_of_TotalMovementPoints_2() { return &___TotalMovementPoints_2; }
	inline void set_TotalMovementPoints_2(int32_t value)
	{
		___TotalMovementPoints_2 = value;
	}

	inline static int32_t get_offset_of_TotalActionPoints_3() { return static_cast<int32_t>(offsetof(Unit_t2641317, ___TotalActionPoints_3)); }
	inline int32_t get_TotalActionPoints_3() const { return ___TotalActionPoints_3; }
	inline int32_t* get_address_of_TotalActionPoints_3() { return &___TotalActionPoints_3; }
	inline void set_TotalActionPoints_3(int32_t value)
	{
		___TotalActionPoints_3 = value;
	}

	inline static int32_t get_offset_of_HitPoints_4() { return static_cast<int32_t>(offsetof(Unit_t2641317, ___HitPoints_4)); }
	inline int32_t get_HitPoints_4() const { return ___HitPoints_4; }
	inline int32_t* get_address_of_HitPoints_4() { return &___HitPoints_4; }
	inline void set_HitPoints_4(int32_t value)
	{
		___HitPoints_4 = value;
	}

	inline static int32_t get_offset_of_AttackRange_5() { return static_cast<int32_t>(offsetof(Unit_t2641317, ___AttackRange_5)); }
	inline int32_t get_AttackRange_5() const { return ___AttackRange_5; }
	inline int32_t* get_address_of_AttackRange_5() { return &___AttackRange_5; }
	inline void set_AttackRange_5(int32_t value)
	{
		___AttackRange_5 = value;
	}

	inline static int32_t get_offset_of_AttackFactor_6() { return static_cast<int32_t>(offsetof(Unit_t2641317, ___AttackFactor_6)); }
	inline int32_t get_AttackFactor_6() const { return ___AttackFactor_6; }
	inline int32_t* get_address_of_AttackFactor_6() { return &___AttackFactor_6; }
	inline void set_AttackFactor_6(int32_t value)
	{
		___AttackFactor_6 = value;
	}

	inline static int32_t get_offset_of_DefenceFactor_7() { return static_cast<int32_t>(offsetof(Unit_t2641317, ___DefenceFactor_7)); }
	inline int32_t get_DefenceFactor_7() const { return ___DefenceFactor_7; }
	inline int32_t* get_address_of_DefenceFactor_7() { return &___DefenceFactor_7; }
	inline void set_DefenceFactor_7(int32_t value)
	{
		___DefenceFactor_7 = value;
	}

	inline static int32_t get_offset_of_MovementPoints_8() { return static_cast<int32_t>(offsetof(Unit_t2641317, ___MovementPoints_8)); }
	inline int32_t get_MovementPoints_8() const { return ___MovementPoints_8; }
	inline int32_t* get_address_of_MovementPoints_8() { return &___MovementPoints_8; }
	inline void set_MovementPoints_8(int32_t value)
	{
		___MovementPoints_8 = value;
	}

	inline static int32_t get_offset_of_MovementSpeed_9() { return static_cast<int32_t>(offsetof(Unit_t2641317, ___MovementSpeed_9)); }
	inline float get_MovementSpeed_9() const { return ___MovementSpeed_9; }
	inline float* get_address_of_MovementSpeed_9() { return &___MovementSpeed_9; }
	inline void set_MovementSpeed_9(float value)
	{
		___MovementSpeed_9 = value;
	}

	inline static int32_t get_offset_of_ActionPoints_10() { return static_cast<int32_t>(offsetof(Unit_t2641317, ___ActionPoints_10)); }
	inline int32_t get_ActionPoints_10() const { return ___ActionPoints_10; }
	inline int32_t* get_address_of_ActionPoints_10() { return &___ActionPoints_10; }
	inline void set_ActionPoints_10(int32_t value)
	{
		___ActionPoints_10 = value;
	}

	inline static int32_t get_offset_of_PlayerNumber_11() { return static_cast<int32_t>(offsetof(Unit_t2641317, ___PlayerNumber_11)); }
	inline int32_t get_PlayerNumber_11() const { return ___PlayerNumber_11; }
	inline int32_t* get_address_of_PlayerNumber_11() { return &___PlayerNumber_11; }
	inline void set_PlayerNumber_11(int32_t value)
	{
		___PlayerNumber_11 = value;
	}

	inline static int32_t get_offset_of_UnitClicked_13() { return static_cast<int32_t>(offsetof(Unit_t2641317, ___UnitClicked_13)); }
	inline EventHandler_t247020293 * get_UnitClicked_13() const { return ___UnitClicked_13; }
	inline EventHandler_t247020293 ** get_address_of_UnitClicked_13() { return &___UnitClicked_13; }
	inline void set_UnitClicked_13(EventHandler_t247020293 * value)
	{
		___UnitClicked_13 = value;
		Il2CppCodeGenWriteBarrier(&___UnitClicked_13, value);
	}

	inline static int32_t get_offset_of_UnitSelected_14() { return static_cast<int32_t>(offsetof(Unit_t2641317, ___UnitSelected_14)); }
	inline EventHandler_t247020293 * get_UnitSelected_14() const { return ___UnitSelected_14; }
	inline EventHandler_t247020293 ** get_address_of_UnitSelected_14() { return &___UnitSelected_14; }
	inline void set_UnitSelected_14(EventHandler_t247020293 * value)
	{
		___UnitSelected_14 = value;
		Il2CppCodeGenWriteBarrier(&___UnitSelected_14, value);
	}

	inline static int32_t get_offset_of_UnitDeselected_15() { return static_cast<int32_t>(offsetof(Unit_t2641317, ___UnitDeselected_15)); }
	inline EventHandler_t247020293 * get_UnitDeselected_15() const { return ___UnitDeselected_15; }
	inline EventHandler_t247020293 ** get_address_of_UnitDeselected_15() { return &___UnitDeselected_15; }
	inline void set_UnitDeselected_15(EventHandler_t247020293 * value)
	{
		___UnitDeselected_15 = value;
		Il2CppCodeGenWriteBarrier(&___UnitDeselected_15, value);
	}

	inline static int32_t get_offset_of_UnitHighlighted_16() { return static_cast<int32_t>(offsetof(Unit_t2641317, ___UnitHighlighted_16)); }
	inline EventHandler_t247020293 * get_UnitHighlighted_16() const { return ___UnitHighlighted_16; }
	inline EventHandler_t247020293 ** get_address_of_UnitHighlighted_16() { return &___UnitHighlighted_16; }
	inline void set_UnitHighlighted_16(EventHandler_t247020293 * value)
	{
		___UnitHighlighted_16 = value;
		Il2CppCodeGenWriteBarrier(&___UnitHighlighted_16, value);
	}

	inline static int32_t get_offset_of_UnitDehighlighted_17() { return static_cast<int32_t>(offsetof(Unit_t2641317, ___UnitDehighlighted_17)); }
	inline EventHandler_t247020293 * get_UnitDehighlighted_17() const { return ___UnitDehighlighted_17; }
	inline EventHandler_t247020293 ** get_address_of_UnitDehighlighted_17() { return &___UnitDehighlighted_17; }
	inline void set_UnitDehighlighted_17(EventHandler_t247020293 * value)
	{
		___UnitDehighlighted_17 = value;
		Il2CppCodeGenWriteBarrier(&___UnitDehighlighted_17, value);
	}

	inline static int32_t get_offset_of_UnitAttacked_18() { return static_cast<int32_t>(offsetof(Unit_t2641317, ___UnitAttacked_18)); }
	inline EventHandler_1_t2173242362 * get_UnitAttacked_18() const { return ___UnitAttacked_18; }
	inline EventHandler_1_t2173242362 ** get_address_of_UnitAttacked_18() { return &___UnitAttacked_18; }
	inline void set_UnitAttacked_18(EventHandler_1_t2173242362 * value)
	{
		___UnitAttacked_18 = value;
		Il2CppCodeGenWriteBarrier(&___UnitAttacked_18, value);
	}

	inline static int32_t get_offset_of_UnitDestroyed_19() { return static_cast<int32_t>(offsetof(Unit_t2641317, ___UnitDestroyed_19)); }
	inline EventHandler_1_t2173242362 * get_UnitDestroyed_19() const { return ___UnitDestroyed_19; }
	inline EventHandler_1_t2173242362 ** get_address_of_UnitDestroyed_19() { return &___UnitDestroyed_19; }
	inline void set_UnitDestroyed_19(EventHandler_1_t2173242362 * value)
	{
		___UnitDestroyed_19 = value;
		Il2CppCodeGenWriteBarrier(&___UnitDestroyed_19, value);
	}

	inline static int32_t get_offset_of_UnitMoved_20() { return static_cast<int32_t>(offsetof(Unit_t2641317, ___UnitMoved_20)); }
	inline EventHandler_1_t2263369075 * get_UnitMoved_20() const { return ___UnitMoved_20; }
	inline EventHandler_1_t2263369075 ** get_address_of_UnitMoved_20() { return &___UnitMoved_20; }
	inline void set_UnitMoved_20(EventHandler_1_t2263369075 * value)
	{
		___UnitMoved_20 = value;
		Il2CppCodeGenWriteBarrier(&___UnitMoved_20, value);
	}

	inline static int32_t get_offset_of_U3CUnitStateU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(Unit_t2641317, ___U3CUnitStateU3Ek__BackingField_21)); }
	inline UnitState_t1520594253 * get_U3CUnitStateU3Ek__BackingField_21() const { return ___U3CUnitStateU3Ek__BackingField_21; }
	inline UnitState_t1520594253 ** get_address_of_U3CUnitStateU3Ek__BackingField_21() { return &___U3CUnitStateU3Ek__BackingField_21; }
	inline void set_U3CUnitStateU3Ek__BackingField_21(UnitState_t1520594253 * value)
	{
		___U3CUnitStateU3Ek__BackingField_21 = value;
		Il2CppCodeGenWriteBarrier(&___U3CUnitStateU3Ek__BackingField_21, value);
	}

	inline static int32_t get_offset_of_U3CBuffsU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(Unit_t2641317, ___U3CBuffsU3Ek__BackingField_22)); }
	inline List_1_t799040876 * get_U3CBuffsU3Ek__BackingField_22() const { return ___U3CBuffsU3Ek__BackingField_22; }
	inline List_1_t799040876 ** get_address_of_U3CBuffsU3Ek__BackingField_22() { return &___U3CBuffsU3Ek__BackingField_22; }
	inline void set_U3CBuffsU3Ek__BackingField_22(List_1_t799040876 * value)
	{
		___U3CBuffsU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier(&___U3CBuffsU3Ek__BackingField_22, value);
	}

	inline static int32_t get_offset_of_U3CTotalHitPointsU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(Unit_t2641317, ___U3CTotalHitPointsU3Ek__BackingField_23)); }
	inline int32_t get_U3CTotalHitPointsU3Ek__BackingField_23() const { return ___U3CTotalHitPointsU3Ek__BackingField_23; }
	inline int32_t* get_address_of_U3CTotalHitPointsU3Ek__BackingField_23() { return &___U3CTotalHitPointsU3Ek__BackingField_23; }
	inline void set_U3CTotalHitPointsU3Ek__BackingField_23(int32_t value)
	{
		___U3CTotalHitPointsU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_U3CCellU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(Unit_t2641317, ___U3CCellU3Ek__BackingField_24)); }
	inline Cell_t2096514 * get_U3CCellU3Ek__BackingField_24() const { return ___U3CCellU3Ek__BackingField_24; }
	inline Cell_t2096514 ** get_address_of_U3CCellU3Ek__BackingField_24() { return &___U3CCellU3Ek__BackingField_24; }
	inline void set_U3CCellU3Ek__BackingField_24(Cell_t2096514 * value)
	{
		___U3CCellU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCellU3Ek__BackingField_24, value);
	}

	inline static int32_t get_offset_of_U3CisMovingU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Unit_t2641317, ___U3CisMovingU3Ek__BackingField_25)); }
	inline bool get_U3CisMovingU3Ek__BackingField_25() const { return ___U3CisMovingU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CisMovingU3Ek__BackingField_25() { return &___U3CisMovingU3Ek__BackingField_25; }
	inline void set_U3CisMovingU3Ek__BackingField_25(bool value)
	{
		___U3CisMovingU3Ek__BackingField_25 = value;
	}
};

struct Unit_t2641317_StaticFields
{
public:
	// IPathfinding Unit::_pathfinder
	IPathfinding_t2023097275 * ____pathfinder_12;
	// System.Predicate`1<Buff> Unit::<>f__am$cache18
	Predicate_1_t573045805 * ___U3CU3Ef__amU24cache18_26;
	// System.Predicate`1<Buff> Unit::<>f__am$cache19
	Predicate_1_t573045805 * ___U3CU3Ef__amU24cache19_27;
	// System.Action`1<Buff> Unit::<>f__am$cache1A
	Action_1_t150534612 * ___U3CU3Ef__amU24cache1A_28;
	// System.Func`2<Cell,System.Int32> Unit::<>f__am$cache1B
	Func_2_t422486593 * ___U3CU3Ef__amU24cache1B_29;
	// System.Func`2<Cell,System.Int32> Unit::<>f__am$cache1C
	Func_2_t422486593 * ___U3CU3Ef__amU24cache1C_30;

public:
	inline static int32_t get_offset_of__pathfinder_12() { return static_cast<int32_t>(offsetof(Unit_t2641317_StaticFields, ____pathfinder_12)); }
	inline IPathfinding_t2023097275 * get__pathfinder_12() const { return ____pathfinder_12; }
	inline IPathfinding_t2023097275 ** get_address_of__pathfinder_12() { return &____pathfinder_12; }
	inline void set__pathfinder_12(IPathfinding_t2023097275 * value)
	{
		____pathfinder_12 = value;
		Il2CppCodeGenWriteBarrier(&____pathfinder_12, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache18_26() { return static_cast<int32_t>(offsetof(Unit_t2641317_StaticFields, ___U3CU3Ef__amU24cache18_26)); }
	inline Predicate_1_t573045805 * get_U3CU3Ef__amU24cache18_26() const { return ___U3CU3Ef__amU24cache18_26; }
	inline Predicate_1_t573045805 ** get_address_of_U3CU3Ef__amU24cache18_26() { return &___U3CU3Ef__amU24cache18_26; }
	inline void set_U3CU3Ef__amU24cache18_26(Predicate_1_t573045805 * value)
	{
		___U3CU3Ef__amU24cache18_26 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache18_26, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache19_27() { return static_cast<int32_t>(offsetof(Unit_t2641317_StaticFields, ___U3CU3Ef__amU24cache19_27)); }
	inline Predicate_1_t573045805 * get_U3CU3Ef__amU24cache19_27() const { return ___U3CU3Ef__amU24cache19_27; }
	inline Predicate_1_t573045805 ** get_address_of_U3CU3Ef__amU24cache19_27() { return &___U3CU3Ef__amU24cache19_27; }
	inline void set_U3CU3Ef__amU24cache19_27(Predicate_1_t573045805 * value)
	{
		___U3CU3Ef__amU24cache19_27 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache19_27, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1A_28() { return static_cast<int32_t>(offsetof(Unit_t2641317_StaticFields, ___U3CU3Ef__amU24cache1A_28)); }
	inline Action_1_t150534612 * get_U3CU3Ef__amU24cache1A_28() const { return ___U3CU3Ef__amU24cache1A_28; }
	inline Action_1_t150534612 ** get_address_of_U3CU3Ef__amU24cache1A_28() { return &___U3CU3Ef__amU24cache1A_28; }
	inline void set_U3CU3Ef__amU24cache1A_28(Action_1_t150534612 * value)
	{
		___U3CU3Ef__amU24cache1A_28 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1A_28, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1B_29() { return static_cast<int32_t>(offsetof(Unit_t2641317_StaticFields, ___U3CU3Ef__amU24cache1B_29)); }
	inline Func_2_t422486593 * get_U3CU3Ef__amU24cache1B_29() const { return ___U3CU3Ef__amU24cache1B_29; }
	inline Func_2_t422486593 ** get_address_of_U3CU3Ef__amU24cache1B_29() { return &___U3CU3Ef__amU24cache1B_29; }
	inline void set_U3CU3Ef__amU24cache1B_29(Func_2_t422486593 * value)
	{
		___U3CU3Ef__amU24cache1B_29 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1B_29, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1C_30() { return static_cast<int32_t>(offsetof(Unit_t2641317_StaticFields, ___U3CU3Ef__amU24cache1C_30)); }
	inline Func_2_t422486593 * get_U3CU3Ef__amU24cache1C_30() const { return ___U3CU3Ef__amU24cache1C_30; }
	inline Func_2_t422486593 ** get_address_of_U3CU3Ef__amU24cache1C_30() { return &___U3CU3Ef__amU24cache1C_30; }
	inline void set_U3CU3Ef__amU24cache1C_30(Func_2_t422486593 * value)
	{
		___U3CU3Ef__amU24cache1C_30 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1C_30, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
