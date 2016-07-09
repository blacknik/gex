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

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CustomObstacleGenerator/<SnapToGrid>c__AnonStoreyD
struct  U3CSnapToGridU3Ec__AnonStoreyD_t3565140  : public Il2CppObject
{
public:
	// UnityEngine.Transform CustomObstacleGenerator/<SnapToGrid>c__AnonStoreyD::obstacle
	Transform_t284553113 * ___obstacle_0;

public:
	inline static int32_t get_offset_of_obstacle_0() { return static_cast<int32_t>(offsetof(U3CSnapToGridU3Ec__AnonStoreyD_t3565140, ___obstacle_0)); }
	inline Transform_t284553113 * get_obstacle_0() const { return ___obstacle_0; }
	inline Transform_t284553113 ** get_address_of_obstacle_0() { return &___obstacle_0; }
	inline void set_obstacle_0(Transform_t284553113 * value)
	{
		___obstacle_0 = value;
		Il2CppCodeGenWriteBarrier(&___obstacle_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
