﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.Object>
struct Transform_1_t2939232033;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m1659019043_gshared (Transform_1_t2939232033 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m1659019043(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t2939232033 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m1659019043_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.Object>::Invoke(TKey,TValue)
extern "C"  Il2CppObject * Transform_1_Invoke_m2893027961_gshared (Transform_1_t2939232033 * __this, Il2CppObject * ___key0, uint16_t ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m2893027961(__this, ___key0, ___value1, method) ((  Il2CppObject * (*) (Transform_1_t2939232033 *, Il2CppObject *, uint16_t, const MethodInfo*))Transform_1_Invoke_m2893027961_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m708278744_gshared (Transform_1_t2939232033 * __this, Il2CppObject * ___key0, uint16_t ___value1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m708278744(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t2939232033 *, Il2CppObject *, uint16_t, AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m708278744_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppObject * Transform_1_EndInvoke_m3858591857_gshared (Transform_1_t2939232033 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m3858591857(__this, ___result0, method) ((  Il2CppObject * (*) (Transform_1_t2939232033 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m3858591857_gshared)(__this, ___result0, method)
