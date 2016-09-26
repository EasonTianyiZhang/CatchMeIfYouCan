#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// CameraController
struct CameraController_t3473169601;
// UnityEngine.Transform
struct Transform_t1659122786;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

// System.Void CameraController::.ctor()
extern "C"  void CameraController__ctor_m1305907962 (CameraController_t3473169601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraController::Start()
extern "C"  void CameraController_Start_m253045754 (CameraController_t3473169601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraController::SetCameraTarget(UnityEngine.Transform)
extern "C"  void CameraController_SetCameraTarget_m3684083021 (CameraController_t3473169601 * __this, Transform_t1659122786 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraController::LateUpdate()
extern "C"  void CameraController_LateUpdate_m786793369 (CameraController_t3473169601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraController::rotateTarget()
extern "C"  void CameraController_rotateTarget_m4274451894 (CameraController_t3473169601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single CameraController::SignedAngleBetween(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float CameraController_SignedAngleBetween_m1830871640 (CameraController_t3473169601 * __this, Vector3_t4282066566  ___a0, Vector3_t4282066566  ___b1, Vector3_t4282066566  ___n2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
