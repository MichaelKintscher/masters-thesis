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
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer
struct IMixedRealityControllerVisualizer_t2AC892EDBE534380344F5556BBAD7F48D9648D85;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerMappingProfile
struct MixedRealityControllerMappingProfile_t12223BB5F530EC9E879FBFDD585E12FA087364F9;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationProfile
struct MixedRealityControllerVisualizationProfile_t29BFB03EF315B32F64DBE01F666C2F532C9A1CC3;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile
struct MixedRealityHandTrackingProfile_tDADC6D5367650C672DB618EED78274B7C1720AF0;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionRulesProfile
struct MixedRealityInputActionRulesProfile_tFEAA2110870F72D0711AA73999ABD3E35B8B1EC2;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionsProfile
struct MixedRealityInputActionsProfile_tC22296A00F0EFB4204D691FF9779FF791BF18B7A;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile
struct MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerProfile
struct MixedRealityPointerProfile_tF898FEB881E4A15F5948FF8F05E75B106776AB48;
// Microsoft.MixedReality.Toolkit.Input.MixedRealitySpeechCommandsProfile
struct MixedRealitySpeechCommandsProfile_t242A67789EFE65C5858239640DFD186B9AD525C2;
// Microsoft.MixedReality.Toolkit.Input.SimulatedArticulatedHand
struct SimulatedArticulatedHand_tF3E35F538E755A5B3F857B5F097D7902F8132B6B;
// Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand
struct SimulatedGestureHand_tE8FD4F9A907C2909BB38CDEFDA82507DF0220BF4;
// Microsoft.MixedReality.Toolkit.Input.SimulatedHand
struct SimulatedHand_tC79023B162FCFC9F05824CBBE1DCFBC2373217E7;
// Microsoft.MixedReality.Toolkit.Input.SimulatedHandData
struct SimulatedHandData_t27280EA369E2A116C61830482B52B31ABA3F39CA;
// Microsoft.MixedReality.Toolkit.Input.SimulatedHandUtils
struct SimulatedHandUtils_tAF574C50754200171DFD79F862A709D022FE3222;
// Microsoft.MixedReality.Toolkit.Input.StabilizedRay
struct StabilizedRay_t9203C8150E370866143981FA8B44506C826F307A;
// Microsoft.MixedReality.Toolkit.Utilities.SystemType
struct SystemType_t9CBB747474C12365CDB0953443942140BA3F6E3D;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// Microsoft.MixedReality.Toolkit.Input.KeyBinding/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tC1A31D4FB9553559F4B3444A282601230D2A2B43;
// Microsoft.MixedReality.Toolkit.Input.SimulatedHandData/HandJointDataGenerator
struct HandJointDataGenerator_tACFADDDDE2346DC5682A95B8E6B8C3299B06F37B;
// System.Action`2<System.Int32Enum,System.Int32>
struct Action_2_t3ADE87F9806D5B490F7CE913AF2DC6E4D29A80C0;
// System.Action`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding/KeyType,System.Int32>
struct Action_2_t143C93F5482D416C7FDF795DB5037E2DA6B062E6;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct Dictionary_2_tB2D3942B8FBDE371EDC0CC7AC3685CF1E4BBBA64;
// System.Collections.Generic.Dictionary`2<System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding/KeyType,System.Int32>,System.Int32>
struct Dictionary_2_t2B763BD651C6B7C218A86E7023287E56619A9B5B;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding/KeyType,System.Int32>>
struct Dictionary_2_t412157312728038EF6AC6D6BC6EF689B3B165DEC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct Dictionary_2_t2608D8F85D3104F212EC3BC05E54C1515108B68E;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370;
// System.Collections.Generic.IEqualityComparer`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding/KeyType,System.Int32>>
struct IEqualityComparer_1_t3E5BA91FA6D0D7FB0106624ED4362413DD38C00A;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t62010156673DE1460AB1D1CEBE5DCD48665E1A38;
// System.Collections.Generic.IEqualityComparer`1<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint>
struct IEqualityComparer_1_tFB10C9B4A61B51933A4B1135CA00C9B1C6C95F59;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding/KeyType,System.Int32>,System.Int32>
struct KeyCollection_t05D32802314CA0CD81314DC278B559E53CE19141;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding/KeyType,System.Int32>>
struct KeyCollection_t317CADC2732FBD24F9ED141CE4F10D511C7F1901;
// System.Collections.Generic.Dictionary`2/KeyCollection<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct KeyCollection_t4BD21705716C62323FD46D7FEC827C022C332ABB;
// System.Collections.Generic.List`1<System.Globalization.CultureInfo>
struct List_1_tB93032867275F6C802C3659FC027FF6FB1372359;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Tuple`2<System.Int32Enum,System.Int32>
struct Tuple_2_tBF1559BD3F5D13E2AA2F9BF3917393FBD4F1F22E;
// System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding/KeyType,System.Int32>
struct Tuple_2_t1C7D0D1C413A36A4FEB4C9441E39E7E0F615B1F8;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding/KeyType,System.Int32>,System.Int32>
struct ValueCollection_tA821F4609A57534066BC179467603049C483E070;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding/KeyType,System.Int32>>
struct ValueCollection_tBC5FF92002A4B464761D469CE5737DCC2526A835;
// System.Collections.Generic.Dictionary`2/ValueCollection<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct ValueCollection_t6079BE139241F466955A2B6F2C677A1B3E57A398;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// Microsoft.MixedReality.Toolkit.Input.BaseController
struct BaseController_tCABA601990B425FA3A315FAECE1332E0005DC316;
// Microsoft.MixedReality.Toolkit.Input.BaseHand
struct BaseHand_t33C08C0C3F8EDE4D4BA9ABFE981707C71208C1A6;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_t9B92D8A7CB0AE5AF973870EDF7DE2BC12E5FA4E5;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Collections.Generic.Dictionary`2/Entry<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>[]
struct EntryU5BU5D_t1D02B4E797EE164BD2EB5A22C8077E5F62F679DE;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding/KeyType,System.Int32>>[]
struct EntryU5BU5D_tFEE9432C861C132C09D6FBF31D50932B5A1B6B28;
// System.Collections.Generic.Dictionary`2/Entry<System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding/KeyType,System.Int32>,System.Int32>[]
struct EntryU5BU5D_t0C5377653163905017FA5CCA223F37D21D89516E;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Microsoft.MixedReality.Toolkit.Input.HandRay
struct HandRay_tD9B46FBC0154A56DFD6DA889BCA8A87BE57B9C37;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource
struct IMixedRealityInputSource_t5FD93249755F746278AEAC000A28B7765ACB7F9F;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t64ABD77097BAD8C4A1194C39BFFD4E6F6CBF55B1;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityGestureMapping[]
struct MixedRealityGestureMappingU5BU5D_t5083898BA53AAB77B3DDE57E6F4F90B87B64C480;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile
struct MixedRealityGesturesProfile_tA3455FE721279843B94D506C063398F644EEA005;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputDataProviderConfiguration[]
struct MixedRealityInputDataProviderConfigurationU5BU5D_t5EFCDCD54D339A334A7DB7569A706727DD36B629;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile
struct MixedRealityInputSystemProfile_t6086D1D813224695CFB52FA000EDC2A6B6125255;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping
struct MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[]
struct MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D;
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose[]
struct MixedRealityPoseU5BU5D_t94ED3D45C754C96FE1E9BBD9C193E0DE07B32019;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.Quaternion[]
struct QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;

IL2CPP_EXTERN_C RuntimeClass* Action_2_t143C93F5482D416C7FDF795DB5037E2DA6B062E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoreServices_tDB76F6146407FDEA9A4479E5553ED32DC19AADBD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t2608D8F85D3104F212EC3BC05E54C1515108B68E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t2B763BD651C6B7C218A86E7023287E56619A9B5B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t412157312728038EF6AC6D6BC6EF689B3B165DEC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInputSimulationService_t16D137E0A44488E9559599E05EC29C6E0C635B0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityDataProviderAccess_t374BBC423F74323FAAE54B45D01DD9D0AEDF1743_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputSystem_t64ABD77097BAD8C4A1194C39BFFD4E6F6CBF55B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyCodeU5BU5D_tB562CB75382DB3189A19A242436813151A742871_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyType_t309E3645240CFF657823B6434AD784E18BBA0195_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityPoseU5BU5D_t94ED3D45C754C96FE1E9BBD9C193E0DE07B32019_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MouseButtonU5BU5D_t86FED480B92CB78192C6309F19A1BBDB0C7B2630_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MouseButton_t484F80A7389EA52C4FA84647C117C61482EA75A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimulatedHandData_t27280EA369E2A116C61830482B52B31ABA3F39CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimulatedHandUtils_tAF574C50754200171DFD79F862A709D022FE3222_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimulatedHand_tC79023B162FCFC9F05824CBBE1DCFBC2373217E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_0_tC1A31D4FB9553559F4B3444A282601230D2A2B43_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t167F3977A01B4D7D4C0E127629E51C9A51990A05____6AF7EBB4A5EF5D7478981B4AA0BAD37788AAB1ED_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1168E92C164109D6220480DEDA987085B2A21155;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral18E27A22FCB12E9EB3D95EB9AD4D7623C1AEA302;
IL2CPP_EXTERN_C String_t* _stringLiteral18E7928E065AE670C66DAD6CCCA38069D00491EA;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral31E8E4ACB2EDC39B158FBA91185DE1333306F668;
IL2CPP_EXTERN_C String_t* _stringLiteral4208A902E747B92B5D64EE3AA0896299BD1D9729;
IL2CPP_EXTERN_C String_t* _stringLiteral7C44CFC5FE4DF6EF8FEA0E3D8457CC36A8AC2C8F;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral801EACC9B8E831EA7D1A22ACE229E2222275490E;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral9883BE541EEAFE5925B5C5E27FD12ADF5E431B5E;
IL2CPP_EXTERN_C String_t* _stringLiteralD1C4A80C90449117887C3EFE0E5C9259A8AB441C;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE17E01A6CDB454BE09B74C544A2901D6C9F990AF;
IL2CPP_EXTERN_C String_t* _stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2_Invoke_m09B90EAEEB1D33220740598452628C9221DFDDE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m7EFDA3782E695D1264DC6E3ABAF40CC141E3335F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mFA80AE1C547296745FC02D4E0680A419B39EFAE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mB197921944A9736477D409029EC22B8F4D1D216B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m68CBDA00749C9C3E905574F6A9F8A0D17BB0D04D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m98FA9A5E83858B1899CF3494493ACF76DE701543_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m9A850CF944EFC077C484C34175303760D287C13A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA979515324E2B133B8CFCD62DA10847BE090CD10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m1F8B2A38633AAAAEDFC64FC9113F2270BB32D5B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m38333A17CBE3638107B56338BB2FD1E69D517ADE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m98F68CFDCFFBDAF167FC9B2DB67476EEB0F13AA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mF87A3312B7715B9AE3211DAD83A237EDBA07843D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Take_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mE8BC7791AE1A1E1AFFDAA048E7CC47013E917908_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IMixedRealityDataProviderAccess_GetDataProvider_TisIInputSimulationService_t16D137E0A44488E9559599E05EC29C6E0C635B0F_m0734A255BD409E3616EBDEEFBBA87669ACF3AE35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_Create_TisKeyType_t309E3645240CFF657823B6434AD784E18BBA0195_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m36E71296DE060F86F936B732420267ACB8AA06FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3C_cctorU3Eb__0_m7CEEFA179C4DD450C22789D4F22B802D4D9E274F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* MouseButton_t484F80A7389EA52C4FA84647C117C61482EA75A0_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TrackedHandJoint_t4DB5CFA2EE94BCBB8866FF22332E0BFD48033137_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t KeyBinding_FromMouseButton_m7CB46FC8F1FE147C8C94310335DC5B4279813750_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t KeyBinding_ToString_mF29E1518CCD0A18DDA6F753E817F23408B7DF185_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t KeyBinding__cctor_mAF5ABF11E6BA4031E217C268B3F74A17F9F81EB2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityInputAction_get_None_mE8893070C64BA6EA2339B7D0C413DE755D7D4D6EMicrosoft_MixedReality_Toolkit_Services_InputSimulation_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityInputSimulationProfile__ctor_m9E20D65FADCF5D73A8506F5B26DA5A9AEF34D741_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityPose_get_ZeroIdentity_m7DFFCF17695B53E77ABCC4035C292C405996350EMicrosoft_MixedReality_Toolkit_Services_InputSimulation_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedArticulatedHand_UpdateInteractions_m24369B5156461F346FB4DBFF580893CEE0AE11BF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedArticulatedHand__ctor_mDCDC76DA192287B82E85E2CF1D1E8359F17378C6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedArticulatedHand_get_DefaultInteractions_m3D98763F885106F5557073C320B854DC7A5B5F0D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedGestureHand_EnsureProfileSettings_m645609FE30D6AFD16D4A81E3F4F020E07A27FC40_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedGestureHand_TryCancelHold_m4BE99AA5CCE4F8030665DAD32A500C86522487D0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedGestureHand_TryCancelManipulation_mC0E436D5162267BEB2B52F6D3C21311EB46B6326_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedGestureHand_TryCancelNavigation_m9419C0B8B8A3CCECAC3362057695D8432DA19544_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedGestureHand_TryCompleteHold_m50E0ACFD41E1F9CE7D1CDD210E0C9A2390FCC7DE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedGestureHand_TryCompleteManipulation_mAA71EE1BC69BF84C0417D608BC4EBDFD9BAC4A57_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedGestureHand_TryCompleteNavigation_m19847287F11D2B4B28B37F6DB55C8D9AEC709D7E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedGestureHand_TryCompleteSelect_m2A66192E4D37C99E5A2E3BB6546D2057FD0ED03B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedGestureHand_TryStartHold_m29E609DDD87D768B43AAF63CF0262D580CB4D76B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedGestureHand_TryStartManipulation_m35B2A09F0F43B2972E5E3AF30D015D88B9D55991_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedGestureHand_TryStartNavigation_mACB9C112AA889F96A59A3F2FB279AAF1C8CDA41E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedGestureHand_UpdateInteractions_mDDBC922F764FB9E9D91ADF021603CADA7E232357_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedGestureHand_UpdateManipulation_m37C149BAC4A5D117B6E4C1028F6F47E051E132F3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedGestureHand_UpdateNavigationRails_m3A79B583B3AA987AB1F15654F6D0E34273281E5B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedGestureHand_UpdateNavigation_mAA5B87F28579D8AFEAADB4133CC1BFB944D66AE6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedGestureHand__ctor_m08C3D6B45771D0D7C99FF5287BAFBC00F582EC50_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedGestureHand_get_DefaultInteractions_m6B0F9BA2E29668A76AFBEB3F291E3F5C5C26F21E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedGestureHand_get_NavigationDelta_m6A6065F8B89330B67E758E062CE189DBAC96B3DD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedHandData_Copy_mF08A4D1EA69B630603458CC5795594B680C886DD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedHandData__cctor_m978CB43F78AD75EF19A4CD03F27E32CC16404784_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedHandData__ctor_m3F9392BD7ED6DFB96FF3E8180216B224E8305E13_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedHandUtils_CalculateJointRotations_m5FED3BACCD9785FA1E43E71D94E86478105854D3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedHandUtils_GetPalmForwardVector_m40A70007E66B6F844178BD62CD716B56CB16147E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedHandUtils_GetPalmRightVector_m2EDCFDE81C5DFEE5695D826FAD0D5965062AB91B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedHandUtils_GetPalmUpVector_mE30E6E29FDCDC5164824BC7021BFCE7751D7E1EC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedHandUtils__cctor_m91399DFADACF93CA7D3D1F610603D32D1E976016_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedHand_TryGetJoint_m9666F17D4858B1290B50EF3F7A689DC142797B62_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedHand_UpdateState_m88BCCC707E62514F047B68A5B5023F975374401F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedHand__cctor_mA58E08BA72E40D17710100338B699BD8930D11BB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedHand__ctor_m31621E2759004ECF6C2B0CAAF93035C3C3E2A596_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass5_0_U3C_cctorU3Eb__0_m7CEEFA179C4DD450C22789D4F22B802D4D9E274F_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct MouseButtonU5BU5D_t86FED480B92CB78192C6309F19A1BBDB0C7B2630;
struct MixedRealityGestureMappingU5BU5D_t5083898BA53AAB77B3DDE57E6F4F90B87B64C480;
struct MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D;
struct MixedRealityPoseU5BU5D_t94ED3D45C754C96FE1E9BBD9C193E0DE07B32019;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct KeyCodeU5BU5D_tB562CB75382DB3189A19A242436813151A742871;
struct QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tDACF4DD129E4C6F65FDEB97AA489A16FF90B0CCD 
{
public:

public:
};


// System.Object


// Microsoft.MixedReality.Toolkit.Input.KeyBinding_<>c__DisplayClass5_0
struct  U3CU3Ec__DisplayClass5_0_tC1A31D4FB9553559F4B3444A282601230D2A2B43  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.String> Microsoft.MixedReality.Toolkit.Input.KeyBinding_<>c__DisplayClass5_0::names
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___names_0;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.KeyBinding_<>c__DisplayClass5_0::index
	int32_t ___index_1;

public:
	inline static int32_t get_offset_of_names_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_tC1A31D4FB9553559F4B3444A282601230D2A2B43, ___names_0)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_names_0() const { return ___names_0; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_names_0() { return &___names_0; }
	inline void set_names_0(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___names_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___names_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_tC1A31D4FB9553559F4B3444A282601230D2A2B43, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.KeyInputSystem
struct  KeyInputSystem_t13EEE28CD219D8C7A75D7821838881F1C3A9ED99  : public RuntimeObject
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.SimulatedHandData
struct  SimulatedHandData_t27280EA369E2A116C61830482B52B31ABA3F39CA  : public RuntimeObject
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedHandData::isTracked
	bool ___isTracked_1;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose[] Microsoft.MixedReality.Toolkit.Input.SimulatedHandData::joints
	MixedRealityPoseU5BU5D_t94ED3D45C754C96FE1E9BBD9C193E0DE07B32019* ___joints_2;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedHandData::isPinching
	bool ___isPinching_3;

public:
	inline static int32_t get_offset_of_isTracked_1() { return static_cast<int32_t>(offsetof(SimulatedHandData_t27280EA369E2A116C61830482B52B31ABA3F39CA, ___isTracked_1)); }
	inline bool get_isTracked_1() const { return ___isTracked_1; }
	inline bool* get_address_of_isTracked_1() { return &___isTracked_1; }
	inline void set_isTracked_1(bool value)
	{
		___isTracked_1 = value;
	}

	inline static int32_t get_offset_of_joints_2() { return static_cast<int32_t>(offsetof(SimulatedHandData_t27280EA369E2A116C61830482B52B31ABA3F39CA, ___joints_2)); }
	inline MixedRealityPoseU5BU5D_t94ED3D45C754C96FE1E9BBD9C193E0DE07B32019* get_joints_2() const { return ___joints_2; }
	inline MixedRealityPoseU5BU5D_t94ED3D45C754C96FE1E9BBD9C193E0DE07B32019** get_address_of_joints_2() { return &___joints_2; }
	inline void set_joints_2(MixedRealityPoseU5BU5D_t94ED3D45C754C96FE1E9BBD9C193E0DE07B32019* value)
	{
		___joints_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___joints_2), (void*)value);
	}

	inline static int32_t get_offset_of_isPinching_3() { return static_cast<int32_t>(offsetof(SimulatedHandData_t27280EA369E2A116C61830482B52B31ABA3F39CA, ___isPinching_3)); }
	inline bool get_isPinching_3() const { return ___isPinching_3; }
	inline bool* get_address_of_isPinching_3() { return &___isPinching_3; }
	inline void set_isPinching_3(bool value)
	{
		___isPinching_3 = value;
	}
};

struct SimulatedHandData_t27280EA369E2A116C61830482B52B31ABA3F39CA_StaticFields
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.SimulatedHandData::jointCount
	int32_t ___jointCount_0;

public:
	inline static int32_t get_offset_of_jointCount_0() { return static_cast<int32_t>(offsetof(SimulatedHandData_t27280EA369E2A116C61830482B52B31ABA3F39CA_StaticFields, ___jointCount_0)); }
	inline int32_t get_jointCount_0() const { return ___jointCount_0; }
	inline int32_t* get_address_of_jointCount_0() { return &___jointCount_0; }
	inline void set_jointCount_0(int32_t value)
	{
		___jointCount_0 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.SimulatedHandUtils
struct  SimulatedHandUtils_tAF574C50754200171DFD79F862A709D022FE3222  : public RuntimeObject
{
public:

public:
};

struct SimulatedHandUtils_tAF574C50754200171DFD79F862A709D022FE3222_StaticFields
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.SimulatedHandUtils::jointCount
	int32_t ___jointCount_0;

public:
	inline static int32_t get_offset_of_jointCount_0() { return static_cast<int32_t>(offsetof(SimulatedHandUtils_tAF574C50754200171DFD79F862A709D022FE3222_StaticFields, ___jointCount_0)); }
	inline int32_t get_jointCount_0() const { return ___jointCount_0; }
	inline int32_t* get_address_of_jointCount_0() { return &___jointCount_0; }
	inline void set_jointCount_0(int32_t value)
	{
		___jointCount_0 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct  Dictionary_2_t2608D8F85D3104F212EC3BC05E54C1515108B68E  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t1D02B4E797EE164BD2EB5A22C8077E5F62F679DE* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t4BD21705716C62323FD46D7FEC827C022C332ABB * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t6079BE139241F466955A2B6F2C677A1B3E57A398 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t2608D8F85D3104F212EC3BC05E54C1515108B68E, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t2608D8F85D3104F212EC3BC05E54C1515108B68E, ___entries_1)); }
	inline EntryU5BU5D_t1D02B4E797EE164BD2EB5A22C8077E5F62F679DE* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t1D02B4E797EE164BD2EB5A22C8077E5F62F679DE** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t1D02B4E797EE164BD2EB5A22C8077E5F62F679DE* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t2608D8F85D3104F212EC3BC05E54C1515108B68E, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t2608D8F85D3104F212EC3BC05E54C1515108B68E, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2608D8F85D3104F212EC3BC05E54C1515108B68E, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2608D8F85D3104F212EC3BC05E54C1515108B68E, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2608D8F85D3104F212EC3BC05E54C1515108B68E, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2608D8F85D3104F212EC3BC05E54C1515108B68E, ___keys_7)); }
	inline KeyCollection_t4BD21705716C62323FD46D7FEC827C022C332ABB * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t4BD21705716C62323FD46D7FEC827C022C332ABB ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t4BD21705716C62323FD46D7FEC827C022C332ABB * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2608D8F85D3104F212EC3BC05E54C1515108B68E, ___values_8)); }
	inline ValueCollection_t6079BE139241F466955A2B6F2C677A1B3E57A398 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t6079BE139241F466955A2B6F2C677A1B3E57A398 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t6079BE139241F466955A2B6F2C677A1B3E57A398 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2608D8F85D3104F212EC3BC05E54C1515108B68E, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Int32,System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding_KeyType,System.Int32>>
struct  Dictionary_2_t412157312728038EF6AC6D6BC6EF689B3B165DEC  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tFEE9432C861C132C09D6FBF31D50932B5A1B6B28* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t317CADC2732FBD24F9ED141CE4F10D511C7F1901 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tBC5FF92002A4B464761D469CE5737DCC2526A835 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t412157312728038EF6AC6D6BC6EF689B3B165DEC, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t412157312728038EF6AC6D6BC6EF689B3B165DEC, ___entries_1)); }
	inline EntryU5BU5D_tFEE9432C861C132C09D6FBF31D50932B5A1B6B28* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tFEE9432C861C132C09D6FBF31D50932B5A1B6B28** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tFEE9432C861C132C09D6FBF31D50932B5A1B6B28* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t412157312728038EF6AC6D6BC6EF689B3B165DEC, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t412157312728038EF6AC6D6BC6EF689B3B165DEC, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t412157312728038EF6AC6D6BC6EF689B3B165DEC, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t412157312728038EF6AC6D6BC6EF689B3B165DEC, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t412157312728038EF6AC6D6BC6EF689B3B165DEC, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t412157312728038EF6AC6D6BC6EF689B3B165DEC, ___keys_7)); }
	inline KeyCollection_t317CADC2732FBD24F9ED141CE4F10D511C7F1901 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t317CADC2732FBD24F9ED141CE4F10D511C7F1901 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t317CADC2732FBD24F9ED141CE4F10D511C7F1901 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t412157312728038EF6AC6D6BC6EF689B3B165DEC, ___values_8)); }
	inline ValueCollection_tBC5FF92002A4B464761D469CE5737DCC2526A835 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tBC5FF92002A4B464761D469CE5737DCC2526A835 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tBC5FF92002A4B464761D469CE5737DCC2526A835 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t412157312728038EF6AC6D6BC6EF689B3B165DEC, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding_KeyType,System.Int32>,System.Int32>
struct  Dictionary_2_t2B763BD651C6B7C218A86E7023287E56619A9B5B  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t0C5377653163905017FA5CCA223F37D21D89516E* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t05D32802314CA0CD81314DC278B559E53CE19141 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tA821F4609A57534066BC179467603049C483E070 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t2B763BD651C6B7C218A86E7023287E56619A9B5B, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t2B763BD651C6B7C218A86E7023287E56619A9B5B, ___entries_1)); }
	inline EntryU5BU5D_t0C5377653163905017FA5CCA223F37D21D89516E* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t0C5377653163905017FA5CCA223F37D21D89516E** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t0C5377653163905017FA5CCA223F37D21D89516E* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t2B763BD651C6B7C218A86E7023287E56619A9B5B, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t2B763BD651C6B7C218A86E7023287E56619A9B5B, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2B763BD651C6B7C218A86E7023287E56619A9B5B, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2B763BD651C6B7C218A86E7023287E56619A9B5B, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2B763BD651C6B7C218A86E7023287E56619A9B5B, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2B763BD651C6B7C218A86E7023287E56619A9B5B, ___keys_7)); }
	inline KeyCollection_t05D32802314CA0CD81314DC278B559E53CE19141 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t05D32802314CA0CD81314DC278B559E53CE19141 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t05D32802314CA0CD81314DC278B559E53CE19141 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2B763BD651C6B7C218A86E7023287E56619A9B5B, ___values_8)); }
	inline ValueCollection_tA821F4609A57534066BC179467603049C483E070 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tA821F4609A57534066BC179467603049C483E070 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tA821F4609A57534066BC179467603049C483E070 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2B763BD651C6B7C218A86E7023287E56619A9B5B, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct  List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


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

// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D20
struct  __StaticArrayInitTypeSizeU3D20_tA69DE1555438DE74254101BEC8AFBADFB1856E10 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D20_tA69DE1555438DE74254101BEC8AFBADFB1856E10__padding[20];
	};

public:
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


// System.Nullable`1<System.Int32>
struct  Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
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


// UnityEngine.Quaternion
struct  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Vector2
struct  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
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


// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t167F3977A01B4D7D4C0E127629E51C9A51990A05  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t167F3977A01B4D7D4C0E127629E51C9A51990A05_StaticFields
{
public:
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D20 <PrivateImplementationDetails>::6AF7EBB4A5EF5D7478981B4AA0BAD37788AAB1ED
	__StaticArrayInitTypeSizeU3D20_tA69DE1555438DE74254101BEC8AFBADFB1856E10  ___6AF7EBB4A5EF5D7478981B4AA0BAD37788AAB1ED_0;

public:
	inline static int32_t get_offset_of_U36AF7EBB4A5EF5D7478981B4AA0BAD37788AAB1ED_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t167F3977A01B4D7D4C0E127629E51C9A51990A05_StaticFields, ___6AF7EBB4A5EF5D7478981B4AA0BAD37788AAB1ED_0)); }
	inline __StaticArrayInitTypeSizeU3D20_tA69DE1555438DE74254101BEC8AFBADFB1856E10  get_U36AF7EBB4A5EF5D7478981B4AA0BAD37788AAB1ED_0() const { return ___6AF7EBB4A5EF5D7478981B4AA0BAD37788AAB1ED_0; }
	inline __StaticArrayInitTypeSizeU3D20_tA69DE1555438DE74254101BEC8AFBADFB1856E10 * get_address_of_U36AF7EBB4A5EF5D7478981B4AA0BAD37788AAB1ED_0() { return &___6AF7EBB4A5EF5D7478981B4AA0BAD37788AAB1ED_0; }
	inline void set_U36AF7EBB4A5EF5D7478981B4AA0BAD37788AAB1ED_0(__StaticArrayInitTypeSizeU3D20_tA69DE1555438DE74254101BEC8AFBADFB1856E10  value)
	{
		___6AF7EBB4A5EF5D7478981B4AA0BAD37788AAB1ED_0 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.DeviceInputType
struct  DeviceInputType_t4EBC26924DA0A657A987DFEF4BEE81C78E357761 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.DeviceInputType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeviceInputType_t4EBC26924DA0A657A987DFEF4BEE81C78E357761, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.GestureInputType
struct  GestureInputType_t9D7CCE3AED3D0F3E46E715460B5EF1C382EFD377 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.GestureInputType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GestureInputType_t9D7CCE3AED3D0F3E46E715460B5EF1C382EFD377, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.HandSimulationMode
struct  HandSimulationMode_t7D655D13D78B4CCB0056E2EA102EC35DBBEDFFC9 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.HandSimulationMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HandSimulationMode_t7D655D13D78B4CCB0056E2EA102EC35DBBEDFFC9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputSimulationControlMode
struct  InputSimulationControlMode_t66BF123E801353D617C799ED4C6A749004C27362 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputSimulationControlMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputSimulationControlMode_t66BF123E801353D617C799ED4C6A749004C27362, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.KeyBinding_KeyType
struct  KeyType_t309E3645240CFF657823B6434AD784E18BBA0195 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.KeyBinding_KeyType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyType_t309E3645240CFF657823B6434AD784E18BBA0195, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.KeyBinding_MouseButton
struct  MouseButton_t484F80A7389EA52C4FA84647C117C61482EA75A0 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.KeyBinding_MouseButton::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MouseButton_t484F80A7389EA52C4FA84647C117C61482EA75A0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.TrackingState
struct  TrackingState_tC9989606F483C261D42D833CB3AE84F637E40719 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_tC9989606F483C261D42D833CB3AE84F637E40719, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose_GestureId
struct  GestureId_tE3077AE191F6C98F1ADE5B1364F10B36A21CC06D 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose_GestureId::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GestureId_tE3077AE191F6C98F1ADE5B1364F10B36A21CC06D, ___value___2)); }
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


// Microsoft.MixedReality.Toolkit.Utilities.AxisType
struct  AxisType_t3756192E948504BA729E9DD4E93FF7592C248E5B 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AxisType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisType_t3756192E948504BA729E9DD4E93FF7592C248E5B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Handedness
struct  Handedness_t2A8F6DF331DF5C083E9C1E04C62AF9075B3A878C 
{
public:
	// System.Byte Microsoft.MixedReality.Toolkit.Utilities.Handedness::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Handedness_t2A8F6DF331DF5C083E9C1E04C62AF9075B3A878C, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose
struct  MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_1;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_2;

public:
	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5, ___position_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_1() const { return ___position_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_1 = value;
	}

	inline static int32_t get_offset_of_rotation_2() { return static_cast<int32_t>(offsetof(MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5, ___rotation_2)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_2() const { return ___rotation_2; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_2() { return &___rotation_2; }
	inline void set_rotation_2(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_2 = value;
	}
};

struct MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::<ZeroIdentity>k__BackingField
	MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  ___U3CZeroIdentityU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CZeroIdentityU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5_StaticFields, ___U3CZeroIdentityU3Ek__BackingField_0)); }
	inline MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  get_U3CZeroIdentityU3Ek__BackingField_0() const { return ___U3CZeroIdentityU3Ek__BackingField_0; }
	inline MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5 * get_address_of_U3CZeroIdentityU3Ek__BackingField_0() { return &___U3CZeroIdentityU3Ek__BackingField_0; }
	inline void set_U3CZeroIdentityU3Ek__BackingField_0(MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  value)
	{
		___U3CZeroIdentityU3Ek__BackingField_0 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint
struct  TrackedHandJoint_t4DB5CFA2EE94BCBB8866FF22332E0BFD48033137 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackedHandJoint_t4DB5CFA2EE94BCBB8866FF22332E0BFD48033137, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsGestureSettings
struct  WindowsGestureSettings_t9CDD044076AA0F3AB894E3058D6C840170407044 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Windows.Input.WindowsGestureSettings::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WindowsGestureSettings_t9CDD044076AA0F3AB894E3058D6C840170407044, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Int32Enum
struct  Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
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


// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
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


// UnityEngine.KeyCode
struct  KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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

// UnityEngine.Ray
struct  Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Origin_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Direction_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Direction_1 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.BaseController
struct  BaseController_tCABA601990B425FA3A315FAECE1332E0005DC316  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::<DefaultInteractions>k__BackingField
	MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* ___U3CDefaultInteractionsU3Ek__BackingField_0;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::<DefaultLeftHandedInteractions>k__BackingField
	MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* ___U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::<DefaultRightHandedInteractions>k__BackingField
	MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* ___U3CDefaultRightHandedInteractionsU3Ek__BackingField_2;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<Enabled>k__BackingField
	bool ___U3CEnabledU3Ek__BackingField_3;
	// Microsoft.MixedReality.Toolkit.TrackingState Microsoft.MixedReality.Toolkit.Input.BaseController::<TrackingState>k__BackingField
	int32_t ___U3CTrackingStateU3Ek__BackingField_4;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.BaseController::<ControllerHandedness>k__BackingField
	uint8_t ___U3CControllerHandednessU3Ek__BackingField_5;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.BaseController::<InputSource>k__BackingField
	RuntimeObject* ___U3CInputSourceU3Ek__BackingField_6;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer Microsoft.MixedReality.Toolkit.Input.BaseController::<Visualizer>k__BackingField
	RuntimeObject* ___U3CVisualizerU3Ek__BackingField_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<IsPositionAvailable>k__BackingField
	bool ___U3CIsPositionAvailableU3Ek__BackingField_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<IsPositionApproximate>k__BackingField
	bool ___U3CIsPositionApproximateU3Ek__BackingField_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<IsRotationAvailable>k__BackingField
	bool ___U3CIsRotationAvailableU3Ek__BackingField_10;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::<Interactions>k__BackingField
	MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* ___U3CInteractionsU3Ek__BackingField_11;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.BaseController::<AngularVelocity>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CAngularVelocityU3Ek__BackingField_12;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.BaseController::<Velocity>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CVelocityU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_U3CDefaultInteractionsU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BaseController_tCABA601990B425FA3A315FAECE1332E0005DC316, ___U3CDefaultInteractionsU3Ek__BackingField_0)); }
	inline MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* get_U3CDefaultInteractionsU3Ek__BackingField_0() const { return ___U3CDefaultInteractionsU3Ek__BackingField_0; }
	inline MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D** get_address_of_U3CDefaultInteractionsU3Ek__BackingField_0() { return &___U3CDefaultInteractionsU3Ek__BackingField_0; }
	inline void set_U3CDefaultInteractionsU3Ek__BackingField_0(MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* value)
	{
		___U3CDefaultInteractionsU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDefaultInteractionsU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseController_tCABA601990B425FA3A315FAECE1332E0005DC316, ___U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1)); }
	inline MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* get_U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1() const { return ___U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1; }
	inline MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D** get_address_of_U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1() { return &___U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1; }
	inline void set_U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1(MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* value)
	{
		___U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDefaultRightHandedInteractionsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseController_tCABA601990B425FA3A315FAECE1332E0005DC316, ___U3CDefaultRightHandedInteractionsU3Ek__BackingField_2)); }
	inline MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* get_U3CDefaultRightHandedInteractionsU3Ek__BackingField_2() const { return ___U3CDefaultRightHandedInteractionsU3Ek__BackingField_2; }
	inline MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D** get_address_of_U3CDefaultRightHandedInteractionsU3Ek__BackingField_2() { return &___U3CDefaultRightHandedInteractionsU3Ek__BackingField_2; }
	inline void set_U3CDefaultRightHandedInteractionsU3Ek__BackingField_2(MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* value)
	{
		___U3CDefaultRightHandedInteractionsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDefaultRightHandedInteractionsU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEnabledU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseController_tCABA601990B425FA3A315FAECE1332E0005DC316, ___U3CEnabledU3Ek__BackingField_3)); }
	inline bool get_U3CEnabledU3Ek__BackingField_3() const { return ___U3CEnabledU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CEnabledU3Ek__BackingField_3() { return &___U3CEnabledU3Ek__BackingField_3; }
	inline void set_U3CEnabledU3Ek__BackingField_3(bool value)
	{
		___U3CEnabledU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CTrackingStateU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BaseController_tCABA601990B425FA3A315FAECE1332E0005DC316, ___U3CTrackingStateU3Ek__BackingField_4)); }
	inline int32_t get_U3CTrackingStateU3Ek__BackingField_4() const { return ___U3CTrackingStateU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CTrackingStateU3Ek__BackingField_4() { return &___U3CTrackingStateU3Ek__BackingField_4; }
	inline void set_U3CTrackingStateU3Ek__BackingField_4(int32_t value)
	{
		___U3CTrackingStateU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CControllerHandednessU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BaseController_tCABA601990B425FA3A315FAECE1332E0005DC316, ___U3CControllerHandednessU3Ek__BackingField_5)); }
	inline uint8_t get_U3CControllerHandednessU3Ek__BackingField_5() const { return ___U3CControllerHandednessU3Ek__BackingField_5; }
	inline uint8_t* get_address_of_U3CControllerHandednessU3Ek__BackingField_5() { return &___U3CControllerHandednessU3Ek__BackingField_5; }
	inline void set_U3CControllerHandednessU3Ek__BackingField_5(uint8_t value)
	{
		___U3CControllerHandednessU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CInputSourceU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BaseController_tCABA601990B425FA3A315FAECE1332E0005DC316, ___U3CInputSourceU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CInputSourceU3Ek__BackingField_6() const { return ___U3CInputSourceU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CInputSourceU3Ek__BackingField_6() { return &___U3CInputSourceU3Ek__BackingField_6; }
	inline void set_U3CInputSourceU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CInputSourceU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInputSourceU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CVisualizerU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(BaseController_tCABA601990B425FA3A315FAECE1332E0005DC316, ___U3CVisualizerU3Ek__BackingField_7)); }
	inline RuntimeObject* get_U3CVisualizerU3Ek__BackingField_7() const { return ___U3CVisualizerU3Ek__BackingField_7; }
	inline RuntimeObject** get_address_of_U3CVisualizerU3Ek__BackingField_7() { return &___U3CVisualizerU3Ek__BackingField_7; }
	inline void set_U3CVisualizerU3Ek__BackingField_7(RuntimeObject* value)
	{
		___U3CVisualizerU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CVisualizerU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsPositionAvailableU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(BaseController_tCABA601990B425FA3A315FAECE1332E0005DC316, ___U3CIsPositionAvailableU3Ek__BackingField_8)); }
	inline bool get_U3CIsPositionAvailableU3Ek__BackingField_8() const { return ___U3CIsPositionAvailableU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CIsPositionAvailableU3Ek__BackingField_8() { return &___U3CIsPositionAvailableU3Ek__BackingField_8; }
	inline void set_U3CIsPositionAvailableU3Ek__BackingField_8(bool value)
	{
		___U3CIsPositionAvailableU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CIsPositionApproximateU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(BaseController_tCABA601990B425FA3A315FAECE1332E0005DC316, ___U3CIsPositionApproximateU3Ek__BackingField_9)); }
	inline bool get_U3CIsPositionApproximateU3Ek__BackingField_9() const { return ___U3CIsPositionApproximateU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CIsPositionApproximateU3Ek__BackingField_9() { return &___U3CIsPositionApproximateU3Ek__BackingField_9; }
	inline void set_U3CIsPositionApproximateU3Ek__BackingField_9(bool value)
	{
		___U3CIsPositionApproximateU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CIsRotationAvailableU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(BaseController_tCABA601990B425FA3A315FAECE1332E0005DC316, ___U3CIsRotationAvailableU3Ek__BackingField_10)); }
	inline bool get_U3CIsRotationAvailableU3Ek__BackingField_10() const { return ___U3CIsRotationAvailableU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CIsRotationAvailableU3Ek__BackingField_10() { return &___U3CIsRotationAvailableU3Ek__BackingField_10; }
	inline void set_U3CIsRotationAvailableU3Ek__BackingField_10(bool value)
	{
		___U3CIsRotationAvailableU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CInteractionsU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(BaseController_tCABA601990B425FA3A315FAECE1332E0005DC316, ___U3CInteractionsU3Ek__BackingField_11)); }
	inline MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* get_U3CInteractionsU3Ek__BackingField_11() const { return ___U3CInteractionsU3Ek__BackingField_11; }
	inline MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D** get_address_of_U3CInteractionsU3Ek__BackingField_11() { return &___U3CInteractionsU3Ek__BackingField_11; }
	inline void set_U3CInteractionsU3Ek__BackingField_11(MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* value)
	{
		___U3CInteractionsU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInteractionsU3Ek__BackingField_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAngularVelocityU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(BaseController_tCABA601990B425FA3A315FAECE1332E0005DC316, ___U3CAngularVelocityU3Ek__BackingField_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CAngularVelocityU3Ek__BackingField_12() const { return ___U3CAngularVelocityU3Ek__BackingField_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CAngularVelocityU3Ek__BackingField_12() { return &___U3CAngularVelocityU3Ek__BackingField_12; }
	inline void set_U3CAngularVelocityU3Ek__BackingField_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CAngularVelocityU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CVelocityU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(BaseController_tCABA601990B425FA3A315FAECE1332E0005DC316, ___U3CVelocityU3Ek__BackingField_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CVelocityU3Ek__BackingField_13() const { return ___U3CVelocityU3Ek__BackingField_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CVelocityU3Ek__BackingField_13() { return &___U3CVelocityU3Ek__BackingField_13; }
	inline void set_U3CVelocityU3Ek__BackingField_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CVelocityU3Ek__BackingField_13 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.HandRay
struct  HandRay_tD9B46FBC0154A56DFD6DA889BCA8A87BE57B9C37  : public RuntimeObject
{
public:
	// UnityEngine.Ray Microsoft.MixedReality.Toolkit.Input.HandRay::ray
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___ray_0;
	// System.Single Microsoft.MixedReality.Toolkit.Input.HandRay::CursorBeamBackwardTolerance
	float ___CursorBeamBackwardTolerance_10;
	// System.Single Microsoft.MixedReality.Toolkit.Input.HandRay::CursorBeamUpTolerance
	float ___CursorBeamUpTolerance_11;
	// Microsoft.MixedReality.Toolkit.Input.StabilizedRay Microsoft.MixedReality.Toolkit.Input.HandRay::stabilizedRay
	StabilizedRay_t9203C8150E370866143981FA8B44506C826F307A * ___stabilizedRay_13;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.HandRay::palmNormal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___palmNormal_14;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.HandRay::headForward
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___headForward_15;

public:
	inline static int32_t get_offset_of_ray_0() { return static_cast<int32_t>(offsetof(HandRay_tD9B46FBC0154A56DFD6DA889BCA8A87BE57B9C37, ___ray_0)); }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  get_ray_0() const { return ___ray_0; }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * get_address_of_ray_0() { return &___ray_0; }
	inline void set_ray_0(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  value)
	{
		___ray_0 = value;
	}

	inline static int32_t get_offset_of_CursorBeamBackwardTolerance_10() { return static_cast<int32_t>(offsetof(HandRay_tD9B46FBC0154A56DFD6DA889BCA8A87BE57B9C37, ___CursorBeamBackwardTolerance_10)); }
	inline float get_CursorBeamBackwardTolerance_10() const { return ___CursorBeamBackwardTolerance_10; }
	inline float* get_address_of_CursorBeamBackwardTolerance_10() { return &___CursorBeamBackwardTolerance_10; }
	inline void set_CursorBeamBackwardTolerance_10(float value)
	{
		___CursorBeamBackwardTolerance_10 = value;
	}

	inline static int32_t get_offset_of_CursorBeamUpTolerance_11() { return static_cast<int32_t>(offsetof(HandRay_tD9B46FBC0154A56DFD6DA889BCA8A87BE57B9C37, ___CursorBeamUpTolerance_11)); }
	inline float get_CursorBeamUpTolerance_11() const { return ___CursorBeamUpTolerance_11; }
	inline float* get_address_of_CursorBeamUpTolerance_11() { return &___CursorBeamUpTolerance_11; }
	inline void set_CursorBeamUpTolerance_11(float value)
	{
		___CursorBeamUpTolerance_11 = value;
	}

	inline static int32_t get_offset_of_stabilizedRay_13() { return static_cast<int32_t>(offsetof(HandRay_tD9B46FBC0154A56DFD6DA889BCA8A87BE57B9C37, ___stabilizedRay_13)); }
	inline StabilizedRay_t9203C8150E370866143981FA8B44506C826F307A * get_stabilizedRay_13() const { return ___stabilizedRay_13; }
	inline StabilizedRay_t9203C8150E370866143981FA8B44506C826F307A ** get_address_of_stabilizedRay_13() { return &___stabilizedRay_13; }
	inline void set_stabilizedRay_13(StabilizedRay_t9203C8150E370866143981FA8B44506C826F307A * value)
	{
		___stabilizedRay_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stabilizedRay_13), (void*)value);
	}

	inline static int32_t get_offset_of_palmNormal_14() { return static_cast<int32_t>(offsetof(HandRay_tD9B46FBC0154A56DFD6DA889BCA8A87BE57B9C37, ___palmNormal_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_palmNormal_14() const { return ___palmNormal_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_palmNormal_14() { return &___palmNormal_14; }
	inline void set_palmNormal_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___palmNormal_14 = value;
	}

	inline static int32_t get_offset_of_headForward_15() { return static_cast<int32_t>(offsetof(HandRay_tD9B46FBC0154A56DFD6DA889BCA8A87BE57B9C37, ___headForward_15)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_headForward_15() const { return ___headForward_15; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_headForward_15() { return &___headForward_15; }
	inline void set_headForward_15(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___headForward_15 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.KeyBinding
struct  KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B 
{
public:
	// Microsoft.MixedReality.Toolkit.Input.KeyBinding_KeyType Microsoft.MixedReality.Toolkit.Input.KeyBinding::bindingType
	int32_t ___bindingType_3;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.KeyBinding::code
	int32_t ___code_4;

public:
	inline static int32_t get_offset_of_bindingType_3() { return static_cast<int32_t>(offsetof(KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B, ___bindingType_3)); }
	inline int32_t get_bindingType_3() const { return ___bindingType_3; }
	inline int32_t* get_address_of_bindingType_3() { return &___bindingType_3; }
	inline void set_bindingType_3(int32_t value)
	{
		___bindingType_3 = value;
	}

	inline static int32_t get_offset_of_code_4() { return static_cast<int32_t>(offsetof(KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B, ___code_4)); }
	inline int32_t get_code_4() const { return ___code_4; }
	inline int32_t* get_address_of_code_4() { return &___code_4; }
	inline void set_code_4(int32_t value)
	{
		___code_4 = value;
	}
};

struct KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B_StaticFields
{
public:
	// System.String[] Microsoft.MixedReality.Toolkit.Input.KeyBinding::AllCodeNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___AllCodeNames_0;
	// System.Collections.Generic.Dictionary`2<System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding_KeyType,System.Int32>,System.Int32> Microsoft.MixedReality.Toolkit.Input.KeyBinding::KeyBindingToEnumMap
	Dictionary_2_t2B763BD651C6B7C218A86E7023287E56619A9B5B * ___KeyBindingToEnumMap_1;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding_KeyType,System.Int32>> Microsoft.MixedReality.Toolkit.Input.KeyBinding::EnumToKeyBindingMap
	Dictionary_2_t412157312728038EF6AC6D6BC6EF689B3B165DEC * ___EnumToKeyBindingMap_2;

public:
	inline static int32_t get_offset_of_AllCodeNames_0() { return static_cast<int32_t>(offsetof(KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B_StaticFields, ___AllCodeNames_0)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_AllCodeNames_0() const { return ___AllCodeNames_0; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_AllCodeNames_0() { return &___AllCodeNames_0; }
	inline void set_AllCodeNames_0(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___AllCodeNames_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AllCodeNames_0), (void*)value);
	}

	inline static int32_t get_offset_of_KeyBindingToEnumMap_1() { return static_cast<int32_t>(offsetof(KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B_StaticFields, ___KeyBindingToEnumMap_1)); }
	inline Dictionary_2_t2B763BD651C6B7C218A86E7023287E56619A9B5B * get_KeyBindingToEnumMap_1() const { return ___KeyBindingToEnumMap_1; }
	inline Dictionary_2_t2B763BD651C6B7C218A86E7023287E56619A9B5B ** get_address_of_KeyBindingToEnumMap_1() { return &___KeyBindingToEnumMap_1; }
	inline void set_KeyBindingToEnumMap_1(Dictionary_2_t2B763BD651C6B7C218A86E7023287E56619A9B5B * value)
	{
		___KeyBindingToEnumMap_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___KeyBindingToEnumMap_1), (void*)value);
	}

	inline static int32_t get_offset_of_EnumToKeyBindingMap_2() { return static_cast<int32_t>(offsetof(KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B_StaticFields, ___EnumToKeyBindingMap_2)); }
	inline Dictionary_2_t412157312728038EF6AC6D6BC6EF689B3B165DEC * get_EnumToKeyBindingMap_2() const { return ___EnumToKeyBindingMap_2; }
	inline Dictionary_2_t412157312728038EF6AC6D6BC6EF689B3B165DEC ** get_address_of_EnumToKeyBindingMap_2() { return &___EnumToKeyBindingMap_2; }
	inline void set_EnumToKeyBindingMap_2(Dictionary_2_t412157312728038EF6AC6D6BC6EF689B3B165DEC * value)
	{
		___EnumToKeyBindingMap_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EnumToKeyBindingMap_2), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct  MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35 
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::id
	uint32_t ___id_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::description
	String_t* ___description_2;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::axisConstraint
	int32_t ___axisConstraint_3;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35, ___id_1)); }
	inline uint32_t get_id_1() const { return ___id_1; }
	inline uint32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(uint32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_description_2() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35, ___description_2)); }
	inline String_t* get_description_2() const { return ___description_2; }
	inline String_t** get_address_of_description_2() { return &___description_2; }
	inline void set_description_2(String_t* value)
	{
		___description_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_2), (void*)value);
	}

	inline static int32_t get_offset_of_axisConstraint_3() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35, ___axisConstraint_3)); }
	inline int32_t get_axisConstraint_3() const { return ___axisConstraint_3; }
	inline int32_t* get_address_of_axisConstraint_3() { return &___axisConstraint_3; }
	inline void set_axisConstraint_3(int32_t value)
	{
		___axisConstraint_3 = value;
	}
};

struct MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::<None>k__BackingField
	MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  ___U3CNoneU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNoneU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35_StaticFields, ___U3CNoneU3Ek__BackingField_0)); }
	inline MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  get_U3CNoneU3Ek__BackingField_0() const { return ___U3CNoneU3Ek__BackingField_0; }
	inline MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35 * get_address_of_U3CNoneU3Ek__BackingField_0() { return &___U3CNoneU3Ek__BackingField_0; }
	inline void set_U3CNoneU3Ek__BackingField_0(MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  value)
	{
		___U3CNoneU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CNoneU3Ek__BackingField_0))->___description_2), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35_marshaled_pinvoke
{
	uint32_t ___id_1;
	char* ___description_2;
	int32_t ___axisConstraint_3;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35_marshaled_com
{
	uint32_t ___id_1;
	Il2CppChar* ___description_2;
	int32_t ___axisConstraint_3;
};

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding_KeyType,System.Int32>
struct  Tuple_2_t1C7D0D1C413A36A4FEB4C9441E39E7E0F615B1F8  : public RuntimeObject
{
public:
	// T1 System.Tuple`2::m_Item1
	int32_t ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	int32_t ___m_Item2_1;

public:
	inline static int32_t get_offset_of_m_Item1_0() { return static_cast<int32_t>(offsetof(Tuple_2_t1C7D0D1C413A36A4FEB4C9441E39E7E0F615B1F8, ___m_Item1_0)); }
	inline int32_t get_m_Item1_0() const { return ___m_Item1_0; }
	inline int32_t* get_address_of_m_Item1_0() { return &___m_Item1_0; }
	inline void set_m_Item1_0(int32_t value)
	{
		___m_Item1_0 = value;
	}

	inline static int32_t get_offset_of_m_Item2_1() { return static_cast<int32_t>(offsetof(Tuple_2_t1C7D0D1C413A36A4FEB4C9441E39E7E0F615B1F8, ___m_Item2_1)); }
	inline int32_t get_m_Item2_1() const { return ___m_Item2_1; }
	inline int32_t* get_address_of_m_Item2_1() { return &___m_Item2_1; }
	inline void set_m_Item2_1(int32_t value)
	{
		___m_Item2_1 = value;
	}
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


// Microsoft.MixedReality.Toolkit.Input.BaseHand
struct  BaseHand_t33C08C0C3F8EDE4D4BA9ABFE981707C71208C1A6  : public BaseController_tCABA601990B425FA3A315FAECE1332E0005DC316
{
public:
	// Microsoft.MixedReality.Toolkit.Input.HandRay Microsoft.MixedReality.Toolkit.Input.BaseHand::<HandRay>k__BackingField
	HandRay_tD9B46FBC0154A56DFD6DA889BCA8A87BE57B9C37 * ___U3CHandRayU3Ek__BackingField_14;
	// System.Single Microsoft.MixedReality.Toolkit.Input.BaseHand::deltaTimeStart
	float ___deltaTimeStart_15;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.BaseHand::frameOn
	int32_t ___frameOn_17;
	// UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.Input.BaseHand::velocityPositionsCache
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___velocityPositionsCache_18;
	// UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.Input.BaseHand::velocityNormalsCache
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___velocityNormalsCache_19;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.BaseHand::velocityPositionsSum
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___velocityPositionsSum_20;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.BaseHand::velocityNormalsSum
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___velocityNormalsSum_21;

public:
	inline static int32_t get_offset_of_U3CHandRayU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(BaseHand_t33C08C0C3F8EDE4D4BA9ABFE981707C71208C1A6, ___U3CHandRayU3Ek__BackingField_14)); }
	inline HandRay_tD9B46FBC0154A56DFD6DA889BCA8A87BE57B9C37 * get_U3CHandRayU3Ek__BackingField_14() const { return ___U3CHandRayU3Ek__BackingField_14; }
	inline HandRay_tD9B46FBC0154A56DFD6DA889BCA8A87BE57B9C37 ** get_address_of_U3CHandRayU3Ek__BackingField_14() { return &___U3CHandRayU3Ek__BackingField_14; }
	inline void set_U3CHandRayU3Ek__BackingField_14(HandRay_tD9B46FBC0154A56DFD6DA889BCA8A87BE57B9C37 * value)
	{
		___U3CHandRayU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CHandRayU3Ek__BackingField_14), (void*)value);
	}

	inline static int32_t get_offset_of_deltaTimeStart_15() { return static_cast<int32_t>(offsetof(BaseHand_t33C08C0C3F8EDE4D4BA9ABFE981707C71208C1A6, ___deltaTimeStart_15)); }
	inline float get_deltaTimeStart_15() const { return ___deltaTimeStart_15; }
	inline float* get_address_of_deltaTimeStart_15() { return &___deltaTimeStart_15; }
	inline void set_deltaTimeStart_15(float value)
	{
		___deltaTimeStart_15 = value;
	}

	inline static int32_t get_offset_of_frameOn_17() { return static_cast<int32_t>(offsetof(BaseHand_t33C08C0C3F8EDE4D4BA9ABFE981707C71208C1A6, ___frameOn_17)); }
	inline int32_t get_frameOn_17() const { return ___frameOn_17; }
	inline int32_t* get_address_of_frameOn_17() { return &___frameOn_17; }
	inline void set_frameOn_17(int32_t value)
	{
		___frameOn_17 = value;
	}

	inline static int32_t get_offset_of_velocityPositionsCache_18() { return static_cast<int32_t>(offsetof(BaseHand_t33C08C0C3F8EDE4D4BA9ABFE981707C71208C1A6, ___velocityPositionsCache_18)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_velocityPositionsCache_18() const { return ___velocityPositionsCache_18; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_velocityPositionsCache_18() { return &___velocityPositionsCache_18; }
	inline void set_velocityPositionsCache_18(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___velocityPositionsCache_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___velocityPositionsCache_18), (void*)value);
	}

	inline static int32_t get_offset_of_velocityNormalsCache_19() { return static_cast<int32_t>(offsetof(BaseHand_t33C08C0C3F8EDE4D4BA9ABFE981707C71208C1A6, ___velocityNormalsCache_19)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_velocityNormalsCache_19() const { return ___velocityNormalsCache_19; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_velocityNormalsCache_19() { return &___velocityNormalsCache_19; }
	inline void set_velocityNormalsCache_19(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___velocityNormalsCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___velocityNormalsCache_19), (void*)value);
	}

	inline static int32_t get_offset_of_velocityPositionsSum_20() { return static_cast<int32_t>(offsetof(BaseHand_t33C08C0C3F8EDE4D4BA9ABFE981707C71208C1A6, ___velocityPositionsSum_20)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_velocityPositionsSum_20() const { return ___velocityPositionsSum_20; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_velocityPositionsSum_20() { return &___velocityPositionsSum_20; }
	inline void set_velocityPositionsSum_20(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___velocityPositionsSum_20 = value;
	}

	inline static int32_t get_offset_of_velocityNormalsSum_21() { return static_cast<int32_t>(offsetof(BaseHand_t33C08C0C3F8EDE4D4BA9ABFE981707C71208C1A6, ___velocityNormalsSum_21)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_velocityNormalsSum_21() const { return ___velocityNormalsSum_21; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_velocityNormalsSum_21() { return &___velocityNormalsSum_21; }
	inline void set_velocityNormalsSum_21(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___velocityNormalsSum_21 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityGestureMapping
struct  MixedRealityGestureMapping_tC8B239DD943E25B72D110F4AC2589E62D1FCA0E1 
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityGestureMapping::description
	String_t* ___description_0;
	// Microsoft.MixedReality.Toolkit.Input.GestureInputType Microsoft.MixedReality.Toolkit.Input.MixedRealityGestureMapping::gestureType
	int32_t ___gestureType_1;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityGestureMapping::action
	MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  ___action_2;

public:
	inline static int32_t get_offset_of_description_0() { return static_cast<int32_t>(offsetof(MixedRealityGestureMapping_tC8B239DD943E25B72D110F4AC2589E62D1FCA0E1, ___description_0)); }
	inline String_t* get_description_0() const { return ___description_0; }
	inline String_t** get_address_of_description_0() { return &___description_0; }
	inline void set_description_0(String_t* value)
	{
		___description_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_0), (void*)value);
	}

	inline static int32_t get_offset_of_gestureType_1() { return static_cast<int32_t>(offsetof(MixedRealityGestureMapping_tC8B239DD943E25B72D110F4AC2589E62D1FCA0E1, ___gestureType_1)); }
	inline int32_t get_gestureType_1() const { return ___gestureType_1; }
	inline int32_t* get_address_of_gestureType_1() { return &___gestureType_1; }
	inline void set_gestureType_1(int32_t value)
	{
		___gestureType_1 = value;
	}

	inline static int32_t get_offset_of_action_2() { return static_cast<int32_t>(offsetof(MixedRealityGestureMapping_tC8B239DD943E25B72D110F4AC2589E62D1FCA0E1, ___action_2)); }
	inline MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  get_action_2() const { return ___action_2; }
	inline MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35 * get_address_of_action_2() { return &___action_2; }
	inline void set_action_2(MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  value)
	{
		___action_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___action_2))->___description_2), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityGestureMapping
struct MixedRealityGestureMapping_tC8B239DD943E25B72D110F4AC2589E62D1FCA0E1_marshaled_pinvoke
{
	char* ___description_0;
	int32_t ___gestureType_1;
	MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35_marshaled_pinvoke ___action_2;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityGestureMapping
struct MixedRealityGestureMapping_tC8B239DD943E25B72D110F4AC2589E62D1FCA0E1_marshaled_com
{
	Il2CppChar* ___description_0;
	int32_t ___gestureType_1;
	MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35_marshaled_com ___action_2;
};

// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping
struct  MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0  : public RuntimeObject
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::id
	uint32_t ___id_0;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::description
	String_t* ___description_1;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisType
	int32_t ___axisType_2;
	// Microsoft.MixedReality.Toolkit.Input.DeviceInputType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::inputType
	int32_t ___inputType_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::inputAction
	MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  ___inputAction_4;
	// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::keyCode
	int32_t ___keyCode_5;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisCodeX
	String_t* ___axisCodeX_6;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisCodeY
	String_t* ___axisCodeY_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::invertXAxis
	bool ___invertXAxis_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::invertYAxis
	bool ___invertYAxis_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::changed
	bool ___changed_10;
	// System.Object Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::rawData
	RuntimeObject * ___rawData_11;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::boolData
	bool ___boolData_12;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::floatData
	float ___floatData_13;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::vector2Data
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___vector2Data_14;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::positionData
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positionData_15;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::rotationData
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotationData_16;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::poseData
	MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  ___poseData_17;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0, ___id_0)); }
	inline uint32_t get_id_0() const { return ___id_0; }
	inline uint32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(uint32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_description_1() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0, ___description_1)); }
	inline String_t* get_description_1() const { return ___description_1; }
	inline String_t** get_address_of_description_1() { return &___description_1; }
	inline void set_description_1(String_t* value)
	{
		___description_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_1), (void*)value);
	}

	inline static int32_t get_offset_of_axisType_2() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0, ___axisType_2)); }
	inline int32_t get_axisType_2() const { return ___axisType_2; }
	inline int32_t* get_address_of_axisType_2() { return &___axisType_2; }
	inline void set_axisType_2(int32_t value)
	{
		___axisType_2 = value;
	}

	inline static int32_t get_offset_of_inputType_3() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0, ___inputType_3)); }
	inline int32_t get_inputType_3() const { return ___inputType_3; }
	inline int32_t* get_address_of_inputType_3() { return &___inputType_3; }
	inline void set_inputType_3(int32_t value)
	{
		___inputType_3 = value;
	}

	inline static int32_t get_offset_of_inputAction_4() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0, ___inputAction_4)); }
	inline MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  get_inputAction_4() const { return ___inputAction_4; }
	inline MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35 * get_address_of_inputAction_4() { return &___inputAction_4; }
	inline void set_inputAction_4(MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  value)
	{
		___inputAction_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___inputAction_4))->___description_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_keyCode_5() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0, ___keyCode_5)); }
	inline int32_t get_keyCode_5() const { return ___keyCode_5; }
	inline int32_t* get_address_of_keyCode_5() { return &___keyCode_5; }
	inline void set_keyCode_5(int32_t value)
	{
		___keyCode_5 = value;
	}

	inline static int32_t get_offset_of_axisCodeX_6() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0, ___axisCodeX_6)); }
	inline String_t* get_axisCodeX_6() const { return ___axisCodeX_6; }
	inline String_t** get_address_of_axisCodeX_6() { return &___axisCodeX_6; }
	inline void set_axisCodeX_6(String_t* value)
	{
		___axisCodeX_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axisCodeX_6), (void*)value);
	}

	inline static int32_t get_offset_of_axisCodeY_7() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0, ___axisCodeY_7)); }
	inline String_t* get_axisCodeY_7() const { return ___axisCodeY_7; }
	inline String_t** get_address_of_axisCodeY_7() { return &___axisCodeY_7; }
	inline void set_axisCodeY_7(String_t* value)
	{
		___axisCodeY_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axisCodeY_7), (void*)value);
	}

	inline static int32_t get_offset_of_invertXAxis_8() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0, ___invertXAxis_8)); }
	inline bool get_invertXAxis_8() const { return ___invertXAxis_8; }
	inline bool* get_address_of_invertXAxis_8() { return &___invertXAxis_8; }
	inline void set_invertXAxis_8(bool value)
	{
		___invertXAxis_8 = value;
	}

	inline static int32_t get_offset_of_invertYAxis_9() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0, ___invertYAxis_9)); }
	inline bool get_invertYAxis_9() const { return ___invertYAxis_9; }
	inline bool* get_address_of_invertYAxis_9() { return &___invertYAxis_9; }
	inline void set_invertYAxis_9(bool value)
	{
		___invertYAxis_9 = value;
	}

	inline static int32_t get_offset_of_changed_10() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0, ___changed_10)); }
	inline bool get_changed_10() const { return ___changed_10; }
	inline bool* get_address_of_changed_10() { return &___changed_10; }
	inline void set_changed_10(bool value)
	{
		___changed_10 = value;
	}

	inline static int32_t get_offset_of_rawData_11() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0, ___rawData_11)); }
	inline RuntimeObject * get_rawData_11() const { return ___rawData_11; }
	inline RuntimeObject ** get_address_of_rawData_11() { return &___rawData_11; }
	inline void set_rawData_11(RuntimeObject * value)
	{
		___rawData_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rawData_11), (void*)value);
	}

	inline static int32_t get_offset_of_boolData_12() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0, ___boolData_12)); }
	inline bool get_boolData_12() const { return ___boolData_12; }
	inline bool* get_address_of_boolData_12() { return &___boolData_12; }
	inline void set_boolData_12(bool value)
	{
		___boolData_12 = value;
	}

	inline static int32_t get_offset_of_floatData_13() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0, ___floatData_13)); }
	inline float get_floatData_13() const { return ___floatData_13; }
	inline float* get_address_of_floatData_13() { return &___floatData_13; }
	inline void set_floatData_13(float value)
	{
		___floatData_13 = value;
	}

	inline static int32_t get_offset_of_vector2Data_14() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0, ___vector2Data_14)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_vector2Data_14() const { return ___vector2Data_14; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_vector2Data_14() { return &___vector2Data_14; }
	inline void set_vector2Data_14(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___vector2Data_14 = value;
	}

	inline static int32_t get_offset_of_positionData_15() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0, ___positionData_15)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positionData_15() const { return ___positionData_15; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positionData_15() { return &___positionData_15; }
	inline void set_positionData_15(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positionData_15 = value;
	}

	inline static int32_t get_offset_of_rotationData_16() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0, ___rotationData_16)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotationData_16() const { return ___rotationData_16; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotationData_16() { return &___rotationData_16; }
	inline void set_rotationData_16(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotationData_16 = value;
	}

	inline static int32_t get_offset_of_poseData_17() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0, ___poseData_17)); }
	inline MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  get_poseData_17() const { return ___poseData_17; }
	inline MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5 * get_address_of_poseData_17() { return &___poseData_17; }
	inline void set_poseData_17(MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  value)
	{
		___poseData_17 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.SimulatedHandData_HandJointDataGenerator
struct  HandJointDataGenerator_tACFADDDDE2346DC5682A95B8E6B8C3299B06F37B  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding_KeyType,System.Int32>
struct  Action_2_t143C93F5482D416C7FDF795DB5037E2DA6B062E6  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct  AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
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


// Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile
struct  MixedRealityGesturesProfile_tA3455FE721279843B94D506C063398F644EEA005  : public BaseMixedRealityProfile_t9B92D8A7CB0AE5AF973870EDF7DE2BC12E5FA4E5
{
public:
	// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsGestureSettings Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile::manipulationGestures
	int32_t ___manipulationGestures_5;
	// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsGestureSettings Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile::navigationGestures
	int32_t ___navigationGestures_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile::useRailsNavigation
	bool ___useRailsNavigation_7;
	// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsGestureSettings Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile::railsNavigationGestures
	int32_t ___railsNavigationGestures_8;
	// Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile::windowsGestureAutoStart
	int32_t ___windowsGestureAutoStart_9;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityGestureMapping[] Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile::gestures
	MixedRealityGestureMappingU5BU5D_t5083898BA53AAB77B3DDE57E6F4F90B87B64C480* ___gestures_10;

public:
	inline static int32_t get_offset_of_manipulationGestures_5() { return static_cast<int32_t>(offsetof(MixedRealityGesturesProfile_tA3455FE721279843B94D506C063398F644EEA005, ___manipulationGestures_5)); }
	inline int32_t get_manipulationGestures_5() const { return ___manipulationGestures_5; }
	inline int32_t* get_address_of_manipulationGestures_5() { return &___manipulationGestures_5; }
	inline void set_manipulationGestures_5(int32_t value)
	{
		___manipulationGestures_5 = value;
	}

	inline static int32_t get_offset_of_navigationGestures_6() { return static_cast<int32_t>(offsetof(MixedRealityGesturesProfile_tA3455FE721279843B94D506C063398F644EEA005, ___navigationGestures_6)); }
	inline int32_t get_navigationGestures_6() const { return ___navigationGestures_6; }
	inline int32_t* get_address_of_navigationGestures_6() { return &___navigationGestures_6; }
	inline void set_navigationGestures_6(int32_t value)
	{
		___navigationGestures_6 = value;
	}

	inline static int32_t get_offset_of_useRailsNavigation_7() { return static_cast<int32_t>(offsetof(MixedRealityGesturesProfile_tA3455FE721279843B94D506C063398F644EEA005, ___useRailsNavigation_7)); }
	inline bool get_useRailsNavigation_7() const { return ___useRailsNavigation_7; }
	inline bool* get_address_of_useRailsNavigation_7() { return &___useRailsNavigation_7; }
	inline void set_useRailsNavigation_7(bool value)
	{
		___useRailsNavigation_7 = value;
	}

	inline static int32_t get_offset_of_railsNavigationGestures_8() { return static_cast<int32_t>(offsetof(MixedRealityGesturesProfile_tA3455FE721279843B94D506C063398F644EEA005, ___railsNavigationGestures_8)); }
	inline int32_t get_railsNavigationGestures_8() const { return ___railsNavigationGestures_8; }
	inline int32_t* get_address_of_railsNavigationGestures_8() { return &___railsNavigationGestures_8; }
	inline void set_railsNavigationGestures_8(int32_t value)
	{
		___railsNavigationGestures_8 = value;
	}

	inline static int32_t get_offset_of_windowsGestureAutoStart_9() { return static_cast<int32_t>(offsetof(MixedRealityGesturesProfile_tA3455FE721279843B94D506C063398F644EEA005, ___windowsGestureAutoStart_9)); }
	inline int32_t get_windowsGestureAutoStart_9() const { return ___windowsGestureAutoStart_9; }
	inline int32_t* get_address_of_windowsGestureAutoStart_9() { return &___windowsGestureAutoStart_9; }
	inline void set_windowsGestureAutoStart_9(int32_t value)
	{
		___windowsGestureAutoStart_9 = value;
	}

	inline static int32_t get_offset_of_gestures_10() { return static_cast<int32_t>(offsetof(MixedRealityGesturesProfile_tA3455FE721279843B94D506C063398F644EEA005, ___gestures_10)); }
	inline MixedRealityGestureMappingU5BU5D_t5083898BA53AAB77B3DDE57E6F4F90B87B64C480* get_gestures_10() const { return ___gestures_10; }
	inline MixedRealityGestureMappingU5BU5D_t5083898BA53AAB77B3DDE57E6F4F90B87B64C480** get_address_of_gestures_10() { return &___gestures_10; }
	inline void set_gestures_10(MixedRealityGestureMappingU5BU5D_t5083898BA53AAB77B3DDE57E6F4F90B87B64C480* value)
	{
		___gestures_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gestures_10), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile
struct  MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1  : public BaseMixedRealityProfile_t9B92D8A7CB0AE5AF973870EDF7DE2BC12E5FA4E5
{
public:
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::indicatorsPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___indicatorsPrefab_5;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::mouseRotationSensitivity
	float ___mouseRotationSensitivity_6;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::mouseX
	String_t* ___mouseX_7;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::mouseY
	String_t* ___mouseY_8;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::mouseScroll
	String_t* ___mouseScroll_9;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::doublePressTime
	float ___doublePressTime_10;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::isCameraControlEnabled
	bool ___isCameraControlEnabled_11;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::mouseLookSpeed
	float ___mouseLookSpeed_12;
	// Microsoft.MixedReality.Toolkit.Input.KeyBinding Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::mouseLookButton
	KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B  ___mouseLookButton_13;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::mouseLookToggle
	bool ___mouseLookToggle_14;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::isControllerLookInverted
	bool ___isControllerLookInverted_15;
	// Microsoft.MixedReality.Toolkit.Input.InputSimulationControlMode Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::currentControlMode
	int32_t ___currentControlMode_16;
	// Microsoft.MixedReality.Toolkit.Input.KeyBinding Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::fastControlKey
	KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B  ___fastControlKey_17;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::controlSlowSpeed
	float ___controlSlowSpeed_18;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::controlFastSpeed
	float ___controlFastSpeed_19;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::moveHorizontal
	String_t* ___moveHorizontal_20;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::moveVertical
	String_t* ___moveVertical_21;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::moveUpDown
	String_t* ___moveUpDown_22;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::lookHorizontal
	String_t* ___lookHorizontal_23;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::lookVertical
	String_t* ___lookVertical_24;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::simulateEyePosition
	bool ___simulateEyePosition_25;
	// Microsoft.MixedReality.Toolkit.Input.HandSimulationMode Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::defaultHandSimulationMode
	int32_t ___defaultHandSimulationMode_26;
	// Microsoft.MixedReality.Toolkit.Input.KeyBinding Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::toggleLeftHandKey
	KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B  ___toggleLeftHandKey_27;
	// Microsoft.MixedReality.Toolkit.Input.KeyBinding Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::toggleRightHandKey
	KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B  ___toggleRightHandKey_28;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::handHideTimeout
	float ___handHideTimeout_29;
	// Microsoft.MixedReality.Toolkit.Input.KeyBinding Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::leftHandManipulationKey
	KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B  ___leftHandManipulationKey_30;
	// Microsoft.MixedReality.Toolkit.Input.KeyBinding Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::rightHandManipulationKey
	KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B  ___rightHandManipulationKey_31;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::mouseHandRotationSpeed
	float ___mouseHandRotationSpeed_32;
	// Microsoft.MixedReality.Toolkit.Input.KeyBinding Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::handRotateButton
	KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B  ___handRotateButton_33;
	// Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose_GestureId Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::defaultHandGesture
	int32_t ___defaultHandGesture_34;
	// Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose_GestureId Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::leftMouseHandGesture
	int32_t ___leftMouseHandGesture_35;
	// Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose_GestureId Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::middleMouseHandGesture
	int32_t ___middleMouseHandGesture_36;
	// Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose_GestureId Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::rightMouseHandGesture
	int32_t ___rightMouseHandGesture_37;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::handGestureAnimationSpeed
	float ___handGestureAnimationSpeed_38;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::holdStartDuration
	float ___holdStartDuration_39;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::navigationStartThreshold
	float ___navigationStartThreshold_40;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::defaultHandDistance
	float ___defaultHandDistance_41;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::handDepthMultiplier
	float ___handDepthMultiplier_42;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::handJitterAmount
	float ___handJitterAmount_43;

public:
	inline static int32_t get_offset_of_indicatorsPrefab_5() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1, ___indicatorsPrefab_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_indicatorsPrefab_5() const { return ___indicatorsPrefab_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_indicatorsPrefab_5() { return &___indicatorsPrefab_5; }
	inline void set_indicatorsPrefab_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___indicatorsPrefab_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___indicatorsPrefab_5), (void*)value);
	}

	inline static int32_t get_offset_of_mouseRotationSensitivity_6() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1, ___mouseRotationSensitivity_6)); }
	inline float get_mouseRotationSensitivity_6() const { return ___mouseRotationSensitivity_6; }
	inline float* get_address_of_mouseRotationSensitivity_6() { return &___mouseRotationSensitivity_6; }
	inline void set_mouseRotationSensitivity_6(float value)
	{
		___mouseRotationSensitivity_6 = value;
	}

	inline static int32_t get_offset_of_mouseX_7() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1, ___mouseX_7)); }
	inline String_t* get_mouseX_7() const { return ___mouseX_7; }
	inline String_t** get_address_of_mouseX_7() { return &___mouseX_7; }
	inline void set_mouseX_7(String_t* value)
	{
		___mouseX_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mouseX_7), (void*)value);
	}

	inline static int32_t get_offset_of_mouseY_8() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1, ___mouseY_8)); }
	inline String_t* get_mouseY_8() const { return ___mouseY_8; }
	inline String_t** get_address_of_mouseY_8() { return &___mouseY_8; }
	inline void set_mouseY_8(String_t* value)
	{
		___mouseY_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mouseY_8), (void*)value);
	}

	inline static int32_t get_offset_of_mouseScroll_9() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1, ___mouseScroll_9)); }
	inline String_t* get_mouseScroll_9() const { return ___mouseScroll_9; }
	inline String_t** get_address_of_mouseScroll_9() { return &___mouseScroll_9; }
	inline void set_mouseScroll_9(String_t* value)
	{
		___mouseScroll_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mouseScroll_9), (void*)value);
	}

	inline static int32_t get_offset_of_doublePressTime_10() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1, ___doublePressTime_10)); }
	inline float get_doublePressTime_10() const { return ___doublePressTime_10; }
	inline float* get_address_of_doublePressTime_10() { return &___doublePressTime_10; }
	inline void set_doublePressTime_10(float value)
	{
		___doublePressTime_10 = value;
	}

	inline static int32_t get_offset_of_isCameraControlEnabled_11() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1, ___isCameraControlEnabled_11)); }
	inline bool get_isCameraControlEnabled_11() const { return ___isCameraControlEnabled_11; }
	inline bool* get_address_of_isCameraControlEnabled_11() { return &___isCameraControlEnabled_11; }
	inline void set_isCameraControlEnabled_11(bool value)
	{
		___isCameraControlEnabled_11 = value;
	}

	inline static int32_t get_offset_of_mouseLookSpeed_12() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1, ___mouseLookSpeed_12)); }
	inline float get_mouseLookSpeed_12() const { return ___mouseLookSpeed_12; }
	inline float* get_address_of_mouseLookSpeed_12() { return &___mouseLookSpeed_12; }
	inline void set_mouseLookSpeed_12(float value)
	{
		___mouseLookSpeed_12 = value;
	}

	inline static int32_t get_offset_of_mouseLookButton_13() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1, ___mouseLookButton_13)); }
	inline KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B  get_mouseLookButton_13() const { return ___mouseLookButton_13; }
	inline KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B * get_address_of_mouseLookButton_13() { return &___mouseLookButton_13; }
	inline void set_mouseLookButton_13(KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B  value)
	{
		___mouseLookButton_13 = value;
	}

	inline static int32_t get_offset_of_mouseLookToggle_14() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1, ___mouseLookToggle_14)); }
	inline bool get_mouseLookToggle_14() const { return ___mouseLookToggle_14; }
	inline bool* get_address_of_mouseLookToggle_14() { return &___mouseLookToggle_14; }
	inline void set_mouseLookToggle_14(bool value)
	{
		___mouseLookToggle_14 = value;
	}

	inline static int32_t get_offset_of_isControllerLookInverted_15() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1, ___isControllerLookInverted_15)); }
	inline bool get_isControllerLookInverted_15() const { return ___isControllerLookInverted_15; }
	inline bool* get_address_of_isControllerLookInverted_15() { return &___isControllerLookInverted_15; }
	inline void set_isControllerLookInverted_15(bool value)
	{
		___isControllerLookInverted_15 = value;
	}

	inline static int32_t get_offset_of_currentControlMode_16() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1, ___currentControlMode_16)); }
	inline int32_t get_currentControlMode_16() const { return ___currentControlMode_16; }
	inline int32_t* get_address_of_currentControlMode_16() { return &___currentControlMode_16; }
	inline void set_currentControlMode_16(int32_t value)
	{
		___currentControlMode_16 = value;
	}

	inline static int32_t get_offset_of_fastControlKey_17() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1, ___fastControlKey_17)); }
	inline KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B  get_fastControlKey_17() const { return ___fastControlKey_17; }
	inline KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B * get_address_of_fastControlKey_17() { return &___fastControlKey_17; }
	inline void set_fastControlKey_17(KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B  value)
	{
		___fastControlKey_17 = value;
	}

	inline static int32_t get_offset_of_controlSlowSpeed_18() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1, ___controlSlowSpeed_18)); }
	inline float get_controlSlowSpeed_18() const { return ___controlSlowSpeed_18; }
	inline float* get_address_of_controlSlowSpeed_18() { return &___controlSlowSpeed_18; }
	inline void set_controlSlowSpeed_18(float value)
	{
		___controlSlowSpeed_18 = value;
	}

	inline static int32_t get_offset_of_controlFastSpeed_19() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1, ___controlFastSpeed_19)); }
	inline float get_controlFastSpeed_19() const { return ___controlFastSpeed_19; }
	inline float* get_address_of_controlFastSpeed_19() { return &___controlFastSpeed_19; }
	inline void set_controlFastSpeed_19(float value)
	{
		___controlFastSpeed_19 = value;
	}

	inline static int32_t get_offset_of_moveHorizontal_20() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1, ___moveHorizontal_20)); }
	inline String_t* get_moveHorizontal_20() const { return ___moveHorizontal_20; }
	inline String_t** get_address_of_moveHorizontal_20() { return &___moveHorizontal_20; }
	inline void set_moveHorizontal_20(String_t* value)
	{
		___moveHorizontal_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___moveHorizontal_20), (void*)value);
	}

	inline static int32_t get_offset_of_moveVertical_21() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1, ___moveVertical_21)); }
	inline String_t* get_moveVertical_21() const { return ___moveVertical_21; }
	inline String_t** get_address_of_moveVertical_21() { return &___moveVertical_21; }
	inline void set_moveVertical_21(String_t* value)
	{
		___moveVertical_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___moveVertical_21), (void*)value);
	}

	inline static int32_t get_offset_of_moveUpDown_22() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1, ___moveUpDown_22)); }
	inline String_t* get_moveUpDown_22() const { return ___moveUpDown_22; }
	inline String_t** get_address_of_moveUpDown_22() { return &___moveUpDown_22; }
	inline void set_moveUpDown_22(String_t* value)
	{
		___moveUpDown_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___moveUpDown_22), (void*)value);
	}

	inline static int32_t get_offset_of_lookHorizontal_23() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1, ___lookHorizontal_23)); }
	inline String_t* get_lookHorizontal_23() const { return ___lookHorizontal_23; }
	inline String_t** get_address_of_lookHorizontal_23() { return &___lookHorizontal_23; }
	inline void set_lookHorizontal_23(String_t* value)
	{
		___lookHorizontal_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lookHorizontal_23), (void*)value);
	}

	inline static int32_t get_offset_of_lookVertical_24() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1, ___lookVertical_24)); }
	inline String_t* get_lookVertical_24() const { return ___lookVertical_24; }
	inline String_t** get_address_of_lookVertical_24() { return &___lookVertical_24; }
	inline void set_lookVertical_24(String_t* value)
	{
		___lookVertical_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lookVertical_24), (void*)value);
	}

	inline static int32_t get_offset_of_simulateEyePosition_25() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1, ___simulateEyePosition_25)); }
	inline bool get_simulateEyePosition_25() const { return ___simulateEyePosition_25; }
	inline bool* get_address_of_simulateEyePosition_25() { return &___simulateEyePosition_25; }
	inline void set_simulateEyePosition_25(bool value)
	{
		___simulateEyePosition_25 = value;
	}

	inline static int32_t get_offset_of_defaultHandSimulationMode_26() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1, ___defaultHandSimulationMode_26)); }
	inline int32_t get_defaultHandSimulationMode_26() const { return ___defaultHandSimulationMode_26; }
	inline int32_t* get_address_of_defaultHandSimulationMode_26() { return &___defaultHandSimulationMode_26; }
	inline void set_defaultHandSimulationMode_26(int32_t value)
	{
		___defaultHandSimulationMode_26 = value;
	}

	inline static int32_t get_offset_of_toggleLeftHandKey_27() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1, ___toggleLeftHandKey_27)); }
	inline KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B  get_toggleLeftHandKey_27() const { return ___toggleLeftHandKey_27; }
	inline KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B * get_address_of_toggleLeftHandKey_27() { return &___toggleLeftHandKey_27; }
	inline void set_toggleLeftHandKey_27(KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B  value)
	{
		___toggleLeftHandKey_27 = value;
	}

	inline static int32_t get_offset_of_toggleRightHandKey_28() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1, ___toggleRightHandKey_28)); }
	inline KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B  get_toggleRightHandKey_28() const { return ___toggleRightHandKey_28; }
	inline KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B * get_address_of_toggleRightHandKey_28() { return &___toggleRightHandKey_28; }
	inline void set_toggleRightHandKey_28(KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B  value)
	{
		___toggleRightHandKey_28 = value;
	}

	inline static int32_t get_offset_of_handHideTimeout_29() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1, ___handHideTimeout_29)); }
	inline float get_handHideTimeout_29() const { return ___handHideTimeout_29; }
	inline float* get_address_of_handHideTimeout_29() { return &___handHideTimeout_29; }
	inline void set_handHideTimeout_29(float value)
	{
		___handHideTimeout_29 = value;
	}

	inline static int32_t get_offset_of_leftHandManipulationKey_30() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1, ___leftHandManipulationKey_30)); }
	inline KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B  get_leftHandManipulationKey_30() const { return ___leftHandManipulationKey_30; }
	inline KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B * get_address_of_leftHandManipulationKey_30() { return &___leftHandManipulationKey_30; }
	inline void set_leftHandManipulationKey_30(KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B  value)
	{
		___leftHandManipulationKey_30 = value;
	}

	inline static int32_t get_offset_of_rightHandManipulationKey_31() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1, ___rightHandManipulationKey_31)); }
	inline KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B  get_rightHandManipulationKey_31() const { return ___rightHandManipulationKey_31; }
	inline KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B * get_address_of_rightHandManipulationKey_31() { return &___rightHandManipulationKey_31; }
	inline void set_rightHandManipulationKey_31(KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B  value)
	{
		___rightHandManipulationKey_31 = value;
	}

	inline static int32_t get_offset_of_mouseHandRotationSpeed_32() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1, ___mouseHandRotationSpeed_32)); }
	inline float get_mouseHandRotationSpeed_32() const { return ___mouseHandRotationSpeed_32; }
	inline float* get_address_of_mouseHandRotationSpeed_32() { return &___mouseHandRotationSpeed_32; }
	inline void set_mouseHandRotationSpeed_32(float value)
	{
		___mouseHandRotationSpeed_32 = value;
	}

	inline static int32_t get_offset_of_handRotateButton_33() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1, ___handRotateButton_33)); }
	inline KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B  get_handRotateButton_33() const { return ___handRotateButton_33; }
	inline KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B * get_address_of_handRotateButton_33() { return &___handRotateButton_33; }
	inline void set_handRotateButton_33(KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B  value)
	{
		___handRotateButton_33 = value;
	}

	inline static int32_t get_offset_of_defaultHandGesture_34() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1, ___defaultHandGesture_34)); }
	inline int32_t get_defaultHandGesture_34() const { return ___defaultHandGesture_34; }
	inline int32_t* get_address_of_defaultHandGesture_34() { return &___defaultHandGesture_34; }
	inline void set_defaultHandGesture_34(int32_t value)
	{
		___defaultHandGesture_34 = value;
	}

	inline static int32_t get_offset_of_leftMouseHandGesture_35() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1, ___leftMouseHandGesture_35)); }
	inline int32_t get_leftMouseHandGesture_35() const { return ___leftMouseHandGesture_35; }
	inline int32_t* get_address_of_leftMouseHandGesture_35() { return &___leftMouseHandGesture_35; }
	inline void set_leftMouseHandGesture_35(int32_t value)
	{
		___leftMouseHandGesture_35 = value;
	}

	inline static int32_t get_offset_of_middleMouseHandGesture_36() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1, ___middleMouseHandGesture_36)); }
	inline int32_t get_middleMouseHandGesture_36() const { return ___middleMouseHandGesture_36; }
	inline int32_t* get_address_of_middleMouseHandGesture_36() { return &___middleMouseHandGesture_36; }
	inline void set_middleMouseHandGesture_36(int32_t value)
	{
		___middleMouseHandGesture_36 = value;
	}

	inline static int32_t get_offset_of_rightMouseHandGesture_37() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1, ___rightMouseHandGesture_37)); }
	inline int32_t get_rightMouseHandGesture_37() const { return ___rightMouseHandGesture_37; }
	inline int32_t* get_address_of_rightMouseHandGesture_37() { return &___rightMouseHandGesture_37; }
	inline void set_rightMouseHandGesture_37(int32_t value)
	{
		___rightMouseHandGesture_37 = value;
	}

	inline static int32_t get_offset_of_handGestureAnimationSpeed_38() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1, ___handGestureAnimationSpeed_38)); }
	inline float get_handGestureAnimationSpeed_38() const { return ___handGestureAnimationSpeed_38; }
	inline float* get_address_of_handGestureAnimationSpeed_38() { return &___handGestureAnimationSpeed_38; }
	inline void set_handGestureAnimationSpeed_38(float value)
	{
		___handGestureAnimationSpeed_38 = value;
	}

	inline static int32_t get_offset_of_holdStartDuration_39() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1, ___holdStartDuration_39)); }
	inline float get_holdStartDuration_39() const { return ___holdStartDuration_39; }
	inline float* get_address_of_holdStartDuration_39() { return &___holdStartDuration_39; }
	inline void set_holdStartDuration_39(float value)
	{
		___holdStartDuration_39 = value;
	}

	inline static int32_t get_offset_of_navigationStartThreshold_40() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1, ___navigationStartThreshold_40)); }
	inline float get_navigationStartThreshold_40() const { return ___navigationStartThreshold_40; }
	inline float* get_address_of_navigationStartThreshold_40() { return &___navigationStartThreshold_40; }
	inline void set_navigationStartThreshold_40(float value)
	{
		___navigationStartThreshold_40 = value;
	}

	inline static int32_t get_offset_of_defaultHandDistance_41() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1, ___defaultHandDistance_41)); }
	inline float get_defaultHandDistance_41() const { return ___defaultHandDistance_41; }
	inline float* get_address_of_defaultHandDistance_41() { return &___defaultHandDistance_41; }
	inline void set_defaultHandDistance_41(float value)
	{
		___defaultHandDistance_41 = value;
	}

	inline static int32_t get_offset_of_handDepthMultiplier_42() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1, ___handDepthMultiplier_42)); }
	inline float get_handDepthMultiplier_42() const { return ___handDepthMultiplier_42; }
	inline float* get_address_of_handDepthMultiplier_42() { return &___handDepthMultiplier_42; }
	inline void set_handDepthMultiplier_42(float value)
	{
		___handDepthMultiplier_42 = value;
	}

	inline static int32_t get_offset_of_handJitterAmount_43() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1, ___handJitterAmount_43)); }
	inline float get_handJitterAmount_43() const { return ___handJitterAmount_43; }
	inline float* get_address_of_handJitterAmount_43() { return &___handJitterAmount_43; }
	inline void set_handJitterAmount_43(float value)
	{
		___handJitterAmount_43 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile
struct  MixedRealityInputSystemProfile_t6086D1D813224695CFB52FA000EDC2A6B6125255  : public BaseMixedRealityProfile_t9B92D8A7CB0AE5AF973870EDF7DE2BC12E5FA4E5
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputDataProviderConfiguration[] Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::dataProviderConfigurations
	MixedRealityInputDataProviderConfigurationU5BU5D_t5EFCDCD54D339A334A7DB7569A706727DD36B629* ___dataProviderConfigurations_5;
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::focusProviderType
	SystemType_t9CBB747474C12365CDB0953443942140BA3F6E3D * ___focusProviderType_6;
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::raycastProviderType
	SystemType_t9CBB747474C12365CDB0953443942140BA3F6E3D * ___raycastProviderType_7;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::focusQueryBufferSize
	int32_t ___focusQueryBufferSize_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::focusIndividualCompoundCollider
	bool ___focusIndividualCompoundCollider_9;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionsProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::inputActionsProfile
	MixedRealityInputActionsProfile_tC22296A00F0EFB4204D691FF9779FF791BF18B7A * ___inputActionsProfile_10;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionRulesProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::inputActionRulesProfile
	MixedRealityInputActionRulesProfile_tFEAA2110870F72D0711AA73999ABD3E35B8B1EC2 * ___inputActionRulesProfile_11;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::pointerProfile
	MixedRealityPointerProfile_tF898FEB881E4A15F5948FF8F05E75B106776AB48 * ___pointerProfile_12;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::gesturesProfile
	MixedRealityGesturesProfile_tA3455FE721279843B94D506C063398F644EEA005 * ___gesturesProfile_13;
	// System.Collections.Generic.List`1<System.Globalization.CultureInfo> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::supportedVoiceCultures
	List_1_tB93032867275F6C802C3659FC027FF6FB1372359 * ___supportedVoiceCultures_14;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealitySpeechCommandsProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::speechCommandsProfile
	MixedRealitySpeechCommandsProfile_t242A67789EFE65C5858239640DFD186B9AD525C2 * ___speechCommandsProfile_15;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::enableControllerMapping
	bool ___enableControllerMapping_16;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerMappingProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::controllerMappingProfile
	MixedRealityControllerMappingProfile_t12223BB5F530EC9E879FBFDD585E12FA087364F9 * ___controllerMappingProfile_17;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::controllerVisualizationProfile
	MixedRealityControllerVisualizationProfile_t29BFB03EF315B32F64DBE01F666C2F532C9A1CC3 * ___controllerVisualizationProfile_18;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::handTrackingProfile
	MixedRealityHandTrackingProfile_tDADC6D5367650C672DB618EED78274B7C1720AF0 * ___handTrackingProfile_19;

public:
	inline static int32_t get_offset_of_dataProviderConfigurations_5() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t6086D1D813224695CFB52FA000EDC2A6B6125255, ___dataProviderConfigurations_5)); }
	inline MixedRealityInputDataProviderConfigurationU5BU5D_t5EFCDCD54D339A334A7DB7569A706727DD36B629* get_dataProviderConfigurations_5() const { return ___dataProviderConfigurations_5; }
	inline MixedRealityInputDataProviderConfigurationU5BU5D_t5EFCDCD54D339A334A7DB7569A706727DD36B629** get_address_of_dataProviderConfigurations_5() { return &___dataProviderConfigurations_5; }
	inline void set_dataProviderConfigurations_5(MixedRealityInputDataProviderConfigurationU5BU5D_t5EFCDCD54D339A334A7DB7569A706727DD36B629* value)
	{
		___dataProviderConfigurations_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataProviderConfigurations_5), (void*)value);
	}

	inline static int32_t get_offset_of_focusProviderType_6() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t6086D1D813224695CFB52FA000EDC2A6B6125255, ___focusProviderType_6)); }
	inline SystemType_t9CBB747474C12365CDB0953443942140BA3F6E3D * get_focusProviderType_6() const { return ___focusProviderType_6; }
	inline SystemType_t9CBB747474C12365CDB0953443942140BA3F6E3D ** get_address_of_focusProviderType_6() { return &___focusProviderType_6; }
	inline void set_focusProviderType_6(SystemType_t9CBB747474C12365CDB0953443942140BA3F6E3D * value)
	{
		___focusProviderType_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___focusProviderType_6), (void*)value);
	}

	inline static int32_t get_offset_of_raycastProviderType_7() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t6086D1D813224695CFB52FA000EDC2A6B6125255, ___raycastProviderType_7)); }
	inline SystemType_t9CBB747474C12365CDB0953443942140BA3F6E3D * get_raycastProviderType_7() const { return ___raycastProviderType_7; }
	inline SystemType_t9CBB747474C12365CDB0953443942140BA3F6E3D ** get_address_of_raycastProviderType_7() { return &___raycastProviderType_7; }
	inline void set_raycastProviderType_7(SystemType_t9CBB747474C12365CDB0953443942140BA3F6E3D * value)
	{
		___raycastProviderType_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___raycastProviderType_7), (void*)value);
	}

	inline static int32_t get_offset_of_focusQueryBufferSize_8() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t6086D1D813224695CFB52FA000EDC2A6B6125255, ___focusQueryBufferSize_8)); }
	inline int32_t get_focusQueryBufferSize_8() const { return ___focusQueryBufferSize_8; }
	inline int32_t* get_address_of_focusQueryBufferSize_8() { return &___focusQueryBufferSize_8; }
	inline void set_focusQueryBufferSize_8(int32_t value)
	{
		___focusQueryBufferSize_8 = value;
	}

	inline static int32_t get_offset_of_focusIndividualCompoundCollider_9() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t6086D1D813224695CFB52FA000EDC2A6B6125255, ___focusIndividualCompoundCollider_9)); }
	inline bool get_focusIndividualCompoundCollider_9() const { return ___focusIndividualCompoundCollider_9; }
	inline bool* get_address_of_focusIndividualCompoundCollider_9() { return &___focusIndividualCompoundCollider_9; }
	inline void set_focusIndividualCompoundCollider_9(bool value)
	{
		___focusIndividualCompoundCollider_9 = value;
	}

	inline static int32_t get_offset_of_inputActionsProfile_10() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t6086D1D813224695CFB52FA000EDC2A6B6125255, ___inputActionsProfile_10)); }
	inline MixedRealityInputActionsProfile_tC22296A00F0EFB4204D691FF9779FF791BF18B7A * get_inputActionsProfile_10() const { return ___inputActionsProfile_10; }
	inline MixedRealityInputActionsProfile_tC22296A00F0EFB4204D691FF9779FF791BF18B7A ** get_address_of_inputActionsProfile_10() { return &___inputActionsProfile_10; }
	inline void set_inputActionsProfile_10(MixedRealityInputActionsProfile_tC22296A00F0EFB4204D691FF9779FF791BF18B7A * value)
	{
		___inputActionsProfile_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputActionsProfile_10), (void*)value);
	}

	inline static int32_t get_offset_of_inputActionRulesProfile_11() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t6086D1D813224695CFB52FA000EDC2A6B6125255, ___inputActionRulesProfile_11)); }
	inline MixedRealityInputActionRulesProfile_tFEAA2110870F72D0711AA73999ABD3E35B8B1EC2 * get_inputActionRulesProfile_11() const { return ___inputActionRulesProfile_11; }
	inline MixedRealityInputActionRulesProfile_tFEAA2110870F72D0711AA73999ABD3E35B8B1EC2 ** get_address_of_inputActionRulesProfile_11() { return &___inputActionRulesProfile_11; }
	inline void set_inputActionRulesProfile_11(MixedRealityInputActionRulesProfile_tFEAA2110870F72D0711AA73999ABD3E35B8B1EC2 * value)
	{
		___inputActionRulesProfile_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputActionRulesProfile_11), (void*)value);
	}

	inline static int32_t get_offset_of_pointerProfile_12() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t6086D1D813224695CFB52FA000EDC2A6B6125255, ___pointerProfile_12)); }
	inline MixedRealityPointerProfile_tF898FEB881E4A15F5948FF8F05E75B106776AB48 * get_pointerProfile_12() const { return ___pointerProfile_12; }
	inline MixedRealityPointerProfile_tF898FEB881E4A15F5948FF8F05E75B106776AB48 ** get_address_of_pointerProfile_12() { return &___pointerProfile_12; }
	inline void set_pointerProfile_12(MixedRealityPointerProfile_tF898FEB881E4A15F5948FF8F05E75B106776AB48 * value)
	{
		___pointerProfile_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerProfile_12), (void*)value);
	}

	inline static int32_t get_offset_of_gesturesProfile_13() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t6086D1D813224695CFB52FA000EDC2A6B6125255, ___gesturesProfile_13)); }
	inline MixedRealityGesturesProfile_tA3455FE721279843B94D506C063398F644EEA005 * get_gesturesProfile_13() const { return ___gesturesProfile_13; }
	inline MixedRealityGesturesProfile_tA3455FE721279843B94D506C063398F644EEA005 ** get_address_of_gesturesProfile_13() { return &___gesturesProfile_13; }
	inline void set_gesturesProfile_13(MixedRealityGesturesProfile_tA3455FE721279843B94D506C063398F644EEA005 * value)
	{
		___gesturesProfile_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gesturesProfile_13), (void*)value);
	}

	inline static int32_t get_offset_of_supportedVoiceCultures_14() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t6086D1D813224695CFB52FA000EDC2A6B6125255, ___supportedVoiceCultures_14)); }
	inline List_1_tB93032867275F6C802C3659FC027FF6FB1372359 * get_supportedVoiceCultures_14() const { return ___supportedVoiceCultures_14; }
	inline List_1_tB93032867275F6C802C3659FC027FF6FB1372359 ** get_address_of_supportedVoiceCultures_14() { return &___supportedVoiceCultures_14; }
	inline void set_supportedVoiceCultures_14(List_1_tB93032867275F6C802C3659FC027FF6FB1372359 * value)
	{
		___supportedVoiceCultures_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___supportedVoiceCultures_14), (void*)value);
	}

	inline static int32_t get_offset_of_speechCommandsProfile_15() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t6086D1D813224695CFB52FA000EDC2A6B6125255, ___speechCommandsProfile_15)); }
	inline MixedRealitySpeechCommandsProfile_t242A67789EFE65C5858239640DFD186B9AD525C2 * get_speechCommandsProfile_15() const { return ___speechCommandsProfile_15; }
	inline MixedRealitySpeechCommandsProfile_t242A67789EFE65C5858239640DFD186B9AD525C2 ** get_address_of_speechCommandsProfile_15() { return &___speechCommandsProfile_15; }
	inline void set_speechCommandsProfile_15(MixedRealitySpeechCommandsProfile_t242A67789EFE65C5858239640DFD186B9AD525C2 * value)
	{
		___speechCommandsProfile_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___speechCommandsProfile_15), (void*)value);
	}

	inline static int32_t get_offset_of_enableControllerMapping_16() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t6086D1D813224695CFB52FA000EDC2A6B6125255, ___enableControllerMapping_16)); }
	inline bool get_enableControllerMapping_16() const { return ___enableControllerMapping_16; }
	inline bool* get_address_of_enableControllerMapping_16() { return &___enableControllerMapping_16; }
	inline void set_enableControllerMapping_16(bool value)
	{
		___enableControllerMapping_16 = value;
	}

	inline static int32_t get_offset_of_controllerMappingProfile_17() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t6086D1D813224695CFB52FA000EDC2A6B6125255, ___controllerMappingProfile_17)); }
	inline MixedRealityControllerMappingProfile_t12223BB5F530EC9E879FBFDD585E12FA087364F9 * get_controllerMappingProfile_17() const { return ___controllerMappingProfile_17; }
	inline MixedRealityControllerMappingProfile_t12223BB5F530EC9E879FBFDD585E12FA087364F9 ** get_address_of_controllerMappingProfile_17() { return &___controllerMappingProfile_17; }
	inline void set_controllerMappingProfile_17(MixedRealityControllerMappingProfile_t12223BB5F530EC9E879FBFDD585E12FA087364F9 * value)
	{
		___controllerMappingProfile_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controllerMappingProfile_17), (void*)value);
	}

	inline static int32_t get_offset_of_controllerVisualizationProfile_18() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t6086D1D813224695CFB52FA000EDC2A6B6125255, ___controllerVisualizationProfile_18)); }
	inline MixedRealityControllerVisualizationProfile_t29BFB03EF315B32F64DBE01F666C2F532C9A1CC3 * get_controllerVisualizationProfile_18() const { return ___controllerVisualizationProfile_18; }
	inline MixedRealityControllerVisualizationProfile_t29BFB03EF315B32F64DBE01F666C2F532C9A1CC3 ** get_address_of_controllerVisualizationProfile_18() { return &___controllerVisualizationProfile_18; }
	inline void set_controllerVisualizationProfile_18(MixedRealityControllerVisualizationProfile_t29BFB03EF315B32F64DBE01F666C2F532C9A1CC3 * value)
	{
		___controllerVisualizationProfile_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controllerVisualizationProfile_18), (void*)value);
	}

	inline static int32_t get_offset_of_handTrackingProfile_19() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_t6086D1D813224695CFB52FA000EDC2A6B6125255, ___handTrackingProfile_19)); }
	inline MixedRealityHandTrackingProfile_tDADC6D5367650C672DB618EED78274B7C1720AF0 * get_handTrackingProfile_19() const { return ___handTrackingProfile_19; }
	inline MixedRealityHandTrackingProfile_tDADC6D5367650C672DB618EED78274B7C1720AF0 ** get_address_of_handTrackingProfile_19() { return &___handTrackingProfile_19; }
	inline void set_handTrackingProfile_19(MixedRealityHandTrackingProfile_tDADC6D5367650C672DB618EED78274B7C1720AF0 * value)
	{
		___handTrackingProfile_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handTrackingProfile_19), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.SimulatedHand
struct  SimulatedHand_tC79023B162FCFC9F05824CBBE1DCFBC2373217E7  : public BaseHand_t33C08C0C3F8EDE4D4BA9ABFE981707C71208C1A6
{
public:
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose> Microsoft.MixedReality.Toolkit.Input.SimulatedHand::jointPoses
	Dictionary_2_t2608D8F85D3104F212EC3BC05E54C1515108B68E * ___jointPoses_23;

public:
	inline static int32_t get_offset_of_jointPoses_23() { return static_cast<int32_t>(offsetof(SimulatedHand_tC79023B162FCFC9F05824CBBE1DCFBC2373217E7, ___jointPoses_23)); }
	inline Dictionary_2_t2608D8F85D3104F212EC3BC05E54C1515108B68E * get_jointPoses_23() const { return ___jointPoses_23; }
	inline Dictionary_2_t2608D8F85D3104F212EC3BC05E54C1515108B68E ** get_address_of_jointPoses_23() { return &___jointPoses_23; }
	inline void set_jointPoses_23(Dictionary_2_t2608D8F85D3104F212EC3BC05E54C1515108B68E * value)
	{
		___jointPoses_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___jointPoses_23), (void*)value);
	}
};

struct SimulatedHand_tC79023B162FCFC9F05824CBBE1DCFBC2373217E7_StaticFields
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.SimulatedHand::jointCount
	int32_t ___jointCount_22;

public:
	inline static int32_t get_offset_of_jointCount_22() { return static_cast<int32_t>(offsetof(SimulatedHand_tC79023B162FCFC9F05824CBBE1DCFBC2373217E7_StaticFields, ___jointCount_22)); }
	inline int32_t get_jointCount_22() const { return ___jointCount_22; }
	inline int32_t* get_address_of_jointCount_22() { return &___jointCount_22; }
	inline void set_jointCount_22(int32_t value)
	{
		___jointCount_22 = value;
	}
};


// UnityEngine.Camera
struct  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.SimulatedArticulatedHand
struct  SimulatedArticulatedHand_tF3E35F538E755A5B3F857B5F097D7902F8132B6B  : public SimulatedHand_tC79023B162FCFC9F05824CBBE1DCFBC2373217E7
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.SimulatedArticulatedHand::currentPointerPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___currentPointerPosition_24;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Input.SimulatedArticulatedHand::currentPointerRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___currentPointerRotation_25;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.SimulatedArticulatedHand::lastPointerPose
	MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  ___lastPointerPose_26;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.SimulatedArticulatedHand::currentPointerPose
	MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  ___currentPointerPose_27;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.SimulatedArticulatedHand::currentIndexPose
	MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  ___currentIndexPose_28;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.SimulatedArticulatedHand::currentGripPose
	MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  ___currentGripPose_29;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.SimulatedArticulatedHand::lastGripPose
	MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  ___lastGripPose_30;

public:
	inline static int32_t get_offset_of_currentPointerPosition_24() { return static_cast<int32_t>(offsetof(SimulatedArticulatedHand_tF3E35F538E755A5B3F857B5F097D7902F8132B6B, ___currentPointerPosition_24)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_currentPointerPosition_24() const { return ___currentPointerPosition_24; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_currentPointerPosition_24() { return &___currentPointerPosition_24; }
	inline void set_currentPointerPosition_24(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___currentPointerPosition_24 = value;
	}

	inline static int32_t get_offset_of_currentPointerRotation_25() { return static_cast<int32_t>(offsetof(SimulatedArticulatedHand_tF3E35F538E755A5B3F857B5F097D7902F8132B6B, ___currentPointerRotation_25)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_currentPointerRotation_25() const { return ___currentPointerRotation_25; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_currentPointerRotation_25() { return &___currentPointerRotation_25; }
	inline void set_currentPointerRotation_25(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___currentPointerRotation_25 = value;
	}

	inline static int32_t get_offset_of_lastPointerPose_26() { return static_cast<int32_t>(offsetof(SimulatedArticulatedHand_tF3E35F538E755A5B3F857B5F097D7902F8132B6B, ___lastPointerPose_26)); }
	inline MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  get_lastPointerPose_26() const { return ___lastPointerPose_26; }
	inline MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5 * get_address_of_lastPointerPose_26() { return &___lastPointerPose_26; }
	inline void set_lastPointerPose_26(MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  value)
	{
		___lastPointerPose_26 = value;
	}

	inline static int32_t get_offset_of_currentPointerPose_27() { return static_cast<int32_t>(offsetof(SimulatedArticulatedHand_tF3E35F538E755A5B3F857B5F097D7902F8132B6B, ___currentPointerPose_27)); }
	inline MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  get_currentPointerPose_27() const { return ___currentPointerPose_27; }
	inline MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5 * get_address_of_currentPointerPose_27() { return &___currentPointerPose_27; }
	inline void set_currentPointerPose_27(MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  value)
	{
		___currentPointerPose_27 = value;
	}

	inline static int32_t get_offset_of_currentIndexPose_28() { return static_cast<int32_t>(offsetof(SimulatedArticulatedHand_tF3E35F538E755A5B3F857B5F097D7902F8132B6B, ___currentIndexPose_28)); }
	inline MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  get_currentIndexPose_28() const { return ___currentIndexPose_28; }
	inline MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5 * get_address_of_currentIndexPose_28() { return &___currentIndexPose_28; }
	inline void set_currentIndexPose_28(MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  value)
	{
		___currentIndexPose_28 = value;
	}

	inline static int32_t get_offset_of_currentGripPose_29() { return static_cast<int32_t>(offsetof(SimulatedArticulatedHand_tF3E35F538E755A5B3F857B5F097D7902F8132B6B, ___currentGripPose_29)); }
	inline MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  get_currentGripPose_29() const { return ___currentGripPose_29; }
	inline MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5 * get_address_of_currentGripPose_29() { return &___currentGripPose_29; }
	inline void set_currentGripPose_29(MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  value)
	{
		___currentGripPose_29 = value;
	}

	inline static int32_t get_offset_of_lastGripPose_30() { return static_cast<int32_t>(offsetof(SimulatedArticulatedHand_tF3E35F538E755A5B3F857B5F097D7902F8132B6B, ___lastGripPose_30)); }
	inline MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  get_lastGripPose_30() const { return ___lastGripPose_30; }
	inline MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5 * get_address_of_lastGripPose_30() { return &___lastGripPose_30; }
	inline void set_lastGripPose_30(MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  value)
	{
		___lastGripPose_30 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand
struct  SimulatedGestureHand_tE8FD4F9A907C2909BB38CDEFDA82507DF0220BF4  : public SimulatedHand_tC79023B162FCFC9F05824CBBE1DCFBC2373217E7
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::initializedFromProfile
	bool ___initializedFromProfile_24;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::holdAction
	MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  ___holdAction_25;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::navigationAction
	MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  ___navigationAction_26;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::manipulationAction
	MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  ___manipulationAction_27;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::selectAction
	MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  ___selectAction_28;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::useRailsNavigation
	bool ___useRailsNavigation_29;
	// System.Single Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::holdStartDuration
	float ___holdStartDuration_30;
	// System.Single Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::navigationStartThreshold
	float ___navigationStartThreshold_31;
	// System.Single Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::SelectDownStartTime
	float ___SelectDownStartTime_32;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::holdInProgress
	bool ___holdInProgress_33;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::manipulationInProgress
	bool ___manipulationInProgress_34;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::navigationInProgress
	bool ___navigationInProgress_35;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::currentRailsUsed
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___currentRailsUsed_36;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::currentPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___currentPosition_37;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::cumulativeDelta
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___cumulativeDelta_38;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::currentGripPose
	MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  ___currentGripPose_39;

public:
	inline static int32_t get_offset_of_initializedFromProfile_24() { return static_cast<int32_t>(offsetof(SimulatedGestureHand_tE8FD4F9A907C2909BB38CDEFDA82507DF0220BF4, ___initializedFromProfile_24)); }
	inline bool get_initializedFromProfile_24() const { return ___initializedFromProfile_24; }
	inline bool* get_address_of_initializedFromProfile_24() { return &___initializedFromProfile_24; }
	inline void set_initializedFromProfile_24(bool value)
	{
		___initializedFromProfile_24 = value;
	}

	inline static int32_t get_offset_of_holdAction_25() { return static_cast<int32_t>(offsetof(SimulatedGestureHand_tE8FD4F9A907C2909BB38CDEFDA82507DF0220BF4, ___holdAction_25)); }
	inline MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  get_holdAction_25() const { return ___holdAction_25; }
	inline MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35 * get_address_of_holdAction_25() { return &___holdAction_25; }
	inline void set_holdAction_25(MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  value)
	{
		___holdAction_25 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___holdAction_25))->___description_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_navigationAction_26() { return static_cast<int32_t>(offsetof(SimulatedGestureHand_tE8FD4F9A907C2909BB38CDEFDA82507DF0220BF4, ___navigationAction_26)); }
	inline MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  get_navigationAction_26() const { return ___navigationAction_26; }
	inline MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35 * get_address_of_navigationAction_26() { return &___navigationAction_26; }
	inline void set_navigationAction_26(MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  value)
	{
		___navigationAction_26 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___navigationAction_26))->___description_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_manipulationAction_27() { return static_cast<int32_t>(offsetof(SimulatedGestureHand_tE8FD4F9A907C2909BB38CDEFDA82507DF0220BF4, ___manipulationAction_27)); }
	inline MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  get_manipulationAction_27() const { return ___manipulationAction_27; }
	inline MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35 * get_address_of_manipulationAction_27() { return &___manipulationAction_27; }
	inline void set_manipulationAction_27(MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  value)
	{
		___manipulationAction_27 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___manipulationAction_27))->___description_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_selectAction_28() { return static_cast<int32_t>(offsetof(SimulatedGestureHand_tE8FD4F9A907C2909BB38CDEFDA82507DF0220BF4, ___selectAction_28)); }
	inline MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  get_selectAction_28() const { return ___selectAction_28; }
	inline MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35 * get_address_of_selectAction_28() { return &___selectAction_28; }
	inline void set_selectAction_28(MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  value)
	{
		___selectAction_28 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___selectAction_28))->___description_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_useRailsNavigation_29() { return static_cast<int32_t>(offsetof(SimulatedGestureHand_tE8FD4F9A907C2909BB38CDEFDA82507DF0220BF4, ___useRailsNavigation_29)); }
	inline bool get_useRailsNavigation_29() const { return ___useRailsNavigation_29; }
	inline bool* get_address_of_useRailsNavigation_29() { return &___useRailsNavigation_29; }
	inline void set_useRailsNavigation_29(bool value)
	{
		___useRailsNavigation_29 = value;
	}

	inline static int32_t get_offset_of_holdStartDuration_30() { return static_cast<int32_t>(offsetof(SimulatedGestureHand_tE8FD4F9A907C2909BB38CDEFDA82507DF0220BF4, ___holdStartDuration_30)); }
	inline float get_holdStartDuration_30() const { return ___holdStartDuration_30; }
	inline float* get_address_of_holdStartDuration_30() { return &___holdStartDuration_30; }
	inline void set_holdStartDuration_30(float value)
	{
		___holdStartDuration_30 = value;
	}

	inline static int32_t get_offset_of_navigationStartThreshold_31() { return static_cast<int32_t>(offsetof(SimulatedGestureHand_tE8FD4F9A907C2909BB38CDEFDA82507DF0220BF4, ___navigationStartThreshold_31)); }
	inline float get_navigationStartThreshold_31() const { return ___navigationStartThreshold_31; }
	inline float* get_address_of_navigationStartThreshold_31() { return &___navigationStartThreshold_31; }
	inline void set_navigationStartThreshold_31(float value)
	{
		___navigationStartThreshold_31 = value;
	}

	inline static int32_t get_offset_of_SelectDownStartTime_32() { return static_cast<int32_t>(offsetof(SimulatedGestureHand_tE8FD4F9A907C2909BB38CDEFDA82507DF0220BF4, ___SelectDownStartTime_32)); }
	inline float get_SelectDownStartTime_32() const { return ___SelectDownStartTime_32; }
	inline float* get_address_of_SelectDownStartTime_32() { return &___SelectDownStartTime_32; }
	inline void set_SelectDownStartTime_32(float value)
	{
		___SelectDownStartTime_32 = value;
	}

	inline static int32_t get_offset_of_holdInProgress_33() { return static_cast<int32_t>(offsetof(SimulatedGestureHand_tE8FD4F9A907C2909BB38CDEFDA82507DF0220BF4, ___holdInProgress_33)); }
	inline bool get_holdInProgress_33() const { return ___holdInProgress_33; }
	inline bool* get_address_of_holdInProgress_33() { return &___holdInProgress_33; }
	inline void set_holdInProgress_33(bool value)
	{
		___holdInProgress_33 = value;
	}

	inline static int32_t get_offset_of_manipulationInProgress_34() { return static_cast<int32_t>(offsetof(SimulatedGestureHand_tE8FD4F9A907C2909BB38CDEFDA82507DF0220BF4, ___manipulationInProgress_34)); }
	inline bool get_manipulationInProgress_34() const { return ___manipulationInProgress_34; }
	inline bool* get_address_of_manipulationInProgress_34() { return &___manipulationInProgress_34; }
	inline void set_manipulationInProgress_34(bool value)
	{
		___manipulationInProgress_34 = value;
	}

	inline static int32_t get_offset_of_navigationInProgress_35() { return static_cast<int32_t>(offsetof(SimulatedGestureHand_tE8FD4F9A907C2909BB38CDEFDA82507DF0220BF4, ___navigationInProgress_35)); }
	inline bool get_navigationInProgress_35() const { return ___navigationInProgress_35; }
	inline bool* get_address_of_navigationInProgress_35() { return &___navigationInProgress_35; }
	inline void set_navigationInProgress_35(bool value)
	{
		___navigationInProgress_35 = value;
	}

	inline static int32_t get_offset_of_currentRailsUsed_36() { return static_cast<int32_t>(offsetof(SimulatedGestureHand_tE8FD4F9A907C2909BB38CDEFDA82507DF0220BF4, ___currentRailsUsed_36)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_currentRailsUsed_36() const { return ___currentRailsUsed_36; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_currentRailsUsed_36() { return &___currentRailsUsed_36; }
	inline void set_currentRailsUsed_36(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___currentRailsUsed_36 = value;
	}

	inline static int32_t get_offset_of_currentPosition_37() { return static_cast<int32_t>(offsetof(SimulatedGestureHand_tE8FD4F9A907C2909BB38CDEFDA82507DF0220BF4, ___currentPosition_37)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_currentPosition_37() const { return ___currentPosition_37; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_currentPosition_37() { return &___currentPosition_37; }
	inline void set_currentPosition_37(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___currentPosition_37 = value;
	}

	inline static int32_t get_offset_of_cumulativeDelta_38() { return static_cast<int32_t>(offsetof(SimulatedGestureHand_tE8FD4F9A907C2909BB38CDEFDA82507DF0220BF4, ___cumulativeDelta_38)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_cumulativeDelta_38() const { return ___cumulativeDelta_38; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_cumulativeDelta_38() { return &___cumulativeDelta_38; }
	inline void set_cumulativeDelta_38(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___cumulativeDelta_38 = value;
	}

	inline static int32_t get_offset_of_currentGripPose_39() { return static_cast<int32_t>(offsetof(SimulatedGestureHand_tE8FD4F9A907C2909BB38CDEFDA82507DF0220BF4, ___currentGripPose_39)); }
	inline MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  get_currentGripPose_39() const { return ___currentGripPose_39; }
	inline MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5 * get_address_of_currentGripPose_39() { return &___currentGripPose_39; }
	inline void set_currentGripPose_39(MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  value)
	{
		___currentGripPose_39 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.KeyCode[]
struct KeyCodeU5BU5D_tB562CB75382DB3189A19A242436813151A742871  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// Microsoft.MixedReality.Toolkit.Input.KeyBinding_MouseButton[]
struct MouseButtonU5BU5D_t86FED480B92CB78192C6309F19A1BBDB0C7B2630  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[]
struct MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 * m_Items[1];

public:
	inline MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.MixedReality.Toolkit.Input.MixedRealityGestureMapping[]
struct MixedRealityGestureMappingU5BU5D_t5083898BA53AAB77B3DDE57E6F4F90B87B64C480  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MixedRealityGestureMapping_tC8B239DD943E25B72D110F4AC2589E62D1FCA0E1  m_Items[1];

public:
	inline MixedRealityGestureMapping_tC8B239DD943E25B72D110F4AC2589E62D1FCA0E1  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MixedRealityGestureMapping_tC8B239DD943E25B72D110F4AC2589E62D1FCA0E1 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MixedRealityGestureMapping_tC8B239DD943E25B72D110F4AC2589E62D1FCA0E1  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___description_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___action_2))->___description_2), (void*)NULL);
		#endif
	}
	inline MixedRealityGestureMapping_tC8B239DD943E25B72D110F4AC2589E62D1FCA0E1  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MixedRealityGestureMapping_tC8B239DD943E25B72D110F4AC2589E62D1FCA0E1 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MixedRealityGestureMapping_tC8B239DD943E25B72D110F4AC2589E62D1FCA0E1  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___description_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___action_2))->___description_2), (void*)NULL);
		#endif
	}
};
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose[]
struct MixedRealityPoseU5BU5D_t94ED3D45C754C96FE1E9BBD9C193E0DE07B32019  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  m_Items[1];

public:
	inline MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  m_Items[1];

public:
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Quaternion[]
struct QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  m_Items[1];

public:
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC9E7381F0B0B82E0320B2523835DAFC9CB3D1C8D_gshared (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Action`2<System.Int32Enum,System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mC3C27B3423D3657A42D7BD37C032EF41DC84D1E1_gshared (Action_2_t3ADE87F9806D5B490F7CE913AF2DC6E4D29A80C0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Int32Enum,System.Int32>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2_Invoke_m55A26522625C8A689F0C2BD0F4350BBEF4A682B7_gshared (Action_2_t3ADE87F9806D5B490F7CE913AF2DC6E4D29A80C0 * __this, int32_t ___arg10, int32_t ___arg21, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  Dictionary_2_get_Item_mC02CC26AB96011FE2A7CA9001136A49B1151E0FD_gshared (Dictionary_2_tB2D3942B8FBDE371EDC0CC7AC3685CF1E4BBBA64 * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_gshared (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, int32_t ___value0, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m1DE8FACEFD67657A641DA34A7AB32F7E8D19D278_gshared (Dictionary_2_tB2D3942B8FBDE371EDC0CC7AC3685CF1E4BBBA64 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m26920CBB1A46B9FD45F13F19CEE6A7363803A392_gshared (Dictionary_2_tB2D3942B8FBDE371EDC0CC7AC3685CF1E4BBBA64 * __this, int32_t ___key0, MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5 * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m9AAE6A75A883F0662033BE2801F4B6E441500E8D_gshared (Dictionary_2_tB2D3942B8FBDE371EDC0CC7AC3685CF1E4BBBA64 * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m8A5E863F6C065A19B2972E0EE446419BFA038A8A_gshared (Dictionary_2_tB2D3942B8FBDE371EDC0CC7AC3685CF1E4BBBA64 * __this, int32_t ___key0, MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mD5B125B9FE2236EFA0E63BAA0F8259F255274508_gshared (Dictionary_2_tB2D3942B8FBDE371EDC0CC7AC3685CF1E4BBBA64 * __this, int32_t ___key0, MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  ___value1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Take<System.Int32>(System.Collections.Generic.IEnumerable`1<!!0>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Take_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mE8BC7791AE1A1E1AFFDAA048E7CC47013E917908_gshared (RuntimeObject* ___source0, int32_t ___count1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Tuple`2<!!0,!!1> System.Tuple::Create<System.Int32Enum,System.Int32>(!!0,!!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_2_tBF1559BD3F5D13E2AA2F9BF3917393FBD4F1F22E * Tuple_Create_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m8852BF9C20EEF9FE531DEC9D9F55286152C0D898_gshared (int32_t ___item10, int32_t ___item21, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m71867F9FFBB49DE962FD0036368A0F6E87F30C90_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m9BDED5248054C2E86ECBA732FE7BCDAA32D0A118_gshared (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * __this, RuntimeObject * ___key0, int32_t ___value1, const RuntimeMethod* method);

// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Array System.Enum::GetValues(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray * Enum_GetValues_m8EEC6B32F297FDB2F7375DC8B197E0E1AB8643BD (Type_t * ___enumType0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.KeyBinding/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_mF6CE5D812D3240FE7BBC44302C56D9A29C58A46C (U3CU3Ec__DisplayClass5_0_tC1A31D4FB9553559F4B3444A282601230D2A2B43 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding/KeyType,System.Int32>,System.Int32>::.ctor()
inline void Dictionary_2__ctor_mA979515324E2B133B8CFCD62DA10847BE090CD10 (Dictionary_2_t2B763BD651C6B7C218A86E7023287E56619A9B5B * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2B763BD651C6B7C218A86E7023287E56619A9B5B *, const RuntimeMethod*))Dictionary_2__ctor_mC9E7381F0B0B82E0320B2523835DAFC9CB3D1C8D_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding/KeyType,System.Int32>>::.ctor()
inline void Dictionary_2__ctor_m9A850CF944EFC077C484C34175303760D287C13A (Dictionary_2_t412157312728038EF6AC6D6BC6EF689B3B165DEC * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t412157312728038EF6AC6D6BC6EF689B3B165DEC *, const RuntimeMethod*))Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Action`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding/KeyType,System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m7EFDA3782E695D1264DC6E3ABAF40CC141E3335F (Action_2_t143C93F5482D416C7FDF795DB5037E2DA6B062E6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t143C93F5482D416C7FDF795DB5037E2DA6B062E6 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mC3C27B3423D3657A42D7BD37C032EF41DC84D1E1_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding/KeyType,System.Int32>::Invoke(!0,!1)
inline void Action_2_Invoke_m09B90EAEEB1D33220740598452628C9221DFDDE6 (Action_2_t143C93F5482D416C7FDF795DB5037E2DA6B062E6 * __this, int32_t ___arg10, int32_t ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t143C93F5482D416C7FDF795DB5037E2DA6B062E6 *, int32_t, int32_t, const RuntimeMethod*))Action_2_Invoke_m55A26522625C8A689F0C2BD0F4350BBEF4A682B7_gshared)(__this, ___arg10, ___arg21, method);
}
// !0[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared)(__this, method);
}
// Microsoft.MixedReality.Toolkit.Input.KeyBinding/KeyType Microsoft.MixedReality.Toolkit.Input.KeyBinding::get_BindingType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyBinding_get_BindingType_m3E33960732F90AB4F83831C19F820A2CA1220448_inline (KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.Input.KeyBinding::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KeyBinding_ToString_mF29E1518CCD0A18DDA6F753E817F23408B7DF185 (KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.KeyBinding::TryGetKeyCode(UnityEngine.KeyCode&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KeyBinding_TryGetKeyCode_mD3A7D64414945CDB6AA3A004573E8F28BA07C9D6 (KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B * __this, int32_t* ___keyCode0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.KeyBinding::TryGetMouseButton(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KeyBinding_TryGetMouseButton_mA1E8CD93C8FC3AD4A2AC35E2DFD233A85514A28E (KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B * __this, int32_t* ___mouseButton0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.KeyBinding::TryGetMouseButton(Microsoft.MixedReality.Toolkit.Input.KeyBinding/MouseButton&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KeyBinding_TryGetMouseButton_m4B3E7A3F0E00AA6C0DAF06EFE1C31E9182805516 (KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B * __this, int32_t* ___mouseButton0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.KeyBinding Microsoft.MixedReality.Toolkit.Input.KeyBinding::FromMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B  KeyBinding_FromMouseButton_m4CB79450541AD02AD344C208A240C5DC9C160EDE (int32_t ___mouseButton0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1 (int32_t ___button0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429 (int32_t ___key0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3 (int32_t ___button0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220 (int32_t ___key0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_m2BA562F8C4FE8364EEC93970093E776371DF4022 (int32_t ___button0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyUp_mDE9D56FE11715566D4D54FD96F8E1EF9734D225F (int32_t ___key0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.KeyBinding Microsoft.MixedReality.Toolkit.Input.KeyBinding::FromMouseButton(Microsoft.MixedReality.Toolkit.Input.KeyBinding/MouseButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B  KeyBinding_FromMouseButton_m7CB46FC8F1FE147C8C94310335DC5B4279813750 (int32_t ___mouseButton0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.KeyBinding Microsoft.MixedReality.Toolkit.Input.KeyBinding::FromKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B  KeyBinding_FromKey_mED732886A0D8C3138FE22BEC98964C48AAFEF491 (int32_t ___keyCode0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMixedRealityProfile__ctor_mF22E85943179AF29010F40443EAFE26A592F16D2 (BaseMixedRealityProfile_t9B92D8A7CB0AE5AF973870EDF7DE2BC12E5FA4E5 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::get_ZeroIdentity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  MixedRealityPose_get_ZeroIdentity_m7DFFCF17695B53E77ABCC4035C292C405996350E_inline (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHand::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedHand__ctor_m31621E2759004ECF6C2B0CAAF93035C3C3E2A596 (SimulatedHand_tC79023B162FCFC9F05824CBBE1DCFBC2373217E7 * __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* ___interactions3, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::.ctor(System.UInt32,System.String,Microsoft.MixedReality.Toolkit.Utilities.AxisType,Microsoft.MixedReality.Toolkit.Input.DeviceInputType,System.String,System.String,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityInteractionMapping__ctor_m927CB3497C64EA1EE7EF2FAEDC15A611FA4D1571 (MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 * __this, uint32_t ___id0, String_t* ___description1, int32_t ___axisType2, int32_t ___inputType3, String_t* ___axisCodeX4, String_t* ___axisCodeY5, bool ___invertXAxis6, bool ___invertYAxis7, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::get_Item(!0)
inline MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  Dictionary_2_get_Item_m1F8B2A38633AAAAEDFC64FC9113F2270BB32D5B9 (Dictionary_2_t2608D8F85D3104F212EC3BC05E54C1515108B68E * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  (*) (Dictionary_2_t2608D8F85D3104F212EC3BC05E54C1515108B68E *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_mC02CC26AB96011FE2A7CA9001136A49B1151E0FD_gshared)(__this, ___key0, method);
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::get_Position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  MixedRealityPose_get_Position_mA85AA29A7C35C13E7DDDCF058D1CB4F0371F6A08_inline (MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseController::set_IsRotationAvailable(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseController_set_IsRotationAvailable_m927864ED0861611B5CD01221F9EEED6174AEE9F2_inline (BaseController_tCABA601990B425FA3A315FAECE1332E0005DC316 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseController::set_IsPositionAvailable(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseController_set_IsPositionAvailable_m213EE7DA83AD144F45B886D80A9501595AF4746F_inline (BaseController_tCABA601990B425FA3A315FAECE1332E0005DC316 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::get_IsPositionAvailable()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BaseController_get_IsPositionAvailable_m1F93CB6D96DEB05F78FD1CCE4B0FE448D3127CC4_inline (BaseController_tCABA601990B425FA3A315FAECE1332E0005DC316 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.HandRay Microsoft.MixedReality.Toolkit.Input.BaseHand::get_HandRay()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HandRay_tD9B46FBC0154A56DFD6DA889BCA8A87BE57B9C37 * BaseHand_get_HandRay_mF53D0155F4C9569D0D54506F8E28ED5267706F55_inline (BaseHand_t33C08C0C3F8EDE4D4BA9ABFE981707C71208C1A6 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.BaseHand::GetPalmNormal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  BaseHand_GetPalmNormal_m6FC4EB88D79308214465672CE5D4DE5CEBD5105F (BaseHand_t33C08C0C3F8EDE4D4BA9ABFE981707C71208C1A6 * __this, const RuntimeMethod* method);
// UnityEngine.Camera Microsoft.MixedReality.Toolkit.Utilities.CameraCache::get_Main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * CameraCache_get_Main_mE989C7A267DEEBFA4B04569521133A2D566B7D5B (const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.BaseController::get_ControllerHandedness()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t BaseController_get_ControllerHandedness_m3D9C7DE0BE3F9F1C81C49826D67CF21175684F1A_inline (BaseController_tCABA601990B425FA3A315FAECE1332E0005DC316 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.HandRay::Update(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Transform,Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandRay_Update_mE0AEE9419FBF676D6152BFFDD09177F92F931017 (HandRay_tD9B46FBC0154A56DFD6DA889BCA8A87BE57B9C37 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___handPosition0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___palmNormal1, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___headTransform2, uint8_t ___sourceHandedness3, const RuntimeMethod* method);
// UnityEngine.Ray Microsoft.MixedReality.Toolkit.Input.HandRay::get_Ray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  HandRay_get_Ray_mC00BCB5EEFE8C3C53EDEB426E629661888327248 (HandRay_tD9B46FBC0154A56DFD6DA889BCA8A87BE57B9C37 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Ray_get_origin_m0C1B2BFF99CDF5231AC29AC031C161F55B53C1D0 (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::set_Position(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityPose_set_Position_mB9AD9342E3AEAFC264C2196FFE6551CDA6F6178B_inline (MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Ray_get_direction_m2B31F86F19B64474A901B28D3808011AE7A13EFC (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_LookRotation_m1B0BEBEBCC384324A6771B9EAC89761F73E1D6BF (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forward0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::set_Rotation(UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityPose_set_Rotation_mDB92DA586E7A05D81A035FFFAA972E521EA68D23_inline (MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::op_Inequality(Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityPose_op_Inequality_mA0A1036147AD7A39F8D9D0974A20ABC44318D7CA (MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  ___left0, MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  ___right1, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::get_IsRotationAvailable()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BaseController_get_IsRotationAvailable_m5F7ECD00BDFD4A190C047F24BE5D2DFCF5FC0E28_inline (BaseController_tCABA601990B425FA3A315FAECE1332E0005DC316 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.CoreServices::get_InputSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreServices_get_InputSystem_m734103F090144FE710940E31C6B3581D15572FB0 (const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.BaseController::get_InputSource()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BaseController_get_InputSource_m6E124D758E6373E7E1C498AE986C460CCDC651E3_inline (BaseController_tCABA601990B425FA3A315FAECE1332E0005DC316 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::get_Interactions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* BaseController_get_Interactions_m8C6000FF0F70063C616791046B0B93CE452AFC29_inline (BaseController_tCABA601990B425FA3A315FAECE1332E0005DC316 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.DeviceInputType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_InputType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityInteractionMapping_get_InputType_mB3BB9A8477E555DAFFE3F1A624448D53FC4102E6_inline (MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::set_PoseData(Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityInteractionMapping_set_PoseData_mAE3A962D306D4CCA9228111491E8AA96D523F44D (MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 * __this, MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_Changed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityInteractionMapping_get_Changed_mFDC721362095F9525C839C0BA20EF8B9A55A37EC (MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_MixedRealityInputAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  MixedRealityInteractionMapping_get_MixedRealityInputAction_mB9F6AA03D64CE6F746424699CD1F4993446CE41A_inline (MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedHandData::get_IsPinching()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SimulatedHandData_get_IsPinching_mA3A8D340B77A9643470DD4426A818E4D09DDA96F_inline (SimulatedHandData_t27280EA369E2A116C61830482B52B31ABA3F39CA * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::set_BoolData(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityInteractionMapping_set_BoolData_mD726B443F0E196EC9C7D78DC3EBB5FA3BD80741C (MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_BoolData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityInteractionMapping_get_BoolData_m9B49EA23CE1DD08217097A26D1D5A89EAD2645D6_inline (MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
inline void Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184 (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, int32_t, const RuntimeMethod*))Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_gshared)(__this, ___value0, method);
}
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
inline int32_t Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_gshared_inline)(__this, method);
}
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, const RuntimeMethod*))Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline)(__this, method);
}
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::get_None()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  MixedRealityInputAction_get_None_mE8893070C64BA6EA2339B7D0C413DE755D7D4D6E_inline (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB (const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::get_GesturesProfile()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityGesturesProfile_tA3455FE721279843B94D506C063398F644EEA005 * MixedRealityInputSystemProfile_get_GesturesProfile_m475DF784CE48F155004368AD88E7CA6CD64F3D3E_inline (MixedRealityInputSystemProfile_t6086D1D813224695CFB52FA000EDC2A6B6125255 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityGestureMapping[] Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile::get_Gestures()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityGestureMappingU5BU5D_t5083898BA53AAB77B3DDE57E6F4F90B87B64C480* MixedRealityGesturesProfile_get_Gestures_m03E4FD32A250FEDFA36E226832F3619B840937BC_inline (MixedRealityGesturesProfile_tA3455FE721279843B94D506C063398F644EEA005 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.GestureInputType Microsoft.MixedReality.Toolkit.Input.MixedRealityGestureMapping::get_GestureType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityGestureMapping_get_GestureType_m920653F9DF61975597BB33ECEE65E3CF00E3FE0A_inline (MixedRealityGestureMapping_tC8B239DD943E25B72D110F4AC2589E62D1FCA0E1 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityGestureMapping::get_Action()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  MixedRealityGestureMapping_get_Action_m5A65903158DF4543D9CAA4A5EDF2D4E6AEB31CEF_inline (MixedRealityGestureMapping_tC8B239DD943E25B72D110F4AC2589E62D1FCA0E1 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile::get_UseRailsNavigation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityGesturesProfile_get_UseRailsNavigation_m0A74F0125D179A02EBB612502429FD5A01067504_inline (MixedRealityGesturesProfile_tA3455FE721279843B94D506C063398F644EEA005 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_HoldStartDuration()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_HoldStartDuration_m381060A249D46CA0AA4F602CC104BE888EA2B1A2_inline (MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_NavigationStartThreshold()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_NavigationStartThreshold_m14EF89E8C3B57F9B7C85AAB0D7DC3D4F2FC966B1_inline (MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::EnsureProfileSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedGestureHand_EnsureProfileSettings_m645609FE30D6AFD16D4A81E3F4F020E07A27FC40 (SimulatedGestureHand_tE8FD4F9A907C2909BB38CDEFDA82507DF0220BF4 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844 (const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryCompleteSelect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryCompleteSelect_m2A66192E4D37C99E5A2E3BB6546D2057FD0ED03B (SimulatedGestureHand_tE8FD4F9A907C2909BB38CDEFDA82507DF0220BF4 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryCompleteHold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryCompleteHold_m50E0ACFD41E1F9CE7D1CDD210E0C9A2390FCC7DE (SimulatedGestureHand_tE8FD4F9A907C2909BB38CDEFDA82507DF0220BF4 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryCompleteManipulation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryCompleteManipulation_mAA71EE1BC69BF84C0417D608BC4EBDFD9BAC4A57 (SimulatedGestureHand_tE8FD4F9A907C2909BB38CDEFDA82507DF0220BF4 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryCompleteNavigation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryCompleteNavigation_m19847287F11D2B4B28B37F6DB55C8D9AEC709D7E (SimulatedGestureHand_tE8FD4F9A907C2909BB38CDEFDA82507DF0220BF4 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::UpdateManipulation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedGestureHand_UpdateManipulation_m37C149BAC4A5D117B6E4C1028F6F47E051E132F3 (SimulatedGestureHand_tE8FD4F9A907C2909BB38CDEFDA82507DF0220BF4 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::UpdateNavigation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedGestureHand_UpdateNavigation_mAA5B87F28579D8AFEAADB4133CC1BFB944D66AE6 (SimulatedGestureHand_tE8FD4F9A907C2909BB38CDEFDA82507DF0220BF4 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryCancelHold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryCancelHold_m4BE99AA5CCE4F8030665DAD32A500C86522487D0 (SimulatedGestureHand_tE8FD4F9A907C2909BB38CDEFDA82507DF0220BF4 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryStartNavigation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryStartNavigation_mACB9C112AA889F96A59A3F2FB279AAF1C8CDA41E (SimulatedGestureHand_tE8FD4F9A907C2909BB38CDEFDA82507DF0220BF4 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryStartManipulation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryStartManipulation_m35B2A09F0F43B2972E5E3AF30D015D88B9D55991 (SimulatedGestureHand_tE8FD4F9A907C2909BB38CDEFDA82507DF0220BF4 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryStartHold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryStartHold_m29E609DDD87D768B43AAF63CF0262D580CB4D76B (SimulatedGestureHand_tE8FD4F9A907C2909BB38CDEFDA82507DF0220BF4 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::UpdateNavigationRails()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedGestureHand_UpdateNavigationRails_m3A79B583B3AA987AB1F15654F6D0E34273281E5B (SimulatedGestureHand_tE8FD4F9A907C2909BB38CDEFDA82507DF0220BF4 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::get_NavigationDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  SimulatedGestureHand_get_NavigationDelta_m6A6065F8B89330B67E758E062CE189DBAC96B3DD (SimulatedGestureHand_tE8FD4F9A907C2909BB38CDEFDA82507DF0220BF4 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::.ctor()
inline void Dictionary_2__ctor_m98FA9A5E83858B1899CF3494493ACF76DE701543 (Dictionary_2_t2608D8F85D3104F212EC3BC05E54C1515108B68E * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2608D8F85D3104F212EC3BC05E54C1515108B68E *, const RuntimeMethod*))Dictionary_2__ctor_m1DE8FACEFD67657A641DA34A7AB32F7E8D19D278_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseHand::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseHand__ctor_m28627DAE72EC3F85D789B7B87BC9A0A58C4B956A (BaseHand_t33C08C0C3F8EDE4D4BA9ABFE981707C71208C1A6 * __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* ___interactions3, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m68CBDA00749C9C3E905574F6A9F8A0D17BB0D04D (Dictionary_2_t2608D8F85D3104F212EC3BC05E54C1515108B68E * __this, int32_t ___key0, MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5 * ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t2608D8F85D3104F212EC3BC05E54C1515108B68E *, int32_t, MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5 *, const RuntimeMethod*))Dictionary_2_TryGetValue_m26920CBB1A46B9FD45F13F19CEE6A7363803A392_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_mB197921944A9736477D409029EC22B8F4D1D216B (Dictionary_2_t2608D8F85D3104F212EC3BC05E54C1515108B68E * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t2608D8F85D3104F212EC3BC05E54C1515108B68E *, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m9AAE6A75A883F0662033BE2801F4B6E441500E8D_gshared)(__this, ___key0, method);
}
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose[] Microsoft.MixedReality.Toolkit.Input.SimulatedHandData::get_Joints()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityPoseU5BU5D_t94ED3D45C754C96FE1E9BBD9C193E0DE07B32019* SimulatedHandData_get_Joints_m479428796C958C982273121FDF3A451ED5B0AF67_inline (SimulatedHandData_t27280EA369E2A116C61830482B52B31ABA3F39CA * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::Add(!0,!1)
inline void Dictionary_2_Add_mFA80AE1C547296745FC02D4E0680A419B39EFAE7 (Dictionary_2_t2608D8F85D3104F212EC3BC05E54C1515108B68E * __this, int32_t ___key0, MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2608D8F85D3104F212EC3BC05E54C1515108B68E *, int32_t, MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5 , const RuntimeMethod*))Dictionary_2_Add_m8A5E863F6C065A19B2972E0EE446419BFA038A8A_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m38333A17CBE3638107B56338BB2FD1E69D517ADE (Dictionary_2_t2608D8F85D3104F212EC3BC05E54C1515108B68E * __this, int32_t ___key0, MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2608D8F85D3104F212EC3BC05E54C1515108B68E *, int32_t, MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5 , const RuntimeMethod*))Dictionary_2_set_Item_mD5B125B9FE2236EFA0E63BAA0F8259F255274508_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseHand::UpdateVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseHand_UpdateVelocity_m8BE0D51EB4A032F98F9A58360F19F5C995FD5BD7 (BaseHand_t33C08C0C3F8EDE4D4BA9ABFE981707C71208C1A6 * __this, const RuntimeMethod* method);
// System.String[] System.Enum::GetNames(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* Enum_GetNames_m49110673091D017F43CF0F5F7AD9B7730306D2E8 (Type_t * ___enumType0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHandData/HandJointDataGenerator::Invoke(Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandJointDataGenerator_Invoke_m8A41F2C64FC2C2CD90C6AA2BD2E1C56CD507A5E2 (HandJointDataGenerator_tACFADDDDE2346DC5682A95B8E6B8C3299B06F37B * __this, MixedRealityPoseU5BU5D_t94ED3D45C754C96FE1E9BBD9C193E0DE07B32019* ___jointPoses0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F (RuntimeArray * ___array0, RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  ___fldHandle1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Take<System.Int32>(System.Collections.Generic.IEnumerable`1<!!0>,System.Int32)
inline RuntimeObject* Enumerable_Take_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mE8BC7791AE1A1E1AFFDAA048E7CC47013E917908 (RuntimeObject* ___source0, int32_t ___count1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, int32_t, const RuntimeMethod*))Enumerable_Take_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mE8BC7791AE1A1E1AFFDAA048E7CC47013E917908_gshared)(___source0, ___count1, method);
}
// System.Int32 System.Linq.Enumerable::Sum(System.Collections.Generic.IEnumerable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerable_Sum_m6CFC8CEAC70AE3C469A5D1993FAF8EEEC6A06FB5 (RuntimeObject* ___source0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.SimulatedHandUtils::GetPalmRightVector(Microsoft.MixedReality.Toolkit.Utilities.Handedness,UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  SimulatedHandUtils_GetPalmRightVector_m2EDCFDE81C5DFEE5695D826FAD0D5965062AB91B (uint8_t ___handedness0, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___jointPositions1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Cross_m63414F0C545EBB616F339FF8830D37F9230736A4 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_LookRotation_m8A7DB5BDBC361586191AB67ACF857F46160EE3F1 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forward0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upwards1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_AngleAxis_m4644D20F58ADF03E9EA297CB4A845E5BCDA1E398 (float ___angle0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___axis1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___lhs0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.SimulatedHandUtils::GetPalmForwardVector(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  SimulatedHandUtils_GetPalmForwardVector_m40A70007E66B6F844178BD62CD716B56CB16147E (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___jointPositions0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.SimulatedHandUtils::GetPalmUpVector(Microsoft.MixedReality.Toolkit.Utilities.Handedness,UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  SimulatedHandUtils_GetPalmUpVector_mE30E6E29FDCDC5164824BC7021BFCE7751D7E1EC (uint8_t ___handedness0, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___jointPositions1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Tuple`2<!!0,!!1> System.Tuple::Create<Microsoft.MixedReality.Toolkit.Input.KeyBinding/KeyType,System.Int32>(!!0,!!1)
inline Tuple_2_t1C7D0D1C413A36A4FEB4C9441E39E7E0F615B1F8 * Tuple_Create_TisKeyType_t309E3645240CFF657823B6434AD784E18BBA0195_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m36E71296DE060F86F936B732420267ACB8AA06FC (int32_t ___item10, int32_t ___item21, const RuntimeMethod* method)
{
	return ((  Tuple_2_t1C7D0D1C413A36A4FEB4C9441E39E7E0F615B1F8 * (*) (int32_t, int32_t, const RuntimeMethod*))Tuple_Create_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m8852BF9C20EEF9FE531DEC9D9F55286152C0D898_gshared)(___item10, ___item21, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding/KeyType,System.Int32>>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m98F68CFDCFFBDAF167FC9B2DB67476EEB0F13AA3 (Dictionary_2_t412157312728038EF6AC6D6BC6EF689B3B165DEC * __this, int32_t ___key0, Tuple_2_t1C7D0D1C413A36A4FEB4C9441E39E7E0F615B1F8 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t412157312728038EF6AC6D6BC6EF689B3B165DEC *, int32_t, Tuple_2_t1C7D0D1C413A36A4FEB4C9441E39E7E0F615B1F8 *, const RuntimeMethod*))Dictionary_2_set_Item_m71867F9FFBB49DE962FD0036368A0F6E87F30C90_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding/KeyType,System.Int32>,System.Int32>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mF87A3312B7715B9AE3211DAD83A237EDBA07843D (Dictionary_2_t2B763BD651C6B7C218A86E7023287E56619A9B5B * __this, Tuple_2_t1C7D0D1C413A36A4FEB4C9441E39E7E0F615B1F8 * ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2B763BD651C6B7C218A86E7023287E56619A9B5B *, Tuple_2_t1C7D0D1C413A36A4FEB4C9441E39E7E0F615B1F8 *, int32_t, const RuntimeMethod*))Dictionary_2_set_Item_m9BDED5248054C2E86ECBA732FE7BCDAA32D0A118_gshared)(__this, ___key0, ___value1, method);
}
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Input.KeyBinding::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyBinding__cctor_mAF5ABF11E6BA4031E217C268B3F74A17F9F81EB2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyBinding__cctor_mAF5ABF11E6BA4031E217C268B3F74A17F9F81EB2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	KeyCodeU5BU5D_tB562CB75382DB3189A19A242436813151A742871* V_0 = NULL;
	U3CU3Ec__DisplayClass5_0_tC1A31D4FB9553559F4B3444A282601230D2A2B43 * V_1 = NULL;
	Action_2_t143C93F5482D416C7FDF795DB5037E2DA6B062E6 * V_2 = NULL;
	MouseButtonU5BU5D_t86FED480B92CB78192C6309F19A1BBDB0C7B2630* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	KeyCodeU5BU5D_tB562CB75382DB3189A19A242436813151A742871* V_6 = NULL;
	int32_t V_7 = 0;
	{
		// KeyCode[] KeyCodeValues = (KeyCode[])Enum.GetValues(typeof(KeyCode));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		RuntimeArray * L_2 = Enum_GetValues_m8EEC6B32F297FDB2F7375DC8B197E0E1AB8643BD(L_1, /*hidden argument*/NULL);
		V_0 = ((KeyCodeU5BU5D_tB562CB75382DB3189A19A242436813151A742871*)Castclass((RuntimeObject*)L_2, KeyCodeU5BU5D_tB562CB75382DB3189A19A242436813151A742871_il2cpp_TypeInfo_var));
		// MouseButton[] MouseButtonValues = (MouseButton[])Enum.GetValues(typeof(MouseButton));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (MouseButton_t484F80A7389EA52C4FA84647C117C61482EA75A0_0_0_0_var) };
		Type_t * L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_3, /*hidden argument*/NULL);
		RuntimeArray * L_5 = Enum_GetValues_m8EEC6B32F297FDB2F7375DC8B197E0E1AB8643BD(L_4, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass5_0_tC1A31D4FB9553559F4B3444A282601230D2A2B43 * L_6 = (U3CU3Ec__DisplayClass5_0_tC1A31D4FB9553559F4B3444A282601230D2A2B43 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_tC1A31D4FB9553559F4B3444A282601230D2A2B43_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass5_0__ctor_mF6CE5D812D3240FE7BBC44302C56D9A29C58A46C(L_6, /*hidden argument*/NULL);
		V_1 = L_6;
		// KeyBindingToEnumMap = new Dictionary<Tuple<KeyType, int>, int>();
		Dictionary_2_t2B763BD651C6B7C218A86E7023287E56619A9B5B * L_7 = (Dictionary_2_t2B763BD651C6B7C218A86E7023287E56619A9B5B *)il2cpp_codegen_object_new(Dictionary_2_t2B763BD651C6B7C218A86E7023287E56619A9B5B_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA979515324E2B133B8CFCD62DA10847BE090CD10(L_7, /*hidden argument*/Dictionary_2__ctor_mA979515324E2B133B8CFCD62DA10847BE090CD10_RuntimeMethod_var);
		((KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B_StaticFields*)il2cpp_codegen_static_fields_for(KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B_il2cpp_TypeInfo_var))->set_KeyBindingToEnumMap_1(L_7);
		// EnumToKeyBindingMap = new Dictionary<int, Tuple<KeyType, int>>();
		Dictionary_2_t412157312728038EF6AC6D6BC6EF689B3B165DEC * L_8 = (Dictionary_2_t412157312728038EF6AC6D6BC6EF689B3B165DEC *)il2cpp_codegen_object_new(Dictionary_2_t412157312728038EF6AC6D6BC6EF689B3B165DEC_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m9A850CF944EFC077C484C34175303760D287C13A(L_8, /*hidden argument*/Dictionary_2__ctor_m9A850CF944EFC077C484C34175303760D287C13A_RuntimeMethod_var);
		((KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B_StaticFields*)il2cpp_codegen_static_fields_for(KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B_il2cpp_TypeInfo_var))->set_EnumToKeyBindingMap_2(L_8);
		// List<string> names = new List<string>();
		U3CU3Ec__DisplayClass5_0_tC1A31D4FB9553559F4B3444A282601230D2A2B43 * L_9 = V_1;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_10 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_10, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		NullCheck(L_9);
		L_9->set_names_0(L_10);
		// int index = 0;
		U3CU3Ec__DisplayClass5_0_tC1A31D4FB9553559F4B3444A282601230D2A2B43 * L_11 = V_1;
		NullCheck(L_11);
		L_11->set_index_1(0);
		// Action<KeyType, int> AddEnumValue = (bindingType, code) =>
		// {
		//     var kb = new KeyBinding() { bindingType=bindingType, code=code };
		//     names.Add(kb.ToString());
		//     EnumToKeyBindingMap[index] = Tuple.Create(bindingType, code);
		//     KeyBindingToEnumMap[Tuple.Create(bindingType, code)] = index;
		// 
		//     ++index;
		// };
		U3CU3Ec__DisplayClass5_0_tC1A31D4FB9553559F4B3444A282601230D2A2B43 * L_12 = V_1;
		Action_2_t143C93F5482D416C7FDF795DB5037E2DA6B062E6 * L_13 = (Action_2_t143C93F5482D416C7FDF795DB5037E2DA6B062E6 *)il2cpp_codegen_object_new(Action_2_t143C93F5482D416C7FDF795DB5037E2DA6B062E6_il2cpp_TypeInfo_var);
		Action_2__ctor_m7EFDA3782E695D1264DC6E3ABAF40CC141E3335F(L_13, L_12, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass5_0_U3C_cctorU3Eb__0_m7CEEFA179C4DD450C22789D4F22B802D4D9E274F_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m7EFDA3782E695D1264DC6E3ABAF40CC141E3335F_RuntimeMethod_var);
		V_2 = L_13;
		// AddEnumValue(KeyType.None, 0);
		Action_2_t143C93F5482D416C7FDF795DB5037E2DA6B062E6 * L_14 = V_2;
		NullCheck(L_14);
		Action_2_Invoke_m09B90EAEEB1D33220740598452628C9221DFDDE6(L_14, 0, 0, /*hidden argument*/Action_2_Invoke_m09B90EAEEB1D33220740598452628C9221DFDDE6_RuntimeMethod_var);
		// foreach (MouseButton mb in MouseButtonValues)
		V_3 = ((MouseButtonU5BU5D_t86FED480B92CB78192C6309F19A1BBDB0C7B2630*)Castclass((RuntimeObject*)L_5, MouseButtonU5BU5D_t86FED480B92CB78192C6309F19A1BBDB0C7B2630_il2cpp_TypeInfo_var));
		V_4 = 0;
		goto IL_0085;
	}

IL_0070:
	{
		// foreach (MouseButton mb in MouseButtonValues)
		MouseButtonU5BU5D_t86FED480B92CB78192C6309F19A1BBDB0C7B2630* L_15 = V_3;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		int32_t L_18 = (int32_t)(L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_5 = L_18;
		// AddEnumValue(KeyType.Mouse, (int)mb);
		Action_2_t143C93F5482D416C7FDF795DB5037E2DA6B062E6 * L_19 = V_2;
		int32_t L_20 = V_5;
		NullCheck(L_19);
		Action_2_Invoke_m09B90EAEEB1D33220740598452628C9221DFDDE6(L_19, 1, L_20, /*hidden argument*/Action_2_Invoke_m09B90EAEEB1D33220740598452628C9221DFDDE6_RuntimeMethod_var);
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_0085:
	{
		// foreach (MouseButton mb in MouseButtonValues)
		int32_t L_22 = V_4;
		MouseButtonU5BU5D_t86FED480B92CB78192C6309F19A1BBDB0C7B2630* L_23 = V_3;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))))))
		{
			goto IL_0070;
		}
	}
	{
		// foreach (KeyCode kc in KeyCodeValues)
		KeyCodeU5BU5D_tB562CB75382DB3189A19A242436813151A742871* L_24 = V_0;
		V_6 = L_24;
		V_4 = 0;
		goto IL_00aa;
	}

IL_0094:
	{
		// foreach (KeyCode kc in KeyCodeValues)
		KeyCodeU5BU5D_tB562CB75382DB3189A19A242436813151A742871* L_25 = V_6;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		int32_t L_28 = (int32_t)(L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_7 = L_28;
		// AddEnumValue(KeyType.Key, (int)kc);
		Action_2_t143C93F5482D416C7FDF795DB5037E2DA6B062E6 * L_29 = V_2;
		int32_t L_30 = V_7;
		NullCheck(L_29);
		Action_2_Invoke_m09B90EAEEB1D33220740598452628C9221DFDDE6(L_29, 2, L_30, /*hidden argument*/Action_2_Invoke_m09B90EAEEB1D33220740598452628C9221DFDDE6_RuntimeMethod_var);
		int32_t L_31 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
	}

IL_00aa:
	{
		// foreach (KeyCode kc in KeyCodeValues)
		int32_t L_32 = V_4;
		KeyCodeU5BU5D_tB562CB75382DB3189A19A242436813151A742871* L_33 = V_6;
		NullCheck(L_33);
		if ((((int32_t)L_32) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length)))))))
		{
			goto IL_0094;
		}
	}
	{
		// AllCodeNames = names.ToArray();
		U3CU3Ec__DisplayClass5_0_tC1A31D4FB9553559F4B3444A282601230D2A2B43 * L_34 = V_1;
		NullCheck(L_34);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_35 = L_34->get_names_0();
		NullCheck(L_35);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_36 = List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB(L_35, /*hidden argument*/List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB_RuntimeMethod_var);
		((KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B_StaticFields*)il2cpp_codegen_static_fields_for(KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B_il2cpp_TypeInfo_var))->set_AllCodeNames_0(L_36);
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.KeyBinding_KeyType Microsoft.MixedReality.Toolkit.Input.KeyBinding::get_BindingType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KeyBinding_get_BindingType_m3E33960732F90AB4F83831C19F820A2CA1220448 (KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B * __this, const RuntimeMethod* method)
{
	{
		// public KeyType BindingType => bindingType;
		int32_t L_0 = __this->get_bindingType_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t KeyBinding_get_BindingType_m3E33960732F90AB4F83831C19F820A2CA1220448_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B * _thisAdjusted = reinterpret_cast<KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B *>(__this + _offset);
	return KeyBinding_get_BindingType_m3E33960732F90AB4F83831C19F820A2CA1220448_inline(_thisAdjusted, method);
}
// System.String Microsoft.MixedReality.Toolkit.Input.KeyBinding::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KeyBinding_ToString_mF29E1518CCD0A18DDA6F753E817F23408B7DF185 (KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyBinding_ToString_mF29E1518CCD0A18DDA6F753E817F23408B7DF185_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// string s = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// s += bindingType.ToString();
		String_t* L_0 = V_0;
		int32_t* L_1 = __this->get_address_of_bindingType_3();
		RuntimeObject * L_2 = Box(KeyType_t309E3645240CFF657823B6434AD784E18BBA0195_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		*L_1 = *(int32_t*)UnBox(L_2);
		String_t* L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_0, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// switch (bindingType)
		int32_t L_5 = __this->get_bindingType_3();
		V_1 = L_5;
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)1)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_7 = V_1;
		if ((!(((uint32_t)L_7) == ((uint32_t)2))))
		{
			goto IL_006f;
		}
	}
	{
		// s += ": " + ((KeyCode)code).ToString();
		String_t* L_8 = V_0;
		int32_t L_9 = __this->get_code_4();
		V_2 = L_9;
		RuntimeObject * L_10 = Box(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_il2cpp_TypeInfo_var, (&V_2));
		NullCheck(L_10);
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_10);
		V_2 = *(int32_t*)UnBox(L_10);
		String_t* L_12 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_8, _stringLiteral1168E92C164109D6220480DEDA987085B2A21155, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		// break;
		goto IL_006f;
	}

IL_004f:
	{
		// s += ": " + ((MouseButton)code).ToString();
		String_t* L_13 = V_0;
		int32_t L_14 = __this->get_code_4();
		V_3 = L_14;
		RuntimeObject * L_15 = Box(MouseButton_t484F80A7389EA52C4FA84647C117C61482EA75A0_il2cpp_TypeInfo_var, (&V_3));
		NullCheck(L_15);
		String_t* L_16 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_15);
		V_3 = *(int32_t*)UnBox(L_15);
		String_t* L_17 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_13, _stringLiteral1168E92C164109D6220480DEDA987085B2A21155, L_16, /*hidden argument*/NULL);
		V_0 = L_17;
	}

IL_006f:
	{
		// return s;
		String_t* L_18 = V_0;
		return L_18;
	}
}
IL2CPP_EXTERN_C  String_t* KeyBinding_ToString_mF29E1518CCD0A18DDA6F753E817F23408B7DF185_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B * _thisAdjusted = reinterpret_cast<KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B *>(__this + _offset);
	return KeyBinding_ToString_mF29E1518CCD0A18DDA6F753E817F23408B7DF185(_thisAdjusted, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.KeyBinding::TryGetKeyCode(UnityEngine.KeyCode&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KeyBinding_TryGetKeyCode_mD3A7D64414945CDB6AA3A004573E8F28BA07C9D6 (KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B * __this, int32_t* ___keyCode0, const RuntimeMethod* method)
{
	{
		// keyCode = (KeyCode)code;
		int32_t* L_0 = ___keyCode0;
		int32_t L_1 = __this->get_code_4();
		*((int32_t*)L_0) = (int32_t)L_1;
		// return bindingType == KeyType.Key;
		int32_t L_2 = __this->get_bindingType_3();
		return (bool)((((int32_t)L_2) == ((int32_t)2))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool KeyBinding_TryGetKeyCode_mD3A7D64414945CDB6AA3A004573E8F28BA07C9D6_AdjustorThunk (RuntimeObject * __this, int32_t* ___keyCode0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B * _thisAdjusted = reinterpret_cast<KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B *>(__this + _offset);
	return KeyBinding_TryGetKeyCode_mD3A7D64414945CDB6AA3A004573E8F28BA07C9D6(_thisAdjusted, ___keyCode0, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.KeyBinding::TryGetMouseButton(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KeyBinding_TryGetMouseButton_mA1E8CD93C8FC3AD4A2AC35E2DFD233A85514A28E (KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B * __this, int32_t* ___mouseButton0, const RuntimeMethod* method)
{
	{
		// mouseButton = code;
		int32_t* L_0 = ___mouseButton0;
		int32_t L_1 = __this->get_code_4();
		*((int32_t*)L_0) = (int32_t)L_1;
		// return bindingType == KeyType.Mouse;
		int32_t L_2 = __this->get_bindingType_3();
		return (bool)((((int32_t)L_2) == ((int32_t)1))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool KeyBinding_TryGetMouseButton_mA1E8CD93C8FC3AD4A2AC35E2DFD233A85514A28E_AdjustorThunk (RuntimeObject * __this, int32_t* ___mouseButton0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B * _thisAdjusted = reinterpret_cast<KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B *>(__this + _offset);
	return KeyBinding_TryGetMouseButton_mA1E8CD93C8FC3AD4A2AC35E2DFD233A85514A28E(_thisAdjusted, ___mouseButton0, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.KeyBinding::TryGetMouseButton(Microsoft.MixedReality.Toolkit.Input.KeyBinding_MouseButton&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KeyBinding_TryGetMouseButton_m4B3E7A3F0E00AA6C0DAF06EFE1C31E9182805516 (KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B * __this, int32_t* ___mouseButton0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// if (TryGetMouseButton(out int iMouseButton))
		bool L_0 = KeyBinding_TryGetMouseButton_mA1E8CD93C8FC3AD4A2AC35E2DFD233A85514A28E((KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B *)__this, (int32_t*)(&V_0), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// mouseButton = (MouseButton)iMouseButton;
		int32_t* L_1 = ___mouseButton0;
		int32_t L_2 = V_0;
		*((int32_t*)L_1) = (int32_t)L_2;
		// return true;
		return (bool)1;
	}

IL_000f:
	{
		// mouseButton = MouseButton.Left;
		int32_t* L_3 = ___mouseButton0;
		*((int32_t*)L_3) = (int32_t)0;
		// return false;
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool KeyBinding_TryGetMouseButton_m4B3E7A3F0E00AA6C0DAF06EFE1C31E9182805516_AdjustorThunk (RuntimeObject * __this, int32_t* ___mouseButton0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B * _thisAdjusted = reinterpret_cast<KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B *>(__this + _offset);
	return KeyBinding_TryGetMouseButton_m4B3E7A3F0E00AA6C0DAF06EFE1C31E9182805516(_thisAdjusted, ___mouseButton0, method);
}
// Microsoft.MixedReality.Toolkit.Input.KeyBinding Microsoft.MixedReality.Toolkit.Input.KeyBinding::Unbound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B  KeyBinding_Unbound_m5A652CDBFB2313FAA85C762DBFA803CD070C3F26 (const RuntimeMethod* method)
{
	KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// KeyBinding kb = new KeyBinding();
		il2cpp_codegen_initobj((&V_0), sizeof(KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B ));
		// kb.bindingType = KeyType.None;
		(&V_0)->set_bindingType_3(0);
		// kb.code = 0;
		(&V_0)->set_code_4(0);
		// return kb;
		KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B  L_0 = V_0;
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Input.KeyBinding Microsoft.MixedReality.Toolkit.Input.KeyBinding::FromKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B  KeyBinding_FromKey_mED732886A0D8C3138FE22BEC98964C48AAFEF491 (int32_t ___keyCode0, const RuntimeMethod* method)
{
	KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// KeyBinding kb = new KeyBinding();
		il2cpp_codegen_initobj((&V_0), sizeof(KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B ));
		// kb.bindingType = KeyType.Key;
		(&V_0)->set_bindingType_3(2);
		// kb.code = (int)keyCode;
		int32_t L_0 = ___keyCode0;
		(&V_0)->set_code_4(L_0);
		// return kb;
		KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B  L_1 = V_0;
		return L_1;
	}
}
// Microsoft.MixedReality.Toolkit.Input.KeyBinding Microsoft.MixedReality.Toolkit.Input.KeyBinding::FromMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B  KeyBinding_FromMouseButton_m4CB79450541AD02AD344C208A240C5DC9C160EDE (int32_t ___mouseButton0, const RuntimeMethod* method)
{
	KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// KeyBinding kb = new KeyBinding();
		il2cpp_codegen_initobj((&V_0), sizeof(KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B ));
		// kb.bindingType = KeyType.Mouse;
		(&V_0)->set_bindingType_3(1);
		// kb.code = mouseButton;
		int32_t L_0 = ___mouseButton0;
		(&V_0)->set_code_4(L_0);
		// return kb;
		KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B  L_1 = V_0;
		return L_1;
	}
}
// Microsoft.MixedReality.Toolkit.Input.KeyBinding Microsoft.MixedReality.Toolkit.Input.KeyBinding::FromMouseButton(Microsoft.MixedReality.Toolkit.Input.KeyBinding_MouseButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B  KeyBinding_FromMouseButton_m7CB46FC8F1FE147C8C94310335DC5B4279813750 (int32_t ___mouseButton0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyBinding_FromMouseButton_m7CB46FC8F1FE147C8C94310335DC5B4279813750_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return FromMouseButton((int)mouseButton);
		int32_t L_0 = ___mouseButton0;
		IL2CPP_RUNTIME_CLASS_INIT(KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B_il2cpp_TypeInfo_var);
		KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B  L_1 = KeyBinding_FromMouseButton_m4CB79450541AD02AD344C208A240C5DC9C160EDE(L_0, /*hidden argument*/NULL);
		return L_1;
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
// System.Boolean Microsoft.MixedReality.Toolkit.Input.KeyInputSystem::GetKey(Microsoft.MixedReality.Toolkit.Input.KeyBinding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KeyInputSystem_GetKey_mF6AFC851DA0C002C5309A1617620D8B409ADB082 (KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B  ___kb0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (kb.TryGetMouseButton(out int mouseButton))
		bool L_0 = KeyBinding_TryGetMouseButton_mA1E8CD93C8FC3AD4A2AC35E2DFD233A85514A28E((KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B *)(&___kb0), (int32_t*)(&V_0), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// return UnityEngine.Input.GetMouseButton(mouseButton);
		int32_t L_1 = V_0;
		bool L_2 = Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0012:
	{
		// if (kb.TryGetKeyCode(out KeyCode keyCode))
		bool L_3 = KeyBinding_TryGetKeyCode_mD3A7D64414945CDB6AA3A004573E8F28BA07C9D6((KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B *)(&___kb0), (int32_t*)(&V_1), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		// return UnityEngine.Input.GetKey(keyCode);
		int32_t L_4 = V_1;
		bool L_5 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0024:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.KeyInputSystem::GetKeyDown(Microsoft.MixedReality.Toolkit.Input.KeyBinding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KeyInputSystem_GetKeyDown_m4D92A33CCA48BEC22006B9DA6CFCF4DC94DDF4B3 (KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B  ___kb0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (kb.TryGetMouseButton(out int mouseButton))
		bool L_0 = KeyBinding_TryGetMouseButton_mA1E8CD93C8FC3AD4A2AC35E2DFD233A85514A28E((KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B *)(&___kb0), (int32_t*)(&V_0), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// return UnityEngine.Input.GetMouseButtonDown(mouseButton);
		int32_t L_1 = V_0;
		bool L_2 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0012:
	{
		// if (kb.TryGetKeyCode(out KeyCode keyCode))
		bool L_3 = KeyBinding_TryGetKeyCode_mD3A7D64414945CDB6AA3A004573E8F28BA07C9D6((KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B *)(&___kb0), (int32_t*)(&V_1), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		// return UnityEngine.Input.GetKeyDown(keyCode);
		int32_t L_4 = V_1;
		bool L_5 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0024:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.KeyInputSystem::GetKeyUp(Microsoft.MixedReality.Toolkit.Input.KeyBinding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KeyInputSystem_GetKeyUp_m4261B632014CCE7A60771A83C40C075DE08F4CE1 (KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B  ___kb0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (kb.TryGetMouseButton(out int mouseButton))
		bool L_0 = KeyBinding_TryGetMouseButton_mA1E8CD93C8FC3AD4A2AC35E2DFD233A85514A28E((KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B *)(&___kb0), (int32_t*)(&V_0), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// return UnityEngine.Input.GetMouseButtonUp(mouseButton);
		int32_t L_1 = V_0;
		bool L_2 = Input_GetMouseButtonUp_m2BA562F8C4FE8364EEC93970093E776371DF4022(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0012:
	{
		// if (kb.TryGetKeyCode(out KeyCode keyCode))
		bool L_3 = KeyBinding_TryGetKeyCode_mD3A7D64414945CDB6AA3A004573E8F28BA07C9D6((KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B *)(&___kb0), (int32_t*)(&V_1), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		// return UnityEngine.Input.GetKeyUp(keyCode);
		int32_t L_4 = V_1;
		bool L_5 = Input_GetKeyUp_mDE9D56FE11715566D4D54FD96F8E1EF9734D225F(L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0024:
	{
		// return false;
		return (bool)0;
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
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_IndicatorsPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * MixedRealityInputSimulationProfile_get_IndicatorsPrefab_m2A2CB7CDCA2DCF979C4974C942859F598B748ADD (MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject IndicatorsPrefab => indicatorsPrefab;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_indicatorsPrefab_5();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_MouseRotationSensitivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_MouseRotationSensitivity_mB36CE1E8AAEB8974B25E413C47762785B8C16F56 (MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1 * __this, const RuntimeMethod* method)
{
	{
		// public float MouseRotationSensitivity => mouseRotationSensitivity;
		float L_0 = __this->get_mouseRotationSensitivity_6();
		return L_0;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_MouseX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MixedRealityInputSimulationProfile_get_MouseX_m8D154DA926984E5202EA579FF31E0DA3471811A3 (MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1 * __this, const RuntimeMethod* method)
{
	{
		// public string MouseX => mouseX;
		String_t* L_0 = __this->get_mouseX_7();
		return L_0;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_MouseY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MixedRealityInputSimulationProfile_get_MouseY_mAC4D840B3D789CAD0F6ACDDA659E59CE109FCF53 (MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1 * __this, const RuntimeMethod* method)
{
	{
		// public string MouseY => mouseY;
		String_t* L_0 = __this->get_mouseY_8();
		return L_0;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_MouseScroll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MixedRealityInputSimulationProfile_get_MouseScroll_m76A4F18ECA82618E18D8C3228F3B3C7EDB96E90A (MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1 * __this, const RuntimeMethod* method)
{
	{
		// public string MouseScroll => mouseScroll;
		String_t* L_0 = __this->get_mouseScroll_9();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_DoublePressTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_DoublePressTime_m912F35A57B3BD622FA5EDA43B4CBB1797588CC6C (MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1 * __this, const RuntimeMethod* method)
{
	{
		// public float DoublePressTime => doublePressTime;
		float L_0 = __this->get_doublePressTime_10();
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_IsCameraControlEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityInputSimulationProfile_get_IsCameraControlEnabled_mD5251B703946F85B5A585B6BC5BBD3D674C8D66E (MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsCameraControlEnabled => isCameraControlEnabled;
		bool L_0 = __this->get_isCameraControlEnabled_11();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_MouseLookSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_MouseLookSpeed_mF08BAAC62A586DFD653704E7F68E9508D946214E (MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1 * __this, const RuntimeMethod* method)
{
	{
		// public float MouseLookSpeed => mouseLookSpeed;
		float L_0 = __this->get_mouseLookSpeed_12();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Input.KeyBinding Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_MouseLookButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B  MixedRealityInputSimulationProfile_get_MouseLookButton_m6186C8499DCC33CFDF59A5577198024D0636EA18 (MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1 * __this, const RuntimeMethod* method)
{
	{
		// public KeyBinding MouseLookButton => mouseLookButton;
		KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B  L_0 = __this->get_mouseLookButton_13();
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_MouseLookToggle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityInputSimulationProfile_get_MouseLookToggle_m8F6537C0A2427A2DCC555BB536D06ECB38F9043B (MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1 * __this, const RuntimeMethod* method)
{
	{
		// public bool MouseLookToggle => mouseLookToggle;
		bool L_0 = __this->get_mouseLookToggle_14();
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_IsControllerLookInverted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityInputSimulationProfile_get_IsControllerLookInverted_m088C1BDA190A754B0575FBDED7052D530E82923C (MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsControllerLookInverted => isControllerLookInverted;
		bool L_0 = __this->get_isControllerLookInverted_15();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Input.InputSimulationControlMode Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_CurrentControlMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_CurrentControlMode_mE9E3D67FD69EA013E8837F241A91A8891AFFCD42 (MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1 * __this, const RuntimeMethod* method)
{
	{
		// public InputSimulationControlMode CurrentControlMode => currentControlMode;
		int32_t L_0 = __this->get_currentControlMode_16();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Input.KeyBinding Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_FastControlKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B  MixedRealityInputSimulationProfile_get_FastControlKey_m0183465F9C8671C7F9C3D59D24753F387AF899FD (MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1 * __this, const RuntimeMethod* method)
{
	{
		// public KeyBinding FastControlKey => fastControlKey;
		KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B  L_0 = __this->get_fastControlKey_17();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_ControlSlowSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_ControlSlowSpeed_m1195C44DE712458366041B5E3791D68C1C290A68 (MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1 * __this, const RuntimeMethod* method)
{
	{
		// public float ControlSlowSpeed => controlSlowSpeed;
		float L_0 = __this->get_controlSlowSpeed_18();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_ControlFastSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_ControlFastSpeed_m0396D6495A76561B2021517F73FC953334974CA3 (MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1 * __this, const RuntimeMethod* method)
{
	{
		// public float ControlFastSpeed => controlFastSpeed;
		float L_0 = __this->get_controlFastSpeed_19();
		return L_0;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_MoveHorizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MixedRealityInputSimulationProfile_get_MoveHorizontal_m4134CD8069922BF5783CFE309FC5CA39FA8E1629 (MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1 * __this, const RuntimeMethod* method)
{
	{
		// public string MoveHorizontal => moveHorizontal;
		String_t* L_0 = __this->get_moveHorizontal_20();
		return L_0;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_MoveVertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MixedRealityInputSimulationProfile_get_MoveVertical_m85A1762256871B01470547D437D4C974324BA507 (MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1 * __this, const RuntimeMethod* method)
{
	{
		// public string MoveVertical => moveVertical;
		String_t* L_0 = __this->get_moveVertical_21();
		return L_0;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_MoveUpDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MixedRealityInputSimulationProfile_get_MoveUpDown_m7A3E41961B2F5A9A67CF580E81CBFB2BE55FB287 (MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1 * __this, const RuntimeMethod* method)
{
	{
		// public string MoveUpDown => moveUpDown;
		String_t* L_0 = __this->get_moveUpDown_22();
		return L_0;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_LookHorizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MixedRealityInputSimulationProfile_get_LookHorizontal_m9F2A0A374561192B4A57C798049031AA8D32060B (MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1 * __this, const RuntimeMethod* method)
{
	{
		// public string LookHorizontal => lookHorizontal;
		String_t* L_0 = __this->get_lookHorizontal_23();
		return L_0;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_LookVertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MixedRealityInputSimulationProfile_get_LookVertical_m99A38DB9C5639F97C3908EEB25F5BA454505C46D (MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1 * __this, const RuntimeMethod* method)
{
	{
		// public string LookVertical => lookVertical;
		String_t* L_0 = __this->get_lookVertical_24();
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_SimulateEyePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityInputSimulationProfile_get_SimulateEyePosition_m7A7FD9620A15825A9A9C093468E5E1725F82CF3F (MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1 * __this, const RuntimeMethod* method)
{
	{
		// public bool SimulateEyePosition => simulateEyePosition;
		bool L_0 = __this->get_simulateEyePosition_25();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Input.HandSimulationMode Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_DefaultHandSimulationMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_DefaultHandSimulationMode_mDDD95F02536BE1AD175EB31F45ECE68F2993C6E1 (MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1 * __this, const RuntimeMethod* method)
{
	{
		// public HandSimulationMode DefaultHandSimulationMode => defaultHandSimulationMode;
		int32_t L_0 = __this->get_defaultHandSimulationMode_26();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Input.KeyBinding Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_ToggleLeftHandKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B  MixedRealityInputSimulationProfile_get_ToggleLeftHandKey_m03F8629C24F0A19B28A79C5E571547CF3FAC3A70 (MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1 * __this, const RuntimeMethod* method)
{
	{
		// public KeyBinding ToggleLeftHandKey => toggleLeftHandKey;
		KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B  L_0 = __this->get_toggleLeftHandKey_27();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Input.KeyBinding Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_ToggleRightHandKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B  MixedRealityInputSimulationProfile_get_ToggleRightHandKey_m2C4550C13AEBB3A116D500C51C5A3326FC649415 (MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1 * __this, const RuntimeMethod* method)
{
	{
		// public KeyBinding ToggleRightHandKey => toggleRightHandKey;
		KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B  L_0 = __this->get_toggleRightHandKey_28();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_HandHideTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_HandHideTimeout_mA1286E7380457C91A3E96C56E2F0200C264CD8FE (MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1 * __this, const RuntimeMethod* method)
{
	{
		// public float HandHideTimeout => handHideTimeout;
		float L_0 = __this->get_handHideTimeout_29();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Input.KeyBinding Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_LeftHandManipulationKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B  MixedRealityInputSimulationProfile_get_LeftHandManipulationKey_mBA5C79A1761CDB2A018414F0EBF35F9F053B2522 (MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1 * __this, const RuntimeMethod* method)
{
	{
		// public KeyBinding LeftHandManipulationKey => leftHandManipulationKey;
		KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B  L_0 = __this->get_leftHandManipulationKey_30();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Input.KeyBinding Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_RightHandManipulationKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B  MixedRealityInputSimulationProfile_get_RightHandManipulationKey_m3FA8D6E628DE5B549DF1BC91AD7DD39930FEC132 (MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1 * __this, const RuntimeMethod* method)
{
	{
		// public KeyBinding RightHandManipulationKey => rightHandManipulationKey;
		KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B  L_0 = __this->get_rightHandManipulationKey_31();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_MouseHandRotationSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_MouseHandRotationSpeed_m1EA7FFA8587C5D45B6E41BA6F88067EAAA69A24D (MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1 * __this, const RuntimeMethod* method)
{
	{
		// public float MouseHandRotationSpeed => mouseHandRotationSpeed;
		float L_0 = __this->get_mouseHandRotationSpeed_32();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Input.KeyBinding Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_HandRotateButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B  MixedRealityInputSimulationProfile_get_HandRotateButton_m6810D1C95D5FEA8E73997E7F783442B67562896A (MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1 * __this, const RuntimeMethod* method)
{
	{
		// public KeyBinding HandRotateButton => handRotateButton;
		KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B  L_0 = __this->get_handRotateButton_33();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose_GestureId Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_DefaultHandGesture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_DefaultHandGesture_mC3139950F7510C74DE2CEF10F4B082A2D126B719 (MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1 * __this, const RuntimeMethod* method)
{
	{
		// public ArticulatedHandPose.GestureId DefaultHandGesture => defaultHandGesture;
		int32_t L_0 = __this->get_defaultHandGesture_34();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose_GestureId Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_LeftMouseHandGesture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_LeftMouseHandGesture_mB270288E0046033D2FDF1B6192E54674F236F86D (MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1 * __this, const RuntimeMethod* method)
{
	{
		// public ArticulatedHandPose.GestureId LeftMouseHandGesture => leftMouseHandGesture;
		int32_t L_0 = __this->get_leftMouseHandGesture_35();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose_GestureId Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_MiddleMouseHandGesture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_MiddleMouseHandGesture_m3704D052F63F05E0A93FFEB84524F334493A7434 (MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1 * __this, const RuntimeMethod* method)
{
	{
		// public ArticulatedHandPose.GestureId MiddleMouseHandGesture => middleMouseHandGesture;
		int32_t L_0 = __this->get_middleMouseHandGesture_36();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose_GestureId Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_RightMouseHandGesture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_RightMouseHandGesture_mB3398863202F6FE27E66A766BA3A032B8BD79FDF (MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1 * __this, const RuntimeMethod* method)
{
	{
		// public ArticulatedHandPose.GestureId RightMouseHandGesture => rightMouseHandGesture;
		int32_t L_0 = __this->get_rightMouseHandGesture_37();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_HandGestureAnimationSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_HandGestureAnimationSpeed_m463782D1D4EDF7DF604298537AAAAB9D374D30B1 (MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1 * __this, const RuntimeMethod* method)
{
	{
		// public float HandGestureAnimationSpeed => handGestureAnimationSpeed;
		float L_0 = __this->get_handGestureAnimationSpeed_38();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_HoldStartDuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_HoldStartDuration_m381060A249D46CA0AA4F602CC104BE888EA2B1A2 (MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1 * __this, const RuntimeMethod* method)
{
	{
		// public float HoldStartDuration => holdStartDuration;
		float L_0 = __this->get_holdStartDuration_39();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_NavigationStartThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_NavigationStartThreshold_m14EF89E8C3B57F9B7C85AAB0D7DC3D4F2FC966B1 (MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1 * __this, const RuntimeMethod* method)
{
	{
		// public float NavigationStartThreshold => navigationStartThreshold;
		float L_0 = __this->get_navigationStartThreshold_40();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_DefaultHandDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_DefaultHandDistance_m425AE01B7F72D4C771D9766C7BB4B060774112D2 (MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1 * __this, const RuntimeMethod* method)
{
	{
		// public float DefaultHandDistance => defaultHandDistance;
		float L_0 = __this->get_defaultHandDistance_41();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_HandDepthMultiplier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_HandDepthMultiplier_m6C2CE3CCD2D9FEA9B83B4FA04D5C374CB101E457 (MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1 * __this, const RuntimeMethod* method)
{
	{
		// public float HandDepthMultiplier => handDepthMultiplier;
		float L_0 = __this->get_handDepthMultiplier_42();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_HandJitterAmount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_HandJitterAmount_m48DEA1A43D3679FA2FD00DBD52530BBF8DAFD059 (MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1 * __this, const RuntimeMethod* method)
{
	{
		// public float HandJitterAmount => handJitterAmount;
		float L_0 = __this->get_handJitterAmount_43();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityInputSimulationProfile__ctor_m9E20D65FADCF5D73A8506F5B26DA5A9AEF34D741 (MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityInputSimulationProfile__ctor_m9E20D65FADCF5D73A8506F5B26DA5A9AEF34D741_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private float mouseRotationSensitivity = 0.1f;
		__this->set_mouseRotationSensitivity_6((0.100000001f));
		// private string mouseX = "Mouse X";
		__this->set_mouseX_7(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		// private string mouseY = "Mouse Y";
		__this->set_mouseY_8(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		// private string mouseScroll = "Mouse ScrollWheel";
		__this->set_mouseScroll_9(_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0);
		// private float doublePressTime = 0.4f;
		__this->set_doublePressTime_10((0.400000006f));
		// private bool isCameraControlEnabled = true;
		__this->set_isCameraControlEnabled_11((bool)1);
		// private float mouseLookSpeed = 3.0f;
		__this->set_mouseLookSpeed_12((3.0f));
		// private KeyBinding mouseLookButton = KeyBinding.FromMouseButton(KeyBinding.MouseButton.Right);
		IL2CPP_RUNTIME_CLASS_INIT(KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B_il2cpp_TypeInfo_var);
		KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B  L_0 = KeyBinding_FromMouseButton_m7CB46FC8F1FE147C8C94310335DC5B4279813750(1, /*hidden argument*/NULL);
		__this->set_mouseLookButton_13(L_0);
		// private bool isControllerLookInverted = true;
		__this->set_isControllerLookInverted_15((bool)1);
		// private KeyBinding fastControlKey = KeyBinding.FromKey(KeyCode.RightControl);
		KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B  L_1 = KeyBinding_FromKey_mED732886A0D8C3138FE22BEC98964C48AAFEF491(((int32_t)305), /*hidden argument*/NULL);
		__this->set_fastControlKey_17(L_1);
		// private float controlSlowSpeed = 0.1f;
		__this->set_controlSlowSpeed_18((0.100000001f));
		// private float controlFastSpeed = 1.0f;
		__this->set_controlFastSpeed_19((1.0f));
		// private string moveHorizontal = "Horizontal";
		__this->set_moveHorizontal_20(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		// private string moveVertical = "Vertical";
		__this->set_moveVertical_21(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		// private string moveUpDown = "UpDown";
		__this->set_moveUpDown_22(_stringLiteral4208A902E747B92B5D64EE3AA0896299BD1D9729);
		// private string lookHorizontal = ControllerMappingLibrary.AXIS_4;
		__this->set_lookHorizontal_23(_stringLiteral801EACC9B8E831EA7D1A22ACE229E2222275490E);
		// private string lookVertical = ControllerMappingLibrary.AXIS_5;
		__this->set_lookVertical_24(_stringLiteralD1C4A80C90449117887C3EFE0E5C9259A8AB441C);
		// private HandSimulationMode defaultHandSimulationMode = HandSimulationMode.Articulated;
		__this->set_defaultHandSimulationMode_26(2);
		// private KeyBinding toggleLeftHandKey = KeyBinding.FromKey(KeyCode.T);
		KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B  L_2 = KeyBinding_FromKey_mED732886A0D8C3138FE22BEC98964C48AAFEF491(((int32_t)116), /*hidden argument*/NULL);
		__this->set_toggleLeftHandKey_27(L_2);
		// private KeyBinding toggleRightHandKey = KeyBinding.FromKey(KeyCode.Y);
		KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B  L_3 = KeyBinding_FromKey_mED732886A0D8C3138FE22BEC98964C48AAFEF491(((int32_t)121), /*hidden argument*/NULL);
		__this->set_toggleRightHandKey_28(L_3);
		// private float handHideTimeout = 0.2f;
		__this->set_handHideTimeout_29((0.200000003f));
		// private KeyBinding leftHandManipulationKey = KeyBinding.FromKey(KeyCode.LeftShift);
		KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B  L_4 = KeyBinding_FromKey_mED732886A0D8C3138FE22BEC98964C48AAFEF491(((int32_t)304), /*hidden argument*/NULL);
		__this->set_leftHandManipulationKey_30(L_4);
		// private KeyBinding rightHandManipulationKey = KeyBinding.FromKey(KeyCode.Space);
		KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B  L_5 = KeyBinding_FromKey_mED732886A0D8C3138FE22BEC98964C48AAFEF491(((int32_t)32), /*hidden argument*/NULL);
		__this->set_rightHandManipulationKey_31(L_5);
		// private float mouseHandRotationSpeed = 6.0f;
		__this->set_mouseHandRotationSpeed_32((6.0f));
		// private KeyBinding handRotateButton = KeyBinding.FromKey(KeyCode.LeftControl);
		KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B  L_6 = KeyBinding_FromKey_mED732886A0D8C3138FE22BEC98964C48AAFEF491(((int32_t)306), /*hidden argument*/NULL);
		__this->set_handRotateButton_33(L_6);
		// private ArticulatedHandPose.GestureId defaultHandGesture = ArticulatedHandPose.GestureId.Open;
		__this->set_defaultHandGesture_34(2);
		// private ArticulatedHandPose.GestureId leftMouseHandGesture = ArticulatedHandPose.GestureId.Pinch;
		__this->set_leftMouseHandGesture_35(3);
		// private float handGestureAnimationSpeed = 8.0f;
		__this->set_handGestureAnimationSpeed_38((8.0f));
		// private float holdStartDuration = 0.5f;
		__this->set_holdStartDuration_39((0.5f));
		// private float navigationStartThreshold = 0.03f;
		__this->set_navigationStartThreshold_40((0.0299999993f));
		// private float defaultHandDistance = 0.5f;
		__this->set_defaultHandDistance_41((0.5f));
		// private float handDepthMultiplier = 0.03f;
		__this->set_handDepthMultiplier_42((0.0299999993f));
		BaseMixedRealityProfile__ctor_mF22E85943179AF29010F40443EAFE26A592F16D2(__this, /*hidden argument*/NULL);
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
// Microsoft.MixedReality.Toolkit.Input.HandSimulationMode Microsoft.MixedReality.Toolkit.Input.SimulatedArticulatedHand::get_SimulationMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SimulatedArticulatedHand_get_SimulationMode_m4C5154A620C59AD58B3754DE30FEFBE3FA6AB57A (SimulatedArticulatedHand_tF3E35F538E755A5B3F857B5F097D7902F8132B6B * __this, const RuntimeMethod* method)
{
	{
		// public override HandSimulationMode SimulationMode => HandSimulationMode.Articulated;
		return (int32_t)(2);
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedArticulatedHand::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedArticulatedHand__ctor_mDCDC76DA192287B82E85E2CF1D1E8359F17378C6 (SimulatedArticulatedHand_tF3E35F538E755A5B3F857B5F097D7902F8132B6B * __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* ___interactions3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedArticulatedHand__ctor_mDCDC76DA192287B82E85E2CF1D1E8359F17378C6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Vector3 currentPointerPosition = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_currentPointerPosition_24(L_0);
		// private Quaternion currentPointerRotation = Quaternion.identity;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		__this->set_currentPointerRotation_25(L_1);
		// private MixedRealityPose lastPointerPose = MixedRealityPose.ZeroIdentity;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5_il2cpp_TypeInfo_var);
		MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  L_2 = MixedRealityPose_get_ZeroIdentity_m7DFFCF17695B53E77ABCC4035C292C405996350E_inline(/*hidden argument*/NULL);
		__this->set_lastPointerPose_26(L_2);
		// private MixedRealityPose currentPointerPose = MixedRealityPose.ZeroIdentity;
		MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  L_3 = MixedRealityPose_get_ZeroIdentity_m7DFFCF17695B53E77ABCC4035C292C405996350E_inline(/*hidden argument*/NULL);
		__this->set_currentPointerPose_27(L_3);
		// private MixedRealityPose currentIndexPose = MixedRealityPose.ZeroIdentity;
		MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  L_4 = MixedRealityPose_get_ZeroIdentity_m7DFFCF17695B53E77ABCC4035C292C405996350E_inline(/*hidden argument*/NULL);
		__this->set_currentIndexPose_28(L_4);
		// private MixedRealityPose currentGripPose = MixedRealityPose.ZeroIdentity;
		MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  L_5 = MixedRealityPose_get_ZeroIdentity_m7DFFCF17695B53E77ABCC4035C292C405996350E_inline(/*hidden argument*/NULL);
		__this->set_currentGripPose_29(L_5);
		// private MixedRealityPose lastGripPose = MixedRealityPose.ZeroIdentity;
		MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  L_6 = MixedRealityPose_get_ZeroIdentity_m7DFFCF17695B53E77ABCC4035C292C405996350E_inline(/*hidden argument*/NULL);
		__this->set_lastGripPose_30(L_6);
		// : base(trackingState, controllerHandedness, inputSource, interactions)
		int32_t L_7 = ___trackingState0;
		uint8_t L_8 = ___controllerHandedness1;
		RuntimeObject* L_9 = ___inputSource2;
		MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* L_10 = ___interactions3;
		IL2CPP_RUNTIME_CLASS_INIT(SimulatedHand_tC79023B162FCFC9F05824CBBE1DCFBC2373217E7_il2cpp_TypeInfo_var);
		SimulatedHand__ctor_m31621E2759004ECF6C2B0CAAF93035C3C3E2A596(__this, L_7, L_8, L_9, L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.SimulatedArticulatedHand::get_DefaultInteractions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* SimulatedArticulatedHand_get_DefaultInteractions_m3D98763F885106F5557073C320B854DC7A5B5F0D (SimulatedArticulatedHand_tF3E35F538E755A5B3F857B5F097D7902F8132B6B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedArticulatedHand_get_DefaultInteractions_m3D98763F885106F5557073C320B854DC7A5B5F0D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override MixedRealityInteractionMapping[] DefaultInteractions => new[]
		// {
		//     new MixedRealityInteractionMapping(0, "Spatial Pointer", AxisType.SixDof, DeviceInputType.SpatialPointer),
		//     new MixedRealityInteractionMapping(1, "Spatial Grip", AxisType.SixDof, DeviceInputType.SpatialGrip),
		//     new MixedRealityInteractionMapping(2, "Select", AxisType.Digital, DeviceInputType.Select),
		//     new MixedRealityInteractionMapping(3, "Grab", AxisType.SingleAxis, DeviceInputType.TriggerPress),
		//     new MixedRealityInteractionMapping(4, "Index Finger Pose", AxisType.SixDof, DeviceInputType.IndexFinger),
		// };
		MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* L_0 = (MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D*)(MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D*)SZArrayNew(MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D_il2cpp_TypeInfo_var, (uint32_t)5);
		MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* L_1 = L_0;
		MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 * L_2 = (MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_m927CB3497C64EA1EE7EF2FAEDC15A611FA4D1571(L_2, 0, _stringLiteral18E27A22FCB12E9EB3D95EB9AD4D7623C1AEA302, 7, 3, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 *)L_2);
		MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* L_3 = L_1;
		MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 * L_4 = (MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_m927CB3497C64EA1EE7EF2FAEDC15A611FA4D1571(L_4, 1, _stringLiteral18E7928E065AE670C66DAD6CCCA38069D00491EA, 7, ((int32_t)14), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 *)L_4);
		MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* L_5 = L_3;
		MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 * L_6 = (MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_m927CB3497C64EA1EE7EF2FAEDC15A611FA4D1571(L_6, 2, _stringLiteral31E8E4ACB2EDC39B158FBA91185DE1333306F668, 2, ((int32_t)25), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 *)L_6);
		MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* L_7 = L_5;
		MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 * L_8 = (MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_m927CB3497C64EA1EE7EF2FAEDC15A611FA4D1571(L_8, 3, _stringLiteralE17E01A6CDB454BE09B74C544A2901D6C9F990AF, 3, ((int32_t)13), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 *)L_8);
		MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* L_9 = L_7;
		MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 * L_10 = (MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_m927CB3497C64EA1EE7EF2FAEDC15A611FA4D1571(L_10, 4, _stringLiteral9883BE541EEAFE5925B5C5E27FD12ADF5E431B5E, 7, ((int32_t)33), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 *)L_10);
		return L_9;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedArticulatedHand::UpdateInteractions(Microsoft.MixedReality.Toolkit.Input.SimulatedHandData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedArticulatedHand_UpdateInteractions_m24369B5156461F346FB4DBFF580893CEE0AE11BF (SimulatedArticulatedHand_tF3E35F538E755A5B3F857B5F097D7902F8132B6B * __this, SimulatedHandData_t27280EA369E2A116C61830482B52B31ABA3F39CA * ___handData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedArticulatedHand_UpdateInteractions_m24369B5156461F346FB4DBFF580893CEE0AE11BF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  V_7;
	memset((&V_7), 0, sizeof(V_7));
	RuntimeObject* G_B7_0 = NULL;
	RuntimeObject* G_B6_0 = NULL;
	RuntimeObject* G_B12_0 = NULL;
	RuntimeObject* G_B11_0 = NULL;
	RuntimeObject* G_B17_0 = NULL;
	RuntimeObject* G_B16_0 = NULL;
	RuntimeObject* G_B30_0 = NULL;
	RuntimeObject* G_B29_0 = NULL;
	RuntimeObject* G_B34_0 = NULL;
	RuntimeObject* G_B33_0 = NULL;
	RuntimeObject* G_B39_0 = NULL;
	RuntimeObject* G_B38_0 = NULL;
	RuntimeObject* G_B42_0 = NULL;
	RuntimeObject* G_B41_0 = NULL;
	RuntimeObject* G_B47_0 = NULL;
	RuntimeObject* G_B46_0 = NULL;
	RuntimeObject* G_B50_0 = NULL;
	RuntimeObject* G_B49_0 = NULL;
	RuntimeObject* G_B54_0 = NULL;
	RuntimeObject* G_B53_0 = NULL;
	MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* G_B58_0 = NULL;
	int32_t G_B58_1 = 0;
	MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* G_B57_0 = NULL;
	int32_t G_B57_1 = 0;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  G_B59_0;
	memset((&G_B59_0), 0, sizeof(G_B59_0));
	int32_t G_B59_1 = 0;
	{
		// lastPointerPose = currentPointerPose;
		MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  L_0 = __this->get_currentPointerPose_27();
		__this->set_lastPointerPose_26(L_0);
		// lastGripPose = currentGripPose;
		MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  L_1 = __this->get_currentGripPose_29();
		__this->set_lastGripPose_30(L_1);
		// Vector3 pointerPosition = jointPoses[TrackedHandJoint.IndexTip].Position;
		Dictionary_2_t2608D8F85D3104F212EC3BC05E54C1515108B68E * L_2 = ((SimulatedHand_tC79023B162FCFC9F05824CBBE1DCFBC2373217E7 *)__this)->get_jointPoses_23();
		NullCheck(L_2);
		MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  L_3 = Dictionary_2_get_Item_m1F8B2A38633AAAAEDFC64FC9113F2270BB32D5B9(L_2, ((int32_t)11), /*hidden argument*/Dictionary_2_get_Item_m1F8B2A38633AAAAEDFC64FC9113F2270BB32D5B9_RuntimeMethod_var);
		V_1 = L_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = MixedRealityPose_get_Position_mA85AA29A7C35C13E7DDDCF058D1CB4F0371F6A08_inline((MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_4;
		// IsPositionAvailable = IsRotationAvailable = pointerPosition != Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		bool L_7 = Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710(L_5, L_6, /*hidden argument*/NULL);
		bool L_8 = L_7;
		V_2 = L_8;
		BaseController_set_IsRotationAvailable_m927864ED0861611B5CD01221F9EEED6174AEE9F2_inline(__this, L_8, /*hidden argument*/NULL);
		bool L_9 = V_2;
		BaseController_set_IsPositionAvailable_m213EE7DA83AD144F45B886D80A9501595AF4746F_inline(__this, L_9, /*hidden argument*/NULL);
		// if (IsPositionAvailable)
		bool L_10 = BaseController_get_IsPositionAvailable_m1F93CB6D96DEB05F78FD1CCE4B0FE448D3127CC4_inline(__this, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_00cc;
		}
	}
	{
		// HandRay.Update(pointerPosition, GetPalmNormal(), CameraCache.Main.transform, ControllerHandedness);
		HandRay_tD9B46FBC0154A56DFD6DA889BCA8A87BE57B9C37 * L_11 = BaseHand_get_HandRay_mF53D0155F4C9569D0D54506F8E28ED5267706F55_inline(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = BaseHand_GetPalmNormal_m6FC4EB88D79308214465672CE5D4DE5CEBD5105F(__this, /*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_14 = CameraCache_get_Main_mE989C7A267DEEBFA4B04569521133A2D566B7D5B(/*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_14, /*hidden argument*/NULL);
		uint8_t L_16 = BaseController_get_ControllerHandedness_m3D9C7DE0BE3F9F1C81C49826D67CF21175684F1A_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		HandRay_Update_mE0AEE9419FBF676D6152BFFDD09177F92F931017(L_11, L_12, L_13, L_15, L_16, /*hidden argument*/NULL);
		// Ray ray = HandRay.Ray;
		HandRay_tD9B46FBC0154A56DFD6DA889BCA8A87BE57B9C37 * L_17 = BaseHand_get_HandRay_mF53D0155F4C9569D0D54506F8E28ED5267706F55_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_18 = HandRay_get_Ray_mC00BCB5EEFE8C3C53EDEB426E629661888327248(L_17, /*hidden argument*/NULL);
		V_3 = L_18;
		// currentPointerPose.Position = ray.origin;
		MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5 * L_19 = __this->get_address_of_currentPointerPose_27();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = Ray_get_origin_m0C1B2BFF99CDF5231AC29AC031C161F55B53C1D0((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&V_3), /*hidden argument*/NULL);
		MixedRealityPose_set_Position_mB9AD9342E3AEAFC264C2196FFE6551CDA6F6178B_inline((MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5 *)L_19, L_20, /*hidden argument*/NULL);
		// currentPointerPose.Rotation = Quaternion.LookRotation(ray.direction);
		MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5 * L_21 = __this->get_address_of_currentPointerPose_27();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = Ray_get_direction_m2B31F86F19B64474A901B28D3808011AE7A13EFC((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&V_3), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_23 = Quaternion_LookRotation_m1B0BEBEBCC384324A6771B9EAC89761F73E1D6BF(L_22, /*hidden argument*/NULL);
		MixedRealityPose_set_Rotation_mDB92DA586E7A05D81A035FFFAA972E521EA68D23_inline((MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5 *)L_21, L_23, /*hidden argument*/NULL);
		// currentGripPose = jointPoses[TrackedHandJoint.Palm];
		Dictionary_2_t2608D8F85D3104F212EC3BC05E54C1515108B68E * L_24 = ((SimulatedHand_tC79023B162FCFC9F05824CBBE1DCFBC2373217E7 *)__this)->get_jointPoses_23();
		NullCheck(L_24);
		MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  L_25 = Dictionary_2_get_Item_m1F8B2A38633AAAAEDFC64FC9113F2270BB32D5B9(L_24, 2, /*hidden argument*/Dictionary_2_get_Item_m1F8B2A38633AAAAEDFC64FC9113F2270BB32D5B9_RuntimeMethod_var);
		__this->set_currentGripPose_29(L_25);
		// currentIndexPose = jointPoses[TrackedHandJoint.IndexTip];
		Dictionary_2_t2608D8F85D3104F212EC3BC05E54C1515108B68E * L_26 = ((SimulatedHand_tC79023B162FCFC9F05824CBBE1DCFBC2373217E7 *)__this)->get_jointPoses_23();
		NullCheck(L_26);
		MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  L_27 = Dictionary_2_get_Item_m1F8B2A38633AAAAEDFC64FC9113F2270BB32D5B9(L_26, ((int32_t)11), /*hidden argument*/Dictionary_2_get_Item_m1F8B2A38633AAAAEDFC64FC9113F2270BB32D5B9_RuntimeMethod_var);
		__this->set_currentIndexPose_28(L_27);
	}

IL_00cc:
	{
		// if (lastGripPose != currentGripPose)
		MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  L_28 = __this->get_lastGripPose_30();
		MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  L_29 = __this->get_currentGripPose_29();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5_il2cpp_TypeInfo_var);
		bool L_30 = MixedRealityPose_op_Inequality_mA0A1036147AD7A39F8D9D0974A20ABC44318D7CA(L_28, L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_016d;
		}
	}
	{
		// if (IsPositionAvailable && IsRotationAvailable)
		bool L_31 = BaseController_get_IsPositionAvailable_m1F93CB6D96DEB05F78FD1CCE4B0FE448D3127CC4_inline(__this, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_0111;
		}
	}
	{
		bool L_32 = BaseController_get_IsRotationAvailable_m5F7ECD00BDFD4A190C047F24BE5D2DFCF5FC0E28_inline(__this, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_0111;
		}
	}
	{
		// CoreServices.InputSystem?.RaiseSourcePoseChanged(InputSource, this, currentGripPose);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tDB76F6146407FDEA9A4479E5553ED32DC19AADBD_il2cpp_TypeInfo_var);
		RuntimeObject* L_33 = CoreServices_get_InputSystem_m734103F090144FE710940E31C6B3581D15572FB0(/*hidden argument*/NULL);
		RuntimeObject* L_34 = L_33;
		G_B6_0 = L_34;
		if (L_34)
		{
			G_B7_0 = L_34;
			goto IL_00fd;
		}
	}
	{
		goto IL_016d;
	}

IL_00fd:
	{
		RuntimeObject* L_35 = BaseController_get_InputSource_m6E124D758E6373E7E1C498AE986C460CCDC651E3_inline(__this, /*hidden argument*/NULL);
		MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  L_36 = __this->get_currentGripPose_29();
		NullCheck(G_B7_0);
		InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  >::Invoke(29 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseSourcePoseChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose) */, IMixedRealityInputSystem_t64ABD77097BAD8C4A1194C39BFFD4E6F6CBF55B1_il2cpp_TypeInfo_var, G_B7_0, L_35, __this, L_36);
		// }
		goto IL_016d;
	}

IL_0111:
	{
		// else if (IsPositionAvailable && !IsRotationAvailable)
		bool L_37 = BaseController_get_IsPositionAvailable_m1F93CB6D96DEB05F78FD1CCE4B0FE448D3127CC4_inline(__this, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_0140;
		}
	}
	{
		bool L_38 = BaseController_get_IsRotationAvailable_m5F7ECD00BDFD4A190C047F24BE5D2DFCF5FC0E28_inline(__this, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_0140;
		}
	}
	{
		// CoreServices.InputSystem?.RaiseSourcePositionChanged(InputSource, this, currentPointerPosition);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tDB76F6146407FDEA9A4479E5553ED32DC19AADBD_il2cpp_TypeInfo_var);
		RuntimeObject* L_39 = CoreServices_get_InputSystem_m734103F090144FE710940E31C6B3581D15572FB0(/*hidden argument*/NULL);
		RuntimeObject* L_40 = L_39;
		G_B11_0 = L_40;
		if (L_40)
		{
			G_B12_0 = L_40;
			goto IL_012c;
		}
	}
	{
		goto IL_016d;
	}

IL_012c:
	{
		RuntimeObject* L_41 = BaseController_get_InputSource_m6E124D758E6373E7E1C498AE986C460CCDC651E3_inline(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42 = __this->get_currentPointerPosition_24();
		NullCheck(G_B12_0);
		InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(27 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseSourcePositionChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,UnityEngine.Vector3) */, IMixedRealityInputSystem_t64ABD77097BAD8C4A1194C39BFFD4E6F6CBF55B1_il2cpp_TypeInfo_var, G_B12_0, L_41, __this, L_42);
		// }
		goto IL_016d;
	}

IL_0140:
	{
		// else if (!IsPositionAvailable && IsRotationAvailable)
		bool L_43 = BaseController_get_IsPositionAvailable_m1F93CB6D96DEB05F78FD1CCE4B0FE448D3127CC4_inline(__this, /*hidden argument*/NULL);
		if (L_43)
		{
			goto IL_016d;
		}
	}
	{
		bool L_44 = BaseController_get_IsRotationAvailable_m5F7ECD00BDFD4A190C047F24BE5D2DFCF5FC0E28_inline(__this, /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_016d;
		}
	}
	{
		// CoreServices.InputSystem?.RaiseSourceRotationChanged(InputSource, this, currentPointerRotation);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tDB76F6146407FDEA9A4479E5553ED32DC19AADBD_il2cpp_TypeInfo_var);
		RuntimeObject* L_45 = CoreServices_get_InputSystem_m734103F090144FE710940E31C6B3581D15572FB0(/*hidden argument*/NULL);
		RuntimeObject* L_46 = L_45;
		G_B16_0 = L_46;
		if (L_46)
		{
			G_B17_0 = L_46;
			goto IL_015b;
		}
	}
	{
		goto IL_016d;
	}

IL_015b:
	{
		RuntimeObject* L_47 = BaseController_get_InputSource_m6E124D758E6373E7E1C498AE986C460CCDC651E3_inline(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_48 = __this->get_currentPointerRotation_25();
		NullCheck(G_B17_0);
		InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  >::Invoke(28 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseSourceRotationChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,UnityEngine.Quaternion) */, IMixedRealityInputSystem_t64ABD77097BAD8C4A1194C39BFFD4E6F6CBF55B1_il2cpp_TypeInfo_var, G_B17_0, L_47, __this, L_48);
	}

IL_016d:
	{
		// for (int i = 0; i < Interactions?.Length; i++)
		V_4 = 0;
		goto IL_0403;
	}

IL_0175:
	{
		// switch (Interactions[i].InputType)
		MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* L_49 = BaseController_get_Interactions_m8C6000FF0F70063C616791046B0B93CE452AFC29_inline(__this, /*hidden argument*/NULL);
		int32_t L_50 = V_4;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 * L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		NullCheck(L_52);
		int32_t L_53 = MixedRealityInteractionMapping_get_InputType_mB3BB9A8477E555DAFFE3F1A624448D53FC4102E6_inline(L_52, /*hidden argument*/NULL);
		V_5 = L_53;
		int32_t L_54 = V_5;
		if ((((int32_t)L_54) > ((int32_t)((int32_t)13))))
		{
			goto IL_019e;
		}
	}
	{
		int32_t L_55 = V_5;
		if ((((int32_t)L_55) == ((int32_t)3)))
		{
			goto IL_01bb;
		}
	}
	{
		int32_t L_56 = V_5;
		if ((((int32_t)L_56) == ((int32_t)((int32_t)13))))
		{
			goto IL_0314;
		}
	}
	{
		goto IL_03fd;
	}

IL_019e:
	{
		int32_t L_57 = V_5;
		if ((((int32_t)L_57) == ((int32_t)((int32_t)14))))
		{
			goto IL_021a;
		}
	}
	{
		int32_t L_58 = V_5;
		if ((((int32_t)L_58) == ((int32_t)((int32_t)25))))
		{
			goto IL_0279;
		}
	}
	{
		int32_t L_59 = V_5;
		if ((((int32_t)L_59) == ((int32_t)((int32_t)33))))
		{
			goto IL_03a9;
		}
	}
	{
		goto IL_03fd;
	}

IL_01bb:
	{
		// Interactions[i].PoseData = currentPointerPose;
		MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* L_60 = BaseController_get_Interactions_m8C6000FF0F70063C616791046B0B93CE452AFC29_inline(__this, /*hidden argument*/NULL);
		int32_t L_61 = V_4;
		NullCheck(L_60);
		int32_t L_62 = L_61;
		MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 * L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  L_64 = __this->get_currentPointerPose_27();
		NullCheck(L_63);
		MixedRealityInteractionMapping_set_PoseData_mAE3A962D306D4CCA9228111491E8AA96D523F44D(L_63, L_64, /*hidden argument*/NULL);
		// if (Interactions[i].Changed)
		MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* L_65 = BaseController_get_Interactions_m8C6000FF0F70063C616791046B0B93CE452AFC29_inline(__this, /*hidden argument*/NULL);
		int32_t L_66 = V_4;
		NullCheck(L_65);
		int32_t L_67 = L_66;
		MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 * L_68 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		NullCheck(L_68);
		bool L_69 = MixedRealityInteractionMapping_get_Changed_mFDC721362095F9525C839C0BA20EF8B9A55A37EC(L_68, /*hidden argument*/NULL);
		if (!L_69)
		{
			goto IL_03fd;
		}
	}
	{
		// CoreServices.InputSystem?.RaisePoseInputChanged(InputSource, ControllerHandedness, Interactions[i].MixedRealityInputAction, currentPointerPose);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tDB76F6146407FDEA9A4479E5553ED32DC19AADBD_il2cpp_TypeInfo_var);
		RuntimeObject* L_70 = CoreServices_get_InputSystem_m734103F090144FE710940E31C6B3581D15572FB0(/*hidden argument*/NULL);
		RuntimeObject* L_71 = L_70;
		G_B29_0 = L_71;
		if (L_71)
		{
			G_B30_0 = L_71;
			goto IL_01f0;
		}
	}
	{
		goto IL_03fd;
	}

IL_01f0:
	{
		RuntimeObject* L_72 = BaseController_get_InputSource_m6E124D758E6373E7E1C498AE986C460CCDC651E3_inline(__this, /*hidden argument*/NULL);
		uint8_t L_73 = BaseController_get_ControllerHandedness_m3D9C7DE0BE3F9F1C81C49826D67CF21175684F1A_inline(__this, /*hidden argument*/NULL);
		MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* L_74 = BaseController_get_Interactions_m8C6000FF0F70063C616791046B0B93CE452AFC29_inline(__this, /*hidden argument*/NULL);
		int32_t L_75 = V_4;
		NullCheck(L_74);
		int32_t L_76 = L_75;
		MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 * L_77 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		NullCheck(L_77);
		MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  L_78 = MixedRealityInteractionMapping_get_MixedRealityInputAction_mB9F6AA03D64CE6F746424699CD1F4993446CE41A_inline(L_77, /*hidden argument*/NULL);
		MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  L_79 = __this->get_currentPointerPose_27();
		NullCheck(G_B30_0);
		InterfaceActionInvoker4< RuntimeObject*, uint8_t, MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35 , MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  >::Invoke(44 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaisePoseInputChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose) */, IMixedRealityInputSystem_t64ABD77097BAD8C4A1194C39BFFD4E6F6CBF55B1_il2cpp_TypeInfo_var, G_B30_0, L_72, L_73, L_78, L_79);
		// break;
		goto IL_03fd;
	}

IL_021a:
	{
		// Interactions[i].PoseData = currentGripPose;
		MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* L_80 = BaseController_get_Interactions_m8C6000FF0F70063C616791046B0B93CE452AFC29_inline(__this, /*hidden argument*/NULL);
		int32_t L_81 = V_4;
		NullCheck(L_80);
		int32_t L_82 = L_81;
		MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 * L_83 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  L_84 = __this->get_currentGripPose_29();
		NullCheck(L_83);
		MixedRealityInteractionMapping_set_PoseData_mAE3A962D306D4CCA9228111491E8AA96D523F44D(L_83, L_84, /*hidden argument*/NULL);
		// if (Interactions[i].Changed)
		MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* L_85 = BaseController_get_Interactions_m8C6000FF0F70063C616791046B0B93CE452AFC29_inline(__this, /*hidden argument*/NULL);
		int32_t L_86 = V_4;
		NullCheck(L_85);
		int32_t L_87 = L_86;
		MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 * L_88 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		NullCheck(L_88);
		bool L_89 = MixedRealityInteractionMapping_get_Changed_mFDC721362095F9525C839C0BA20EF8B9A55A37EC(L_88, /*hidden argument*/NULL);
		if (!L_89)
		{
			goto IL_03fd;
		}
	}
	{
		// CoreServices.InputSystem?.RaisePoseInputChanged(InputSource, ControllerHandedness, Interactions[i].MixedRealityInputAction, currentGripPose);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tDB76F6146407FDEA9A4479E5553ED32DC19AADBD_il2cpp_TypeInfo_var);
		RuntimeObject* L_90 = CoreServices_get_InputSystem_m734103F090144FE710940E31C6B3581D15572FB0(/*hidden argument*/NULL);
		RuntimeObject* L_91 = L_90;
		G_B33_0 = L_91;
		if (L_91)
		{
			G_B34_0 = L_91;
			goto IL_024f;
		}
	}
	{
		goto IL_03fd;
	}

IL_024f:
	{
		RuntimeObject* L_92 = BaseController_get_InputSource_m6E124D758E6373E7E1C498AE986C460CCDC651E3_inline(__this, /*hidden argument*/NULL);
		uint8_t L_93 = BaseController_get_ControllerHandedness_m3D9C7DE0BE3F9F1C81C49826D67CF21175684F1A_inline(__this, /*hidden argument*/NULL);
		MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* L_94 = BaseController_get_Interactions_m8C6000FF0F70063C616791046B0B93CE452AFC29_inline(__this, /*hidden argument*/NULL);
		int32_t L_95 = V_4;
		NullCheck(L_94);
		int32_t L_96 = L_95;
		MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 * L_97 = (L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		NullCheck(L_97);
		MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  L_98 = MixedRealityInteractionMapping_get_MixedRealityInputAction_mB9F6AA03D64CE6F746424699CD1F4993446CE41A_inline(L_97, /*hidden argument*/NULL);
		MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  L_99 = __this->get_currentGripPose_29();
		NullCheck(G_B34_0);
		InterfaceActionInvoker4< RuntimeObject*, uint8_t, MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35 , MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  >::Invoke(44 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaisePoseInputChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose) */, IMixedRealityInputSystem_t64ABD77097BAD8C4A1194C39BFFD4E6F6CBF55B1_il2cpp_TypeInfo_var, G_B34_0, L_92, L_93, L_98, L_99);
		// break;
		goto IL_03fd;
	}

IL_0279:
	{
		// Interactions[i].BoolData = handData.IsPinching;
		MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* L_100 = BaseController_get_Interactions_m8C6000FF0F70063C616791046B0B93CE452AFC29_inline(__this, /*hidden argument*/NULL);
		int32_t L_101 = V_4;
		NullCheck(L_100);
		int32_t L_102 = L_101;
		MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 * L_103 = (L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		SimulatedHandData_t27280EA369E2A116C61830482B52B31ABA3F39CA * L_104 = ___handData0;
		NullCheck(L_104);
		bool L_105 = SimulatedHandData_get_IsPinching_mA3A8D340B77A9643470DD4426A818E4D09DDA96F_inline(L_104, /*hidden argument*/NULL);
		NullCheck(L_103);
		MixedRealityInteractionMapping_set_BoolData_mD726B443F0E196EC9C7D78DC3EBB5FA3BD80741C(L_103, L_105, /*hidden argument*/NULL);
		// if (Interactions[i].Changed)
		MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* L_106 = BaseController_get_Interactions_m8C6000FF0F70063C616791046B0B93CE452AFC29_inline(__this, /*hidden argument*/NULL);
		int32_t L_107 = V_4;
		NullCheck(L_106);
		int32_t L_108 = L_107;
		MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 * L_109 = (L_106)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		NullCheck(L_109);
		bool L_110 = MixedRealityInteractionMapping_get_Changed_mFDC721362095F9525C839C0BA20EF8B9A55A37EC(L_109, /*hidden argument*/NULL);
		if (!L_110)
		{
			goto IL_03fd;
		}
	}
	{
		// if (Interactions[i].BoolData)
		MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* L_111 = BaseController_get_Interactions_m8C6000FF0F70063C616791046B0B93CE452AFC29_inline(__this, /*hidden argument*/NULL);
		int32_t L_112 = V_4;
		NullCheck(L_111);
		int32_t L_113 = L_112;
		MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 * L_114 = (L_111)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		NullCheck(L_114);
		bool L_115 = MixedRealityInteractionMapping_get_BoolData_m9B49EA23CE1DD08217097A26D1D5A89EAD2645D6_inline(L_114, /*hidden argument*/NULL);
		if (!L_115)
		{
			goto IL_02e2;
		}
	}
	{
		// CoreServices.InputSystem?.RaiseOnInputDown(InputSource, ControllerHandedness, Interactions[i].MixedRealityInputAction);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tDB76F6146407FDEA9A4479E5553ED32DC19AADBD_il2cpp_TypeInfo_var);
		RuntimeObject* L_116 = CoreServices_get_InputSystem_m734103F090144FE710940E31C6B3581D15572FB0(/*hidden argument*/NULL);
		RuntimeObject* L_117 = L_116;
		G_B38_0 = L_117;
		if (L_117)
		{
			G_B39_0 = L_117;
			goto IL_02be;
		}
	}
	{
		goto IL_03fd;
	}

IL_02be:
	{
		RuntimeObject* L_118 = BaseController_get_InputSource_m6E124D758E6373E7E1C498AE986C460CCDC651E3_inline(__this, /*hidden argument*/NULL);
		uint8_t L_119 = BaseController_get_ControllerHandedness_m3D9C7DE0BE3F9F1C81C49826D67CF21175684F1A_inline(__this, /*hidden argument*/NULL);
		MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* L_120 = BaseController_get_Interactions_m8C6000FF0F70063C616791046B0B93CE452AFC29_inline(__this, /*hidden argument*/NULL);
		int32_t L_121 = V_4;
		NullCheck(L_120);
		int32_t L_122 = L_121;
		MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 * L_123 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		NullCheck(L_123);
		MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  L_124 = MixedRealityInteractionMapping_get_MixedRealityInputAction_mB9F6AA03D64CE6F746424699CD1F4993446CE41A_inline(L_123, /*hidden argument*/NULL);
		NullCheck(G_B39_0);
		InterfaceActionInvoker3< RuntimeObject*, uint8_t, MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  >::Invoke(38 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseOnInputDown(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_t64ABD77097BAD8C4A1194C39BFFD4E6F6CBF55B1_il2cpp_TypeInfo_var, G_B39_0, L_118, L_119, L_124);
		// }
		goto IL_03fd;
	}

IL_02e2:
	{
		// CoreServices.InputSystem?.RaiseOnInputUp(InputSource, ControllerHandedness, Interactions[i].MixedRealityInputAction);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tDB76F6146407FDEA9A4479E5553ED32DC19AADBD_il2cpp_TypeInfo_var);
		RuntimeObject* L_125 = CoreServices_get_InputSystem_m734103F090144FE710940E31C6B3581D15572FB0(/*hidden argument*/NULL);
		RuntimeObject* L_126 = L_125;
		G_B41_0 = L_126;
		if (L_126)
		{
			G_B42_0 = L_126;
			goto IL_02f0;
		}
	}
	{
		goto IL_03fd;
	}

IL_02f0:
	{
		RuntimeObject* L_127 = BaseController_get_InputSource_m6E124D758E6373E7E1C498AE986C460CCDC651E3_inline(__this, /*hidden argument*/NULL);
		uint8_t L_128 = BaseController_get_ControllerHandedness_m3D9C7DE0BE3F9F1C81C49826D67CF21175684F1A_inline(__this, /*hidden argument*/NULL);
		MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* L_129 = BaseController_get_Interactions_m8C6000FF0F70063C616791046B0B93CE452AFC29_inline(__this, /*hidden argument*/NULL);
		int32_t L_130 = V_4;
		NullCheck(L_129);
		int32_t L_131 = L_130;
		MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 * L_132 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_131));
		NullCheck(L_132);
		MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  L_133 = MixedRealityInteractionMapping_get_MixedRealityInputAction_mB9F6AA03D64CE6F746424699CD1F4993446CE41A_inline(L_132, /*hidden argument*/NULL);
		NullCheck(G_B42_0);
		InterfaceActionInvoker3< RuntimeObject*, uint8_t, MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  >::Invoke(39 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseOnInputUp(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_t64ABD77097BAD8C4A1194C39BFFD4E6F6CBF55B1_il2cpp_TypeInfo_var, G_B42_0, L_127, L_128, L_133);
		// break;
		goto IL_03fd;
	}

IL_0314:
	{
		// Interactions[i].BoolData = handData.IsPinching;
		MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* L_134 = BaseController_get_Interactions_m8C6000FF0F70063C616791046B0B93CE452AFC29_inline(__this, /*hidden argument*/NULL);
		int32_t L_135 = V_4;
		NullCheck(L_134);
		int32_t L_136 = L_135;
		MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 * L_137 = (L_134)->GetAt(static_cast<il2cpp_array_size_t>(L_136));
		SimulatedHandData_t27280EA369E2A116C61830482B52B31ABA3F39CA * L_138 = ___handData0;
		NullCheck(L_138);
		bool L_139 = SimulatedHandData_get_IsPinching_mA3A8D340B77A9643470DD4426A818E4D09DDA96F_inline(L_138, /*hidden argument*/NULL);
		NullCheck(L_137);
		MixedRealityInteractionMapping_set_BoolData_mD726B443F0E196EC9C7D78DC3EBB5FA3BD80741C(L_137, L_139, /*hidden argument*/NULL);
		// if (Interactions[i].Changed)
		MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* L_140 = BaseController_get_Interactions_m8C6000FF0F70063C616791046B0B93CE452AFC29_inline(__this, /*hidden argument*/NULL);
		int32_t L_141 = V_4;
		NullCheck(L_140);
		int32_t L_142 = L_141;
		MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 * L_143 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_142));
		NullCheck(L_143);
		bool L_144 = MixedRealityInteractionMapping_get_Changed_mFDC721362095F9525C839C0BA20EF8B9A55A37EC(L_143, /*hidden argument*/NULL);
		if (!L_144)
		{
			goto IL_03fd;
		}
	}
	{
		// if (Interactions[i].BoolData)
		MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* L_145 = BaseController_get_Interactions_m8C6000FF0F70063C616791046B0B93CE452AFC29_inline(__this, /*hidden argument*/NULL);
		int32_t L_146 = V_4;
		NullCheck(L_145);
		int32_t L_147 = L_146;
		MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 * L_148 = (L_145)->GetAt(static_cast<il2cpp_array_size_t>(L_147));
		NullCheck(L_148);
		bool L_149 = MixedRealityInteractionMapping_get_BoolData_m9B49EA23CE1DD08217097A26D1D5A89EAD2645D6_inline(L_148, /*hidden argument*/NULL);
		if (!L_149)
		{
			goto IL_037d;
		}
	}
	{
		// CoreServices.InputSystem?.RaiseOnInputDown(InputSource, ControllerHandedness, Interactions[i].MixedRealityInputAction);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tDB76F6146407FDEA9A4479E5553ED32DC19AADBD_il2cpp_TypeInfo_var);
		RuntimeObject* L_150 = CoreServices_get_InputSystem_m734103F090144FE710940E31C6B3581D15572FB0(/*hidden argument*/NULL);
		RuntimeObject* L_151 = L_150;
		G_B46_0 = L_151;
		if (L_151)
		{
			G_B47_0 = L_151;
			goto IL_0359;
		}
	}
	{
		goto IL_03fd;
	}

IL_0359:
	{
		RuntimeObject* L_152 = BaseController_get_InputSource_m6E124D758E6373E7E1C498AE986C460CCDC651E3_inline(__this, /*hidden argument*/NULL);
		uint8_t L_153 = BaseController_get_ControllerHandedness_m3D9C7DE0BE3F9F1C81C49826D67CF21175684F1A_inline(__this, /*hidden argument*/NULL);
		MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* L_154 = BaseController_get_Interactions_m8C6000FF0F70063C616791046B0B93CE452AFC29_inline(__this, /*hidden argument*/NULL);
		int32_t L_155 = V_4;
		NullCheck(L_154);
		int32_t L_156 = L_155;
		MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 * L_157 = (L_154)->GetAt(static_cast<il2cpp_array_size_t>(L_156));
		NullCheck(L_157);
		MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  L_158 = MixedRealityInteractionMapping_get_MixedRealityInputAction_mB9F6AA03D64CE6F746424699CD1F4993446CE41A_inline(L_157, /*hidden argument*/NULL);
		NullCheck(G_B47_0);
		InterfaceActionInvoker3< RuntimeObject*, uint8_t, MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  >::Invoke(38 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseOnInputDown(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_t64ABD77097BAD8C4A1194C39BFFD4E6F6CBF55B1_il2cpp_TypeInfo_var, G_B47_0, L_152, L_153, L_158);
		// }
		goto IL_03fd;
	}

IL_037d:
	{
		// CoreServices.InputSystem?.RaiseOnInputUp(InputSource, ControllerHandedness, Interactions[i].MixedRealityInputAction);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tDB76F6146407FDEA9A4479E5553ED32DC19AADBD_il2cpp_TypeInfo_var);
		RuntimeObject* L_159 = CoreServices_get_InputSystem_m734103F090144FE710940E31C6B3581D15572FB0(/*hidden argument*/NULL);
		RuntimeObject* L_160 = L_159;
		G_B49_0 = L_160;
		if (L_160)
		{
			G_B50_0 = L_160;
			goto IL_0388;
		}
	}
	{
		goto IL_03fd;
	}

IL_0388:
	{
		RuntimeObject* L_161 = BaseController_get_InputSource_m6E124D758E6373E7E1C498AE986C460CCDC651E3_inline(__this, /*hidden argument*/NULL);
		uint8_t L_162 = BaseController_get_ControllerHandedness_m3D9C7DE0BE3F9F1C81C49826D67CF21175684F1A_inline(__this, /*hidden argument*/NULL);
		MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* L_163 = BaseController_get_Interactions_m8C6000FF0F70063C616791046B0B93CE452AFC29_inline(__this, /*hidden argument*/NULL);
		int32_t L_164 = V_4;
		NullCheck(L_163);
		int32_t L_165 = L_164;
		MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 * L_166 = (L_163)->GetAt(static_cast<il2cpp_array_size_t>(L_165));
		NullCheck(L_166);
		MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  L_167 = MixedRealityInteractionMapping_get_MixedRealityInputAction_mB9F6AA03D64CE6F746424699CD1F4993446CE41A_inline(L_166, /*hidden argument*/NULL);
		NullCheck(G_B50_0);
		InterfaceActionInvoker3< RuntimeObject*, uint8_t, MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  >::Invoke(39 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseOnInputUp(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_t64ABD77097BAD8C4A1194C39BFFD4E6F6CBF55B1_il2cpp_TypeInfo_var, G_B50_0, L_161, L_162, L_167);
		// break;
		goto IL_03fd;
	}

IL_03a9:
	{
		// Interactions[i].PoseData = currentIndexPose;
		MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* L_168 = BaseController_get_Interactions_m8C6000FF0F70063C616791046B0B93CE452AFC29_inline(__this, /*hidden argument*/NULL);
		int32_t L_169 = V_4;
		NullCheck(L_168);
		int32_t L_170 = L_169;
		MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 * L_171 = (L_168)->GetAt(static_cast<il2cpp_array_size_t>(L_170));
		MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  L_172 = __this->get_currentIndexPose_28();
		NullCheck(L_171);
		MixedRealityInteractionMapping_set_PoseData_mAE3A962D306D4CCA9228111491E8AA96D523F44D(L_171, L_172, /*hidden argument*/NULL);
		// if (Interactions[i].Changed)
		MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* L_173 = BaseController_get_Interactions_m8C6000FF0F70063C616791046B0B93CE452AFC29_inline(__this, /*hidden argument*/NULL);
		int32_t L_174 = V_4;
		NullCheck(L_173);
		int32_t L_175 = L_174;
		MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 * L_176 = (L_173)->GetAt(static_cast<il2cpp_array_size_t>(L_175));
		NullCheck(L_176);
		bool L_177 = MixedRealityInteractionMapping_get_Changed_mFDC721362095F9525C839C0BA20EF8B9A55A37EC(L_176, /*hidden argument*/NULL);
		if (!L_177)
		{
			goto IL_03fd;
		}
	}
	{
		// CoreServices.InputSystem?.RaisePoseInputChanged(InputSource, ControllerHandedness, Interactions[i].MixedRealityInputAction, currentIndexPose);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tDB76F6146407FDEA9A4479E5553ED32DC19AADBD_il2cpp_TypeInfo_var);
		RuntimeObject* L_178 = CoreServices_get_InputSystem_m734103F090144FE710940E31C6B3581D15572FB0(/*hidden argument*/NULL);
		RuntimeObject* L_179 = L_178;
		G_B53_0 = L_179;
		if (L_179)
		{
			G_B54_0 = L_179;
			goto IL_03d8;
		}
	}
	{
		goto IL_03fd;
	}

IL_03d8:
	{
		RuntimeObject* L_180 = BaseController_get_InputSource_m6E124D758E6373E7E1C498AE986C460CCDC651E3_inline(__this, /*hidden argument*/NULL);
		uint8_t L_181 = BaseController_get_ControllerHandedness_m3D9C7DE0BE3F9F1C81C49826D67CF21175684F1A_inline(__this, /*hidden argument*/NULL);
		MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* L_182 = BaseController_get_Interactions_m8C6000FF0F70063C616791046B0B93CE452AFC29_inline(__this, /*hidden argument*/NULL);
		int32_t L_183 = V_4;
		NullCheck(L_182);
		int32_t L_184 = L_183;
		MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 * L_185 = (L_182)->GetAt(static_cast<il2cpp_array_size_t>(L_184));
		NullCheck(L_185);
		MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  L_186 = MixedRealityInteractionMapping_get_MixedRealityInputAction_mB9F6AA03D64CE6F746424699CD1F4993446CE41A_inline(L_185, /*hidden argument*/NULL);
		MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  L_187 = __this->get_currentIndexPose_28();
		NullCheck(G_B54_0);
		InterfaceActionInvoker4< RuntimeObject*, uint8_t, MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35 , MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  >::Invoke(44 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaisePoseInputChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose) */, IMixedRealityInputSystem_t64ABD77097BAD8C4A1194C39BFFD4E6F6CBF55B1_il2cpp_TypeInfo_var, G_B54_0, L_180, L_181, L_186, L_187);
	}

IL_03fd:
	{
		// for (int i = 0; i < Interactions?.Length; i++)
		int32_t L_188 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_188, (int32_t)1));
	}

IL_0403:
	{
		// for (int i = 0; i < Interactions?.Length; i++)
		int32_t L_189 = V_4;
		MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* L_190 = BaseController_get_Interactions_m8C6000FF0F70063C616791046B0B93CE452AFC29_inline(__this, /*hidden argument*/NULL);
		MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* L_191 = L_190;
		G_B57_0 = L_191;
		G_B57_1 = L_189;
		if (L_191)
		{
			G_B58_0 = L_191;
			G_B58_1 = L_189;
			goto IL_041b;
		}
	}
	{
		il2cpp_codegen_initobj((&V_7), sizeof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 ));
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_192 = V_7;
		G_B59_0 = L_192;
		G_B59_1 = G_B57_1;
		goto IL_0422;
	}

IL_041b:
	{
		NullCheck(G_B58_0);
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_193;
		memset((&L_193), 0, sizeof(L_193));
		Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184((&L_193), (((int32_t)((int32_t)(((RuntimeArray*)G_B58_0)->max_length)))), /*hidden argument*/Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var);
		G_B59_0 = L_193;
		G_B59_1 = G_B58_1;
	}

IL_0422:
	{
		V_6 = G_B59_0;
		int32_t L_194 = Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_6), /*hidden argument*/Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var);
		bool L_195 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_6), /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		if (((int32_t)((int32_t)((((int32_t)G_B59_1) < ((int32_t)L_194))? 1 : 0)&(int32_t)L_195)))
		{
			goto IL_0175;
		}
	}
	{
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
// Microsoft.MixedReality.Toolkit.Input.HandSimulationMode Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::get_SimulationMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SimulatedGestureHand_get_SimulationMode_m049BE347D66C579A47827C26FCED1BF1537DE6F7 (SimulatedGestureHand_tE8FD4F9A907C2909BB38CDEFDA82507DF0220BF4 * __this, const RuntimeMethod* method)
{
	{
		// public override HandSimulationMode SimulationMode => HandSimulationMode.Gestures;
		return (int32_t)(1);
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::get_NavigationDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  SimulatedGestureHand_get_NavigationDelta_m6A6065F8B89330B67E758E062CE189DBAC96B3DD (SimulatedGestureHand_tE8FD4F9A907C2909BB38CDEFDA82507DF0220BF4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand_get_NavigationDelta_m6A6065F8B89330B67E758E062CE189DBAC96B3DD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Vector3 NavigationDelta => new Vector3(
		//     Mathf.Clamp(cumulativeDelta.x, -1.0f, 1.0f) * currentRailsUsed.x,
		//     Mathf.Clamp(cumulativeDelta.y, -1.0f, 1.0f) * currentRailsUsed.y,
		//     Mathf.Clamp(cumulativeDelta.z, -1.0f, 1.0f) * currentRailsUsed.z);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_0 = __this->get_address_of_cumulativeDelta_38();
		float L_1 = L_0->get_x_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		float L_2 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_1, (-1.0f), (1.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_3 = __this->get_address_of_currentRailsUsed_36();
		float L_4 = L_3->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_5 = __this->get_address_of_cumulativeDelta_38();
		float L_6 = L_5->get_y_3();
		float L_7 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_6, (-1.0f), (1.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_8 = __this->get_address_of_currentRailsUsed_36();
		float L_9 = L_8->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_10 = __this->get_address_of_cumulativeDelta_38();
		float L_11 = L_10->get_z_4();
		float L_12 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_11, (-1.0f), (1.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_13 = __this->get_address_of_currentRailsUsed_36();
		float L_14 = L_13->get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_15), ((float)il2cpp_codegen_multiply((float)L_2, (float)L_4)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_9)), ((float)il2cpp_codegen_multiply((float)L_12, (float)L_14)), /*hidden argument*/NULL);
		return L_15;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedGestureHand__ctor_m08C3D6B45771D0D7C99FF5287BAFBC00F582EC50 (SimulatedGestureHand_tE8FD4F9A907C2909BB38CDEFDA82507DF0220BF4 * __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* ___interactions3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand__ctor_m08C3D6B45771D0D7C99FF5287BAFBC00F582EC50_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private MixedRealityInputAction holdAction = MixedRealityInputAction.None;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35_il2cpp_TypeInfo_var);
		MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  L_0 = MixedRealityInputAction_get_None_mE8893070C64BA6EA2339B7D0C413DE755D7D4D6E_inline(/*hidden argument*/NULL);
		__this->set_holdAction_25(L_0);
		// private MixedRealityInputAction navigationAction = MixedRealityInputAction.None;
		MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  L_1 = MixedRealityInputAction_get_None_mE8893070C64BA6EA2339B7D0C413DE755D7D4D6E_inline(/*hidden argument*/NULL);
		__this->set_navigationAction_26(L_1);
		// private MixedRealityInputAction manipulationAction = MixedRealityInputAction.None;
		MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  L_2 = MixedRealityInputAction_get_None_mE8893070C64BA6EA2339B7D0C413DE755D7D4D6E_inline(/*hidden argument*/NULL);
		__this->set_manipulationAction_27(L_2);
		// private MixedRealityInputAction selectAction = MixedRealityInputAction.None;
		MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  L_3 = MixedRealityInputAction_get_None_mE8893070C64BA6EA2339B7D0C413DE755D7D4D6E_inline(/*hidden argument*/NULL);
		__this->set_selectAction_28(L_3);
		// private Vector3 currentRailsUsed = Vector3.one;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		__this->set_currentRailsUsed_36(L_4);
		// private Vector3 currentPosition = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_currentPosition_37(L_5);
		// private Vector3 cumulativeDelta = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_cumulativeDelta_38(L_6);
		// private MixedRealityPose currentGripPose = MixedRealityPose.ZeroIdentity;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5_il2cpp_TypeInfo_var);
		MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  L_7 = MixedRealityPose_get_ZeroIdentity_m7DFFCF17695B53E77ABCC4035C292C405996350E_inline(/*hidden argument*/NULL);
		__this->set_currentGripPose_39(L_7);
		// : base(trackingState, controllerHandedness, inputSource, interactions)
		int32_t L_8 = ___trackingState0;
		uint8_t L_9 = ___controllerHandedness1;
		RuntimeObject* L_10 = ___inputSource2;
		MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* L_11 = ___interactions3;
		IL2CPP_RUNTIME_CLASS_INIT(SimulatedHand_tC79023B162FCFC9F05824CBBE1DCFBC2373217E7_il2cpp_TypeInfo_var);
		SimulatedHand__ctor_m31621E2759004ECF6C2B0CAAF93035C3C3E2A596(__this, L_8, L_9, L_10, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::EnsureProfileSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedGestureHand_EnsureProfileSettings_m645609FE30D6AFD16D4A81E3F4F020E07A27FC40 (SimulatedGestureHand_tE8FD4F9A907C2909BB38CDEFDA82507DF0220BF4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand_EnsureProfileSettings_m645609FE30D6AFD16D4A81E3F4F020E07A27FC40_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityGesturesProfile_tA3455FE721279843B94D506C063398F644EEA005 * V_0 = NULL;
	MixedRealityInputSystemProfile_t6086D1D813224695CFB52FA000EDC2A6B6125255 * V_1 = NULL;
	MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1 * V_2 = NULL;
	int32_t V_3 = 0;
	MixedRealityGestureMapping_tC8B239DD943E25B72D110F4AC2589E62D1FCA0E1  V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	RuntimeObject* G_B4_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	MixedRealityInputSystemProfile_t6086D1D813224695CFB52FA000EDC2A6B6125255 * G_B5_0 = NULL;
	RuntimeObject* G_B21_0 = NULL;
	RuntimeObject* G_B20_0 = NULL;
	MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1 * G_B22_0 = NULL;
	{
		// if (initializedFromProfile)
		bool L_0 = __this->get_initializedFromProfile_24();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// initializedFromProfile = true;
		__this->set_initializedFromProfile_24((bool)1);
		// MixedRealityGesturesProfile gestureProfile = null;
		V_0 = (MixedRealityGesturesProfile_tA3455FE721279843B94D506C063398F644EEA005 *)NULL;
		// MixedRealityInputSystemProfile inputSystemProfile = CoreServices.InputSystem?.InputSystemProfile;
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tDB76F6146407FDEA9A4479E5553ED32DC19AADBD_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = CoreServices_get_InputSystem_m734103F090144FE710940E31C6B3581D15572FB0(/*hidden argument*/NULL);
		RuntimeObject* L_2 = L_1;
		G_B3_0 = L_2;
		if (L_2)
		{
			G_B4_0 = L_2;
			goto IL_001e;
		}
	}
	{
		G_B5_0 = ((MixedRealityInputSystemProfile_t6086D1D813224695CFB52FA000EDC2A6B6125255 *)(NULL));
		goto IL_0023;
	}

IL_001e:
	{
		NullCheck(G_B4_0);
		MixedRealityInputSystemProfile_t6086D1D813224695CFB52FA000EDC2A6B6125255 * L_3 = InterfaceFuncInvoker0< MixedRealityInputSystemProfile_t6086D1D813224695CFB52FA000EDC2A6B6125255 * >::Invoke(6 /* Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::get_InputSystemProfile() */, IMixedRealityInputSystem_t64ABD77097BAD8C4A1194C39BFFD4E6F6CBF55B1_il2cpp_TypeInfo_var, G_B4_0);
		G_B5_0 = L_3;
	}

IL_0023:
	{
		V_1 = G_B5_0;
		// if (inputSystemProfile != null)
		MixedRealityInputSystemProfile_t6086D1D813224695CFB52FA000EDC2A6B6125255 * L_4 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		// gestureProfile = inputSystemProfile.GesturesProfile;
		MixedRealityInputSystemProfile_t6086D1D813224695CFB52FA000EDC2A6B6125255 * L_6 = V_1;
		NullCheck(L_6);
		MixedRealityGesturesProfile_tA3455FE721279843B94D506C063398F644EEA005 * L_7 = MixedRealityInputSystemProfile_get_GesturesProfile_m475DF784CE48F155004368AD88E7CA6CD64F3D3E_inline(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
	}

IL_0034:
	{
		// if (gestureProfile != null)
		MixedRealityGesturesProfile_tA3455FE721279843B94D506C063398F644EEA005 * L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_8, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_00cb;
		}
	}
	{
		// for (int i = 0; i < gestureProfile.Gestures.Length; i++)
		V_3 = 0;
		goto IL_00b4;
	}

IL_0044:
	{
		// var gesture = gestureProfile.Gestures[i];
		MixedRealityGesturesProfile_tA3455FE721279843B94D506C063398F644EEA005 * L_10 = V_0;
		NullCheck(L_10);
		MixedRealityGestureMappingU5BU5D_t5083898BA53AAB77B3DDE57E6F4F90B87B64C480* L_11 = MixedRealityGesturesProfile_get_Gestures_m03E4FD32A250FEDFA36E226832F3619B840937BC_inline(L_10, /*hidden argument*/NULL);
		int32_t L_12 = V_3;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		MixedRealityGestureMapping_tC8B239DD943E25B72D110F4AC2589E62D1FCA0E1  L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = L_14;
		// switch (gesture.GestureType)
		int32_t L_15 = MixedRealityGestureMapping_get_GestureType_m920653F9DF61975597BB33ECEE65E3CF00E3FE0A_inline((MixedRealityGestureMapping_tC8B239DD943E25B72D110F4AC2589E62D1FCA0E1 *)(&V_4), /*hidden argument*/NULL);
		V_5 = L_15;
		int32_t L_16 = V_5;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0076;
			}
			case 1:
			{
				goto IL_0094;
			}
			case 2:
			{
				goto IL_0085;
			}
			case 3:
			{
				goto IL_00a3;
			}
		}
	}
	{
		goto IL_00b0;
	}

IL_0076:
	{
		// holdAction = gesture.Action;
		MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  L_17 = MixedRealityGestureMapping_get_Action_m5A65903158DF4543D9CAA4A5EDF2D4E6AEB31CEF_inline((MixedRealityGestureMapping_tC8B239DD943E25B72D110F4AC2589E62D1FCA0E1 *)(&V_4), /*hidden argument*/NULL);
		__this->set_holdAction_25(L_17);
		// break;
		goto IL_00b0;
	}

IL_0085:
	{
		// manipulationAction = gesture.Action;
		MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  L_18 = MixedRealityGestureMapping_get_Action_m5A65903158DF4543D9CAA4A5EDF2D4E6AEB31CEF_inline((MixedRealityGestureMapping_tC8B239DD943E25B72D110F4AC2589E62D1FCA0E1 *)(&V_4), /*hidden argument*/NULL);
		__this->set_manipulationAction_27(L_18);
		// break;
		goto IL_00b0;
	}

IL_0094:
	{
		// navigationAction = gesture.Action;
		MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  L_19 = MixedRealityGestureMapping_get_Action_m5A65903158DF4543D9CAA4A5EDF2D4E6AEB31CEF_inline((MixedRealityGestureMapping_tC8B239DD943E25B72D110F4AC2589E62D1FCA0E1 *)(&V_4), /*hidden argument*/NULL);
		__this->set_navigationAction_26(L_19);
		// break;
		goto IL_00b0;
	}

IL_00a3:
	{
		// selectAction = gesture.Action;
		MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  L_20 = MixedRealityGestureMapping_get_Action_m5A65903158DF4543D9CAA4A5EDF2D4E6AEB31CEF_inline((MixedRealityGestureMapping_tC8B239DD943E25B72D110F4AC2589E62D1FCA0E1 *)(&V_4), /*hidden argument*/NULL);
		__this->set_selectAction_28(L_20);
	}

IL_00b0:
	{
		// for (int i = 0; i < gestureProfile.Gestures.Length; i++)
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_00b4:
	{
		// for (int i = 0; i < gestureProfile.Gestures.Length; i++)
		int32_t L_22 = V_3;
		MixedRealityGesturesProfile_tA3455FE721279843B94D506C063398F644EEA005 * L_23 = V_0;
		NullCheck(L_23);
		MixedRealityGestureMappingU5BU5D_t5083898BA53AAB77B3DDE57E6F4F90B87B64C480* L_24 = MixedRealityGesturesProfile_get_Gestures_m03E4FD32A250FEDFA36E226832F3619B840937BC_inline(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		if ((((int32_t)L_22) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)))))))
		{
			goto IL_0044;
		}
	}
	{
		// useRailsNavigation = gestureProfile.UseRailsNavigation;
		MixedRealityGesturesProfile_tA3455FE721279843B94D506C063398F644EEA005 * L_25 = V_0;
		NullCheck(L_25);
		bool L_26 = MixedRealityGesturesProfile_get_UseRailsNavigation_m0A74F0125D179A02EBB612502429FD5A01067504_inline(L_25, /*hidden argument*/NULL);
		__this->set_useRailsNavigation_29(L_26);
	}

IL_00cb:
	{
		// MixedRealityInputSimulationProfile inputSimProfile = null;
		V_2 = (MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1 *)NULL;
		// if (CoreServices.InputSystem != null)
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tDB76F6146407FDEA9A4479E5553ED32DC19AADBD_il2cpp_TypeInfo_var);
		RuntimeObject* L_27 = CoreServices_get_InputSystem_m734103F090144FE710940E31C6B3581D15572FB0(/*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00f1;
		}
	}
	{
		// inputSimProfile = (CoreServices.InputSystem as IMixedRealityDataProviderAccess).GetDataProvider<IInputSimulationService>()?.InputSimulationProfile;
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tDB76F6146407FDEA9A4479E5553ED32DC19AADBD_il2cpp_TypeInfo_var);
		RuntimeObject* L_28 = CoreServices_get_InputSystem_m734103F090144FE710940E31C6B3581D15572FB0(/*hidden argument*/NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_28, IMixedRealityDataProviderAccess_t374BBC423F74323FAAE54B45D01DD9D0AEDF1743_il2cpp_TypeInfo_var)));
		RuntimeObject* L_29 = GenericInterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(IMixedRealityDataProviderAccess_GetDataProvider_TisIInputSimulationService_t16D137E0A44488E9559599E05EC29C6E0C635B0F_m0734A255BD409E3616EBDEEFBBA87669ACF3AE35_RuntimeMethod_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_28, IMixedRealityDataProviderAccess_t374BBC423F74323FAAE54B45D01DD9D0AEDF1743_il2cpp_TypeInfo_var)), (String_t*)NULL);
		RuntimeObject* L_30 = L_29;
		G_B20_0 = L_30;
		if (L_30)
		{
			G_B21_0 = L_30;
			goto IL_00eb;
		}
	}
	{
		G_B22_0 = ((MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1 *)(NULL));
		goto IL_00f0;
	}

IL_00eb:
	{
		NullCheck(G_B21_0);
		MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1 * L_31 = InterfaceFuncInvoker0< MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1 * >::Invoke(0 /* Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile Microsoft.MixedReality.Toolkit.Input.IInputSimulationService::get_InputSimulationProfile() */, IInputSimulationService_t16D137E0A44488E9559599E05EC29C6E0C635B0F_il2cpp_TypeInfo_var, G_B21_0);
		G_B22_0 = L_31;
	}

IL_00f0:
	{
		V_2 = G_B22_0;
	}

IL_00f1:
	{
		// if (inputSimProfile != null)
		MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1 * L_32 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_33 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_32, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_0112;
		}
	}
	{
		// holdStartDuration = inputSimProfile.HoldStartDuration;
		MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1 * L_34 = V_2;
		NullCheck(L_34);
		float L_35 = MixedRealityInputSimulationProfile_get_HoldStartDuration_m381060A249D46CA0AA4F602CC104BE888EA2B1A2_inline(L_34, /*hidden argument*/NULL);
		__this->set_holdStartDuration_30(L_35);
		// navigationStartThreshold = inputSimProfile.NavigationStartThreshold;
		MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1 * L_36 = V_2;
		NullCheck(L_36);
		float L_37 = MixedRealityInputSimulationProfile_get_NavigationStartThreshold_m14EF89E8C3B57F9B7C85AAB0D7DC3D4F2FC966B1_inline(L_36, /*hidden argument*/NULL);
		__this->set_navigationStartThreshold_31(L_37);
	}

IL_0112:
	{
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::get_DefaultInteractions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* SimulatedGestureHand_get_DefaultInteractions_m6B0F9BA2E29668A76AFBEB3F291E3F5C5C26F21E (SimulatedGestureHand_tE8FD4F9A907C2909BB38CDEFDA82507DF0220BF4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand_get_DefaultInteractions_m6B0F9BA2E29668A76AFBEB3F291E3F5C5C26F21E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override MixedRealityInteractionMapping[] DefaultInteractions => new[]
		// {
		//     new MixedRealityInteractionMapping(0, "Select", AxisType.Digital, DeviceInputType.Select),
		//     new MixedRealityInteractionMapping(1, "Grip Pose", AxisType.SixDof, DeviceInputType.SpatialGrip),
		// };
		MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* L_0 = (MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D*)(MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D*)SZArrayNew(MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D_il2cpp_TypeInfo_var, (uint32_t)2);
		MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* L_1 = L_0;
		MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 * L_2 = (MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_m927CB3497C64EA1EE7EF2FAEDC15A611FA4D1571(L_2, 0, _stringLiteral31E8E4ACB2EDC39B158FBA91185DE1333306F668, 2, ((int32_t)25), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 *)L_2);
		MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* L_3 = L_1;
		MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 * L_4 = (MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_m927CB3497C64EA1EE7EF2FAEDC15A611FA4D1571(L_4, 1, _stringLiteral7C44CFC5FE4DF6EF8FEA0E3D8457CC36A8AC2C8F, 7, ((int32_t)14), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 *)L_4);
		return L_3;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::UpdateInteractions(Microsoft.MixedReality.Toolkit.Input.SimulatedHandData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedGestureHand_UpdateInteractions_mDDBC922F764FB9E9D91ADF021603CADA7E232357 (SimulatedGestureHand_tE8FD4F9A907C2909BB38CDEFDA82507DF0220BF4 * __this, SimulatedHandData_t27280EA369E2A116C61830482B52B31ABA3F39CA * ___handData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand_UpdateInteractions_mDDBC922F764FB9E9D91ADF021603CADA7E232357_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B11_0 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B16_0 = NULL;
	RuntimeObject* G_B15_0 = NULL;
	RuntimeObject* G_B20_0 = NULL;
	RuntimeObject* G_B19_0 = NULL;
	MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* G_B34_0 = NULL;
	int32_t G_B34_1 = 0;
	MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* G_B33_0 = NULL;
	int32_t G_B33_1 = 0;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  G_B35_0;
	memset((&G_B35_0), 0, sizeof(G_B35_0));
	int32_t G_B35_1 = 0;
	{
		// EnsureProfileSettings();
		SimulatedGestureHand_EnsureProfileSettings_m645609FE30D6AFD16D4A81E3F4F020E07A27FC40(__this, /*hidden argument*/NULL);
		// Vector3 lastPosition = currentPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_currentPosition_37();
		V_0 = L_0;
		// currentPosition = jointPoses[TrackedHandJoint.IndexTip].Position;
		Dictionary_2_t2608D8F85D3104F212EC3BC05E54C1515108B68E * L_1 = ((SimulatedHand_tC79023B162FCFC9F05824CBBE1DCFBC2373217E7 *)__this)->get_jointPoses_23();
		NullCheck(L_1);
		MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  L_2 = Dictionary_2_get_Item_m1F8B2A38633AAAAEDFC64FC9113F2270BB32D5B9(L_1, ((int32_t)11), /*hidden argument*/Dictionary_2_get_Item_m1F8B2A38633AAAAEDFC64FC9113F2270BB32D5B9_RuntimeMethod_var);
		V_1 = L_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = MixedRealityPose_get_Position_mA85AA29A7C35C13E7DDDCF058D1CB4F0371F6A08_inline((MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5 *)(&V_1), /*hidden argument*/NULL);
		__this->set_currentPosition_37(L_3);
		// cumulativeDelta += currentPosition - lastPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = __this->get_cumulativeDelta_38();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = __this->get_currentPosition_37();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_5, L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_4, L_7, /*hidden argument*/NULL);
		__this->set_cumulativeDelta_38(L_8);
		// currentGripPose.Position = currentPosition;
		MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5 * L_9 = __this->get_address_of_currentGripPose_39();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = __this->get_currentPosition_37();
		MixedRealityPose_set_Position_mB9AD9342E3AEAFC264C2196FFE6551CDA6F6178B_inline((MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5 *)L_9, L_10, /*hidden argument*/NULL);
		// if (lastPosition != currentPosition)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = __this->get_currentPosition_37();
		bool L_13 = Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710(L_11, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0081;
		}
	}
	{
		// CoreServices.InputSystem?.RaiseSourcePositionChanged(InputSource, this, currentPosition);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tDB76F6146407FDEA9A4479E5553ED32DC19AADBD_il2cpp_TypeInfo_var);
		RuntimeObject* L_14 = CoreServices_get_InputSystem_m734103F090144FE710940E31C6B3581D15572FB0(/*hidden argument*/NULL);
		RuntimeObject* L_15 = L_14;
		G_B2_0 = L_15;
		if (L_15)
		{
			G_B3_0 = L_15;
			goto IL_006f;
		}
	}
	{
		goto IL_0081;
	}

IL_006f:
	{
		RuntimeObject* L_16 = BaseController_get_InputSource_m6E124D758E6373E7E1C498AE986C460CCDC651E3_inline(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = __this->get_currentPosition_37();
		NullCheck(G_B3_0);
		InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(27 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseSourcePositionChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,UnityEngine.Vector3) */, IMixedRealityInputSystem_t64ABD77097BAD8C4A1194C39BFFD4E6F6CBF55B1_il2cpp_TypeInfo_var, G_B3_0, L_16, __this, L_17);
	}

IL_0081:
	{
		// for (int i = 0; i < Interactions?.Length; i++)
		V_2 = 0;
		goto IL_0234;
	}

IL_0088:
	{
		// switch (Interactions[i].InputType)
		MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* L_18 = BaseController_get_Interactions_m8C6000FF0F70063C616791046B0B93CE452AFC29_inline(__this, /*hidden argument*/NULL);
		int32_t L_19 = V_2;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 * L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_21);
		int32_t L_22 = MixedRealityInteractionMapping_get_InputType_mB3BB9A8477E555DAFFE3F1A624448D53FC4102E6_inline(L_21, /*hidden argument*/NULL);
		V_3 = L_22;
		int32_t L_23 = V_3;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)14))))
		{
			goto IL_00a5;
		}
	}
	{
		int32_t L_24 = V_3;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)25))))
		{
			goto IL_0101;
		}
	}
	{
		goto IL_0230;
	}

IL_00a5:
	{
		// Interactions[i].PoseData = currentGripPose;
		MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* L_25 = BaseController_get_Interactions_m8C6000FF0F70063C616791046B0B93CE452AFC29_inline(__this, /*hidden argument*/NULL);
		int32_t L_26 = V_2;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 * L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  L_29 = __this->get_currentGripPose_39();
		NullCheck(L_28);
		MixedRealityInteractionMapping_set_PoseData_mAE3A962D306D4CCA9228111491E8AA96D523F44D(L_28, L_29, /*hidden argument*/NULL);
		// if (Interactions[i].Changed)
		MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* L_30 = BaseController_get_Interactions_m8C6000FF0F70063C616791046B0B93CE452AFC29_inline(__this, /*hidden argument*/NULL);
		int32_t L_31 = V_2;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 * L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_33);
		bool L_34 = MixedRealityInteractionMapping_get_Changed_mFDC721362095F9525C839C0BA20EF8B9A55A37EC(L_33, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_0230;
		}
	}
	{
		// CoreServices.InputSystem?.RaisePoseInputChanged(InputSource, ControllerHandedness, Interactions[i].MixedRealityInputAction, currentGripPose);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tDB76F6146407FDEA9A4479E5553ED32DC19AADBD_il2cpp_TypeInfo_var);
		RuntimeObject* L_35 = CoreServices_get_InputSystem_m734103F090144FE710940E31C6B3581D15572FB0(/*hidden argument*/NULL);
		RuntimeObject* L_36 = L_35;
		G_B10_0 = L_36;
		if (L_36)
		{
			G_B11_0 = L_36;
			goto IL_00d8;
		}
	}
	{
		goto IL_0230;
	}

IL_00d8:
	{
		RuntimeObject* L_37 = BaseController_get_InputSource_m6E124D758E6373E7E1C498AE986C460CCDC651E3_inline(__this, /*hidden argument*/NULL);
		uint8_t L_38 = BaseController_get_ControllerHandedness_m3D9C7DE0BE3F9F1C81C49826D67CF21175684F1A_inline(__this, /*hidden argument*/NULL);
		MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* L_39 = BaseController_get_Interactions_m8C6000FF0F70063C616791046B0B93CE452AFC29_inline(__this, /*hidden argument*/NULL);
		int32_t L_40 = V_2;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 * L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_42);
		MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  L_43 = MixedRealityInteractionMapping_get_MixedRealityInputAction_mB9F6AA03D64CE6F746424699CD1F4993446CE41A_inline(L_42, /*hidden argument*/NULL);
		MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  L_44 = __this->get_currentGripPose_39();
		NullCheck(G_B11_0);
		InterfaceActionInvoker4< RuntimeObject*, uint8_t, MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35 , MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  >::Invoke(44 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaisePoseInputChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose) */, IMixedRealityInputSystem_t64ABD77097BAD8C4A1194C39BFFD4E6F6CBF55B1_il2cpp_TypeInfo_var, G_B11_0, L_37, L_38, L_43, L_44);
		// break;
		goto IL_0230;
	}

IL_0101:
	{
		// Interactions[i].BoolData = handData.IsPinching;
		MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* L_45 = BaseController_get_Interactions_m8C6000FF0F70063C616791046B0B93CE452AFC29_inline(__this, /*hidden argument*/NULL);
		int32_t L_46 = V_2;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 * L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		SimulatedHandData_t27280EA369E2A116C61830482B52B31ABA3F39CA * L_49 = ___handData0;
		NullCheck(L_49);
		bool L_50 = SimulatedHandData_get_IsPinching_mA3A8D340B77A9643470DD4426A818E4D09DDA96F_inline(L_49, /*hidden argument*/NULL);
		NullCheck(L_48);
		MixedRealityInteractionMapping_set_BoolData_mD726B443F0E196EC9C7D78DC3EBB5FA3BD80741C(L_48, L_50, /*hidden argument*/NULL);
		// if (Interactions[i].Changed)
		MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* L_51 = BaseController_get_Interactions_m8C6000FF0F70063C616791046B0B93CE452AFC29_inline(__this, /*hidden argument*/NULL);
		int32_t L_52 = V_2;
		NullCheck(L_51);
		int32_t L_53 = L_52;
		MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 * L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		NullCheck(L_54);
		bool L_55 = MixedRealityInteractionMapping_get_Changed_mFDC721362095F9525C839C0BA20EF8B9A55A37EC(L_54, /*hidden argument*/NULL);
		if (!L_55)
		{
			goto IL_01c0;
		}
	}
	{
		// if (Interactions[i].BoolData)
		MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* L_56 = BaseController_get_Interactions_m8C6000FF0F70063C616791046B0B93CE452AFC29_inline(__this, /*hidden argument*/NULL);
		int32_t L_57 = V_2;
		NullCheck(L_56);
		int32_t L_58 = L_57;
		MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 * L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		NullCheck(L_59);
		bool L_60 = MixedRealityInteractionMapping_get_BoolData_m9B49EA23CE1DD08217097A26D1D5A89EAD2645D6_inline(L_59, /*hidden argument*/NULL);
		if (!L_60)
		{
			goto IL_0179;
		}
	}
	{
		// CoreServices.InputSystem?.RaiseOnInputDown(InputSource, ControllerHandedness, Interactions[i].MixedRealityInputAction);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tDB76F6146407FDEA9A4479E5553ED32DC19AADBD_il2cpp_TypeInfo_var);
		RuntimeObject* L_61 = CoreServices_get_InputSystem_m734103F090144FE710940E31C6B3581D15572FB0(/*hidden argument*/NULL);
		RuntimeObject* L_62 = L_61;
		G_B15_0 = L_62;
		if (L_62)
		{
			G_B16_0 = L_62;
			goto IL_0140;
		}
	}
	{
		goto IL_015e;
	}

IL_0140:
	{
		RuntimeObject* L_63 = BaseController_get_InputSource_m6E124D758E6373E7E1C498AE986C460CCDC651E3_inline(__this, /*hidden argument*/NULL);
		uint8_t L_64 = BaseController_get_ControllerHandedness_m3D9C7DE0BE3F9F1C81C49826D67CF21175684F1A_inline(__this, /*hidden argument*/NULL);
		MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* L_65 = BaseController_get_Interactions_m8C6000FF0F70063C616791046B0B93CE452AFC29_inline(__this, /*hidden argument*/NULL);
		int32_t L_66 = V_2;
		NullCheck(L_65);
		int32_t L_67 = L_66;
		MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 * L_68 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		NullCheck(L_68);
		MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  L_69 = MixedRealityInteractionMapping_get_MixedRealityInputAction_mB9F6AA03D64CE6F746424699CD1F4993446CE41A_inline(L_68, /*hidden argument*/NULL);
		NullCheck(G_B16_0);
		InterfaceActionInvoker3< RuntimeObject*, uint8_t, MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  >::Invoke(38 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseOnInputDown(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_t64ABD77097BAD8C4A1194C39BFFD4E6F6CBF55B1_il2cpp_TypeInfo_var, G_B16_0, L_63, L_64, L_69);
	}

IL_015e:
	{
		// SelectDownStartTime = Time.time;
		float L_70 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_SelectDownStartTime_32(L_70);
		// cumulativeDelta = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_71 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_cumulativeDelta_38(L_71);
		// }
		goto IL_0230;
	}

IL_0179:
	{
		// CoreServices.InputSystem?.RaiseOnInputUp(InputSource, ControllerHandedness, Interactions[i].MixedRealityInputAction);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tDB76F6146407FDEA9A4479E5553ED32DC19AADBD_il2cpp_TypeInfo_var);
		RuntimeObject* L_72 = CoreServices_get_InputSystem_m734103F090144FE710940E31C6B3581D15572FB0(/*hidden argument*/NULL);
		RuntimeObject* L_73 = L_72;
		G_B19_0 = L_73;
		if (L_73)
		{
			G_B20_0 = L_73;
			goto IL_0184;
		}
	}
	{
		goto IL_01a2;
	}

IL_0184:
	{
		RuntimeObject* L_74 = BaseController_get_InputSource_m6E124D758E6373E7E1C498AE986C460CCDC651E3_inline(__this, /*hidden argument*/NULL);
		uint8_t L_75 = BaseController_get_ControllerHandedness_m3D9C7DE0BE3F9F1C81C49826D67CF21175684F1A_inline(__this, /*hidden argument*/NULL);
		MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* L_76 = BaseController_get_Interactions_m8C6000FF0F70063C616791046B0B93CE452AFC29_inline(__this, /*hidden argument*/NULL);
		int32_t L_77 = V_2;
		NullCheck(L_76);
		int32_t L_78 = L_77;
		MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 * L_79 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		NullCheck(L_79);
		MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  L_80 = MixedRealityInteractionMapping_get_MixedRealityInputAction_mB9F6AA03D64CE6F746424699CD1F4993446CE41A_inline(L_79, /*hidden argument*/NULL);
		NullCheck(G_B20_0);
		InterfaceActionInvoker3< RuntimeObject*, uint8_t, MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  >::Invoke(39 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseOnInputUp(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_t64ABD77097BAD8C4A1194C39BFFD4E6F6CBF55B1_il2cpp_TypeInfo_var, G_B20_0, L_74, L_75, L_80);
	}

IL_01a2:
	{
		// TryCompleteSelect();
		SimulatedGestureHand_TryCompleteSelect_m2A66192E4D37C99E5A2E3BB6546D2057FD0ED03B(__this, /*hidden argument*/NULL);
		// TryCompleteHold();
		SimulatedGestureHand_TryCompleteHold_m50E0ACFD41E1F9CE7D1CDD210E0C9A2390FCC7DE(__this, /*hidden argument*/NULL);
		// TryCompleteManipulation();
		SimulatedGestureHand_TryCompleteManipulation_mAA71EE1BC69BF84C0417D608BC4EBDFD9BAC4A57(__this, /*hidden argument*/NULL);
		// TryCompleteNavigation();
		SimulatedGestureHand_TryCompleteNavigation_m19847287F11D2B4B28B37F6DB55C8D9AEC709D7E(__this, /*hidden argument*/NULL);
		// }
		goto IL_0230;
	}

IL_01c0:
	{
		// else if (Interactions[i].BoolData)
		MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* L_81 = BaseController_get_Interactions_m8C6000FF0F70063C616791046B0B93CE452AFC29_inline(__this, /*hidden argument*/NULL);
		int32_t L_82 = V_2;
		NullCheck(L_81);
		int32_t L_83 = L_82;
		MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 * L_84 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		NullCheck(L_84);
		bool L_85 = MixedRealityInteractionMapping_get_BoolData_m9B49EA23CE1DD08217097A26D1D5A89EAD2645D6_inline(L_84, /*hidden argument*/NULL);
		if (!L_85)
		{
			goto IL_0230;
		}
	}
	{
		// if (manipulationInProgress)
		bool L_86 = __this->get_manipulationInProgress_34();
		if (!L_86)
		{
			goto IL_01dd;
		}
	}
	{
		// UpdateManipulation();
		SimulatedGestureHand_UpdateManipulation_m37C149BAC4A5D117B6E4C1028F6F47E051E132F3(__this, /*hidden argument*/NULL);
	}

IL_01dd:
	{
		// if (navigationInProgress)
		bool L_87 = __this->get_navigationInProgress_35();
		if (!L_87)
		{
			goto IL_01eb;
		}
	}
	{
		// UpdateNavigation();
		SimulatedGestureHand_UpdateNavigation_mAA5B87F28579D8AFEAADB4133CC1BFB944D66AE6(__this, /*hidden argument*/NULL);
	}

IL_01eb:
	{
		// if (cumulativeDelta.magnitude > navigationStartThreshold)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_88 = __this->get_address_of_cumulativeDelta_38();
		float L_89 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_88, /*hidden argument*/NULL);
		float L_90 = __this->get_navigationStartThreshold_31();
		if ((!(((float)L_89) > ((float)L_90))))
		{
			goto IL_0215;
		}
	}
	{
		// TryCancelHold();
		SimulatedGestureHand_TryCancelHold_m4BE99AA5CCE4F8030665DAD32A500C86522487D0(__this, /*hidden argument*/NULL);
		// TryStartNavigation();
		SimulatedGestureHand_TryStartNavigation_mACB9C112AA889F96A59A3F2FB279AAF1C8CDA41E(__this, /*hidden argument*/NULL);
		// TryStartManipulation();
		SimulatedGestureHand_TryStartManipulation_m35B2A09F0F43B2972E5E3AF30D015D88B9D55991(__this, /*hidden argument*/NULL);
		// }
		goto IL_0230;
	}

IL_0215:
	{
		// else if (Time.time >= SelectDownStartTime + holdStartDuration)
		float L_91 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_92 = __this->get_SelectDownStartTime_32();
		float L_93 = __this->get_holdStartDuration_30();
		if ((!(((float)L_91) >= ((float)((float)il2cpp_codegen_add((float)L_92, (float)L_93))))))
		{
			goto IL_0230;
		}
	}
	{
		// TryStartHold();
		SimulatedGestureHand_TryStartHold_m29E609DDD87D768B43AAF63CF0262D580CB4D76B(__this, /*hidden argument*/NULL);
	}

IL_0230:
	{
		// for (int i = 0; i < Interactions?.Length; i++)
		int32_t L_94 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_94, (int32_t)1));
	}

IL_0234:
	{
		// for (int i = 0; i < Interactions?.Length; i++)
		int32_t L_95 = V_2;
		MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* L_96 = BaseController_get_Interactions_m8C6000FF0F70063C616791046B0B93CE452AFC29_inline(__this, /*hidden argument*/NULL);
		MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* L_97 = L_96;
		G_B33_0 = L_97;
		G_B33_1 = L_95;
		if (L_97)
		{
			G_B34_0 = L_97;
			G_B34_1 = L_95;
			goto IL_024b;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 ));
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_98 = V_5;
		G_B35_0 = L_98;
		G_B35_1 = G_B33_1;
		goto IL_0252;
	}

IL_024b:
	{
		NullCheck(G_B34_0);
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_99;
		memset((&L_99), 0, sizeof(L_99));
		Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184((&L_99), (((int32_t)((int32_t)(((RuntimeArray*)G_B34_0)->max_length)))), /*hidden argument*/Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var);
		G_B35_0 = L_99;
		G_B35_1 = G_B34_1;
	}

IL_0252:
	{
		V_4 = G_B35_0;
		int32_t L_100 = Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_4), /*hidden argument*/Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var);
		bool L_101 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_4), /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		if (((int32_t)((int32_t)((((int32_t)G_B35_1) < ((int32_t)L_100))? 1 : 0)&(int32_t)L_101)))
		{
			goto IL_0088;
		}
	}
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryStartHold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryStartHold_m29E609DDD87D768B43AAF63CF0262D580CB4D76B (SimulatedGestureHand_tE8FD4F9A907C2909BB38CDEFDA82507DF0220BF4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand_TryStartHold_m29E609DDD87D768B43AAF63CF0262D580CB4D76B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	{
		// if (!holdInProgress)
		bool L_0 = __this->get_holdInProgress_33();
		if (L_0)
		{
			goto IL_0028;
		}
	}
	{
		// CoreServices.InputSystem?.RaiseGestureStarted(this, holdAction);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tDB76F6146407FDEA9A4479E5553ED32DC19AADBD_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = CoreServices_get_InputSystem_m734103F090144FE710940E31C6B3581D15572FB0(/*hidden argument*/NULL);
		RuntimeObject* L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_0013;
		}
	}
	{
		goto IL_001f;
	}

IL_0013:
	{
		MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  L_3 = __this->get_holdAction_25();
		NullCheck(G_B3_0);
		InterfaceActionInvoker2< RuntimeObject*, MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  >::Invoke(45 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseGestureStarted(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_t64ABD77097BAD8C4A1194C39BFFD4E6F6CBF55B1_il2cpp_TypeInfo_var, G_B3_0, __this, L_3);
	}

IL_001f:
	{
		// holdInProgress = true;
		__this->set_holdInProgress_33((bool)1);
		// return true;
		return (bool)1;
	}

IL_0028:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryCompleteHold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryCompleteHold_m50E0ACFD41E1F9CE7D1CDD210E0C9A2390FCC7DE (SimulatedGestureHand_tE8FD4F9A907C2909BB38CDEFDA82507DF0220BF4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand_TryCompleteHold_m50E0ACFD41E1F9CE7D1CDD210E0C9A2390FCC7DE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	{
		// if (holdInProgress)
		bool L_0 = __this->get_holdInProgress_33();
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		// CoreServices.InputSystem?.RaiseGestureCompleted(this, holdAction);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tDB76F6146407FDEA9A4479E5553ED32DC19AADBD_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = CoreServices_get_InputSystem_m734103F090144FE710940E31C6B3581D15572FB0(/*hidden argument*/NULL);
		RuntimeObject* L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_0013;
		}
	}
	{
		goto IL_001f;
	}

IL_0013:
	{
		MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  L_3 = __this->get_holdAction_25();
		NullCheck(G_B3_0);
		InterfaceActionInvoker2< RuntimeObject*, MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  >::Invoke(51 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseGestureCompleted(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_t64ABD77097BAD8C4A1194C39BFFD4E6F6CBF55B1_il2cpp_TypeInfo_var, G_B3_0, __this, L_3);
	}

IL_001f:
	{
		// holdInProgress = false;
		__this->set_holdInProgress_33((bool)0);
		// return true;
		return (bool)1;
	}

IL_0028:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryCancelHold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryCancelHold_m4BE99AA5CCE4F8030665DAD32A500C86522487D0 (SimulatedGestureHand_tE8FD4F9A907C2909BB38CDEFDA82507DF0220BF4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand_TryCancelHold_m4BE99AA5CCE4F8030665DAD32A500C86522487D0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	{
		// if (holdInProgress)
		bool L_0 = __this->get_holdInProgress_33();
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		// CoreServices.InputSystem?.RaiseGestureCanceled(this, holdAction);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tDB76F6146407FDEA9A4479E5553ED32DC19AADBD_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = CoreServices_get_InputSystem_m734103F090144FE710940E31C6B3581D15572FB0(/*hidden argument*/NULL);
		RuntimeObject* L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_0013;
		}
	}
	{
		goto IL_001f;
	}

IL_0013:
	{
		MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  L_3 = __this->get_holdAction_25();
		NullCheck(G_B3_0);
		InterfaceActionInvoker2< RuntimeObject*, MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  >::Invoke(56 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseGestureCanceled(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_t64ABD77097BAD8C4A1194C39BFFD4E6F6CBF55B1_il2cpp_TypeInfo_var, G_B3_0, __this, L_3);
	}

IL_001f:
	{
		// holdInProgress = false;
		__this->set_holdInProgress_33((bool)0);
		// return true;
		return (bool)1;
	}

IL_0028:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryStartManipulation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryStartManipulation_m35B2A09F0F43B2972E5E3AF30D015D88B9D55991 (SimulatedGestureHand_tE8FD4F9A907C2909BB38CDEFDA82507DF0220BF4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand_TryStartManipulation_m35B2A09F0F43B2972E5E3AF30D015D88B9D55991_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	{
		// if (!manipulationInProgress)
		bool L_0 = __this->get_manipulationInProgress_34();
		if (L_0)
		{
			goto IL_0028;
		}
	}
	{
		// CoreServices.InputSystem?.RaiseGestureStarted(this, manipulationAction);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tDB76F6146407FDEA9A4479E5553ED32DC19AADBD_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = CoreServices_get_InputSystem_m734103F090144FE710940E31C6B3581D15572FB0(/*hidden argument*/NULL);
		RuntimeObject* L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_0013;
		}
	}
	{
		goto IL_001f;
	}

IL_0013:
	{
		MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  L_3 = __this->get_manipulationAction_27();
		NullCheck(G_B3_0);
		InterfaceActionInvoker2< RuntimeObject*, MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  >::Invoke(45 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseGestureStarted(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_t64ABD77097BAD8C4A1194C39BFFD4E6F6CBF55B1_il2cpp_TypeInfo_var, G_B3_0, __this, L_3);
	}

IL_001f:
	{
		// manipulationInProgress = true;
		__this->set_manipulationInProgress_34((bool)1);
		// return true;
		return (bool)1;
	}

IL_0028:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::UpdateManipulation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedGestureHand_UpdateManipulation_m37C149BAC4A5D117B6E4C1028F6F47E051E132F3 (SimulatedGestureHand_tE8FD4F9A907C2909BB38CDEFDA82507DF0220BF4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand_UpdateManipulation_m37C149BAC4A5D117B6E4C1028F6F47E051E132F3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	{
		// if (manipulationInProgress)
		bool L_0 = __this->get_manipulationInProgress_34();
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		// CoreServices.InputSystem?.RaiseGestureUpdated(this, manipulationAction, cumulativeDelta);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tDB76F6146407FDEA9A4479E5553ED32DC19AADBD_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = CoreServices_get_InputSystem_m734103F090144FE710940E31C6B3581D15572FB0(/*hidden argument*/NULL);
		RuntimeObject* L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  L_3 = __this->get_manipulationAction_27();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = __this->get_cumulativeDelta_38();
		NullCheck(G_B3_0);
		InterfaceActionInvoker3< RuntimeObject*, MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35 , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(48 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseGestureUpdated(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,UnityEngine.Vector3) */, IMixedRealityInputSystem_t64ABD77097BAD8C4A1194C39BFFD4E6F6CBF55B1_il2cpp_TypeInfo_var, G_B3_0, __this, L_3, L_4);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryCompleteManipulation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryCompleteManipulation_mAA71EE1BC69BF84C0417D608BC4EBDFD9BAC4A57 (SimulatedGestureHand_tE8FD4F9A907C2909BB38CDEFDA82507DF0220BF4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand_TryCompleteManipulation_mAA71EE1BC69BF84C0417D608BC4EBDFD9BAC4A57_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	{
		// if (manipulationInProgress)
		bool L_0 = __this->get_manipulationInProgress_34();
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		// CoreServices.InputSystem?.RaiseGestureCompleted(this, manipulationAction, cumulativeDelta);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tDB76F6146407FDEA9A4479E5553ED32DC19AADBD_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = CoreServices_get_InputSystem_m734103F090144FE710940E31C6B3581D15572FB0(/*hidden argument*/NULL);
		RuntimeObject* L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_0013;
		}
	}
	{
		goto IL_0025;
	}

IL_0013:
	{
		MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  L_3 = __this->get_manipulationAction_27();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = __this->get_cumulativeDelta_38();
		NullCheck(G_B3_0);
		InterfaceActionInvoker3< RuntimeObject*, MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35 , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(53 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseGestureCompleted(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,UnityEngine.Vector3) */, IMixedRealityInputSystem_t64ABD77097BAD8C4A1194C39BFFD4E6F6CBF55B1_il2cpp_TypeInfo_var, G_B3_0, __this, L_3, L_4);
	}

IL_0025:
	{
		// manipulationInProgress = false;
		__this->set_manipulationInProgress_34((bool)0);
		// return true;
		return (bool)1;
	}

IL_002e:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryCancelManipulation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryCancelManipulation_mC0E436D5162267BEB2B52F6D3C21311EB46B6326 (SimulatedGestureHand_tE8FD4F9A907C2909BB38CDEFDA82507DF0220BF4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand_TryCancelManipulation_mC0E436D5162267BEB2B52F6D3C21311EB46B6326_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	{
		// if (manipulationInProgress)
		bool L_0 = __this->get_manipulationInProgress_34();
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		// CoreServices.InputSystem?.RaiseGestureCanceled(this, manipulationAction);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tDB76F6146407FDEA9A4479E5553ED32DC19AADBD_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = CoreServices_get_InputSystem_m734103F090144FE710940E31C6B3581D15572FB0(/*hidden argument*/NULL);
		RuntimeObject* L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_0013;
		}
	}
	{
		goto IL_001f;
	}

IL_0013:
	{
		MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  L_3 = __this->get_manipulationAction_27();
		NullCheck(G_B3_0);
		InterfaceActionInvoker2< RuntimeObject*, MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  >::Invoke(56 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseGestureCanceled(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_t64ABD77097BAD8C4A1194C39BFFD4E6F6CBF55B1_il2cpp_TypeInfo_var, G_B3_0, __this, L_3);
	}

IL_001f:
	{
		// manipulationInProgress = false;
		__this->set_manipulationInProgress_34((bool)0);
		// return true;
		return (bool)1;
	}

IL_0028:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryCompleteSelect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryCompleteSelect_m2A66192E4D37C99E5A2E3BB6546D2057FD0ED03B (SimulatedGestureHand_tE8FD4F9A907C2909BB38CDEFDA82507DF0220BF4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand_TryCompleteSelect_m2A66192E4D37C99E5A2E3BB6546D2057FD0ED03B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B4_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		// if (!manipulationInProgress && !holdInProgress)
		bool L_0 = __this->get_manipulationInProgress_34();
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		bool L_1 = __this->get_holdInProgress_33();
		if (L_1)
		{
			goto IL_0029;
		}
	}
	{
		// CoreServices.InputSystem?.RaiseGestureCompleted(this, selectAction);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tDB76F6146407FDEA9A4479E5553ED32DC19AADBD_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = CoreServices_get_InputSystem_m734103F090144FE710940E31C6B3581D15572FB0(/*hidden argument*/NULL);
		RuntimeObject* L_3 = L_2;
		G_B3_0 = L_3;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_001b;
		}
	}
	{
		goto IL_0027;
	}

IL_001b:
	{
		MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  L_4 = __this->get_selectAction_28();
		NullCheck(G_B4_0);
		InterfaceActionInvoker2< RuntimeObject*, MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  >::Invoke(51 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseGestureCompleted(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_t64ABD77097BAD8C4A1194C39BFFD4E6F6CBF55B1_il2cpp_TypeInfo_var, G_B4_0, __this, L_4);
	}

IL_0027:
	{
		// return true;
		return (bool)1;
	}

IL_0029:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryStartNavigation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryStartNavigation_mACB9C112AA889F96A59A3F2FB279AAF1C8CDA41E (SimulatedGestureHand_tE8FD4F9A907C2909BB38CDEFDA82507DF0220BF4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand_TryStartNavigation_mACB9C112AA889F96A59A3F2FB279AAF1C8CDA41E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	{
		// if (!navigationInProgress)
		bool L_0 = __this->get_navigationInProgress_35();
		if (L_0)
		{
			goto IL_0039;
		}
	}
	{
		// CoreServices.InputSystem?.RaiseGestureStarted(this, navigationAction);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tDB76F6146407FDEA9A4479E5553ED32DC19AADBD_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = CoreServices_get_InputSystem_m734103F090144FE710940E31C6B3581D15572FB0(/*hidden argument*/NULL);
		RuntimeObject* L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_0013;
		}
	}
	{
		goto IL_001f;
	}

IL_0013:
	{
		MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  L_3 = __this->get_navigationAction_26();
		NullCheck(G_B3_0);
		InterfaceActionInvoker2< RuntimeObject*, MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  >::Invoke(45 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseGestureStarted(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_t64ABD77097BAD8C4A1194C39BFFD4E6F6CBF55B1_il2cpp_TypeInfo_var, G_B3_0, __this, L_3);
	}

IL_001f:
	{
		// navigationInProgress = true;
		__this->set_navigationInProgress_35((bool)1);
		// currentRailsUsed = Vector3.one;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		__this->set_currentRailsUsed_36(L_4);
		// UpdateNavigationRails();
		SimulatedGestureHand_UpdateNavigationRails_m3A79B583B3AA987AB1F15654F6D0E34273281E5B(__this, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}

IL_0039:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::UpdateNavigation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedGestureHand_UpdateNavigation_mAA5B87F28579D8AFEAADB4133CC1BFB944D66AE6 (SimulatedGestureHand_tE8FD4F9A907C2909BB38CDEFDA82507DF0220BF4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand_UpdateNavigation_mAA5B87F28579D8AFEAADB4133CC1BFB944D66AE6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	{
		// if (navigationInProgress)
		bool L_0 = __this->get_navigationInProgress_35();
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		// UpdateNavigationRails();
		SimulatedGestureHand_UpdateNavigationRails_m3A79B583B3AA987AB1F15654F6D0E34273281E5B(__this, /*hidden argument*/NULL);
		// CoreServices.InputSystem?.RaiseGestureUpdated(this, navigationAction, NavigationDelta);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tDB76F6146407FDEA9A4479E5553ED32DC19AADBD_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = CoreServices_get_InputSystem_m734103F090144FE710940E31C6B3581D15572FB0(/*hidden argument*/NULL);
		RuntimeObject* L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_0018;
		}
	}
	{
		return;
	}

IL_0018:
	{
		MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  L_3 = __this->get_navigationAction_26();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = SimulatedGestureHand_get_NavigationDelta_m6A6065F8B89330B67E758E062CE189DBAC96B3DD(__this, /*hidden argument*/NULL);
		NullCheck(G_B3_0);
		InterfaceActionInvoker3< RuntimeObject*, MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35 , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(48 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseGestureUpdated(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,UnityEngine.Vector3) */, IMixedRealityInputSystem_t64ABD77097BAD8C4A1194C39BFFD4E6F6CBF55B1_il2cpp_TypeInfo_var, G_B3_0, __this, L_3, L_4);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryCompleteNavigation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryCompleteNavigation_m19847287F11D2B4B28B37F6DB55C8D9AEC709D7E (SimulatedGestureHand_tE8FD4F9A907C2909BB38CDEFDA82507DF0220BF4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand_TryCompleteNavigation_m19847287F11D2B4B28B37F6DB55C8D9AEC709D7E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	{
		// if (navigationInProgress)
		bool L_0 = __this->get_navigationInProgress_35();
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		// CoreServices.InputSystem?.RaiseGestureCompleted(this, navigationAction, NavigationDelta);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tDB76F6146407FDEA9A4479E5553ED32DC19AADBD_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = CoreServices_get_InputSystem_m734103F090144FE710940E31C6B3581D15572FB0(/*hidden argument*/NULL);
		RuntimeObject* L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_0013;
		}
	}
	{
		goto IL_0025;
	}

IL_0013:
	{
		MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  L_3 = __this->get_navigationAction_26();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = SimulatedGestureHand_get_NavigationDelta_m6A6065F8B89330B67E758E062CE189DBAC96B3DD(__this, /*hidden argument*/NULL);
		NullCheck(G_B3_0);
		InterfaceActionInvoker3< RuntimeObject*, MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35 , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(53 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseGestureCompleted(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,UnityEngine.Vector3) */, IMixedRealityInputSystem_t64ABD77097BAD8C4A1194C39BFFD4E6F6CBF55B1_il2cpp_TypeInfo_var, G_B3_0, __this, L_3, L_4);
	}

IL_0025:
	{
		// navigationInProgress = false;
		__this->set_navigationInProgress_35((bool)0);
		// return true;
		return (bool)1;
	}

IL_002e:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryCancelNavigation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryCancelNavigation_m9419C0B8B8A3CCECAC3362057695D8432DA19544 (SimulatedGestureHand_tE8FD4F9A907C2909BB38CDEFDA82507DF0220BF4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand_TryCancelNavigation_m9419C0B8B8A3CCECAC3362057695D8432DA19544_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	{
		// if (navigationInProgress)
		bool L_0 = __this->get_navigationInProgress_35();
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		// CoreServices.InputSystem?.RaiseGestureCanceled(this, navigationAction);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tDB76F6146407FDEA9A4479E5553ED32DC19AADBD_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = CoreServices_get_InputSystem_m734103F090144FE710940E31C6B3581D15572FB0(/*hidden argument*/NULL);
		RuntimeObject* L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_0013;
		}
	}
	{
		goto IL_001f;
	}

IL_0013:
	{
		MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  L_3 = __this->get_navigationAction_26();
		NullCheck(G_B3_0);
		InterfaceActionInvoker2< RuntimeObject*, MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  >::Invoke(56 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseGestureCanceled(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_t64ABD77097BAD8C4A1194C39BFFD4E6F6CBF55B1_il2cpp_TypeInfo_var, G_B3_0, __this, L_3);
	}

IL_001f:
	{
		// navigationInProgress = false;
		__this->set_navigationInProgress_35((bool)0);
		// return true;
		return (bool)1;
	}

IL_0028:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::UpdateNavigationRails()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedGestureHand_UpdateNavigationRails_m3A79B583B3AA987AB1F15654F6D0E34273281E5B (SimulatedGestureHand_tE8FD4F9A907C2909BB38CDEFDA82507DF0220BF4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand_UpdateNavigationRails_m3A79B583B3AA987AB1F15654F6D0E34273281E5B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (useRailsNavigation && currentRailsUsed == Vector3.one)
		bool L_0 = __this->get_useRailsNavigation_29();
		if (!L_0)
		{
			goto IL_00b8;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = __this->get_currentRailsUsed_36();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		bool L_3 = Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296(L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_00b8;
		}
	}
	{
		// if (Mathf.Abs(cumulativeDelta.x) >= navigationStartThreshold)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_4 = __this->get_address_of_cumulativeDelta_38();
		float L_5 = L_4->get_x_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		float L_6 = fabsf(L_5);
		float L_7 = __this->get_navigationStartThreshold_31();
		if ((!(((float)L_6) >= ((float)L_7))))
		{
			goto IL_0053;
		}
	}
	{
		// currentRailsUsed = new Vector3(1, 0, 0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_8), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_currentRailsUsed_36(L_8);
		// }
		return;
	}

IL_0053:
	{
		// else if (Mathf.Abs(cumulativeDelta.y) > navigationStartThreshold)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_9 = __this->get_address_of_cumulativeDelta_38();
		float L_10 = L_9->get_y_3();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		float L_11 = fabsf(L_10);
		float L_12 = __this->get_navigationStartThreshold_31();
		if ((!(((float)L_11) > ((float)L_12))))
		{
			goto IL_0086;
		}
	}
	{
		// currentRailsUsed = new Vector3(0, 1, 0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_13), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_currentRailsUsed_36(L_13);
		// }
		return;
	}

IL_0086:
	{
		// else if (Mathf.Abs(cumulativeDelta.z) > navigationStartThreshold)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_14 = __this->get_address_of_cumulativeDelta_38();
		float L_15 = L_14->get_z_4();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		float L_16 = fabsf(L_15);
		float L_17 = __this->get_navigationStartThreshold_31();
		if ((!(((float)L_16) > ((float)L_17))))
		{
			goto IL_00b8;
		}
	}
	{
		// currentRailsUsed = new Vector3(0, 0, 1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_18), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_currentRailsUsed_36(L_18);
	}

IL_00b8:
	{
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
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHand::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedHand__ctor_m31621E2759004ECF6C2B0CAAF93035C3C3E2A596 (SimulatedHand_tC79023B162FCFC9F05824CBBE1DCFBC2373217E7 * __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* ___interactions3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedHand__ctor_m31621E2759004ECF6C2B0CAAF93035C3C3E2A596_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected readonly Dictionary<TrackedHandJoint, MixedRealityPose> jointPoses = new Dictionary<TrackedHandJoint, MixedRealityPose>();
		Dictionary_2_t2608D8F85D3104F212EC3BC05E54C1515108B68E * L_0 = (Dictionary_2_t2608D8F85D3104F212EC3BC05E54C1515108B68E *)il2cpp_codegen_object_new(Dictionary_2_t2608D8F85D3104F212EC3BC05E54C1515108B68E_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m98FA9A5E83858B1899CF3494493ACF76DE701543(L_0, /*hidden argument*/Dictionary_2__ctor_m98FA9A5E83858B1899CF3494493ACF76DE701543_RuntimeMethod_var);
		__this->set_jointPoses_23(L_0);
		// : base(trackingState, controllerHandedness, inputSource, interactions)
		int32_t L_1 = ___trackingState0;
		uint8_t L_2 = ___controllerHandedness1;
		RuntimeObject* L_3 = ___inputSource2;
		MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* L_4 = ___interactions3;
		BaseHand__ctor_m28627DAE72EC3F85D789B7B87BC9A0A58C4B956A(__this, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		// {}
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedHand::TryGetJoint(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimulatedHand_TryGetJoint_m9666F17D4858B1290B50EF3F7A689DC142797B62 (SimulatedHand_tC79023B162FCFC9F05824CBBE1DCFBC2373217E7 * __this, int32_t ___joint0, MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5 * ___pose1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedHand_TryGetJoint_m9666F17D4858B1290B50EF3F7A689DC142797B62_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return jointPoses.TryGetValue(joint, out pose);
		Dictionary_2_t2608D8F85D3104F212EC3BC05E54C1515108B68E * L_0 = __this->get_jointPoses_23();
		int32_t L_1 = ___joint0;
		MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5 * L_2 = ___pose1;
		NullCheck(L_0);
		bool L_3 = Dictionary_2_TryGetValue_m68CBDA00749C9C3E905574F6A9F8A0D17BB0D04D(L_0, L_1, (MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5 *)L_2, /*hidden argument*/Dictionary_2_TryGetValue_m68CBDA00749C9C3E905574F6A9F8A0D17BB0D04D_RuntimeMethod_var);
		return L_3;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHand::UpdateState(Microsoft.MixedReality.Toolkit.Input.SimulatedHandData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedHand_UpdateState_m88BCCC707E62514F047B68A5B5023F975374401F (SimulatedHand_tC79023B162FCFC9F05824CBBE1DCFBC2373217E7 * __this, SimulatedHandData_t27280EA369E2A116C61830482B52B31ABA3F39CA * ___handData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedHand_UpdateState_m88BCCC707E62514F047B68A5B5023F975374401F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RuntimeObject* G_B8_0 = NULL;
	RuntimeObject* G_B7_0 = NULL;
	{
		// for (int i = 0; i < jointCount; i++)
		V_0 = 0;
		goto IL_004a;
	}

IL_0004:
	{
		// TrackedHandJoint handJoint = (TrackedHandJoint)i;
		int32_t L_0 = V_0;
		V_1 = L_0;
		// if (!jointPoses.ContainsKey(handJoint))
		Dictionary_2_t2608D8F85D3104F212EC3BC05E54C1515108B68E * L_1 = __this->get_jointPoses_23();
		int32_t L_2 = V_1;
		NullCheck(L_1);
		bool L_3 = Dictionary_2_ContainsKey_mB197921944A9736477D409029EC22B8F4D1D216B(L_1, L_2, /*hidden argument*/Dictionary_2_ContainsKey_mB197921944A9736477D409029EC22B8F4D1D216B_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_002e;
		}
	}
	{
		// jointPoses.Add(handJoint, handData.Joints[i]);
		Dictionary_2_t2608D8F85D3104F212EC3BC05E54C1515108B68E * L_4 = __this->get_jointPoses_23();
		int32_t L_5 = V_1;
		SimulatedHandData_t27280EA369E2A116C61830482B52B31ABA3F39CA * L_6 = ___handData0;
		NullCheck(L_6);
		MixedRealityPoseU5BU5D_t94ED3D45C754C96FE1E9BBD9C193E0DE07B32019* L_7 = SimulatedHandData_get_Joints_m479428796C958C982273121FDF3A451ED5B0AF67_inline(L_6, /*hidden argument*/NULL);
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_4);
		Dictionary_2_Add_mFA80AE1C547296745FC02D4E0680A419B39EFAE7(L_4, L_5, L_10, /*hidden argument*/Dictionary_2_Add_mFA80AE1C547296745FC02D4E0680A419B39EFAE7_RuntimeMethod_var);
		// }
		goto IL_0046;
	}

IL_002e:
	{
		// jointPoses[handJoint] = handData.Joints[i];
		Dictionary_2_t2608D8F85D3104F212EC3BC05E54C1515108B68E * L_11 = __this->get_jointPoses_23();
		int32_t L_12 = V_1;
		SimulatedHandData_t27280EA369E2A116C61830482B52B31ABA3F39CA * L_13 = ___handData0;
		NullCheck(L_13);
		MixedRealityPoseU5BU5D_t94ED3D45C754C96FE1E9BBD9C193E0DE07B32019* L_14 = SimulatedHandData_get_Joints_m479428796C958C982273121FDF3A451ED5B0AF67_inline(L_13, /*hidden argument*/NULL);
		int32_t L_15 = V_0;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_11);
		Dictionary_2_set_Item_m38333A17CBE3638107B56338BB2FD1E69D517ADE(L_11, L_12, L_17, /*hidden argument*/Dictionary_2_set_Item_m38333A17CBE3638107B56338BB2FD1E69D517ADE_RuntimeMethod_var);
	}

IL_0046:
	{
		// for (int i = 0; i < jointCount; i++)
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_004a:
	{
		// for (int i = 0; i < jointCount; i++)
		int32_t L_19 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SimulatedHand_tC79023B162FCFC9F05824CBBE1DCFBC2373217E7_il2cpp_TypeInfo_var);
		int32_t L_20 = ((SimulatedHand_tC79023B162FCFC9F05824CBBE1DCFBC2373217E7_StaticFields*)il2cpp_codegen_static_fields_for(SimulatedHand_tC79023B162FCFC9F05824CBBE1DCFBC2373217E7_il2cpp_TypeInfo_var))->get_jointCount_22();
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0004;
		}
	}
	{
		// CoreServices.InputSystem?.RaiseHandJointsUpdated(InputSource, ControllerHandedness, jointPoses);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tDB76F6146407FDEA9A4479E5553ED32DC19AADBD_il2cpp_TypeInfo_var);
		RuntimeObject* L_21 = CoreServices_get_InputSystem_m734103F090144FE710940E31C6B3581D15572FB0(/*hidden argument*/NULL);
		RuntimeObject* L_22 = L_21;
		G_B7_0 = L_22;
		if (L_22)
		{
			G_B8_0 = L_22;
			goto IL_005d;
		}
	}
	{
		goto IL_0074;
	}

IL_005d:
	{
		RuntimeObject* L_23 = BaseController_get_InputSource_m6E124D758E6373E7E1C498AE986C460CCDC651E3_inline(__this, /*hidden argument*/NULL);
		uint8_t L_24 = BaseController_get_ControllerHandedness_m3D9C7DE0BE3F9F1C81C49826D67CF21175684F1A_inline(__this, /*hidden argument*/NULL);
		Dictionary_2_t2608D8F85D3104F212EC3BC05E54C1515108B68E * L_25 = __this->get_jointPoses_23();
		NullCheck(G_B8_0);
		InterfaceActionInvoker3< RuntimeObject*, uint8_t, RuntimeObject* >::Invoke(62 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseHandJointsUpdated(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,System.Collections.Generic.IDictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>) */, IMixedRealityInputSystem_t64ABD77097BAD8C4A1194C39BFFD4E6F6CBF55B1_il2cpp_TypeInfo_var, G_B8_0, L_23, L_24, L_25);
	}

IL_0074:
	{
		// UpdateVelocity();
		BaseHand_UpdateVelocity_m8BE0D51EB4A032F98F9A58360F19F5C995FD5BD7(__this, /*hidden argument*/NULL);
		// UpdateInteractions(handData);
		SimulatedHandData_t27280EA369E2A116C61830482B52B31ABA3F39CA * L_26 = ___handData0;
		VirtActionInvoker1< SimulatedHandData_t27280EA369E2A116C61830482B52B31ABA3F39CA * >::Invoke(26 /* System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHand::UpdateInteractions(Microsoft.MixedReality.Toolkit.Input.SimulatedHandData) */, __this, L_26);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHand::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedHand__cctor_mA58E08BA72E40D17710100338B699BD8930D11BB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedHand__cctor_mA58E08BA72E40D17710100338B699BD8930D11BB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected static readonly int jointCount = Enum.GetNames(typeof(TrackedHandJoint)).Length;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (TrackedHandJoint_t4DB5CFA2EE94BCBB8866FF22332E0BFD48033137_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = Enum_GetNames_m49110673091D017F43CF0F5F7AD9B7730306D2E8(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		((SimulatedHand_tC79023B162FCFC9F05824CBBE1DCFBC2373217E7_StaticFields*)il2cpp_codegen_static_fields_for(SimulatedHand_tC79023B162FCFC9F05824CBBE1DCFBC2373217E7_il2cpp_TypeInfo_var))->set_jointCount_22((((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))));
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
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedHandData::get_IsTracked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimulatedHandData_get_IsTracked_mB45F4F4A0A24B02884F3F063A99808A79B4CDE19 (SimulatedHandData_t27280EA369E2A116C61830482B52B31ABA3F39CA * __this, const RuntimeMethod* method)
{
	{
		// public bool IsTracked => isTracked;
		bool L_0 = __this->get_isTracked_1();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose[] Microsoft.MixedReality.Toolkit.Input.SimulatedHandData::get_Joints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityPoseU5BU5D_t94ED3D45C754C96FE1E9BBD9C193E0DE07B32019* SimulatedHandData_get_Joints_m479428796C958C982273121FDF3A451ED5B0AF67 (SimulatedHandData_t27280EA369E2A116C61830482B52B31ABA3F39CA * __this, const RuntimeMethod* method)
{
	{
		// public MixedRealityPose[] Joints => joints;
		MixedRealityPoseU5BU5D_t94ED3D45C754C96FE1E9BBD9C193E0DE07B32019* L_0 = __this->get_joints_2();
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedHandData::get_IsPinching()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimulatedHandData_get_IsPinching_mA3A8D340B77A9643470DD4426A818E4D09DDA96F (SimulatedHandData_t27280EA369E2A116C61830482B52B31ABA3F39CA * __this, const RuntimeMethod* method)
{
	{
		// public bool IsPinching => isPinching;
		bool L_0 = __this->get_isPinching_3();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHandData::Copy(Microsoft.MixedReality.Toolkit.Input.SimulatedHandData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedHandData_Copy_mF08A4D1EA69B630603458CC5795594B680C886DD (SimulatedHandData_t27280EA369E2A116C61830482B52B31ABA3F39CA * __this, SimulatedHandData_t27280EA369E2A116C61830482B52B31ABA3F39CA * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedHandData_Copy_mF08A4D1EA69B630603458CC5795594B680C886DD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// isTracked = other.isTracked;
		SimulatedHandData_t27280EA369E2A116C61830482B52B31ABA3F39CA * L_0 = ___other0;
		NullCheck(L_0);
		bool L_1 = L_0->get_isTracked_1();
		__this->set_isTracked_1(L_1);
		// isPinching = other.isPinching;
		SimulatedHandData_t27280EA369E2A116C61830482B52B31ABA3F39CA * L_2 = ___other0;
		NullCheck(L_2);
		bool L_3 = L_2->get_isPinching_3();
		__this->set_isPinching_3(L_3);
		// for (int i = 0; i < jointCount; ++i)
		V_0 = 0;
		goto IL_0038;
	}

IL_001c:
	{
		// joints[i] = other.joints[i];
		MixedRealityPoseU5BU5D_t94ED3D45C754C96FE1E9BBD9C193E0DE07B32019* L_4 = __this->get_joints_2();
		int32_t L_5 = V_0;
		SimulatedHandData_t27280EA369E2A116C61830482B52B31ABA3F39CA * L_6 = ___other0;
		NullCheck(L_6);
		MixedRealityPoseU5BU5D_t94ED3D45C754C96FE1E9BBD9C193E0DE07B32019* L_7 = L_6->get_joints_2();
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5 )L_10);
		// for (int i = 0; i < jointCount; ++i)
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0038:
	{
		// for (int i = 0; i < jointCount; ++i)
		int32_t L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SimulatedHandData_t27280EA369E2A116C61830482B52B31ABA3F39CA_il2cpp_TypeInfo_var);
		int32_t L_13 = ((SimulatedHandData_t27280EA369E2A116C61830482B52B31ABA3F39CA_StaticFields*)il2cpp_codegen_static_fields_for(SimulatedHandData_t27280EA369E2A116C61830482B52B31ABA3F39CA_il2cpp_TypeInfo_var))->get_jointCount_0();
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001c;
		}
	}
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedHandData::Update(System.Boolean,System.Boolean,Microsoft.MixedReality.Toolkit.Input.SimulatedHandData_HandJointDataGenerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimulatedHandData_Update_m9AAB09DED2B320FB9D4AF38281840EEB20CD8B4B (SimulatedHandData_t27280EA369E2A116C61830482B52B31ABA3F39CA * __this, bool ___isTrackedNew0, bool ___isPinchingNew1, HandJointDataGenerator_tACFADDDDE2346DC5682A95B8E6B8C3299B06F37B * ___generator2, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// bool handDataChanged = false;
		V_0 = (bool)0;
		// if (isTracked != isTrackedNew || isPinching != isPinchingNew)
		bool L_0 = __this->get_isTracked_1();
		bool L_1 = ___isTrackedNew0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		bool L_2 = __this->get_isPinching_3();
		bool L_3 = ___isPinchingNew1;
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_0024;
		}
	}

IL_0014:
	{
		// isTracked = isTrackedNew;
		bool L_4 = ___isTrackedNew0;
		__this->set_isTracked_1(L_4);
		// isPinching = isPinchingNew;
		bool L_5 = ___isPinchingNew1;
		__this->set_isPinching_3(L_5);
		// handDataChanged = true;
		V_0 = (bool)1;
	}

IL_0024:
	{
		// if (isTracked)
		bool L_6 = __this->get_isTracked_1();
		if (!L_6)
		{
			goto IL_003a;
		}
	}
	{
		// generator(Joints);
		HandJointDataGenerator_tACFADDDDE2346DC5682A95B8E6B8C3299B06F37B * L_7 = ___generator2;
		MixedRealityPoseU5BU5D_t94ED3D45C754C96FE1E9BBD9C193E0DE07B32019* L_8 = SimulatedHandData_get_Joints_m479428796C958C982273121FDF3A451ED5B0AF67_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		HandJointDataGenerator_Invoke_m8A41F2C64FC2C2CD90C6AA2BD2E1C56CD507A5E2(L_7, L_8, /*hidden argument*/NULL);
		// handDataChanged = true;
		V_0 = (bool)1;
	}

IL_003a:
	{
		// return handDataChanged;
		bool L_9 = V_0;
		return L_9;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHandData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedHandData__ctor_m3F9392BD7ED6DFB96FF3E8180216B224E8305E13 (SimulatedHandData_t27280EA369E2A116C61830482B52B31ABA3F39CA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedHandData__ctor_m3F9392BD7ED6DFB96FF3E8180216B224E8305E13_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private MixedRealityPose[] joints = new MixedRealityPose[jointCount];
		IL2CPP_RUNTIME_CLASS_INIT(SimulatedHandData_t27280EA369E2A116C61830482B52B31ABA3F39CA_il2cpp_TypeInfo_var);
		int32_t L_0 = ((SimulatedHandData_t27280EA369E2A116C61830482B52B31ABA3F39CA_StaticFields*)il2cpp_codegen_static_fields_for(SimulatedHandData_t27280EA369E2A116C61830482B52B31ABA3F39CA_il2cpp_TypeInfo_var))->get_jointCount_0();
		MixedRealityPoseU5BU5D_t94ED3D45C754C96FE1E9BBD9C193E0DE07B32019* L_1 = (MixedRealityPoseU5BU5D_t94ED3D45C754C96FE1E9BBD9C193E0DE07B32019*)(MixedRealityPoseU5BU5D_t94ED3D45C754C96FE1E9BBD9C193E0DE07B32019*)SZArrayNew(MixedRealityPoseU5BU5D_t94ED3D45C754C96FE1E9BBD9C193E0DE07B32019_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->set_joints_2(L_1);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHandData::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedHandData__cctor_m978CB43F78AD75EF19A4CD03F27E32CC16404784 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedHandData__cctor_m978CB43F78AD75EF19A4CD03F27E32CC16404784_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly int jointCount = Enum.GetNames(typeof(TrackedHandJoint)).Length;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (TrackedHandJoint_t4DB5CFA2EE94BCBB8866FF22332E0BFD48033137_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = Enum_GetNames_m49110673091D017F43CF0F5F7AD9B7730306D2E8(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		((SimulatedHandData_t27280EA369E2A116C61830482B52B31ABA3F39CA_StaticFields*)il2cpp_codegen_static_fields_for(SimulatedHandData_t27280EA369E2A116C61830482B52B31ABA3F39CA_il2cpp_TypeInfo_var))->set_jointCount_0((((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))));
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
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHandUtils::CalculateJointRotations(Microsoft.MixedReality.Toolkit.Utilities.Handedness,UnityEngine.Vector3[],UnityEngine.Quaternion[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedHandUtils_CalculateJointRotations_m5FED3BACCD9785FA1E43E71D94E86478105854D3 (uint8_t ___handedness0, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___jointPositions1, QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6* ___jointOrientationsOut2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedHandUtils_CalculateJointRotations_m5FED3BACCD9785FA1E43E71D94E86478105854D3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_9;
	memset((&V_9), 0, sizeof(V_9));
	int32_t G_B5_0 = 0;
	int32_t G_B11_0 = 0;
	{
		// int[] jointsPerFinger = { 4, 5, 5, 5, 5 }; // thumb, index, middle, right, pinky
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)5);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = L_0;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t167F3977A01B4D7D4C0E127629E51C9A51990A05____6AF7EBB4A5EF5D7478981B4AA0BAD37788AAB1ED_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_1;
		// for (int fingerIndex = 0; fingerIndex < numFingers; fingerIndex++)
		V_1 = 0;
		goto IL_00e1;
	}

IL_0019:
	{
		// int jointsCurrentFinger = jointsPerFinger[fingerIndex];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		// int lowIndex = (int)TrackedHandJoint.ThumbMetacarpalJoint + jointsPerFinger.Take(fingerIndex).Sum();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = V_0;
		int32_t L_8 = V_1;
		RuntimeObject* L_9 = Enumerable_Take_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mE8BC7791AE1A1E1AFFDAA048E7CC47013E917908((RuntimeObject*)(RuntimeObject*)L_7, L_8, /*hidden argument*/Enumerable_Take_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mE8BC7791AE1A1E1AFFDAA048E7CC47013E917908_RuntimeMethod_var);
		int32_t L_10 = Enumerable_Sum_m6CFC8CEAC70AE3C469A5D1993FAF8EEEC6A06FB5(L_9, /*hidden argument*/NULL);
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)3, (int32_t)L_10));
		// int highIndex = lowIndex + jointsCurrentFinger - 1;
		int32_t L_11 = V_3;
		int32_t L_12 = V_2;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)L_12)), (int32_t)1));
		// for (int jointStartidx = lowIndex; jointStartidx <= highIndex; jointStartidx++)
		int32_t L_13 = V_3;
		V_5 = L_13;
		goto IL_00d4;
	}

IL_003b:
	{
		// int jointEndidx = jointStartidx == lowIndex ? (int)TrackedHandJoint.Wrist : jointStartidx - 1;
		int32_t L_14 = V_5;
		int32_t L_15 = V_3;
		if ((((int32_t)L_14) == ((int32_t)L_15)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_16 = V_5;
		G_B5_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1));
		goto IL_0047;
	}

IL_0046:
	{
		G_B5_0 = 1;
	}

IL_0047:
	{
		V_6 = G_B5_0;
		// Vector3 boneForward = jointPositions[jointStartidx] - jointPositions[jointEndidx];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_17 = ___jointPositions1;
		int32_t L_18 = V_5;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_21 = ___jointPositions1;
		int32_t L_22 = V_6;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_20, L_24, /*hidden argument*/NULL);
		V_7 = L_25;
		// Vector3 boneUp = Vector3.Cross(boneForward, GetPalmRightVector(handedness, jointPositions));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26 = V_7;
		uint8_t L_27 = ___handedness0;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_28 = ___jointPositions1;
		IL2CPP_RUNTIME_CLASS_INIT(SimulatedHandUtils_tAF574C50754200171DFD79F862A709D022FE3222_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29 = SimulatedHandUtils_GetPalmRightVector_m2EDCFDE81C5DFEE5695D826FAD0D5965062AB91B(L_27, L_28, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30 = Vector3_Cross_m63414F0C545EBB616F339FF8830D37F9230736A4(L_26, L_29, /*hidden argument*/NULL);
		V_8 = L_30;
		// if (boneForward.magnitude > float.Epsilon && boneUp.magnitude > float.Epsilon)
		float L_31 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_7), /*hidden argument*/NULL);
		if ((!(((float)L_31) > ((float)(1.40129846E-45f)))))
		{
			goto IL_00c1;
		}
	}
	{
		float L_32 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_8), /*hidden argument*/NULL);
		if ((!(((float)L_32) > ((float)(1.40129846E-45f)))))
		{
			goto IL_00c1;
		}
	}
	{
		// Quaternion jointRotation = Quaternion.LookRotation(boneForward, boneUp);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33 = V_7;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_35 = Quaternion_LookRotation_m8A7DB5BDBC361586191AB67ACF857F46160EE3F1(L_33, L_34, /*hidden argument*/NULL);
		V_9 = L_35;
		// if (fingerIndex == 0)
		int32_t L_36 = V_1;
		if (L_36)
		{
			goto IL_00b5;
		}
	}
	{
		// Quaternion rotateThumb90 = Quaternion.AngleAxis(handedness == Handedness.Left ? -90 : 90, boneForward);
		uint8_t L_37 = ___handedness0;
		if ((((int32_t)L_37) == ((int32_t)1)))
		{
			goto IL_00a2;
		}
	}
	{
		G_B11_0 = ((int32_t)90);
		goto IL_00a4;
	}

IL_00a2:
	{
		G_B11_0 = ((int32_t)-90);
	}

IL_00a4:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_39 = Quaternion_AngleAxis_m4644D20F58ADF03E9EA297CB4A845E5BCDA1E398((((float)((float)G_B11_0))), L_38, /*hidden argument*/NULL);
		// jointRotation = rotateThumb90 * jointRotation;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_40 = V_9;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_41 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_39, L_40, /*hidden argument*/NULL);
		V_9 = L_41;
	}

IL_00b5:
	{
		// jointOrientationsOut[jointStartidx] = jointRotation;
		QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6* L_42 = ___jointOrientationsOut2;
		int32_t L_43 = V_5;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_44 = V_9;
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(L_43), (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 )L_44);
		// }
		goto IL_00ce;
	}

IL_00c1:
	{
		// jointOrientationsOut[jointStartidx] = Quaternion.identity;
		QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6* L_45 = ___jointOrientationsOut2;
		int32_t L_46 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_47 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 )L_47);
	}

IL_00ce:
	{
		// for (int jointStartidx = lowIndex; jointStartidx <= highIndex; jointStartidx++)
		int32_t L_48 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)1));
	}

IL_00d4:
	{
		// for (int jointStartidx = lowIndex; jointStartidx <= highIndex; jointStartidx++)
		int32_t L_49 = V_5;
		int32_t L_50 = V_4;
		if ((((int32_t)L_49) <= ((int32_t)L_50)))
		{
			goto IL_003b;
		}
	}
	{
		// for (int fingerIndex = 0; fingerIndex < numFingers; fingerIndex++)
		int32_t L_51 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)1));
	}

IL_00e1:
	{
		// for (int fingerIndex = 0; fingerIndex < numFingers; fingerIndex++)
		int32_t L_52 = V_1;
		if ((((int32_t)L_52) < ((int32_t)5)))
		{
			goto IL_0019;
		}
	}
	{
		// jointOrientationsOut[(int)TrackedHandJoint.Palm] = Quaternion.LookRotation(GetPalmForwardVector(jointPositions), GetPalmUpVector(handedness, jointPositions));
		QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6* L_53 = ___jointOrientationsOut2;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_54 = ___jointPositions1;
		IL2CPP_RUNTIME_CLASS_INIT(SimulatedHandUtils_tAF574C50754200171DFD79F862A709D022FE3222_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_55 = SimulatedHandUtils_GetPalmForwardVector_m40A70007E66B6F844178BD62CD716B56CB16147E(L_54, /*hidden argument*/NULL);
		uint8_t L_56 = ___handedness0;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_57 = ___jointPositions1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_58 = SimulatedHandUtils_GetPalmUpVector_mE30E6E29FDCDC5164824BC7021BFCE7751D7E1EC(L_56, L_57, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_59 = Quaternion_LookRotation_m8A7DB5BDBC361586191AB67ACF857F46160EE3F1(L_55, L_58, /*hidden argument*/NULL);
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(2), (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 )L_59);
		// }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.SimulatedHandUtils::GetPalmForwardVector(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  SimulatedHandUtils_GetPalmForwardVector_m40A70007E66B6F844178BD62CD716B56CB16147E (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___jointPositions0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedHandUtils_GetPalmForwardVector_m40A70007E66B6F844178BD62CD716B56CB16147E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 indexBase = jointPositions[(int)TrackedHandJoint.IndexKnuckle];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_0 = ___jointPositions0;
		NullCheck(L_0);
		int32_t L_1 = 8;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		// Vector3 thumbMetaCarpal = jointPositions[(int)TrackedHandJoint.ThumbMetacarpalJoint];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_3 = ___jointPositions0;
		NullCheck(L_3);
		int32_t L_4 = 3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = L_5;
		// Vector3 thumbMetaCarpalToIndex = indexBase - thumbMetaCarpal;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_2, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		// return thumbMetaCarpalToIndex.normalized;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.SimulatedHandUtils::GetPalmUpVector(Microsoft.MixedReality.Toolkit.Utilities.Handedness,UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  SimulatedHandUtils_GetPalmUpVector_mE30E6E29FDCDC5164824BC7021BFCE7751D7E1EC (uint8_t ___handedness0, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___jointPositions1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedHandUtils_GetPalmUpVector_mE30E6E29FDCDC5164824BC7021BFCE7751D7E1EC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// Vector3 indexBase = jointPositions[(int)TrackedHandJoint.IndexKnuckle];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_0 = ___jointPositions1;
		NullCheck(L_0);
		int32_t L_1 = 8;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		// Vector3 pinkyBase = jointPositions[(int)TrackedHandJoint.PinkyKnuckle];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_3 = ___jointPositions1;
		NullCheck(L_3);
		int32_t L_4 = ((int32_t)23);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		// Vector3 ThumbMetaCarpal = jointPositions[(int)TrackedHandJoint.ThumbMetacarpalJoint];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_6 = ___jointPositions1;
		NullCheck(L_6);
		int32_t L_7 = 3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = L_8;
		// Vector3 ThumbMetaCarpalToPinky = pinkyBase - ThumbMetaCarpal;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_5, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		// Vector3 ThumbMetaCarpalToIndex = indexBase - ThumbMetaCarpal;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_2, L_11, /*hidden argument*/NULL);
		V_2 = L_12;
		// if (handedness == Handedness.Left)
		uint8_t L_13 = ___handedness0;
		if ((!(((uint32_t)L_13) == ((uint32_t)1))))
		{
			goto IL_0039;
		}
	}
	{
		// return Vector3.Cross(ThumbMetaCarpalToPinky, ThumbMetaCarpalToIndex).normalized;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = Vector3_Cross_m63414F0C545EBB616F339FF8830D37F9230736A4(L_14, L_15, /*hidden argument*/NULL);
		V_3 = L_16;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_3), /*hidden argument*/NULL);
		return L_17;
	}

IL_0039:
	{
		// return Vector3.Cross(ThumbMetaCarpalToIndex, ThumbMetaCarpalToPinky).normalized;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = Vector3_Cross_m63414F0C545EBB616F339FF8830D37F9230736A4(L_18, L_19, /*hidden argument*/NULL);
		V_3 = L_20;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_3), /*hidden argument*/NULL);
		return L_21;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.SimulatedHandUtils::GetPalmRightVector(Microsoft.MixedReality.Toolkit.Utilities.Handedness,UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  SimulatedHandUtils_GetPalmRightVector_m2EDCFDE81C5DFEE5695D826FAD0D5965062AB91B (uint8_t ___handedness0, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___jointPositions1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedHandUtils_GetPalmRightVector_m2EDCFDE81C5DFEE5695D826FAD0D5965062AB91B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// Vector3 indexBase = jointPositions[(int)TrackedHandJoint.IndexKnuckle];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_0 = ___jointPositions1;
		NullCheck(L_0);
		int32_t L_1 = 8;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		// Vector3 pinkyBase = jointPositions[(int)TrackedHandJoint.PinkyKnuckle];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_3 = ___jointPositions1;
		NullCheck(L_3);
		int32_t L_4 = ((int32_t)23);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		// Vector3 thumbMetaCarpal = jointPositions[(int)TrackedHandJoint.ThumbMetacarpalJoint];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_6 = ___jointPositions1;
		NullCheck(L_6);
		int32_t L_7 = 3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = L_8;
		// Vector3 thumbMetaCarpalToPinky = pinkyBase - thumbMetaCarpal;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_5, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		// Vector3 thumbMetaCarpalToIndex = indexBase - thumbMetaCarpal;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_2, L_11, /*hidden argument*/NULL);
		V_2 = L_12;
		// Vector3 thumbMetaCarpalUp = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		V_3 = L_13;
		// if (handedness == Handedness.Left)
		uint8_t L_14 = ___handedness0;
		if ((!(((uint32_t)L_14) == ((uint32_t)1))))
		{
			goto IL_0042;
		}
	}
	{
		// thumbMetaCarpalUp = Vector3.Cross(thumbMetaCarpalToPinky, thumbMetaCarpalToIndex).normalized;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = Vector3_Cross_m63414F0C545EBB616F339FF8830D37F9230736A4(L_15, L_16, /*hidden argument*/NULL);
		V_4 = L_17;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_4), /*hidden argument*/NULL);
		V_3 = L_18;
		// }
		goto IL_0053;
	}

IL_0042:
	{
		// thumbMetaCarpalUp = Vector3.Cross(thumbMetaCarpalToIndex, thumbMetaCarpalToPinky).normalized;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21 = Vector3_Cross_m63414F0C545EBB616F339FF8830D37F9230736A4(L_19, L_20, /*hidden argument*/NULL);
		V_4 = L_21;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_4), /*hidden argument*/NULL);
		V_3 = L_22;
	}

IL_0053:
	{
		// return Vector3.Cross(thumbMetaCarpalUp, thumbMetaCarpalToIndex).normalized;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25 = Vector3_Cross_m63414F0C545EBB616F339FF8830D37F9230736A4(L_23, L_24, /*hidden argument*/NULL);
		V_4 = L_25;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_4), /*hidden argument*/NULL);
		return L_26;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHandUtils::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedHandUtils__ctor_m1DC6D6FC4983C4A801F96A172A09267441FFD4A2 (SimulatedHandUtils_tAF574C50754200171DFD79F862A709D022FE3222 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHandUtils::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedHandUtils__cctor_m91399DFADACF93CA7D3D1F610603D32D1E976016 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedHandUtils__cctor_m91399DFADACF93CA7D3D1F610603D32D1E976016_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly int jointCount = Enum.GetNames(typeof(TrackedHandJoint)).Length;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (TrackedHandJoint_t4DB5CFA2EE94BCBB8866FF22332E0BFD48033137_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = Enum_GetNames_m49110673091D017F43CF0F5F7AD9B7730306D2E8(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		((SimulatedHandUtils_tAF574C50754200171DFD79F862A709D022FE3222_StaticFields*)il2cpp_codegen_static_fields_for(SimulatedHandUtils_tAF574C50754200171DFD79F862A709D022FE3222_il2cpp_TypeInfo_var))->set_jointCount_0((((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))));
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
// System.Void Microsoft.MixedReality.Toolkit.Input.KeyBinding_<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_mF6CE5D812D3240FE7BBC44302C56D9A29C58A46C (U3CU3Ec__DisplayClass5_0_tC1A31D4FB9553559F4B3444A282601230D2A2B43 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.KeyBinding_<>c__DisplayClass5_0::<.cctor>b__0(Microsoft.MixedReality.Toolkit.Input.KeyBinding_KeyType,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0_U3C_cctorU3Eb__0_m7CEEFA179C4DD450C22789D4F22B802D4D9E274F (U3CU3Ec__DisplayClass5_0_tC1A31D4FB9553559F4B3444A282601230D2A2B43 * __this, int32_t ___bindingType0, int32_t ___code1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass5_0_U3C_cctorU3Eb__0_m7CEEFA179C4DD450C22789D4F22B802D4D9E274F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		// var kb = new KeyBinding() { bindingType=bindingType, code=code };
		il2cpp_codegen_initobj((&V_1), sizeof(KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B ));
		int32_t L_0 = ___bindingType0;
		(&V_1)->set_bindingType_3(L_0);
		int32_t L_1 = ___code1;
		(&V_1)->set_code_4(L_1);
		KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B  L_2 = V_1;
		V_0 = L_2;
		// names.Add(kb.ToString());
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_3 = __this->get_names_0();
		String_t* L_4 = KeyBinding_ToString_mF29E1518CCD0A18DDA6F753E817F23408B7DF185((KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_3);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_3, L_4, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// EnumToKeyBindingMap[index] = Tuple.Create(bindingType, code);
		IL2CPP_RUNTIME_CLASS_INIT(KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B_il2cpp_TypeInfo_var);
		Dictionary_2_t412157312728038EF6AC6D6BC6EF689B3B165DEC * L_5 = ((KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B_StaticFields*)il2cpp_codegen_static_fields_for(KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B_il2cpp_TypeInfo_var))->get_EnumToKeyBindingMap_2();
		int32_t L_6 = __this->get_index_1();
		int32_t L_7 = ___bindingType0;
		int32_t L_8 = ___code1;
		Tuple_2_t1C7D0D1C413A36A4FEB4C9441E39E7E0F615B1F8 * L_9 = Tuple_Create_TisKeyType_t309E3645240CFF657823B6434AD784E18BBA0195_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m36E71296DE060F86F936B732420267ACB8AA06FC(L_7, L_8, /*hidden argument*/Tuple_Create_TisKeyType_t309E3645240CFF657823B6434AD784E18BBA0195_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m36E71296DE060F86F936B732420267ACB8AA06FC_RuntimeMethod_var);
		NullCheck(L_5);
		Dictionary_2_set_Item_m98F68CFDCFFBDAF167FC9B2DB67476EEB0F13AA3(L_5, L_6, L_9, /*hidden argument*/Dictionary_2_set_Item_m98F68CFDCFFBDAF167FC9B2DB67476EEB0F13AA3_RuntimeMethod_var);
		// KeyBindingToEnumMap[Tuple.Create(bindingType, code)] = index;
		Dictionary_2_t2B763BD651C6B7C218A86E7023287E56619A9B5B * L_10 = ((KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B_StaticFields*)il2cpp_codegen_static_fields_for(KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B_il2cpp_TypeInfo_var))->get_KeyBindingToEnumMap_1();
		int32_t L_11 = ___bindingType0;
		int32_t L_12 = ___code1;
		Tuple_2_t1C7D0D1C413A36A4FEB4C9441E39E7E0F615B1F8 * L_13 = Tuple_Create_TisKeyType_t309E3645240CFF657823B6434AD784E18BBA0195_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m36E71296DE060F86F936B732420267ACB8AA06FC(L_11, L_12, /*hidden argument*/Tuple_Create_TisKeyType_t309E3645240CFF657823B6434AD784E18BBA0195_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m36E71296DE060F86F936B732420267ACB8AA06FC_RuntimeMethod_var);
		int32_t L_14 = __this->get_index_1();
		NullCheck(L_10);
		Dictionary_2_set_Item_mF87A3312B7715B9AE3211DAD83A237EDBA07843D(L_10, L_13, L_14, /*hidden argument*/Dictionary_2_set_Item_mF87A3312B7715B9AE3211DAD83A237EDBA07843D_RuntimeMethod_var);
		// ++index;
		int32_t L_15 = __this->get_index_1();
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
		int32_t L_16 = V_2;
		__this->set_index_1(L_16);
		// };
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_HandJointDataGenerator_tACFADDDDE2346DC5682A95B8E6B8C3299B06F37B (HandJointDataGenerator_tACFADDDDE2346DC5682A95B8E6B8C3299B06F37B * __this, MixedRealityPoseU5BU5D_t94ED3D45C754C96FE1E9BBD9C193E0DE07B32019* ___jointPoses0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___jointPoses0' to native representation
	MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5 * ____jointPoses0_marshaled = NULL;
	if (___jointPoses0 != NULL)
	{
		____jointPoses0_marshaled = reinterpret_cast<MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5 *>((___jointPoses0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	il2cppPInvokeFunc(____jointPoses0_marshaled);

}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHandData_HandJointDataGenerator::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandJointDataGenerator__ctor_m85804E093C82080C49048C50654417AC62D155B8 (HandJointDataGenerator_tACFADDDDE2346DC5682A95B8E6B8C3299B06F37B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHandData_HandJointDataGenerator::Invoke(Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandJointDataGenerator_Invoke_m8A41F2C64FC2C2CD90C6AA2BD2E1C56CD507A5E2 (HandJointDataGenerator_tACFADDDDE2346DC5682A95B8E6B8C3299B06F37B * __this, MixedRealityPoseU5BU5D_t94ED3D45C754C96FE1E9BBD9C193E0DE07B32019* ___jointPoses0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (MixedRealityPoseU5BU5D_t94ED3D45C754C96FE1E9BBD9C193E0DE07B32019*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___jointPoses0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, MixedRealityPoseU5BU5D_t94ED3D45C754C96FE1E9BBD9C193E0DE07B32019*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___jointPoses0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___jointPoses0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___jointPoses0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___jointPoses0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___jointPoses0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (MixedRealityPoseU5BU5D_t94ED3D45C754C96FE1E9BBD9C193E0DE07B32019*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___jointPoses0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< MixedRealityPoseU5BU5D_t94ED3D45C754C96FE1E9BBD9C193E0DE07B32019* >::Invoke(targetMethod, targetThis, ___jointPoses0);
					else
						GenericVirtActionInvoker1< MixedRealityPoseU5BU5D_t94ED3D45C754C96FE1E9BBD9C193E0DE07B32019* >::Invoke(targetMethod, targetThis, ___jointPoses0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< MixedRealityPoseU5BU5D_t94ED3D45C754C96FE1E9BBD9C193E0DE07B32019* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___jointPoses0);
					else
						VirtActionInvoker1< MixedRealityPoseU5BU5D_t94ED3D45C754C96FE1E9BBD9C193E0DE07B32019* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___jointPoses0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___jointPoses0) - 1), targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (MixedRealityPoseU5BU5D_t94ED3D45C754C96FE1E9BBD9C193E0DE07B32019*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___jointPoses0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, MixedRealityPoseU5BU5D_t94ED3D45C754C96FE1E9BBD9C193E0DE07B32019*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___jointPoses0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Microsoft.MixedReality.Toolkit.Input.SimulatedHandData_HandJointDataGenerator::BeginInvoke(Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HandJointDataGenerator_BeginInvoke_m3E06AB2AA5D54B9B82CE706C1E98D2A0D5D6FE6C (HandJointDataGenerator_tACFADDDDE2346DC5682A95B8E6B8C3299B06F37B * __this, MixedRealityPoseU5BU5D_t94ED3D45C754C96FE1E9BBD9C193E0DE07B32019* ___jointPoses0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___jointPoses0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHandData_HandJointDataGenerator::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandJointDataGenerator_EndInvoke_m12F5E1C517D11C68656640D46E9C968902095A50 (HandJointDataGenerator_tACFADDDDE2346DC5682A95B8E6B8C3299B06F37B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyBinding_get_BindingType_m3E33960732F90AB4F83831C19F820A2CA1220448_inline (KeyBinding_t5A8A6C756DE7AEE5D3852F0329A6DA095D3B802B * __this, const RuntimeMethod* method)
{
	{
		// public KeyType BindingType => bindingType;
		int32_t L_0 = __this->get_bindingType_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  MixedRealityPose_get_ZeroIdentity_m7DFFCF17695B53E77ABCC4035C292C405996350E_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityPose_get_ZeroIdentity_m7DFFCF17695B53E77ABCC4035C292C405996350EMicrosoft_MixedReality_Toolkit_Services_InputSimulation_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MixedRealityPose ZeroIdentity { get; } = new MixedRealityPose(Vector3.zero, Quaternion.identity);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5_il2cpp_TypeInfo_var);
		MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  L_0 = ((MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5_il2cpp_TypeInfo_var))->get_U3CZeroIdentityU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  MixedRealityPose_get_Position_mA85AA29A7C35C13E7DDDCF058D1CB4F0371F6A08_inline (MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Position { get { return position; } set { position = value; } }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_position_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseController_set_IsRotationAvailable_m927864ED0861611B5CD01221F9EEED6174AEE9F2_inline (BaseController_tCABA601990B425FA3A315FAECE1332E0005DC316 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsRotationAvailable { get; protected set; }
		bool L_0 = ___value0;
		__this->set_U3CIsRotationAvailableU3Ek__BackingField_10(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseController_set_IsPositionAvailable_m213EE7DA83AD144F45B886D80A9501595AF4746F_inline (BaseController_tCABA601990B425FA3A315FAECE1332E0005DC316 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsPositionAvailable { get; protected set; }
		bool L_0 = ___value0;
		__this->set_U3CIsPositionAvailableU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BaseController_get_IsPositionAvailable_m1F93CB6D96DEB05F78FD1CCE4B0FE448D3127CC4_inline (BaseController_tCABA601990B425FA3A315FAECE1332E0005DC316 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsPositionAvailable { get; protected set; }
		bool L_0 = __this->get_U3CIsPositionAvailableU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HandRay_tD9B46FBC0154A56DFD6DA889BCA8A87BE57B9C37 * BaseHand_get_HandRay_mF53D0155F4C9569D0D54506F8E28ED5267706F55_inline (BaseHand_t33C08C0C3F8EDE4D4BA9ABFE981707C71208C1A6 * __this, const RuntimeMethod* method)
{
	{
		// protected HandRay HandRay { get; } = new HandRay();
		HandRay_tD9B46FBC0154A56DFD6DA889BCA8A87BE57B9C37 * L_0 = __this->get_U3CHandRayU3Ek__BackingField_14();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t BaseController_get_ControllerHandedness_m3D9C7DE0BE3F9F1C81C49826D67CF21175684F1A_inline (BaseController_tCABA601990B425FA3A315FAECE1332E0005DC316 * __this, const RuntimeMethod* method)
{
	{
		// public Handedness ControllerHandedness { get; }
		uint8_t L_0 = __this->get_U3CControllerHandednessU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityPose_set_Position_mB9AD9342E3AEAFC264C2196FFE6551CDA6F6178B_inline (MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 Position { get { return position; } set { position = value; } }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_position_1(L_0);
		// public Vector3 Position { get { return position; } set { position = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityPose_set_Rotation_mDB92DA586E7A05D81A035FFFAA972E521EA68D23_inline (MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method)
{
	{
		// public Quaternion Rotation { get { return rotation; } set { rotation = value; } }
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0 = ___value0;
		__this->set_rotation_2(L_0);
		// public Quaternion Rotation { get { return rotation; } set { rotation = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BaseController_get_IsRotationAvailable_m5F7ECD00BDFD4A190C047F24BE5D2DFCF5FC0E28_inline (BaseController_tCABA601990B425FA3A315FAECE1332E0005DC316 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsRotationAvailable { get; protected set; }
		bool L_0 = __this->get_U3CIsRotationAvailableU3Ek__BackingField_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BaseController_get_InputSource_m6E124D758E6373E7E1C498AE986C460CCDC651E3_inline (BaseController_tCABA601990B425FA3A315FAECE1332E0005DC316 * __this, const RuntimeMethod* method)
{
	{
		// public IMixedRealityInputSource InputSource { get; }
		RuntimeObject* L_0 = __this->get_U3CInputSourceU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* BaseController_get_Interactions_m8C6000FF0F70063C616791046B0B93CE452AFC29_inline (BaseController_tCABA601990B425FA3A315FAECE1332E0005DC316 * __this, const RuntimeMethod* method)
{
	{
		// public MixedRealityInteractionMapping[] Interactions { get; private set; } = null;
		MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* L_0 = __this->get_U3CInteractionsU3Ek__BackingField_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityInteractionMapping_get_InputType_mB3BB9A8477E555DAFFE3F1A624448D53FC4102E6_inline (MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 * __this, const RuntimeMethod* method)
{
	{
		// public DeviceInputType InputType => inputType;
		int32_t L_0 = __this->get_inputType_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  MixedRealityInteractionMapping_get_MixedRealityInputAction_mB9F6AA03D64CE6F746424699CD1F4993446CE41A_inline (MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 * __this, const RuntimeMethod* method)
{
	{
		// get { return inputAction; }
		MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  L_0 = __this->get_inputAction_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SimulatedHandData_get_IsPinching_mA3A8D340B77A9643470DD4426A818E4D09DDA96F_inline (SimulatedHandData_t27280EA369E2A116C61830482B52B31ABA3F39CA * __this, const RuntimeMethod* method)
{
	{
		// public bool IsPinching => isPinching;
		bool L_0 = __this->get_isPinching_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityInteractionMapping_get_BoolData_m9B49EA23CE1DD08217097A26D1D5A89EAD2645D6_inline (MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 * __this, const RuntimeMethod* method)
{
	{
		// return boolData;
		bool L_0 = __this->get_boolData_12();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  MixedRealityInputAction_get_None_mE8893070C64BA6EA2339B7D0C413DE755D7D4D6E_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityInputAction_get_None_mE8893070C64BA6EA2339B7D0C413DE755D7D4D6EMicrosoft_MixedReality_Toolkit_Services_InputSimulation_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MixedRealityInputAction None { get; } = new MixedRealityInputAction(0, "None");
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35_il2cpp_TypeInfo_var);
		MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  L_0 = ((MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35_il2cpp_TypeInfo_var))->get_U3CNoneU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityGesturesProfile_tA3455FE721279843B94D506C063398F644EEA005 * MixedRealityInputSystemProfile_get_GesturesProfile_m475DF784CE48F155004368AD88E7CA6CD64F3D3E_inline (MixedRealityInputSystemProfile_t6086D1D813224695CFB52FA000EDC2A6B6125255 * __this, const RuntimeMethod* method)
{
	{
		// get { return gesturesProfile; }
		MixedRealityGesturesProfile_tA3455FE721279843B94D506C063398F644EEA005 * L_0 = __this->get_gesturesProfile_13();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityGestureMappingU5BU5D_t5083898BA53AAB77B3DDE57E6F4F90B87B64C480* MixedRealityGesturesProfile_get_Gestures_m03E4FD32A250FEDFA36E226832F3619B840937BC_inline (MixedRealityGesturesProfile_tA3455FE721279843B94D506C063398F644EEA005 * __this, const RuntimeMethod* method)
{
	{
		// public MixedRealityGestureMapping[] Gestures => gestures;
		MixedRealityGestureMappingU5BU5D_t5083898BA53AAB77B3DDE57E6F4F90B87B64C480* L_0 = __this->get_gestures_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityGestureMapping_get_GestureType_m920653F9DF61975597BB33ECEE65E3CF00E3FE0A_inline (MixedRealityGestureMapping_tC8B239DD943E25B72D110F4AC2589E62D1FCA0E1 * __this, const RuntimeMethod* method)
{
	{
		// public GestureInputType GestureType => gestureType;
		int32_t L_0 = __this->get_gestureType_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  MixedRealityGestureMapping_get_Action_m5A65903158DF4543D9CAA4A5EDF2D4E6AEB31CEF_inline (MixedRealityGestureMapping_tC8B239DD943E25B72D110F4AC2589E62D1FCA0E1 * __this, const RuntimeMethod* method)
{
	{
		// public MixedRealityInputAction Action => action;
		MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  L_0 = __this->get_action_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityGesturesProfile_get_UseRailsNavigation_m0A74F0125D179A02EBB612502429FD5A01067504_inline (MixedRealityGesturesProfile_tA3455FE721279843B94D506C063398F644EEA005 * __this, const RuntimeMethod* method)
{
	{
		// public bool UseRailsNavigation => useRailsNavigation;
		bool L_0 = __this->get_useRailsNavigation_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_HoldStartDuration_m381060A249D46CA0AA4F602CC104BE888EA2B1A2_inline (MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1 * __this, const RuntimeMethod* method)
{
	{
		// public float HoldStartDuration => holdStartDuration;
		float L_0 = __this->get_holdStartDuration_39();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_NavigationStartThreshold_m14EF89E8C3B57F9B7C85AAB0D7DC3D4F2FC966B1_inline (MixedRealityInputSimulationProfile_tFE9009B048145E1FC0323D6BCDA547A75CDA66F1 * __this, const RuntimeMethod* method)
{
	{
		// public float NavigationStartThreshold => navigationStartThreshold;
		float L_0 = __this->get_navigationStartThreshold_40();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityPoseU5BU5D_t94ED3D45C754C96FE1E9BBD9C193E0DE07B32019* SimulatedHandData_get_Joints_m479428796C958C982273121FDF3A451ED5B0AF67_inline (SimulatedHandData_t27280EA369E2A116C61830482B52B31ABA3F39CA * __this, const RuntimeMethod* method)
{
	{
		// public MixedRealityPose[] Joints => joints;
		MixedRealityPoseU5BU5D_t94ED3D45C754C96FE1E9BBD9C193E0DE07B32019* L_0 = __this->get_joints_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_value_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return L_0;
	}
}
