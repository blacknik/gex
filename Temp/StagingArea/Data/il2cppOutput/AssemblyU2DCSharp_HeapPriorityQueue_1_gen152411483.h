#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<PriorityQueueNode`1<System.Object>>
struct List_1_t4208397010;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HeapPriorityQueue`1<System.Object>
struct  HeapPriorityQueue_1_t152411483  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<PriorityQueueNode`1<T>> HeapPriorityQueue`1::_queue
	List_1_t4208397010 * ____queue_0;

public:
	inline static int32_t get_offset_of__queue_0() { return static_cast<int32_t>(offsetof(HeapPriorityQueue_1_t152411483, ____queue_0)); }
	inline List_1_t4208397010 * get__queue_0() const { return ____queue_0; }
	inline List_1_t4208397010 ** get_address_of__queue_0() { return &____queue_0; }
	inline void set__queue_0(List_1_t4208397010 * value)
	{
		____queue_0 = value;
		Il2CppCodeGenWriteBarrier(&____queue_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
