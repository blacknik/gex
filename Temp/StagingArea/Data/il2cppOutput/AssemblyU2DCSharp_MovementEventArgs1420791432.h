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
// System.Collections.Generic.List`1<Cell>
struct List_1_t799055483;

#include "mscorlib_System_EventArgs516466188.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MovementEventArgs
struct  MovementEventArgs_t1420791432  : public EventArgs_t516466188
{
public:
	// Cell MovementEventArgs::OriginCell
	Cell_t2096514 * ___OriginCell_1;
	// Cell MovementEventArgs::DestinationCell
	Cell_t2096514 * ___DestinationCell_2;
	// System.Collections.Generic.List`1<Cell> MovementEventArgs::Path
	List_1_t799055483 * ___Path_3;

public:
	inline static int32_t get_offset_of_OriginCell_1() { return static_cast<int32_t>(offsetof(MovementEventArgs_t1420791432, ___OriginCell_1)); }
	inline Cell_t2096514 * get_OriginCell_1() const { return ___OriginCell_1; }
	inline Cell_t2096514 ** get_address_of_OriginCell_1() { return &___OriginCell_1; }
	inline void set_OriginCell_1(Cell_t2096514 * value)
	{
		___OriginCell_1 = value;
		Il2CppCodeGenWriteBarrier(&___OriginCell_1, value);
	}

	inline static int32_t get_offset_of_DestinationCell_2() { return static_cast<int32_t>(offsetof(MovementEventArgs_t1420791432, ___DestinationCell_2)); }
	inline Cell_t2096514 * get_DestinationCell_2() const { return ___DestinationCell_2; }
	inline Cell_t2096514 ** get_address_of_DestinationCell_2() { return &___DestinationCell_2; }
	inline void set_DestinationCell_2(Cell_t2096514 * value)
	{
		___DestinationCell_2 = value;
		Il2CppCodeGenWriteBarrier(&___DestinationCell_2, value);
	}

	inline static int32_t get_offset_of_Path_3() { return static_cast<int32_t>(offsetof(MovementEventArgs_t1420791432, ___Path_3)); }
	inline List_1_t799055483 * get_Path_3() const { return ___Path_3; }
	inline List_1_t799055483 ** get_address_of_Path_3() { return &___Path_3; }
	inline void set_Path_3(List_1_t799055483 * value)
	{
		___Path_3 = value;
		Il2CppCodeGenWriteBarrier(&___Path_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
