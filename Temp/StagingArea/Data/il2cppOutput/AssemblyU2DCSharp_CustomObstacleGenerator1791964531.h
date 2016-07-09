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
// CellGrid
struct CellGrid_t3441650664;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CustomObstacleGenerator
struct  CustomObstacleGenerator_t1791964531  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Transform CustomObstacleGenerator::ObstaclesParent
	Transform_t284553113 * ___ObstaclesParent_2;
	// CellGrid CustomObstacleGenerator::CellGrid
	CellGrid_t3441650664 * ___CellGrid_3;

public:
	inline static int32_t get_offset_of_ObstaclesParent_2() { return static_cast<int32_t>(offsetof(CustomObstacleGenerator_t1791964531, ___ObstaclesParent_2)); }
	inline Transform_t284553113 * get_ObstaclesParent_2() const { return ___ObstaclesParent_2; }
	inline Transform_t284553113 ** get_address_of_ObstaclesParent_2() { return &___ObstaclesParent_2; }
	inline void set_ObstaclesParent_2(Transform_t284553113 * value)
	{
		___ObstaclesParent_2 = value;
		Il2CppCodeGenWriteBarrier(&___ObstaclesParent_2, value);
	}

	inline static int32_t get_offset_of_CellGrid_3() { return static_cast<int32_t>(offsetof(CustomObstacleGenerator_t1791964531, ___CellGrid_3)); }
	inline CellGrid_t3441650664 * get_CellGrid_3() const { return ___CellGrid_3; }
	inline CellGrid_t3441650664 ** get_address_of_CellGrid_3() { return &___CellGrid_3; }
	inline void set_CellGrid_3(CellGrid_t3441650664 * value)
	{
		___CellGrid_3 = value;
		Il2CppCodeGenWriteBarrier(&___CellGrid_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
