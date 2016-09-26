﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action
struct Action_t3771233898;
// System.Collections.Generic.Dictionary`2<UnityEngine.Camera,Vuforia.VideoBackgroundAbstractBehaviour>
struct Dictionary_2_t1958451778;
// Vuforia.VideoBackgroundManagerAbstractBehaviour
struct VideoBackgroundManagerAbstractBehaviour_t3710195425;
// Vuforia.BackgroundPlaneAbstractBehaviour
struct BackgroundPlaneAbstractBehaviour_t2608219151;

#include "mscorlib_System_Object4170816371.h"
#include "Vuforia_UnityExtensions_Vuforia_CameraDevice_Camera134001414.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vi2868837278.h"
#include "UnityEngine_UnityEngine_Rect4241904616.h"
#include "UnityEngine_UnityEngine_ScreenOrientation1849668026.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.BaseCameraConfiguration
struct  BaseCameraConfiguration_t2243951210  : public Il2CppObject
{
public:
	// Vuforia.CameraDevice/CameraDeviceMode Vuforia.BaseCameraConfiguration::mCameraDeviceMode
	int32_t ___mCameraDeviceMode_0;
	// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.BaseCameraConfiguration::mLastVideoBackGroundMirroredFromSDK
	int32_t ___mLastVideoBackGroundMirroredFromSDK_1;
	// System.Action Vuforia.BaseCameraConfiguration::mOnVideoBackgroundConfigChanged
	Action_t3771233898 * ___mOnVideoBackgroundConfigChanged_2;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Camera,Vuforia.VideoBackgroundAbstractBehaviour> Vuforia.BaseCameraConfiguration::mVideoBackgroundBehaviours
	Dictionary_2_t1958451778 * ___mVideoBackgroundBehaviours_3;
	// UnityEngine.Rect Vuforia.BaseCameraConfiguration::mVideoBackgroundViewportRect
	Rect_t4241904616  ___mVideoBackgroundViewportRect_4;
	// System.Boolean Vuforia.BaseCameraConfiguration::mRenderVideoBackground
	bool ___mRenderVideoBackground_5;
	// UnityEngine.ScreenOrientation Vuforia.BaseCameraConfiguration::mProjectionOrientation
	int32_t ___mProjectionOrientation_6;
	// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.BaseCameraConfiguration::mInitialReflection
	int32_t ___mInitialReflection_7;
	// Vuforia.VideoBackgroundManagerAbstractBehaviour Vuforia.BaseCameraConfiguration::mVideoBgMgr
	VideoBackgroundManagerAbstractBehaviour_t3710195425 * ___mVideoBgMgr_8;
	// Vuforia.BackgroundPlaneAbstractBehaviour Vuforia.BaseCameraConfiguration::mBackgroundPlaneBehaviour
	BackgroundPlaneAbstractBehaviour_t2608219151 * ___mBackgroundPlaneBehaviour_9;
	// System.Boolean Vuforia.BaseCameraConfiguration::mCameraParameterChanged
	bool ___mCameraParameterChanged_10;

public:
	inline static int32_t get_offset_of_mCameraDeviceMode_0() { return static_cast<int32_t>(offsetof(BaseCameraConfiguration_t2243951210, ___mCameraDeviceMode_0)); }
	inline int32_t get_mCameraDeviceMode_0() const { return ___mCameraDeviceMode_0; }
	inline int32_t* get_address_of_mCameraDeviceMode_0() { return &___mCameraDeviceMode_0; }
	inline void set_mCameraDeviceMode_0(int32_t value)
	{
		___mCameraDeviceMode_0 = value;
	}

	inline static int32_t get_offset_of_mLastVideoBackGroundMirroredFromSDK_1() { return static_cast<int32_t>(offsetof(BaseCameraConfiguration_t2243951210, ___mLastVideoBackGroundMirroredFromSDK_1)); }
	inline int32_t get_mLastVideoBackGroundMirroredFromSDK_1() const { return ___mLastVideoBackGroundMirroredFromSDK_1; }
	inline int32_t* get_address_of_mLastVideoBackGroundMirroredFromSDK_1() { return &___mLastVideoBackGroundMirroredFromSDK_1; }
	inline void set_mLastVideoBackGroundMirroredFromSDK_1(int32_t value)
	{
		___mLastVideoBackGroundMirroredFromSDK_1 = value;
	}

	inline static int32_t get_offset_of_mOnVideoBackgroundConfigChanged_2() { return static_cast<int32_t>(offsetof(BaseCameraConfiguration_t2243951210, ___mOnVideoBackgroundConfigChanged_2)); }
	inline Action_t3771233898 * get_mOnVideoBackgroundConfigChanged_2() const { return ___mOnVideoBackgroundConfigChanged_2; }
	inline Action_t3771233898 ** get_address_of_mOnVideoBackgroundConfigChanged_2() { return &___mOnVideoBackgroundConfigChanged_2; }
	inline void set_mOnVideoBackgroundConfigChanged_2(Action_t3771233898 * value)
	{
		___mOnVideoBackgroundConfigChanged_2 = value;
		Il2CppCodeGenWriteBarrier(&___mOnVideoBackgroundConfigChanged_2, value);
	}

	inline static int32_t get_offset_of_mVideoBackgroundBehaviours_3() { return static_cast<int32_t>(offsetof(BaseCameraConfiguration_t2243951210, ___mVideoBackgroundBehaviours_3)); }
	inline Dictionary_2_t1958451778 * get_mVideoBackgroundBehaviours_3() const { return ___mVideoBackgroundBehaviours_3; }
	inline Dictionary_2_t1958451778 ** get_address_of_mVideoBackgroundBehaviours_3() { return &___mVideoBackgroundBehaviours_3; }
	inline void set_mVideoBackgroundBehaviours_3(Dictionary_2_t1958451778 * value)
	{
		___mVideoBackgroundBehaviours_3 = value;
		Il2CppCodeGenWriteBarrier(&___mVideoBackgroundBehaviours_3, value);
	}

	inline static int32_t get_offset_of_mVideoBackgroundViewportRect_4() { return static_cast<int32_t>(offsetof(BaseCameraConfiguration_t2243951210, ___mVideoBackgroundViewportRect_4)); }
	inline Rect_t4241904616  get_mVideoBackgroundViewportRect_4() const { return ___mVideoBackgroundViewportRect_4; }
	inline Rect_t4241904616 * get_address_of_mVideoBackgroundViewportRect_4() { return &___mVideoBackgroundViewportRect_4; }
	inline void set_mVideoBackgroundViewportRect_4(Rect_t4241904616  value)
	{
		___mVideoBackgroundViewportRect_4 = value;
	}

	inline static int32_t get_offset_of_mRenderVideoBackground_5() { return static_cast<int32_t>(offsetof(BaseCameraConfiguration_t2243951210, ___mRenderVideoBackground_5)); }
	inline bool get_mRenderVideoBackground_5() const { return ___mRenderVideoBackground_5; }
	inline bool* get_address_of_mRenderVideoBackground_5() { return &___mRenderVideoBackground_5; }
	inline void set_mRenderVideoBackground_5(bool value)
	{
		___mRenderVideoBackground_5 = value;
	}

	inline static int32_t get_offset_of_mProjectionOrientation_6() { return static_cast<int32_t>(offsetof(BaseCameraConfiguration_t2243951210, ___mProjectionOrientation_6)); }
	inline int32_t get_mProjectionOrientation_6() const { return ___mProjectionOrientation_6; }
	inline int32_t* get_address_of_mProjectionOrientation_6() { return &___mProjectionOrientation_6; }
	inline void set_mProjectionOrientation_6(int32_t value)
	{
		___mProjectionOrientation_6 = value;
	}

	inline static int32_t get_offset_of_mInitialReflection_7() { return static_cast<int32_t>(offsetof(BaseCameraConfiguration_t2243951210, ___mInitialReflection_7)); }
	inline int32_t get_mInitialReflection_7() const { return ___mInitialReflection_7; }
	inline int32_t* get_address_of_mInitialReflection_7() { return &___mInitialReflection_7; }
	inline void set_mInitialReflection_7(int32_t value)
	{
		___mInitialReflection_7 = value;
	}

	inline static int32_t get_offset_of_mVideoBgMgr_8() { return static_cast<int32_t>(offsetof(BaseCameraConfiguration_t2243951210, ___mVideoBgMgr_8)); }
	inline VideoBackgroundManagerAbstractBehaviour_t3710195425 * get_mVideoBgMgr_8() const { return ___mVideoBgMgr_8; }
	inline VideoBackgroundManagerAbstractBehaviour_t3710195425 ** get_address_of_mVideoBgMgr_8() { return &___mVideoBgMgr_8; }
	inline void set_mVideoBgMgr_8(VideoBackgroundManagerAbstractBehaviour_t3710195425 * value)
	{
		___mVideoBgMgr_8 = value;
		Il2CppCodeGenWriteBarrier(&___mVideoBgMgr_8, value);
	}

	inline static int32_t get_offset_of_mBackgroundPlaneBehaviour_9() { return static_cast<int32_t>(offsetof(BaseCameraConfiguration_t2243951210, ___mBackgroundPlaneBehaviour_9)); }
	inline BackgroundPlaneAbstractBehaviour_t2608219151 * get_mBackgroundPlaneBehaviour_9() const { return ___mBackgroundPlaneBehaviour_9; }
	inline BackgroundPlaneAbstractBehaviour_t2608219151 ** get_address_of_mBackgroundPlaneBehaviour_9() { return &___mBackgroundPlaneBehaviour_9; }
	inline void set_mBackgroundPlaneBehaviour_9(BackgroundPlaneAbstractBehaviour_t2608219151 * value)
	{
		___mBackgroundPlaneBehaviour_9 = value;
		Il2CppCodeGenWriteBarrier(&___mBackgroundPlaneBehaviour_9, value);
	}

	inline static int32_t get_offset_of_mCameraParameterChanged_10() { return static_cast<int32_t>(offsetof(BaseCameraConfiguration_t2243951210, ___mCameraParameterChanged_10)); }
	inline bool get_mCameraParameterChanged_10() const { return ___mCameraParameterChanged_10; }
	inline bool* get_address_of_mCameraParameterChanged_10() { return &___mCameraParameterChanged_10; }
	inline void set_mCameraParameterChanged_10(bool value)
	{
		___mCameraParameterChanged_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
