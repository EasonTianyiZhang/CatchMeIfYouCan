#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CharacterController/PhysSettings
struct  PhysSettings_t2884890559  : public Il2CppObject
{
public:
	// System.Single CharacterController/PhysSettings::downAccel
	float ___downAccel_0;

public:
	inline static int32_t get_offset_of_downAccel_0() { return static_cast<int32_t>(offsetof(PhysSettings_t2884890559, ___downAccel_0)); }
	inline float get_downAccel_0() const { return ___downAccel_0; }
	inline float* get_address_of_downAccel_0() { return &___downAccel_0; }
	inline void set_downAccel_0(float value)
	{
		___downAccel_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
