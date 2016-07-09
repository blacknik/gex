#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PriorityQueueNode`1<System.Object>
struct PriorityQueueNode_1_t3411438041;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ListPriorityQueue`1/<Dequeue>c__AnonStorey11<System.Object>
struct  U3CDequeueU3Ec__AnonStorey11_t2140135086  : public Il2CppObject
{
public:
	// PriorityQueueNode`1<T> ListPriorityQueue`1/<Dequeue>c__AnonStorey11::min
	PriorityQueueNode_1_t3411438041 * ___min_0;

public:
	inline static int32_t get_offset_of_min_0() { return static_cast<int32_t>(offsetof(U3CDequeueU3Ec__AnonStorey11_t2140135086, ___min_0)); }
	inline PriorityQueueNode_1_t3411438041 * get_min_0() const { return ___min_0; }
	inline PriorityQueueNode_1_t3411438041 ** get_address_of_min_0() { return &___min_0; }
	inline void set_min_0(PriorityQueueNode_1_t3411438041 * value)
	{
		___min_0 = value;
		Il2CppCodeGenWriteBarrier(&___min_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
