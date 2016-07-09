#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PriorityQueueNode`1<System.Object>
struct  PriorityQueueNode_1_t3411438041  : public Il2CppObject
{
public:
	// T PriorityQueueNode`1::<Item>k__BackingField
	Il2CppObject * ___U3CItemU3Ek__BackingField_0;
	// System.Single PriorityQueueNode`1::<Priority>k__BackingField
	float ___U3CPriorityU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CItemU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PriorityQueueNode_1_t3411438041, ___U3CItemU3Ek__BackingField_0)); }
	inline Il2CppObject * get_U3CItemU3Ek__BackingField_0() const { return ___U3CItemU3Ek__BackingField_0; }
	inline Il2CppObject ** get_address_of_U3CItemU3Ek__BackingField_0() { return &___U3CItemU3Ek__BackingField_0; }
	inline void set_U3CItemU3Ek__BackingField_0(Il2CppObject * value)
	{
		___U3CItemU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CItemU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CPriorityU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PriorityQueueNode_1_t3411438041, ___U3CPriorityU3Ek__BackingField_1)); }
	inline float get_U3CPriorityU3Ek__BackingField_1() const { return ___U3CPriorityU3Ek__BackingField_1; }
	inline float* get_address_of_U3CPriorityU3Ek__BackingField_1() { return &___U3CPriorityU3Ek__BackingField_1; }
	inline void set_U3CPriorityU3Ek__BackingField_1(float value)
	{
		___U3CPriorityU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
