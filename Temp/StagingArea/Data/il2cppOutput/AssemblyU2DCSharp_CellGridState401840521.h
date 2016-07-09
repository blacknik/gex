#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// CellGrid
struct CellGrid_t3441650664;
// System.Func`2<Unit,System.Int32>
struct Func_2_t1546957655;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CellGridState
struct  CellGridState_t401840521  : public Il2CppObject
{
public:
	// CellGrid CellGridState::_cellGrid
	CellGrid_t3441650664 * ____cellGrid_0;

public:
	inline static int32_t get_offset_of__cellGrid_0() { return static_cast<int32_t>(offsetof(CellGridState_t401840521, ____cellGrid_0)); }
	inline CellGrid_t3441650664 * get__cellGrid_0() const { return ____cellGrid_0; }
	inline CellGrid_t3441650664 ** get_address_of__cellGrid_0() { return &____cellGrid_0; }
	inline void set__cellGrid_0(CellGrid_t3441650664 * value)
	{
		____cellGrid_0 = value;
		Il2CppCodeGenWriteBarrier(&____cellGrid_0, value);
	}
};

struct CellGridState_t401840521_StaticFields
{
public:
	// System.Func`2<Unit,System.Int32> CellGridState::<>f__am$cache1
	Func_2_t1546957655 * ___U3CU3Ef__amU24cache1_1;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_1() { return static_cast<int32_t>(offsetof(CellGridState_t401840521_StaticFields, ___U3CU3Ef__amU24cache1_1)); }
	inline Func_2_t1546957655 * get_U3CU3Ef__amU24cache1_1() const { return ___U3CU3Ef__amU24cache1_1; }
	inline Func_2_t1546957655 ** get_address_of_U3CU3Ef__amU24cache1_1() { return &___U3CU3Ef__amU24cache1_1; }
	inline void set_U3CU3Ef__amU24cache1_1(Func_2_t1546957655 * value)
	{
		___U3CU3Ef__amU24cache1_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
