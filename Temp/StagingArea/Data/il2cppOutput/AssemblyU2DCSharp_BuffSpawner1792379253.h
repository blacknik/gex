#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<Unit>
struct List_1_t799600285;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BuffSpawner
struct  BuffSpawner_t1792379253  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<Unit> BuffSpawner::unitsList
	List_1_t799600285 * ___unitsList_0;

public:
	inline static int32_t get_offset_of_unitsList_0() { return static_cast<int32_t>(offsetof(BuffSpawner_t1792379253, ___unitsList_0)); }
	inline List_1_t799600285 * get_unitsList_0() const { return ___unitsList_0; }
	inline List_1_t799600285 ** get_address_of_unitsList_0() { return &___unitsList_0; }
	inline void set_unitsList_0(List_1_t799600285 * value)
	{
		___unitsList_0 = value;
		Il2CppCodeGenWriteBarrier(&___unitsList_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
