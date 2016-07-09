#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.Coroutine
struct Coroutine_t2246592261;
struct Coroutine_t2246592261_marshaled_pinvoke;

#include "AssemblyU2DCSharp_Unit2641316.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GenericUnit
struct  GenericUnit_t2767469531  : public Unit_t2641317
{
public:
	// System.String GenericUnit::UnitName
	String_t* ___UnitName_31;
	// UnityEngine.Coroutine GenericUnit::PulseCoroutine
	Coroutine_t2246592261 * ___PulseCoroutine_32;

public:
	inline static int32_t get_offset_of_UnitName_31() { return static_cast<int32_t>(offsetof(GenericUnit_t2767469531, ___UnitName_31)); }
	inline String_t* get_UnitName_31() const { return ___UnitName_31; }
	inline String_t** get_address_of_UnitName_31() { return &___UnitName_31; }
	inline void set_UnitName_31(String_t* value)
	{
		___UnitName_31 = value;
		Il2CppCodeGenWriteBarrier(&___UnitName_31, value);
	}

	inline static int32_t get_offset_of_PulseCoroutine_32() { return static_cast<int32_t>(offsetof(GenericUnit_t2767469531, ___PulseCoroutine_32)); }
	inline Coroutine_t2246592261 * get_PulseCoroutine_32() const { return ___PulseCoroutine_32; }
	inline Coroutine_t2246592261 ** get_address_of_PulseCoroutine_32() { return &___PulseCoroutine_32; }
	inline void set_PulseCoroutine_32(Coroutine_t2246592261 * value)
	{
		___PulseCoroutine_32 = value;
		Il2CppCodeGenWriteBarrier(&___PulseCoroutine_32, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
