#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.EventHandler
struct EventHandler_t247020293;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cell
struct  Cell_t2096514  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Vector2 Cell::_offsetCoord
	Vector2_t3525329788  ____offsetCoord_2;
	// System.Boolean Cell::IsTaken
	bool ___IsTaken_3;
	// System.Int32 Cell::MovementCost
	int32_t ___MovementCost_4;
	// System.EventHandler Cell::CellClicked
	EventHandler_t247020293 * ___CellClicked_5;
	// System.EventHandler Cell::CellHighlighted
	EventHandler_t247020293 * ___CellHighlighted_6;
	// System.EventHandler Cell::CellDehighlighted
	EventHandler_t247020293 * ___CellDehighlighted_7;

public:
	inline static int32_t get_offset_of__offsetCoord_2() { return static_cast<int32_t>(offsetof(Cell_t2096514, ____offsetCoord_2)); }
	inline Vector2_t3525329788  get__offsetCoord_2() const { return ____offsetCoord_2; }
	inline Vector2_t3525329788 * get_address_of__offsetCoord_2() { return &____offsetCoord_2; }
	inline void set__offsetCoord_2(Vector2_t3525329788  value)
	{
		____offsetCoord_2 = value;
	}

	inline static int32_t get_offset_of_IsTaken_3() { return static_cast<int32_t>(offsetof(Cell_t2096514, ___IsTaken_3)); }
	inline bool get_IsTaken_3() const { return ___IsTaken_3; }
	inline bool* get_address_of_IsTaken_3() { return &___IsTaken_3; }
	inline void set_IsTaken_3(bool value)
	{
		___IsTaken_3 = value;
	}

	inline static int32_t get_offset_of_MovementCost_4() { return static_cast<int32_t>(offsetof(Cell_t2096514, ___MovementCost_4)); }
	inline int32_t get_MovementCost_4() const { return ___MovementCost_4; }
	inline int32_t* get_address_of_MovementCost_4() { return &___MovementCost_4; }
	inline void set_MovementCost_4(int32_t value)
	{
		___MovementCost_4 = value;
	}

	inline static int32_t get_offset_of_CellClicked_5() { return static_cast<int32_t>(offsetof(Cell_t2096514, ___CellClicked_5)); }
	inline EventHandler_t247020293 * get_CellClicked_5() const { return ___CellClicked_5; }
	inline EventHandler_t247020293 ** get_address_of_CellClicked_5() { return &___CellClicked_5; }
	inline void set_CellClicked_5(EventHandler_t247020293 * value)
	{
		___CellClicked_5 = value;
		Il2CppCodeGenWriteBarrier(&___CellClicked_5, value);
	}

	inline static int32_t get_offset_of_CellHighlighted_6() { return static_cast<int32_t>(offsetof(Cell_t2096514, ___CellHighlighted_6)); }
	inline EventHandler_t247020293 * get_CellHighlighted_6() const { return ___CellHighlighted_6; }
	inline EventHandler_t247020293 ** get_address_of_CellHighlighted_6() { return &___CellHighlighted_6; }
	inline void set_CellHighlighted_6(EventHandler_t247020293 * value)
	{
		___CellHighlighted_6 = value;
		Il2CppCodeGenWriteBarrier(&___CellHighlighted_6, value);
	}

	inline static int32_t get_offset_of_CellDehighlighted_7() { return static_cast<int32_t>(offsetof(Cell_t2096514, ___CellDehighlighted_7)); }
	inline EventHandler_t247020293 * get_CellDehighlighted_7() const { return ___CellDehighlighted_7; }
	inline EventHandler_t247020293 ** get_address_of_CellDehighlighted_7() { return &___CellDehighlighted_7; }
	inline void set_CellDehighlighted_7(EventHandler_t247020293 * value)
	{
		___CellDehighlighted_7 = value;
		Il2CppCodeGenWriteBarrier(&___CellDehighlighted_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
