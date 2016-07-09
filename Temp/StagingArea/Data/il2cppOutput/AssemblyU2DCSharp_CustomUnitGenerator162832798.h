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

// CustomUnitGenerator
struct  CustomUnitGenerator_t162832798  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Transform CustomUnitGenerator::UnitsParent
	Transform_t284553113 * ___UnitsParent_2;
	// UnityEngine.Transform CustomUnitGenerator::CellsParent
	Transform_t284553113 * ___CellsParent_3;

public:
	inline static int32_t get_offset_of_UnitsParent_2() { return static_cast<int32_t>(offsetof(CustomUnitGenerator_t162832798, ___UnitsParent_2)); }
	inline Transform_t284553113 * get_UnitsParent_2() const { return ___UnitsParent_2; }
	inline Transform_t284553113 ** get_address_of_UnitsParent_2() { return &___UnitsParent_2; }
	inline void set_UnitsParent_2(Transform_t284553113 * value)
	{
		___UnitsParent_2 = value;
		Il2CppCodeGenWriteBarrier(&___UnitsParent_2, value);
	}

	inline static int32_t get_offset_of_CellsParent_3() { return static_cast<int32_t>(offsetof(CustomUnitGenerator_t162832798, ___CellsParent_3)); }
	inline Transform_t284553113 * get_CellsParent_3() const { return ___CellsParent_3; }
	inline Transform_t284553113 ** get_address_of_CellsParent_3() { return &___CellsParent_3; }
	inline void set_CellsParent_3(Transform_t284553113 * value)
	{
		___CellsParent_3 = value;
		Il2CppCodeGenWriteBarrier(&___CellsParent_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
