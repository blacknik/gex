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
// System.Random
struct Random_t922188920;

#include "AssemblyU2DCSharp_Player2393081601.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NaiveAiPlayer
struct  NaiveAiPlayer_t1646337646  : public Player_t2393081601
{
public:
	// CellGrid NaiveAiPlayer::_cellGrid
	CellGrid_t3441650664 * ____cellGrid_3;
	// System.Random NaiveAiPlayer::_rnd
	Random_t922188920 * ____rnd_4;

public:
	inline static int32_t get_offset_of__cellGrid_3() { return static_cast<int32_t>(offsetof(NaiveAiPlayer_t1646337646, ____cellGrid_3)); }
	inline CellGrid_t3441650664 * get__cellGrid_3() const { return ____cellGrid_3; }
	inline CellGrid_t3441650664 ** get_address_of__cellGrid_3() { return &____cellGrid_3; }
	inline void set__cellGrid_3(CellGrid_t3441650664 * value)
	{
		____cellGrid_3 = value;
		Il2CppCodeGenWriteBarrier(&____cellGrid_3, value);
	}

	inline static int32_t get_offset_of__rnd_4() { return static_cast<int32_t>(offsetof(NaiveAiPlayer_t1646337646, ____rnd_4)); }
	inline Random_t922188920 * get__rnd_4() const { return ____rnd_4; }
	inline Random_t922188920 ** get_address_of__rnd_4() { return &____rnd_4; }
	inline void set__rnd_4(Random_t922188920 * value)
	{
		____rnd_4 = value;
		Il2CppCodeGenWriteBarrier(&____rnd_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
