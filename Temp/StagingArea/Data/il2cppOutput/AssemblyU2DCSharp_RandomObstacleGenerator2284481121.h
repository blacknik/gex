#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Random
struct Random_t922188920;
// UnityEngine.Transform
struct Transform_t284553113;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// CellGrid
struct CellGrid_t3441650664;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RandomObstacleGenerator
struct  RandomObstacleGenerator_t2284481121  : public MonoBehaviour_t3012272455
{
public:
	// System.Random RandomObstacleGenerator::_rnd
	Random_t922188920 * ____rnd_2;
	// System.Int32 RandomObstacleGenerator::Amount
	int32_t ___Amount_3;
	// UnityEngine.Transform RandomObstacleGenerator::ObstaclesParent
	Transform_t284553113 * ___ObstaclesParent_4;
	// UnityEngine.GameObject RandomObstacleGenerator::ObstaclePrefab
	GameObject_t4012695102 * ___ObstaclePrefab_5;
	// CellGrid RandomObstacleGenerator::CellGrid
	CellGrid_t3441650664 * ___CellGrid_6;

public:
	inline static int32_t get_offset_of__rnd_2() { return static_cast<int32_t>(offsetof(RandomObstacleGenerator_t2284481121, ____rnd_2)); }
	inline Random_t922188920 * get__rnd_2() const { return ____rnd_2; }
	inline Random_t922188920 ** get_address_of__rnd_2() { return &____rnd_2; }
	inline void set__rnd_2(Random_t922188920 * value)
	{
		____rnd_2 = value;
		Il2CppCodeGenWriteBarrier(&____rnd_2, value);
	}

	inline static int32_t get_offset_of_Amount_3() { return static_cast<int32_t>(offsetof(RandomObstacleGenerator_t2284481121, ___Amount_3)); }
	inline int32_t get_Amount_3() const { return ___Amount_3; }
	inline int32_t* get_address_of_Amount_3() { return &___Amount_3; }
	inline void set_Amount_3(int32_t value)
	{
		___Amount_3 = value;
	}

	inline static int32_t get_offset_of_ObstaclesParent_4() { return static_cast<int32_t>(offsetof(RandomObstacleGenerator_t2284481121, ___ObstaclesParent_4)); }
	inline Transform_t284553113 * get_ObstaclesParent_4() const { return ___ObstaclesParent_4; }
	inline Transform_t284553113 ** get_address_of_ObstaclesParent_4() { return &___ObstaclesParent_4; }
	inline void set_ObstaclesParent_4(Transform_t284553113 * value)
	{
		___ObstaclesParent_4 = value;
		Il2CppCodeGenWriteBarrier(&___ObstaclesParent_4, value);
	}

	inline static int32_t get_offset_of_ObstaclePrefab_5() { return static_cast<int32_t>(offsetof(RandomObstacleGenerator_t2284481121, ___ObstaclePrefab_5)); }
	inline GameObject_t4012695102 * get_ObstaclePrefab_5() const { return ___ObstaclePrefab_5; }
	inline GameObject_t4012695102 ** get_address_of_ObstaclePrefab_5() { return &___ObstaclePrefab_5; }
	inline void set_ObstaclePrefab_5(GameObject_t4012695102 * value)
	{
		___ObstaclePrefab_5 = value;
		Il2CppCodeGenWriteBarrier(&___ObstaclePrefab_5, value);
	}

	inline static int32_t get_offset_of_CellGrid_6() { return static_cast<int32_t>(offsetof(RandomObstacleGenerator_t2284481121, ___CellGrid_6)); }
	inline CellGrid_t3441650664 * get_CellGrid_6() const { return ___CellGrid_6; }
	inline CellGrid_t3441650664 ** get_address_of_CellGrid_6() { return &___CellGrid_6; }
	inline void set_CellGrid_6(CellGrid_t3441650664 * value)
	{
		___CellGrid_6 = value;
		Il2CppCodeGenWriteBarrier(&___CellGrid_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
