#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t1659122786;
// CharacterController
struct CharacterController_t506635141;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraController
struct  CameraController_t3473169601  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Transform CameraController::target
	Transform_t1659122786 * ___target_2;
	// System.Single CameraController::lookSmooth
	float ___lookSmooth_3;
	// CharacterController CameraController::charController
	CharacterController_t506635141 * ___charController_4;
	// System.Single CameraController::rotateVel
	float ___rotateVel_5;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(CameraController_t3473169601, ___target_2)); }
	inline Transform_t1659122786 * get_target_2() const { return ___target_2; }
	inline Transform_t1659122786 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Transform_t1659122786 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_lookSmooth_3() { return static_cast<int32_t>(offsetof(CameraController_t3473169601, ___lookSmooth_3)); }
	inline float get_lookSmooth_3() const { return ___lookSmooth_3; }
	inline float* get_address_of_lookSmooth_3() { return &___lookSmooth_3; }
	inline void set_lookSmooth_3(float value)
	{
		___lookSmooth_3 = value;
	}

	inline static int32_t get_offset_of_charController_4() { return static_cast<int32_t>(offsetof(CameraController_t3473169601, ___charController_4)); }
	inline CharacterController_t506635141 * get_charController_4() const { return ___charController_4; }
	inline CharacterController_t506635141 ** get_address_of_charController_4() { return &___charController_4; }
	inline void set_charController_4(CharacterController_t506635141 * value)
	{
		___charController_4 = value;
		Il2CppCodeGenWriteBarrier(&___charController_4, value);
	}

	inline static int32_t get_offset_of_rotateVel_5() { return static_cast<int32_t>(offsetof(CameraController_t3473169601, ___rotateVel_5)); }
	inline float get_rotateVel_5() const { return ___rotateVel_5; }
	inline float* get_address_of_rotateVel_5() { return &___rotateVel_5; }
	inline void set_rotateVel_5(float value)
	{
		___rotateVel_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
