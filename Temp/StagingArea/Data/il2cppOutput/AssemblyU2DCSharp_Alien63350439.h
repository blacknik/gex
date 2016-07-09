#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Coroutine
struct Coroutine_t2246592261;
struct Coroutine_t2246592261_marshaled_pinvoke;

#include "AssemblyU2DCSharp_Unit2641316.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Alien
struct  Alien_t63350439  : public Unit_t2641317
{
public:
	// UnityEngine.Coroutine Alien::PulseCoroutine
	Coroutine_t2246592261 * ___PulseCoroutine_31;

public:
	inline static int32_t get_offset_of_PulseCoroutine_31() { return static_cast<int32_t>(offsetof(Alien_t63350439, ___PulseCoroutine_31)); }
	inline Coroutine_t2246592261 * get_PulseCoroutine_31() const { return ___PulseCoroutine_31; }
	inline Coroutine_t2246592261 ** get_address_of_PulseCoroutine_31() { return &___PulseCoroutine_31; }
	inline void set_PulseCoroutine_31(Coroutine_t2246592261 * value)
	{
		___PulseCoroutine_31 = value;
		Il2CppCodeGenWriteBarrier(&___PulseCoroutine_31, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
