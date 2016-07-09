#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Unit
struct Unit_t2641317;
// Cell
struct Cell_t2096514;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BuffSpawner/<SpawnBuff>c__AnonStorey13
struct  U3CSpawnBuffU3Ec__AnonStorey13_t1967840125  : public Il2CppObject
{
public:
	// Unit BuffSpawner/<SpawnBuff>c__AnonStorey13::buffer
	Unit_t2641317 * ___buffer_0;
	// Cell BuffSpawner/<SpawnBuff>c__AnonStorey13::center
	Cell_t2096514 * ___center_1;
	// System.Int32 BuffSpawner/<SpawnBuff>c__AnonStorey13::range
	int32_t ___range_2;

public:
	inline static int32_t get_offset_of_buffer_0() { return static_cast<int32_t>(offsetof(U3CSpawnBuffU3Ec__AnonStorey13_t1967840125, ___buffer_0)); }
	inline Unit_t2641317 * get_buffer_0() const { return ___buffer_0; }
	inline Unit_t2641317 ** get_address_of_buffer_0() { return &___buffer_0; }
	inline void set_buffer_0(Unit_t2641317 * value)
	{
		___buffer_0 = value;
		Il2CppCodeGenWriteBarrier(&___buffer_0, value);
	}

	inline static int32_t get_offset_of_center_1() { return static_cast<int32_t>(offsetof(U3CSpawnBuffU3Ec__AnonStorey13_t1967840125, ___center_1)); }
	inline Cell_t2096514 * get_center_1() const { return ___center_1; }
	inline Cell_t2096514 ** get_address_of_center_1() { return &___center_1; }
	inline void set_center_1(Cell_t2096514 * value)
	{
		___center_1 = value;
		Il2CppCodeGenWriteBarrier(&___center_1, value);
	}

	inline static int32_t get_offset_of_range_2() { return static_cast<int32_t>(offsetof(U3CSpawnBuffU3Ec__AnonStorey13_t1967840125, ___range_2)); }
	inline int32_t get_range_2() const { return ___range_2; }
	inline int32_t* get_address_of_range_2() { return &___range_2; }
	inline void set_range_2(int32_t value)
	{
		___range_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
