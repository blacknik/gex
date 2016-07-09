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

// TriangularHexGridGenerator
struct  TriangularHexGridGenerator_t940537577  : public ICellGridGenerator_t4114198178
{
public:
	// UnityEngine.GameObject TriangularHexGridGenerator::HexagonPrefab
	GameObject_t4012695102 * ___HexagonPrefab_3;
	// System.Int32 TriangularHexGridGenerator::Side
	int32_t ___Side_4;

public:
	inline static int32_t get_offset_of_HexagonPrefab_3() { return static_cast<int32_t>(offsetof(TriangularHexGridGenerator_t940537577, ___HexagonPrefab_3)); }
	inline GameObject_t4012695102 * get_HexagonPrefab_3() const { return ___HexagonPrefab_3; }
	inline GameObject_t4012695102 ** get_address_of_HexagonPrefab_3() { return &___HexagonPrefab_3; }
	inline void set_HexagonPrefab_3(GameObject_t4012695102 * value)
	{
		___HexagonPrefab_3 = value;
		Il2CppCodeGenWriteBarrier(&___HexagonPrefab_3, value);
	}

	inline static int32_t get_offset_of_Side_4() { return static_cast<int32_t>(offsetof(TriangularHexGridGenerator_t940537577, ___Side_4)); }
	inline int32_t get_Side_4() const { return ___Side_4; }
	inline int32_t* get_address_of_Side_4() { return &___Side_4; }
	inline void set_Side_4(int32_t value)
	{
		___Side_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
