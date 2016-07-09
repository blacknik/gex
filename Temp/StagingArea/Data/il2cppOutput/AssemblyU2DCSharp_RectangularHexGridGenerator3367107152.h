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

// RectangularHexGridGenerator
struct  RectangularHexGridGenerator_t3367107152  : public ICellGridGenerator_t4114198178
{
public:
	// UnityEngine.GameObject RectangularHexGridGenerator::HexagonPrefab
	GameObject_t4012695102 * ___HexagonPrefab_3;
	// System.Int32 RectangularHexGridGenerator::Height
	int32_t ___Height_4;
	// System.Int32 RectangularHexGridGenerator::Width
	int32_t ___Width_5;

public:
	inline static int32_t get_offset_of_HexagonPrefab_3() { return static_cast<int32_t>(offsetof(RectangularHexGridGenerator_t3367107152, ___HexagonPrefab_3)); }
	inline GameObject_t4012695102 * get_HexagonPrefab_3() const { return ___HexagonPrefab_3; }
	inline GameObject_t4012695102 ** get_address_of_HexagonPrefab_3() { return &___HexagonPrefab_3; }
	inline void set_HexagonPrefab_3(GameObject_t4012695102 * value)
	{
		___HexagonPrefab_3 = value;
		Il2CppCodeGenWriteBarrier(&___HexagonPrefab_3, value);
	}

	inline static int32_t get_offset_of_Height_4() { return static_cast<int32_t>(offsetof(RectangularHexGridGenerator_t3367107152, ___Height_4)); }
	inline int32_t get_Height_4() const { return ___Height_4; }
	inline int32_t* get_address_of_Height_4() { return &___Height_4; }
	inline void set_Height_4(int32_t value)
	{
		___Height_4 = value;
	}

	inline static int32_t get_offset_of_Width_5() { return static_cast<int32_t>(offsetof(RectangularHexGridGenerator_t3367107152, ___Width_5)); }
	inline int32_t get_Width_5() const { return ___Width_5; }
	inline int32_t* get_address_of_Width_5() { return &___Width_5; }
	inline void set_Width_5(int32_t value)
	{
		___Width_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
