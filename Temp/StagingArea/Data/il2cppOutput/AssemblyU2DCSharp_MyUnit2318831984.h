#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t284553113;

#include "AssemblyU2DCSharp_Unit2641316.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MyUnit
struct  MyUnit_t2318831984  : public Unit_t2641317
{
public:
	// UnityEngine.Color MyUnit::PlayerColor
	Color_t1588175760  ___PlayerColor_31;
	// System.String MyUnit::UnitName
	String_t* ___UnitName_32;
	// UnityEngine.Transform MyUnit::Highlighter
	Transform_t284553113 * ___Highlighter_33;

public:
	inline static int32_t get_offset_of_PlayerColor_31() { return static_cast<int32_t>(offsetof(MyUnit_t2318831984, ___PlayerColor_31)); }
	inline Color_t1588175760  get_PlayerColor_31() const { return ___PlayerColor_31; }
	inline Color_t1588175760 * get_address_of_PlayerColor_31() { return &___PlayerColor_31; }
	inline void set_PlayerColor_31(Color_t1588175760  value)
	{
		___PlayerColor_31 = value;
	}

	inline static int32_t get_offset_of_UnitName_32() { return static_cast<int32_t>(offsetof(MyUnit_t2318831984, ___UnitName_32)); }
	inline String_t* get_UnitName_32() const { return ___UnitName_32; }
	inline String_t** get_address_of_UnitName_32() { return &___UnitName_32; }
	inline void set_UnitName_32(String_t* value)
	{
		___UnitName_32 = value;
		Il2CppCodeGenWriteBarrier(&___UnitName_32, value);
	}

	inline static int32_t get_offset_of_Highlighter_33() { return static_cast<int32_t>(offsetof(MyUnit_t2318831984, ___Highlighter_33)); }
	inline Transform_t284553113 * get_Highlighter_33() const { return ___Highlighter_33; }
	inline Transform_t284553113 ** get_address_of_Highlighter_33() { return &___Highlighter_33; }
	inline void set_Highlighter_33(Transform_t284553113 * value)
	{
		___Highlighter_33 = value;
		Il2CppCodeGenWriteBarrier(&___Highlighter_33, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
