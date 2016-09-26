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

// Vuforia.ImageTargetImpl
struct ImageTargetImpl_t1650084406;
// System.String
struct String_t;
// Vuforia.DataSet
struct DataSet_t2095838082;
// Vuforia.VirtualButton
struct VirtualButton_t704206407;
// System.Collections.Generic.IEnumerable`1<Vuforia.VirtualButton>
struct IEnumerable_1_t4005119364;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "Vuforia_UnityExtensions_Vuforia_ImageTargetType1650423632.h"
#include "Vuforia_UnityExtensions_Vuforia_DataSet2095838082.h"
#include "Vuforia_UnityExtensions_Vuforia_RectangleData2265684451.h"
#include "Vuforia_UnityExtensions_Vuforia_VirtualButton704206407.h"

// System.Void Vuforia.ImageTargetImpl::.ctor(System.String,System.Int32,Vuforia.ImageTargetType,Vuforia.DataSet)
extern "C"  void ImageTargetImpl__ctor_m3195938883 (ImageTargetImpl_t1650084406 * __this, String_t* ___name0, int32_t ___id1, int32_t ___imageTargetType2, DataSet_t2095838082 * ___dataSet3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetType Vuforia.ImageTargetImpl::get_ImageTargetType()
extern "C"  int32_t ImageTargetImpl_get_ImageTargetType_m4079278064 (ImageTargetImpl_t1650084406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButton Vuforia.ImageTargetImpl::CreateVirtualButton(System.String,Vuforia.RectangleData)
extern "C"  VirtualButton_t704206407 * ImageTargetImpl_CreateVirtualButton_m1483301316 (ImageTargetImpl_t1650084406 * __this, String_t* ___name0, RectangleData_t2265684451  ___area1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButton Vuforia.ImageTargetImpl::GetVirtualButtonByName(System.String)
extern "C"  VirtualButton_t704206407 * ImageTargetImpl_GetVirtualButtonByName_m2432020947 (ImageTargetImpl_t1650084406 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.VirtualButton> Vuforia.ImageTargetImpl::GetVirtualButtons()
extern "C"  Il2CppObject* ImageTargetImpl_GetVirtualButtons_m99058691 (ImageTargetImpl_t1650084406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ImageTargetImpl::DestroyVirtualButton(Vuforia.VirtualButton)
extern "C"  bool ImageTargetImpl_DestroyVirtualButton_m879157800 (ImageTargetImpl_t1650084406 * __this, VirtualButton_t704206407 * ___vb0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButton Vuforia.ImageTargetImpl::CreateNewVirtualButtonInNative(System.String,Vuforia.RectangleData)
extern "C"  VirtualButton_t704206407 * ImageTargetImpl_CreateNewVirtualButtonInNative_m2906684774 (ImageTargetImpl_t1650084406 * __this, String_t* ___name0, RectangleData_t2265684451  ___rectangleData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ImageTargetImpl::UnregisterVirtualButtonInNative(Vuforia.VirtualButton)
extern "C"  bool ImageTargetImpl_UnregisterVirtualButtonInNative_m3960881976 (ImageTargetImpl_t1650084406 * __this, VirtualButton_t704206407 * ___vb0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetImpl::CreateVirtualButtonsFromNative()
extern "C"  void ImageTargetImpl_CreateVirtualButtonsFromNative_m3483785371 (ImageTargetImpl_t1650084406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
