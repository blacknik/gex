#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Func`2<System.Object,System.Int32>
struct Func_2_t4146091719;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Enumerable/<Min>c__AnonStorey2F`1<System.Object>
struct  U3CMinU3Ec__AnonStorey2F_1_t2747725181  : public Il2CppObject
{
public:
	// System.Func`2<TSource,System.Int32> System.Linq.Enumerable/<Min>c__AnonStorey2F`1::selector
	Func_2_t4146091719 * ___selector_0;

public:
	inline static int32_t get_offset_of_selector_0() { return static_cast<int32_t>(offsetof(U3CMinU3Ec__AnonStorey2F_1_t2747725181, ___selector_0)); }
	inline Func_2_t4146091719 * get_selector_0() const { return ___selector_0; }
	inline Func_2_t4146091719 ** get_address_of_selector_0() { return &___selector_0; }
	inline void set_selector_0(Func_2_t4146091719 * value)
	{
		___selector_0 = value;
		Il2CppCodeGenWriteBarrier(&___selector_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
