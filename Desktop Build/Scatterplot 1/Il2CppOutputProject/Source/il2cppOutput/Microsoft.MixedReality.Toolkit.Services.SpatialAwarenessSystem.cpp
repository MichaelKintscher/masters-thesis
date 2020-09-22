#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// Microsoft.MixedReality.Toolkit.IMixedRealityEventSource
struct IMixedRealityEventSource_t110C3319D2650BC9EDF8CEE13B03DBDBC5BB790E;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem
struct MixedRealitySpatialAwarenessSystem_tB8C29ACDB45840EA279F13301D19CC3A3621FB90;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject
struct SpatialAwarenessMeshObject_t9B434F14B16E628584144713E047587780DA30ED;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem/EventHandlerEntry>>
struct Dictionary_2_t005769B0E9F3A07766E48C5703CBA609593EEE96;
// System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>
struct IReadOnlyList_1_tABAFADAEA2225D69A24D2300599947AB5FE9BDFA;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.IMixedRealityDataProvider>
struct List_1_tC68B948EC89AA024F60A32062FE7C493FE24B2FE;
// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,UnityEngine.GameObject>>
struct List_1_t19F768F62E14930AA4F5E6C6C4D4338A9D0CCBA4;
// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>>
struct List_1_t17307D4A07E7D05E8A15411E0C52A76A4396F25D;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<System.Object>
struct MixedRealitySpatialAwarenessEventData_1_t196832092212C73AA3977BFA88BE0BF81B8E79A8;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct MixedRealitySpatialAwarenessEventData_1_t1C795CE2A6A38DE68F64D1A76443E3081BB21F09;
// Microsoft.MixedReality.Toolkit.BaseCoreSystem
struct BaseCoreSystem_t96EC8004E65103EA61B559F9D8A5599E7E8CC0B6;
// Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem
struct BaseDataProviderAccessCoreSystem_tA854322E960D9AB5054C56A9493812CF94E6B670;
// Microsoft.MixedReality.Toolkit.BaseEventSystem
struct BaseEventSystem_t6AAFE06D2CA842D33C964477AADD8C7F592E992A;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_t9B92D8A7CB0AE5AF973870EDF7DE2BC12E5FA4E5;
// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_tA51F0EA841C4C16598268B190DC8663BCB38F555;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile
struct BaseSpatialAwarenessObserverProfile_t68C2B7E6059D76B5FF4FA869AB9206227549C532;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_t689792F74DC068BC68EBBF279929CF1756D466B3;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver
struct IMixedRealitySpatialAwarenessObserver_tF7E2646171E43DB94043CA41D69BC431B2DAD514;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile
struct MixedRealitySpatialAwarenessSystemProfile_t924DACA0AB1914B9CC479034DE439FFE54A76F35;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration[]
struct MixedRealitySpatialObserverConfigurationU5BU5D_t6023E6515AC40A08349DED8C9E1E75B24BE03532;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.String
struct String_t;
// Microsoft.MixedReality.Toolkit.Utilities.SystemType
struct SystemType_t9CBB747474C12365CDB0953443942140BA3F6E3D;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;

IL2CPP_EXTERN_C RuntimeClass* EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t1196D8B1252443E46248BC7DCE9D27ED80FA92A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tB399E4DD917AFB71B66EF49C2A29E8F70FAE8338_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityCapabilityCheck_t8FE02AC9C91AC19B5A02F93ED4792362A12FCF27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealitySpatialAwarenessObserver_tF7E2646171E43DB94043CA41D69BC431B2DAD514_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyCollection_1_t11D7ADC536E8323192F90EEB91EA3E310F18CF40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyList_1_tABAFADAEA2225D69A24D2300599947AB5FE9BDFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityPlayspace_tC35E09A6C73B789074660260409E43C533112826_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealitySpatialAwarenessEventData_1_t1C795CE2A6A38DE68F64D1A76443E3081BB21F09_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealitySpatialAwarenessSystemProfile_t924DACA0AB1914B9CC479034DE439FFE54A76F35_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral188D30B6EDF85BA42D4E192BE1E93A4D2142FDCB;
IL2CPP_EXTERN_C String_t* _stringLiteral84210E916B771570003864C57344196A52266B35;
IL2CPP_EXTERN_C const RuntimeMethod* BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealitySpatialAwarenessObserver_tF7E2646171E43DB94043CA41D69BC431B2DAD514_m32C014AFAC3DB62CEDA598772B70B666D80DCB55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisIMixedRealitySpatialAwarenessObserver_tF7E2646171E43DB94043CA41D69BC431B2DAD514_mC1F45A7F249A742F804D99BC59D1EAB71D76E60F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisIMixedRealitySpatialAwarenessObserver_tF7E2646171E43DB94043CA41D69BC431B2DAD514_mF266653C49A7269A320BD4388BCFF40C9AF3918A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealitySpatialAwarenessEventData_1__ctor_mD2E7F32FB289DBB8161ACE8093283414F2F5D981_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialAwarenessSystem_CheckCapability_mAFEA3B4B54779C66CDB95F7F9EF98D09D5304D35_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialAwarenessSystem_ClearObservations_m1EBC8A4D9A54174B2C787AF320204ECB434B1CDF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialAwarenessSystem_CreateSpatialAwarenessObservationParent_m2926CF94D47E002A6CC99249E5B9C57160F4530D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialAwarenessSystem_Destroy_mE2F8E019C838814DB7BDD0ABD79CDF8BDF3594A4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialAwarenessSystem_Disable_m05AF9D779F0993732E74531EF7AA9D04211B30DF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialAwarenessSystem_GetObserver_m0DA8CDDB7E5694E8820CB38BF679A10A8E73F284_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialAwarenessSystem_GetObservers_m977C96B44F3E3A53AEBE45F6EF0D91084EB522C2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialAwarenessSystem_InitializeInternal_m2878E07265AC0B6684B45AA7536E4AF1042FAB63_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialAwarenessSystem_Initialize_m149FDA64037BEC4893E3D5519CD0BCBF403B04BD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialAwarenessSystem_ResumeObservers_m38960799ABF75929E250FBAEA157618D15709E27_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialAwarenessSystem_SuspendObservers_mCB278D01A1E4C86264F4768BD4D3DB65280E29CC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialAwarenessSystem__ctor_m26FA61B1B5DEE5DECEDEA633EE9ADFF3682B2938_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialAwarenessSystem_get_CreateSpatialAwarenessObjectParent_mDA084A346580A8492433B38B757C3233AF60772D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialAwarenessSystem_get_SpatialAwarenessObjectParent_m5FBEE875E0EB2FED310323AAF92A29E554A9C23E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealitySpatialAwarenessSystem_get_SpatialAwarenessSystemProfile_mC0F81A6FCF805BA307B0F7DC39A9721D102F9492_MetadataUsageId;

struct MixedRealitySpatialObserverConfigurationU5BU5D_t6023E6515AC40A08349DED8C9E1E75B24BE03532;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t10351AC36783EAC28093B627C4778B33EDE3F275 
{
public:

public:
};


// System.Object


// Microsoft.MixedReality.Toolkit.BaseService
struct  BaseService_tA51F0EA841C4C16598268B190DC8663BCB38F555  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.BaseService::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.UInt32 Microsoft.MixedReality.Toolkit.BaseService::<Priority>k__BackingField
	uint32_t ___U3CPriorityU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::<ConfigurationProfile>k__BackingField
	BaseMixedRealityProfile_t9B92D8A7CB0AE5AF973870EDF7DE2BC12E5FA4E5 * ___U3CConfigurationProfileU3Ek__BackingField_3;
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseService::disposed
	bool ___disposed_4;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseService_tA51F0EA841C4C16598268B190DC8663BCB38F555, ___U3CNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CNameU3Ek__BackingField_1() const { return ___U3CNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_1() { return &___U3CNameU3Ek__BackingField_1; }
	inline void set_U3CNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPriorityU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseService_tA51F0EA841C4C16598268B190DC8663BCB38F555, ___U3CPriorityU3Ek__BackingField_2)); }
	inline uint32_t get_U3CPriorityU3Ek__BackingField_2() const { return ___U3CPriorityU3Ek__BackingField_2; }
	inline uint32_t* get_address_of_U3CPriorityU3Ek__BackingField_2() { return &___U3CPriorityU3Ek__BackingField_2; }
	inline void set_U3CPriorityU3Ek__BackingField_2(uint32_t value)
	{
		___U3CPriorityU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CConfigurationProfileU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseService_tA51F0EA841C4C16598268B190DC8663BCB38F555, ___U3CConfigurationProfileU3Ek__BackingField_3)); }
	inline BaseMixedRealityProfile_t9B92D8A7CB0AE5AF973870EDF7DE2BC12E5FA4E5 * get_U3CConfigurationProfileU3Ek__BackingField_3() const { return ___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline BaseMixedRealityProfile_t9B92D8A7CB0AE5AF973870EDF7DE2BC12E5FA4E5 ** get_address_of_U3CConfigurationProfileU3Ek__BackingField_3() { return &___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline void set_U3CConfigurationProfileU3Ek__BackingField_3(BaseMixedRealityProfile_t9B92D8A7CB0AE5AF973870EDF7DE2BC12E5FA4E5 * value)
	{
		___U3CConfigurationProfileU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConfigurationProfileU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_disposed_4() { return static_cast<int32_t>(offsetof(BaseService_tA51F0EA841C4C16598268B190DC8663BCB38F555, ___disposed_4)); }
	inline bool get_disposed_4() const { return ___disposed_4; }
	inline bool* get_address_of_disposed_4() { return &___disposed_4; }
	inline void set_disposed_4(bool value)
	{
		___disposed_4 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.SystemType
struct  SystemType_t9CBB747474C12365CDB0953443942140BA3F6E3D  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Utilities.SystemType::reference
	String_t* ___reference_0;
	// System.Type Microsoft.MixedReality.Toolkit.Utilities.SystemType::type
	Type_t * ___type_1;

public:
	inline static int32_t get_offset_of_reference_0() { return static_cast<int32_t>(offsetof(SystemType_t9CBB747474C12365CDB0953443942140BA3F6E3D, ___reference_0)); }
	inline String_t* get_reference_0() const { return ___reference_0; }
	inline String_t** get_address_of_reference_0() { return &___reference_0; }
	inline void set_reference_0(String_t* value)
	{
		___reference_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reference_0), (void*)value);
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(SystemType_t9CBB747474C12365CDB0953443942140BA3F6E3D, ___type_1)); }
	inline Type_t * get_type_1() const { return ___type_1; }
	inline Type_t ** get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(Type_t * value)
	{
		___type_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_1), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.EventSystems.AbstractEventData
struct  AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseEventSystem
struct  BaseEventSystem_t6AAFE06D2CA842D33C964477AADD8C7F592E992A  : public BaseService_tA51F0EA841C4C16598268B190DC8663BCB38F555
{
public:
	// System.Type Microsoft.MixedReality.Toolkit.BaseEventSystem::eventSystemHandlerType
	Type_t * ___eventSystemHandlerType_7;
	// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem_Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>> Microsoft.MixedReality.Toolkit.BaseEventSystem::postponedActions
	List_1_t17307D4A07E7D05E8A15411E0C52A76A4396F25D * ___postponedActions_8;
	// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem_Action,UnityEngine.GameObject>> Microsoft.MixedReality.Toolkit.BaseEventSystem::postponedObjectActions
	List_1_t19F768F62E14930AA4F5E6C6C4D4338A9D0CCBA4 * ___postponedObjectActions_9;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem_EventHandlerEntry>> Microsoft.MixedReality.Toolkit.BaseEventSystem::<EventHandlersByType>k__BackingField
	Dictionary_2_t005769B0E9F3A07766E48C5703CBA609593EEE96 * ___U3CEventHandlersByTypeU3Ek__BackingField_10;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.BaseEventSystem::<EventListeners>k__BackingField
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___U3CEventListenersU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_eventSystemHandlerType_7() { return static_cast<int32_t>(offsetof(BaseEventSystem_t6AAFE06D2CA842D33C964477AADD8C7F592E992A, ___eventSystemHandlerType_7)); }
	inline Type_t * get_eventSystemHandlerType_7() const { return ___eventSystemHandlerType_7; }
	inline Type_t ** get_address_of_eventSystemHandlerType_7() { return &___eventSystemHandlerType_7; }
	inline void set_eventSystemHandlerType_7(Type_t * value)
	{
		___eventSystemHandlerType_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventSystemHandlerType_7), (void*)value);
	}

	inline static int32_t get_offset_of_postponedActions_8() { return static_cast<int32_t>(offsetof(BaseEventSystem_t6AAFE06D2CA842D33C964477AADD8C7F592E992A, ___postponedActions_8)); }
	inline List_1_t17307D4A07E7D05E8A15411E0C52A76A4396F25D * get_postponedActions_8() const { return ___postponedActions_8; }
	inline List_1_t17307D4A07E7D05E8A15411E0C52A76A4396F25D ** get_address_of_postponedActions_8() { return &___postponedActions_8; }
	inline void set_postponedActions_8(List_1_t17307D4A07E7D05E8A15411E0C52A76A4396F25D * value)
	{
		___postponedActions_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___postponedActions_8), (void*)value);
	}

	inline static int32_t get_offset_of_postponedObjectActions_9() { return static_cast<int32_t>(offsetof(BaseEventSystem_t6AAFE06D2CA842D33C964477AADD8C7F592E992A, ___postponedObjectActions_9)); }
	inline List_1_t19F768F62E14930AA4F5E6C6C4D4338A9D0CCBA4 * get_postponedObjectActions_9() const { return ___postponedObjectActions_9; }
	inline List_1_t19F768F62E14930AA4F5E6C6C4D4338A9D0CCBA4 ** get_address_of_postponedObjectActions_9() { return &___postponedObjectActions_9; }
	inline void set_postponedObjectActions_9(List_1_t19F768F62E14930AA4F5E6C6C4D4338A9D0CCBA4 * value)
	{
		___postponedObjectActions_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___postponedObjectActions_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEventHandlersByTypeU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(BaseEventSystem_t6AAFE06D2CA842D33C964477AADD8C7F592E992A, ___U3CEventHandlersByTypeU3Ek__BackingField_10)); }
	inline Dictionary_2_t005769B0E9F3A07766E48C5703CBA609593EEE96 * get_U3CEventHandlersByTypeU3Ek__BackingField_10() const { return ___U3CEventHandlersByTypeU3Ek__BackingField_10; }
	inline Dictionary_2_t005769B0E9F3A07766E48C5703CBA609593EEE96 ** get_address_of_U3CEventHandlersByTypeU3Ek__BackingField_10() { return &___U3CEventHandlersByTypeU3Ek__BackingField_10; }
	inline void set_U3CEventHandlersByTypeU3Ek__BackingField_10(Dictionary_2_t005769B0E9F3A07766E48C5703CBA609593EEE96 * value)
	{
		___U3CEventHandlersByTypeU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventHandlersByTypeU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEventListenersU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(BaseEventSystem_t6AAFE06D2CA842D33C964477AADD8C7F592E992A, ___U3CEventListenersU3Ek__BackingField_11)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_U3CEventListenersU3Ek__BackingField_11() const { return ___U3CEventListenersU3Ek__BackingField_11; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_U3CEventListenersU3Ek__BackingField_11() { return &___U3CEventListenersU3Ek__BackingField_11; }
	inline void set_U3CEventListenersU3Ek__BackingField_11(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___U3CEventListenersU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventListenersU3Ek__BackingField_11), (void*)value);
	}
};

struct BaseEventSystem_t6AAFE06D2CA842D33C964477AADD8C7F592E992A_StaticFields
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseEventSystem::enableDanglingHandlerDiagnostics
	bool ___enableDanglingHandlerDiagnostics_5;
	// System.Int32 Microsoft.MixedReality.Toolkit.BaseEventSystem::eventExecutionDepth
	int32_t ___eventExecutionDepth_6;

public:
	inline static int32_t get_offset_of_enableDanglingHandlerDiagnostics_5() { return static_cast<int32_t>(offsetof(BaseEventSystem_t6AAFE06D2CA842D33C964477AADD8C7F592E992A_StaticFields, ___enableDanglingHandlerDiagnostics_5)); }
	inline bool get_enableDanglingHandlerDiagnostics_5() const { return ___enableDanglingHandlerDiagnostics_5; }
	inline bool* get_address_of_enableDanglingHandlerDiagnostics_5() { return &___enableDanglingHandlerDiagnostics_5; }
	inline void set_enableDanglingHandlerDiagnostics_5(bool value)
	{
		___enableDanglingHandlerDiagnostics_5 = value;
	}

	inline static int32_t get_offset_of_eventExecutionDepth_6() { return static_cast<int32_t>(offsetof(BaseEventSystem_t6AAFE06D2CA842D33C964477AADD8C7F592E992A_StaticFields, ___eventExecutionDepth_6)); }
	inline int32_t get_eventExecutionDepth_6() const { return ___eventExecutionDepth_6; }
	inline int32_t* get_address_of_eventExecutionDepth_6() { return &___eventExecutionDepth_6; }
	inline void set_eventExecutionDepth_6(int32_t value)
	{
		___eventExecutionDepth_6 = value;
	}
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.DateTime
struct  DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.UInt32
struct  UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.EventSystems.BaseEventData
struct  BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E  : public AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E, ___m_EventSystem_1)); }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
	}
};


// UnityEngine.Vector3
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseCoreSystem
struct  BaseCoreSystem_t96EC8004E65103EA61B559F9D8A5599E7E8CC0B6  : public BaseEventSystem_t6AAFE06D2CA842D33C964477AADD8C7F592E992A
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseCoreSystem::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_12;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(BaseCoreSystem_t96EC8004E65103EA61B559F9D8A5599E7E8CC0B6, ___U3CRegistrarU3Ek__BackingField_12)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_12() const { return ___U3CRegistrarU3Ek__BackingField_12; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_12() { return &___U3CRegistrarU3Ek__BackingField_12; }
	inline void set_U3CRegistrarU3Ek__BackingField_12(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_12), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.GenericBaseEventData
struct  GenericBaseEventData_tE0375C5E9139567F3607F5D486C7E8BABBC23C11  : public BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityEventSource Microsoft.MixedReality.Toolkit.GenericBaseEventData::<EventSource>k__BackingField
	RuntimeObject* ___U3CEventSourceU3Ek__BackingField_2;
	// System.DateTime Microsoft.MixedReality.Toolkit.GenericBaseEventData::<EventTime>k__BackingField
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___U3CEventTimeU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CEventSourceU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(GenericBaseEventData_tE0375C5E9139567F3607F5D486C7E8BABBC23C11, ___U3CEventSourceU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CEventSourceU3Ek__BackingField_2() const { return ___U3CEventSourceU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CEventSourceU3Ek__BackingField_2() { return &___U3CEventSourceU3Ek__BackingField_2; }
	inline void set_U3CEventSourceU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CEventSourceU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventSourceU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEventTimeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(GenericBaseEventData_tE0375C5E9139567F3607F5D486C7E8BABBC23C11, ___U3CEventTimeU3Ek__BackingField_3)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_U3CEventTimeU3Ek__BackingField_3() const { return ___U3CEventTimeU3Ek__BackingField_3; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_U3CEventTimeU3Ek__BackingField_3() { return &___U3CEventTimeU3Ek__BackingField_3; }
	inline void set_U3CEventTimeU3Ek__BackingField_3(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___U3CEventTimeU3Ek__BackingField_3 = value;
	}
};


// Microsoft.MixedReality.Toolkit.MixedRealityCapability
struct  MixedRealityCapability_t91731412AD4253E1D3066802821BCF6D107323A7 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.MixedRealityCapability::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MixedRealityCapability_t91731412AD4253E1D3066802821BCF6D107323A7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior
struct  AutoStartBehavior_t1DF21CEF503DE3522A26F77B933136463F2B7A04 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AutoStartBehavior_t1DF21CEF503DE3522A26F77B933136463F2B7A04, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms
struct  SupportedPlatforms_t824574F77979C77E78F601F23CCE168B30B529AD 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SupportedPlatforms_t824574F77979C77E78F601F23CCE168B30B529AD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.VolumeType
struct  VolumeType_t857F9DFEBAFE150BB985D7D37C59B77041FF8DF9 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.VolumeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VolumeType_t857F9DFEBAFE150BB985D7D37C59B77041FF8DF9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct  BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem
struct  BaseDataProviderAccessCoreSystem_tA854322E960D9AB5054C56A9493812CF94E6B670  : public BaseCoreSystem_t96EC8004E65103EA61B559F9D8A5599E7E8CC0B6
{
public:
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.IMixedRealityDataProvider> Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::dataProviders
	List_1_tC68B948EC89AA024F60A32062FE7C493FE24B2FE * ___dataProviders_13;

public:
	inline static int32_t get_offset_of_dataProviders_13() { return static_cast<int32_t>(offsetof(BaseDataProviderAccessCoreSystem_tA854322E960D9AB5054C56A9493812CF94E6B670, ___dataProviders_13)); }
	inline List_1_tC68B948EC89AA024F60A32062FE7C493FE24B2FE * get_dataProviders_13() const { return ___dataProviders_13; }
	inline List_1_tC68B948EC89AA024F60A32062FE7C493FE24B2FE ** get_address_of_dataProviders_13() { return &___dataProviders_13; }
	inline void set_dataProviders_13(List_1_tC68B948EC89AA024F60A32062FE7C493FE24B2FE * value)
	{
		___dataProviders_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataProviders_13), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData
struct  MixedRealitySpatialAwarenessEventData_tDC6AC522F88501A05B59EDAF021A45D9C23AC276  : public GenericBaseEventData_tE0375C5E9139567F3607F5D486C7E8BABBC23C11
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessEventData_tDC6AC522F88501A05B59EDAF021A45D9C23AC276, ___U3CIdU3Ek__BackingField_4)); }
	inline int32_t get_U3CIdU3Ek__BackingField_4() const { return ___U3CIdU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CIdU3Ek__BackingField_4() { return &___U3CIdU3Ek__BackingField_4; }
	inline void set_U3CIdU3Ek__BackingField_4(int32_t value)
	{
		___U3CIdU3Ek__BackingField_4 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration
struct  MixedRealitySpatialObserverConfiguration_tF18BB40F09B6C4E7F49A4B1AB0B6A0E264362FF3 
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::componentType
	SystemType_t9CBB747474C12365CDB0953443942140BA3F6E3D * ___componentType_0;
	// System.String Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::componentName
	String_t* ___componentName_1;
	// System.UInt32 Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::priority
	uint32_t ___priority_2;
	// Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::runtimePlatform
	int32_t ___runtimePlatform_3;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::observerProfile
	BaseSpatialAwarenessObserverProfile_t68C2B7E6059D76B5FF4FA869AB9206227549C532 * ___observerProfile_4;

public:
	inline static int32_t get_offset_of_componentType_0() { return static_cast<int32_t>(offsetof(MixedRealitySpatialObserverConfiguration_tF18BB40F09B6C4E7F49A4B1AB0B6A0E264362FF3, ___componentType_0)); }
	inline SystemType_t9CBB747474C12365CDB0953443942140BA3F6E3D * get_componentType_0() const { return ___componentType_0; }
	inline SystemType_t9CBB747474C12365CDB0953443942140BA3F6E3D ** get_address_of_componentType_0() { return &___componentType_0; }
	inline void set_componentType_0(SystemType_t9CBB747474C12365CDB0953443942140BA3F6E3D * value)
	{
		___componentType_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___componentType_0), (void*)value);
	}

	inline static int32_t get_offset_of_componentName_1() { return static_cast<int32_t>(offsetof(MixedRealitySpatialObserverConfiguration_tF18BB40F09B6C4E7F49A4B1AB0B6A0E264362FF3, ___componentName_1)); }
	inline String_t* get_componentName_1() const { return ___componentName_1; }
	inline String_t** get_address_of_componentName_1() { return &___componentName_1; }
	inline void set_componentName_1(String_t* value)
	{
		___componentName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___componentName_1), (void*)value);
	}

	inline static int32_t get_offset_of_priority_2() { return static_cast<int32_t>(offsetof(MixedRealitySpatialObserverConfiguration_tF18BB40F09B6C4E7F49A4B1AB0B6A0E264362FF3, ___priority_2)); }
	inline uint32_t get_priority_2() const { return ___priority_2; }
	inline uint32_t* get_address_of_priority_2() { return &___priority_2; }
	inline void set_priority_2(uint32_t value)
	{
		___priority_2 = value;
	}

	inline static int32_t get_offset_of_runtimePlatform_3() { return static_cast<int32_t>(offsetof(MixedRealitySpatialObserverConfiguration_tF18BB40F09B6C4E7F49A4B1AB0B6A0E264362FF3, ___runtimePlatform_3)); }
	inline int32_t get_runtimePlatform_3() const { return ___runtimePlatform_3; }
	inline int32_t* get_address_of_runtimePlatform_3() { return &___runtimePlatform_3; }
	inline void set_runtimePlatform_3(int32_t value)
	{
		___runtimePlatform_3 = value;
	}

	inline static int32_t get_offset_of_observerProfile_4() { return static_cast<int32_t>(offsetof(MixedRealitySpatialObserverConfiguration_tF18BB40F09B6C4E7F49A4B1AB0B6A0E264362FF3, ___observerProfile_4)); }
	inline BaseSpatialAwarenessObserverProfile_t68C2B7E6059D76B5FF4FA869AB9206227549C532 * get_observerProfile_4() const { return ___observerProfile_4; }
	inline BaseSpatialAwarenessObserverProfile_t68C2B7E6059D76B5FF4FA869AB9206227549C532 ** get_address_of_observerProfile_4() { return &___observerProfile_4; }
	inline void set_observerProfile_4(BaseSpatialAwarenessObserverProfile_t68C2B7E6059D76B5FF4FA869AB9206227549C532 * value)
	{
		___observerProfile_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observerProfile_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration
struct MixedRealitySpatialObserverConfiguration_tF18BB40F09B6C4E7F49A4B1AB0B6A0E264362FF3_marshaled_pinvoke
{
	SystemType_t9CBB747474C12365CDB0953443942140BA3F6E3D * ___componentType_0;
	char* ___componentName_1;
	uint32_t ___priority_2;
	int32_t ___runtimePlatform_3;
	BaseSpatialAwarenessObserverProfile_t68C2B7E6059D76B5FF4FA869AB9206227549C532 * ___observerProfile_4;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration
struct MixedRealitySpatialObserverConfiguration_tF18BB40F09B6C4E7F49A4B1AB0B6A0E264362FF3_marshaled_com
{
	SystemType_t9CBB747474C12365CDB0953443942140BA3F6E3D * ___componentType_0;
	Il2CppChar* ___componentName_1;
	uint32_t ___priority_2;
	int32_t ___runtimePlatform_3;
	BaseSpatialAwarenessObserverProfile_t68C2B7E6059D76B5FF4FA869AB9206227549C532 * ___observerProfile_4;
};

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.ScriptableObject
struct  ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct  BaseMixedRealityProfile_t9B92D8A7CB0AE5AF973870EDF7DE2BC12E5FA4E5  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile::isCustomProfile
	bool ___isCustomProfile_4;

public:
	inline static int32_t get_offset_of_isCustomProfile_4() { return static_cast<int32_t>(offsetof(BaseMixedRealityProfile_t9B92D8A7CB0AE5AF973870EDF7DE2BC12E5FA4E5, ___isCustomProfile_4)); }
	inline bool get_isCustomProfile_4() const { return ___isCustomProfile_4; }
	inline bool* get_address_of_isCustomProfile_4() { return &___isCustomProfile_4; }
	inline void set_isCustomProfile_4(bool value)
	{
		___isCustomProfile_4 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct  MixedRealitySpatialAwarenessEventData_1_t1C795CE2A6A38DE68F64D1A76443E3081BB21F09  : public MixedRealitySpatialAwarenessEventData_tDC6AC522F88501A05B59EDAF021A45D9C23AC276
{
public:
	// T Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1::<SpatialObject>k__BackingField
	SpatialAwarenessMeshObject_t9B434F14B16E628584144713E047587780DA30ED * ___U3CSpatialObjectU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CSpatialObjectU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessEventData_1_t1C795CE2A6A38DE68F64D1A76443E3081BB21F09, ___U3CSpatialObjectU3Ek__BackingField_5)); }
	inline SpatialAwarenessMeshObject_t9B434F14B16E628584144713E047587780DA30ED * get_U3CSpatialObjectU3Ek__BackingField_5() const { return ___U3CSpatialObjectU3Ek__BackingField_5; }
	inline SpatialAwarenessMeshObject_t9B434F14B16E628584144713E047587780DA30ED ** get_address_of_U3CSpatialObjectU3Ek__BackingField_5() { return &___U3CSpatialObjectU3Ek__BackingField_5; }
	inline void set_U3CSpatialObjectU3Ek__BackingField_5(SpatialAwarenessMeshObject_t9B434F14B16E628584144713E047587780DA30ED * value)
	{
		___U3CSpatialObjectU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSpatialObjectU3Ek__BackingField_5), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem
struct  MixedRealitySpatialAwarenessSystem_tB8C29ACDB45840EA279F13301D19CC3A3621FB90  : public BaseDataProviderAccessCoreSystem_tA854322E960D9AB5054C56A9493812CF94E6B670
{
public:
	// System.String Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_14;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject> Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::meshEventData
	MixedRealitySpatialAwarenessEventData_1_t1C795CE2A6A38DE68F64D1A76443E3081BB21F09 * ___meshEventData_15;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::spatialAwarenessObjectParent
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___spatialAwarenessObjectParent_16;
	// System.UInt32 Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::nextSourceId
	uint32_t ___nextSourceId_17;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::spatialAwarenessSystemProfile
	MixedRealitySpatialAwarenessSystemProfile_t924DACA0AB1914B9CC479034DE439FFE54A76F35 * ___spatialAwarenessSystemProfile_18;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_tB8C29ACDB45840EA279F13301D19CC3A3621FB90, ___U3CNameU3Ek__BackingField_14)); }
	inline String_t* get_U3CNameU3Ek__BackingField_14() const { return ___U3CNameU3Ek__BackingField_14; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_14() { return &___U3CNameU3Ek__BackingField_14; }
	inline void set_U3CNameU3Ek__BackingField_14(String_t* value)
	{
		___U3CNameU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_14), (void*)value);
	}

	inline static int32_t get_offset_of_meshEventData_15() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_tB8C29ACDB45840EA279F13301D19CC3A3621FB90, ___meshEventData_15)); }
	inline MixedRealitySpatialAwarenessEventData_1_t1C795CE2A6A38DE68F64D1A76443E3081BB21F09 * get_meshEventData_15() const { return ___meshEventData_15; }
	inline MixedRealitySpatialAwarenessEventData_1_t1C795CE2A6A38DE68F64D1A76443E3081BB21F09 ** get_address_of_meshEventData_15() { return &___meshEventData_15; }
	inline void set_meshEventData_15(MixedRealitySpatialAwarenessEventData_1_t1C795CE2A6A38DE68F64D1A76443E3081BB21F09 * value)
	{
		___meshEventData_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshEventData_15), (void*)value);
	}

	inline static int32_t get_offset_of_spatialAwarenessObjectParent_16() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_tB8C29ACDB45840EA279F13301D19CC3A3621FB90, ___spatialAwarenessObjectParent_16)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_spatialAwarenessObjectParent_16() const { return ___spatialAwarenessObjectParent_16; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_spatialAwarenessObjectParent_16() { return &___spatialAwarenessObjectParent_16; }
	inline void set_spatialAwarenessObjectParent_16(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___spatialAwarenessObjectParent_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spatialAwarenessObjectParent_16), (void*)value);
	}

	inline static int32_t get_offset_of_nextSourceId_17() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_tB8C29ACDB45840EA279F13301D19CC3A3621FB90, ___nextSourceId_17)); }
	inline uint32_t get_nextSourceId_17() const { return ___nextSourceId_17; }
	inline uint32_t* get_address_of_nextSourceId_17() { return &___nextSourceId_17; }
	inline void set_nextSourceId_17(uint32_t value)
	{
		___nextSourceId_17 = value;
	}

	inline static int32_t get_offset_of_spatialAwarenessSystemProfile_18() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_tB8C29ACDB45840EA279F13301D19CC3A3621FB90, ___spatialAwarenessSystemProfile_18)); }
	inline MixedRealitySpatialAwarenessSystemProfile_t924DACA0AB1914B9CC479034DE439FFE54A76F35 * get_spatialAwarenessSystemProfile_18() const { return ___spatialAwarenessSystemProfile_18; }
	inline MixedRealitySpatialAwarenessSystemProfile_t924DACA0AB1914B9CC479034DE439FFE54A76F35 ** get_address_of_spatialAwarenessSystemProfile_18() { return &___spatialAwarenessSystemProfile_18; }
	inline void set_spatialAwarenessSystemProfile_18(MixedRealitySpatialAwarenessSystemProfile_t924DACA0AB1914B9CC479034DE439FFE54A76F35 * value)
	{
		___spatialAwarenessSystemProfile_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spatialAwarenessSystemProfile_18), (void*)value);
	}
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile
struct  BaseSpatialAwarenessObserverProfile_t68C2B7E6059D76B5FF4FA869AB9206227549C532  : public BaseMixedRealityProfile_t9B92D8A7CB0AE5AF973870EDF7DE2BC12E5FA4E5
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile::startupBehavior
	int32_t ___startupBehavior_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile::isStationaryObserver
	bool ___isStationaryObserver_6;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile::observationExtents
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___observationExtents_7;
	// Microsoft.MixedReality.Toolkit.Utilities.VolumeType Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile::observerVolumeType
	int32_t ___observerVolumeType_8;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile::updateInterval
	float ___updateInterval_9;

public:
	inline static int32_t get_offset_of_startupBehavior_5() { return static_cast<int32_t>(offsetof(BaseSpatialAwarenessObserverProfile_t68C2B7E6059D76B5FF4FA869AB9206227549C532, ___startupBehavior_5)); }
	inline int32_t get_startupBehavior_5() const { return ___startupBehavior_5; }
	inline int32_t* get_address_of_startupBehavior_5() { return &___startupBehavior_5; }
	inline void set_startupBehavior_5(int32_t value)
	{
		___startupBehavior_5 = value;
	}

	inline static int32_t get_offset_of_isStationaryObserver_6() { return static_cast<int32_t>(offsetof(BaseSpatialAwarenessObserverProfile_t68C2B7E6059D76B5FF4FA869AB9206227549C532, ___isStationaryObserver_6)); }
	inline bool get_isStationaryObserver_6() const { return ___isStationaryObserver_6; }
	inline bool* get_address_of_isStationaryObserver_6() { return &___isStationaryObserver_6; }
	inline void set_isStationaryObserver_6(bool value)
	{
		___isStationaryObserver_6 = value;
	}

	inline static int32_t get_offset_of_observationExtents_7() { return static_cast<int32_t>(offsetof(BaseSpatialAwarenessObserverProfile_t68C2B7E6059D76B5FF4FA869AB9206227549C532, ___observationExtents_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_observationExtents_7() const { return ___observationExtents_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_observationExtents_7() { return &___observationExtents_7; }
	inline void set_observationExtents_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___observationExtents_7 = value;
	}

	inline static int32_t get_offset_of_observerVolumeType_8() { return static_cast<int32_t>(offsetof(BaseSpatialAwarenessObserverProfile_t68C2B7E6059D76B5FF4FA869AB9206227549C532, ___observerVolumeType_8)); }
	inline int32_t get_observerVolumeType_8() const { return ___observerVolumeType_8; }
	inline int32_t* get_address_of_observerVolumeType_8() { return &___observerVolumeType_8; }
	inline void set_observerVolumeType_8(int32_t value)
	{
		___observerVolumeType_8 = value;
	}

	inline static int32_t get_offset_of_updateInterval_9() { return static_cast<int32_t>(offsetof(BaseSpatialAwarenessObserverProfile_t68C2B7E6059D76B5FF4FA869AB9206227549C532, ___updateInterval_9)); }
	inline float get_updateInterval_9() const { return ___updateInterval_9; }
	inline float* get_address_of_updateInterval_9() { return &___updateInterval_9; }
	inline void set_updateInterval_9(float value)
	{
		___updateInterval_9 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile
struct  MixedRealitySpatialAwarenessSystemProfile_t924DACA0AB1914B9CC479034DE439FFE54A76F35  : public BaseMixedRealityProfile_t9B92D8A7CB0AE5AF973870EDF7DE2BC12E5FA4E5
{
public:
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration[] Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile::observerConfigurations
	MixedRealitySpatialObserverConfigurationU5BU5D_t6023E6515AC40A08349DED8C9E1E75B24BE03532* ___observerConfigurations_5;

public:
	inline static int32_t get_offset_of_observerConfigurations_5() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystemProfile_t924DACA0AB1914B9CC479034DE439FFE54A76F35, ___observerConfigurations_5)); }
	inline MixedRealitySpatialObserverConfigurationU5BU5D_t6023E6515AC40A08349DED8C9E1E75B24BE03532* get_observerConfigurations_5() const { return ___observerConfigurations_5; }
	inline MixedRealitySpatialObserverConfigurationU5BU5D_t6023E6515AC40A08349DED8C9E1E75B24BE03532** get_address_of_observerConfigurations_5() { return &___observerConfigurations_5; }
	inline void set_observerConfigurations_5(MixedRealitySpatialObserverConfigurationU5BU5D_t6023E6515AC40A08349DED8C9E1E75B24BE03532* value)
	{
		___observerConfigurations_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observerConfigurations_5), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.EventSystems.EventSystem
struct  EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___m_DummyData_13;

public:
	inline static int32_t get_offset_of_m_SystemInputModules_4() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_SystemInputModules_4)); }
	inline List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * get_m_SystemInputModules_4() const { return ___m_SystemInputModules_4; }
	inline List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 ** get_address_of_m_SystemInputModules_4() { return &___m_SystemInputModules_4; }
	inline void set_m_SystemInputModules_4(List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * value)
	{
		___m_SystemInputModules_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SystemInputModules_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentInputModule_5() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_CurrentInputModule_5)); }
	inline BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * get_m_CurrentInputModule_5() const { return ___m_CurrentInputModule_5; }
	inline BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 ** get_address_of_m_CurrentInputModule_5() { return &___m_CurrentInputModule_5; }
	inline void set_m_CurrentInputModule_5(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * value)
	{
		___m_CurrentInputModule_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentInputModule_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_FirstSelected_7() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_FirstSelected_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_FirstSelected_7() const { return ___m_FirstSelected_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_FirstSelected_7() { return &___m_FirstSelected_7; }
	inline void set_m_FirstSelected_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_FirstSelected_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FirstSelected_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_sendNavigationEvents_8() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_sendNavigationEvents_8)); }
	inline bool get_m_sendNavigationEvents_8() const { return ___m_sendNavigationEvents_8; }
	inline bool* get_address_of_m_sendNavigationEvents_8() { return &___m_sendNavigationEvents_8; }
	inline void set_m_sendNavigationEvents_8(bool value)
	{
		___m_sendNavigationEvents_8 = value;
	}

	inline static int32_t get_offset_of_m_DragThreshold_9() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_DragThreshold_9)); }
	inline int32_t get_m_DragThreshold_9() const { return ___m_DragThreshold_9; }
	inline int32_t* get_address_of_m_DragThreshold_9() { return &___m_DragThreshold_9; }
	inline void set_m_DragThreshold_9(int32_t value)
	{
		___m_DragThreshold_9 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelected_10() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_CurrentSelected_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_CurrentSelected_10() const { return ___m_CurrentSelected_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_CurrentSelected_10() { return &___m_CurrentSelected_10; }
	inline void set_m_CurrentSelected_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_CurrentSelected_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentSelected_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_HasFocus_11() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_HasFocus_11)); }
	inline bool get_m_HasFocus_11() const { return ___m_HasFocus_11; }
	inline bool* get_address_of_m_HasFocus_11() { return &___m_HasFocus_11; }
	inline void set_m_HasFocus_11(bool value)
	{
		___m_HasFocus_11 = value;
	}

	inline static int32_t get_offset_of_m_SelectionGuard_12() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_SelectionGuard_12)); }
	inline bool get_m_SelectionGuard_12() const { return ___m_SelectionGuard_12; }
	inline bool* get_address_of_m_SelectionGuard_12() { return &___m_SelectionGuard_12; }
	inline void set_m_SelectionGuard_12(bool value)
	{
		___m_SelectionGuard_12 = value;
	}

	inline static int32_t get_offset_of_m_DummyData_13() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_DummyData_13)); }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * get_m_DummyData_13() const { return ___m_DummyData_13; }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E ** get_address_of_m_DummyData_13() { return &___m_DummyData_13; }
	inline void set_m_DummyData_13(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * value)
	{
		___m_DummyData_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DummyData_13), (void*)value);
	}
};

struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * ___s_RaycastComparer_14;

public:
	inline static int32_t get_offset_of_m_EventSystems_6() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields, ___m_EventSystems_6)); }
	inline List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * get_m_EventSystems_6() const { return ___m_EventSystems_6; }
	inline List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 ** get_address_of_m_EventSystems_6() { return &___m_EventSystems_6; }
	inline void set_m_EventSystems_6(List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * value)
	{
		___m_EventSystems_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystems_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_RaycastComparer_14() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields, ___s_RaycastComparer_14)); }
	inline Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * get_s_RaycastComparer_14() const { return ___s_RaycastComparer_14; }
	inline Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 ** get_address_of_s_RaycastComparer_14() { return &___s_RaycastComparer_14; }
	inline void set_s_RaycastComparer_14(Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * value)
	{
		___s_RaycastComparer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_RaycastComparer_14), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration[]
struct MixedRealitySpatialObserverConfigurationU5BU5D_t6023E6515AC40A08349DED8C9E1E75B24BE03532  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MixedRealitySpatialObserverConfiguration_tF18BB40F09B6C4E7F49A4B1AB0B6A0E264362FF3  m_Items[1];

public:
	inline MixedRealitySpatialObserverConfiguration_tF18BB40F09B6C4E7F49A4B1AB0B6A0E264362FF3  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MixedRealitySpatialObserverConfiguration_tF18BB40F09B6C4E7F49A4B1AB0B6A0E264362FF3 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MixedRealitySpatialObserverConfiguration_tF18BB40F09B6C4E7F49A4B1AB0B6A0E264362FF3  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___componentType_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___componentName_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___observerProfile_4), (void*)NULL);
		#endif
	}
	inline MixedRealitySpatialObserverConfiguration_tF18BB40F09B6C4E7F49A4B1AB0B6A0E264362FF3  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MixedRealitySpatialObserverConfiguration_tF18BB40F09B6C4E7F49A4B1AB0B6A0E264362FF3 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MixedRealitySpatialObserverConfiguration_tF18BB40F09B6C4E7F49A4B1AB0B6A0E264362FF3  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___componentType_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___componentName_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___observerProfile_4), (void*)NULL);
		#endif
	}
};


// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<System.Object>::.ctor(UnityEngine.EventSystems.EventSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessEventData_1__ctor_m906CC3E7AA54B7EBE5699B727243A064612122A7_gshared (MixedRealitySpatialAwarenessEventData_1_t196832092212C73AA3977BFA88BE0BF81B8E79A8 * __this, EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___eventSystem0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::RegisterDataProvider<System.Object>(System.Type,Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisRuntimeObject_m487FA45AB4E82A7753C674A71329DAE5CFD3555F_gshared (BaseDataProviderAccessCoreSystem_tA854322E960D9AB5054C56A9493812CF94E6B670 * __this, Type_t * ___concreteType0, int32_t ___supportedPlatforms1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::UnregisterDataProvider<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisRuntimeObject_mFC81C6C1E399B23AAFFFA9D33ECD8A4872C79149_gshared (BaseDataProviderAccessCoreSystem_tA854322E960D9AB5054C56A9493812CF94E6B670 * __this, RuntimeObject * ___dataProviderInstance0, const RuntimeMethod* method);

// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::.ctor(Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem__ctor_m26FA61B1B5DEE5DECEDEA633EE9ADFF3682B2938 (MixedRealitySpatialAwarenessSystem_tB8C29ACDB45840EA279F13301D19CC3A3621FB90 * __this, MixedRealitySpatialAwarenessSystemProfile_t924DACA0AB1914B9CC479034DE439FFE54A76F35 * ___profile0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseCoreSystem::set_Registrar(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseCoreSystem_set_Registrar_mD5E18F2F06757376B3C801DD43336A7F7EABF2E6_inline (BaseCoreSystem_t96EC8004E65103EA61B559F9D8A5599E7E8CC0B6 * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::.ctor(Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseDataProviderAccessCoreSystem__ctor_m89996E647CC9F6CA80D55BC5BD113D688BC5DBA6 (BaseDataProviderAccessCoreSystem_tA854322E960D9AB5054C56A9493812CF94E6B670 * __this, BaseMixedRealityProfile_t9B92D8A7CB0AE5AF973870EDF7DE2BC12E5FA4E5 * ___profile0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Initialize_m148DEBB0D1B97324D51B789A68AC36B71BC845A7 (BaseService_tA51F0EA841C4C16598268B190DC8663BCB38F555 * __this, const RuntimeMethod* method);
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * EventSystem_get_current_m4B9C11F490297AE55428038DACD240596D6CE5F2 (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>::.ctor(UnityEngine.EventSystems.EventSystem)
inline void MixedRealitySpatialAwarenessEventData_1__ctor_mD2E7F32FB289DBB8161ACE8093283414F2F5D981 (MixedRealitySpatialAwarenessEventData_1_t1C795CE2A6A38DE68F64D1A76443E3081BB21F09 * __this, EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___eventSystem0, const RuntimeMethod* method)
{
	((  void (*) (MixedRealitySpatialAwarenessEventData_1_t1C795CE2A6A38DE68F64D1A76443E3081BB21F09 *, EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C *, const RuntimeMethod*))MixedRealitySpatialAwarenessEventData_1__ctor_m906CC3E7AA54B7EBE5699B727243A064612122A7_gshared)(__this, ___eventSystem0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::InitializeInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_InitializeInternal_m2878E07265AC0B6684B45AA7536E4AF1042FAB63 (MixedRealitySpatialAwarenessSystem_tB8C29ACDB45840EA279F13301D19CC3A3621FB90 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration[] Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile::get_ObserverConfigurations()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealitySpatialObserverConfigurationU5BU5D_t6023E6515AC40A08349DED8C9E1E75B24BE03532* MixedRealitySpatialAwarenessSystemProfile_get_ObserverConfigurations_mAA860B58372A56A3D6CED6B4C2C5ED740D967A50_inline (MixedRealitySpatialAwarenessSystemProfile_t924DACA0AB1914B9CC479034DE439FFE54A76F35 * __this, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::get_ComponentName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MixedRealitySpatialObserverConfiguration_get_ComponentName_mCFFF6E449729FD2770ADA8C160B2AF9FA1EC2EB6_inline (MixedRealitySpatialObserverConfiguration_tF18BB40F09B6C4E7F49A4B1AB0B6A0E264362FF3 * __this, const RuntimeMethod* method);
// System.UInt32 Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::get_Priority()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t MixedRealitySpatialObserverConfiguration_get_Priority_m31AB848F6C856149D85F171F8FF319BA4295D253_inline (MixedRealitySpatialObserverConfiguration_tF18BB40F09B6C4E7F49A4B1AB0B6A0E264362FF3 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::get_ObserverProfile()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BaseSpatialAwarenessObserverProfile_t68C2B7E6059D76B5FF4FA869AB9206227549C532 * MixedRealitySpatialObserverConfiguration_get_ObserverProfile_mC3E19004E5BBC87C221D1015502719342D04A65E_inline (MixedRealitySpatialObserverConfiguration_tF18BB40F09B6C4E7F49A4B1AB0B6A0E264362FF3 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::get_ComponentType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SystemType_t9CBB747474C12365CDB0953443942140BA3F6E3D * MixedRealitySpatialObserverConfiguration_get_ComponentType_m160A7FD8E7196C3305D7378BC99C99EC2BB75387_inline (MixedRealitySpatialObserverConfiguration_tF18BB40F09B6C4E7F49A4B1AB0B6A0E264362FF3 * __this, const RuntimeMethod* method);
// System.Type Microsoft.MixedReality.Toolkit.Utilities.SystemType::get_Type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * SystemType_get_Type_m25844112BEA86A8166F2F6C3E32951585126BF2A_inline (SystemType_t9CBB747474C12365CDB0953443942140BA3F6E3D * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::get_RuntimePlatform()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealitySpatialObserverConfiguration_get_RuntimePlatform_m1B1CA72FA60FD1777E71DB899A1234CF9957AB77_inline (MixedRealitySpatialObserverConfiguration_tF18BB40F09B6C4E7F49A4B1AB0B6A0E264362FF3 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::RegisterDataProvider<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>(System.Type,Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms,System.Object[])
inline bool BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisIMixedRealitySpatialAwarenessObserver_tF7E2646171E43DB94043CA41D69BC431B2DAD514_mC1F45A7F249A742F804D99BC59D1EAB71D76E60F (BaseDataProviderAccessCoreSystem_tA854322E960D9AB5054C56A9493812CF94E6B670 * __this, Type_t * ___concreteType0, int32_t ___supportedPlatforms1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, const RuntimeMethod* method)
{
	return ((  bool (*) (BaseDataProviderAccessCoreSystem_tA854322E960D9AB5054C56A9493812CF94E6B670 *, Type_t *, int32_t, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisRuntimeObject_m487FA45AB4E82A7753C674A71329DAE5CFD3555F_gshared)(__this, ___concreteType0, ___supportedPlatforms1, ___args2, method);
}
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Disable_mFDAACFD3617E984F498F198C22701C9BE2394636 (BaseService_tA51F0EA841C4C16598268B190DC8663BCB38F555 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::UnregisterDataProvider<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>(!!0)
inline bool BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisIMixedRealitySpatialAwarenessObserver_tF7E2646171E43DB94043CA41D69BC431B2DAD514_mF266653C49A7269A320BD4388BCFF40C9AF3918A (BaseDataProviderAccessCoreSystem_tA854322E960D9AB5054C56A9493812CF94E6B670 * __this, RuntimeObject* ___dataProviderInstance0, const RuntimeMethod* method)
{
	return ((  bool (*) (BaseDataProviderAccessCoreSystem_tA854322E960D9AB5054C56A9493812CF94E6B670 *, RuntimeObject*, const RuntimeMethod*))BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisRuntimeObject_mFC81C6C1E399B23AAFFFA9D33ECD8A4872C79149_gshared)(__this, ___dataProviderInstance0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseDataProviderAccessCoreSystem_Enable_m5F3FE2DEB0A5C047042F556603DFED20DF93DF32 (BaseDataProviderAccessCoreSystem_tA854322E960D9AB5054C56A9493812CF94E6B670 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseDataProviderAccessCoreSystem_Reset_m1C814A82E22132985AF2040636A9C277B74DBD9C (BaseDataProviderAccessCoreSystem_tA854322E960D9AB5054C56A9493812CF94E6B670 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isEditor_m7367DDB72F13E4846E8EB76FFAAACA84840BE921 (const RuntimeMethod* method);
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::DetachChildren()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_DetachChildren_m0800099F604AB1B59A72AC83E175B964B1EDFEF2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseEventSystem::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseEventSystem_Destroy_mBF8486F3488A1730CED9834C195C7779498182A5 (BaseEventSystem_t6AAFE06D2CA842D33C964477AADD8C7F592E992A * __this, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::get_CreateSpatialAwarenessObjectParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * MixedRealitySpatialAwarenessSystem_get_CreateSpatialAwarenessObjectParent_mDA084A346580A8492433B38B757C3233AF60772D (MixedRealitySpatialAwarenessSystem_tB8C29ACDB45840EA279F13301D19CC3A3621FB90 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::AddChild(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityPlayspace_AddChild_m34C1443CE2AA5925C738FE3D07DE2492A8225A42 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform0, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::get_SpatialAwarenessObjectParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * MixedRealitySpatialAwarenessSystem_get_SpatialAwarenessObjectParent_m5FBEE875E0EB2FED310323AAF92A29E554A9C23E (MixedRealitySpatialAwarenessSystem_tB8C29ACDB45840EA279F13301D19CC3A3621FB90 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
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
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::.ctor(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar,Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem__ctor_m30D3040F81B47204E14F8DF5F06CCED8A26F8AB4 (MixedRealitySpatialAwarenessSystem_tB8C29ACDB45840EA279F13301D19CC3A3621FB90 * __this, RuntimeObject* ___registrar0, MixedRealitySpatialAwarenessSystemProfile_t924DACA0AB1914B9CC479034DE439FFE54A76F35 * ___profile1, const RuntimeMethod* method)
{
	{
		// MixedRealitySpatialAwarenessSystemProfile profile) : this(profile)
		MixedRealitySpatialAwarenessSystemProfile_t924DACA0AB1914B9CC479034DE439FFE54A76F35 * L_0 = ___profile1;
		MixedRealitySpatialAwarenessSystem__ctor_m26FA61B1B5DEE5DECEDEA633EE9ADFF3682B2938(__this, L_0, /*hidden argument*/NULL);
		// Registrar = registrar;
		RuntimeObject* L_1 = ___registrar0;
		BaseCoreSystem_set_Registrar_mD5E18F2F06757376B3C801DD43336A7F7EABF2E6_inline(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::.ctor(Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem__ctor_m26FA61B1B5DEE5DECEDEA633EE9ADFF3682B2938 (MixedRealitySpatialAwarenessSystem_tB8C29ACDB45840EA279F13301D19CC3A3621FB90 * __this, MixedRealitySpatialAwarenessSystemProfile_t924DACA0AB1914B9CC479034DE439FFE54A76F35 * ___profile0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem__ctor_m26FA61B1B5DEE5DECEDEA633EE9ADFF3682B2938_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string Name { get; protected set; } = "Mixed Reality Spatial Awareness System";
		__this->set_U3CNameU3Ek__BackingField_14(_stringLiteral188D30B6EDF85BA42D4E192BE1E93A4D2142FDCB);
		// MixedRealitySpatialAwarenessSystemProfile profile) : base(profile)
		MixedRealitySpatialAwarenessSystemProfile_t924DACA0AB1914B9CC479034DE439FFE54A76F35 * L_0 = ___profile0;
		BaseDataProviderAccessCoreSystem__ctor_m89996E647CC9F6CA80D55BC5BD113D688BC5DBA6(__this, L_0, /*hidden argument*/NULL);
		// { }
		return;
	}
}
// System.String Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MixedRealitySpatialAwarenessSystem_get_Name_m744B9F0785A1695D2904E0D480FC9C04E087AD18 (MixedRealitySpatialAwarenessSystem_tB8C29ACDB45840EA279F13301D19CC3A3621FB90 * __this, const RuntimeMethod* method)
{
	{
		// public override string Name { get; protected set; } = "Mixed Reality Spatial Awareness System";
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_14();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_set_Name_m8CEE37674F7F8BD79B2F7152CD08F86BBEDB43D0 (MixedRealitySpatialAwarenessSystem_tB8C29ACDB45840EA279F13301D19CC3A3621FB90 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public override string Name { get; protected set; } = "Mixed Reality Spatial Awareness System";
		String_t* L_0 = ___value0;
		__this->set_U3CNameU3Ek__BackingField_14(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::CheckCapability(Microsoft.MixedReality.Toolkit.MixedRealityCapability)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealitySpatialAwarenessSystem_CheckCapability_mAFEA3B4B54779C66CDB95F7F9EF98D09D5304D35 (MixedRealitySpatialAwarenessSystem_tB8C29ACDB45840EA279F13301D19CC3A3621FB90 * __this, int32_t ___capability0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_CheckCapability_mAFEA3B4B54779C66CDB95F7F9EF98D09D5304D35_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// foreach(var observer in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
		RuntimeObject* L_0 = GenericVirtFuncInvoker0< RuntimeObject* >::Invoke(BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealitySpatialAwarenessObserver_tF7E2646171E43DB94043CA41D69BC431B2DAD514_m32C014AFAC3DB62CEDA598772B70B666D80DCB55_RuntimeMethod_var, __this);
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::GetEnumerator() */, IEnumerable_1_t1196D8B1252443E46248BC7DCE9D27ED80FA92A7_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002a;
		}

IL_000e:
		{
			// foreach(var observer in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
			RuntimeObject* L_2 = V_0;
			NullCheck(L_2);
			RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::get_Current() */, IEnumerator_1_tB399E4DD917AFB71B66EF49C2A29E8F70FAE8338_il2cpp_TypeInfo_var, L_2);
			// IMixedRealityCapabilityCheck capabilityChecker = observer as IMixedRealityCapabilityCheck;
			V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, IMixedRealityCapabilityCheck_t8FE02AC9C91AC19B5A02F93ED4792362A12FCF27_il2cpp_TypeInfo_var));
			// if ((capabilityChecker != null) &&
			//     capabilityChecker.CheckCapability(capability))
			RuntimeObject* L_4 = V_1;
			if (!L_4)
			{
				goto IL_002a;
			}
		}

IL_001d:
		{
			RuntimeObject* L_5 = V_1;
			int32_t L_6 = ___capability0;
			NullCheck(L_5);
			bool L_7 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(0 /* System.Boolean Microsoft.MixedReality.Toolkit.IMixedRealityCapabilityCheck::CheckCapability(Microsoft.MixedReality.Toolkit.MixedRealityCapability) */, IMixedRealityCapabilityCheck_t8FE02AC9C91AC19B5A02F93ED4792362A12FCF27_il2cpp_TypeInfo_var, L_5, L_6);
			if (!L_7)
			{
				goto IL_002a;
			}
		}

IL_0026:
		{
			// return true;
			V_2 = (bool)1;
			IL2CPP_LEAVE(0x40, FINALLY_0034);
		}

IL_002a:
		{
			// foreach(var observer in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
			RuntimeObject* L_8 = V_0;
			NullCheck(L_8);
			bool L_9 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_8);
			if (L_9)
			{
				goto IL_000e;
			}
		}

IL_0032:
		{
			IL2CPP_LEAVE(0x3E, FINALLY_0034);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0034;
	}

FINALLY_0034:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_10 = V_0;
			if (!L_10)
			{
				goto IL_003d;
			}
		}

IL_0037:
		{
			RuntimeObject* L_11 = V_0;
			NullCheck(L_11);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_11);
		}

IL_003d:
		{
			IL2CPP_END_FINALLY(52)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(52)
	{
		IL2CPP_JUMP_TBL(0x40, IL_0040)
		IL2CPP_JUMP_TBL(0x3E, IL_003e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003e:
	{
		// return false;
		return (bool)0;
	}

IL_0040:
	{
		// }
		bool L_12 = V_2;
		return L_12;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_Initialize_m149FDA64037BEC4893E3D5519CD0BCBF403B04BD (MixedRealitySpatialAwarenessSystem_tB8C29ACDB45840EA279F13301D19CC3A3621FB90 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_Initialize_m149FDA64037BEC4893E3D5519CD0BCBF403B04BD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Initialize();
		BaseService_Initialize_m148DEBB0D1B97324D51B789A68AC36B71BC845A7(__this, /*hidden argument*/NULL);
		// meshEventData = new MixedRealitySpatialAwarenessEventData<SpatialAwarenessMeshObject>(EventSystem.current);
		IL2CPP_RUNTIME_CLASS_INIT(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var);
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_0 = EventSystem_get_current_m4B9C11F490297AE55428038DACD240596D6CE5F2(/*hidden argument*/NULL);
		MixedRealitySpatialAwarenessEventData_1_t1C795CE2A6A38DE68F64D1A76443E3081BB21F09 * L_1 = (MixedRealitySpatialAwarenessEventData_1_t1C795CE2A6A38DE68F64D1A76443E3081BB21F09 *)il2cpp_codegen_object_new(MixedRealitySpatialAwarenessEventData_1_t1C795CE2A6A38DE68F64D1A76443E3081BB21F09_il2cpp_TypeInfo_var);
		MixedRealitySpatialAwarenessEventData_1__ctor_mD2E7F32FB289DBB8161ACE8093283414F2F5D981(L_1, L_0, /*hidden argument*/MixedRealitySpatialAwarenessEventData_1__ctor_mD2E7F32FB289DBB8161ACE8093283414F2F5D981_RuntimeMethod_var);
		__this->set_meshEventData_15(L_1);
		// InitializeInternal();
		MixedRealitySpatialAwarenessSystem_InitializeInternal_m2878E07265AC0B6684B45AA7536E4AF1042FAB63(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::InitializeInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_InitializeInternal_m2878E07265AC0B6684B45AA7536E4AF1042FAB63 (MixedRealitySpatialAwarenessSystem_tB8C29ACDB45840EA279F13301D19CC3A3621FB90 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_InitializeInternal_m2878E07265AC0B6684B45AA7536E4AF1042FAB63_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealitySpatialAwarenessSystemProfile_t924DACA0AB1914B9CC479034DE439FFE54A76F35 * V_0 = NULL;
	int32_t V_1 = 0;
	MixedRealitySpatialObserverConfiguration_tF18BB40F09B6C4E7F49A4B1AB0B6A0E264362FF3  V_2;
	memset((&V_2), 0, sizeof(V_2));
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_3 = NULL;
	{
		// MixedRealitySpatialAwarenessSystemProfile profile = ConfigurationProfile as MixedRealitySpatialAwarenessSystemProfile;
		BaseMixedRealityProfile_t9B92D8A7CB0AE5AF973870EDF7DE2BC12E5FA4E5 * L_0 = VirtFuncInvoker0< BaseMixedRealityProfile_t9B92D8A7CB0AE5AF973870EDF7DE2BC12E5FA4E5 * >::Invoke(19 /* Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::get_ConfigurationProfile() */, __this);
		V_0 = ((MixedRealitySpatialAwarenessSystemProfile_t924DACA0AB1914B9CC479034DE439FFE54A76F35 *)IsInstClass((RuntimeObject*)L_0, MixedRealitySpatialAwarenessSystemProfile_t924DACA0AB1914B9CC479034DE439FFE54A76F35_il2cpp_TypeInfo_var));
		// if (profile != null && GetDataProviders<IMixedRealitySpatialAwarenessObserver>().Count == 0)
		MixedRealitySpatialAwarenessSystemProfile_t924DACA0AB1914B9CC479034DE439FFE54A76F35 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_008b;
		}
	}
	{
		RuntimeObject* L_3 = GenericVirtFuncInvoker0< RuntimeObject* >::Invoke(BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealitySpatialAwarenessObserver_tF7E2646171E43DB94043CA41D69BC431B2DAD514_m32C014AFAC3DB62CEDA598772B70B666D80DCB55_RuntimeMethod_var, __this);
		NullCheck(L_3);
		int32_t L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::get_Count() */, IReadOnlyCollection_1_t11D7ADC536E8323192F90EEB91EA3E310F18CF40_il2cpp_TypeInfo_var, L_3);
		if (L_4)
		{
			goto IL_008b;
		}
	}
	{
		// for (int i = 0; i < profile.ObserverConfigurations.Length; i++)
		V_1 = 0;
		goto IL_0080;
	}

IL_0026:
	{
		// MixedRealitySpatialObserverConfiguration configuration = profile.ObserverConfigurations[i];
		MixedRealitySpatialAwarenessSystemProfile_t924DACA0AB1914B9CC479034DE439FFE54A76F35 * L_5 = V_0;
		NullCheck(L_5);
		MixedRealitySpatialObserverConfigurationU5BU5D_t6023E6515AC40A08349DED8C9E1E75B24BE03532* L_6 = MixedRealitySpatialAwarenessSystemProfile_get_ObserverConfigurations_mAA860B58372A56A3D6CED6B4C2C5ED740D967A50_inline(L_5, /*hidden argument*/NULL);
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		MixedRealitySpatialObserverConfiguration_tF18BB40F09B6C4E7F49A4B1AB0B6A0E264362FF3  L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_2 = L_9;
		// object[] args = { this, configuration.ComponentName, configuration.Priority, configuration.ObserverProfile };
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, __this);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)__this);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = L_11;
		String_t* L_13 = MixedRealitySpatialObserverConfiguration_get_ComponentName_mCFFF6E449729FD2770ADA8C160B2AF9FA1EC2EB6_inline((MixedRealitySpatialObserverConfiguration_tF18BB40F09B6C4E7F49A4B1AB0B6A0E264362FF3 *)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_13);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = L_12;
		uint32_t L_15 = MixedRealitySpatialObserverConfiguration_get_Priority_m31AB848F6C856149D85F171F8FF319BA4295D253_inline((MixedRealitySpatialObserverConfiguration_tF18BB40F09B6C4E7F49A4B1AB0B6A0E264362FF3 *)(&V_2), /*hidden argument*/NULL);
		uint32_t L_16 = L_15;
		RuntimeObject * L_17 = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_17);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_17);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_18 = L_14;
		BaseSpatialAwarenessObserverProfile_t68C2B7E6059D76B5FF4FA869AB9206227549C532 * L_19 = MixedRealitySpatialObserverConfiguration_get_ObserverProfile_mC3E19004E5BBC87C221D1015502719342D04A65E_inline((MixedRealitySpatialObserverConfiguration_tF18BB40F09B6C4E7F49A4B1AB0B6A0E264362FF3 *)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_19);
		V_3 = L_18;
		// RegisterDataProvider<IMixedRealitySpatialAwarenessObserver>(
		//     configuration.ComponentType.Type,
		//     configuration.RuntimePlatform,
		//     args);
		SystemType_t9CBB747474C12365CDB0953443942140BA3F6E3D * L_20 = MixedRealitySpatialObserverConfiguration_get_ComponentType_m160A7FD8E7196C3305D7378BC99C99EC2BB75387_inline((MixedRealitySpatialObserverConfiguration_tF18BB40F09B6C4E7F49A4B1AB0B6A0E264362FF3 *)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_20);
		Type_t * L_21 = SystemType_get_Type_m25844112BEA86A8166F2F6C3E32951585126BF2A_inline(L_20, /*hidden argument*/NULL);
		int32_t L_22 = MixedRealitySpatialObserverConfiguration_get_RuntimePlatform_m1B1CA72FA60FD1777E71DB899A1234CF9957AB77_inline((MixedRealitySpatialObserverConfiguration_tF18BB40F09B6C4E7F49A4B1AB0B6A0E264362FF3 *)(&V_2), /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_23 = V_3;
		BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisIMixedRealitySpatialAwarenessObserver_tF7E2646171E43DB94043CA41D69BC431B2DAD514_mC1F45A7F249A742F804D99BC59D1EAB71D76E60F(__this, L_21, L_22, L_23, /*hidden argument*/BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisIMixedRealitySpatialAwarenessObserver_tF7E2646171E43DB94043CA41D69BC431B2DAD514_mC1F45A7F249A742F804D99BC59D1EAB71D76E60F_RuntimeMethod_var);
		// for (int i = 0; i < profile.ObserverConfigurations.Length; i++)
		int32_t L_24 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_0080:
	{
		// for (int i = 0; i < profile.ObserverConfigurations.Length; i++)
		int32_t L_25 = V_1;
		MixedRealitySpatialAwarenessSystemProfile_t924DACA0AB1914B9CC479034DE439FFE54A76F35 * L_26 = V_0;
		NullCheck(L_26);
		MixedRealitySpatialObserverConfigurationU5BU5D_t6023E6515AC40A08349DED8C9E1E75B24BE03532* L_27 = MixedRealitySpatialAwarenessSystemProfile_get_ObserverConfigurations_mAA860B58372A56A3D6CED6B4C2C5ED740D967A50_inline(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		if ((((int32_t)L_25) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length)))))))
		{
			goto IL_0026;
		}
	}

IL_008b:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_Disable_m05AF9D779F0993732E74531EF7AA9D04211B30DF (MixedRealitySpatialAwarenessSystem_tB8C29ACDB45840EA279F13301D19CC3A3621FB90 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_Disable_m05AF9D779F0993732E74531EF7AA9D04211B30DF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// base.Disable();
		BaseService_Disable_mFDAACFD3617E984F498F198C22701C9BE2394636(__this, /*hidden argument*/NULL);
		// foreach (var provider in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
		RuntimeObject* L_0 = GenericVirtFuncInvoker0< RuntimeObject* >::Invoke(BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealitySpatialAwarenessObserver_tF7E2646171E43DB94043CA41D69BC431B2DAD514_m32C014AFAC3DB62CEDA598772B70B666D80DCB55_RuntimeMethod_var, __this);
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::GetEnumerator() */, IEnumerable_1_t1196D8B1252443E46248BC7DCE9D27ED80FA92A7_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0023;
		}

IL_0014:
		{
			// foreach (var provider in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
			RuntimeObject* L_2 = V_0;
			NullCheck(L_2);
			RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::get_Current() */, IEnumerator_1_tB399E4DD917AFB71B66EF49C2A29E8F70FAE8338_il2cpp_TypeInfo_var, L_2);
			V_1 = L_3;
			// UnregisterDataProvider(provider);
			RuntimeObject* L_4 = V_1;
			BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisIMixedRealitySpatialAwarenessObserver_tF7E2646171E43DB94043CA41D69BC431B2DAD514_mF266653C49A7269A320BD4388BCFF40C9AF3918A(__this, L_4, /*hidden argument*/BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisIMixedRealitySpatialAwarenessObserver_tF7E2646171E43DB94043CA41D69BC431B2DAD514_mF266653C49A7269A320BD4388BCFF40C9AF3918A_RuntimeMethod_var);
		}

IL_0023:
		{
			// foreach (var provider in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
			RuntimeObject* L_5 = V_0;
			NullCheck(L_5);
			bool L_6 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_5);
			if (L_6)
			{
				goto IL_0014;
			}
		}

IL_002b:
		{
			IL2CPP_LEAVE(0x37, FINALLY_002d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002d;
	}

FINALLY_002d:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_7 = V_0;
			if (!L_7)
			{
				goto IL_0036;
			}
		}

IL_0030:
		{
			RuntimeObject* L_8 = V_0;
			NullCheck(L_8);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_8);
		}

IL_0036:
		{
			IL2CPP_END_FINALLY(45)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(45)
	{
		IL2CPP_JUMP_TBL(0x37, IL_0037)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_Enable_m99B926D5E94074735EF77CB5C5986E8F61C15956 (MixedRealitySpatialAwarenessSystem_tB8C29ACDB45840EA279F13301D19CC3A3621FB90 * __this, const RuntimeMethod* method)
{
	{
		// InitializeInternal();
		MixedRealitySpatialAwarenessSystem_InitializeInternal_m2878E07265AC0B6684B45AA7536E4AF1042FAB63(__this, /*hidden argument*/NULL);
		// base.Enable();
		BaseDataProviderAccessCoreSystem_Enable_m5F3FE2DEB0A5C047042F556603DFED20DF93DF32(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_Reset_m129B50747AC12894331FF8C242955698DB7739B1 (MixedRealitySpatialAwarenessSystem_tB8C29ACDB45840EA279F13301D19CC3A3621FB90 * __this, const RuntimeMethod* method)
{
	{
		// base.Reset();
		BaseDataProviderAccessCoreSystem_Reset_m1C814A82E22132985AF2040636A9C277B74DBD9C(__this, /*hidden argument*/NULL);
		// Disable();
		VirtActionInvoker0::Invoke(26 /* System.Void Microsoft.MixedReality.Toolkit.BaseService::Disable() */, __this);
		// Initialize();
		VirtActionInvoker0::Invoke(21 /* System.Void Microsoft.MixedReality.Toolkit.BaseService::Initialize() */, __this);
		// Enable();
		VirtActionInvoker0::Invoke(23 /* System.Void Microsoft.MixedReality.Toolkit.BaseService::Enable() */, __this);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_Destroy_mE2F8E019C838814DB7BDD0ABD79CDF8BDF3594A4 (MixedRealitySpatialAwarenessSystem_tB8C29ACDB45840EA279F13301D19CC3A3621FB90 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_Destroy_mE2F8E019C838814DB7BDD0ABD79CDF8BDF3594A4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Application.isPlaying)
		bool L_0 = Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_004b;
		}
	}
	{
		// if (spatialAwarenessObjectParent != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_spatialAwarenessObjectParent_16();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_004b;
		}
	}
	{
		// if (Application.isEditor)
		bool L_3 = Application_get_isEditor_m7367DDB72F13E4846E8EB76FFAAACA84840BE921(/*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		// Object.DestroyImmediate(spatialAwarenessObjectParent);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_spatialAwarenessObjectParent_16();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_4, /*hidden argument*/NULL);
		// }
		goto IL_0044;
	}

IL_0029:
	{
		// spatialAwarenessObjectParent.transform.DetachChildren();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_spatialAwarenessObjectParent_16();
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_DetachChildren_m0800099F604AB1B59A72AC83E175B964B1EDFEF2(L_6, /*hidden argument*/NULL);
		// Object.Destroy(spatialAwarenessObjectParent);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_spatialAwarenessObjectParent_16();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_7, /*hidden argument*/NULL);
	}

IL_0044:
	{
		// spatialAwarenessObjectParent = null;
		__this->set_spatialAwarenessObjectParent_16((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
	}

IL_004b:
	{
		// base.Destroy();
		BaseEventSystem_Destroy_mBF8486F3488A1730CED9834C195C7779498182A5(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::get_SpatialAwarenessObjectParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * MixedRealitySpatialAwarenessSystem_get_SpatialAwarenessObjectParent_m5FBEE875E0EB2FED310323AAF92A29E554A9C23E (MixedRealitySpatialAwarenessSystem_tB8C29ACDB45840EA279F13301D19CC3A3621FB90 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_get_SpatialAwarenessObjectParent_m5FBEE875E0EB2FED310323AAF92A29E554A9C23E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	{
		// public GameObject SpatialAwarenessObjectParent => spatialAwarenessObjectParent != null ? spatialAwarenessObjectParent : (spatialAwarenessObjectParent = CreateSpatialAwarenessObjectParent);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_spatialAwarenessObjectParent_16();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = MixedRealitySpatialAwarenessSystem_get_CreateSpatialAwarenessObjectParent_mDA084A346580A8492433B38B757C3233AF60772D(__this, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = L_2;
		V_0 = L_3;
		__this->set_spatialAwarenessObjectParent_16(L_3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = V_0;
		return L_4;
	}

IL_001e:
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_spatialAwarenessObjectParent_16();
		return L_5;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::get_CreateSpatialAwarenessObjectParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * MixedRealitySpatialAwarenessSystem_get_CreateSpatialAwarenessObjectParent_mDA084A346580A8492433B38B757C3233AF60772D (MixedRealitySpatialAwarenessSystem_tB8C29ACDB45840EA279F13301D19CC3A3621FB90 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_get_CreateSpatialAwarenessObjectParent_mDA084A346580A8492433B38B757C3233AF60772D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject newParent = new GameObject("Spatial Awareness System");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_0, _stringLiteral84210E916B771570003864C57344196A52266B35, /*hidden argument*/NULL);
		// MixedRealityPlayspace.AddChild(newParent.transform);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = L_0;
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPlayspace_tC35E09A6C73B789074660260409E43C533112826_il2cpp_TypeInfo_var);
		MixedRealityPlayspace_AddChild_m34C1443CE2AA5925C738FE3D07DE2492A8225A42(L_2, /*hidden argument*/NULL);
		// return newParent;
		return L_1;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::CreateSpatialAwarenessObservationParent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * MixedRealitySpatialAwarenessSystem_CreateSpatialAwarenessObservationParent_m2926CF94D47E002A6CC99249E5B9C57160F4530D (MixedRealitySpatialAwarenessSystem_tB8C29ACDB45840EA279F13301D19CC3A3621FB90 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_CreateSpatialAwarenessObservationParent_m2926CF94D47E002A6CC99249E5B9C57160F4530D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject objectParent = new GameObject(name);
		String_t* L_0 = ___name0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_1, L_0, /*hidden argument*/NULL);
		// objectParent.transform.parent = SpatialAwarenessObjectParent.transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = L_1;
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = MixedRealitySpatialAwarenessSystem_get_SpatialAwarenessObjectParent_m5FBEE875E0EB2FED310323AAF92A29E554A9C23E(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_3, L_5, /*hidden argument*/NULL);
		// return objectParent;
		return L_2;
	}
}
// System.UInt32 Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::GenerateNewSourceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t MixedRealitySpatialAwarenessSystem_GenerateNewSourceId_m07CC28FDBA0BEDA6772F864115A327DBE71BDE9B (MixedRealitySpatialAwarenessSystem_tB8C29ACDB45840EA279F13301D19CC3A3621FB90 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		// return nextSourceId++;
		uint32_t L_0 = __this->get_nextSourceId_17();
		V_0 = L_0;
		uint32_t L_1 = V_0;
		__this->set_nextSourceId_17(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)));
		uint32_t L_2 = V_0;
		return L_2;
	}
}
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::get_SpatialAwarenessSystemProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealitySpatialAwarenessSystemProfile_t924DACA0AB1914B9CC479034DE439FFE54A76F35 * MixedRealitySpatialAwarenessSystem_get_SpatialAwarenessSystemProfile_mC0F81A6FCF805BA307B0F7DC39A9721D102F9492 (MixedRealitySpatialAwarenessSystem_tB8C29ACDB45840EA279F13301D19CC3A3621FB90 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_get_SpatialAwarenessSystemProfile_mC0F81A6FCF805BA307B0F7DC39A9721D102F9492_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (spatialAwarenessSystemProfile == null)
		MixedRealitySpatialAwarenessSystemProfile_t924DACA0AB1914B9CC479034DE439FFE54A76F35 * L_0 = __this->get_spatialAwarenessSystemProfile_18();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// spatialAwarenessSystemProfile = ConfigurationProfile as MixedRealitySpatialAwarenessSystemProfile;
		BaseMixedRealityProfile_t9B92D8A7CB0AE5AF973870EDF7DE2BC12E5FA4E5 * L_2 = VirtFuncInvoker0< BaseMixedRealityProfile_t9B92D8A7CB0AE5AF973870EDF7DE2BC12E5FA4E5 * >::Invoke(19 /* Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::get_ConfigurationProfile() */, __this);
		__this->set_spatialAwarenessSystemProfile_18(((MixedRealitySpatialAwarenessSystemProfile_t924DACA0AB1914B9CC479034DE439FFE54A76F35 *)IsInstClass((RuntimeObject*)L_2, MixedRealitySpatialAwarenessSystemProfile_t924DACA0AB1914B9CC479034DE439FFE54A76F35_il2cpp_TypeInfo_var)));
	}

IL_001f:
	{
		// return spatialAwarenessSystemProfile;
		MixedRealitySpatialAwarenessSystemProfile_t924DACA0AB1914B9CC479034DE439FFE54A76F35 * L_3 = __this->get_spatialAwarenessSystemProfile_18();
		return L_3;
	}
}
// System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver> Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::GetObservers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MixedRealitySpatialAwarenessSystem_GetObservers_m977C96B44F3E3A53AEBE45F6EF0D91084EB522C2 (MixedRealitySpatialAwarenessSystem_tB8C29ACDB45840EA279F13301D19CC3A3621FB90 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_GetObservers_m977C96B44F3E3A53AEBE45F6EF0D91084EB522C2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetDataProviders() as IReadOnlyList<IMixedRealitySpatialAwarenessObserver>;
		RuntimeObject* L_0 = VirtFuncInvoker0< RuntimeObject* >::Invoke(44 /* System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.IMixedRealityDataProvider> Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::GetDataProviders() */, __this);
		return ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IReadOnlyList_1_tABAFADAEA2225D69A24D2300599947AB5FE9BDFA_il2cpp_TypeInfo_var));
	}
}
// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::GetObserver(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MixedRealitySpatialAwarenessSystem_GetObserver_m0DA8CDDB7E5694E8820CB38BF679A10A8E73F284 (MixedRealitySpatialAwarenessSystem_tB8C29ACDB45840EA279F13301D19CC3A3621FB90 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_GetObserver_m0DA8CDDB7E5694E8820CB38BF679A10A8E73F284_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetDataProvider(name) as IMixedRealitySpatialAwarenessObserver;
		String_t* L_0 = ___name0;
		RuntimeObject* L_1 = VirtFuncInvoker1< RuntimeObject*, String_t* >::Invoke(46 /* Microsoft.MixedReality.Toolkit.IMixedRealityDataProvider Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::GetDataProvider(System.String) */, __this, L_0);
		return ((RuntimeObject*)IsInst((RuntimeObject*)L_1, IMixedRealitySpatialAwarenessObserver_tF7E2646171E43DB94043CA41D69BC431B2DAD514_il2cpp_TypeInfo_var));
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::ResumeObservers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_ResumeObservers_m38960799ABF75929E250FBAEA157618D15709E27 (MixedRealitySpatialAwarenessSystem_tB8C29ACDB45840EA279F13301D19CC3A3621FB90 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_ResumeObservers_m38960799ABF75929E250FBAEA157618D15709E27_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// foreach (var observer in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
		RuntimeObject* L_0 = GenericVirtFuncInvoker0< RuntimeObject* >::Invoke(BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealitySpatialAwarenessObserver_tF7E2646171E43DB94043CA41D69BC431B2DAD514_m32C014AFAC3DB62CEDA598772B70B666D80DCB55_RuntimeMethod_var, __this);
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::GetEnumerator() */, IEnumerable_1_t1196D8B1252443E46248BC7DCE9D27ED80FA92A7_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0019;
		}

IL_000e:
		{
			// foreach (var observer in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
			RuntimeObject* L_2 = V_0;
			NullCheck(L_2);
			RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::get_Current() */, IEnumerator_1_tB399E4DD917AFB71B66EF49C2A29E8F70FAE8338_il2cpp_TypeInfo_var, L_2);
			// observer.Resume();
			NullCheck(L_3);
			InterfaceActionInvoker0::Invoke(16 /* System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver::Resume() */, IMixedRealitySpatialAwarenessObserver_tF7E2646171E43DB94043CA41D69BC431B2DAD514_il2cpp_TypeInfo_var, L_3);
		}

IL_0019:
		{
			// foreach (var observer in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
			RuntimeObject* L_4 = V_0;
			NullCheck(L_4);
			bool L_5 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_4);
			if (L_5)
			{
				goto IL_000e;
			}
		}

IL_0021:
		{
			IL2CPP_LEAVE(0x2D, FINALLY_0023);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0023;
	}

FINALLY_0023:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_6 = V_0;
			if (!L_6)
			{
				goto IL_002c;
			}
		}

IL_0026:
		{
			RuntimeObject* L_7 = V_0;
			NullCheck(L_7);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_7);
		}

IL_002c:
		{
			IL2CPP_END_FINALLY(35)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(35)
	{
		IL2CPP_JUMP_TBL(0x2D, IL_002d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::SuspendObservers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_SuspendObservers_mCB278D01A1E4C86264F4768BD4D3DB65280E29CC (MixedRealitySpatialAwarenessSystem_tB8C29ACDB45840EA279F13301D19CC3A3621FB90 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_SuspendObservers_mCB278D01A1E4C86264F4768BD4D3DB65280E29CC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// foreach (var observer in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
		RuntimeObject* L_0 = GenericVirtFuncInvoker0< RuntimeObject* >::Invoke(BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealitySpatialAwarenessObserver_tF7E2646171E43DB94043CA41D69BC431B2DAD514_m32C014AFAC3DB62CEDA598772B70B666D80DCB55_RuntimeMethod_var, __this);
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::GetEnumerator() */, IEnumerable_1_t1196D8B1252443E46248BC7DCE9D27ED80FA92A7_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0019;
		}

IL_000e:
		{
			// foreach (var observer in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
			RuntimeObject* L_2 = V_0;
			NullCheck(L_2);
			RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::get_Current() */, IEnumerator_1_tB399E4DD917AFB71B66EF49C2A29E8F70FAE8338_il2cpp_TypeInfo_var, L_2);
			// observer.Suspend();
			NullCheck(L_3);
			InterfaceActionInvoker0::Invoke(17 /* System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver::Suspend() */, IMixedRealitySpatialAwarenessObserver_tF7E2646171E43DB94043CA41D69BC431B2DAD514_il2cpp_TypeInfo_var, L_3);
		}

IL_0019:
		{
			// foreach (var observer in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
			RuntimeObject* L_4 = V_0;
			NullCheck(L_4);
			bool L_5 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_4);
			if (L_5)
			{
				goto IL_000e;
			}
		}

IL_0021:
		{
			IL2CPP_LEAVE(0x2D, FINALLY_0023);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0023;
	}

FINALLY_0023:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_6 = V_0;
			if (!L_6)
			{
				goto IL_002c;
			}
		}

IL_0026:
		{
			RuntimeObject* L_7 = V_0;
			NullCheck(L_7);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_7);
		}

IL_002c:
		{
			IL2CPP_END_FINALLY(35)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(35)
	{
		IL2CPP_JUMP_TBL(0x2D, IL_002d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::ClearObservations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_ClearObservations_m1EBC8A4D9A54174B2C787AF320204ECB434B1CDF (MixedRealitySpatialAwarenessSystem_tB8C29ACDB45840EA279F13301D19CC3A3621FB90 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_ClearObservations_m1EBC8A4D9A54174B2C787AF320204ECB434B1CDF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// foreach (var observer in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
		RuntimeObject* L_0 = GenericVirtFuncInvoker0< RuntimeObject* >::Invoke(BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealitySpatialAwarenessObserver_tF7E2646171E43DB94043CA41D69BC431B2DAD514_m32C014AFAC3DB62CEDA598772B70B666D80DCB55_RuntimeMethod_var, __this);
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::GetEnumerator() */, IEnumerable_1_t1196D8B1252443E46248BC7DCE9D27ED80FA92A7_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0019;
		}

IL_000e:
		{
			// foreach (var observer in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
			RuntimeObject* L_2 = V_0;
			NullCheck(L_2);
			RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::get_Current() */, IEnumerator_1_tB399E4DD917AFB71B66EF49C2A29E8F70FAE8338_il2cpp_TypeInfo_var, L_2);
			// observer.ClearObservations();
			NullCheck(L_3);
			InterfaceActionInvoker0::Invoke(18 /* System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver::ClearObservations() */, IMixedRealitySpatialAwarenessObserver_tF7E2646171E43DB94043CA41D69BC431B2DAD514_il2cpp_TypeInfo_var, L_3);
		}

IL_0019:
		{
			// foreach (var observer in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
			RuntimeObject* L_4 = V_0;
			NullCheck(L_4);
			bool L_5 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_4);
			if (L_5)
			{
				goto IL_000e;
			}
		}

IL_0021:
		{
			IL2CPP_LEAVE(0x2D, FINALLY_0023);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0023;
	}

FINALLY_0023:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_6 = V_0;
			if (!L_6)
			{
				goto IL_002c;
			}
		}

IL_0026:
		{
			RuntimeObject* L_7 = V_0;
			NullCheck(L_7);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_7);
		}

IL_002c:
		{
			IL2CPP_END_FINALLY(35)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(35)
	{
		IL2CPP_JUMP_TBL(0x2D, IL_002d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_002d:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseCoreSystem_set_Registrar_mD5E18F2F06757376B3C801DD43336A7F7EABF2E6_inline (BaseCoreSystem_t96EC8004E65103EA61B559F9D8A5599E7E8CC0B6 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// protected IMixedRealityServiceRegistrar Registrar { get; set; } = null;
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CRegistrarU3Ek__BackingField_12(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealitySpatialObserverConfigurationU5BU5D_t6023E6515AC40A08349DED8C9E1E75B24BE03532* MixedRealitySpatialAwarenessSystemProfile_get_ObserverConfigurations_mAA860B58372A56A3D6CED6B4C2C5ED740D967A50_inline (MixedRealitySpatialAwarenessSystemProfile_t924DACA0AB1914B9CC479034DE439FFE54A76F35 * __this, const RuntimeMethod* method)
{
	{
		// get { return observerConfigurations; }
		MixedRealitySpatialObserverConfigurationU5BU5D_t6023E6515AC40A08349DED8C9E1E75B24BE03532* L_0 = __this->get_observerConfigurations_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MixedRealitySpatialObserverConfiguration_get_ComponentName_mCFFF6E449729FD2770ADA8C160B2AF9FA1EC2EB6_inline (MixedRealitySpatialObserverConfiguration_tF18BB40F09B6C4E7F49A4B1AB0B6A0E264362FF3 * __this, const RuntimeMethod* method)
{
	{
		// public string ComponentName => componentName;
		String_t* L_0 = __this->get_componentName_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t MixedRealitySpatialObserverConfiguration_get_Priority_m31AB848F6C856149D85F171F8FF319BA4295D253_inline (MixedRealitySpatialObserverConfiguration_tF18BB40F09B6C4E7F49A4B1AB0B6A0E264362FF3 * __this, const RuntimeMethod* method)
{
	{
		// public uint Priority => priority;
		uint32_t L_0 = __this->get_priority_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BaseSpatialAwarenessObserverProfile_t68C2B7E6059D76B5FF4FA869AB9206227549C532 * MixedRealitySpatialObserverConfiguration_get_ObserverProfile_mC3E19004E5BBC87C221D1015502719342D04A65E_inline (MixedRealitySpatialObserverConfiguration_tF18BB40F09B6C4E7F49A4B1AB0B6A0E264362FF3 * __this, const RuntimeMethod* method)
{
	{
		// public BaseSpatialAwarenessObserverProfile ObserverProfile => observerProfile;
		BaseSpatialAwarenessObserverProfile_t68C2B7E6059D76B5FF4FA869AB9206227549C532 * L_0 = __this->get_observerProfile_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SystemType_t9CBB747474C12365CDB0953443942140BA3F6E3D * MixedRealitySpatialObserverConfiguration_get_ComponentType_m160A7FD8E7196C3305D7378BC99C99EC2BB75387_inline (MixedRealitySpatialObserverConfiguration_tF18BB40F09B6C4E7F49A4B1AB0B6A0E264362FF3 * __this, const RuntimeMethod* method)
{
	{
		// public SystemType ComponentType => componentType;
		SystemType_t9CBB747474C12365CDB0953443942140BA3F6E3D * L_0 = __this->get_componentType_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * SystemType_get_Type_m25844112BEA86A8166F2F6C3E32951585126BF2A_inline (SystemType_t9CBB747474C12365CDB0953443942140BA3F6E3D * __this, const RuntimeMethod* method)
{
	{
		// get { return type; }
		Type_t * L_0 = __this->get_type_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealitySpatialObserverConfiguration_get_RuntimePlatform_m1B1CA72FA60FD1777E71DB899A1234CF9957AB77_inline (MixedRealitySpatialObserverConfiguration_tF18BB40F09B6C4E7F49A4B1AB0B6A0E264362FF3 * __this, const RuntimeMethod* method)
{
	{
		// public SupportedPlatforms RuntimePlatform => runtimePlatform;
		int32_t L_0 = __this->get_runtimePlatform_3();
		return L_0;
	}
}
