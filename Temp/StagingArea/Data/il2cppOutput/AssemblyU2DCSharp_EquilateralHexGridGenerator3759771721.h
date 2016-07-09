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

// EquilateralHexGridGenerator
struct  EquilateralHexGridGenerator_t3759771721  : public ICellGridGenerator_t4114198178
{
public:
	// UnityEngine.GameObject EquilateralHexGridGenerator::HexagonPrefab
	GameObject_t4012695102 * ___HexagonPrefab_3;
	// System.Int32 EquilateralHexGridGenerator::Side_a
	int32_t ___Side_a_4;
	// System.Int32 EquilateralHexGridGenerator::Side_b
	int32_t ___Side_b_5;

public:
	inline static int32_t get_offset_of_HexagonPrefab_3() { return static_cast<int32_t>(offsetof(EquilateralHexGridGenerator_t3759771721, ___HexagonPrefab_3)); }
	inline GameObject_t4012695102 * get_HexagonPrefab_3() const { return ___HexagonPrefab_3; }
	inline GameObject_t4012695102 ** get_address_of_HexagonPrefab_3() { return &___HexagonPrefab_3; }
	inline void set_HexagonPrefab_3(GameObject_t4012695102 * value)
	{
		___HexagonPrefab_3 = value;
		Il2CppCodeGenWriteBarrier(&___HexagonPrefab_3, value);
	}

	inline static int32_t get_offset_of_Side_a_4() { return static_cast<int32_t>(offsetof(EquilateralHexGridGenerator_t3759771721, ___Side_a_4)); }
	inline int32_t get_Side_a_4() const { return ___Side_a_4; }
	inline int32_t* get_address_of_Side_a_4() { return &___Side_a_4; }
	inline void set_Side_a_4(int32_t value)
	{
		___Side_a_4 = value;
	}

	inline static int32_t get_offset_of_Side_b_5() { return static_cast<int32_t>(offsetof(EquilateralHexGridGenerator_t3759771721, ___Side_b_5)); }
	inline int32_t get_Side_b_5() const { return ___Side_b_5; }
	inline int32_t* get_address_of_Side_b_5() { return &___Side_b_5; }
	inline void set_Side_b_5(int32_t value)
	{
		___Side_b_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
