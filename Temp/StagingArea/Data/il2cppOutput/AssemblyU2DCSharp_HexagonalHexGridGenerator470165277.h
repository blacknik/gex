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

// HexagonalHexGridGenerator
struct  HexagonalHexGridGenerator_t470165277  : public ICellGridGenerator_t4114198178
{
public:
	// UnityEngine.GameObject HexagonalHexGridGenerator::HexagonPrefab
	GameObject_t4012695102 * ___HexagonPrefab_3;
	// System.Int32 HexagonalHexGridGenerator::Radius
	int32_t ___Radius_4;

public:
	inline static int32_t get_offset_of_HexagonPrefab_3() { return static_cast<int32_t>(offsetof(HexagonalHexGridGenerator_t470165277, ___HexagonPrefab_3)); }
	inline GameObject_t4012695102 * get_HexagonPrefab_3() const { return ___HexagonPrefab_3; }
	inline GameObject_t4012695102 ** get_address_of_HexagonPrefab_3() { return &___HexagonPrefab_3; }
	inline void set_HexagonPrefab_3(GameObject_t4012695102 * value)
	{
		___HexagonPrefab_3 = value;
		Il2CppCodeGenWriteBarrier(&___HexagonPrefab_3, value);
	}

	inline static int32_t get_offset_of_Radius_4() { return static_cast<int32_t>(offsetof(HexagonalHexGridGenerator_t470165277, ___Radius_4)); }
	inline int32_t get_Radius_4() const { return ___Radius_4; }
	inline int32_t* get_address_of_Radius_4() { return &___Radius_4; }
	inline void set_Radius_4(int32_t value)
	{
		___Radius_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
