﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.GLErrorHandler
struct  GLErrorHandler_t4275497481  : public MonoBehaviour_t667441552
{
public:

public:
};

struct GLErrorHandler_t4275497481_StaticFields
{
public:
	// System.String Vuforia.GLErrorHandler::mErrorText
	String_t* ___mErrorText_3;
	// System.Boolean Vuforia.GLErrorHandler::mErrorOccurred
	bool ___mErrorOccurred_4;

public:
	inline static int32_t get_offset_of_mErrorText_3() { return static_cast<int32_t>(offsetof(GLErrorHandler_t4275497481_StaticFields, ___mErrorText_3)); }
	inline String_t* get_mErrorText_3() const { return ___mErrorText_3; }
	inline String_t** get_address_of_mErrorText_3() { return &___mErrorText_3; }
	inline void set_mErrorText_3(String_t* value)
	{
		___mErrorText_3 = value;
		Il2CppCodeGenWriteBarrier(&___mErrorText_3, value);
	}

	inline static int32_t get_offset_of_mErrorOccurred_4() { return static_cast<int32_t>(offsetof(GLErrorHandler_t4275497481_StaticFields, ___mErrorOccurred_4)); }
	inline bool get_mErrorOccurred_4() const { return ___mErrorOccurred_4; }
	inline bool* get_address_of_mErrorOccurred_4() { return &___mErrorOccurred_4; }
	inline void set_mErrorOccurred_4(bool value)
	{
		___mErrorOccurred_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
