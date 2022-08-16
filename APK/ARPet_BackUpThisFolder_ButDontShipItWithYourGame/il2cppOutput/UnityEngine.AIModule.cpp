﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Collections.Generic.List`1<UnityEngine.AI.NavMeshBuildSource>
struct List_1_tA1B43D38C15DE02C34B9D22B1D6610931673C1C3;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.AI.NavMeshBuildSource[]
struct NavMeshBuildSourceU5BU5D_t3AFA45202A8DDA5FDCB05E75CD394FA1BEC84A5A;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t074BD62CB49750890EABECD0D6FD7747BA2CD579;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_t4F3B3EEDA20981618EFF818A170C307238D4E841;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F;
// UnityEngine.AI.NavMeshData
struct NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.AI.NavMesh/OnNavMeshPreUpdate
struct OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NavMesh_t3543D236ABB9A67F696BCF9440D669A1578B3D46_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469;
IL2CPP_EXTERN_C String_t* _stringLiteralCE23A35A2628159F4561C7D26935D3658D22EA68;
IL2CPP_EXTERN_C String_t* _stringLiteralE55B2CFE56C9C3C557D990819E77C1C6EF9B6EE5;
IL2CPP_EXTERN_C const RuntimeMethod* NavMeshBuilder_UpdateNavMeshDataAsync_m96D5C71EFA53AB2FFBBDEDCFDCC737A0D71C1C9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NavMeshBuilder_UpdateNavMeshData_mED1A0009734D5E47CF0D0B3B9B47740221994C1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NavMesh_AddNavMeshData_mE1A0AA6A1F52C7739573A754E24F783A48C074B7_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tC64F337A786EF1DE807D08323D848149E353A750 
{
};

// System.Collections.Generic.List`1<UnityEngine.AI.NavMeshBuildSource>
struct List_1_tA1B43D38C15DE02C34B9D22B1D6610931673C1C3  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	NavMeshBuildSourceU5BU5D_t3AFA45202A8DDA5FDCB05E75CD394FA1BEC84A5A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA1B43D38C15DE02C34B9D22B1D6610931673C1C3_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	NavMeshBuildSourceU5BU5D_t3AFA45202A8DDA5FDCB05E75CD394FA1BEC84A5A* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// UnityEngine.AI.NavMesh
struct NavMesh_t3543D236ABB9A67F696BCF9440D669A1578B3D46  : public RuntimeObject
{
};

struct NavMesh_t3543D236ABB9A67F696BCF9440D669A1578B3D46_StaticFields
{
	// UnityEngine.AI.NavMesh/OnNavMeshPreUpdate UnityEngine.AI.NavMesh::onPreUpdate
	OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7* ___onPreUpdate_0;
};

// UnityEngine.AI.NavMeshBuilder
struct NavMeshBuilder_tDF6DED1F6DAED95C31652823BEED6DDC74A0DCC1  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t074BD62CB49750890EABECD0D6FD7747BA2CD579  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_t4F3B3EEDA20981618EFF818A170C307238D4E841  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.AI.NavMeshBuildDebugSettings
struct NavMeshBuildDebugSettings_tF9DF93A5E99DFE4851A9B687B8870ADADE1A0621 
{
	// System.Byte UnityEngine.AI.NavMeshBuildDebugSettings::m_Flags
	uint8_t ___m_Flags_0;
};

// UnityEngine.AI.NavMeshDataInstance
struct NavMeshDataInstance_t305211376D44ABC0AD2885CAF4E1D8F3BAE16F04 
{
	// System.Int32 UnityEngine.AI.NavMeshDataInstance::<id>k__BackingField
	int32_t ___U3CidU3Ek__BackingField_0;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.AI.NavMeshBuildSettings
struct NavMeshBuildSettings_t7836365E01BEB1D2FF32BF62AE46A465DD84B77D 
{
	// System.Int32 UnityEngine.AI.NavMeshBuildSettings::m_AgentTypeID
	int32_t ___m_AgentTypeID_0;
	// System.Single UnityEngine.AI.NavMeshBuildSettings::m_AgentRadius
	float ___m_AgentRadius_1;
	// System.Single UnityEngine.AI.NavMeshBuildSettings::m_AgentHeight
	float ___m_AgentHeight_2;
	// System.Single UnityEngine.AI.NavMeshBuildSettings::m_AgentSlope
	float ___m_AgentSlope_3;
	// System.Single UnityEngine.AI.NavMeshBuildSettings::m_AgentClimb
	float ___m_AgentClimb_4;
	// System.Single UnityEngine.AI.NavMeshBuildSettings::m_LedgeDropHeight
	float ___m_LedgeDropHeight_5;
	// System.Single UnityEngine.AI.NavMeshBuildSettings::m_MaxJumpAcrossDistance
	float ___m_MaxJumpAcrossDistance_6;
	// System.Single UnityEngine.AI.NavMeshBuildSettings::m_MinRegionArea
	float ___m_MinRegionArea_7;
	// System.Int32 UnityEngine.AI.NavMeshBuildSettings::m_OverrideVoxelSize
	int32_t ___m_OverrideVoxelSize_8;
	// System.Single UnityEngine.AI.NavMeshBuildSettings::m_VoxelSize
	float ___m_VoxelSize_9;
	// System.Int32 UnityEngine.AI.NavMeshBuildSettings::m_OverrideTileSize
	int32_t ___m_OverrideTileSize_10;
	// System.Int32 UnityEngine.AI.NavMeshBuildSettings::m_TileSize
	int32_t ___m_TileSize_11;
	// System.Int32 UnityEngine.AI.NavMeshBuildSettings::m_AccuratePlacement
	int32_t ___m_AccuratePlacement_12;
	// System.UInt32 UnityEngine.AI.NavMeshBuildSettings::m_MaxJobWorkers
	uint32_t ___m_MaxJobWorkers_13;
	// System.Int32 UnityEngine.AI.NavMeshBuildSettings::m_PreserveTilesOutsideBounds
	int32_t ___m_PreserveTilesOutsideBounds_14;
	// UnityEngine.AI.NavMeshBuildDebugSettings UnityEngine.AI.NavMeshBuildSettings::m_Debug
	NavMeshBuildDebugSettings_tF9DF93A5E99DFE4851A9B687B8870ADADE1A0621 ___m_Debug_15;
};

// UnityEngine.AI.NavMeshBuildSource
struct NavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD 
{
	// UnityEngine.Matrix4x4 UnityEngine.AI.NavMeshBuildSource::m_Transform
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_Transform_0;
	// UnityEngine.Vector3 UnityEngine.AI.NavMeshBuildSource::m_Size
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Size_1;
	// UnityEngine.AI.NavMeshBuildSourceShape UnityEngine.AI.NavMeshBuildSource::m_Shape
	int32_t ___m_Shape_2;
	// System.Int32 UnityEngine.AI.NavMeshBuildSource::m_Area
	int32_t ___m_Area_3;
	// System.Int32 UnityEngine.AI.NavMeshBuildSource::m_InstanceID
	int32_t ___m_InstanceID_4;
	// System.Int32 UnityEngine.AI.NavMeshBuildSource::m_ComponentID
	int32_t ___m_ComponentID_5;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.AI.NavMeshData
struct NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.AI.NavMesh/OnNavMeshPreUpdate
struct OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7  : public MulticastDelegate_t
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};



// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AI.NavMeshBuilder::UpdateNavMeshDataListInternal(UnityEngine.AI.NavMeshData,UnityEngine.AI.NavMeshBuildSettings,System.Object,UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshBuilder_UpdateNavMeshDataListInternal_m290403E2AEE326E7293B3EA92435EBEA647EBC48 (NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284* ___data0, NavMeshBuildSettings_t7836365E01BEB1D2FF32BF62AE46A465DD84B77D ___buildSettings1, RuntimeObject* ___sources2, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___localBounds3, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AI.NavMeshBuilder::UpdateNavMeshDataListInternal_Injected(UnityEngine.AI.NavMeshData,UnityEngine.AI.NavMeshBuildSettings&,System.Object,UnityEngine.Bounds&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshBuilder_UpdateNavMeshDataListInternal_Injected_m95C96E1D1C7320FAA301F833574D42367F1F3BAA (NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284* ___data0, NavMeshBuildSettings_t7836365E01BEB1D2FF32BF62AE46A465DD84B77D* ___buildSettings1, RuntimeObject* ___sources2, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___localBounds3, const RuntimeMethod* method) ;
// UnityEngine.AsyncOperation UnityEngine.AI.NavMeshBuilder::UpdateNavMeshDataAsyncListInternal(UnityEngine.AI.NavMeshData,UnityEngine.AI.NavMeshBuildSettings,System.Object,UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* NavMeshBuilder_UpdateNavMeshDataAsyncListInternal_m3BD866A64361BBC7C3C4C6FC1372FCAACBB12A1E (NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284* ___data0, NavMeshBuildSettings_t7836365E01BEB1D2FF32BF62AE46A465DD84B77D ___buildSettings1, RuntimeObject* ___sources2, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___localBounds3, const RuntimeMethod* method) ;
// UnityEngine.AsyncOperation UnityEngine.AI.NavMeshBuilder::UpdateNavMeshDataAsyncListInternal_Injected(UnityEngine.AI.NavMeshData,UnityEngine.AI.NavMeshBuildSettings&,System.Object,UnityEngine.Bounds&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* NavMeshBuilder_UpdateNavMeshDataAsyncListInternal_Injected_m1EC3D0868F7BEFCAF7CDAA9049A77B8B6951A897 (NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284* ___data0, NavMeshBuildSettings_t7836365E01BEB1D2FF32BF62AE46A465DD84B77D* ___buildSettings1, RuntimeObject* ___sources2, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___localBounds3, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AI.NavMeshAgent::SetDestination_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshAgent_SetDestination_Injected_mC3EF405F5AAFF9F98C5D5AECAD641525CDF742EA (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___target0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m2149FA40CEC8D82AC20D3508AB40C0D8EFEF68E6 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMeshData::Internal_Create(UnityEngine.AI.NavMeshData,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshData_Internal_Create_m4DF44F95F61ED1B6DE44658142D8F933763103D8 (NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284* ___mono0, int32_t ___agentTypeID1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMeshData::get_sourceBounds_Injected(UnityEngine.Bounds&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshData_get_sourceBounds_Injected_mBD82871CC66468CC78CF04D273B7DF28A70F0E67 (NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___ret0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AI.NavMeshDataInstance::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NavMeshDataInstance_get_id_m6C520A732C9A790D81D3DBD95CE3493440FC9F86_inline (NavMeshDataInstance_t305211376D44ABC0AD2885CAF4E1D8F3BAE16F04* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMeshDataInstance::set_id(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NavMeshDataInstance_set_id_m2CECFBED95125E066CA7A68BCC64C10912FCD61F_inline (NavMeshDataInstance_t305211376D44ABC0AD2885CAF4E1D8F3BAE16F04* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMesh::RemoveNavMeshDataInternal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMesh_RemoveNavMeshDataInternal_m4D0FEAABED034E6B956222D0BBB4CABB4B37F6F9 (int32_t ___handle0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMeshDataInstance::Remove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshDataInstance_Remove_mDC57A2ABE926E61CC28E001EC9AA5A40B9CA7635 (NavMeshDataInstance_t305211376D44ABC0AD2885CAF4E1D8F3BAE16F04* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMesh/OnNavMeshPreUpdate::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnNavMeshPreUpdate_Invoke_mFB224B9BBF9C78B7F39AA91A047F175C69897914_inline (OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AI.NavMesh::AddNavMeshDataInternal(UnityEngine.AI.NavMeshData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NavMesh_AddNavMeshDataInternal_m80C2FEAE5FA04F411BB9EFE34AD6ABCFE8159F96 (NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284* ___navMeshData0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMesh::GetSettingsByID_Injected(System.Int32,UnityEngine.AI.NavMeshBuildSettings&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMesh_GetSettingsByID_Injected_mE5DE138E5D44AE76A681135A32FDAD6D0A74D4B2 (int32_t ___agentTypeID0, NavMeshBuildSettings_t7836365E01BEB1D2FF32BF62AE46A465DD84B77D* ___ret1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMeshBuildSource::set_transform(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshBuildSource_set_transform_m7E9E224BFD798D20012492199BBD408D82AA9A00 (NavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMeshBuildSource::set_shape(UnityEngine.AI.NavMeshBuildSourceShape)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshBuildSource_set_shape_mF78F14CE9B626D5279FD64B7E85D803808C14B42 (NavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMeshBuildSource::set_area(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshBuildSource_set_area_m52BD5EFD88AF67F5065242DFCAEFF7AC924C2C0D (NavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Object::GetInstanceID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMeshBuildSource::set_sourceObject(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshBuildSource_set_sourceObject_m36761EB3BB4E7DB1E53C59E8346561BFADBA3B08 (NavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___value0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_m8F6E8C57D307B3E96A1F2355A31F1F0D8352C0AA (EmbeddedAttribute_t074BD62CB49750890EABECD0D6FD7747BA2CD579* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Runtime.CompilerServices.IsReadOnlyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsReadOnlyAttribute__ctor_m497E463BEBF947C751F03E637D2F05AFC0155FE1 (IsReadOnlyAttribute_t4F3B3EEDA20981618EFF818A170C307238D4E841* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.AI.NavMeshBuilder::UpdateNavMeshData(UnityEngine.AI.NavMeshData,UnityEngine.AI.NavMeshBuildSettings,System.Collections.Generic.List`1<UnityEngine.AI.NavMeshBuildSource>,UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshBuilder_UpdateNavMeshData_mED1A0009734D5E47CF0D0B3B9B47740221994C1F (NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284* ___data0, NavMeshBuildSettings_t7836365E01BEB1D2FF32BF62AE46A465DD84B77D ___buildSettings1, List_1_tA1B43D38C15DE02C34B9D22B1D6610931673C1C3* ___sources2, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___localBounds3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284* L_0 = ___data0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NavMeshBuilder_UpdateNavMeshData_mED1A0009734D5E47CF0D0B3B9B47740221994C1F_RuntimeMethod_var)));
	}

IL_0017:
	{
		List_1_tA1B43D38C15DE02C34B9D22B1D6610931673C1C3* L_4 = ___sources2;
		V_1 = (bool)((((RuntimeObject*)(List_1_tA1B43D38C15DE02C34B9D22B1D6610931673C1C3*)L_4) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_002a;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_6 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCE23A35A2628159F4561C7D26935D3658D22EA68)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NavMeshBuilder_UpdateNavMeshData_mED1A0009734D5E47CF0D0B3B9B47740221994C1F_RuntimeMethod_var)));
	}

IL_002a:
	{
		NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284* L_7 = ___data0;
		NavMeshBuildSettings_t7836365E01BEB1D2FF32BF62AE46A465DD84B77D L_8 = ___buildSettings1;
		List_1_tA1B43D38C15DE02C34B9D22B1D6610931673C1C3* L_9 = ___sources2;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_10 = ___localBounds3;
		bool L_11;
		L_11 = NavMeshBuilder_UpdateNavMeshDataListInternal_m290403E2AEE326E7293B3EA92435EBEA647EBC48(L_7, L_8, L_9, L_10, NULL);
		V_2 = L_11;
		goto IL_0036;
	}

IL_0036:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
// System.Boolean UnityEngine.AI.NavMeshBuilder::UpdateNavMeshDataListInternal(UnityEngine.AI.NavMeshData,UnityEngine.AI.NavMeshBuildSettings,System.Object,UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshBuilder_UpdateNavMeshDataListInternal_m290403E2AEE326E7293B3EA92435EBEA647EBC48 (NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284* ___data0, NavMeshBuildSettings_t7836365E01BEB1D2FF32BF62AE46A465DD84B77D ___buildSettings1, RuntimeObject* ___sources2, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___localBounds3, const RuntimeMethod* method) 
{
	{
		NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284* L_0 = ___data0;
		RuntimeObject* L_1 = ___sources2;
		bool L_2;
		L_2 = NavMeshBuilder_UpdateNavMeshDataListInternal_Injected_m95C96E1D1C7320FAA301F833574D42367F1F3BAA(L_0, (&___buildSettings1), L_1, (&___localBounds3), NULL);
		return L_2;
	}
}
// UnityEngine.AsyncOperation UnityEngine.AI.NavMeshBuilder::UpdateNavMeshDataAsync(UnityEngine.AI.NavMeshData,UnityEngine.AI.NavMeshBuildSettings,System.Collections.Generic.List`1<UnityEngine.AI.NavMeshBuildSource>,UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* NavMeshBuilder_UpdateNavMeshDataAsync_m96D5C71EFA53AB2FFBBDEDCFDCC737A0D71C1C9D (NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284* ___data0, NavMeshBuildSettings_t7836365E01BEB1D2FF32BF62AE46A465DD84B77D ___buildSettings1, List_1_tA1B43D38C15DE02C34B9D22B1D6610931673C1C3* ___sources2, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___localBounds3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* V_2 = NULL;
	{
		NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284* L_0 = ___data0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NavMeshBuilder_UpdateNavMeshDataAsync_m96D5C71EFA53AB2FFBBDEDCFDCC737A0D71C1C9D_RuntimeMethod_var)));
	}

IL_0017:
	{
		List_1_tA1B43D38C15DE02C34B9D22B1D6610931673C1C3* L_4 = ___sources2;
		V_1 = (bool)((((RuntimeObject*)(List_1_tA1B43D38C15DE02C34B9D22B1D6610931673C1C3*)L_4) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_002a;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_6 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCE23A35A2628159F4561C7D26935D3658D22EA68)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NavMeshBuilder_UpdateNavMeshDataAsync_m96D5C71EFA53AB2FFBBDEDCFDCC737A0D71C1C9D_RuntimeMethod_var)));
	}

IL_002a:
	{
		NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284* L_7 = ___data0;
		NavMeshBuildSettings_t7836365E01BEB1D2FF32BF62AE46A465DD84B77D L_8 = ___buildSettings1;
		List_1_tA1B43D38C15DE02C34B9D22B1D6610931673C1C3* L_9 = ___sources2;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_10 = ___localBounds3;
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_11;
		L_11 = NavMeshBuilder_UpdateNavMeshDataAsyncListInternal_m3BD866A64361BBC7C3C4C6FC1372FCAACBB12A1E(L_7, L_8, L_9, L_10, NULL);
		V_2 = L_11;
		goto IL_0036;
	}

IL_0036:
	{
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_12 = V_2;
		return L_12;
	}
}
// UnityEngine.AsyncOperation UnityEngine.AI.NavMeshBuilder::UpdateNavMeshDataAsyncListInternal(UnityEngine.AI.NavMeshData,UnityEngine.AI.NavMeshBuildSettings,System.Object,UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* NavMeshBuilder_UpdateNavMeshDataAsyncListInternal_m3BD866A64361BBC7C3C4C6FC1372FCAACBB12A1E (NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284* ___data0, NavMeshBuildSettings_t7836365E01BEB1D2FF32BF62AE46A465DD84B77D ___buildSettings1, RuntimeObject* ___sources2, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___localBounds3, const RuntimeMethod* method) 
{
	{
		NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284* L_0 = ___data0;
		RuntimeObject* L_1 = ___sources2;
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_2;
		L_2 = NavMeshBuilder_UpdateNavMeshDataAsyncListInternal_Injected_m1EC3D0868F7BEFCAF7CDAA9049A77B8B6951A897(L_0, (&___buildSettings1), L_1, (&___localBounds3), NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.AI.NavMeshBuilder::UpdateNavMeshDataListInternal_Injected(UnityEngine.AI.NavMeshData,UnityEngine.AI.NavMeshBuildSettings&,System.Object,UnityEngine.Bounds&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshBuilder_UpdateNavMeshDataListInternal_Injected_m95C96E1D1C7320FAA301F833574D42367F1F3BAA (NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284* ___data0, NavMeshBuildSettings_t7836365E01BEB1D2FF32BF62AE46A465DD84B77D* ___buildSettings1, RuntimeObject* ___sources2, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___localBounds3, const RuntimeMethod* method) 
{
	typedef bool (*NavMeshBuilder_UpdateNavMeshDataListInternal_Injected_m95C96E1D1C7320FAA301F833574D42367F1F3BAA_ftn) (NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284*, NavMeshBuildSettings_t7836365E01BEB1D2FF32BF62AE46A465DD84B77D*, RuntimeObject*, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*);
	static NavMeshBuilder_UpdateNavMeshDataListInternal_Injected_m95C96E1D1C7320FAA301F833574D42367F1F3BAA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshBuilder_UpdateNavMeshDataListInternal_Injected_m95C96E1D1C7320FAA301F833574D42367F1F3BAA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshBuilder::UpdateNavMeshDataListInternal_Injected(UnityEngine.AI.NavMeshData,UnityEngine.AI.NavMeshBuildSettings&,System.Object,UnityEngine.Bounds&)");
	bool icallRetVal = _il2cpp_icall_func(___data0, ___buildSettings1, ___sources2, ___localBounds3);
	return icallRetVal;
}
// UnityEngine.AsyncOperation UnityEngine.AI.NavMeshBuilder::UpdateNavMeshDataAsyncListInternal_Injected(UnityEngine.AI.NavMeshData,UnityEngine.AI.NavMeshBuildSettings&,System.Object,UnityEngine.Bounds&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* NavMeshBuilder_UpdateNavMeshDataAsyncListInternal_Injected_m1EC3D0868F7BEFCAF7CDAA9049A77B8B6951A897 (NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284* ___data0, NavMeshBuildSettings_t7836365E01BEB1D2FF32BF62AE46A465DD84B77D* ___buildSettings1, RuntimeObject* ___sources2, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___localBounds3, const RuntimeMethod* method) 
{
	typedef AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* (*NavMeshBuilder_UpdateNavMeshDataAsyncListInternal_Injected_m1EC3D0868F7BEFCAF7CDAA9049A77B8B6951A897_ftn) (NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284*, NavMeshBuildSettings_t7836365E01BEB1D2FF32BF62AE46A465DD84B77D*, RuntimeObject*, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*);
	static NavMeshBuilder_UpdateNavMeshDataAsyncListInternal_Injected_m1EC3D0868F7BEFCAF7CDAA9049A77B8B6951A897_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshBuilder_UpdateNavMeshDataAsyncListInternal_Injected_m1EC3D0868F7BEFCAF7CDAA9049A77B8B6951A897_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshBuilder::UpdateNavMeshDataAsyncListInternal_Injected(UnityEngine.AI.NavMeshData,UnityEngine.AI.NavMeshBuildSettings&,System.Object,UnityEngine.Bounds&)");
	AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* icallRetVal = _il2cpp_icall_func(___data0, ___buildSettings1, ___sources2, ___localBounds3);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.AI.NavMeshAgent::SetDestination(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshAgent_SetDestination_mD5D960933827F1F14B29CF4A3B6F305C064EBF46 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target0, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = NavMeshAgent_SetDestination_Injected_mC3EF405F5AAFF9F98C5D5AECAD641525CDF742EA(__this, (&___target0), NULL);
		return L_0;
	}
}
// System.Void UnityEngine.AI.NavMeshAgent::ResetPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_ResetPath_mE29D3956C1BFABDB3D6B4B7DF2B376B4EEB24E7F (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, const RuntimeMethod* method) 
{
	typedef void (*NavMeshAgent_ResetPath_mE29D3956C1BFABDB3D6B4B7DF2B376B4EEB24E7F_ftn) (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F*);
	static NavMeshAgent_ResetPath_mE29D3956C1BFABDB3D6B4B7DF2B376B4EEB24E7F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_ResetPath_mE29D3956C1BFABDB3D6B4B7DF2B376B4EEB24E7F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::ResetPath()");
	_il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.AI.NavMeshAgent::SetDestination_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshAgent_SetDestination_Injected_mC3EF405F5AAFF9F98C5D5AECAD641525CDF742EA (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___target0, const RuntimeMethod* method) 
{
	typedef bool (*NavMeshAgent_SetDestination_Injected_mC3EF405F5AAFF9F98C5D5AECAD641525CDF742EA_ftn) (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static NavMeshAgent_SetDestination_Injected_mC3EF405F5AAFF9F98C5D5AECAD641525CDF742EA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshAgent_SetDestination_Injected_mC3EF405F5AAFF9F98C5D5AECAD641525CDF742EA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshAgent::SetDestination_Injected(UnityEngine.Vector3&)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___target0);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.AI.NavMeshData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshData__ctor_m2C0DE2AACB529EE0ABB27F514E4968F62BE97C72 (NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object__ctor_m2149FA40CEC8D82AC20D3508AB40C0D8EFEF68E6(__this, NULL);
		NavMeshData_Internal_Create_m4DF44F95F61ED1B6DE44658142D8F933763103D8(__this, 0, NULL);
		return;
	}
}
// System.Void UnityEngine.AI.NavMeshData::Internal_Create(UnityEngine.AI.NavMeshData,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshData_Internal_Create_m4DF44F95F61ED1B6DE44658142D8F933763103D8 (NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284* ___mono0, int32_t ___agentTypeID1, const RuntimeMethod* method) 
{
	typedef void (*NavMeshData_Internal_Create_m4DF44F95F61ED1B6DE44658142D8F933763103D8_ftn) (NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284*, int32_t);
	static NavMeshData_Internal_Create_m4DF44F95F61ED1B6DE44658142D8F933763103D8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshData_Internal_Create_m4DF44F95F61ED1B6DE44658142D8F933763103D8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshData::Internal_Create(UnityEngine.AI.NavMeshData,System.Int32)");
	_il2cpp_icall_func(___mono0, ___agentTypeID1);
}
// UnityEngine.Bounds UnityEngine.AI.NavMeshData::get_sourceBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 NavMeshData_get_sourceBounds_mC7A9737523C2FF9CDE7F567E0487F0548380B0A1 (NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284* __this, const RuntimeMethod* method) 
{
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NavMeshData_get_sourceBounds_Injected_mBD82871CC66468CC78CF04D273B7DF28A70F0E67(__this, (&V_0), NULL);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.AI.NavMeshData::get_sourceBounds_Injected(UnityEngine.Bounds&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshData_get_sourceBounds_Injected_mBD82871CC66468CC78CF04D273B7DF28A70F0E67 (NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___ret0, const RuntimeMethod* method) 
{
	typedef void (*NavMeshData_get_sourceBounds_Injected_mBD82871CC66468CC78CF04D273B7DF28A70F0E67_ftn) (NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284*, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*);
	static NavMeshData_get_sourceBounds_Injected_mBD82871CC66468CC78CF04D273B7DF28A70F0E67_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMeshData_get_sourceBounds_Injected_mBD82871CC66468CC78CF04D273B7DF28A70F0E67_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMeshData::get_sourceBounds_Injected(UnityEngine.Bounds&)");
	_il2cpp_icall_func(__this, ___ret0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityEngine.AI.NavMeshDataInstance::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NavMeshDataInstance_get_id_m6C520A732C9A790D81D3DBD95CE3493440FC9F86 (NavMeshDataInstance_t305211376D44ABC0AD2885CAF4E1D8F3BAE16F04* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CidU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t NavMeshDataInstance_get_id_m6C520A732C9A790D81D3DBD95CE3493440FC9F86_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	NavMeshDataInstance_t305211376D44ABC0AD2885CAF4E1D8F3BAE16F04* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NavMeshDataInstance_t305211376D44ABC0AD2885CAF4E1D8F3BAE16F04*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = NavMeshDataInstance_get_id_m6C520A732C9A790D81D3DBD95CE3493440FC9F86_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.AI.NavMeshDataInstance::set_id(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshDataInstance_set_id_m2CECFBED95125E066CA7A68BCC64C10912FCD61F (NavMeshDataInstance_t305211376D44ABC0AD2885CAF4E1D8F3BAE16F04* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CidU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void NavMeshDataInstance_set_id_m2CECFBED95125E066CA7A68BCC64C10912FCD61F_AdjustorThunk (RuntimeObject* __this, int32_t ___value0, const RuntimeMethod* method)
{
	NavMeshDataInstance_t305211376D44ABC0AD2885CAF4E1D8F3BAE16F04* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NavMeshDataInstance_t305211376D44ABC0AD2885CAF4E1D8F3BAE16F04*>(__this + _offset);
	NavMeshDataInstance_set_id_m2CECFBED95125E066CA7A68BCC64C10912FCD61F_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.AI.NavMeshDataInstance::Remove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshDataInstance_Remove_mDC57A2ABE926E61CC28E001EC9AA5A40B9CA7635 (NavMeshDataInstance_t305211376D44ABC0AD2885CAF4E1D8F3BAE16F04* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = NavMeshDataInstance_get_id_m6C520A732C9A790D81D3DBD95CE3493440FC9F86_inline(__this, NULL);
		NavMesh_RemoveNavMeshDataInternal_m4D0FEAABED034E6B956222D0BBB4CABB4B37F6F9(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void NavMeshDataInstance_Remove_mDC57A2ABE926E61CC28E001EC9AA5A40B9CA7635_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	NavMeshDataInstance_t305211376D44ABC0AD2885CAF4E1D8F3BAE16F04* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NavMeshDataInstance_t305211376D44ABC0AD2885CAF4E1D8F3BAE16F04*>(__this + _offset);
	NavMeshDataInstance_Remove_mDC57A2ABE926E61CC28E001EC9AA5A40B9CA7635(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.AI.NavMesh::Internal_CallOnNavMeshPreUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMesh_Internal_CallOnNavMeshPreUpdate_m80148CFDD0C6F1DDDE5B3DA67A8D9613043A4233 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NavMesh_t3543D236ABB9A67F696BCF9440D669A1578B3D46_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7* L_0 = ((NavMesh_t3543D236ABB9A67F696BCF9440D669A1578B3D46_StaticFields*)il2cpp_codegen_static_fields_for(NavMesh_t3543D236ABB9A67F696BCF9440D669A1578B3D46_il2cpp_TypeInfo_var))->___onPreUpdate_0;
		V_0 = (bool)((!(((RuntimeObject*)(OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7* L_2 = ((NavMesh_t3543D236ABB9A67F696BCF9440D669A1578B3D46_StaticFields*)il2cpp_codegen_static_fields_for(NavMesh_t3543D236ABB9A67F696BCF9440D669A1578B3D46_il2cpp_TypeInfo_var))->___onPreUpdate_0;
		NullCheck(L_2);
		OnNavMeshPreUpdate_Invoke_mFB224B9BBF9C78B7F39AA91A047F175C69897914_inline(L_2, NULL);
	}

IL_0018:
	{
		return;
	}
}
// UnityEngine.AI.NavMeshDataInstance UnityEngine.AI.NavMesh::AddNavMeshData(UnityEngine.AI.NavMeshData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NavMeshDataInstance_t305211376D44ABC0AD2885CAF4E1D8F3BAE16F04 NavMesh_AddNavMeshData_mE1A0AA6A1F52C7739573A754E24F783A48C074B7 (NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284* ___navMeshData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NavMeshDataInstance_t305211376D44ABC0AD2885CAF4E1D8F3BAE16F04 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	NavMeshDataInstance_t305211376D44ABC0AD2885CAF4E1D8F3BAE16F04 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284* L_0 = ___navMeshData0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE55B2CFE56C9C3C557D990819E77C1C6EF9B6EE5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NavMesh_AddNavMeshData_mE1A0AA6A1F52C7739573A754E24F783A48C074B7_RuntimeMethod_var)));
	}

IL_0017:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NavMeshDataInstance_t305211376D44ABC0AD2885CAF4E1D8F3BAE16F04));
		NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284* L_4 = ___navMeshData0;
		int32_t L_5;
		L_5 = NavMesh_AddNavMeshDataInternal_m80C2FEAE5FA04F411BB9EFE34AD6ABCFE8159F96(L_4, NULL);
		NavMeshDataInstance_set_id_m2CECFBED95125E066CA7A68BCC64C10912FCD61F_inline((&V_0), L_5, NULL);
		NavMeshDataInstance_t305211376D44ABC0AD2885CAF4E1D8F3BAE16F04 L_6 = V_0;
		V_2 = L_6;
		goto IL_0031;
	}

IL_0031:
	{
		NavMeshDataInstance_t305211376D44ABC0AD2885CAF4E1D8F3BAE16F04 L_7 = V_2;
		return L_7;
	}
}
// System.Int32 UnityEngine.AI.NavMesh::AddNavMeshDataInternal(UnityEngine.AI.NavMeshData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NavMesh_AddNavMeshDataInternal_m80C2FEAE5FA04F411BB9EFE34AD6ABCFE8159F96 (NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284* ___navMeshData0, const RuntimeMethod* method) 
{
	typedef int32_t (*NavMesh_AddNavMeshDataInternal_m80C2FEAE5FA04F411BB9EFE34AD6ABCFE8159F96_ftn) (NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284*);
	static NavMesh_AddNavMeshDataInternal_m80C2FEAE5FA04F411BB9EFE34AD6ABCFE8159F96_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMesh_AddNavMeshDataInternal_m80C2FEAE5FA04F411BB9EFE34AD6ABCFE8159F96_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMesh::AddNavMeshDataInternal(UnityEngine.AI.NavMeshData)");
	int32_t icallRetVal = _il2cpp_icall_func(___navMeshData0);
	return icallRetVal;
}
// System.Void UnityEngine.AI.NavMesh::RemoveNavMeshDataInternal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMesh_RemoveNavMeshDataInternal_m4D0FEAABED034E6B956222D0BBB4CABB4B37F6F9 (int32_t ___handle0, const RuntimeMethod* method) 
{
	typedef void (*NavMesh_RemoveNavMeshDataInternal_m4D0FEAABED034E6B956222D0BBB4CABB4B37F6F9_ftn) (int32_t);
	static NavMesh_RemoveNavMeshDataInternal_m4D0FEAABED034E6B956222D0BBB4CABB4B37F6F9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMesh_RemoveNavMeshDataInternal_m4D0FEAABED034E6B956222D0BBB4CABB4B37F6F9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMesh::RemoveNavMeshDataInternal(System.Int32)");
	_il2cpp_icall_func(___handle0);
}
// UnityEngine.AI.NavMeshBuildSettings UnityEngine.AI.NavMesh::GetSettingsByID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NavMeshBuildSettings_t7836365E01BEB1D2FF32BF62AE46A465DD84B77D NavMesh_GetSettingsByID_m8BAE17B37E61C4C67FF2AB2CF578348A387A41D9 (int32_t ___agentTypeID0, const RuntimeMethod* method) 
{
	NavMeshBuildSettings_t7836365E01BEB1D2FF32BF62AE46A465DD84B77D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___agentTypeID0;
		NavMesh_GetSettingsByID_Injected_mE5DE138E5D44AE76A681135A32FDAD6D0A74D4B2(L_0, (&V_0), NULL);
		NavMeshBuildSettings_t7836365E01BEB1D2FF32BF62AE46A465DD84B77D L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.AI.NavMesh::GetSettingsByID_Injected(System.Int32,UnityEngine.AI.NavMeshBuildSettings&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMesh_GetSettingsByID_Injected_mE5DE138E5D44AE76A681135A32FDAD6D0A74D4B2 (int32_t ___agentTypeID0, NavMeshBuildSettings_t7836365E01BEB1D2FF32BF62AE46A465DD84B77D* ___ret1, const RuntimeMethod* method) 
{
	typedef void (*NavMesh_GetSettingsByID_Injected_mE5DE138E5D44AE76A681135A32FDAD6D0A74D4B2_ftn) (int32_t, NavMeshBuildSettings_t7836365E01BEB1D2FF32BF62AE46A465DD84B77D*);
	static NavMesh_GetSettingsByID_Injected_mE5DE138E5D44AE76A681135A32FDAD6D0A74D4B2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NavMesh_GetSettingsByID_Injected_mE5DE138E5D44AE76A681135A32FDAD6D0A74D4B2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AI.NavMesh::GetSettingsByID_Injected(System.Int32,UnityEngine.AI.NavMeshBuildSettings&)");
	_il2cpp_icall_func(___agentTypeID0, ___ret1);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnNavMeshPreUpdate_Invoke_mFB224B9BBF9C78B7F39AA91A047F175C69897914_Multicast(OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7* currentDelegate = reinterpret_cast<OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnNavMeshPreUpdate_Invoke_mFB224B9BBF9C78B7F39AA91A047F175C69897914_OpenInst(OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void OnNavMeshPreUpdate_Invoke_mFB224B9BBF9C78B7F39AA91A047F175C69897914_OpenStatic(OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void OnNavMeshPreUpdate_Invoke_mFB224B9BBF9C78B7F39AA91A047F175C69897914_OpenStaticInvoker(OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void OnNavMeshPreUpdate_Invoke_mFB224B9BBF9C78B7F39AA91A047F175C69897914_ClosedStaticInvoker(OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7 (OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.AI.NavMesh/OnNavMeshPreUpdate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnNavMeshPreUpdate__ctor_m7142A3AA991BE50B637A16D946AB7604C64EF9BA (OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnNavMeshPreUpdate_Invoke_mFB224B9BBF9C78B7F39AA91A047F175C69897914_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnNavMeshPreUpdate_Invoke_mFB224B9BBF9C78B7F39AA91A047F175C69897914_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnNavMeshPreUpdate_Invoke_mFB224B9BBF9C78B7F39AA91A047F175C69897914_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&OnNavMeshPreUpdate_Invoke_mFB224B9BBF9C78B7F39AA91A047F175C69897914_Multicast;
}
// System.Void UnityEngine.AI.NavMesh/OnNavMeshPreUpdate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnNavMeshPreUpdate_Invoke_mFB224B9BBF9C78B7F39AA91A047F175C69897914 (OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.AI.NavMeshBuildSource::set_transform(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshBuildSource_set_transform_m7E9E224BFD798D20012492199BBD408D82AA9A00 (NavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value0, const RuntimeMethod* method) 
{
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ___value0;
		__this->___m_Transform_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void NavMeshBuildSource_set_transform_m7E9E224BFD798D20012492199BBD408D82AA9A00_AdjustorThunk (RuntimeObject* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value0, const RuntimeMethod* method)
{
	NavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD*>(__this + _offset);
	NavMeshBuildSource_set_transform_m7E9E224BFD798D20012492199BBD408D82AA9A00(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.AI.NavMeshBuildSource::set_shape(UnityEngine.AI.NavMeshBuildSourceShape)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshBuildSource_set_shape_mF78F14CE9B626D5279FD64B7E85D803808C14B42 (NavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___m_Shape_2 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void NavMeshBuildSource_set_shape_mF78F14CE9B626D5279FD64B7E85D803808C14B42_AdjustorThunk (RuntimeObject* __this, int32_t ___value0, const RuntimeMethod* method)
{
	NavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD*>(__this + _offset);
	NavMeshBuildSource_set_shape_mF78F14CE9B626D5279FD64B7E85D803808C14B42(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.AI.NavMeshBuildSource::set_area(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshBuildSource_set_area_m52BD5EFD88AF67F5065242DFCAEFF7AC924C2C0D (NavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___m_Area_3 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void NavMeshBuildSource_set_area_m52BD5EFD88AF67F5065242DFCAEFF7AC924C2C0D_AdjustorThunk (RuntimeObject* __this, int32_t ___value0, const RuntimeMethod* method)
{
	NavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD*>(__this + _offset);
	NavMeshBuildSource_set_area_m52BD5EFD88AF67F5065242DFCAEFF7AC924C2C0D(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.AI.NavMeshBuildSource::set_sourceObject(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshBuildSource_set_sourceObject_m36761EB3BB4E7DB1E53C59E8346561BFADBA3B08 (NavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD* G_B2_0 = NULL;
	NavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	NavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD* G_B3_1 = NULL;
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B1_0 = __this;
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_000e;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0014;
	}

IL_000e:
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2 = ___value0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_2, NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_0014:
	{
		G_B3_1->___m_InstanceID_4 = G_B3_0;
		return;
	}
}
IL2CPP_EXTERN_C  void NavMeshBuildSource_set_sourceObject_m36761EB3BB4E7DB1E53C59E8346561BFADBA3B08_AdjustorThunk (RuntimeObject* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___value0, const RuntimeMethod* method)
{
	NavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD*>(__this + _offset);
	NavMeshBuildSource_set_sourceObject_m36761EB3BB4E7DB1E53C59E8346561BFADBA3B08(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NavMeshDataInstance_get_id_m6C520A732C9A790D81D3DBD95CE3493440FC9F86_inline (NavMeshDataInstance_t305211376D44ABC0AD2885CAF4E1D8F3BAE16F04* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CidU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NavMeshDataInstance_set_id_m2CECFBED95125E066CA7A68BCC64C10912FCD61F_inline (NavMeshDataInstance_t305211376D44ABC0AD2885CAF4E1D8F3BAE16F04* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CidU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnNavMeshPreUpdate_Invoke_mFB224B9BBF9C78B7F39AA91A047F175C69897914_inline (OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
