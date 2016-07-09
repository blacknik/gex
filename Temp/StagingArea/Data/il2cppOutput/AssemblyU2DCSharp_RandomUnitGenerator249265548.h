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
// System.Predicate`1<Cell>
struct Predicate_1_t573060412;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RandomUnitGenerator
struct  RandomUnitGenerator_t249265548  : public MonoBehaviour_t3012272455
{
public:
	// System.Random RandomUnitGenerator::_rnd
	Random_t922188920 * ____rnd_2;
	// UnityEngine.Transform RandomUnitGenerator::UnitsParent
	Transform_t284553113 * ___UnitsParent_3;
	// UnityEngine.GameObject RandomUnitGenerator::UnitPrefab
	GameObject_t4012695102 * ___UnitPrefab_4;
	// System.Int32 RandomUnitGenerator::NumberOfPlayers
	int32_t ___NumberOfPlayers_5;
	// System.Int32 RandomUnitGenerator::UnitsPerPlayer
	int32_t ___UnitsPerPlayer_6;

public:
	inline static int32_t get_offset_of__rnd_2() { return static_cast<int32_t>(offsetof(RandomUnitGenerator_t249265548, ____rnd_2)); }
	inline Random_t922188920 * get__rnd_2() const { return ____rnd_2; }
	inline Random_t922188920 ** get_address_of__rnd_2() { return &____rnd_2; }
	inline void set__rnd_2(Random_t922188920 * value)
	{
		____rnd_2 = value;
		Il2CppCodeGenWriteBarrier(&____rnd_2, value);
	}

	inline static int32_t get_offset_of_UnitsParent_3() { return static_cast<int32_t>(offsetof(RandomUnitGenerator_t249265548, ___UnitsParent_3)); }
	inline Transform_t284553113 * get_UnitsParent_3() const { return ___UnitsParent_3; }
	inline Transform_t284553113 ** get_address_of_UnitsParent_3() { return &___UnitsParent_3; }
	inline void set_UnitsParent_3(Transform_t284553113 * value)
	{
		___UnitsParent_3 = value;
		Il2CppCodeGenWriteBarrier(&___UnitsParent_3, value);
	}

	inline static int32_t get_offset_of_UnitPrefab_4() { return static_cast<int32_t>(offsetof(RandomUnitGenerator_t249265548, ___UnitPrefab_4)); }
	inline GameObject_t4012695102 * get_UnitPrefab_4() const { return ___UnitPrefab_4; }
	inline GameObject_t4012695102 ** get_address_of_UnitPrefab_4() { return &___UnitPrefab_4; }
	inline void set_UnitPrefab_4(GameObject_t4012695102 * value)
	{
		___UnitPrefab_4 = value;
		Il2CppCodeGenWriteBarrier(&___UnitPrefab_4, value);
	}

	inline static int32_t get_offset_of_NumberOfPlayers_5() { return static_cast<int32_t>(offsetof(RandomUnitGenerator_t249265548, ___NumberOfPlayers_5)); }
	inline int32_t get_NumberOfPlayers_5() const { return ___NumberOfPlayers_5; }
	inline int32_t* get_address_of_NumberOfPlayers_5() { return &___NumberOfPlayers_5; }
	inline void set_NumberOfPlayers_5(int32_t value)
	{
		___NumberOfPlayers_5 = value;
	}

	inline static int32_t get_offset_of_UnitsPerPlayer_6() { return static_cast<int32_t>(offsetof(RandomUnitGenerator_t249265548, ___UnitsPerPlayer_6)); }
	inline int32_t get_UnitsPerPlayer_6() const { return ___UnitsPerPlayer_6; }
	inline int32_t* get_address_of_UnitsPerPlayer_6() { return &___UnitsPerPlayer_6; }
	inline void set_UnitsPerPlayer_6(int32_t value)
	{
		___UnitsPerPlayer_6 = value;
	}
};

struct RandomUnitGenerator_t249265548_StaticFields
{
public:
	// System.Predicate`1<Cell> RandomUnitGenerator::<>f__am$cache5
	Predicate_1_t573060412 * ___U3CU3Ef__amU24cache5_7;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache5_7() { return static_cast<int32_t>(offsetof(RandomUnitGenerator_t249265548_StaticFields, ___U3CU3Ef__amU24cache5_7)); }
	inline Predicate_1_t573060412 * get_U3CU3Ef__amU24cache5_7() const { return ___U3CU3Ef__amU24cache5_7; }
	inline Predicate_1_t573060412 ** get_address_of_U3CU3Ef__amU24cache5_7() { return &___U3CU3Ef__amU24cache5_7; }
	inline void set_U3CU3Ef__amU24cache5_7(Predicate_1_t573060412 * value)
	{
		___U3CU3Ef__amU24cache5_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache5_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
