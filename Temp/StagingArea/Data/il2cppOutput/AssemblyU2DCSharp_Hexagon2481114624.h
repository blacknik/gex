#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Vector3[]
struct Vector3U5BU5D_t3227571696;

#include "AssemblyU2DCSharp_Cell2096514.h"
#include "AssemblyU2DCSharp_HexGridType3627012027.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Hexagon
struct  Hexagon_t2481114624  : public Cell_t2096514
{
public:
	// HexGridType Hexagon::HexGridType
	int32_t ___HexGridType_8;

public:
	inline static int32_t get_offset_of_HexGridType_8() { return static_cast<int32_t>(offsetof(Hexagon_t2481114624, ___HexGridType_8)); }
	inline int32_t get_HexGridType_8() const { return ___HexGridType_8; }
	inline int32_t* get_address_of_HexGridType_8() { return &___HexGridType_8; }
	inline void set_HexGridType_8(int32_t value)
	{
		___HexGridType_8 = value;
	}
};

struct Hexagon_t2481114624_StaticFields
{
public:
	// UnityEngine.Vector3[] Hexagon::_directions
	Vector3U5BU5D_t3227571696* ____directions_9;

public:
	inline static int32_t get_offset_of__directions_9() { return static_cast<int32_t>(offsetof(Hexagon_t2481114624_StaticFields, ____directions_9)); }
	inline Vector3U5BU5D_t3227571696* get__directions_9() const { return ____directions_9; }
	inline Vector3U5BU5D_t3227571696** get_address_of__directions_9() { return &____directions_9; }
	inline void set__directions_9(Vector3U5BU5D_t3227571696* value)
	{
		____directions_9 = value;
		Il2CppCodeGenWriteBarrier(&____directions_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
