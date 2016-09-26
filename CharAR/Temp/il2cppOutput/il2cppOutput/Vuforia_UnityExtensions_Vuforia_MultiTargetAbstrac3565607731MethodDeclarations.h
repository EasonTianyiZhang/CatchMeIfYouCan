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

// Vuforia.MultiTargetAbstractBehaviour
struct MultiTargetAbstractBehaviour_t3565607731;
// Vuforia.MultiTarget
struct MultiTarget_t1085092180;
// Vuforia.ReconstructionFromTarget
struct ReconstructionFromTarget_t41970945;
// Vuforia.Trackable
struct Trackable_t3781061455;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

// Vuforia.MultiTarget Vuforia.MultiTargetAbstractBehaviour::get_MultiTarget()
extern "C"  Il2CppObject * MultiTargetAbstractBehaviour_get_MultiTarget_m3337845687 (MultiTargetAbstractBehaviour_t3565607731 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MultiTargetAbstractBehaviour::InternalUnregisterTrackable()
extern "C"  void MultiTargetAbstractBehaviour_InternalUnregisterTrackable_m1673411127 (MultiTargetAbstractBehaviour_t3565607731 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MultiTargetAbstractBehaviour::CalculateDefaultOccluderBounds(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C"  void MultiTargetAbstractBehaviour_CalculateDefaultOccluderBounds_m3119444902 (MultiTargetAbstractBehaviour_t3565607731 * __this, Vector3_t4282066566 * ___boundsMin0, Vector3_t4282066566 * ___boundsMax1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MultiTargetAbstractBehaviour::ProtectedSetAsSmartTerrainInitializationTarget(Vuforia.ReconstructionFromTarget)
extern "C"  void MultiTargetAbstractBehaviour_ProtectedSetAsSmartTerrainInitializationTarget_m2877477487 (MultiTargetAbstractBehaviour_t3565607731 * __this, Il2CppObject * ___reconstructionFromTarget0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.MultiTargetAbstractBehaviour::InitializeTarget(Vuforia.Trackable,System.Boolean)
extern "C"  bool MultiTargetAbstractBehaviour_InitializeTarget_m2790618830 (MultiTargetAbstractBehaviour_t3565607731 * __this, Il2CppObject * ___trackable0, bool ___applyTargetScaleToBehaviour1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MultiTargetAbstractBehaviour::.ctor()
extern "C"  void MultiTargetAbstractBehaviour__ctor_m3153298765 (MultiTargetAbstractBehaviour_t3565607731 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
