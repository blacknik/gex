#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Unit
struct Unit_t2641317;

#include "mscorlib_System_EventArgs516466188.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AttackEventArgs
struct  AttackEventArgs_t1330664719  : public EventArgs_t516466188
{
public:
	// Unit AttackEventArgs::Attacker
	Unit_t2641317 * ___Attacker_1;
	// Unit AttackEventArgs::Defender
	Unit_t2641317 * ___Defender_2;
	// System.Int32 AttackEventArgs::Damage
	int32_t ___Damage_3;

public:
	inline static int32_t get_offset_of_Attacker_1() { return static_cast<int32_t>(offsetof(AttackEventArgs_t1330664719, ___Attacker_1)); }
	inline Unit_t2641317 * get_Attacker_1() const { return ___Attacker_1; }
	inline Unit_t2641317 ** get_address_of_Attacker_1() { return &___Attacker_1; }
	inline void set_Attacker_1(Unit_t2641317 * value)
	{
		___Attacker_1 = value;
		Il2CppCodeGenWriteBarrier(&___Attacker_1, value);
	}

	inline static int32_t get_offset_of_Defender_2() { return static_cast<int32_t>(offsetof(AttackEventArgs_t1330664719, ___Defender_2)); }
	inline Unit_t2641317 * get_Defender_2() const { return ___Defender_2; }
	inline Unit_t2641317 ** get_address_of_Defender_2() { return &___Defender_2; }
	inline void set_Defender_2(Unit_t2641317 * value)
	{
		___Defender_2 = value;
		Il2CppCodeGenWriteBarrier(&___Defender_2, value);
	}

	inline static int32_t get_offset_of_Damage_3() { return static_cast<int32_t>(offsetof(AttackEventArgs_t1330664719, ___Damage_3)); }
	inline int32_t get_Damage_3() const { return ___Damage_3; }
	inline int32_t* get_address_of_Damage_3() { return &___Damage_3; }
	inline void set_Damage_3(int32_t value)
	{
		___Damage_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
