#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Hexagon
struct Hexagon_t2481114624;

#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Hexagon/<GetNeighbours>c__AnonStorey10
struct  U3CGetNeighboursU3Ec__AnonStorey10_t3788702456  : public Il2CppObject
{
public:
	// UnityEngine.Vector3 Hexagon/<GetNeighbours>c__AnonStorey10::direction
	Vector3_t3525329789  ___direction_0;
	// Hexagon Hexagon/<GetNeighbours>c__AnonStorey10::<>f__this
	Hexagon_t2481114624 * ___U3CU3Ef__this_1;

public:
	inline static int32_t get_offset_of_direction_0() { return static_cast<int32_t>(offsetof(U3CGetNeighboursU3Ec__AnonStorey10_t3788702456, ___direction_0)); }
	inline Vector3_t3525329789  get_direction_0() const { return ___direction_0; }
	inline Vector3_t3525329789 * get_address_of_direction_0() { return &___direction_0; }
	inline void set_direction_0(Vector3_t3525329789  value)
	{
		___direction_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_1() { return static_cast<int32_t>(offsetof(U3CGetNeighboursU3Ec__AnonStorey10_t3788702456, ___U3CU3Ef__this_1)); }
	inline Hexagon_t2481114624 * get_U3CU3Ef__this_1() const { return ___U3CU3Ef__this_1; }
	inline Hexagon_t2481114624 ** get_address_of_U3CU3Ef__this_1() { return &___U3CU3Ef__this_1; }
	inline void set_U3CU3Ef__this_1(Hexagon_t2481114624 * value)
	{
		___U3CU3Ef__this_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
