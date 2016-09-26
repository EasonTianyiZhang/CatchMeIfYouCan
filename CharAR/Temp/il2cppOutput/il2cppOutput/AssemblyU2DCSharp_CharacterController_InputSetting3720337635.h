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

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CharacterController/InputSettings
struct  InputSettings_t3720337635  : public Il2CppObject
{
public:
	// System.Single CharacterController/InputSettings::inputDelay
	float ___inputDelay_0;
	// System.String CharacterController/InputSettings::FORWARD_AXIS
	String_t* ___FORWARD_AXIS_1;
	// System.String CharacterController/InputSettings::TURN_AXIS
	String_t* ___TURN_AXIS_2;
	// System.String CharacterController/InputSettings::JUMP_AXIS
	String_t* ___JUMP_AXIS_3;

public:
	inline static int32_t get_offset_of_inputDelay_0() { return static_cast<int32_t>(offsetof(InputSettings_t3720337635, ___inputDelay_0)); }
	inline float get_inputDelay_0() const { return ___inputDelay_0; }
	inline float* get_address_of_inputDelay_0() { return &___inputDelay_0; }
	inline void set_inputDelay_0(float value)
	{
		___inputDelay_0 = value;
	}

	inline static int32_t get_offset_of_FORWARD_AXIS_1() { return static_cast<int32_t>(offsetof(InputSettings_t3720337635, ___FORWARD_AXIS_1)); }
	inline String_t* get_FORWARD_AXIS_1() const { return ___FORWARD_AXIS_1; }
	inline String_t** get_address_of_FORWARD_AXIS_1() { return &___FORWARD_AXIS_1; }
	inline void set_FORWARD_AXIS_1(String_t* value)
	{
		___FORWARD_AXIS_1 = value;
		Il2CppCodeGenWriteBarrier(&___FORWARD_AXIS_1, value);
	}

	inline static int32_t get_offset_of_TURN_AXIS_2() { return static_cast<int32_t>(offsetof(InputSettings_t3720337635, ___TURN_AXIS_2)); }
	inline String_t* get_TURN_AXIS_2() const { return ___TURN_AXIS_2; }
	inline String_t** get_address_of_TURN_AXIS_2() { return &___TURN_AXIS_2; }
	inline void set_TURN_AXIS_2(String_t* value)
	{
		___TURN_AXIS_2 = value;
		Il2CppCodeGenWriteBarrier(&___TURN_AXIS_2, value);
	}

	inline static int32_t get_offset_of_JUMP_AXIS_3() { return static_cast<int32_t>(offsetof(InputSettings_t3720337635, ___JUMP_AXIS_3)); }
	inline String_t* get_JUMP_AXIS_3() const { return ___JUMP_AXIS_3; }
	inline String_t** get_address_of_JUMP_AXIS_3() { return &___JUMP_AXIS_3; }
	inline void set_JUMP_AXIS_3(String_t* value)
	{
		___JUMP_AXIS_3 = value;
		Il2CppCodeGenWriteBarrier(&___JUMP_AXIS_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
