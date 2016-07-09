#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// CellGrid
struct CellGrid_t3441650664;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GUIController
struct  GUIController_t3327782679  : public MonoBehaviour_t3012272455
{
public:
	// CellGrid GUIController::CellGrid
	CellGrid_t3441650664 * ___CellGrid_2;

public:
	inline static int32_t get_offset_of_CellGrid_2() { return static_cast<int32_t>(offsetof(GUIController_t3327782679, ___CellGrid_2)); }
	inline CellGrid_t3441650664 * get_CellGrid_2() const { return ___CellGrid_2; }
	inline CellGrid_t3441650664 ** get_address_of_CellGrid_2() { return &___CellGrid_2; }
	inline void set_CellGrid_2(CellGrid_t3441650664 * value)
	{
		___CellGrid_2 = value;
		Il2CppCodeGenWriteBarrier(&___CellGrid_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
