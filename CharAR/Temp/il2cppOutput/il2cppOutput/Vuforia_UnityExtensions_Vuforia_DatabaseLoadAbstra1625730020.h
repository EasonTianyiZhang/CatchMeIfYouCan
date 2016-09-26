﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String[]
struct StringU5BU5D_t4054002952;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1375417109;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DatabaseLoadAbstractBehaviour
struct  DatabaseLoadAbstractBehaviour_t1625730020  : public MonoBehaviour_t667441552
{
public:
	// System.Boolean Vuforia.DatabaseLoadAbstractBehaviour::mDatasetsLoaded
	bool ___mDatasetsLoaded_2;
	// System.String[] Vuforia.DatabaseLoadAbstractBehaviour::mDataSetsToLoad
	StringU5BU5D_t4054002952* ___mDataSetsToLoad_3;
	// System.String[] Vuforia.DatabaseLoadAbstractBehaviour::mDataSetsToActivate
	StringU5BU5D_t4054002952* ___mDataSetsToActivate_4;
	// System.Collections.Generic.List`1<System.String> Vuforia.DatabaseLoadAbstractBehaviour::mExternalDatasetRoots
	List_1_t1375417109 * ___mExternalDatasetRoots_5;

public:
	inline static int32_t get_offset_of_mDatasetsLoaded_2() { return static_cast<int32_t>(offsetof(DatabaseLoadAbstractBehaviour_t1625730020, ___mDatasetsLoaded_2)); }
	inline bool get_mDatasetsLoaded_2() const { return ___mDatasetsLoaded_2; }
	inline bool* get_address_of_mDatasetsLoaded_2() { return &___mDatasetsLoaded_2; }
	inline void set_mDatasetsLoaded_2(bool value)
	{
		___mDatasetsLoaded_2 = value;
	}

	inline static int32_t get_offset_of_mDataSetsToLoad_3() { return static_cast<int32_t>(offsetof(DatabaseLoadAbstractBehaviour_t1625730020, ___mDataSetsToLoad_3)); }
	inline StringU5BU5D_t4054002952* get_mDataSetsToLoad_3() const { return ___mDataSetsToLoad_3; }
	inline StringU5BU5D_t4054002952** get_address_of_mDataSetsToLoad_3() { return &___mDataSetsToLoad_3; }
	inline void set_mDataSetsToLoad_3(StringU5BU5D_t4054002952* value)
	{
		___mDataSetsToLoad_3 = value;
		Il2CppCodeGenWriteBarrier(&___mDataSetsToLoad_3, value);
	}

	inline static int32_t get_offset_of_mDataSetsToActivate_4() { return static_cast<int32_t>(offsetof(DatabaseLoadAbstractBehaviour_t1625730020, ___mDataSetsToActivate_4)); }
	inline StringU5BU5D_t4054002952* get_mDataSetsToActivate_4() const { return ___mDataSetsToActivate_4; }
	inline StringU5BU5D_t4054002952** get_address_of_mDataSetsToActivate_4() { return &___mDataSetsToActivate_4; }
	inline void set_mDataSetsToActivate_4(StringU5BU5D_t4054002952* value)
	{
		___mDataSetsToActivate_4 = value;
		Il2CppCodeGenWriteBarrier(&___mDataSetsToActivate_4, value);
	}

	inline static int32_t get_offset_of_mExternalDatasetRoots_5() { return static_cast<int32_t>(offsetof(DatabaseLoadAbstractBehaviour_t1625730020, ___mExternalDatasetRoots_5)); }
	inline List_1_t1375417109 * get_mExternalDatasetRoots_5() const { return ___mExternalDatasetRoots_5; }
	inline List_1_t1375417109 ** get_address_of_mExternalDatasetRoots_5() { return &___mExternalDatasetRoots_5; }
	inline void set_mExternalDatasetRoots_5(List_1_t1375417109 * value)
	{
		___mExternalDatasetRoots_5 = value;
		Il2CppCodeGenWriteBarrier(&___mExternalDatasetRoots_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
