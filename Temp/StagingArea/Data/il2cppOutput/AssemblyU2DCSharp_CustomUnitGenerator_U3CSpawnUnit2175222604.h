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

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CustomUnitGenerator/<SpawnUnits>c__AnonStoreyE
struct  U3CSpawnUnitsU3Ec__AnonStoreyE_t2175222604  : public Il2CppObject
{
public:
	// Unit CustomUnitGenerator/<SpawnUnits>c__AnonStoreyE::unit
	Unit_t2641317 * ___unit_0;

public:
	inline static int32_t get_offset_of_unit_0() { return static_cast<int32_t>(offsetof(U3CSpawnUnitsU3Ec__AnonStoreyE_t2175222604, ___unit_0)); }
	inline Unit_t2641317 * get_unit_0() const { return ___unit_0; }
	inline Unit_t2641317 ** get_address_of_unit_0() { return &___unit_0; }
	inline void set_unit_0(Unit_t2641317 * value)
	{
		___unit_0 = value;
		Il2CppCodeGenWriteBarrier(&___unit_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
