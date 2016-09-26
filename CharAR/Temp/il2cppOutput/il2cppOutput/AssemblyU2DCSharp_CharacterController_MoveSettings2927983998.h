#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object4170816371.h"
#include "UnityEngine_UnityEngine_LayerMask3236759763.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CharacterController/MoveSettings
struct  MoveSettings_t2927983998  : public Il2CppObject
{
public:
	// System.Single CharacterController/MoveSettings::forwardVel
	float ___forwardVel_0;
	// System.Single CharacterController/MoveSettings::turnVel
	float ___turnVel_1;
	// System.Single CharacterController/MoveSettings::jumpVel
	float ___jumpVel_2;
	// System.Single CharacterController/MoveSettings::distToGround
	float ___distToGround_3;
	// UnityEngine.LayerMask CharacterController/MoveSettings::ground
	LayerMask_t3236759763  ___ground_4;

public:
	inline static int32_t get_offset_of_forwardVel_0() { return static_cast<int32_t>(offsetof(MoveSettings_t2927983998, ___forwardVel_0)); }
	inline float get_forwardVel_0() const { return ___forwardVel_0; }
	inline float* get_address_of_forwardVel_0() { return &___forwardVel_0; }
	inline void set_forwardVel_0(float value)
	{
		___forwardVel_0 = value;
	}

	inline static int32_t get_offset_of_turnVel_1() { return static_cast<int32_t>(offsetof(MoveSettings_t2927983998, ___turnVel_1)); }
	inline float get_turnVel_1() const { return ___turnVel_1; }
	inline float* get_address_of_turnVel_1() { return &___turnVel_1; }
	inline void set_turnVel_1(float value)
	{
		___turnVel_1 = value;
	}

	inline static int32_t get_offset_of_jumpVel_2() { return static_cast<int32_t>(offsetof(MoveSettings_t2927983998, ___jumpVel_2)); }
	inline float get_jumpVel_2() const { return ___jumpVel_2; }
	inline float* get_address_of_jumpVel_2() { return &___jumpVel_2; }
	inline void set_jumpVel_2(float value)
	{
		___jumpVel_2 = value;
	}

	inline static int32_t get_offset_of_distToGround_3() { return static_cast<int32_t>(offsetof(MoveSettings_t2927983998, ___distToGround_3)); }
	inline float get_distToGround_3() const { return ___distToGround_3; }
	inline float* get_address_of_distToGround_3() { return &___distToGround_3; }
	inline void set_distToGround_3(float value)
	{
		___distToGround_3 = value;
	}

	inline static int32_t get_offset_of_ground_4() { return static_cast<int32_t>(offsetof(MoveSettings_t2927983998, ___ground_4)); }
	inline LayerMask_t3236759763  get_ground_4() const { return ___ground_4; }
	inline LayerMask_t3236759763 * get_address_of_ground_4() { return &___ground_4; }
	inline void set_ground_4(LayerMask_t3236759763  value)
	{
		___ground_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
