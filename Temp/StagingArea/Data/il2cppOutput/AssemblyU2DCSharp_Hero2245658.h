#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// BuffSpawner
struct BuffSpawner_t1792379253;
// UnityEngine.UI.Button
struct Button_t990034267;

#include "AssemblyU2DCSharp_MyUnit2318831984.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Hero
struct  Hero_t2245658  : public MyUnit_t2318831984
{
public:
	// BuffSpawner Hero::_buffSpawner
	BuffSpawner_t1792379253 * ____buffSpawner_34;
	// UnityEngine.UI.Button Hero::_specialAbilityButton
	Button_t990034267 * ____specialAbilityButton_35;
	// System.Boolean Hero::_abilityUsed
	bool ____abilityUsed_36;

public:
	inline static int32_t get_offset_of__buffSpawner_34() { return static_cast<int32_t>(offsetof(Hero_t2245658, ____buffSpawner_34)); }
	inline BuffSpawner_t1792379253 * get__buffSpawner_34() const { return ____buffSpawner_34; }
	inline BuffSpawner_t1792379253 ** get_address_of__buffSpawner_34() { return &____buffSpawner_34; }
	inline void set__buffSpawner_34(BuffSpawner_t1792379253 * value)
	{
		____buffSpawner_34 = value;
		Il2CppCodeGenWriteBarrier(&____buffSpawner_34, value);
	}

	inline static int32_t get_offset_of__specialAbilityButton_35() { return static_cast<int32_t>(offsetof(Hero_t2245658, ____specialAbilityButton_35)); }
	inline Button_t990034267 * get__specialAbilityButton_35() const { return ____specialAbilityButton_35; }
	inline Button_t990034267 ** get_address_of__specialAbilityButton_35() { return &____specialAbilityButton_35; }
	inline void set__specialAbilityButton_35(Button_t990034267 * value)
	{
		____specialAbilityButton_35 = value;
		Il2CppCodeGenWriteBarrier(&____specialAbilityButton_35, value);
	}

	inline static int32_t get_offset_of__abilityUsed_36() { return static_cast<int32_t>(offsetof(Hero_t2245658, ____abilityUsed_36)); }
	inline bool get__abilityUsed_36() const { return ____abilityUsed_36; }
	inline bool* get_address_of__abilityUsed_36() { return &____abilityUsed_36; }
	inline void set__abilityUsed_36(bool value)
	{
		____abilityUsed_36 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
