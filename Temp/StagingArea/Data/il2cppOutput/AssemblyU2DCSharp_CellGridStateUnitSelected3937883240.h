#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Unit
struct Unit_t2641317;
// System.Collections.Generic.List`1<Cell>
struct List_1_t799055483;
// System.Collections.Generic.List`1<Unit>
struct List_1_t799600285;
// Cell
struct Cell_t2096514;

#include "AssemblyU2DCSharp_CellGridState401840521.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CellGridStateUnitSelected
struct  CellGridStateUnitSelected_t3937883240  : public CellGridState_t401840521
{
public:
	// Unit CellGridStateUnitSelected::_unit
	Unit_t2641317 * ____unit_2;
	// System.Collections.Generic.List`1<Cell> CellGridStateUnitSelected::_pathsInRange
	List_1_t799055483 * ____pathsInRange_3;
	// System.Collections.Generic.List`1<Unit> CellGridStateUnitSelected::_unitsInRange
	List_1_t799600285 * ____unitsInRange_4;
	// Cell CellGridStateUnitSelected::_unitCell
	Cell_t2096514 * ____unitCell_5;

public:
	inline static int32_t get_offset_of__unit_2() { return static_cast<int32_t>(offsetof(CellGridStateUnitSelected_t3937883240, ____unit_2)); }
	inline Unit_t2641317 * get__unit_2() const { return ____unit_2; }
	inline Unit_t2641317 ** get_address_of__unit_2() { return &____unit_2; }
	inline void set__unit_2(Unit_t2641317 * value)
	{
		____unit_2 = value;
		Il2CppCodeGenWriteBarrier(&____unit_2, value);
	}

	inline static int32_t get_offset_of__pathsInRange_3() { return static_cast<int32_t>(offsetof(CellGridStateUnitSelected_t3937883240, ____pathsInRange_3)); }
	inline List_1_t799055483 * get__pathsInRange_3() const { return ____pathsInRange_3; }
	inline List_1_t799055483 ** get_address_of__pathsInRange_3() { return &____pathsInRange_3; }
	inline void set__pathsInRange_3(List_1_t799055483 * value)
	{
		____pathsInRange_3 = value;
		Il2CppCodeGenWriteBarrier(&____pathsInRange_3, value);
	}

	inline static int32_t get_offset_of__unitsInRange_4() { return static_cast<int32_t>(offsetof(CellGridStateUnitSelected_t3937883240, ____unitsInRange_4)); }
	inline List_1_t799600285 * get__unitsInRange_4() const { return ____unitsInRange_4; }
	inline List_1_t799600285 ** get_address_of__unitsInRange_4() { return &____unitsInRange_4; }
	inline void set__unitsInRange_4(List_1_t799600285 * value)
	{
		____unitsInRange_4 = value;
		Il2CppCodeGenWriteBarrier(&____unitsInRange_4, value);
	}

	inline static int32_t get_offset_of__unitCell_5() { return static_cast<int32_t>(offsetof(CellGridStateUnitSelected_t3937883240, ____unitCell_5)); }
	inline Cell_t2096514 * get__unitCell_5() const { return ____unitCell_5; }
	inline Cell_t2096514 ** get_address_of__unitCell_5() { return &____unitCell_5; }
	inline void set__unitCell_5(Cell_t2096514 * value)
	{
		____unitCell_5 = value;
		Il2CppCodeGenWriteBarrier(&____unitCell_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
