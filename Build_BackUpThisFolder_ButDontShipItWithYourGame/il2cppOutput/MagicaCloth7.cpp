#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<MagicaCloth.MeshUtility/TetraVertex>
struct List_1_tCBBD5B69F271A38C97C14588F60AF8719EEC6BD3;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// MagicaCloth.MeshUtility/TetraVertex[]
struct TetraVertexU5BU5D_t5C2AA8955DFF0181F23EC6755CB33000E1565028;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// MagicaCloth.ShareDataObject
struct ShareDataObject_t9215EDBD98FEABEDEF129027FF16376BB41C8A7D;
// MagicaCloth.StaticStringBuilder
struct StaticStringBuilder_t83D65DAE57EC5E71EFD7814BB04819B2AE8A0054;
// MagicaCloth.StopWatch
struct StopWatch_t9DEB62B059C39CE3F724C494C767A94BA092EE83;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// MagicaCloth.UpdateTimeManager
struct UpdateTimeManager_t97A049BAF9BF24835DDE1DC2297D3A2EE9F1FB6E;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// MagicaCloth.MeshUtility/Tetra
struct Tetra_tC435C7A536D03AC0F6A44D5615D916447D544799;
// MagicaCloth.MeshUtility/TetraVertex
struct TetraVertex_t685EAD84F9BE929A3AF4C1B64765D8F15DA711B4;

IL2CPP_EXTERN_C RuntimeClass* List_1_tCBBD5B69F271A38C97C14588F60AF8719EEC6BD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StaticStringBuilder_t83D65DAE57EC5E71EFD7814BB04819B2AE8A0054_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral25B573A97F610DC6674C9D106F6FCEC2D1B1DC5A;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m8D735C1D220B77F3B6189E6374181DB53DDA8DAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m685AD8CD3C317AF3275A689E16B1DA52A7D11DC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCC99FEF5FB440898798D170C25E96D08E5B8C8FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mB0D6026D90E629438C7EFFC066FF47F09949238D_RuntimeMethod_var;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<MagicaCloth.MeshUtility/TetraVertex>
struct List_1_tCBBD5B69F271A38C97C14588F60AF8719EEC6BD3  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TetraVertexU5BU5D_t5C2AA8955DFF0181F23EC6755CB33000E1565028* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tCBBD5B69F271A38C97C14588F60AF8719EEC6BD3_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TetraVertexU5BU5D_t5C2AA8955DFF0181F23EC6755CB33000E1565028* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// MagicaCloth.StaticStringBuilder
struct StaticStringBuilder_t83D65DAE57EC5E71EFD7814BB04819B2AE8A0054  : public RuntimeObject
{
};

struct StaticStringBuilder_t83D65DAE57EC5E71EFD7814BB04819B2AE8A0054_StaticFields
{
	// System.Text.StringBuilder MagicaCloth.StaticStringBuilder::stringBuilder
	StringBuilder_t* ___stringBuilder_0;
};

// MagicaCloth.StopWatch
struct StopWatch_t9DEB62B059C39CE3F724C494C767A94BA092EE83  : public RuntimeObject
{
	// System.Single MagicaCloth.StopWatch::startTime
	float ___startTime_0;
	// System.Single MagicaCloth.StopWatch::endTime
	float ___endTime_1;
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

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// MagicaCloth.UpdateTimeManager
struct UpdateTimeManager_t97A049BAF9BF24835DDE1DC2297D3A2EE9F1FB6E  : public RuntimeObject
{
	// MagicaCloth.UpdateTimeManager/UpdateCount MagicaCloth.UpdateTimeManager::updatePerSeccond
	int32_t ___updatePerSeccond_0;
	// MagicaCloth.UpdateTimeManager/UpdateMode MagicaCloth.UpdateTimeManager::updateMode
	int32_t ___updateMode_1;
	// MagicaCloth.UpdateTimeManager/UpdateLocation MagicaCloth.UpdateTimeManager::updateLocation
	int32_t ___updateLocation_2;
	// System.Single MagicaCloth.UpdateTimeManager::timeScale
	float ___timeScale_3;
	// System.Single MagicaCloth.UpdateTimeManager::futurePredictionRate
	float ___futurePredictionRate_4;
	// System.Boolean MagicaCloth.UpdateTimeManager::updateBoneScale
	bool ___updateBoneScale_5;
	// System.Int32 MagicaCloth.UpdateTimeManager::fixedUpdateCount
	int32_t ___fixedUpdateCount_6;
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// MagicaCloth.ReferenceDataIndex
struct ReferenceDataIndex_t7360196B4D29911A83C6303096BFEDF0710CDA6E 
{
	// System.Int32 MagicaCloth.ReferenceDataIndex::startIndex
	int32_t ___startIndex_0;
	// System.Int32 MagicaCloth.ReferenceDataIndex::count
	int32_t ___count_1;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
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

// Unity.Mathematics.float4
struct float4_t89D9A294E7A79BD81BFBDD18654508532958555E 
{
	// System.Single Unity.Mathematics.float4::x
	float ___x_0;
	// System.Single Unity.Mathematics.float4::y
	float ___y_1;
	// System.Single Unity.Mathematics.float4::z
	float ___z_2;
	// System.Single Unity.Mathematics.float4::w
	float ___w_3;
};

struct float4_t89D9A294E7A79BD81BFBDD18654508532958555E_StaticFields
{
	// Unity.Mathematics.float4 Unity.Mathematics.float4::zero
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___zero_4;
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

// Unity.Mathematics.float4x4
struct float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 
{
	// Unity.Mathematics.float4 Unity.Mathematics.float4x4::c0
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c0_0;
	// Unity.Mathematics.float4 Unity.Mathematics.float4x4::c1
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c1_1;
	// Unity.Mathematics.float4 Unity.Mathematics.float4x4::c2
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c2_2;
	// Unity.Mathematics.float4 Unity.Mathematics.float4x4::c3
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c3_3;
};

struct float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2_StaticFields
{
	// Unity.Mathematics.float4x4 Unity.Mathematics.float4x4::identity
	float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 ___identity_4;
	// Unity.Mathematics.float4x4 Unity.Mathematics.float4x4::zero
	float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 ___zero_5;
};

// MagicaCloth.MeshUtility/Tetra
struct Tetra_tC435C7A536D03AC0F6A44D5615D916447D544799  : public RuntimeObject
{
	// System.Collections.Generic.List`1<MagicaCloth.MeshUtility/TetraVertex> MagicaCloth.MeshUtility/Tetra::vertexList
	List_1_tCBBD5B69F271A38C97C14588F60AF8719EEC6BD3* ___vertexList_0;
	// UnityEngine.Vector3 MagicaCloth.MeshUtility/Tetra::circumCenter
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___circumCenter_1;
	// System.Single MagicaCloth.MeshUtility/Tetra::circumRadius
	float ___circumRadius_2;
	// UnityEngine.Vector3 MagicaCloth.MeshUtility/Tetra::tetraCenter
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___tetraCenter_3;
	// System.Single MagicaCloth.MeshUtility/Tetra::tetraSize
	float ___tetraSize_4;
};

// MagicaCloth.MeshUtility/TetraVertex
struct TetraVertex_t685EAD84F9BE929A3AF4C1B64765D8F15DA711B4  : public RuntimeObject
{
	// System.Int32 MagicaCloth.MeshUtility/TetraVertex::index
	int32_t ___index_0;
	// UnityEngine.Vector3 MagicaCloth.MeshUtility/TetraVertex::pos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos_1;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// MagicaCloth.ShareDataObject
struct ShareDataObject_t9215EDBD98FEABEDEF129027FF16376BB41C8A7D  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Int32 MagicaCloth.ShareDataObject::dataHash
	int32_t ___dataHash_4;
	// System.Int32 MagicaCloth.ShareDataObject::dataVersion
	int32_t ___dataVersion_5;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<MagicaCloth.MeshUtility/TetraVertex>::.ctor()
inline void List_1__ctor_mCC99FEF5FB440898798D170C25E96D08E5B8C8FC (List_1_tCBBD5B69F271A38C97C14588F60AF8719EEC6BD3* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCBBD5B69F271A38C97C14588F60AF8719EEC6BD3*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<MagicaCloth.MeshUtility/TetraVertex>::Add(T)
inline void List_1_Add_m8D735C1D220B77F3B6189E6374181DB53DDA8DAB_inline (List_1_tCBBD5B69F271A38C97C14588F60AF8719EEC6BD3* __this, TetraVertex_t685EAD84F9BE929A3AF4C1B64765D8F15DA711B4* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCBBD5B69F271A38C97C14588F60AF8719EEC6BD3*, TetraVertex_t685EAD84F9BE929A3AF4C1B64765D8F15DA711B4*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void MagicaCloth.MeshUtility/Tetra::CalcSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tetra_CalcSize_m96F741F35792D0F425E4371B3F9B645A9E7DDE39 (Tetra_tC435C7A536D03AC0F6A44D5615D916447D544799* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<MagicaCloth.MeshUtility/TetraVertex>::get_Item(System.Int32)
inline TetraVertex_t685EAD84F9BE929A3AF4C1B64765D8F15DA711B4* List_1_get_Item_mB0D6026D90E629438C7EFFC066FF47F09949238D (List_1_tCBBD5B69F271A38C97C14588F60AF8719EEC6BD3* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  TetraVertex_t685EAD84F9BE929A3AF4C1B64765D8F15DA711B4* (*) (List_1_tCBBD5B69F271A38C97C14588F60AF8719EEC6BD3*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.UInt64 MagicaCloth.DataUtility::PackQuater(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t DataUtility_PackQuater_mC172D78E5E89551C4FC73E586F8169CEBEDF6EB5 (int32_t ___v00, int32_t ___v11, int32_t ___v22, int32_t ___v33, const RuntimeMethod* method) ;
// System.Void Unity.Mathematics.float4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Void Unity.Mathematics.float4x4::.ctor(Unity.Mathematics.float4,Unity.Mathematics.float4,Unity.Mathematics.float4,Unity.Mathematics.float4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float4x4__ctor_mF0B7C823E36025A539E8024123057CAC380E97EF_inline (float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2* __this, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c00, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c11, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c22, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c33, const RuntimeMethod* method) ;
// System.Single Unity.Mathematics.math::determinant(Unity.Mathematics.float4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float math_determinant_mBFEB3A5E7A0BFA0D6C8165D372BF527C3835DC59 (float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 ___m0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<MagicaCloth.MeshUtility/TetraVertex>::Contains(T)
inline bool List_1_Contains_m685AD8CD3C317AF3275A689E16B1DA52A7D11DC8 (List_1_tCBBD5B69F271A38C97C14588F60AF8719EEC6BD3* __this, TetraVertex_t685EAD84F9BE929A3AF4C1B64765D8F15DA711B4* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tCBBD5B69F271A38C97C14588F60AF8719EEC6BD3*, TetraVertex_t685EAD84F9BE929A3AF4C1B64765D8F15DA711B4*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Cross_m77F64620D73934C56BEE37A64016DBDCB9D21DB8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::set_Length(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414 (StringBuilder_t* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63 (StringBuilder_t* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5 (StringBuilder_t* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Int32 MagicaCloth.UpdateTimeManager::get_UpdatePerSecond()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UpdateTimeManager_get_UpdatePerSecond_m096BADE4C3E2F37E2183FE53B013221EB053EBC7_inline (UpdateTimeManager_t97A049BAF9BF24835DDE1DC2297D3A2EE9F1FB6E* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_fixedDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_mD7107AF06157FC18A50E14E0755CEE137E9A4088 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_smoothDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_smoothDeltaTime_m8C2F1AA9663A9C8A4C9DDBADD01996437B6C7625 (const RuntimeMethod* method) ;
// System.Int32 Unity.Jobs.LowLevel.Unsafe.JobsUtility::get_JobWorkerMaximumCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JobsUtility_get_JobWorkerMaximumCount_mA7EB7643AE5331192ACC594390F7870E40FB9325 (const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_mB49A5622E38FFE9589EB9B3E75573E443B8D63EC (const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MagicaCloth.MeshUtility/TetraVertex::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TetraVertex__ctor_m86010F96F65A51729B991D5ECDEC40B9665EFA4D (TetraVertex_t685EAD84F9BE929A3AF4C1B64765D8F15DA711B4* __this, const RuntimeMethod* method) 
{
	{
		// public TetraVertex() { }
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public TetraVertex() { }
		return;
	}
}
// System.Void MagicaCloth.MeshUtility/TetraVertex::.ctor(UnityEngine.Vector3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TetraVertex__ctor_m8C99DF14FC00D62D7ECF3E2445BE2B67028FFE5A (TetraVertex_t685EAD84F9BE929A3AF4C1B64765D8F15DA711B4* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		// public TetraVertex(Vector3 pos, int index)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.pos = pos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___pos0;
		__this->___pos_1 = L_0;
		// this.index = index;
		int32_t L_1 = ___index1;
		__this->___index_0 = L_1;
		// }
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
// System.Void MagicaCloth.MeshUtility/Tetra::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tetra__ctor_mC541CD73892FF58BBA75228A58EA2998B95AF681 (Tetra_tC435C7A536D03AC0F6A44D5615D916447D544799* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCC99FEF5FB440898798D170C25E96D08E5B8C8FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tCBBD5B69F271A38C97C14588F60AF8719EEC6BD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<TetraVertex> vertexList = new List<TetraVertex>();
		List_1_tCBBD5B69F271A38C97C14588F60AF8719EEC6BD3* L_0 = (List_1_tCBBD5B69F271A38C97C14588F60AF8719EEC6BD3*)il2cpp_codegen_object_new(List_1_tCBBD5B69F271A38C97C14588F60AF8719EEC6BD3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCC99FEF5FB440898798D170C25E96D08E5B8C8FC(L_0, List_1__ctor_mCC99FEF5FB440898798D170C25E96D08E5B8C8FC_RuntimeMethod_var);
		__this->___vertexList_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___vertexList_0), (void*)L_0);
		// public Tetra()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
// System.Void MagicaCloth.MeshUtility/Tetra::.ctor(MagicaCloth.MeshUtility/TetraVertex,MagicaCloth.MeshUtility/TetraVertex,MagicaCloth.MeshUtility/TetraVertex,MagicaCloth.MeshUtility/TetraVertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tetra__ctor_m849C7AAD9A2478115B0FCAFB7ABBD551CB7A425B (Tetra_tC435C7A536D03AC0F6A44D5615D916447D544799* __this, TetraVertex_t685EAD84F9BE929A3AF4C1B64765D8F15DA711B4* ___a0, TetraVertex_t685EAD84F9BE929A3AF4C1B64765D8F15DA711B4* ___b1, TetraVertex_t685EAD84F9BE929A3AF4C1B64765D8F15DA711B4* ___c2, TetraVertex_t685EAD84F9BE929A3AF4C1B64765D8F15DA711B4* ___d3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m8D735C1D220B77F3B6189E6374181DB53DDA8DAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCC99FEF5FB440898798D170C25E96D08E5B8C8FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tCBBD5B69F271A38C97C14588F60AF8719EEC6BD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<TetraVertex> vertexList = new List<TetraVertex>();
		List_1_tCBBD5B69F271A38C97C14588F60AF8719EEC6BD3* L_0 = (List_1_tCBBD5B69F271A38C97C14588F60AF8719EEC6BD3*)il2cpp_codegen_object_new(List_1_tCBBD5B69F271A38C97C14588F60AF8719EEC6BD3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCC99FEF5FB440898798D170C25E96D08E5B8C8FC(L_0, List_1__ctor_mCC99FEF5FB440898798D170C25E96D08E5B8C8FC_RuntimeMethod_var);
		__this->___vertexList_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___vertexList_0), (void*)L_0);
		// public Tetra(TetraVertex a, TetraVertex b, TetraVertex c, TetraVertex d)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// vertexList.Add(a);
		List_1_tCBBD5B69F271A38C97C14588F60AF8719EEC6BD3* L_1 = __this->___vertexList_0;
		TetraVertex_t685EAD84F9BE929A3AF4C1B64765D8F15DA711B4* L_2 = ___a0;
		NullCheck(L_1);
		List_1_Add_m8D735C1D220B77F3B6189E6374181DB53DDA8DAB_inline(L_1, L_2, List_1_Add_m8D735C1D220B77F3B6189E6374181DB53DDA8DAB_RuntimeMethod_var);
		// vertexList.Add(b);
		List_1_tCBBD5B69F271A38C97C14588F60AF8719EEC6BD3* L_3 = __this->___vertexList_0;
		TetraVertex_t685EAD84F9BE929A3AF4C1B64765D8F15DA711B4* L_4 = ___b1;
		NullCheck(L_3);
		List_1_Add_m8D735C1D220B77F3B6189E6374181DB53DDA8DAB_inline(L_3, L_4, List_1_Add_m8D735C1D220B77F3B6189E6374181DB53DDA8DAB_RuntimeMethod_var);
		// vertexList.Add(c);
		List_1_tCBBD5B69F271A38C97C14588F60AF8719EEC6BD3* L_5 = __this->___vertexList_0;
		TetraVertex_t685EAD84F9BE929A3AF4C1B64765D8F15DA711B4* L_6 = ___c2;
		NullCheck(L_5);
		List_1_Add_m8D735C1D220B77F3B6189E6374181DB53DDA8DAB_inline(L_5, L_6, List_1_Add_m8D735C1D220B77F3B6189E6374181DB53DDA8DAB_RuntimeMethod_var);
		// vertexList.Add(d);
		List_1_tCBBD5B69F271A38C97C14588F60AF8719EEC6BD3* L_7 = __this->___vertexList_0;
		TetraVertex_t685EAD84F9BE929A3AF4C1B64765D8F15DA711B4* L_8 = ___d3;
		NullCheck(L_7);
		List_1_Add_m8D735C1D220B77F3B6189E6374181DB53DDA8DAB_inline(L_7, L_8, List_1_Add_m8D735C1D220B77F3B6189E6374181DB53DDA8DAB_RuntimeMethod_var);
		// CalcSize();
		Tetra_CalcSize_m96F741F35792D0F425E4371B3F9B645A9E7DDE39(__this, NULL);
		// }
		return;
	}
}
// System.UInt64 MagicaCloth.MeshUtility/Tetra::GetTetraHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Tetra_GetTetraHash_m94F9761AA0F88E6544E354E076162BC3F9CBB112 (Tetra_tC435C7A536D03AC0F6A44D5615D916447D544799* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mB0D6026D90E629438C7EFFC066FF47F09949238D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return DataUtility.PackQuater(vertexList[0].index, vertexList[1].index, vertexList[2].index, vertexList[3].index);
		List_1_tCBBD5B69F271A38C97C14588F60AF8719EEC6BD3* L_0 = __this->___vertexList_0;
		NullCheck(L_0);
		TetraVertex_t685EAD84F9BE929A3AF4C1B64765D8F15DA711B4* L_1;
		L_1 = List_1_get_Item_mB0D6026D90E629438C7EFFC066FF47F09949238D(L_0, 0, List_1_get_Item_mB0D6026D90E629438C7EFFC066FF47F09949238D_RuntimeMethod_var);
		NullCheck(L_1);
		int32_t L_2 = L_1->___index_0;
		List_1_tCBBD5B69F271A38C97C14588F60AF8719EEC6BD3* L_3 = __this->___vertexList_0;
		NullCheck(L_3);
		TetraVertex_t685EAD84F9BE929A3AF4C1B64765D8F15DA711B4* L_4;
		L_4 = List_1_get_Item_mB0D6026D90E629438C7EFFC066FF47F09949238D(L_3, 1, List_1_get_Item_mB0D6026D90E629438C7EFFC066FF47F09949238D_RuntimeMethod_var);
		NullCheck(L_4);
		int32_t L_5 = L_4->___index_0;
		List_1_tCBBD5B69F271A38C97C14588F60AF8719EEC6BD3* L_6 = __this->___vertexList_0;
		NullCheck(L_6);
		TetraVertex_t685EAD84F9BE929A3AF4C1B64765D8F15DA711B4* L_7;
		L_7 = List_1_get_Item_mB0D6026D90E629438C7EFFC066FF47F09949238D(L_6, 2, List_1_get_Item_mB0D6026D90E629438C7EFFC066FF47F09949238D_RuntimeMethod_var);
		NullCheck(L_7);
		int32_t L_8 = L_7->___index_0;
		List_1_tCBBD5B69F271A38C97C14588F60AF8719EEC6BD3* L_9 = __this->___vertexList_0;
		NullCheck(L_9);
		TetraVertex_t685EAD84F9BE929A3AF4C1B64765D8F15DA711B4* L_10;
		L_10 = List_1_get_Item_mB0D6026D90E629438C7EFFC066FF47F09949238D(L_9, 3, List_1_get_Item_mB0D6026D90E629438C7EFFC066FF47F09949238D_RuntimeMethod_var);
		NullCheck(L_10);
		int32_t L_11 = L_10->___index_0;
		uint64_t L_12;
		L_12 = DataUtility_PackQuater_mC172D78E5E89551C4FC73E586F8169CEBEDF6EB5(L_2, L_5, L_8, L_11, NULL);
		return L_12;
	}
}
// System.Void MagicaCloth.MeshUtility/Tetra::CalcCircumcircle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tetra_CalcCircumcircle_mD08986C9885217A0454F22A2E724CA667898D44E (Tetra_tC435C7A536D03AC0F6A44D5615D916447D544799* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mB0D6026D90E629438C7EFFC066FF47F09949238D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 V_9;
	memset((&V_9), 0, sizeof(V_9));
	float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 V_10;
	memset((&V_10), 0, sizeof(V_10));
	float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 V_11;
	memset((&V_11), 0, sizeof(V_11));
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	float V_15 = 0.0f;
	float V_16 = 0.0f;
	{
		// var p1 = vertexList[0].pos;
		List_1_tCBBD5B69F271A38C97C14588F60AF8719EEC6BD3* L_0 = __this->___vertexList_0;
		NullCheck(L_0);
		TetraVertex_t685EAD84F9BE929A3AF4C1B64765D8F15DA711B4* L_1;
		L_1 = List_1_get_Item_mB0D6026D90E629438C7EFFC066FF47F09949238D(L_0, 0, List_1_get_Item_mB0D6026D90E629438C7EFFC066FF47F09949238D_RuntimeMethod_var);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = L_1->___pos_1;
		V_0 = L_2;
		// var p2 = vertexList[1].pos;
		List_1_tCBBD5B69F271A38C97C14588F60AF8719EEC6BD3* L_3 = __this->___vertexList_0;
		NullCheck(L_3);
		TetraVertex_t685EAD84F9BE929A3AF4C1B64765D8F15DA711B4* L_4;
		L_4 = List_1_get_Item_mB0D6026D90E629438C7EFFC066FF47F09949238D(L_3, 1, List_1_get_Item_mB0D6026D90E629438C7EFFC066FF47F09949238D_RuntimeMethod_var);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = L_4->___pos_1;
		V_1 = L_5;
		// var p3 = vertexList[2].pos;
		List_1_tCBBD5B69F271A38C97C14588F60AF8719EEC6BD3* L_6 = __this->___vertexList_0;
		NullCheck(L_6);
		TetraVertex_t685EAD84F9BE929A3AF4C1B64765D8F15DA711B4* L_7;
		L_7 = List_1_get_Item_mB0D6026D90E629438C7EFFC066FF47F09949238D(L_6, 2, List_1_get_Item_mB0D6026D90E629438C7EFFC066FF47F09949238D_RuntimeMethod_var);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = L_7->___pos_1;
		V_2 = L_8;
		// var p4 = vertexList[3].pos;
		List_1_tCBBD5B69F271A38C97C14588F60AF8719EEC6BD3* L_9 = __this->___vertexList_0;
		NullCheck(L_9);
		TetraVertex_t685EAD84F9BE929A3AF4C1B64765D8F15DA711B4* L_10;
		L_10 = List_1_get_Item_mB0D6026D90E629438C7EFFC066FF47F09949238D(L_9, 3, List_1_get_Item_mB0D6026D90E629438C7EFFC066FF47F09949238D_RuntimeMethod_var);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = L_10->___pos_1;
		V_3 = L_11;
		// float4x4 a = new float4x4(
		//     new float4(p1.x, p1.y, p1.z, 1),
		//     new float4(p2.x, p2.y, p2.z, 1),
		//     new float4(p3.x, p3.y, p3.z, 1),
		//     new float4(p4.x, p4.y, p4.z, 1)
		//     );
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_0;
		float L_13 = L_12.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_0;
		float L_15 = L_14.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_0;
		float L_17 = L_16.___z_4;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_18;
		memset((&L_18), 0, sizeof(L_18));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_18), L_13, L_15, L_17, (1.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_1;
		float L_20 = L_19.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_1;
		float L_22 = L_21.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_1;
		float L_24 = L_23.___z_4;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_25;
		memset((&L_25), 0, sizeof(L_25));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_25), L_20, L_22, L_24, (1.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_2;
		float L_27 = L_26.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = V_2;
		float L_29 = L_28.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_2;
		float L_31 = L_30.___z_4;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_32;
		memset((&L_32), 0, sizeof(L_32));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_32), L_27, L_29, L_31, (1.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = V_3;
		float L_34 = L_33.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = V_3;
		float L_36 = L_35.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = V_3;
		float L_38 = L_37.___z_4;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_39;
		memset((&L_39), 0, sizeof(L_39));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_39), L_34, L_36, L_38, (1.0f), /*hidden argument*/NULL);
		float4x4__ctor_mF0B7C823E36025A539E8024123057CAC380E97EF_inline((&V_4), L_18, L_25, L_32, L_39, NULL);
		// float s0 = Mathf.Pow(p1.x, 2.0f) + Mathf.Pow(p1.y, 2.0f) + Mathf.Pow(p1.z, 2.0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = V_0;
		float L_41 = L_40.___x_2;
		float L_42;
		L_42 = powf(L_41, (2.0f));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_0;
		float L_44 = L_43.___y_3;
		float L_45;
		L_45 = powf(L_44, (2.0f));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46 = V_0;
		float L_47 = L_46.___z_4;
		float L_48;
		L_48 = powf(L_47, (2.0f));
		V_5 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_42, L_45)), L_48));
		// float s1 = Mathf.Pow(p2.x, 2.0f) + Mathf.Pow(p2.y, 2.0f) + Mathf.Pow(p2.z, 2.0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49 = V_1;
		float L_50 = L_49.___x_2;
		float L_51;
		L_51 = powf(L_50, (2.0f));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52 = V_1;
		float L_53 = L_52.___y_3;
		float L_54;
		L_54 = powf(L_53, (2.0f));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55 = V_1;
		float L_56 = L_55.___z_4;
		float L_57;
		L_57 = powf(L_56, (2.0f));
		V_6 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_51, L_54)), L_57));
		// float s2 = Mathf.Pow(p3.x, 2.0f) + Mathf.Pow(p3.y, 2.0f) + Mathf.Pow(p3.z, 2.0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58 = V_2;
		float L_59 = L_58.___x_2;
		float L_60;
		L_60 = powf(L_59, (2.0f));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61 = V_2;
		float L_62 = L_61.___y_3;
		float L_63;
		L_63 = powf(L_62, (2.0f));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64 = V_2;
		float L_65 = L_64.___z_4;
		float L_66;
		L_66 = powf(L_65, (2.0f));
		V_7 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_60, L_63)), L_66));
		// float s3 = Mathf.Pow(p4.x, 2.0f) + Mathf.Pow(p4.y, 2.0f) + Mathf.Pow(p4.z, 2.0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67 = V_3;
		float L_68 = L_67.___x_2;
		float L_69;
		L_69 = powf(L_68, (2.0f));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70 = V_3;
		float L_71 = L_70.___y_3;
		float L_72;
		L_72 = powf(L_71, (2.0f));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73 = V_3;
		float L_74 = L_73.___z_4;
		float L_75;
		L_75 = powf(L_74, (2.0f));
		V_8 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_69, L_72)), L_75));
		// float4x4 dx = new float4x4(
		//     new float4(s0, p1.y, p1.z, 1),
		//     new float4(s1, p2.y, p2.z, 1),
		//     new float4(s2, p3.y, p3.z, 1),
		//     new float4(s3, p4.y, p4.z, 1)
		//     );
		float L_76 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77 = V_0;
		float L_78 = L_77.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79 = V_0;
		float L_80 = L_79.___z_4;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_81;
		memset((&L_81), 0, sizeof(L_81));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_81), L_76, L_78, L_80, (1.0f), /*hidden argument*/NULL);
		float L_82 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83 = V_1;
		float L_84 = L_83.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85 = V_1;
		float L_86 = L_85.___z_4;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_87;
		memset((&L_87), 0, sizeof(L_87));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_87), L_82, L_84, L_86, (1.0f), /*hidden argument*/NULL);
		float L_88 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89 = V_2;
		float L_90 = L_89.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_91 = V_2;
		float L_92 = L_91.___z_4;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_93;
		memset((&L_93), 0, sizeof(L_93));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_93), L_88, L_90, L_92, (1.0f), /*hidden argument*/NULL);
		float L_94 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95 = V_3;
		float L_96 = L_95.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_97 = V_3;
		float L_98 = L_97.___z_4;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_99;
		memset((&L_99), 0, sizeof(L_99));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_99), L_94, L_96, L_98, (1.0f), /*hidden argument*/NULL);
		float4x4__ctor_mF0B7C823E36025A539E8024123057CAC380E97EF_inline((&V_9), L_81, L_87, L_93, L_99, NULL);
		// float4x4 dy = new float4x4(
		//     new float4(s0, p1.x, p1.z, 1),
		//     new float4(s1, p2.x, p2.z, 1),
		//     new float4(s2, p3.x, p3.z, 1),
		//     new float4(s3, p4.x, p4.z, 1)
		//     );
		float L_100 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_101 = V_0;
		float L_102 = L_101.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_103 = V_0;
		float L_104 = L_103.___z_4;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_105;
		memset((&L_105), 0, sizeof(L_105));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_105), L_100, L_102, L_104, (1.0f), /*hidden argument*/NULL);
		float L_106 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_107 = V_1;
		float L_108 = L_107.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_109 = V_1;
		float L_110 = L_109.___z_4;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_111;
		memset((&L_111), 0, sizeof(L_111));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_111), L_106, L_108, L_110, (1.0f), /*hidden argument*/NULL);
		float L_112 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_113 = V_2;
		float L_114 = L_113.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_115 = V_2;
		float L_116 = L_115.___z_4;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_117;
		memset((&L_117), 0, sizeof(L_117));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_117), L_112, L_114, L_116, (1.0f), /*hidden argument*/NULL);
		float L_118 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_119 = V_3;
		float L_120 = L_119.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_121 = V_3;
		float L_122 = L_121.___z_4;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_123;
		memset((&L_123), 0, sizeof(L_123));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_123), L_118, L_120, L_122, (1.0f), /*hidden argument*/NULL);
		float4x4__ctor_mF0B7C823E36025A539E8024123057CAC380E97EF_inline((&V_10), L_105, L_111, L_117, L_123, NULL);
		// float4x4 dz = new float4x4(
		//     new float4(s0, p1.x, p1.y, 1),
		//     new float4(s1, p2.x, p2.y, 1),
		//     new float4(s2, p3.x, p3.y, 1),
		//     new float4(s3, p4.x, p4.y, 1)
		//     );
		float L_124 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_125 = V_0;
		float L_126 = L_125.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_127 = V_0;
		float L_128 = L_127.___y_3;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_129;
		memset((&L_129), 0, sizeof(L_129));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_129), L_124, L_126, L_128, (1.0f), /*hidden argument*/NULL);
		float L_130 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_131 = V_1;
		float L_132 = L_131.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_133 = V_1;
		float L_134 = L_133.___y_3;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_135;
		memset((&L_135), 0, sizeof(L_135));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_135), L_130, L_132, L_134, (1.0f), /*hidden argument*/NULL);
		float L_136 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_137 = V_2;
		float L_138 = L_137.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_139 = V_2;
		float L_140 = L_139.___y_3;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_141;
		memset((&L_141), 0, sizeof(L_141));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_141), L_136, L_138, L_140, (1.0f), /*hidden argument*/NULL);
		float L_142 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_143 = V_3;
		float L_144 = L_143.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_145 = V_3;
		float L_146 = L_145.___y_3;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_147;
		memset((&L_147), 0, sizeof(L_147));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_147), L_142, L_144, L_146, (1.0f), /*hidden argument*/NULL);
		float4x4__ctor_mF0B7C823E36025A539E8024123057CAC380E97EF_inline((&V_11), L_129, L_135, L_141, L_147, NULL);
		// float4x4 c = new float4x4(
		//     new float4(s0, p1.x, p1.y, p1.z),
		//     new float4(s1, p2.x, p2.y, p2.z),
		//     new float4(s2, p3.x, p3.y, p3.z),
		//     new float4(s3, p4.x, p4.y, p4.z)
		//     );
		float L_148 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_149 = V_0;
		float L_150 = L_149.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_151 = V_0;
		float L_152 = L_151.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_153 = V_0;
		float L_154 = L_153.___z_4;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_155;
		memset((&L_155), 0, sizeof(L_155));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_155), L_148, L_150, L_152, L_154, /*hidden argument*/NULL);
		float L_156 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_157 = V_1;
		float L_158 = L_157.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_159 = V_1;
		float L_160 = L_159.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_161 = V_1;
		float L_162 = L_161.___z_4;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_163;
		memset((&L_163), 0, sizeof(L_163));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_163), L_156, L_158, L_160, L_162, /*hidden argument*/NULL);
		float L_164 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_165 = V_2;
		float L_166 = L_165.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_167 = V_2;
		float L_168 = L_167.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_169 = V_2;
		float L_170 = L_169.___z_4;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_171;
		memset((&L_171), 0, sizeof(L_171));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_171), L_164, L_166, L_168, L_170, /*hidden argument*/NULL);
		float L_172 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_173 = V_3;
		float L_174 = L_173.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_175 = V_3;
		float L_176 = L_175.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_177 = V_3;
		float L_178 = L_177.___z_4;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_179;
		memset((&L_179), 0, sizeof(L_179));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_179), L_172, L_174, L_176, L_178, /*hidden argument*/NULL);
		float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 L_180;
		memset((&L_180), 0, sizeof(L_180));
		float4x4__ctor_mF0B7C823E36025A539E8024123057CAC380E97EF_inline((&L_180), L_155, L_163, L_171, L_179, /*hidden argument*/NULL);
		// float a0 = math.determinant(a);
		float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 L_181 = V_4;
		float L_182;
		L_182 = math_determinant_mBFEB3A5E7A0BFA0D6C8165D372BF527C3835DC59(L_181, NULL);
		V_12 = L_182;
		// float dx0 = math.determinant(dx);
		float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 L_183 = V_9;
		float L_184;
		L_184 = math_determinant_mBFEB3A5E7A0BFA0D6C8165D372BF527C3835DC59(L_183, NULL);
		V_13 = L_184;
		// float dy0 = -math.determinant(dy);
		float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 L_185 = V_10;
		float L_186;
		L_186 = math_determinant_mBFEB3A5E7A0BFA0D6C8165D372BF527C3835DC59(L_185, NULL);
		V_14 = ((-L_186));
		// float dz0 = math.determinant(dz);
		float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 L_187 = V_11;
		float L_188;
		L_188 = math_determinant_mBFEB3A5E7A0BFA0D6C8165D372BF527C3835DC59(L_187, NULL);
		V_15 = L_188;
		// float c0 = math.determinant(c);
		float L_189;
		L_189 = math_determinant_mBFEB3A5E7A0BFA0D6C8165D372BF527C3835DC59(L_180, NULL);
		V_16 = L_189;
		// circumCenter = new Vector3(dx0 / (2 * a0), dy0 / (2 * a0), dz0 / (2 * a0));
		float L_190 = V_13;
		float L_191 = V_12;
		float L_192 = V_14;
		float L_193 = V_12;
		float L_194 = V_15;
		float L_195 = V_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_196;
		memset((&L_196), 0, sizeof(L_196));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_196), ((float)(L_190/((float)il2cpp_codegen_multiply((2.0f), L_191)))), ((float)(L_192/((float)il2cpp_codegen_multiply((2.0f), L_193)))), ((float)(L_194/((float)il2cpp_codegen_multiply((2.0f), L_195)))), /*hidden argument*/NULL);
		__this->___circumCenter_1 = L_196;
		// circumRadius = Mathf.Sqrt(dx0 * dx0 + dy0 * dy0 + dz0 * dz0 - 4.0f * a0 * c0) / (2.0f * Mathf.Abs(a0));
		float L_197 = V_13;
		float L_198 = V_13;
		float L_199 = V_14;
		float L_200 = V_14;
		float L_201 = V_15;
		float L_202 = V_15;
		float L_203 = V_12;
		float L_204 = V_16;
		float L_205;
		L_205 = sqrtf(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_197, L_198)), ((float)il2cpp_codegen_multiply(L_199, L_200)))), ((float)il2cpp_codegen_multiply(L_201, L_202)))), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((4.0f), L_203)), L_204)))));
		float L_206 = V_12;
		float L_207;
		L_207 = fabsf(L_206);
		__this->___circumRadius_2 = ((float)(L_205/((float)il2cpp_codegen_multiply((2.0f), L_207))));
		// }
		return;
	}
}
// System.Boolean MagicaCloth.MeshUtility/Tetra::IntersectCircumcircle(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tetra_IntersectCircumcircle_mD4B7C023C2E25D4DBF46986FA097CA47CD5B85FF (Tetra_tC435C7A536D03AC0F6A44D5615D916447D544799* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) 
{
	{
		// return Vector3.Distance(pos, circumCenter) <= circumRadius;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___pos0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___circumCenter_1;
		float L_2;
		L_2 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_0, L_1, NULL);
		float L_3 = __this->___circumRadius_2;
		return (bool)((((int32_t)((!(((float)L_2) <= ((float)L_3)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean MagicaCloth.MeshUtility/Tetra::CheckSame(MagicaCloth.MeshUtility/Tetra)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tetra_CheckSame_m54FDC44C1712A2C0613C50969E630D02BE92F0C8 (Tetra_tC435C7A536D03AC0F6A44D5615D916447D544799* __this, Tetra_tC435C7A536D03AC0F6A44D5615D916447D544799* ___tri0, const RuntimeMethod* method) 
{
	{
		// return circumCenter == tri.circumCenter && circumRadius == tri.circumRadius;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___circumCenter_1;
		Tetra_tC435C7A536D03AC0F6A44D5615D916447D544799* L_1 = ___tri0;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = L_1->___circumCenter_1;
		bool L_3;
		L_3 = Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		float L_4 = __this->___circumRadius_2;
		Tetra_tC435C7A536D03AC0F6A44D5615D916447D544799* L_5 = ___tri0;
		NullCheck(L_5);
		float L_6 = L_5->___circumRadius_2;
		return (bool)((((float)L_4) == ((float)L_6))? 1 : 0);
	}

IL_0022:
	{
		return (bool)0;
	}
}
// System.Boolean MagicaCloth.MeshUtility/Tetra::ContainsPoint(MagicaCloth.MeshUtility/TetraVertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tetra_ContainsPoint_mF231D2A926A726DAF95926025C08A1D9EC67A0DF (Tetra_tC435C7A536D03AC0F6A44D5615D916447D544799* __this, TetraVertex_t685EAD84F9BE929A3AF4C1B64765D8F15DA711B4* ___p10, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m685AD8CD3C317AF3275A689E16B1DA52A7D11DC8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return vertexList.Contains(p1);
		List_1_tCBBD5B69F271A38C97C14588F60AF8719EEC6BD3* L_0 = __this->___vertexList_0;
		TetraVertex_t685EAD84F9BE929A3AF4C1B64765D8F15DA711B4* L_1 = ___p10;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_m685AD8CD3C317AF3275A689E16B1DA52A7D11DC8(L_0, L_1, List_1_Contains_m685AD8CD3C317AF3275A689E16B1DA52A7D11DC8_RuntimeMethod_var);
		return L_2;
	}
}
// System.Boolean MagicaCloth.MeshUtility/Tetra::ContainsPoint(MagicaCloth.MeshUtility/TetraVertex,MagicaCloth.MeshUtility/TetraVertex,MagicaCloth.MeshUtility/TetraVertex,MagicaCloth.MeshUtility/TetraVertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tetra_ContainsPoint_m7522BFA07AF532AE4EC88CE6D45680C2D0E72057 (Tetra_tC435C7A536D03AC0F6A44D5615D916447D544799* __this, TetraVertex_t685EAD84F9BE929A3AF4C1B64765D8F15DA711B4* ___p10, TetraVertex_t685EAD84F9BE929A3AF4C1B64765D8F15DA711B4* ___p21, TetraVertex_t685EAD84F9BE929A3AF4C1B64765D8F15DA711B4* ___p32, TetraVertex_t685EAD84F9BE929A3AF4C1B64765D8F15DA711B4* ___p43, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m685AD8CD3C317AF3275A689E16B1DA52A7D11DC8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return vertexList.Contains(p1) || vertexList.Contains(p2) || vertexList.Contains(p3) || vertexList.Contains(p4);
		List_1_tCBBD5B69F271A38C97C14588F60AF8719EEC6BD3* L_0 = __this->___vertexList_0;
		TetraVertex_t685EAD84F9BE929A3AF4C1B64765D8F15DA711B4* L_1 = ___p10;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_m685AD8CD3C317AF3275A689E16B1DA52A7D11DC8(L_0, L_1, List_1_Contains_m685AD8CD3C317AF3275A689E16B1DA52A7D11DC8_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0038;
		}
	}
	{
		List_1_tCBBD5B69F271A38C97C14588F60AF8719EEC6BD3* L_3 = __this->___vertexList_0;
		TetraVertex_t685EAD84F9BE929A3AF4C1B64765D8F15DA711B4* L_4 = ___p21;
		NullCheck(L_3);
		bool L_5;
		L_5 = List_1_Contains_m685AD8CD3C317AF3275A689E16B1DA52A7D11DC8(L_3, L_4, List_1_Contains_m685AD8CD3C317AF3275A689E16B1DA52A7D11DC8_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_0038;
		}
	}
	{
		List_1_tCBBD5B69F271A38C97C14588F60AF8719EEC6BD3* L_6 = __this->___vertexList_0;
		TetraVertex_t685EAD84F9BE929A3AF4C1B64765D8F15DA711B4* L_7 = ___p32;
		NullCheck(L_6);
		bool L_8;
		L_8 = List_1_Contains_m685AD8CD3C317AF3275A689E16B1DA52A7D11DC8(L_6, L_7, List_1_Contains_m685AD8CD3C317AF3275A689E16B1DA52A7D11DC8_RuntimeMethod_var);
		if (L_8)
		{
			goto IL_0038;
		}
	}
	{
		List_1_tCBBD5B69F271A38C97C14588F60AF8719EEC6BD3* L_9 = __this->___vertexList_0;
		TetraVertex_t685EAD84F9BE929A3AF4C1B64765D8F15DA711B4* L_10 = ___p43;
		NullCheck(L_9);
		bool L_11;
		L_11 = List_1_Contains_m685AD8CD3C317AF3275A689E16B1DA52A7D11DC8(L_9, L_10, List_1_Contains_m685AD8CD3C317AF3275A689E16B1DA52A7D11DC8_RuntimeMethod_var);
		return L_11;
	}

IL_0038:
	{
		return (bool)1;
	}
}
// System.Void MagicaCloth.MeshUtility/Tetra::CalcSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tetra_CalcSize_m96F741F35792D0F425E4371B3F9B645A9E7DDE39 (Tetra_tC435C7A536D03AC0F6A44D5615D916447D544799* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mB0D6026D90E629438C7EFFC066FF47F09949238D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	{
		// var wpos0 = vertexList[0].pos;
		List_1_tCBBD5B69F271A38C97C14588F60AF8719EEC6BD3* L_0 = __this->___vertexList_0;
		NullCheck(L_0);
		TetraVertex_t685EAD84F9BE929A3AF4C1B64765D8F15DA711B4* L_1;
		L_1 = List_1_get_Item_mB0D6026D90E629438C7EFFC066FF47F09949238D(L_0, 0, List_1_get_Item_mB0D6026D90E629438C7EFFC066FF47F09949238D_RuntimeMethod_var);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = L_1->___pos_1;
		V_0 = L_2;
		// var wpos1 = vertexList[1].pos;
		List_1_tCBBD5B69F271A38C97C14588F60AF8719EEC6BD3* L_3 = __this->___vertexList_0;
		NullCheck(L_3);
		TetraVertex_t685EAD84F9BE929A3AF4C1B64765D8F15DA711B4* L_4;
		L_4 = List_1_get_Item_mB0D6026D90E629438C7EFFC066FF47F09949238D(L_3, 1, List_1_get_Item_mB0D6026D90E629438C7EFFC066FF47F09949238D_RuntimeMethod_var);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = L_4->___pos_1;
		V_1 = L_5;
		// var wpos2 = vertexList[2].pos;
		List_1_tCBBD5B69F271A38C97C14588F60AF8719EEC6BD3* L_6 = __this->___vertexList_0;
		NullCheck(L_6);
		TetraVertex_t685EAD84F9BE929A3AF4C1B64765D8F15DA711B4* L_7;
		L_7 = List_1_get_Item_mB0D6026D90E629438C7EFFC066FF47F09949238D(L_6, 2, List_1_get_Item_mB0D6026D90E629438C7EFFC066FF47F09949238D_RuntimeMethod_var);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = L_7->___pos_1;
		V_2 = L_8;
		// var wpos3 = vertexList[3].pos;
		List_1_tCBBD5B69F271A38C97C14588F60AF8719EEC6BD3* L_9 = __this->___vertexList_0;
		NullCheck(L_9);
		TetraVertex_t685EAD84F9BE929A3AF4C1B64765D8F15DA711B4* L_10;
		L_10 = List_1_get_Item_mB0D6026D90E629438C7EFFC066FF47F09949238D(L_9, 3, List_1_get_Item_mB0D6026D90E629438C7EFFC066FF47F09949238D_RuntimeMethod_var);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = L_10->___pos_1;
		V_3 = L_11;
		// tetraCenter = (wpos0 + wpos1 + wpos2 + wpos3) / 4.0f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_12, L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_14, L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_16, L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_18, (4.0f), NULL);
		__this->___tetraCenter_3 = L_19;
		// float len0 = Vector3.Distance(wpos0, tetraCenter);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = __this->___tetraCenter_3;
		float L_22;
		L_22 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_20, L_21, NULL);
		V_4 = L_22;
		// float len1 = Vector3.Distance(wpos1, tetraCenter);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = __this->___tetraCenter_3;
		float L_25;
		L_25 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_23, L_24, NULL);
		V_5 = L_25;
		// float len2 = Vector3.Distance(wpos2, tetraCenter);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = __this->___tetraCenter_3;
		float L_28;
		L_28 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_26, L_27, NULL);
		V_6 = L_28;
		// float len3 = Vector3.Distance(wpos3, tetraCenter);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = __this->___tetraCenter_3;
		float L_31;
		L_31 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_29, L_30, NULL);
		V_7 = L_31;
		// tetraSize = Mathf.Max(Mathf.Max(len0, len1), Mathf.Max(len2, len3));
		float L_32 = V_4;
		float L_33 = V_5;
		float L_34;
		L_34 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_32, L_33, NULL);
		float L_35 = V_6;
		float L_36 = V_7;
		float L_37;
		L_37 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_35, L_36, NULL);
		float L_38;
		L_38 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_34, L_37, NULL);
		__this->___tetraSize_4 = L_38;
		// }
		return;
	}
}
// System.Boolean MagicaCloth.MeshUtility/Tetra::Verification()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tetra_Verification_mB9A518462748F3D83892AE6A4FEC6760B33694D4 (Tetra_tC435C7A536D03AC0F6A44D5615D916447D544799* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mB0D6026D90E629438C7EFFC066FF47F09949238D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// var wpos0 = vertexList[0].pos;
		List_1_tCBBD5B69F271A38C97C14588F60AF8719EEC6BD3* L_0 = __this->___vertexList_0;
		NullCheck(L_0);
		TetraVertex_t685EAD84F9BE929A3AF4C1B64765D8F15DA711B4* L_1;
		L_1 = List_1_get_Item_mB0D6026D90E629438C7EFFC066FF47F09949238D(L_0, 0, List_1_get_Item_mB0D6026D90E629438C7EFFC066FF47F09949238D_RuntimeMethod_var);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = L_1->___pos_1;
		V_0 = L_2;
		// var wpos1 = vertexList[1].pos;
		List_1_tCBBD5B69F271A38C97C14588F60AF8719EEC6BD3* L_3 = __this->___vertexList_0;
		NullCheck(L_3);
		TetraVertex_t685EAD84F9BE929A3AF4C1B64765D8F15DA711B4* L_4;
		L_4 = List_1_get_Item_mB0D6026D90E629438C7EFFC066FF47F09949238D(L_3, 1, List_1_get_Item_mB0D6026D90E629438C7EFFC066FF47F09949238D_RuntimeMethod_var);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = L_4->___pos_1;
		V_1 = L_5;
		// var wpos2 = vertexList[2].pos;
		List_1_tCBBD5B69F271A38C97C14588F60AF8719EEC6BD3* L_6 = __this->___vertexList_0;
		NullCheck(L_6);
		TetraVertex_t685EAD84F9BE929A3AF4C1B64765D8F15DA711B4* L_7;
		L_7 = List_1_get_Item_mB0D6026D90E629438C7EFFC066FF47F09949238D(L_6, 2, List_1_get_Item_mB0D6026D90E629438C7EFFC066FF47F09949238D_RuntimeMethod_var);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = L_7->___pos_1;
		V_2 = L_8;
		// var wpos3 = vertexList[3].pos;
		List_1_tCBBD5B69F271A38C97C14588F60AF8719EEC6BD3* L_9 = __this->___vertexList_0;
		NullCheck(L_9);
		TetraVertex_t685EAD84F9BE929A3AF4C1B64765D8F15DA711B4* L_10;
		L_10 = List_1_get_Item_mB0D6026D90E629438C7EFFC066FF47F09949238D(L_9, 3, List_1_get_Item_mB0D6026D90E629438C7EFFC066FF47F09949238D_RuntimeMethod_var);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = L_10->___pos_1;
		V_3 = L_11;
		// var n = Vector3.Cross(wpos0 - wpos1, wpos0 - wpos2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_12, L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_15, L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_Cross_m77F64620D73934C56BEE37A64016DBDCB9D21DB8_inline(L_14, L_17, NULL);
		V_4 = L_18;
		// if (n.magnitude < 0.00001f)
		float L_19;
		L_19 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_4), NULL);
		if ((!(((float)L_19) < ((float)(9.99999975E-06f)))))
		{
			goto IL_006d;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_006d:
	{
		// n.Normalize();
		Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline((&V_4), NULL);
		// var v = wpos3 - wpos0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_20, L_21, NULL);
		V_5 = L_22;
		// var h = Vector3.Dot(n, v);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_5;
		float L_25;
		L_25 = Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline(L_23, L_24, NULL);
		// if (Mathf.Abs(h) < (tetraSize * 0.2f))
		float L_26;
		L_26 = fabsf(L_25);
		float L_27 = __this->___tetraSize_4;
		if ((!(((float)L_26) < ((float)((float)il2cpp_codegen_multiply(L_27, (0.200000003f)))))))
		{
			goto IL_009b;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_009b:
	{
		// return true;
		return (bool)1;
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
// System.Text.StringBuilder MagicaCloth.StaticStringBuilder::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StaticStringBuilder_get_Instance_m825F310F1BF39788D163BA5F5F094ECE2FD51BB1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StaticStringBuilder_t83D65DAE57EC5E71EFD7814BB04819B2AE8A0054_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return stringBuilder;
		il2cpp_codegen_runtime_class_init_inline(StaticStringBuilder_t83D65DAE57EC5E71EFD7814BB04819B2AE8A0054_il2cpp_TypeInfo_var);
		StringBuilder_t* L_0 = ((StaticStringBuilder_t83D65DAE57EC5E71EFD7814BB04819B2AE8A0054_StaticFields*)il2cpp_codegen_static_fields_for(StaticStringBuilder_t83D65DAE57EC5E71EFD7814BB04819B2AE8A0054_il2cpp_TypeInfo_var))->___stringBuilder_0;
		return L_0;
	}
}
// System.Void MagicaCloth.StaticStringBuilder::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StaticStringBuilder_Clear_mE611EDF768F651FE99D659866EB366CED2AFEC2F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StaticStringBuilder_t83D65DAE57EC5E71EFD7814BB04819B2AE8A0054_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// stringBuilder.Length = 0;
		il2cpp_codegen_runtime_class_init_inline(StaticStringBuilder_t83D65DAE57EC5E71EFD7814BB04819B2AE8A0054_il2cpp_TypeInfo_var);
		StringBuilder_t* L_0 = ((StaticStringBuilder_t83D65DAE57EC5E71EFD7814BB04819B2AE8A0054_StaticFields*)il2cpp_codegen_static_fields_for(StaticStringBuilder_t83D65DAE57EC5E71EFD7814BB04819B2AE8A0054_il2cpp_TypeInfo_var))->___stringBuilder_0;
		NullCheck(L_0);
		StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(L_0, 0, NULL);
		// }
		return;
	}
}
// System.Text.StringBuilder MagicaCloth.StaticStringBuilder::Append(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StaticStringBuilder_Append_m7175138116C4A5DAB5386C5AE6BCF5B122FD38A5 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StaticStringBuilder_t83D65DAE57EC5E71EFD7814BB04819B2AE8A0054_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < args.Length; i++)
		V_0 = 0;
		goto IL_0016;
	}

IL_0004:
	{
		// stringBuilder.Append(args[i]);
		il2cpp_codegen_runtime_class_init_inline(StaticStringBuilder_t83D65DAE57EC5E71EFD7814BB04819B2AE8A0054_il2cpp_TypeInfo_var);
		StringBuilder_t* L_0 = ((StaticStringBuilder_t83D65DAE57EC5E71EFD7814BB04819B2AE8A0054_StaticFields*)il2cpp_codegen_static_fields_for(StaticStringBuilder_t83D65DAE57EC5E71EFD7814BB04819B2AE8A0054_il2cpp_TypeInfo_var))->___stringBuilder_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___args0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_0);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_0, L_4, NULL);
		// for (int i = 0; i < args.Length; i++)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0016:
	{
		// for (int i = 0; i < args.Length; i++)
		int32_t L_7 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = ___args0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// return stringBuilder;
		il2cpp_codegen_runtime_class_init_inline(StaticStringBuilder_t83D65DAE57EC5E71EFD7814BB04819B2AE8A0054_il2cpp_TypeInfo_var);
		StringBuilder_t* L_9 = ((StaticStringBuilder_t83D65DAE57EC5E71EFD7814BB04819B2AE8A0054_StaticFields*)il2cpp_codegen_static_fields_for(StaticStringBuilder_t83D65DAE57EC5E71EFD7814BB04819B2AE8A0054_il2cpp_TypeInfo_var))->___stringBuilder_0;
		return L_9;
	}
}
// System.Text.StringBuilder MagicaCloth.StaticStringBuilder::AppendLine(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StaticStringBuilder_AppendLine_m20F3CFD2F88BC519616CD51BF556866840A32E48 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StaticStringBuilder_t83D65DAE57EC5E71EFD7814BB04819B2AE8A0054_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < args.Length; i++)
		V_0 = 0;
		goto IL_0016;
	}

IL_0004:
	{
		// stringBuilder.Append(args[i]);
		il2cpp_codegen_runtime_class_init_inline(StaticStringBuilder_t83D65DAE57EC5E71EFD7814BB04819B2AE8A0054_il2cpp_TypeInfo_var);
		StringBuilder_t* L_0 = ((StaticStringBuilder_t83D65DAE57EC5E71EFD7814BB04819B2AE8A0054_StaticFields*)il2cpp_codegen_static_fields_for(StaticStringBuilder_t83D65DAE57EC5E71EFD7814BB04819B2AE8A0054_il2cpp_TypeInfo_var))->___stringBuilder_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___args0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_0);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_0, L_4, NULL);
		// for (int i = 0; i < args.Length; i++)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0016:
	{
		// for (int i = 0; i < args.Length; i++)
		int32_t L_7 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = ___args0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// stringBuilder.Append("\n");
		il2cpp_codegen_runtime_class_init_inline(StaticStringBuilder_t83D65DAE57EC5E71EFD7814BB04819B2AE8A0054_il2cpp_TypeInfo_var);
		StringBuilder_t* L_9 = ((StaticStringBuilder_t83D65DAE57EC5E71EFD7814BB04819B2AE8A0054_StaticFields*)il2cpp_codegen_static_fields_for(StaticStringBuilder_t83D65DAE57EC5E71EFD7814BB04819B2AE8A0054_il2cpp_TypeInfo_var))->___stringBuilder_0;
		NullCheck(L_9);
		StringBuilder_t* L_10;
		L_10 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_9, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
		// return stringBuilder;
		StringBuilder_t* L_11 = ((StaticStringBuilder_t83D65DAE57EC5E71EFD7814BB04819B2AE8A0054_StaticFields*)il2cpp_codegen_static_fields_for(StaticStringBuilder_t83D65DAE57EC5E71EFD7814BB04819B2AE8A0054_il2cpp_TypeInfo_var))->___stringBuilder_0;
		return L_11;
	}
}
// System.Text.StringBuilder MagicaCloth.StaticStringBuilder::AppendLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StaticStringBuilder_AppendLine_mBA0AA8AD66B4406C61FB94992A549DFBB532484D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StaticStringBuilder_t83D65DAE57EC5E71EFD7814BB04819B2AE8A0054_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// stringBuilder.Append("\n");
		il2cpp_codegen_runtime_class_init_inline(StaticStringBuilder_t83D65DAE57EC5E71EFD7814BB04819B2AE8A0054_il2cpp_TypeInfo_var);
		StringBuilder_t* L_0 = ((StaticStringBuilder_t83D65DAE57EC5E71EFD7814BB04819B2AE8A0054_StaticFields*)il2cpp_codegen_static_fields_for(StaticStringBuilder_t83D65DAE57EC5E71EFD7814BB04819B2AE8A0054_il2cpp_TypeInfo_var))->___stringBuilder_0;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_0, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
		// return stringBuilder;
		StringBuilder_t* L_2 = ((StaticStringBuilder_t83D65DAE57EC5E71EFD7814BB04819B2AE8A0054_StaticFields*)il2cpp_codegen_static_fields_for(StaticStringBuilder_t83D65DAE57EC5E71EFD7814BB04819B2AE8A0054_il2cpp_TypeInfo_var))->___stringBuilder_0;
		return L_2;
	}
}
// System.String MagicaCloth.StaticStringBuilder::AppendToString(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StaticStringBuilder_AppendToString_m523EA6277E9941C66994B089B567ABBB5AD5F20F (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StaticStringBuilder_t83D65DAE57EC5E71EFD7814BB04819B2AE8A0054_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// stringBuilder.Length = 0;
		il2cpp_codegen_runtime_class_init_inline(StaticStringBuilder_t83D65DAE57EC5E71EFD7814BB04819B2AE8A0054_il2cpp_TypeInfo_var);
		StringBuilder_t* L_0 = ((StaticStringBuilder_t83D65DAE57EC5E71EFD7814BB04819B2AE8A0054_StaticFields*)il2cpp_codegen_static_fields_for(StaticStringBuilder_t83D65DAE57EC5E71EFD7814BB04819B2AE8A0054_il2cpp_TypeInfo_var))->___stringBuilder_0;
		NullCheck(L_0);
		StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(L_0, 0, NULL);
		// for (int i = 0; i < args.Length; i++)
		V_0 = 0;
		goto IL_0021;
	}

IL_000f:
	{
		// stringBuilder.Append(args[i]);
		il2cpp_codegen_runtime_class_init_inline(StaticStringBuilder_t83D65DAE57EC5E71EFD7814BB04819B2AE8A0054_il2cpp_TypeInfo_var);
		StringBuilder_t* L_1 = ((StaticStringBuilder_t83D65DAE57EC5E71EFD7814BB04819B2AE8A0054_StaticFields*)il2cpp_codegen_static_fields_for(StaticStringBuilder_t83D65DAE57EC5E71EFD7814BB04819B2AE8A0054_il2cpp_TypeInfo_var))->___stringBuilder_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args0;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_1);
		StringBuilder_t* L_6;
		L_6 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_1, L_5, NULL);
		// for (int i = 0; i < args.Length; i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0021:
	{
		// for (int i = 0; i < args.Length; i++)
		int32_t L_8 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = ___args0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_000f;
		}
	}
	{
		// return stringBuilder.ToString();
		il2cpp_codegen_runtime_class_init_inline(StaticStringBuilder_t83D65DAE57EC5E71EFD7814BB04819B2AE8A0054_il2cpp_TypeInfo_var);
		StringBuilder_t* L_10 = ((StaticStringBuilder_t83D65DAE57EC5E71EFD7814BB04819B2AE8A0054_StaticFields*)il2cpp_codegen_static_fields_for(StaticStringBuilder_t83D65DAE57EC5E71EFD7814BB04819B2AE8A0054_il2cpp_TypeInfo_var))->___stringBuilder_0;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_10);
		return L_11;
	}
}
// System.String MagicaCloth.StaticStringBuilder::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StaticStringBuilder_ToString_mEAFC5C511357C15424D46013A1C9DE9BE4CBA413 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StaticStringBuilder_t83D65DAE57EC5E71EFD7814BB04819B2AE8A0054_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return stringBuilder.ToString();
		il2cpp_codegen_runtime_class_init_inline(StaticStringBuilder_t83D65DAE57EC5E71EFD7814BB04819B2AE8A0054_il2cpp_TypeInfo_var);
		StringBuilder_t* L_0 = ((StaticStringBuilder_t83D65DAE57EC5E71EFD7814BB04819B2AE8A0054_StaticFields*)il2cpp_codegen_static_fields_for(StaticStringBuilder_t83D65DAE57EC5E71EFD7814BB04819B2AE8A0054_il2cpp_TypeInfo_var))->___stringBuilder_0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		return L_1;
	}
}
// System.Void MagicaCloth.StaticStringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StaticStringBuilder__ctor_m2E6D52F67B42A053335B368BFE24B1FD7E251F01 (StaticStringBuilder_t83D65DAE57EC5E71EFD7814BB04819B2AE8A0054* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void MagicaCloth.StaticStringBuilder::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StaticStringBuilder__cctor_mB5B2A5D4DBD4B3D31E17E6B94E30DE52F03792C9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StaticStringBuilder_t83D65DAE57EC5E71EFD7814BB04819B2AE8A0054_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static StringBuilder stringBuilder = new StringBuilder(1024);
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5(L_0, ((int32_t)1024), NULL);
		((StaticStringBuilder_t83D65DAE57EC5E71EFD7814BB04819B2AE8A0054_StaticFields*)il2cpp_codegen_static_fields_for(StaticStringBuilder_t83D65DAE57EC5E71EFD7814BB04819B2AE8A0054_il2cpp_TypeInfo_var))->___stringBuilder_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((StaticStringBuilder_t83D65DAE57EC5E71EFD7814BB04819B2AE8A0054_StaticFields*)il2cpp_codegen_static_fields_for(StaticStringBuilder_t83D65DAE57EC5E71EFD7814BB04819B2AE8A0054_il2cpp_TypeInfo_var))->___stringBuilder_0), (void*)L_0);
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
// System.Void MagicaCloth.UpdateTimeManager::ResetFixedUpdateCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateTimeManager_ResetFixedUpdateCount_m36D2EE7207D2C7DCFE0023473A559B21344FCD93 (UpdateTimeManager_t97A049BAF9BF24835DDE1DC2297D3A2EE9F1FB6E* __this, const RuntimeMethod* method) 
{
	{
		// fixedUpdateCount = 0;
		__this->___fixedUpdateCount_6 = 0;
		// }
		return;
	}
}
// System.Void MagicaCloth.UpdateTimeManager::AddFixedUpdateCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateTimeManager_AddFixedUpdateCount_mA17C7E29DB8FBC9E06ECD83AC534BA2193BB0890 (UpdateTimeManager_t97A049BAF9BF24835DDE1DC2297D3A2EE9F1FB6E* __this, const RuntimeMethod* method) 
{
	{
		// fixedUpdateCount++;
		int32_t L_0 = __this->___fixedUpdateCount_6;
		__this->___fixedUpdateCount_6 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// }
		return;
	}
}
// System.Int32 MagicaCloth.UpdateTimeManager::get_FixedUpdateCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UpdateTimeManager_get_FixedUpdateCount_mC5CB1931DADB65CD8465BE58D21F0C18B073347B (UpdateTimeManager_t97A049BAF9BF24835DDE1DC2297D3A2EE9F1FB6E* __this, const RuntimeMethod* method) 
{
	{
		// return fixedUpdateCount;
		int32_t L_0 = __this->___fixedUpdateCount_6;
		return L_0;
	}
}
// MagicaCloth.UpdateTimeManager/UpdateMode MagicaCloth.UpdateTimeManager::GetUpdateMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UpdateTimeManager_GetUpdateMode_mA70FE280FD09F9ACE9BB9131543889E9A768EE89 (UpdateTimeManager_t97A049BAF9BF24835DDE1DC2297D3A2EE9F1FB6E* __this, const RuntimeMethod* method) 
{
	{
		// return updateMode;
		int32_t L_0 = __this->___updateMode_1;
		return L_0;
	}
}
// System.Void MagicaCloth.UpdateTimeManager::SetUpdateMode(MagicaCloth.UpdateTimeManager/UpdateMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateTimeManager_SetUpdateMode_m2595EE46086C6774CEA7DDA8CBFCE21B7C39F4AF (UpdateTimeManager_t97A049BAF9BF24835DDE1DC2297D3A2EE9F1FB6E* __this, int32_t ___mode0, const RuntimeMethod* method) 
{
	{
		// updateMode = mode;
		int32_t L_0 = ___mode0;
		__this->___updateMode_1 = L_0;
		// }
		return;
	}
}
// MagicaCloth.UpdateTimeManager/UpdateLocation MagicaCloth.UpdateTimeManager::GetUpdateLocation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UpdateTimeManager_GetUpdateLocation_mCB162BD7ED52AA53BBAC9FC615309FDB5E56FA12 (UpdateTimeManager_t97A049BAF9BF24835DDE1DC2297D3A2EE9F1FB6E* __this, const RuntimeMethod* method) 
{
	{
		// return updateLocation;
		int32_t L_0 = __this->___updateLocation_2;
		return L_0;
	}
}
// System.Void MagicaCloth.UpdateTimeManager::SetUpdateLocation(MagicaCloth.UpdateTimeManager/UpdateLocation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateTimeManager_SetUpdateLocation_m43E54C6DF1B3C267777B96F0DF270BF90670A915 (UpdateTimeManager_t97A049BAF9BF24835DDE1DC2297D3A2EE9F1FB6E* __this, int32_t ___location0, const RuntimeMethod* method) 
{
	{
		// updateLocation = location;
		int32_t L_0 = ___location0;
		__this->___updateLocation_2 = L_0;
		// }
		return;
	}
}
// System.Int32 MagicaCloth.UpdateTimeManager::get_UpdatePerSecond()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UpdateTimeManager_get_UpdatePerSecond_m096BADE4C3E2F37E2183FE53B013221EB053EBC7 (UpdateTimeManager_t97A049BAF9BF24835DDE1DC2297D3A2EE9F1FB6E* __this, const RuntimeMethod* method) 
{
	{
		// return (int)updatePerSeccond;
		int32_t L_0 = __this->___updatePerSeccond_0;
		return L_0;
	}
}
// System.Void MagicaCloth.UpdateTimeManager::SetUpdatePerSecond(MagicaCloth.UpdateTimeManager/UpdateCount)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateTimeManager_SetUpdatePerSecond_m3C3192D66BB3DEA69D43182AD9A2A64CEBF247E6 (UpdateTimeManager_t97A049BAF9BF24835DDE1DC2297D3A2EE9F1FB6E* __this, int32_t ___ucount0, const RuntimeMethod* method) 
{
	{
		// updatePerSeccond = ucount;
		int32_t L_0 = ___ucount0;
		__this->___updatePerSeccond_0 = L_0;
		// }
		return;
	}
}
// System.Single MagicaCloth.UpdateTimeManager::get_UpdateIntervalTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UpdateTimeManager_get_UpdateIntervalTime_m55B07C18C0E22BAA344E520F53B1834A03EA584E (UpdateTimeManager_t97A049BAF9BF24835DDE1DC2297D3A2EE9F1FB6E* __this, const RuntimeMethod* method) 
{
	{
		// return 1.0f / UpdatePerSecond;
		int32_t L_0;
		L_0 = UpdateTimeManager_get_UpdatePerSecond_m096BADE4C3E2F37E2183FE53B013221EB053EBC7_inline(__this, NULL);
		return ((float)((1.0f)/((float)L_0)));
	}
}
// System.Single MagicaCloth.UpdateTimeManager::get_UpdatePower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UpdateTimeManager_get_UpdatePower_m2E11446EFFB561F4C6E6311CBDCB41A596E0F143 (UpdateTimeManager_t97A049BAF9BF24835DDE1DC2297D3A2EE9F1FB6E* __this, const RuntimeMethod* method) 
{
	{
		// float power = 90.0f / (float)UpdatePerSecond;
		int32_t L_0;
		L_0 = UpdateTimeManager_get_UpdatePerSecond_m096BADE4C3E2F37E2183FE53B013221EB053EBC7_inline(__this, NULL);
		// return power;
		return ((float)((90.0f)/((float)L_0)));
	}
}
// System.Single MagicaCloth.UpdateTimeManager::get_TimeScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UpdateTimeManager_get_TimeScale_m5C78D0CE5FBA14E3B970B3C6CA5C5A3D218F10EB (UpdateTimeManager_t97A049BAF9BF24835DDE1DC2297D3A2EE9F1FB6E* __this, const RuntimeMethod* method) 
{
	{
		// return timeScale;
		float L_0 = __this->___timeScale_3;
		return L_0;
	}
}
// System.Void MagicaCloth.UpdateTimeManager::set_TimeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateTimeManager_set_TimeScale_m01A356710E7B669D9B38C4B4B5F80FE7978B655E (UpdateTimeManager_t97A049BAF9BF24835DDE1DC2297D3A2EE9F1FB6E* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// timeScale = Mathf.Clamp01(value);
		float L_0 = ___value0;
		float L_1;
		L_1 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_0, NULL);
		__this->___timeScale_3 = L_1;
		// }
		return;
	}
}
// System.Single MagicaCloth.UpdateTimeManager::get_DeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UpdateTimeManager_get_DeltaTime_mCFC38F0ECCF22F68EFEC7203B506746CEE774712 (UpdateTimeManager_t97A049BAF9BF24835DDE1DC2297D3A2EE9F1FB6E* __this, const RuntimeMethod* method) 
{
	{
		// return Time.deltaTime;
		float L_0;
		L_0 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		return L_0;
	}
}
// System.Single MagicaCloth.UpdateTimeManager::get_PhysicsDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UpdateTimeManager_get_PhysicsDeltaTime_m719276075B4C75B693B9E2C556B6E4E2E1209DF8 (UpdateTimeManager_t97A049BAF9BF24835DDE1DC2297D3A2EE9F1FB6E* __this, const RuntimeMethod* method) 
{
	{
		// return Time.fixedDeltaTime * fixedUpdateCount;
		float L_0;
		L_0 = Time_get_fixedDeltaTime_mD7107AF06157FC18A50E14E0755CEE137E9A4088(NULL);
		int32_t L_1 = __this->___fixedUpdateCount_6;
		return ((float)il2cpp_codegen_multiply(L_0, ((float)L_1)));
	}
}
// System.Single MagicaCloth.UpdateTimeManager::get_AverageDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UpdateTimeManager_get_AverageDeltaTime_m12ABB999C03681028365CDE0FF4483ED377C2692 (UpdateTimeManager_t97A049BAF9BF24835DDE1DC2297D3A2EE9F1FB6E* __this, const RuntimeMethod* method) 
{
	{
		// return Time.smoothDeltaTime;
		float L_0;
		L_0 = Time_get_smoothDeltaTime_m8C2F1AA9663A9C8A4C9DDBADD01996437B6C7625(NULL);
		return L_0;
	}
}
// System.Boolean MagicaCloth.UpdateTimeManager::get_IsUnscaledUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UpdateTimeManager_get_IsUnscaledUpdate_mD5BA1188F8326C3AA974E32A002C14598137F72B (UpdateTimeManager_t97A049BAF9BF24835DDE1DC2297D3A2EE9F1FB6E* __this, const RuntimeMethod* method) 
{
	{
		// return updateMode == UpdateMode.UnscaledTime || updateMode == UpdateMode.DelayUnscaledTime;
		int32_t L_0 = __this->___updateMode_1;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = __this->___updateMode_1;
		return (bool)((((int32_t)L_1) == ((int32_t)((int32_t)10)))? 1 : 0);
	}

IL_0013:
	{
		return (bool)1;
	}
}
// System.Boolean MagicaCloth.UpdateTimeManager::get_IsDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UpdateTimeManager_get_IsDelay_m088880F04C52EE471B72D35C09D134D1F57375FA (UpdateTimeManager_t97A049BAF9BF24835DDE1DC2297D3A2EE9F1FB6E* __this, const RuntimeMethod* method) 
{
	{
		// return updateMode == UpdateMode.DelayUnscaledTime;
		int32_t L_0 = __this->___updateMode_1;
		return (bool)((((int32_t)L_0) == ((int32_t)((int32_t)10)))? 1 : 0);
	}
}
// System.Single MagicaCloth.UpdateTimeManager::get_FuturePredictionRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UpdateTimeManager_get_FuturePredictionRate_m43960A07895FDF816DDC12CEA05DC482515A7C53 (UpdateTimeManager_t97A049BAF9BF24835DDE1DC2297D3A2EE9F1FB6E* __this, const RuntimeMethod* method) 
{
	{
		// return futurePredictionRate;
		float L_0 = __this->___futurePredictionRate_4;
		return L_0;
	}
}
// System.Void MagicaCloth.UpdateTimeManager::set_FuturePredictionRate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateTimeManager_set_FuturePredictionRate_mB7E4BBAC57619FD5893E8F16E0101C0DDCD370B8 (UpdateTimeManager_t97A049BAF9BF24835DDE1DC2297D3A2EE9F1FB6E* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// futurePredictionRate = Mathf.Clamp01(value);
		float L_0 = ___value0;
		float L_1;
		L_1 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_0, NULL);
		__this->___futurePredictionRate_4 = L_1;
		// }
		return;
	}
}
// System.Boolean MagicaCloth.UpdateTimeManager::get_UpdateBoneScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UpdateTimeManager_get_UpdateBoneScale_m97C0BEBAB2460B9DE0586BCB2BA0A6C0B2F80856 (UpdateTimeManager_t97A049BAF9BF24835DDE1DC2297D3A2EE9F1FB6E* __this, const RuntimeMethod* method) 
{
	{
		// return updateBoneScale;
		bool L_0 = __this->___updateBoneScale_5;
		return L_0;
	}
}
// System.Void MagicaCloth.UpdateTimeManager::set_UpdateBoneScale(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateTimeManager_set_UpdateBoneScale_m5FCF1EF8E423E5C1C26E4D913C698C9DB50779E0 (UpdateTimeManager_t97A049BAF9BF24835DDE1DC2297D3A2EE9F1FB6E* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// updateBoneScale = value;
		bool L_0 = ___value0;
		__this->___updateBoneScale_5 = L_0;
		// }
		return;
	}
}
// System.Int32 MagicaCloth.UpdateTimeManager::get_WorkerMaximumCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UpdateTimeManager_get_WorkerMaximumCount_m53D6E4261BFEDA83AB9D7D18280B67280D08073C (UpdateTimeManager_t97A049BAF9BF24835DDE1DC2297D3A2EE9F1FB6E* __this, const RuntimeMethod* method) 
{
	{
		// return Unity.Jobs.LowLevel.Unsafe.JobsUtility.JobWorkerMaximumCount;
		int32_t L_0;
		L_0 = JobsUtility_get_JobWorkerMaximumCount_mA7EB7643AE5331192ACC594390F7870E40FB9325(NULL);
		return L_0;
	}
}
// System.Void MagicaCloth.UpdateTimeManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateTimeManager__ctor_m37AD421E63026A4E5923129CB6B4E3F09737E2F9 (UpdateTimeManager_t97A049BAF9BF24835DDE1DC2297D3A2EE9F1FB6E* __this, const RuntimeMethod* method) 
{
	{
		// private UpdateCount updatePerSeccond = UpdateCount._90_Default;
		__this->___updatePerSeccond_0 = ((int32_t)90);
		// private float timeScale = 1.0f;
		__this->___timeScale_3 = (1.0f);
		// private float futurePredictionRate = 1.0f;
		__this->___futurePredictionRate_4 = (1.0f);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MagicaCloth.ShareDataObject::set_SaveDataHash(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShareDataObject_set_SaveDataHash_mFBE04EE9980CDEAD657D7EEED1EF8E7E97F56EF7 (ShareDataObject_t9215EDBD98FEABEDEF129027FF16376BB41C8A7D* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// dataHash = value;
		int32_t L_0 = ___value0;
		__this->___dataHash_4 = L_0;
		// }
		return;
	}
}
// System.Int32 MagicaCloth.ShareDataObject::get_SaveDataHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ShareDataObject_get_SaveDataHash_m3E812E34E7957878E5B973E8538795A07AA453EB (ShareDataObject_t9215EDBD98FEABEDEF129027FF16376BB41C8A7D* __this, const RuntimeMethod* method) 
{
	{
		// return dataHash;
		int32_t L_0 = __this->___dataHash_4;
		return L_0;
	}
}
// System.Void MagicaCloth.ShareDataObject::set_SaveDataVersion(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShareDataObject_set_SaveDataVersion_m8EF0C06A14D8EEEEA98D5A645374921C6F3A4109 (ShareDataObject_t9215EDBD98FEABEDEF129027FF16376BB41C8A7D* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// dataVersion = value;
		int32_t L_0 = ___value0;
		__this->___dataVersion_5 = L_0;
		// }
		return;
	}
}
// System.Int32 MagicaCloth.ShareDataObject::get_SaveDataVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ShareDataObject_get_SaveDataVersion_m6BDB5074E4A8AA08BDB6AD66C21836FC33E33CEC (ShareDataObject_t9215EDBD98FEABEDEF129027FF16376BB41C8A7D* __this, const RuntimeMethod* method) 
{
	{
		// return dataVersion;
		int32_t L_0 = __this->___dataVersion_5;
		return L_0;
	}
}
// System.Void MagicaCloth.ShareDataObject::CreateVerifyData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShareDataObject_CreateVerifyData_m00566BE1B808547F8E6952B1255A14283FE95805 (ShareDataObject_t9215EDBD98FEABEDEF129027FF16376BB41C8A7D* __this, const RuntimeMethod* method) 
{
	{
		// dataHash = GetDataHash();
		int32_t L_0;
		L_0 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 MagicaCloth.ShareDataObject::GetDataHash() */, __this);
		__this->___dataHash_4 = L_0;
		// dataVersion = GetVersion();
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 MagicaCloth.ShareDataObject::GetVersion() */, __this);
		__this->___dataVersion_5 = L_1;
		// }
		return;
	}
}
// System.String MagicaCloth.ShareDataObject::GetInformation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ShareDataObject_GetInformation_m91C4B5AAE601C0BB570D9B300DA1C5D81CF3EB7F (ShareDataObject_t9215EDBD98FEABEDEF129027FF16376BB41C8A7D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25B573A97F610DC6674C9D106F6FCEC2D1B1DC5A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "No information.";
		return _stringLiteral25B573A97F610DC6674C9D106F6FCEC2D1B1DC5A;
	}
}
// System.Void MagicaCloth.ShareDataObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShareDataObject__ctor_m2E982D54473C9645DC67296B477D6C43C034AF4B (ShareDataObject_t9215EDBD98FEABEDEF129027FF16376BB41C8A7D* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// MagicaCloth.StopWatch MagicaCloth.StopWatch::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StopWatch_t9DEB62B059C39CE3F724C494C767A94BA092EE83* StopWatch_Start_m8F02B5706521F333F02F095C6C6D887D38902EE2 (StopWatch_t9DEB62B059C39CE3F724C494C767A94BA092EE83* __this, const RuntimeMethod* method) 
{
	{
		// startTime = Time.realtimeSinceStartup;
		float L_0;
		L_0 = Time_get_realtimeSinceStartup_mB49A5622E38FFE9589EB9B3E75573E443B8D63EC(NULL);
		__this->___startTime_0 = L_0;
		// return this;
		return __this;
	}
}
// MagicaCloth.StopWatch MagicaCloth.StopWatch::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StopWatch_t9DEB62B059C39CE3F724C494C767A94BA092EE83* StopWatch_Stop_m2CE643B06D6B7AC44754DA332897363BAB0C2053 (StopWatch_t9DEB62B059C39CE3F724C494C767A94BA092EE83* __this, const RuntimeMethod* method) 
{
	{
		// endTime = Time.realtimeSinceStartup;
		float L_0;
		L_0 = Time_get_realtimeSinceStartup_mB49A5622E38FFE9589EB9B3E75573E443B8D63EC(NULL);
		__this->___endTime_1 = L_0;
		// return this;
		return __this;
	}
}
// System.Single MagicaCloth.StopWatch::get_ElapsedSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float StopWatch_get_ElapsedSeconds_m107151147ABE2876054DE7AF0AA66DD5DBFC35C7 (StopWatch_t9DEB62B059C39CE3F724C494C767A94BA092EE83* __this, const RuntimeMethod* method) 
{
	{
		// return (endTime - startTime);
		float L_0 = __this->___endTime_1;
		float L_1 = __this->___startTime_0;
		return ((float)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Single MagicaCloth.StopWatch::get_ElapsedMilliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float StopWatch_get_ElapsedMilliseconds_mCC33D0F07CB2019B324A52CF7C0376D65E27C474 (StopWatch_t9DEB62B059C39CE3F724C494C767A94BA092EE83* __this, const RuntimeMethod* method) 
{
	{
		// return (endTime - startTime) * 1000.0f;
		float L_0 = __this->___endTime_1;
		float L_1 = __this->___startTime_0;
		return ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_0, L_1)), (1000.0f)));
	}
}
// System.Void MagicaCloth.StopWatch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StopWatch__ctor_m35DE6054ECD4638F21F75E7F65DA44EBC9220F20 (StopWatch_t9DEB62B059C39CE3F724C494C767A94BA092EE83* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		// this.x = x;
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		// this.y = y;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		// this.z = z;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		// this.w = w;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float4x4__ctor_mF0B7C823E36025A539E8024123057CAC380E97EF_inline (float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2* __this, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c00, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c11, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c22, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c33, const RuntimeMethod* method) 
{
	{
		// this.c0 = c0;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_0 = ___c00;
		__this->___c0_0 = L_0;
		// this.c1 = c1;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_1 = ___c11;
		__this->___c1_1 = L_1;
		// this.c2 = c2;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_2 = ___c22;
		__this->___c2_2 = L_2;
		// this.c3 = c3;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_3 = ___c33;
		__this->___c3_3 = L_3;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Cross_m77F64620D73934C56BEE37A64016DBDCB9D21DB8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___lhs0;
		float L_13 = L_12.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___rhs1;
		float L_15 = L_14.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___lhs0;
		float L_17 = L_16.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___rhs1;
		float L_19 = L_18.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___lhs0;
		float L_21 = L_20.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = ___rhs1;
		float L_23 = L_22.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_9, L_11)), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), /*hidden argument*/NULL);
		V_0 = L_24;
		goto IL_005a;
	}

IL_005a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_0;
		return L_25;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		float L_1;
		L_1 = Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_4, L_5, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this = L_6;
		goto IL_0038;
	}

IL_002d:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this = L_7;
	}

IL_0038:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UpdateTimeManager_get_UpdatePerSecond_m096BADE4C3E2F37E2183FE53B013221EB053EBC7_inline (UpdateTimeManager_t97A049BAF9BF24835DDE1DC2297D3A2EE9F1FB6E* __this, const RuntimeMethod* method) 
{
	{
		// return (int)updatePerSeccond;
		int32_t L_0 = __this->___updatePerSeccond_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
