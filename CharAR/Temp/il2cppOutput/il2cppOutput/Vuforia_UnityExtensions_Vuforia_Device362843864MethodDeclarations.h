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

// Vuforia.Device
struct Device_t362843864;
// Vuforia.IViewerParametersList
struct IViewerParametersList_t2489598605;
// Vuforia.IViewerParameters
struct IViewerParameters_t2145870415;
// Vuforia.ICustomViewerParameters
struct ICustomViewerParameters_t4151526944;
// System.String
struct String_t;
// UnityEngine.Mesh
struct Mesh_t4241756145;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_Device_Mode1305613808.h"
#include "mscorlib_System_String7231557.h"
#include "Vuforia_UnityExtensions_Vuforia_View2165478951.h"
#include "UnityEngine_UnityEngine_Mesh4241756145.h"
#include "UnityEngine_UnityEngine_Matrix4x41651859333.h"
#include "UnityEngine_UnityEngine_ScreenOrientation1849668026.h"
#include "UnityEngine_UnityEngine_Rect4241904616.h"
#include "UnityEngine_UnityEngine_Vector44282066567.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

// Vuforia.Device Vuforia.Device::get_Instance()
extern "C"  Device_t362843864 * Device_get_Instance_m2343065555 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Device/Mode Vuforia.Device::GetMode()
extern "C"  int32_t Device_GetMode_m1241092092 (Device_t362843864 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.Device::IsViewerActive()
extern "C"  bool Device_IsViewerActive_m3328668592 (Device_t362843864 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.IViewerParametersList Vuforia.Device::GetViewerList()
extern "C"  Il2CppObject * Device_GetViewerList_m3049991536 (Device_t362843864 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.Device::SelectViewer(Vuforia.IViewerParameters)
extern "C"  bool Device_SelectViewer_m916225405 (Device_t362843864 * __this, Il2CppObject * ___vp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.IViewerParameters Vuforia.Device::GetSelectedViewer()
extern "C"  Il2CppObject * Device_GetSelectedViewer_m2882297391 (Device_t362843864 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ICustomViewerParameters Vuforia.Device::CreateCustomViewerParameters(System.Single,System.String,System.String)
extern "C"  Il2CppObject * Device_CreateCustomViewerParameters_m1686782613 (Device_t362843864 * __this, float ___version0, String_t* ___name1, String_t* ___manufacturer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.Device::SetPlayModeEyewearDevice()
extern "C"  void Device_SetPlayModeEyewearDevice_m3750436265 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.Device::UnsetDevice()
extern "C"  void Device_UnsetDevice_m157329157 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.Device::DeleteRenderingPrimitives()
extern "C"  void Device_DeleteRenderingPrimitives_m1557867603 (Device_t362843864 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.Device::SetViewerActive(System.Boolean)
extern "C"  void Device_SetViewerActive_m3044970903 (Device_t362843864 * __this, bool ___isActive0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.Device::SetMode(Vuforia.Device/Mode)
extern "C"  bool Device_SetMode_m4114253321 (Device_t362843864 * __this, int32_t ___m0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh Vuforia.Device::GetDistortionMesh(Vuforia.View,UnityEngine.Mesh)
extern "C"  Mesh_t4241756145 * Device_GetDistortionMesh_m3288192388 (Device_t362843864 * __this, int32_t ___viewId0, Mesh_t4241756145 * ___oldMesh1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.Device::GetTextureSize(Vuforia.View,System.Int32&,System.Int32&)
extern "C"  void Device_GetTextureSize_m1718788091 (Device_t362843864 * __this, int32_t ___viewId0, int32_t* ___textureWidth1, int32_t* ___textureHeight2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Vuforia.Device::GetProjectionMatrix(Vuforia.View,System.Single,System.Single,UnityEngine.ScreenOrientation)
extern "C"  Matrix4x4_t1651859333  Device_GetProjectionMatrix_m4066008585 (Device_t362843864 * __this, int32_t ___viewId0, float ___near1, float ___far2, int32_t ___screenOrientation3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Vuforia.Device::GetDistortionTextureViewport(Vuforia.View)
extern "C"  Rect_t4241904616  Device_GetDistortionTextureViewport_m1147422169 (Device_t362843864 * __this, int32_t ___viewId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Vuforia.Device::GetViewport(Vuforia.View)
extern "C"  Rect_t4241904616  Device_GetViewport_m2590846801 (Device_t362843864 * __this, int32_t ___viewId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Vuforia.Device::GetNormalizedViewport(Vuforia.View)
extern "C"  Rect_t4241904616  Device_GetNormalizedViewport_m1713296744 (Device_t362843864 * __this, int32_t ___viewId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Vuforia.Device::GetEyeDisplayAdjustmentMatrix(Vuforia.View)
extern "C"  Matrix4x4_t1651859333  Device_GetEyeDisplayAdjustmentMatrix_m2371059503 (Device_t362843864 * __this, int32_t ___viewId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 Vuforia.Device::GetEffectiveFovRads(Vuforia.View)
extern "C"  Vector4_t4282066567  Device_GetEffectiveFovRads_m520675510 (Device_t362843864 * __this, int32_t ___viewId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Vuforia.Device::GetViewportCentreToEyeAxis(Vuforia.View)
extern "C"  Vector2_t4282066565  Device_GetViewportCentreToEyeAxis_m3283047558 (Device_t362843864 * __this, int32_t ___viewId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.Device::.ctor()
extern "C"  void Device__ctor_m1325009544 (Device_t362843864 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.Device::.cctor()
extern "C"  void Device__cctor_m1938493989 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
