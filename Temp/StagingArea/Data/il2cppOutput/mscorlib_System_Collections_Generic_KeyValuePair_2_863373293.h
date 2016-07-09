#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Cell
struct Cell_t2096514;
// System.Collections.Generic.Dictionary`2<Cell,System.Int32>
struct Dictionary_2_t2111128391;

#include "mscorlib_System_ValueType4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<Cell,System.Collections.Generic.Dictionary`2<Cell,System.Int32>>
struct  KeyValuePair_2_t863373293 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Cell_t2096514 * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Dictionary_2_t2111128391 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t863373293, ___key_0)); }
	inline Cell_t2096514 * get_key_0() const { return ___key_0; }
	inline Cell_t2096514 ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Cell_t2096514 * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier(&___key_0, value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t863373293, ___value_1)); }
	inline Dictionary_2_t2111128391 * get_value_1() const { return ___value_1; }
	inline Dictionary_2_t2111128391 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Dictionary_2_t2111128391 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier(&___value_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
