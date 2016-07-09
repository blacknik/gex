#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// CellGridState
struct CellGridState_t401840521;
// UnityEngine.Transform
struct Transform_t284553113;
// System.EventHandler
struct EventHandler_t247020293;
// System.Collections.Generic.List`1<Player>
struct List_1_t3190040570;
// System.Collections.Generic.List`1<Cell>
struct List_1_t799055483;
// System.Collections.Generic.List`1<Unit>
struct List_1_t799600285;
// System.Func`2<Player,System.Int32>
struct Func_2_t1790812134;
// System.Func`2<Unit,System.Int32>
struct Func_2_t1546957655;
// System.Action`1<Unit>
struct Action_1_t151094021;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CellGrid
struct  CellGrid_t3441650664  : public MonoBehaviour_t3012272455
{
public:
	// CellGridState CellGrid::_cellGridState
	CellGridState_t401840521 * ____cellGridState_2;
	// UnityEngine.Transform CellGrid::PlayersParent
	Transform_t284553113 * ___PlayersParent_3;
	// System.EventHandler CellGrid::GameStarted
	EventHandler_t247020293 * ___GameStarted_4;
	// System.EventHandler CellGrid::GameEnded
	EventHandler_t247020293 * ___GameEnded_5;
	// System.EventHandler CellGrid::TurnEnded
	EventHandler_t247020293 * ___TurnEnded_6;
	// System.Int32 CellGrid::<NumberOfPlayers>k__BackingField
	int32_t ___U3CNumberOfPlayersU3Ek__BackingField_7;
	// System.Int32 CellGrid::<CurrentPlayerNumber>k__BackingField
	int32_t ___U3CCurrentPlayerNumberU3Ek__BackingField_8;
	// System.Collections.Generic.List`1<Player> CellGrid::<Players>k__BackingField
	List_1_t3190040570 * ___U3CPlayersU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<Cell> CellGrid::<Cells>k__BackingField
	List_1_t799055483 * ___U3CCellsU3Ek__BackingField_10;
	// System.Collections.Generic.List`1<Unit> CellGrid::<Units>k__BackingField
	List_1_t799600285 * ___U3CUnitsU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of__cellGridState_2() { return static_cast<int32_t>(offsetof(CellGrid_t3441650664, ____cellGridState_2)); }
	inline CellGridState_t401840521 * get__cellGridState_2() const { return ____cellGridState_2; }
	inline CellGridState_t401840521 ** get_address_of__cellGridState_2() { return &____cellGridState_2; }
	inline void set__cellGridState_2(CellGridState_t401840521 * value)
	{
		____cellGridState_2 = value;
		Il2CppCodeGenWriteBarrier(&____cellGridState_2, value);
	}

	inline static int32_t get_offset_of_PlayersParent_3() { return static_cast<int32_t>(offsetof(CellGrid_t3441650664, ___PlayersParent_3)); }
	inline Transform_t284553113 * get_PlayersParent_3() const { return ___PlayersParent_3; }
	inline Transform_t284553113 ** get_address_of_PlayersParent_3() { return &___PlayersParent_3; }
	inline void set_PlayersParent_3(Transform_t284553113 * value)
	{
		___PlayersParent_3 = value;
		Il2CppCodeGenWriteBarrier(&___PlayersParent_3, value);
	}

	inline static int32_t get_offset_of_GameStarted_4() { return static_cast<int32_t>(offsetof(CellGrid_t3441650664, ___GameStarted_4)); }
	inline EventHandler_t247020293 * get_GameStarted_4() const { return ___GameStarted_4; }
	inline EventHandler_t247020293 ** get_address_of_GameStarted_4() { return &___GameStarted_4; }
	inline void set_GameStarted_4(EventHandler_t247020293 * value)
	{
		___GameStarted_4 = value;
		Il2CppCodeGenWriteBarrier(&___GameStarted_4, value);
	}

	inline static int32_t get_offset_of_GameEnded_5() { return static_cast<int32_t>(offsetof(CellGrid_t3441650664, ___GameEnded_5)); }
	inline EventHandler_t247020293 * get_GameEnded_5() const { return ___GameEnded_5; }
	inline EventHandler_t247020293 ** get_address_of_GameEnded_5() { return &___GameEnded_5; }
	inline void set_GameEnded_5(EventHandler_t247020293 * value)
	{
		___GameEnded_5 = value;
		Il2CppCodeGenWriteBarrier(&___GameEnded_5, value);
	}

	inline static int32_t get_offset_of_TurnEnded_6() { return static_cast<int32_t>(offsetof(CellGrid_t3441650664, ___TurnEnded_6)); }
	inline EventHandler_t247020293 * get_TurnEnded_6() const { return ___TurnEnded_6; }
	inline EventHandler_t247020293 ** get_address_of_TurnEnded_6() { return &___TurnEnded_6; }
	inline void set_TurnEnded_6(EventHandler_t247020293 * value)
	{
		___TurnEnded_6 = value;
		Il2CppCodeGenWriteBarrier(&___TurnEnded_6, value);
	}

	inline static int32_t get_offset_of_U3CNumberOfPlayersU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(CellGrid_t3441650664, ___U3CNumberOfPlayersU3Ek__BackingField_7)); }
	inline int32_t get_U3CNumberOfPlayersU3Ek__BackingField_7() const { return ___U3CNumberOfPlayersU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CNumberOfPlayersU3Ek__BackingField_7() { return &___U3CNumberOfPlayersU3Ek__BackingField_7; }
	inline void set_U3CNumberOfPlayersU3Ek__BackingField_7(int32_t value)
	{
		___U3CNumberOfPlayersU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CCurrentPlayerNumberU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(CellGrid_t3441650664, ___U3CCurrentPlayerNumberU3Ek__BackingField_8)); }
	inline int32_t get_U3CCurrentPlayerNumberU3Ek__BackingField_8() const { return ___U3CCurrentPlayerNumberU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CCurrentPlayerNumberU3Ek__BackingField_8() { return &___U3CCurrentPlayerNumberU3Ek__BackingField_8; }
	inline void set_U3CCurrentPlayerNumberU3Ek__BackingField_8(int32_t value)
	{
		___U3CCurrentPlayerNumberU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CPlayersU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(CellGrid_t3441650664, ___U3CPlayersU3Ek__BackingField_9)); }
	inline List_1_t3190040570 * get_U3CPlayersU3Ek__BackingField_9() const { return ___U3CPlayersU3Ek__BackingField_9; }
	inline List_1_t3190040570 ** get_address_of_U3CPlayersU3Ek__BackingField_9() { return &___U3CPlayersU3Ek__BackingField_9; }
	inline void set_U3CPlayersU3Ek__BackingField_9(List_1_t3190040570 * value)
	{
		___U3CPlayersU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CPlayersU3Ek__BackingField_9, value);
	}

	inline static int32_t get_offset_of_U3CCellsU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(CellGrid_t3441650664, ___U3CCellsU3Ek__BackingField_10)); }
	inline List_1_t799055483 * get_U3CCellsU3Ek__BackingField_10() const { return ___U3CCellsU3Ek__BackingField_10; }
	inline List_1_t799055483 ** get_address_of_U3CCellsU3Ek__BackingField_10() { return &___U3CCellsU3Ek__BackingField_10; }
	inline void set_U3CCellsU3Ek__BackingField_10(List_1_t799055483 * value)
	{
		___U3CCellsU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCellsU3Ek__BackingField_10, value);
	}

	inline static int32_t get_offset_of_U3CUnitsU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(CellGrid_t3441650664, ___U3CUnitsU3Ek__BackingField_11)); }
	inline List_1_t799600285 * get_U3CUnitsU3Ek__BackingField_11() const { return ___U3CUnitsU3Ek__BackingField_11; }
	inline List_1_t799600285 ** get_address_of_U3CUnitsU3Ek__BackingField_11() { return &___U3CUnitsU3Ek__BackingField_11; }
	inline void set_U3CUnitsU3Ek__BackingField_11(List_1_t799600285 * value)
	{
		___U3CUnitsU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CUnitsU3Ek__BackingField_11, value);
	}
};

struct CellGrid_t3441650664_StaticFields
{
public:
	// System.Func`2<Player,System.Int32> CellGrid::<>f__am$cacheA
	Func_2_t1790812134 * ___U3CU3Ef__amU24cacheA_12;
	// System.Func`2<Unit,System.Int32> CellGrid::<>f__am$cacheB
	Func_2_t1546957655 * ___U3CU3Ef__amU24cacheB_13;
	// System.Action`1<Unit> CellGrid::<>f__am$cacheC
	Action_1_t151094021 * ___U3CU3Ef__amU24cacheC_14;
	// System.Func`2<Unit,System.Int32> CellGrid::<>f__am$cacheD
	Func_2_t1546957655 * ___U3CU3Ef__amU24cacheD_15;
	// System.Action`1<Unit> CellGrid::<>f__am$cacheE
	Action_1_t151094021 * ___U3CU3Ef__amU24cacheE_16;
	// System.Action`1<Unit> CellGrid::<>f__am$cacheF
	Action_1_t151094021 * ___U3CU3Ef__amU24cacheF_17;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheA_12() { return static_cast<int32_t>(offsetof(CellGrid_t3441650664_StaticFields, ___U3CU3Ef__amU24cacheA_12)); }
	inline Func_2_t1790812134 * get_U3CU3Ef__amU24cacheA_12() const { return ___U3CU3Ef__amU24cacheA_12; }
	inline Func_2_t1790812134 ** get_address_of_U3CU3Ef__amU24cacheA_12() { return &___U3CU3Ef__amU24cacheA_12; }
	inline void set_U3CU3Ef__amU24cacheA_12(Func_2_t1790812134 * value)
	{
		___U3CU3Ef__amU24cacheA_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheA_12, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_13() { return static_cast<int32_t>(offsetof(CellGrid_t3441650664_StaticFields, ___U3CU3Ef__amU24cacheB_13)); }
	inline Func_2_t1546957655 * get_U3CU3Ef__amU24cacheB_13() const { return ___U3CU3Ef__amU24cacheB_13; }
	inline Func_2_t1546957655 ** get_address_of_U3CU3Ef__amU24cacheB_13() { return &___U3CU3Ef__amU24cacheB_13; }
	inline void set_U3CU3Ef__amU24cacheB_13(Func_2_t1546957655 * value)
	{
		___U3CU3Ef__amU24cacheB_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheB_13, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheC_14() { return static_cast<int32_t>(offsetof(CellGrid_t3441650664_StaticFields, ___U3CU3Ef__amU24cacheC_14)); }
	inline Action_1_t151094021 * get_U3CU3Ef__amU24cacheC_14() const { return ___U3CU3Ef__amU24cacheC_14; }
	inline Action_1_t151094021 ** get_address_of_U3CU3Ef__amU24cacheC_14() { return &___U3CU3Ef__amU24cacheC_14; }
	inline void set_U3CU3Ef__amU24cacheC_14(Action_1_t151094021 * value)
	{
		___U3CU3Ef__amU24cacheC_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheC_14, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheD_15() { return static_cast<int32_t>(offsetof(CellGrid_t3441650664_StaticFields, ___U3CU3Ef__amU24cacheD_15)); }
	inline Func_2_t1546957655 * get_U3CU3Ef__amU24cacheD_15() const { return ___U3CU3Ef__amU24cacheD_15; }
	inline Func_2_t1546957655 ** get_address_of_U3CU3Ef__amU24cacheD_15() { return &___U3CU3Ef__amU24cacheD_15; }
	inline void set_U3CU3Ef__amU24cacheD_15(Func_2_t1546957655 * value)
	{
		___U3CU3Ef__amU24cacheD_15 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheD_15, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheE_16() { return static_cast<int32_t>(offsetof(CellGrid_t3441650664_StaticFields, ___U3CU3Ef__amU24cacheE_16)); }
	inline Action_1_t151094021 * get_U3CU3Ef__amU24cacheE_16() const { return ___U3CU3Ef__amU24cacheE_16; }
	inline Action_1_t151094021 ** get_address_of_U3CU3Ef__amU24cacheE_16() { return &___U3CU3Ef__amU24cacheE_16; }
	inline void set_U3CU3Ef__amU24cacheE_16(Action_1_t151094021 * value)
	{
		___U3CU3Ef__amU24cacheE_16 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheE_16, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheF_17() { return static_cast<int32_t>(offsetof(CellGrid_t3441650664_StaticFields, ___U3CU3Ef__amU24cacheF_17)); }
	inline Action_1_t151094021 * get_U3CU3Ef__amU24cacheF_17() const { return ___U3CU3Ef__amU24cacheF_17; }
	inline Action_1_t151094021 ** get_address_of_U3CU3Ef__amU24cacheF_17() { return &___U3CU3Ef__amU24cacheF_17; }
	inline void set_U3CU3Ef__amU24cacheF_17(Action_1_t151094021 * value)
	{
		___U3CU3Ef__amU24cacheF_17 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheF_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
