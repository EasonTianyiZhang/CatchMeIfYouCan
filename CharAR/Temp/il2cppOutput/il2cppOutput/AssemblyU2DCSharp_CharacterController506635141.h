#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// CharacterController/MoveSettings
struct MoveSettings_t2927983998;
// CharacterController/PhysSettings
struct PhysSettings_t2884890559;
// CharacterController/InputSettings
struct InputSettings_t3720337635;
// UnityEngine.Rigidbody
struct Rigidbody_t3346577219;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CharacterController
struct  CharacterController_t506635141  : public MonoBehaviour_t667441552
{
public:
	// CharacterController/MoveSettings CharacterController::moveSetting
	MoveSettings_t2927983998 * ___moveSetting_2;
	// CharacterController/PhysSettings CharacterController::physSetting
	PhysSettings_t2884890559 * ___physSetting_3;
	// CharacterController/InputSettings CharacterController::inputSetting
	InputSettings_t3720337635 * ___inputSetting_4;
	// UnityEngine.Vector3 CharacterController::velocity
	Vector3_t4282066566  ___velocity_5;
	// UnityEngine.Quaternion CharacterController::targetRotation
	Quaternion_t1553702882  ___targetRotation_6;
	// UnityEngine.Rigidbody CharacterController::rBody
	Rigidbody_t3346577219 * ___rBody_7;
	// System.Single CharacterController::forwardInput
	float ___forwardInput_8;
	// System.Single CharacterController::turnInput
	float ___turnInput_9;
	// System.Boolean CharacterController::jumpInput
	bool ___jumpInput_10;

public:
	inline static int32_t get_offset_of_moveSetting_2() { return static_cast<int32_t>(offsetof(CharacterController_t506635141, ___moveSetting_2)); }
	inline MoveSettings_t2927983998 * get_moveSetting_2() const { return ___moveSetting_2; }
	inline MoveSettings_t2927983998 ** get_address_of_moveSetting_2() { return &___moveSetting_2; }
	inline void set_moveSetting_2(MoveSettings_t2927983998 * value)
	{
		___moveSetting_2 = value;
		Il2CppCodeGenWriteBarrier(&___moveSetting_2, value);
	}

	inline static int32_t get_offset_of_physSetting_3() { return static_cast<int32_t>(offsetof(CharacterController_t506635141, ___physSetting_3)); }
	inline PhysSettings_t2884890559 * get_physSetting_3() const { return ___physSetting_3; }
	inline PhysSettings_t2884890559 ** get_address_of_physSetting_3() { return &___physSetting_3; }
	inline void set_physSetting_3(PhysSettings_t2884890559 * value)
	{
		___physSetting_3 = value;
		Il2CppCodeGenWriteBarrier(&___physSetting_3, value);
	}

	inline static int32_t get_offset_of_inputSetting_4() { return static_cast<int32_t>(offsetof(CharacterController_t506635141, ___inputSetting_4)); }
	inline InputSettings_t3720337635 * get_inputSetting_4() const { return ___inputSetting_4; }
	inline InputSettings_t3720337635 ** get_address_of_inputSetting_4() { return &___inputSetting_4; }
	inline void set_inputSetting_4(InputSettings_t3720337635 * value)
	{
		___inputSetting_4 = value;
		Il2CppCodeGenWriteBarrier(&___inputSetting_4, value);
	}

	inline static int32_t get_offset_of_velocity_5() { return static_cast<int32_t>(offsetof(CharacterController_t506635141, ___velocity_5)); }
	inline Vector3_t4282066566  get_velocity_5() const { return ___velocity_5; }
	inline Vector3_t4282066566 * get_address_of_velocity_5() { return &___velocity_5; }
	inline void set_velocity_5(Vector3_t4282066566  value)
	{
		___velocity_5 = value;
	}

	inline static int32_t get_offset_of_targetRotation_6() { return static_cast<int32_t>(offsetof(CharacterController_t506635141, ___targetRotation_6)); }
	inline Quaternion_t1553702882  get_targetRotation_6() const { return ___targetRotation_6; }
	inline Quaternion_t1553702882 * get_address_of_targetRotation_6() { return &___targetRotation_6; }
	inline void set_targetRotation_6(Quaternion_t1553702882  value)
	{
		___targetRotation_6 = value;
	}

	inline static int32_t get_offset_of_rBody_7() { return static_cast<int32_t>(offsetof(CharacterController_t506635141, ___rBody_7)); }
	inline Rigidbody_t3346577219 * get_rBody_7() const { return ___rBody_7; }
	inline Rigidbody_t3346577219 ** get_address_of_rBody_7() { return &___rBody_7; }
	inline void set_rBody_7(Rigidbody_t3346577219 * value)
	{
		___rBody_7 = value;
		Il2CppCodeGenWriteBarrier(&___rBody_7, value);
	}

	inline static int32_t get_offset_of_forwardInput_8() { return static_cast<int32_t>(offsetof(CharacterController_t506635141, ___forwardInput_8)); }
	inline float get_forwardInput_8() const { return ___forwardInput_8; }
	inline float* get_address_of_forwardInput_8() { return &___forwardInput_8; }
	inline void set_forwardInput_8(float value)
	{
		___forwardInput_8 = value;
	}

	inline static int32_t get_offset_of_turnInput_9() { return static_cast<int32_t>(offsetof(CharacterController_t506635141, ___turnInput_9)); }
	inline float get_turnInput_9() const { return ___turnInput_9; }
	inline float* get_address_of_turnInput_9() { return &___turnInput_9; }
	inline void set_turnInput_9(float value)
	{
		___turnInput_9 = value;
	}

	inline static int32_t get_offset_of_jumpInput_10() { return static_cast<int32_t>(offsetof(CharacterController_t506635141, ___jumpInput_10)); }
	inline bool get_jumpInput_10() const { return ___jumpInput_10; }
	inline bool* get_address_of_jumpInput_10() { return &___jumpInput_10; }
	inline void set_jumpInput_10(bool value)
	{
		___jumpInput_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
