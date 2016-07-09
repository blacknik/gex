#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t284553113;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ICellGridGenerator
struct  ICellGridGenerator_t4114198178  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Transform ICellGridGenerator::CellsParent
	Transform_t284553113 * ___CellsParent_2;

public:
	inline static int32_t get_offset_of_CellsParent_2() { return static_cast<int32_t>(offsetof(ICellGridGenerator_t4114198178, ___CellsParent_2)); }
	inline Transform_t284553113 * get_CellsParent_2() const { return ___CellsParent_2; }
	inline Transform_t284553113 ** get_address_of_CellsParent_2() { return &___CellsParent_2; }
	inline void set_CellsParent_2(Transform_t284553113 * value)
	{
		___CellsParent_2 = value;
		Il2CppCodeGenWriteBarrier(&___CellsParent_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
