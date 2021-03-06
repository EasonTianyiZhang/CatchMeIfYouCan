﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// UnityStandardAssets.CrossPlatformInput.AxisTouchButton
struct AxisTouchButton_t282084514;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
struct VirtualAxis_t1663698965;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton
struct VirtualButton_t1113062054;

#include "mscorlib_System_Array1146569071.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_C282084514.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_1663698965.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_1113062054.h"

#pragma once
// UnityStandardAssets.CrossPlatformInput.AxisTouchButton[]
struct AxisTouchButtonU5BU5D_t3956095639  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) AxisTouchButton_t282084514 * m_Items[1];

public:
	inline AxisTouchButton_t282084514 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline AxisTouchButton_t282084514 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, AxisTouchButton_t282084514 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis[]
struct VirtualAxisU5BU5D_t2660512760  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) VirtualAxis_t1663698965 * m_Items[1];

public:
	inline VirtualAxis_t1663698965 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline VirtualAxis_t1663698965 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, VirtualAxis_t1663698965 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton[]
struct VirtualButtonU5BU5D_t1543272451  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) VirtualButton_t1113062054 * m_Items[1];

public:
	inline VirtualButton_t1113062054 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline VirtualButton_t1113062054 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, VirtualButton_t1113062054 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
