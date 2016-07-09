#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "AssemblyU2DCSharp_ICellGridGenerator4114198178.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RectangularSquareGridGenerator
struct  RectangularSquareGridGenerator_t2591586258  : public ICellGridGenerator_t4114198178
{
public:
	// UnityEngine.GameObject RectangularSquareGridGenerator::SquarePrefab
	GameObject_t4012695102 * ___SquarePrefab_3;
	// System.Int32 RectangularSquareGridGenerator::Width
	int32_t ___Width_4;
	// System.Int32 RectangularSquareGridGenerator::Height
	int32_t ___Height_5;

public:
	inline static int32_t get_offset_of_SquarePrefab_3() { return static_cast<int32_t>(offsetof(RectangularSquareGridGenerator_t2591586258, ___SquarePrefab_3)); }
	inline GameObject_t4012695102 * get_SquarePrefab_3() const { return ___SquarePrefab_3; }
	inline GameObject_t4012695102 ** get_address_of_SquarePrefab_3() { return &___SquarePrefab_3; }
	inline void set_SquarePrefab_3(GameObject_t4012695102 * value)
	{
		___SquarePrefab_3 = value;
		Il2CppCodeGenWriteBarrier(&___SquarePrefab_3, value);
	}

	inline static int32_t get_offset_of_Width_4() { return static_cast<int32_t>(offsetof(RectangularSquareGridGenerator_t2591586258, ___Width_4)); }
	inline int32_t get_Width_4() const { return ___Width_4; }
	inline int32_t* get_address_of_Width_4() { return &___Width_4; }
	inline void set_Width_4(int32_t value)
	{
		___Width_4 = value;
	}

	inline static int32_t get_offset_of_Height_5() { return static_cast<int32_t>(offsetof(RectangularSquareGridGenerator_t2591586258, ___Height_5)); }
	inline int32_t get_Height_5() const { return ___Height_5; }
	inline int32_t* get_address_of_Height_5() { return &___Height_5; }
	inline void set_Height_5(int32_t value)
	{
		___Height_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
