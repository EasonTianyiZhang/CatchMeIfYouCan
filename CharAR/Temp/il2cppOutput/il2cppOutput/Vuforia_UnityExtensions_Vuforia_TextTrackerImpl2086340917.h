﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.WordList
struct WordList_t2634783818;

#include "Vuforia_UnityExtensions_Vuforia_TextTracker3721656949.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TextTrackerImpl
struct  TextTrackerImpl_t2086340917  : public TextTracker_t3721656949
{
public:
	// Vuforia.WordList Vuforia.TextTrackerImpl::mWordList
	WordList_t2634783818 * ___mWordList_1;

public:
	inline static int32_t get_offset_of_mWordList_1() { return static_cast<int32_t>(offsetof(TextTrackerImpl_t2086340917, ___mWordList_1)); }
	inline WordList_t2634783818 * get_mWordList_1() const { return ___mWordList_1; }
	inline WordList_t2634783818 ** get_address_of_mWordList_1() { return &___mWordList_1; }
	inline void set_mWordList_1(WordList_t2634783818 * value)
	{
		___mWordList_1 = value;
		Il2CppCodeGenWriteBarrier(&___mWordList_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
