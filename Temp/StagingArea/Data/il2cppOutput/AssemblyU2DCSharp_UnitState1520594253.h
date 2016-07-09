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

// UnitState
struct  UnitState_t1520594253  : public Il2CppObject
{
public:
	// Unit UnitState::_unit
	Unit_t2641317 * ____unit_0;

public:
	inline static int32_t get_offset_of__unit_0() { return static_cast<int32_t>(offsetof(UnitState_t1520594253, ____unit_0)); }
	inline Unit_t2641317 * get__unit_0() const { return ____unit_0; }
	inline Unit_t2641317 ** get_address_of__unit_0() { return &____unit_0; }
	inline void set__unit_0(Unit_t2641317 * value)
	{
		____unit_0 = value;
		Il2CppCodeGenWriteBarrier(&____unit_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
