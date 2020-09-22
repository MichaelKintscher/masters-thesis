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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_t9B92D8A7CB0AE5AF973870EDF7DE2BC12E5FA4E5;
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings
struct BaseWindowsMixedRealityCameraSettings_tA5B8622CC64E1B447C12B83A20AF7B3D5D95D385;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Text.Encoder
struct Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// Windows.Graphics.Holographic.IHolographicDisplayStatics
struct IHolographicDisplayStatics_tC413B2D2DD674ECDAC96BE8058BB688DFE02EF36;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_t689792F74DC068BC68EBBF279929CF1756D466B3;
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider
struct IWindowsMixedRealityUtilitiesProvider_t19A9A1B642C5868676ED2EA00FA75B08FC07DB63;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerMappingProfile
struct MixedRealityControllerMappingProfile_t12223BB5F530EC9E879FBFDD585E12FA087364F9;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationProfile
struct MixedRealityControllerVisualizationProfile_t29BFB03EF315B32F64DBE01F666C2F532C9A1CC3;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile
struct MixedRealityGesturesProfile_tA3455FE721279843B94D506C063398F644EEA005;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionRulesProfile
struct MixedRealityInputActionRulesProfile_tFEAA2110870F72D0711AA73999ABD3E35B8B1EC2;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionsProfile
struct MixedRealityInputActionsProfile_tC22296A00F0EFB4204D691FF9779FF791BF18B7A;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerProfile
struct MixedRealityPointerProfile_tF898FEB881E4A15F5948FF8F05E75B106776AB48;
// Microsoft.MixedReality.Toolkit.Input.MixedRealitySpeechCommandsProfile
struct MixedRealitySpeechCommandsProfile_t242A67789EFE65C5858239640DFD186B9AD525C2;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069;
// Microsoft.MixedReality.Toolkit.Utilities.SystemType
struct SystemType_t9CBB747474C12365CDB0953443942140BA3F6E3D;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition
struct WindowsMixedRealityArticulatedHandDefinition_t6767A4BDFA6A972CE918EDC477B279BF2637FAA7;
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityCameraSettingsProfile
struct WindowsMixedRealityCameraSettingsProfile_t315EAD84CE3FB831C6072D7AB2E3E0FDC7AD352C;
// Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder
struct WindowsMixedRealityHandRecorder_t238D464312EDB1A73A6442BD23B3D340CF4EA210;
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityReprojectionUpdater
struct WindowsMixedRealityReprojectionUpdater_t9C1F363D0E755B6A4C8F84CF10D09CC3A1479F43;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct Dictionary_2_tB2D3942B8FBDE371EDC0CC7AC3685CF1E4BBBA64;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose/GestureId,Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose>
struct Dictionary_2_t2B628E4F8EBFC133D690583E443D9563A31757FA;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct Dictionary_2_t2608D8F85D3104F212EC3BC05E54C1515108B68E;
// Windows.Foundation.IAsyncOperation`1<Windows.Perception.People.HandMeshObserver>
struct IAsyncOperation_1_t0874BF21C52B1A21763C1277695B2A724D9E4F56;
// Windows.Foundation.IAsyncOperation`1<System.Object>
struct IAsyncOperation_1_tE95B7CD98CE930F006BBD07D7BB5109224B1BFFC;
// System.Collections.Generic.IEqualityComparer`1<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint>
struct IEqualityComparer_1_tFB10C9B4A61B51933A4B1135CA00C9B1C6C95F59;
// System.Collections.Generic.Dictionary`2/KeyCollection<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct KeyCollection_t4BD21705716C62323FD46D7FEC827C022C332ABB;
// System.Collections.Generic.List`1<System.Globalization.CultureInfo>
struct List_1_tB93032867275F6C802C3659FC027FF6FB1372359;
// System.Threading.Tasks.Task`1<Windows.Perception.People.HandMeshObserver>
struct Task_1_t91456D786DCDB709E9CE4AD7D55867EAA4E9B8E6;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17;
// System.Collections.Generic.Dictionary`2/ValueCollection<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct ValueCollection_t6079BE139241F466955A2B6F2C677A1B3E57A398;
// Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose
struct ArticulatedHandPose_t0ACAC8E09F0FFC54CB295B9ECD097834791F65BF;
// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile
struct BaseCameraSettingsProfile_t58D17D4EC9CF1682B49D0BCA5B18733DE9A8D2F0;
// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProvider
struct BaseCameraSettingsProvider_t4E4C0A3E587FDB85137F755C0E20EACCF11815EC;
// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_tA51F0EA841C4C16598268B190DC8663BCB38F555;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Collections.Generic.Dictionary`2/Entry<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>[]
struct EntryU5BU5D_t1D02B4E797EE164BD2EB5A22C8077E5F62F679DE;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Microsoft.MixedReality.Toolkit.Input.HandMeshInfo
struct HandMeshInfo_t2149B356EA6B50B1E60C46E30EF537D6D8E78566;
// Windows.Perception.People.HandMeshObserver
struct HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273;
// Windows.Perception.People.HandMeshVertexState
struct HandMeshVertexState_t472D7CF8982D6D93200D405B7F990404C022A9F8;
// Windows.Perception.People.HandMeshVertex[]
struct HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1;
// Windows.Perception.People.HandPose
struct HandPose_tA80E49BEA85A49A6594EC7FF8E1470F10978A0AE;
// Windows.Graphics.Holographic.HolographicDisplay
struct HolographicDisplay_t64D6F94B22A96A3AB13B7935EBDAE901CE418B6E;
// Windows.Graphics.Holographic.HolographicFrame
struct HolographicFrame_t16CC7D90BCAF0D8BAC1D7C941B18567F460C99EC;
// Windows.Graphics.Holographic.HolographicViewConfiguration
struct HolographicViewConfiguration_tE179E9B0B22770D34F8757D4314359560DC2CBCB;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem
struct IMixedRealityCameraSystem_t81AA8E65BD9B0D335E49C33D02F0ED9B6A76D508;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource
struct IMixedRealityInputSource_t5FD93249755F746278AEAC000A28B7765ACB7F9F;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t64ABD77097BAD8C4A1194C39BFFD4E6F6CBF55B1;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile
struct MixedRealityHandTrackingProfile_tDADC6D5367650C672DB618EED78274B7C1720AF0;
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
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// Windows.Perception.Spatial.SpatialCoordinateSystem
struct SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB;
// Windows.UI.Input.Spatial.SpatialInteractionSource
struct SpatialInteractionSource_tF5344A6C35341EF626EAC41ADCDFDCE01154752F;
// Windows.UI.Input.Spatial.SpatialInteractionSourceState
struct SpatialInteractionSourceState_t6E721C100623C9060174FE6F6FBAC61D17FDF199;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.IO.StreamWriter
struct StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6;
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
// System.UInt16[]
struct UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;

IL2CPP_EXTERN_C RuntimeClass* ArticulatedHandPose_t0ACAC8E09F0FFC54CB295B9ECD097834791F65BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseWindowsMixedRealityCameraSettings_tA5B8622CC64E1B447C12B83A20AF7B3D5D95D385_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoreServices_tDB76F6146407FDEA9A4479E5553ED32DC19AADBD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t2608D8F85D3104F212EC3BC05E54C1515108B68E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandMeshInfo_t2149B356EA6B50B1E60C46E30EF537D6D8E78566_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HolographicFrame_t16CC7D90BCAF0D8BAC1D7C941B18567F460C99EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputSystem_t64ABD77097BAD8C4A1194C39BFFD4E6F6CBF55B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IWindowsMixedRealityUtilitiesProvider_t19A9A1B642C5868676ED2EA00FA75B08FC07DB63_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityPoseU5BU5D_t94ED3D45C754C96FE1E9BBD9C193E0DE07B32019_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsMixedRealityCameraSettingsProfile_t315EAD84CE3FB831C6072D7AB2E3E0FDC7AD352C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsMixedRealityHandRecorder_t238D464312EDB1A73A6442BD23B3D340CF4EA210_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsMixedRealityUtilities_t6E3AF6A539480B47E4F166D5E6EFBBF7CCB0E958_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral18E27A22FCB12E9EB3D95EB9AD4D7623C1AEA302;
IL2CPP_EXTERN_C String_t* _stringLiteral18E7928E065AE670C66DAD6CCCA38069D00491EA;
IL2CPP_EXTERN_C String_t* _stringLiteral1D666B4EA1FB937539CA8FC0DD4AB92B572E4AD9;
IL2CPP_EXTERN_C String_t* _stringLiteral31E8E4ACB2EDC39B158FBA91185DE1333306F668;
IL2CPP_EXTERN_C String_t* _stringLiteral454DCA3FD02B698041CB0BC1D2E9DC932FDA7A7C;
IL2CPP_EXTERN_C String_t* _stringLiteral845601714FB132030B7585887918D078E9CE2267;
IL2CPP_EXTERN_C String_t* _stringLiteral9883BE541EEAFE5925B5C5E27FD12ADF5E431B5E;
IL2CPP_EXTERN_C String_t* _stringLiteralD51862061BEF6981AB4BE866F6A89BA4489E5DDC;
IL2CPP_EXTERN_C String_t* _stringLiteralD89EC3F9FF2985A58F63B8BD8CBC002A9CBBEA32;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE17E01A6CDB454BE09B74C544A2901D6C9F990AF;
IL2CPP_EXTERN_C String_t* _stringLiteralFAEE63AB5907DDB2FFDA6A074F7B5BF1561A4A42;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E_TisU3CSetHandMeshObserverU3Ed__17_tB6D9B203D85335F7DCEEF262F084016559A10517_mD0DA7135E72195C6FE7B90DE51E01A253D7B9C8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CSetHandMeshObserverU3Ed__17_tB6D9B203D85335F7DCEEF262F084016559A10517_mAC7D8BF08D393DF453E3D589064ED4F619E5F530_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComponentExtensions_EnsureComponent_TisWindowsMixedRealityReprojectionUpdater_t9C1F363D0E755B6A4C8F84CF10D09CC3A1479F43_m02601E5017D9CCAE00B8A881FE6A9E70FF4DB98B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m68CBDA00749C9C3E905574F6A9F8A0D17BB0D04D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m98FA9A5E83858B1899CF3494493ACF76DE701543_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m1C8741C73000BD525E6034625DD1ED12EB07EA10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m608A59322CEE9B305CE8472969742F446EA8318A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m59638659560BF6E7A32BE216A243011FC4E906F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m5D6FF641B7538EB84114C6AE307B3A91B49DBD1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeSystemExtensions_GetAwaiter_TisHandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273_m5EC4FF7F7B66CDE9B445927A5B7350344EAF4FBD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* TrackedHandJoint_t4DB5CFA2EE94BCBB8866FF22332E0BFD48033137_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t BaseWindowsMixedRealityCameraSettings_ApplyConfiguration_m2E5DCE3F69CB56696F82508DFC7ACAFF8F8604FA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BaseWindowsMixedRealityCameraSettings_InitializeReprojectionUpdater_m0B4B168EDC7C308BB93694510BF65EA87D89AE9C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BaseWindowsMixedRealityCameraSettings_UninitializeReprojectionUpdater_mA42E10F78C2B637F6548ED1C853B53DD48E8C438_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BaseWindowsMixedRealityCameraSettings__cctor_mABDE7A2EB81DB69B86FEEBC6ED5F6E6B403C0D72_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BaseWindowsMixedRealityCameraSettings_get_Profile_mCFB437B6754A2F8925916A6BAD837EF10F7306C5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityPose_get_ZeroIdentity_m7DFFCF17695B53E77ABCC4035C292C405996350EMicrosoft_MixedReality_Toolkit_Providers_WindowsMixedReality_Shared_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CSetHandMeshObserverU3Ed__17_MoveNext_mD5D3499AEFB8E8FD738F49644D3B5E52D6A524AB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityArticulatedHandDefinition_InitializeUVs_mE6B9D144CAB9E821DEAF12E9BFF8C22EF158D6AA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityArticulatedHandDefinition_SetHandMeshObserver_m59B3A0D70CCF32FCC9FA81FBB03424B4E071FB38_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityArticulatedHandDefinition_UpdateCurrentIndexPose_m1C9B64A926647675FAC4FEBFB053FCB2CEB18E8B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityArticulatedHandDefinition_UpdateHandJoints_m65869BA9A2083EBD5D4B8E5AEA903ABCF0DA0148_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityArticulatedHandDefinition_UpdateHandMesh_mA70F3137D39795B62D71D1831433938E9EBC4228_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityArticulatedHandDefinition__ctor_m27217E041175A7ECB8A76A18A529FD3C6E058608_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityArticulatedHandDefinition_get_DefaultInteractions_m1161C8DC4F88A9296EB87E390D8121C83D50BB5A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityArticulatedHandDefinition_get_IsInPointingPose_m0AEE4E2D04A9D34779B3C9C4444F9253F5F4DB24_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityHandRecorder_RecordHandStop_m5968F1ACE444E5DB1E3922D19AD036F5527F3E94_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityHandRecorder_StoreRecordedHandPose_mFD6E1F7C7508CD1E8F7F94E4FECD267506D5B9C9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityHandRecorder__cctor_mBB3BBC9821E1CD0E3D84757E79BC033976446B05_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityHandRecorder__ctor_m8AF9CAE95B290CB360C1C6FE07047DC80B441D7F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityUtilities__cctor_m51D5DD3A968A3C21243CA02E0B50E71389F4EAED_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityUtilities_get_CurrentHolographicFrame_mB94F1A42980732440624EE5A758448CC8FA2C352_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityUtilities_get_SpatialCoordinateSystem_m35FA29F240C4E318D10DFEA6914F39C8B5C2C98D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityUtilities_get_UtilitiesProvider_m8BBCC384C698F1FA504B618B249FB2F84B76F8A9Microsoft_MixedReality_Toolkit_Providers_WindowsMixedReality_Shared_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityUtilities_get_UtilitiesProvider_m8BBCC384C698F1FA504B618B249FB2F84B76F8A9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityUtilities_set_UtilitiesProvider_m66ECC937DB6E460A56860661B2D493F0C44AA052_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct IAsyncOperationCompletedHandler_1_t9941802FAFCAEA5AFAF80CD47D7361C7AF9973FB_ComCallableWrapper;
struct IHandMeshObserver_tA497D8D462D45DC786DB2F94B0417A99F847F9BC;
struct IHandMeshVertexState_t9D445DAD72C6F6223D65E571D67169F87E92A08D;
struct IHandPose_tD8185DC7675D58E1AFCA20EB4E8A2B2ECA4D6A07;
struct IHolographicDisplay_t059323C7BC7EBB61383A20C0CC66306C3BF67A3F;
struct IHolographicFrame_tC5009F0FA6B896AC457F40B46434D6B152A017FE;
struct IHolographicViewConfiguration_t0B0C4B38D61BD9F3AFA10FA0131BED337C573B82;
struct ISpatialCoordinateSystem_t0B599CF4D7B3B14DA13D87C3A231F9981F3A491A;
struct ISpatialInteractionSourceState_t4A049FFC25A0197F3EF96AD7E1DC41AAECEC7F4B;
struct ISpatialInteractionSource_tC311B80858A5F034D4E8B4EEA2A2DCC57E2A4C7A;

struct MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D;
struct MixedRealityPoseU5BU5D_t94ED3D45C754C96FE1E9BBD9C193E0DE07B32019;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67;
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
struct HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tA5B445904364423BA6843214AA2553ACF81AC6C7 
{
public:

public:
};


// System.Object

// Windows.Foundation.IAsyncOperation`1<Windows.Perception.People.HandMeshObserver>
struct NOVTABLE IAsyncOperation_1_t0874BF21C52B1A21763C1277695B2A724D9E4F56 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_mDA59D6F156299EB4DEAE15EF336162510C2C66D2(IAsyncOperationCompletedHandler_1_t9941802FAFCAEA5AFAF80CD47D7361C7AF9973FB_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_m87D10B3592C176980FB3334BA160D0A8F0D497AF(IAsyncOperationCompletedHandler_1_t9941802FAFCAEA5AFAF80CD47D7361C7AF9973FB_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_m9F8155B9E4016EE9EDA3702AC225E58827E50954(IHandMeshObserver_tA497D8D462D45DC786DB2F94B0417A99F847F9BC** comReturnValue) = 0;
};
// Windows.Graphics.Holographic.IHolographicDisplayStatics
struct NOVTABLE IHolographicDisplayStatics_tC413B2D2DD674ECDAC96BE8058BB688DFE02EF36 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IHolographicDisplayStatics_GetDefault_m02993FA977AFB6916AACF27A70C159D94BBC4D13(IHolographicDisplay_t059323C7BC7EBB61383A20C0CC66306C3BF67A3F** comReturnValue) = 0;
};

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


// Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose
struct  ArticulatedHandPose_t0ACAC8E09F0FFC54CB295B9ECD097834791F65BF  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose[] Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose::localJointPoses
	MixedRealityPoseU5BU5D_t94ED3D45C754C96FE1E9BBD9C193E0DE07B32019* ___localJointPoses_1;

public:
	inline static int32_t get_offset_of_localJointPoses_1() { return static_cast<int32_t>(offsetof(ArticulatedHandPose_t0ACAC8E09F0FFC54CB295B9ECD097834791F65BF, ___localJointPoses_1)); }
	inline MixedRealityPoseU5BU5D_t94ED3D45C754C96FE1E9BBD9C193E0DE07B32019* get_localJointPoses_1() const { return ___localJointPoses_1; }
	inline MixedRealityPoseU5BU5D_t94ED3D45C754C96FE1E9BBD9C193E0DE07B32019** get_address_of_localJointPoses_1() { return &___localJointPoses_1; }
	inline void set_localJointPoses_1(MixedRealityPoseU5BU5D_t94ED3D45C754C96FE1E9BBD9C193E0DE07B32019* value)
	{
		___localJointPoses_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localJointPoses_1), (void*)value);
	}
};

struct ArticulatedHandPose_t0ACAC8E09F0FFC54CB295B9ECD097834791F65BF_StaticFields
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose::jointCount
	int32_t ___jointCount_0;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose_GestureId,Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose> Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose::handPoses
	Dictionary_2_t2B628E4F8EBFC133D690583E443D9563A31757FA * ___handPoses_2;

public:
	inline static int32_t get_offset_of_jointCount_0() { return static_cast<int32_t>(offsetof(ArticulatedHandPose_t0ACAC8E09F0FFC54CB295B9ECD097834791F65BF_StaticFields, ___jointCount_0)); }
	inline int32_t get_jointCount_0() const { return ___jointCount_0; }
	inline int32_t* get_address_of_jointCount_0() { return &___jointCount_0; }
	inline void set_jointCount_0(int32_t value)
	{
		___jointCount_0 = value;
	}

	inline static int32_t get_offset_of_handPoses_2() { return static_cast<int32_t>(offsetof(ArticulatedHandPose_t0ACAC8E09F0FFC54CB295B9ECD097834791F65BF_StaticFields, ___handPoses_2)); }
	inline Dictionary_2_t2B628E4F8EBFC133D690583E443D9563A31757FA * get_handPoses_2() const { return ___handPoses_2; }
	inline Dictionary_2_t2B628E4F8EBFC133D690583E443D9563A31757FA ** get_address_of_handPoses_2() { return &___handPoses_2; }
	inline void set_handPoses_2(Dictionary_2_t2B628E4F8EBFC133D690583E443D9563A31757FA * value)
	{
		___handPoses_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handPoses_2), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsExtensions
struct  WindowsExtensions_tF95A98A9B258BCEA1BD4F1BC26A62F77C5D6AABB  : public RuntimeObject
{
public:

public:
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


// System.MarshalByRefObject
struct  MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
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

// System.__Il2CppComObject


// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem>
struct  BaseDataProvider_1_t0C717255D98CB62AE24A9CEFBF088FD078D5889A  : public BaseService_tA51F0EA841C4C16598268B190DC8663BCB38F555
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_5;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject* ___U3CServiceU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t0C717255D98CB62AE24A9CEFBF088FD078D5889A, ___U3CRegistrarU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_5() const { return ___U3CRegistrarU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_5() { return &___U3CRegistrarU3Ek__BackingField_5; }
	inline void set_U3CRegistrarU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServiceU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t0C717255D98CB62AE24A9CEFBF088FD078D5889A, ___U3CServiceU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CServiceU3Ek__BackingField_6() const { return ___U3CServiceU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CServiceU3Ek__BackingField_6() { return &___U3CServiceU3Ek__BackingField_6; }
	inline void set_U3CServiceU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CServiceU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServiceU3Ek__BackingField_6), (void*)value);
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

// System.IO.TextWriter
struct  TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___CoreNewLine_9;
	// System.IFormatProvider System.IO.TextWriter::InternalFormatProvider
	RuntimeObject* ___InternalFormatProvider_10;

public:
	inline static int32_t get_offset_of_CoreNewLine_9() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643, ___CoreNewLine_9)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_CoreNewLine_9() const { return ___CoreNewLine_9; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_CoreNewLine_9() { return &___CoreNewLine_9; }
	inline void set_CoreNewLine_9(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___CoreNewLine_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CoreNewLine_9), (void*)value);
	}

	inline static int32_t get_offset_of_InternalFormatProvider_10() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643, ___InternalFormatProvider_10)); }
	inline RuntimeObject* get_InternalFormatProvider_10() const { return ___InternalFormatProvider_10; }
	inline RuntimeObject** get_address_of_InternalFormatProvider_10() { return &___InternalFormatProvider_10; }
	inline void set_InternalFormatProvider_10(RuntimeObject* value)
	{
		___InternalFormatProvider_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InternalFormatProvider_10), (void*)value);
	}
};

struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___Null_1;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteCharDelegate_2;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteStringDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteStringDelegate_3;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharArrayRangeDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteCharArrayRangeDelegate_4;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineCharDelegate_5;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineStringDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineStringDelegate_6;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharArrayRangeDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineCharArrayRangeDelegate_7;
	// System.Action`1<System.Object> System.IO.TextWriter::_FlushDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____FlushDelegate_8;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ___Null_1)); }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * get_Null_1() const { return ___Null_1; }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharDelegate_2() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteCharDelegate_2)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteCharDelegate_2() const { return ____WriteCharDelegate_2; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteCharDelegate_2() { return &____WriteCharDelegate_2; }
	inline void set__WriteCharDelegate_2(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteCharDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of__WriteStringDelegate_3() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteStringDelegate_3)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteStringDelegate_3() const { return ____WriteStringDelegate_3; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteStringDelegate_3() { return &____WriteStringDelegate_3; }
	inline void set__WriteStringDelegate_3(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteStringDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteStringDelegate_3), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharArrayRangeDelegate_4() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteCharArrayRangeDelegate_4)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteCharArrayRangeDelegate_4() const { return ____WriteCharArrayRangeDelegate_4; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteCharArrayRangeDelegate_4() { return &____WriteCharArrayRangeDelegate_4; }
	inline void set__WriteCharArrayRangeDelegate_4(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteCharArrayRangeDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharArrayRangeDelegate_4), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharDelegate_5() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineCharDelegate_5)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineCharDelegate_5() const { return ____WriteLineCharDelegate_5; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineCharDelegate_5() { return &____WriteLineCharDelegate_5; }
	inline void set__WriteLineCharDelegate_5(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineCharDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharDelegate_5), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineStringDelegate_6() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineStringDelegate_6)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineStringDelegate_6() const { return ____WriteLineStringDelegate_6; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineStringDelegate_6() { return &____WriteLineStringDelegate_6; }
	inline void set__WriteLineStringDelegate_6(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineStringDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineStringDelegate_6), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharArrayRangeDelegate_7() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineCharArrayRangeDelegate_7)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineCharArrayRangeDelegate_7() const { return ____WriteLineCharArrayRangeDelegate_7; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineCharArrayRangeDelegate_7() { return &____WriteLineCharArrayRangeDelegate_7; }
	inline void set__WriteLineCharArrayRangeDelegate_7(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineCharArrayRangeDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharArrayRangeDelegate_7), (void*)value);
	}

	inline static int32_t get_offset_of__FlushDelegate_8() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____FlushDelegate_8)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__FlushDelegate_8() const { return ____FlushDelegate_8; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__FlushDelegate_8() { return &____FlushDelegate_8; }
	inline void set__FlushDelegate_8(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____FlushDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____FlushDelegate_8), (void*)value);
	}
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


// System.Numerics.Matrix4x4
struct  Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504 
{
public:
	// System.Single System.Numerics.Matrix4x4::M11
	float ___M11_0;
	// System.Single System.Numerics.Matrix4x4::M12
	float ___M12_1;
	// System.Single System.Numerics.Matrix4x4::M13
	float ___M13_2;
	// System.Single System.Numerics.Matrix4x4::M14
	float ___M14_3;
	// System.Single System.Numerics.Matrix4x4::M21
	float ___M21_4;
	// System.Single System.Numerics.Matrix4x4::M22
	float ___M22_5;
	// System.Single System.Numerics.Matrix4x4::M23
	float ___M23_6;
	// System.Single System.Numerics.Matrix4x4::M24
	float ___M24_7;
	// System.Single System.Numerics.Matrix4x4::M31
	float ___M31_8;
	// System.Single System.Numerics.Matrix4x4::M32
	float ___M32_9;
	// System.Single System.Numerics.Matrix4x4::M33
	float ___M33_10;
	// System.Single System.Numerics.Matrix4x4::M34
	float ___M34_11;
	// System.Single System.Numerics.Matrix4x4::M41
	float ___M41_12;
	// System.Single System.Numerics.Matrix4x4::M42
	float ___M42_13;
	// System.Single System.Numerics.Matrix4x4::M43
	float ___M43_14;
	// System.Single System.Numerics.Matrix4x4::M44
	float ___M44_15;

public:
	inline static int32_t get_offset_of_M11_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M11_0)); }
	inline float get_M11_0() const { return ___M11_0; }
	inline float* get_address_of_M11_0() { return &___M11_0; }
	inline void set_M11_0(float value)
	{
		___M11_0 = value;
	}

	inline static int32_t get_offset_of_M12_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M12_1)); }
	inline float get_M12_1() const { return ___M12_1; }
	inline float* get_address_of_M12_1() { return &___M12_1; }
	inline void set_M12_1(float value)
	{
		___M12_1 = value;
	}

	inline static int32_t get_offset_of_M13_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M13_2)); }
	inline float get_M13_2() const { return ___M13_2; }
	inline float* get_address_of_M13_2() { return &___M13_2; }
	inline void set_M13_2(float value)
	{
		___M13_2 = value;
	}

	inline static int32_t get_offset_of_M14_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M14_3)); }
	inline float get_M14_3() const { return ___M14_3; }
	inline float* get_address_of_M14_3() { return &___M14_3; }
	inline void set_M14_3(float value)
	{
		___M14_3 = value;
	}

	inline static int32_t get_offset_of_M21_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M21_4)); }
	inline float get_M21_4() const { return ___M21_4; }
	inline float* get_address_of_M21_4() { return &___M21_4; }
	inline void set_M21_4(float value)
	{
		___M21_4 = value;
	}

	inline static int32_t get_offset_of_M22_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M22_5)); }
	inline float get_M22_5() const { return ___M22_5; }
	inline float* get_address_of_M22_5() { return &___M22_5; }
	inline void set_M22_5(float value)
	{
		___M22_5 = value;
	}

	inline static int32_t get_offset_of_M23_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M23_6)); }
	inline float get_M23_6() const { return ___M23_6; }
	inline float* get_address_of_M23_6() { return &___M23_6; }
	inline void set_M23_6(float value)
	{
		___M23_6 = value;
	}

	inline static int32_t get_offset_of_M24_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M24_7)); }
	inline float get_M24_7() const { return ___M24_7; }
	inline float* get_address_of_M24_7() { return &___M24_7; }
	inline void set_M24_7(float value)
	{
		___M24_7 = value;
	}

	inline static int32_t get_offset_of_M31_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M31_8)); }
	inline float get_M31_8() const { return ___M31_8; }
	inline float* get_address_of_M31_8() { return &___M31_8; }
	inline void set_M31_8(float value)
	{
		___M31_8 = value;
	}

	inline static int32_t get_offset_of_M32_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M32_9)); }
	inline float get_M32_9() const { return ___M32_9; }
	inline float* get_address_of_M32_9() { return &___M32_9; }
	inline void set_M32_9(float value)
	{
		___M32_9 = value;
	}

	inline static int32_t get_offset_of_M33_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M33_10)); }
	inline float get_M33_10() const { return ___M33_10; }
	inline float* get_address_of_M33_10() { return &___M33_10; }
	inline void set_M33_10(float value)
	{
		___M33_10 = value;
	}

	inline static int32_t get_offset_of_M34_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M34_11)); }
	inline float get_M34_11() const { return ___M34_11; }
	inline float* get_address_of_M34_11() { return &___M34_11; }
	inline void set_M34_11(float value)
	{
		___M34_11 = value;
	}

	inline static int32_t get_offset_of_M41_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M41_12)); }
	inline float get_M41_12() const { return ___M41_12; }
	inline float* get_address_of_M41_12() { return &___M41_12; }
	inline void set_M41_12(float value)
	{
		___M41_12 = value;
	}

	inline static int32_t get_offset_of_M42_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M42_13)); }
	inline float get_M42_13() const { return ___M42_13; }
	inline float* get_address_of_M42_13() { return &___M42_13; }
	inline void set_M42_13(float value)
	{
		___M42_13 = value;
	}

	inline static int32_t get_offset_of_M43_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M43_14)); }
	inline float get_M43_14() const { return ___M43_14; }
	inline float* get_address_of_M43_14() { return &___M43_14; }
	inline void set_M43_14(float value)
	{
		___M43_14 = value;
	}

	inline static int32_t get_offset_of_M44_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M44_15)); }
	inline float get_M44_15() const { return ___M44_15; }
	inline float* get_address_of_M44_15() { return &___M44_15; }
	inline void set_M44_15(float value)
	{
		___M44_15 = value;
	}
};

struct Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_StaticFields
{
public:
	// System.Numerics.Matrix4x4 System.Numerics.Matrix4x4::_identity
	Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  ____identity_16;

public:
	inline static int32_t get_offset_of__identity_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_StaticFields, ____identity_16)); }
	inline Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  get__identity_16() const { return ____identity_16; }
	inline Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504 * get_address_of__identity_16() { return &____identity_16; }
	inline void set__identity_16(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  value)
	{
		____identity_16 = value;
	}
};


// System.Numerics.Quaternion
struct  Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C 
{
public:
	// System.Single System.Numerics.Quaternion::X
	float ___X_0;
	// System.Single System.Numerics.Quaternion::Y
	float ___Y_1;
	// System.Single System.Numerics.Quaternion::Z
	float ___Z_2;
	// System.Single System.Numerics.Quaternion::W
	float ___W_3;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C, ___Y_1)); }
	inline float get_Y_1() const { return ___Y_1; }
	inline float* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(float value)
	{
		___Y_1 = value;
	}

	inline static int32_t get_offset_of_Z_2() { return static_cast<int32_t>(offsetof(Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C, ___Z_2)); }
	inline float get_Z_2() const { return ___Z_2; }
	inline float* get_address_of_Z_2() { return &___Z_2; }
	inline void set_Z_2(float value)
	{
		___Z_2 = value;
	}

	inline static int32_t get_offset_of_W_3() { return static_cast<int32_t>(offsetof(Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C, ___W_3)); }
	inline float get_W_3() const { return ___W_3; }
	inline float* get_address_of_W_3() { return &___W_3; }
	inline void set_W_3(float value)
	{
		___W_3 = value;
	}
};


// System.Numerics.Vector3
struct  Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4 
{
public:
	// System.Single System.Numerics.Vector3::X
	float ___X_0;
	// System.Single System.Numerics.Vector3::Y
	float ___Y_1;
	// System.Single System.Numerics.Vector3::Z
	float ___Z_2;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4, ___Y_1)); }
	inline float get_Y_1() const { return ___Y_1; }
	inline float* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(float value)
	{
		___Y_1 = value;
	}

	inline static int32_t get_offset_of_Z_2() { return static_cast<int32_t>(offsetof(Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4, ___Z_2)); }
	inline float get_Z_2() const { return ___Z_2; }
	inline float* get_address_of_Z_2() { return &___Z_2; }
	inline void set_Z_2(float value)
	{
		___Z_2 = value;
	}
};


// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct  AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateMachine_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_defaultContextAction_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultContextAction_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct  TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE, ___m_task_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Perception.People.HandMeshObserver>
struct  TaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t91456D786DCDB709E9CE4AD7D55867EAA4E9B8E6 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E, ___m_task_0)); }
	inline Task_1_t91456D786DCDB709E9CE4AD7D55867EAA4E9B8E6 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t91456D786DCDB709E9CE4AD7D55867EAA4E9B8E6 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t91456D786DCDB709E9CE4AD7D55867EAA4E9B8E6 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
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


// System.UInt16
struct  UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
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


// Windows.Graphics.Holographic.HolographicDisplay
struct  HolographicDisplay_t64D6F94B22A96A3AB13B7935EBDAE901CE418B6E  : public Il2CppComObject
{
public:

public:
};

struct HolographicDisplay_t64D6F94B22A96A3AB13B7935EBDAE901CE418B6E_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Graphics.Holographic.IHolographicDisplayStatics
	IHolographicDisplayStatics_tC413B2D2DD674ECDAC96BE8058BB688DFE02EF36* ____iholographicDisplayStatics_tC413B2D2DD674ECDAC96BE8058BB688DFE02EF36;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Graphics.Holographic.HolographicDisplay"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IHolographicDisplayStatics_tC413B2D2DD674ECDAC96BE8058BB688DFE02EF36* get_____iholographicDisplayStatics_tC413B2D2DD674ECDAC96BE8058BB688DFE02EF36()
	{
		IHolographicDisplayStatics_tC413B2D2DD674ECDAC96BE8058BB688DFE02EF36* returnValue = ____iholographicDisplayStatics_tC413B2D2DD674ECDAC96BE8058BB688DFE02EF36;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IHolographicDisplayStatics_tC413B2D2DD674ECDAC96BE8058BB688DFE02EF36::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____iholographicDisplayStatics_tC413B2D2DD674ECDAC96BE8058BB688DFE02EF36), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iholographicDisplayStatics_tC413B2D2DD674ECDAC96BE8058BB688DFE02EF36;
			}
		}
		return returnValue;
	}
};


// Windows.Graphics.Holographic.HolographicFrame
struct  HolographicFrame_t16CC7D90BCAF0D8BAC1D7C941B18567F460C99EC  : public Il2CppComObject
{
public:

public:
};


// Windows.Graphics.Holographic.HolographicViewConfiguration
struct  HolographicViewConfiguration_tE179E9B0B22770D34F8757D4314359560DC2CBCB  : public Il2CppComObject
{
public:

public:
};


// Windows.Perception.People.HandMeshObserver
struct  HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273  : public Il2CppComObject
{
public:

public:
};


// Windows.Perception.People.HandMeshVertexState
struct  HandMeshVertexState_t472D7CF8982D6D93200D405B7F990404C022A9F8  : public Il2CppComObject
{
public:

public:
};


// Windows.Perception.People.HandPose
struct  HandPose_tA80E49BEA85A49A6594EC7FF8E1470F10978A0AE  : public Il2CppComObject
{
public:

public:
};


// Windows.Perception.Spatial.SpatialCoordinateSystem
struct  SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB  : public Il2CppComObject
{
public:

public:
};


// Windows.UI.Input.Spatial.SpatialInteractionSource
struct  SpatialInteractionSource_tF5344A6C35341EF626EAC41ADCDFDCE01154752F  : public Il2CppComObject
{
public:

public:
};


// Windows.UI.Input.Spatial.SpatialInteractionSourceState
struct  SpatialInteractionSourceState_t6E721C100623C9060174FE6F6FBAC61D17FDF199  : public Il2CppComObject
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProvider
struct  BaseCameraSettingsProvider_t4E4C0A3E587FDB85137F755C0E20EACCF11815EC  : public BaseDataProvider_1_t0C717255D98CB62AE24A9CEFBF088FD078D5889A
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProvider::<IsOpaque>k__BackingField
	bool ___U3CIsOpaqueU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CIsOpaqueU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(BaseCameraSettingsProvider_t4E4C0A3E587FDB85137F755C0E20EACCF11815EC, ___U3CIsOpaqueU3Ek__BackingField_7)); }
	inline bool get_U3CIsOpaqueU3Ek__BackingField_7() const { return ___U3CIsOpaqueU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CIsOpaqueU3Ek__BackingField_7() { return &___U3CIsOpaqueU3Ek__BackingField_7; }
	inline void set_U3CIsOpaqueU3Ek__BackingField_7(bool value)
	{
		___U3CIsOpaqueU3Ek__BackingField_7 = value;
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


// Microsoft.MixedReality.Toolkit.Input.HandMeshInfo
struct  HandMeshInfo_t2149B356EA6B50B1E60C46E30EF537D6D8E78566  : public RuntimeObject
{
public:
	// UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.Input.HandMeshInfo::vertices
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___vertices_0;
	// System.Int32[] Microsoft.MixedReality.Toolkit.Input.HandMeshInfo::triangles
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___triangles_1;
	// UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.Input.HandMeshInfo::normals
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___normals_2;
	// UnityEngine.Vector2[] Microsoft.MixedReality.Toolkit.Input.HandMeshInfo::uvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___uvs_3;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.HandMeshInfo::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_4;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Input.HandMeshInfo::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_5;

public:
	inline static int32_t get_offset_of_vertices_0() { return static_cast<int32_t>(offsetof(HandMeshInfo_t2149B356EA6B50B1E60C46E30EF537D6D8E78566, ___vertices_0)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_vertices_0() const { return ___vertices_0; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_vertices_0() { return &___vertices_0; }
	inline void set_vertices_0(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___vertices_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vertices_0), (void*)value);
	}

	inline static int32_t get_offset_of_triangles_1() { return static_cast<int32_t>(offsetof(HandMeshInfo_t2149B356EA6B50B1E60C46E30EF537D6D8E78566, ___triangles_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_triangles_1() const { return ___triangles_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_triangles_1() { return &___triangles_1; }
	inline void set_triangles_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___triangles_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___triangles_1), (void*)value);
	}

	inline static int32_t get_offset_of_normals_2() { return static_cast<int32_t>(offsetof(HandMeshInfo_t2149B356EA6B50B1E60C46E30EF537D6D8E78566, ___normals_2)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_normals_2() const { return ___normals_2; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_normals_2() { return &___normals_2; }
	inline void set_normals_2(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___normals_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___normals_2), (void*)value);
	}

	inline static int32_t get_offset_of_uvs_3() { return static_cast<int32_t>(offsetof(HandMeshInfo_t2149B356EA6B50B1E60C46E30EF537D6D8E78566, ___uvs_3)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_uvs_3() const { return ___uvs_3; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_uvs_3() { return &___uvs_3; }
	inline void set_uvs_3(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___uvs_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uvs_3), (void*)value);
	}

	inline static int32_t get_offset_of_position_4() { return static_cast<int32_t>(offsetof(HandMeshInfo_t2149B356EA6B50B1E60C46E30EF537D6D8E78566, ___position_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_4() const { return ___position_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_4() { return &___position_4; }
	inline void set_position_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_4 = value;
	}

	inline static int32_t get_offset_of_rotation_5() { return static_cast<int32_t>(offsetof(HandMeshInfo_t2149B356EA6B50B1E60C46E30EF537D6D8E78566, ___rotation_5)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_5() const { return ___rotation_5; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_5() { return &___rotation_5; }
	inline void set_rotation_5(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_5 = value;
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


// Microsoft.MixedReality.Toolkit.Utilities.SupportedApplicationModes
struct  SupportedApplicationModes_tAF25E5B17A542CD82CA617EAA54E7E7C8D1336FE 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.SupportedApplicationModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SupportedApplicationModes_tAF25E5B17A542CD82CA617EAA54E7E7C8D1336FE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// Microsoft.MixedReality.Toolkit.WindowsMixedReality.HolographicDepthReprojectionMethod
struct  HolographicDepthReprojectionMethod_tE0DDB43009AFC9FB6705A02B913806413426D6AF 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.WindowsMixedReality.HolographicDepthReprojectionMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HolographicDepthReprojectionMethod_tE0DDB43009AFC9FB6705A02B913806413426D6AF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities
struct  WindowsMixedRealityUtilities_t6E3AF6A539480B47E4F166D5E6EFBBF7CCB0E958  : public RuntimeObject
{
public:

public:
};

struct WindowsMixedRealityUtilities_t6E3AF6A539480B47E4F166D5E6EFBBF7CCB0E958_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::<UtilitiesProvider>k__BackingField
	RuntimeObject* ___U3CUtilitiesProviderU3Ek__BackingField_0;
	// System.IntPtr Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::currentSpatialCoordinateSystemPtr
	intptr_t ___currentSpatialCoordinateSystemPtr_1;
	// Windows.Perception.Spatial.SpatialCoordinateSystem Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::spatialCoordinateSystem
	SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * ___spatialCoordinateSystem_2;

public:
	inline static int32_t get_offset_of_U3CUtilitiesProviderU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WindowsMixedRealityUtilities_t6E3AF6A539480B47E4F166D5E6EFBBF7CCB0E958_StaticFields, ___U3CUtilitiesProviderU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CUtilitiesProviderU3Ek__BackingField_0() const { return ___U3CUtilitiesProviderU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CUtilitiesProviderU3Ek__BackingField_0() { return &___U3CUtilitiesProviderU3Ek__BackingField_0; }
	inline void set_U3CUtilitiesProviderU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CUtilitiesProviderU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUtilitiesProviderU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_currentSpatialCoordinateSystemPtr_1() { return static_cast<int32_t>(offsetof(WindowsMixedRealityUtilities_t6E3AF6A539480B47E4F166D5E6EFBBF7CCB0E958_StaticFields, ___currentSpatialCoordinateSystemPtr_1)); }
	inline intptr_t get_currentSpatialCoordinateSystemPtr_1() const { return ___currentSpatialCoordinateSystemPtr_1; }
	inline intptr_t* get_address_of_currentSpatialCoordinateSystemPtr_1() { return &___currentSpatialCoordinateSystemPtr_1; }
	inline void set_currentSpatialCoordinateSystemPtr_1(intptr_t value)
	{
		___currentSpatialCoordinateSystemPtr_1 = value;
	}

	inline static int32_t get_offset_of_spatialCoordinateSystem_2() { return static_cast<int32_t>(offsetof(WindowsMixedRealityUtilities_t6E3AF6A539480B47E4F166D5E6EFBBF7CCB0E958_StaticFields, ___spatialCoordinateSystem_2)); }
	inline SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * get_spatialCoordinateSystem_2() const { return ___spatialCoordinateSystem_2; }
	inline SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB ** get_address_of_spatialCoordinateSystem_2() { return &___spatialCoordinateSystem_2; }
	inline void set_spatialCoordinateSystem_2(SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * value)
	{
		___spatialCoordinateSystem_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spatialCoordinateSystem_2), (void*)value);
	}
};


// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.IO.StreamWriter
struct  StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6  : public TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643
{
public:
	// System.IO.Stream System.IO.StreamWriter::stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream_16;
	// System.Text.Encoding System.IO.StreamWriter::encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___encoding_17;
	// System.Text.Encoder System.IO.StreamWriter::encoder
	Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * ___encoder_18;
	// System.Byte[] System.IO.StreamWriter::byteBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___byteBuffer_19;
	// System.Char[] System.IO.StreamWriter::charBuffer
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___charBuffer_20;
	// System.Int32 System.IO.StreamWriter::charPos
	int32_t ___charPos_21;
	// System.Int32 System.IO.StreamWriter::charLen
	int32_t ___charLen_22;
	// System.Boolean System.IO.StreamWriter::autoFlush
	bool ___autoFlush_23;
	// System.Boolean System.IO.StreamWriter::haveWrittenPreamble
	bool ___haveWrittenPreamble_24;
	// System.Boolean System.IO.StreamWriter::closable
	bool ___closable_25;
	// System.Threading.Tasks.Task modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StreamWriter::_asyncWriteTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ____asyncWriteTask_26;

public:
	inline static int32_t get_offset_of_stream_16() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___stream_16)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_stream_16() const { return ___stream_16; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_stream_16() { return &___stream_16; }
	inline void set_stream_16(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___stream_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_16), (void*)value);
	}

	inline static int32_t get_offset_of_encoding_17() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___encoding_17)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_encoding_17() const { return ___encoding_17; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_encoding_17() { return &___encoding_17; }
	inline void set_encoding_17(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___encoding_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoding_17), (void*)value);
	}

	inline static int32_t get_offset_of_encoder_18() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___encoder_18)); }
	inline Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * get_encoder_18() const { return ___encoder_18; }
	inline Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A ** get_address_of_encoder_18() { return &___encoder_18; }
	inline void set_encoder_18(Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * value)
	{
		___encoder_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoder_18), (void*)value);
	}

	inline static int32_t get_offset_of_byteBuffer_19() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___byteBuffer_19)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_byteBuffer_19() const { return ___byteBuffer_19; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_byteBuffer_19() { return &___byteBuffer_19; }
	inline void set_byteBuffer_19(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___byteBuffer_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___byteBuffer_19), (void*)value);
	}

	inline static int32_t get_offset_of_charBuffer_20() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___charBuffer_20)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_charBuffer_20() const { return ___charBuffer_20; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_charBuffer_20() { return &___charBuffer_20; }
	inline void set_charBuffer_20(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___charBuffer_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___charBuffer_20), (void*)value);
	}

	inline static int32_t get_offset_of_charPos_21() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___charPos_21)); }
	inline int32_t get_charPos_21() const { return ___charPos_21; }
	inline int32_t* get_address_of_charPos_21() { return &___charPos_21; }
	inline void set_charPos_21(int32_t value)
	{
		___charPos_21 = value;
	}

	inline static int32_t get_offset_of_charLen_22() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___charLen_22)); }
	inline int32_t get_charLen_22() const { return ___charLen_22; }
	inline int32_t* get_address_of_charLen_22() { return &___charLen_22; }
	inline void set_charLen_22(int32_t value)
	{
		___charLen_22 = value;
	}

	inline static int32_t get_offset_of_autoFlush_23() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___autoFlush_23)); }
	inline bool get_autoFlush_23() const { return ___autoFlush_23; }
	inline bool* get_address_of_autoFlush_23() { return &___autoFlush_23; }
	inline void set_autoFlush_23(bool value)
	{
		___autoFlush_23 = value;
	}

	inline static int32_t get_offset_of_haveWrittenPreamble_24() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___haveWrittenPreamble_24)); }
	inline bool get_haveWrittenPreamble_24() const { return ___haveWrittenPreamble_24; }
	inline bool* get_address_of_haveWrittenPreamble_24() { return &___haveWrittenPreamble_24; }
	inline void set_haveWrittenPreamble_24(bool value)
	{
		___haveWrittenPreamble_24 = value;
	}

	inline static int32_t get_offset_of_closable_25() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___closable_25)); }
	inline bool get_closable_25() const { return ___closable_25; }
	inline bool* get_address_of_closable_25() { return &___closable_25; }
	inline void set_closable_25(bool value)
	{
		___closable_25 = value;
	}

	inline static int32_t get_offset_of__asyncWriteTask_26() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ____asyncWriteTask_26)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get__asyncWriteTask_26() const { return ____asyncWriteTask_26; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of__asyncWriteTask_26() { return &____asyncWriteTask_26; }
	inline void set__asyncWriteTask_26(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		____asyncWriteTask_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncWriteTask_26), (void*)value);
	}
};

struct StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6_StaticFields
{
public:
	// System.IO.StreamWriter System.IO.StreamWriter::Null
	StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * ___Null_15;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StreamWriter::_UTF8NoBOM
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ____UTF8NoBOM_27;

public:
	inline static int32_t get_offset_of_Null_15() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6_StaticFields, ___Null_15)); }
	inline StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * get_Null_15() const { return ___Null_15; }
	inline StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 ** get_address_of_Null_15() { return &___Null_15; }
	inline void set_Null_15(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * value)
	{
		___Null_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_15), (void*)value);
	}

	inline static int32_t get_offset_of__UTF8NoBOM_27() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6_StaticFields, ____UTF8NoBOM_27)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get__UTF8NoBOM_27() const { return ____UTF8NoBOM_27; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of__UTF8NoBOM_27() { return &____UTF8NoBOM_27; }
	inline void set__UTF8NoBOM_27(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		____UTF8NoBOM_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____UTF8NoBOM_27), (void*)value);
	}
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


// System.Nullable`1<System.Numerics.Matrix4x4>
struct  Nullable_1_t9FF3BE791A3B4350B3DE3D72C440E11029540DD8 
{
public:
	// T System.Nullable`1::value
	Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t9FF3BE791A3B4350B3DE3D72C440E11029540DD8, ___value_0)); }
	inline Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  get_value_0() const { return ___value_0; }
	inline Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t9FF3BE791A3B4350B3DE3D72C440E11029540DD8, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
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


// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct  AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 
{
public:
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_synchronizationContext_0() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_synchronizationContext_0)); }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * get_m_synchronizationContext_0() const { return ___m_synchronizationContext_0; }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 ** get_address_of_m_synchronizationContext_0() { return &___m_synchronizationContext_0; }
	inline void set_m_synchronizationContext_0(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * value)
	{
		___m_synchronizationContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_synchronizationContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_task_2)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_task_2() const { return ___m_task_2; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_marshaled_pinvoke
{
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke ___m_coreState_1;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_marshaled_com
{
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com ___m_coreState_1;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;
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

// Windows.Graphics.Holographic.HolographicViewConfigurationKind
struct  HolographicViewConfigurationKind_t38A8D575C34B6BC00A0ECBA57EB1A4753456310F 
{
public:
	// System.Int32 Windows.Graphics.Holographic.HolographicViewConfigurationKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HolographicViewConfigurationKind_t38A8D575C34B6BC00A0ECBA57EB1A4753456310F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Windows.Perception.People.HandMeshVertex
struct  HandMeshVertex_t81B9BA0A9D5AFF3A2877275B43C95E3745EC7784 
{
public:
	// System.Numerics.Vector3 Windows.Perception.People.HandMeshVertex::Position
	Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  ___Position_0;
	// System.Numerics.Vector3 Windows.Perception.People.HandMeshVertex::Normal
	Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  ___Normal_1;

public:
	inline static int32_t get_offset_of_Position_0() { return static_cast<int32_t>(offsetof(HandMeshVertex_t81B9BA0A9D5AFF3A2877275B43C95E3745EC7784, ___Position_0)); }
	inline Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  get_Position_0() const { return ___Position_0; }
	inline Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4 * get_address_of_Position_0() { return &___Position_0; }
	inline void set_Position_0(Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  value)
	{
		___Position_0 = value;
	}

	inline static int32_t get_offset_of_Normal_1() { return static_cast<int32_t>(offsetof(HandMeshVertex_t81B9BA0A9D5AFF3A2877275B43C95E3745EC7784, ___Normal_1)); }
	inline Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  get_Normal_1() const { return ___Normal_1; }
	inline Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4 * get_address_of_Normal_1() { return &___Normal_1; }
	inline void set_Normal_1(Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  value)
	{
		___Normal_1 = value;
	}
};


// Windows.UI.Input.Spatial.SpatialInteractionSourceHandedness
struct  SpatialInteractionSourceHandedness_tC2409F24AA1DC3E3915DE8AA3AF09913C01FCE9B 
{
public:
	// System.Int32 Windows.UI.Input.Spatial.SpatialInteractionSourceHandedness::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpatialInteractionSourceHandedness_tC2409F24AA1DC3E3915DE8AA3AF09913C01FCE9B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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

// Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings
struct  BaseWindowsMixedRealityCameraSettings_tA5B8622CC64E1B447C12B83A20AF7B3D5D95D385  : public BaseCameraSettingsProvider_t4E4C0A3E587FDB85137F755C0E20EACCF11815EC
{
public:
	// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityReprojectionUpdater Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::reprojectionUpdater
	WindowsMixedRealityReprojectionUpdater_t9C1F363D0E755B6A4C8F84CF10D09CC3A1479F43 * ___reprojectionUpdater_9;

public:
	inline static int32_t get_offset_of_reprojectionUpdater_9() { return static_cast<int32_t>(offsetof(BaseWindowsMixedRealityCameraSettings_tA5B8622CC64E1B447C12B83A20AF7B3D5D95D385, ___reprojectionUpdater_9)); }
	inline WindowsMixedRealityReprojectionUpdater_t9C1F363D0E755B6A4C8F84CF10D09CC3A1479F43 * get_reprojectionUpdater_9() const { return ___reprojectionUpdater_9; }
	inline WindowsMixedRealityReprojectionUpdater_t9C1F363D0E755B6A4C8F84CF10D09CC3A1479F43 ** get_address_of_reprojectionUpdater_9() { return &___reprojectionUpdater_9; }
	inline void set_reprojectionUpdater_9(WindowsMixedRealityReprojectionUpdater_t9C1F363D0E755B6A4C8F84CF10D09CC3A1479F43 * value)
	{
		___reprojectionUpdater_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reprojectionUpdater_9), (void*)value);
	}
};

struct BaseWindowsMixedRealityCameraSettings_tA5B8622CC64E1B447C12B83A20AF7B3D5D95D385_StaticFields
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::isTryGetViewConfigurationSupported
	bool ___isTryGetViewConfigurationSupported_8;

public:
	inline static int32_t get_offset_of_isTryGetViewConfigurationSupported_8() { return static_cast<int32_t>(offsetof(BaseWindowsMixedRealityCameraSettings_tA5B8622CC64E1B447C12B83A20AF7B3D5D95D385_StaticFields, ___isTryGetViewConfigurationSupported_8)); }
	inline bool get_isTryGetViewConfigurationSupported_8() const { return ___isTryGetViewConfigurationSupported_8; }
	inline bool* get_address_of_isTryGetViewConfigurationSupported_8() { return &___isTryGetViewConfigurationSupported_8; }
	inline void set_isTryGetViewConfigurationSupported_8(bool value)
	{
		___isTryGetViewConfigurationSupported_8 = value;
	}
};


// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition
struct  WindowsMixedRealityArticulatedHandDefinition_t6767A4BDFA6A972CE918EDC477B279BF2637FAA7  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::inputSource
	RuntimeObject* ___inputSource_0;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::handedness
	uint8_t ___handedness_1;
	// System.Single Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::cursorBeamBackwardTolerance
	float ___cursorBeamBackwardTolerance_2;
	// System.Single Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::cursorBeamUpTolerance
	float ___cursorBeamUpTolerance_3;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose> Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::unityJointPoses
	Dictionary_2_t2608D8F85D3104F212EC3BC05E54C1515108B68E * ___unityJointPoses_4;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::currentIndexPose
	MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  ___currentIndexPose_5;
	// UnityEngine.Vector2[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::handMeshUVs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___handMeshUVs_6;
	// Windows.Perception.People.HandMeshObserver Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::handMeshObserver
	HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * ___handMeshObserver_7;
	// System.Int32[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::handMeshTriangleIndices
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___handMeshTriangleIndices_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::hasRequestedHandMeshObserver
	bool ___hasRequestedHandMeshObserver_9;

public:
	inline static int32_t get_offset_of_inputSource_0() { return static_cast<int32_t>(offsetof(WindowsMixedRealityArticulatedHandDefinition_t6767A4BDFA6A972CE918EDC477B279BF2637FAA7, ___inputSource_0)); }
	inline RuntimeObject* get_inputSource_0() const { return ___inputSource_0; }
	inline RuntimeObject** get_address_of_inputSource_0() { return &___inputSource_0; }
	inline void set_inputSource_0(RuntimeObject* value)
	{
		___inputSource_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputSource_0), (void*)value);
	}

	inline static int32_t get_offset_of_handedness_1() { return static_cast<int32_t>(offsetof(WindowsMixedRealityArticulatedHandDefinition_t6767A4BDFA6A972CE918EDC477B279BF2637FAA7, ___handedness_1)); }
	inline uint8_t get_handedness_1() const { return ___handedness_1; }
	inline uint8_t* get_address_of_handedness_1() { return &___handedness_1; }
	inline void set_handedness_1(uint8_t value)
	{
		___handedness_1 = value;
	}

	inline static int32_t get_offset_of_cursorBeamBackwardTolerance_2() { return static_cast<int32_t>(offsetof(WindowsMixedRealityArticulatedHandDefinition_t6767A4BDFA6A972CE918EDC477B279BF2637FAA7, ___cursorBeamBackwardTolerance_2)); }
	inline float get_cursorBeamBackwardTolerance_2() const { return ___cursorBeamBackwardTolerance_2; }
	inline float* get_address_of_cursorBeamBackwardTolerance_2() { return &___cursorBeamBackwardTolerance_2; }
	inline void set_cursorBeamBackwardTolerance_2(float value)
	{
		___cursorBeamBackwardTolerance_2 = value;
	}

	inline static int32_t get_offset_of_cursorBeamUpTolerance_3() { return static_cast<int32_t>(offsetof(WindowsMixedRealityArticulatedHandDefinition_t6767A4BDFA6A972CE918EDC477B279BF2637FAA7, ___cursorBeamUpTolerance_3)); }
	inline float get_cursorBeamUpTolerance_3() const { return ___cursorBeamUpTolerance_3; }
	inline float* get_address_of_cursorBeamUpTolerance_3() { return &___cursorBeamUpTolerance_3; }
	inline void set_cursorBeamUpTolerance_3(float value)
	{
		___cursorBeamUpTolerance_3 = value;
	}

	inline static int32_t get_offset_of_unityJointPoses_4() { return static_cast<int32_t>(offsetof(WindowsMixedRealityArticulatedHandDefinition_t6767A4BDFA6A972CE918EDC477B279BF2637FAA7, ___unityJointPoses_4)); }
	inline Dictionary_2_t2608D8F85D3104F212EC3BC05E54C1515108B68E * get_unityJointPoses_4() const { return ___unityJointPoses_4; }
	inline Dictionary_2_t2608D8F85D3104F212EC3BC05E54C1515108B68E ** get_address_of_unityJointPoses_4() { return &___unityJointPoses_4; }
	inline void set_unityJointPoses_4(Dictionary_2_t2608D8F85D3104F212EC3BC05E54C1515108B68E * value)
	{
		___unityJointPoses_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unityJointPoses_4), (void*)value);
	}

	inline static int32_t get_offset_of_currentIndexPose_5() { return static_cast<int32_t>(offsetof(WindowsMixedRealityArticulatedHandDefinition_t6767A4BDFA6A972CE918EDC477B279BF2637FAA7, ___currentIndexPose_5)); }
	inline MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  get_currentIndexPose_5() const { return ___currentIndexPose_5; }
	inline MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5 * get_address_of_currentIndexPose_5() { return &___currentIndexPose_5; }
	inline void set_currentIndexPose_5(MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  value)
	{
		___currentIndexPose_5 = value;
	}

	inline static int32_t get_offset_of_handMeshUVs_6() { return static_cast<int32_t>(offsetof(WindowsMixedRealityArticulatedHandDefinition_t6767A4BDFA6A972CE918EDC477B279BF2637FAA7, ___handMeshUVs_6)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_handMeshUVs_6() const { return ___handMeshUVs_6; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_handMeshUVs_6() { return &___handMeshUVs_6; }
	inline void set_handMeshUVs_6(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___handMeshUVs_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshUVs_6), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshObserver_7() { return static_cast<int32_t>(offsetof(WindowsMixedRealityArticulatedHandDefinition_t6767A4BDFA6A972CE918EDC477B279BF2637FAA7, ___handMeshObserver_7)); }
	inline HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * get_handMeshObserver_7() const { return ___handMeshObserver_7; }
	inline HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 ** get_address_of_handMeshObserver_7() { return &___handMeshObserver_7; }
	inline void set_handMeshObserver_7(HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * value)
	{
		___handMeshObserver_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshObserver_7), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshTriangleIndices_8() { return static_cast<int32_t>(offsetof(WindowsMixedRealityArticulatedHandDefinition_t6767A4BDFA6A972CE918EDC477B279BF2637FAA7, ___handMeshTriangleIndices_8)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_handMeshTriangleIndices_8() const { return ___handMeshTriangleIndices_8; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_handMeshTriangleIndices_8() { return &___handMeshTriangleIndices_8; }
	inline void set_handMeshTriangleIndices_8(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___handMeshTriangleIndices_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshTriangleIndices_8), (void*)value);
	}

	inline static int32_t get_offset_of_hasRequestedHandMeshObserver_9() { return static_cast<int32_t>(offsetof(WindowsMixedRealityArticulatedHandDefinition_t6767A4BDFA6A972CE918EDC477B279BF2637FAA7, ___hasRequestedHandMeshObserver_9)); }
	inline bool get_hasRequestedHandMeshObserver_9() const { return ___hasRequestedHandMeshObserver_9; }
	inline bool* get_address_of_hasRequestedHandMeshObserver_9() { return &___hasRequestedHandMeshObserver_9; }
	inline void set_hasRequestedHandMeshObserver_9(bool value)
	{
		___hasRequestedHandMeshObserver_9 = value;
	}
};


// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition_<SetHandMeshObserver>d__17
struct  U3CSetHandMeshObserverU3Ed__17_tB6D9B203D85335F7DCEEF262F084016559A10517 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition_<SetHandMeshObserver>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition_<SetHandMeshObserver>d__17::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// Windows.UI.Input.Spatial.SpatialInteractionSourceState Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition_<SetHandMeshObserver>d__17::sourceState
	SpatialInteractionSourceState_t6E721C100623C9060174FE6F6FBAC61D17FDF199 * ___sourceState_2;
	// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition_<SetHandMeshObserver>d__17::<>4__this
	WindowsMixedRealityArticulatedHandDefinition_t6767A4BDFA6A972CE918EDC477B279BF2637FAA7 * ___U3CU3E4__this_3;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Perception.People.HandMeshObserver> Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition_<SetHandMeshObserver>d__17::<>u__1
	TaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E  ___U3CU3Eu__1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSetHandMeshObserverU3Ed__17_tB6D9B203D85335F7DCEEF262F084016559A10517, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CSetHandMeshObserverU3Ed__17_tB6D9B203D85335F7DCEEF262F084016559A10517, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_sourceState_2() { return static_cast<int32_t>(offsetof(U3CSetHandMeshObserverU3Ed__17_tB6D9B203D85335F7DCEEF262F084016559A10517, ___sourceState_2)); }
	inline SpatialInteractionSourceState_t6E721C100623C9060174FE6F6FBAC61D17FDF199 * get_sourceState_2() const { return ___sourceState_2; }
	inline SpatialInteractionSourceState_t6E721C100623C9060174FE6F6FBAC61D17FDF199 ** get_address_of_sourceState_2() { return &___sourceState_2; }
	inline void set_sourceState_2(SpatialInteractionSourceState_t6E721C100623C9060174FE6F6FBAC61D17FDF199 * value)
	{
		___sourceState_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceState_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CSetHandMeshObserverU3Ed__17_tB6D9B203D85335F7DCEEF262F084016559A10517, ___U3CU3E4__this_3)); }
	inline WindowsMixedRealityArticulatedHandDefinition_t6767A4BDFA6A972CE918EDC477B279BF2637FAA7 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline WindowsMixedRealityArticulatedHandDefinition_t6767A4BDFA6A972CE918EDC477B279BF2637FAA7 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(WindowsMixedRealityArticulatedHandDefinition_t6767A4BDFA6A972CE918EDC477B279BF2637FAA7 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_4() { return static_cast<int32_t>(offsetof(U3CSetHandMeshObserverU3Ed__17_tB6D9B203D85335F7DCEEF262F084016559A10517, ___U3CU3Eu__1_4)); }
	inline TaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E  get_U3CU3Eu__1_4() const { return ___U3CU3Eu__1_4; }
	inline TaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E * get_address_of_U3CU3Eu__1_4() { return &___U3CU3Eu__1_4; }
	inline void set_U3CU3Eu__1_4(TaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E  value)
	{
		___U3CU3Eu__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
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


// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile
struct  BaseCameraSettingsProfile_t58D17D4EC9CF1682B49D0BCA5B18733DE9A8D2F0  : public BaseMixedRealityProfile_t9B92D8A7CB0AE5AF973870EDF7DE2BC12E5FA4E5
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile
struct  MixedRealityHandTrackingProfile_tDADC6D5367650C672DB618EED78274B7C1720AF0  : public BaseMixedRealityProfile_t9B92D8A7CB0AE5AF973870EDF7DE2BC12E5FA4E5
{
public:
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile::jointPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___jointPrefab_5;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile::palmPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___palmPrefab_6;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile::fingertipPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___fingertipPrefab_7;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile::handMeshPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___handMeshPrefab_8;
	// Microsoft.MixedReality.Toolkit.Utilities.SupportedApplicationModes Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile::handMeshVisualizationModes
	int32_t ___handMeshVisualizationModes_9;
	// Microsoft.MixedReality.Toolkit.Utilities.SupportedApplicationModes Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile::handJointVisualizationModes
	int32_t ___handJointVisualizationModes_10;

public:
	inline static int32_t get_offset_of_jointPrefab_5() { return static_cast<int32_t>(offsetof(MixedRealityHandTrackingProfile_tDADC6D5367650C672DB618EED78274B7C1720AF0, ___jointPrefab_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_jointPrefab_5() const { return ___jointPrefab_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_jointPrefab_5() { return &___jointPrefab_5; }
	inline void set_jointPrefab_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___jointPrefab_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___jointPrefab_5), (void*)value);
	}

	inline static int32_t get_offset_of_palmPrefab_6() { return static_cast<int32_t>(offsetof(MixedRealityHandTrackingProfile_tDADC6D5367650C672DB618EED78274B7C1720AF0, ___palmPrefab_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_palmPrefab_6() const { return ___palmPrefab_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_palmPrefab_6() { return &___palmPrefab_6; }
	inline void set_palmPrefab_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___palmPrefab_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___palmPrefab_6), (void*)value);
	}

	inline static int32_t get_offset_of_fingertipPrefab_7() { return static_cast<int32_t>(offsetof(MixedRealityHandTrackingProfile_tDADC6D5367650C672DB618EED78274B7C1720AF0, ___fingertipPrefab_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_fingertipPrefab_7() const { return ___fingertipPrefab_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_fingertipPrefab_7() { return &___fingertipPrefab_7; }
	inline void set_fingertipPrefab_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___fingertipPrefab_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fingertipPrefab_7), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshPrefab_8() { return static_cast<int32_t>(offsetof(MixedRealityHandTrackingProfile_tDADC6D5367650C672DB618EED78274B7C1720AF0, ___handMeshPrefab_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_handMeshPrefab_8() const { return ___handMeshPrefab_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_handMeshPrefab_8() { return &___handMeshPrefab_8; }
	inline void set_handMeshPrefab_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___handMeshPrefab_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshPrefab_8), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshVisualizationModes_9() { return static_cast<int32_t>(offsetof(MixedRealityHandTrackingProfile_tDADC6D5367650C672DB618EED78274B7C1720AF0, ___handMeshVisualizationModes_9)); }
	inline int32_t get_handMeshVisualizationModes_9() const { return ___handMeshVisualizationModes_9; }
	inline int32_t* get_address_of_handMeshVisualizationModes_9() { return &___handMeshVisualizationModes_9; }
	inline void set_handMeshVisualizationModes_9(int32_t value)
	{
		___handMeshVisualizationModes_9 = value;
	}

	inline static int32_t get_offset_of_handJointVisualizationModes_10() { return static_cast<int32_t>(offsetof(MixedRealityHandTrackingProfile_tDADC6D5367650C672DB618EED78274B7C1720AF0, ___handJointVisualizationModes_10)); }
	inline int32_t get_handJointVisualizationModes_10() const { return ___handJointVisualizationModes_10; }
	inline int32_t* get_address_of_handJointVisualizationModes_10() { return &___handJointVisualizationModes_10; }
	inline void set_handJointVisualizationModes_10(int32_t value)
	{
		___handJointVisualizationModes_10 = value;
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


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder
struct  WindowsMixedRealityHandRecorder_t238D464312EDB1A73A6442BD23B3D340CF4EA210  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::<ReferenceJoint>k__BackingField
	int32_t ___U3CReferenceJointU3Ek__BackingField_5;
	// System.String Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::<OutputFileName>k__BackingField
	String_t* ___U3COutputFileNameU3Ek__BackingField_6;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::offset
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___offset_7;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::recordingHand
	uint8_t ___recordingHand_8;

public:
	inline static int32_t get_offset_of_U3CReferenceJointU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandRecorder_t238D464312EDB1A73A6442BD23B3D340CF4EA210, ___U3CReferenceJointU3Ek__BackingField_5)); }
	inline int32_t get_U3CReferenceJointU3Ek__BackingField_5() const { return ___U3CReferenceJointU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CReferenceJointU3Ek__BackingField_5() { return &___U3CReferenceJointU3Ek__BackingField_5; }
	inline void set_U3CReferenceJointU3Ek__BackingField_5(int32_t value)
	{
		___U3CReferenceJointU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3COutputFileNameU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandRecorder_t238D464312EDB1A73A6442BD23B3D340CF4EA210, ___U3COutputFileNameU3Ek__BackingField_6)); }
	inline String_t* get_U3COutputFileNameU3Ek__BackingField_6() const { return ___U3COutputFileNameU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3COutputFileNameU3Ek__BackingField_6() { return &___U3COutputFileNameU3Ek__BackingField_6; }
	inline void set_U3COutputFileNameU3Ek__BackingField_6(String_t* value)
	{
		___U3COutputFileNameU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COutputFileNameU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_offset_7() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandRecorder_t238D464312EDB1A73A6442BD23B3D340CF4EA210, ___offset_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_offset_7() const { return ___offset_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_offset_7() { return &___offset_7; }
	inline void set_offset_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___offset_7 = value;
	}

	inline static int32_t get_offset_of_recordingHand_8() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandRecorder_t238D464312EDB1A73A6442BD23B3D340CF4EA210, ___recordingHand_8)); }
	inline uint8_t get_recordingHand_8() const { return ___recordingHand_8; }
	inline uint8_t* get_address_of_recordingHand_8() { return &___recordingHand_8; }
	inline void set_recordingHand_8(uint8_t value)
	{
		___recordingHand_8 = value;
	}
};

struct WindowsMixedRealityHandRecorder_t238D464312EDB1A73A6442BD23B3D340CF4EA210_StaticFields
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::jointCount
	int32_t ___jointCount_4;

public:
	inline static int32_t get_offset_of_jointCount_4() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandRecorder_t238D464312EDB1A73A6442BD23B3D340CF4EA210_StaticFields, ___jointCount_4)); }
	inline int32_t get_jointCount_4() const { return ___jointCount_4; }
	inline int32_t* get_address_of_jointCount_4() { return &___jointCount_4; }
	inline void set_jointCount_4(int32_t value)
	{
		___jointCount_4 = value;
	}
};


// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityCameraSettingsProfile
struct  WindowsMixedRealityCameraSettingsProfile_t315EAD84CE3FB831C6072D7AB2E3E0FDC7AD352C  : public BaseCameraSettingsProfile_t58D17D4EC9CF1682B49D0BCA5B18733DE9A8D2F0
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityCameraSettingsProfile::renderFromPVCameraForMixedRealityCapture
	bool ___renderFromPVCameraForMixedRealityCapture_5;
	// Microsoft.MixedReality.Toolkit.WindowsMixedReality.HolographicDepthReprojectionMethod Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityCameraSettingsProfile::reprojectionMethod
	int32_t ___reprojectionMethod_6;

public:
	inline static int32_t get_offset_of_renderFromPVCameraForMixedRealityCapture_5() { return static_cast<int32_t>(offsetof(WindowsMixedRealityCameraSettingsProfile_t315EAD84CE3FB831C6072D7AB2E3E0FDC7AD352C, ___renderFromPVCameraForMixedRealityCapture_5)); }
	inline bool get_renderFromPVCameraForMixedRealityCapture_5() const { return ___renderFromPVCameraForMixedRealityCapture_5; }
	inline bool* get_address_of_renderFromPVCameraForMixedRealityCapture_5() { return &___renderFromPVCameraForMixedRealityCapture_5; }
	inline void set_renderFromPVCameraForMixedRealityCapture_5(bool value)
	{
		___renderFromPVCameraForMixedRealityCapture_5 = value;
	}

	inline static int32_t get_offset_of_reprojectionMethod_6() { return static_cast<int32_t>(offsetof(WindowsMixedRealityCameraSettingsProfile_t315EAD84CE3FB831C6072D7AB2E3E0FDC7AD352C, ___reprojectionMethod_6)); }
	inline int32_t get_reprojectionMethod_6() const { return ___reprojectionMethod_6; }
	inline int32_t* get_address_of_reprojectionMethod_6() { return &___reprojectionMethod_6; }
	inline void set_reprojectionMethod_6(int32_t value)
	{
		___reprojectionMethod_6 = value;
	}
};


// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityReprojectionUpdater
struct  WindowsMixedRealityReprojectionUpdater_t9C1F363D0E755B6A4C8F84CF10D09CC3A1479F43  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Microsoft.MixedReality.Toolkit.WindowsMixedReality.HolographicDepthReprojectionMethod Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityReprojectionUpdater::<ReprojectionMethod>k__BackingField
	int32_t ___U3CReprojectionMethodU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CReprojectionMethodU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(WindowsMixedRealityReprojectionUpdater_t9C1F363D0E755B6A4C8F84CF10D09CC3A1479F43, ___U3CReprojectionMethodU3Ek__BackingField_4)); }
	inline int32_t get_U3CReprojectionMethodU3Ek__BackingField_4() const { return ___U3CReprojectionMethodU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CReprojectionMethodU3Ek__BackingField_4() { return &___U3CReprojectionMethodU3Ek__BackingField_4; }
	inline void set_U3CReprojectionMethodU3Ek__BackingField_4(int32_t value)
	{
		___U3CReprojectionMethodU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  m_Items[1];

public:
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		m_Items[index] = value;
	}
};
// System.UInt16[]
struct UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint16_t m_Items[1];

public:
	inline uint16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint16_t value)
	{
		m_Items[index] = value;
	}
};
// Windows.Perception.People.HandMeshVertex[]
struct HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) HandMeshVertex_t81B9BA0A9D5AFF3A2877275B43C95E3745EC7784  m_Items[1];

public:
	inline HandMeshVertex_t81B9BA0A9D5AFF3A2877275B43C95E3745EC7784  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline HandMeshVertex_t81B9BA0A9D5AFF3A2877275B43C95E3745EC7784 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, HandMeshVertex_t81B9BA0A9D5AFF3A2877275B43C95E3745EC7784  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline HandMeshVertex_t81B9BA0A9D5AFF3A2877275B43C95E3745EC7784  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline HandMeshVertex_t81B9BA0A9D5AFF3A2877275B43C95E3745EC7784 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, HandMeshVertex_t81B9BA0A9D5AFF3A2877275B43C95E3745EC7784  value)
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


// !!0 Microsoft.MixedReality.Toolkit.ComponentExtensions::EnsureComponent<System.Object>(UnityEngine.Component)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ComponentExtensions_EnsureComponent_TisRuntimeObject_m38BBE477441BF349249A8CF7BAA63E9C3822255D_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___component0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m1DE8FACEFD67657A641DA34A7AB32F7E8D19D278_gshared (Dictionary_2_tB2D3942B8FBDE371EDC0CC7AC3685CF1E4BBBA64 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m26920CBB1A46B9FD45F13F19CEE6A7363803A392_gshared (Dictionary_2_tB2D3942B8FBDE371EDC0CC7AC3685CF1E4BBBA64 * __this, int32_t ___key0, MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5 * ___value1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition/<SetHandMeshObserver>d__17>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CSetHandMeshObserverU3Ed__17_tB6D9B203D85335F7DCEEF262F084016559A10517_mAC7D8BF08D393DF453E3D589064ED4F619E5F530_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CSetHandMeshObserverU3Ed__17_tB6D9B203D85335F7DCEEF262F084016559A10517 * ___stateMachine0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Numerics.Matrix4x4>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m1C8741C73000BD525E6034625DD1ED12EB07EA10_gshared_inline (Nullable_1_t9FF3BE791A3B4350B3DE3D72C440E11029540DD8 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Numerics.Matrix4x4>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  Nullable_1_get_Value_m608A59322CEE9B305CE8472969742F446EA8318A_gshared (Nullable_1_t9FF3BE791A3B4350B3DE3D72C440E11029540DD8 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!!0> System.WindowsRuntimeSystemExtensions::GetAwaiter<System.Object>(Windows.Foundation.IAsyncOperation`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE  WindowsRuntimeSystemExtensions_GetAwaiter_TisRuntimeObject_m59A39C18839C39E7B0BA3B24C5B236DD299F8968_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition/<SetHandMeshObserver>d__17>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CSetHandMeshObserverU3Ed__17_tB6D9B203D85335F7DCEEF262F084016559A10517_m61BFEDE7FAABA4EDBD8FD97E9A73D98C2B7150DD_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * ___awaiter0, U3CSetHandMeshObserverU3Ed__17_tB6D9B203D85335F7DCEEF262F084016559A10517 * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method);

// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProvider::.ctor(Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseCameraSettingsProvider__ctor_mB644E50C8E2E911E4353BB6A2721AE4466CEBC35 (BaseCameraSettingsProvider_t4E4C0A3E587FDB85137F755C0E20EACCF11815EC * __this, RuntimeObject* ___cameraSystem0, String_t* ___name1, uint32_t ___priority2, BaseCameraSettingsProfile_t58D17D4EC9CF1682B49D0BCA5B18733DE9A8D2F0 * ___profile3, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Enable_m28D1FB3AEE18C0A33E22597EF985DC2DC872821F (BaseService_tA51F0EA841C4C16598268B190DC8663BCB38F555 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::InitializeReprojectionUpdater()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityCameraSettings_InitializeReprojectionUpdater_m0B4B168EDC7C308BB93694510BF65EA87D89AE9C (BaseWindowsMixedRealityCameraSettings_tA5B8622CC64E1B447C12B83A20AF7B3D5D95D385 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::UninitializeReprojectionUpdater()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityCameraSettings_UninitializeReprojectionUpdater_mA42E10F78C2B637F6548ED1C853B53DD48E8C438 (BaseWindowsMixedRealityCameraSettings_tA5B8622CC64E1B447C12B83A20AF7B3D5D95D385 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Disable_mFDAACFD3617E984F498F198C22701C9BE2394636 (BaseService_tA51F0EA841C4C16598268B190DC8663BCB38F555 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProvider::ApplyConfiguration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseCameraSettingsProvider_ApplyConfiguration_m155409F8DFF437EB746074CB03E6C871B37C4FF6 (BaseCameraSettingsProvider_t4E4C0A3E587FDB85137F755C0E20EACCF11815EC * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityCameraSettingsProfile Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::get_Profile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WindowsMixedRealityCameraSettingsProfile_t315EAD84CE3FB831C6072D7AB2E3E0FDC7AD352C * BaseWindowsMixedRealityCameraSettings_get_Profile_mCFB437B6754A2F8925916A6BAD837EF10F7306C5 (BaseWindowsMixedRealityCameraSettings_tA5B8622CC64E1B447C12B83A20AF7B3D5D95D385 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityCameraSettingsProfile::get_RenderFromPVCameraForMixedRealityCapture()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool WindowsMixedRealityCameraSettingsProfile_get_RenderFromPVCameraForMixedRealityCapture_mC18E446F2625A1459676CA7CE6482C87411D67AE_inline (WindowsMixedRealityCameraSettingsProfile_t315EAD84CE3FB831C6072D7AB2E3E0FDC7AD352C * __this, const RuntimeMethod* method);
// Windows.Graphics.Holographic.HolographicDisplay Windows.Graphics.Holographic.HolographicDisplay::GetDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HolographicDisplay_t64D6F94B22A96A3AB13B7935EBDAE901CE418B6E * HolographicDisplay_GetDefault_m0F00077DA9B4ABA9BB4545AE0CE23017D8ABB4F3 (const RuntimeMethod* method);
// Windows.Graphics.Holographic.HolographicViewConfiguration Windows.Graphics.Holographic.HolographicDisplay::TryGetViewConfiguration(Windows.Graphics.Holographic.HolographicViewConfigurationKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HolographicViewConfiguration_tE179E9B0B22770D34F8757D4314359560DC2CBCB * HolographicDisplay_TryGetViewConfiguration_m3BA447E93CCABA413509B300E575D8739916C121 (HolographicDisplay_t64D6F94B22A96A3AB13B7935EBDAE901CE418B6E * __this, int32_t ___kind0, const RuntimeMethod* method);
// System.Void Windows.Graphics.Holographic.HolographicViewConfiguration::put_IsEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HolographicViewConfiguration_put_IsEnabled_mD1763BD67038C5B79F0B8E0C7AE210286203A62E (HolographicViewConfiguration_tE179E9B0B22770D34F8757D4314359560DC2CBCB * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.Camera Microsoft.MixedReality.Toolkit.Utilities.CameraCache::get_Main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * CameraCache_get_Main_mE989C7A267DEEBFA4B04569521133A2D566B7D5B (const RuntimeMethod* method);
// !!0 Microsoft.MixedReality.Toolkit.ComponentExtensions::EnsureComponent<Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityReprojectionUpdater>(UnityEngine.Component)
inline WindowsMixedRealityReprojectionUpdater_t9C1F363D0E755B6A4C8F84CF10D09CC3A1479F43 * ComponentExtensions_EnsureComponent_TisWindowsMixedRealityReprojectionUpdater_t9C1F363D0E755B6A4C8F84CF10D09CC3A1479F43_m02601E5017D9CCAE00B8A881FE6A9E70FF4DB98B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___component0, const RuntimeMethod* method)
{
	return ((  WindowsMixedRealityReprojectionUpdater_t9C1F363D0E755B6A4C8F84CF10D09CC3A1479F43 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))ComponentExtensions_EnsureComponent_TisRuntimeObject_m38BBE477441BF349249A8CF7BAA63E9C3822255D_gshared)(___component0, method);
}
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.HolographicDepthReprojectionMethod Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityCameraSettingsProfile::get_ReprojectionMethod()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WindowsMixedRealityCameraSettingsProfile_get_ReprojectionMethod_m073CF98355DAFFEF2E79C254BA62275B5CB1CE91_inline (WindowsMixedRealityCameraSettingsProfile_t315EAD84CE3FB831C6072D7AB2E3E0FDC7AD352C * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityReprojectionUpdater::set_ReprojectionMethod(Microsoft.MixedReality.Toolkit.WindowsMixedReality.HolographicDepthReprojectionMethod)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsMixedRealityReprojectionUpdater_set_ReprojectionMethod_mA2279B18F4202E9C343CFC0B5E0A91201ADE46B1_inline (WindowsMixedRealityReprojectionUpdater_t9C1F363D0E755B6A4C8F84CF10D09CC3A1479F43 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.UnityObjectExtensions::DestroyObject(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityObjectExtensions_DestroyObject_m63D9011D67521DCFC4F77C118FB65B7180F34F73 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, float ___t1, const RuntimeMethod* method);
// System.Boolean Windows.Foundation.Metadata.ApiInformation::IsMethodPresent(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ApiInformation_IsMethodPresent_mD2C37413DF214462F37AEBB5196C4C799A6F5B7B (String_t* ___typeName0, String_t* ___methodName1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::.ctor()
inline void Dictionary_2__ctor_m98FA9A5E83858B1899CF3494493ACF76DE701543 (Dictionary_2_t2608D8F85D3104F212EC3BC05E54C1515108B68E * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2608D8F85D3104F212EC3BC05E54C1515108B68E *, const RuntimeMethod*))Dictionary_2__ctor_m1DE8FACEFD67657A641DA34A7AB32F7E8D19D278_gshared)(__this, method);
}
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::get_ZeroIdentity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  MixedRealityPose_get_ZeroIdentity_m7DFFCF17695B53E77ABCC4035C292C405996350E_inline (const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::.ctor(System.UInt32,System.String,Microsoft.MixedReality.Toolkit.Utilities.AxisType,Microsoft.MixedReality.Toolkit.Input.DeviceInputType,System.String,System.String,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityInteractionMapping__ctor_m927CB3497C64EA1EE7EF2FAEDC15A611FA4D1571 (MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 * __this, uint32_t ___id0, String_t* ___description1, int32_t ___axisType2, int32_t ___inputType3, String_t* ___axisCodeX4, String_t* ___axisCodeY5, bool ___invertXAxis6, bool ___invertYAxis7, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m68CBDA00749C9C3E905574F6A9F8A0D17BB0D04D (Dictionary_2_t2608D8F85D3104F212EC3BC05E54C1515108B68E * __this, int32_t ___key0, MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5 * ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t2608D8F85D3104F212EC3BC05E54C1515108B68E *, int32_t, MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5 *, const RuntimeMethod*))Dictionary_2_TryGetValue_m26920CBB1A46B9FD45F13F19CEE6A7363803A392_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::get_Rotation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  MixedRealityPose_get_Rotation_mA4D1C5FACB636919D31001E69C5062E94B6B9E45_inline (MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline (float ___d0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.CoreServices::get_InputSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreServices_get_InputSystem_m734103F090144FE710940E31C6B3581D15572FB0 (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::set_PoseData(Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityInteractionMapping_set_PoseData_mAE3A962D306D4CCA9228111491E8AA96D523F44D (MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 * __this, MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_Changed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityInteractionMapping_get_Changed_mFDC721362095F9525C839C0BA20EF8B9A55A37EC (MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_MixedRealityInputAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  MixedRealityInteractionMapping_get_MixedRealityInputAction_mB9F6AA03D64CE6F746424699CD1F4993446CE41A_inline (MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  AsyncVoidMethodBuilder_Create_m878314259623CC47A2EBAEEF2F8E8D6B61560FA5 (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition/<SetHandMeshObserver>d__17>(!!0&)
inline void AsyncVoidMethodBuilder_Start_TisU3CSetHandMeshObserverU3Ed__17_tB6D9B203D85335F7DCEEF262F084016559A10517_mAC7D8BF08D393DF453E3D589064ED4F619E5F530 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CSetHandMeshObserverU3Ed__17_tB6D9B203D85335F7DCEEF262F084016559A10517 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, U3CSetHandMeshObserverU3Ed__17_tB6D9B203D85335F7DCEEF262F084016559A10517 *, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CSetHandMeshObserverU3Ed__17_tB6D9B203D85335F7DCEEF262F084016559A10517_mAC7D8BF08D393DF453E3D589064ED4F619E5F530_gshared)(__this, ___stateMachine0, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::get_HandTrackingProfile()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityHandTrackingProfile_tDADC6D5367650C672DB618EED78274B7C1720AF0 * MixedRealityInputSystemProfile_get_HandTrackingProfile_m0E906F33FA6FC6D91ED150C13D289B2A66EAD9C5_inline (MixedRealityInputSystemProfile_t6086D1D813224695CFB52FA000EDC2A6B6125255 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile::get_EnableHandMeshVisualization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityHandTrackingProfile_get_EnableHandMeshVisualization_m5C7E7F8959081B8360EAF1A1CE95667680485D17 (MixedRealityHandTrackingProfile_tDADC6D5367650C672DB618EED78274B7C1720AF0 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.HandMeshInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandMeshInfo__ctor_m49CB34A7FBF92CDAAF537248F55F2CEB3FD02DBB (HandMeshInfo_t2149B356EA6B50B1E60C46E30EF537D6D8E78566 * __this, const RuntimeMethod* method);
// Windows.Perception.People.HandPose Windows.UI.Input.Spatial.SpatialInteractionSourceState::TryGetHandPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandPose_tA80E49BEA85A49A6594EC7FF8E1470F10978A0AE * SpatialInteractionSourceState_TryGetHandPose_m9B623E31B753FD11674C848601622016AF260110 (SpatialInteractionSourceState_t6E721C100623C9060174FE6F6FBAC61D17FDF199 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::SetHandMeshObserver(Windows.UI.Input.Spatial.SpatialInteractionSourceState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityArticulatedHandDefinition_SetHandMeshObserver_m59B3A0D70CCF32FCC9FA81FBB03424B4E071FB38 (WindowsMixedRealityArticulatedHandDefinition_t6767A4BDFA6A972CE918EDC477B279BF2637FAA7 * __this, SpatialInteractionSourceState_t6E721C100623C9060174FE6F6FBAC61D17FDF199 * ___sourceState0, const RuntimeMethod* method);
// System.UInt32 Windows.Perception.People.HandMeshObserver::get_TriangleIndexCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t HandMeshObserver_get_TriangleIndexCount_mFF115FBB6E545038C1BD1420DF2873C5172D54FA (HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * __this, const RuntimeMethod* method);
// System.Void Windows.Perception.People.HandMeshObserver::GetTriangleIndices(System.UInt16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandMeshObserver_GetTriangleIndices_m822E18BFBC457E8CDFF9DF03D0316DE316631424 (HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * __this, UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* ___indices0, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m40103AA97DC582C557B912CF4BBE86A4D166F803 (RuntimeArray * ___sourceArray0, RuntimeArray * ___destinationArray1, int32_t ___length2, const RuntimeMethod* method);
// System.UInt32 Windows.Perception.People.HandMeshObserver::get_VertexCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t HandMeshObserver_get_VertexCount_mF44DDE4B9A043F460CE7C8F9DA46C4B7FB0E82B6 (HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * __this, const RuntimeMethod* method);
// Windows.Perception.People.HandPose Windows.Perception.People.HandMeshObserver::get_NeutralPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandPose_tA80E49BEA85A49A6594EC7FF8E1470F10978A0AE * HandMeshObserver_get_NeutralPose_m5E28EB4B46D13DFD8E3556DCCC387C44D06BD9F9 (HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * __this, const RuntimeMethod* method);
// Windows.Perception.People.HandMeshVertexState Windows.Perception.People.HandMeshObserver::GetVertexStateForPose(Windows.Perception.People.HandPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandMeshVertexState_t472D7CF8982D6D93200D405B7F990404C022A9F8 * HandMeshObserver_GetVertexStateForPose_m15A85E28A95DD93A7CEEB07C98A9240A7EED5B38 (HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * __this, HandPose_tA80E49BEA85A49A6594EC7FF8E1470F10978A0AE * ___handPose0, const RuntimeMethod* method);
// System.Void Windows.Perception.People.HandMeshVertexState::GetVertices(Windows.Perception.People.HandMeshVertex[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandMeshVertexState_GetVertices_mF42AFC0B0A958259F449205CA0FED73239595CBF (HandMeshVertexState_t472D7CF8982D6D93200D405B7F990404C022A9F8 * __this, HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1* ___vertices0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SystemNumericsExtensions::ToUnityVector3(System.Numerics.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  SystemNumericsExtensions_ToUnityVector3_mFB97FBEA6DF5B1E921C4C61B716D40F5A022233B (Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  ___vector0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::InitializeUVs(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityArticulatedHandDefinition_InitializeUVs_mE6B9D144CAB9E821DEAF12E9BFF8C22EF158D6AA (WindowsMixedRealityArticulatedHandDefinition_t6767A4BDFA6A972CE918EDC477B279BF2637FAA7 * __this, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___neutralPoseVertices0, const RuntimeMethod* method);
// Windows.Perception.Spatial.SpatialCoordinateSystem Windows.Perception.People.HandMeshVertexState::get_CoordinateSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * HandMeshVertexState_get_CoordinateSystem_m4AC199BB8E0D40D4C80AC8C446E0C565F979808A (HandMeshVertexState_t472D7CF8982D6D93200D405B7F990404C022A9F8 * __this, const RuntimeMethod* method);
// Windows.Perception.Spatial.SpatialCoordinateSystem Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::get_SpatialCoordinateSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * WindowsMixedRealityUtilities_get_SpatialCoordinateSystem_m35FA29F240C4E318D10DFEA6914F39C8B5C2C98D (const RuntimeMethod* method);
// System.Nullable`1<System.Numerics.Matrix4x4> Windows.Perception.Spatial.SpatialCoordinateSystem::TryGetTransformTo(Windows.Perception.Spatial.SpatialCoordinateSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t9FF3BE791A3B4350B3DE3D72C440E11029540DD8  SpatialCoordinateSystem_TryGetTransformTo_m9860B951AA3C929F3C1A39347C72EA838E5774FF (SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * __this, SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * ___target0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Numerics.Matrix4x4>::get_HasValue()
inline bool Nullable_1_get_HasValue_m1C8741C73000BD525E6034625DD1ED12EB07EA10_inline (Nullable_1_t9FF3BE791A3B4350B3DE3D72C440E11029540DD8 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t9FF3BE791A3B4350B3DE3D72C440E11029540DD8 *, const RuntimeMethod*))Nullable_1_get_HasValue_m1C8741C73000BD525E6034625DD1ED12EB07EA10_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<System.Numerics.Matrix4x4>::get_Value()
inline Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  Nullable_1_get_Value_m608A59322CEE9B305CE8472969742F446EA8318A (Nullable_1_t9FF3BE791A3B4350B3DE3D72C440E11029540DD8 * __this, const RuntimeMethod* method)
{
	return ((  Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  (*) (Nullable_1_t9FF3BE791A3B4350B3DE3D72C440E11029540DD8 *, const RuntimeMethod*))Nullable_1_get_Value_m608A59322CEE9B305CE8472969742F446EA8318A_gshared)(__this, method);
}
// System.Boolean System.Numerics.Matrix4x4::Decompose(System.Numerics.Matrix4x4,System.Numerics.Vector3&,System.Numerics.Quaternion&,System.Numerics.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Matrix4x4_Decompose_mAEEBB02601928ECC39E5459CC1015C8FEE7D4754 (Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  ___matrix0, Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4 * ___scale1, Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C * ___rotation2, Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4 * ___translation3, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.SystemNumericsExtensions::ToUnityQuaternion(System.Numerics.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  SystemNumericsExtensions_ToUnityQuaternion_m41F7D569D129AD05FAC5A599B70AC71A169477E2 (Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C  ___quaternion0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseCameraSettingsProfile__ctor_m4F3D7BB2B144F4E7B4678894B6AF34D71DE4F2AE (BaseCameraSettingsProfile_t58D17D4EC9CF1682B49D0BCA5B18733DE9A8D2F0 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::RecordHandStart(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityHandRecorder_RecordHandStart_m37DBF5B1B3C473FBBF41E2206F2474F20AEFD0D3 (WindowsMixedRealityHandRecorder_t238D464312EDB1A73A6442BD23B3D340CF4EA210 * __this, uint8_t ___handedness0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::get_ReferenceJoint()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WindowsMixedRealityHandRecorder_get_ReferenceJoint_mF47398E6FC9A6DFA528C0C5FCB259BF502BC5526_inline (WindowsMixedRealityHandRecorder_t238D464312EDB1A73A6442BD23B3D340CF4EA210 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.HandJointUtils::TryGetJointPose(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandJointUtils_TryGetJointPose_mE6010964EC9F98542BF0A0163111681A83C7BE15 (int32_t ___joint0, uint8_t ___handedness1, MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5 * ___pose2, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::get_Position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  MixedRealityPose_get_Position_mA85AA29A7C35C13E7DDDCF058D1CB4F0371F6A08_inline (MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArticulatedHandPose__ctor_m36726004DECA00F5A66D992D1BE16B23D931ABD4 (ArticulatedHandPose_t0ACAC8E09F0FFC54CB295B9ECD097834791F65BF * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose::ParseFromJointPoses(Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose[],Microsoft.MixedReality.Toolkit.Utilities.Handedness,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArticulatedHandPose_ParseFromJointPoses_m7FB8CF8A334E2501462E4C0C1AFD639FCFB3F303 (ArticulatedHandPose_t0ACAC8E09F0FFC54CB295B9ECD097834791F65BF * __this, MixedRealityPoseU5BU5D_t94ED3D45C754C96FE1E9BBD9C193E0DE07B32019* ___joints0, uint8_t ___handedness1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position3, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::get_OutputFileName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* WindowsMixedRealityHandRecorder_get_OutputFileName_m00DA57FD16ED1A5A3184E38B854178A0FEF15D92_inline (WindowsMixedRealityHandRecorder_t238D464312EDB1A73A6442BD23B3D340CF4EA210 * __this, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_UtcNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_get_UtcNow_m761E57F86226DDD94F0A2F4D98F0A8E27C74F090 (const RuntimeMethod* method);
// System.String System.DateTime::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m19ECEFF7BA22ED4425F7562A82A1C2308E934204 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, String_t* ___format0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose::ToJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ArticulatedHandPose_ToJson_m0DB903CE792AC92FA73DCE31AE0BA67C288B4BFF (ArticulatedHandPose_t0ACAC8E09F0FFC54CB295B9ECD097834791F65BF * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::StoreRecordedHandPose(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityHandRecorder_StoreRecordedHandPose_mFD6E1F7C7508CD1E8F7F94E4FECD267506D5B9C9 (String_t* ___data0, String_t* ___filename1, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463 (const RuntimeMethod* method);
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method);
// System.IO.StreamWriter System.IO.File::CreateText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * File_CreateText_mF393781AD8227008F1FE3646C896EBD3C4AC42B6 (String_t* ___path0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.String[] System.Enum::GetNames(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* Enum_GetNames_m49110673091D017F43CF0F5F7AD9B7730306D2E8 (Type_t * ___enumType0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::get_UtilitiesProvider()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* WindowsMixedRealityUtilities_get_UtilitiesProvider_m8BBCC384C698F1FA504B618B249FB2F84B76F8A9_inline (const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Object System.Runtime.InteropServices.Marshal::GetObjectForIUnknown(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Marshal_GetObjectForIUnknown_m9D5CB9B12B72BC4CCC46E363C805A03FFE644443 (intptr_t ___pUnk0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// Windows.UI.Input.Spatial.SpatialInteractionSource Windows.UI.Input.Spatial.SpatialInteractionSourceState::get_Source()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpatialInteractionSource_tF5344A6C35341EF626EAC41ADCDFDCE01154752F * SpatialInteractionSourceState_get_Source_mDFBB7ECDC326D42075DCF0B8D5779B7D11EAFD8F (SpatialInteractionSourceState_t6E721C100623C9060174FE6F6FBAC61D17FDF199 * __this, const RuntimeMethod* method);
// Windows.Foundation.IAsyncOperation`1<Windows.Perception.People.HandMeshObserver> Windows.UI.Input.Spatial.SpatialInteractionSource::TryCreateHandMeshObserverAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SpatialInteractionSource_TryCreateHandMeshObserverAsync_mE8630D9D92744C27BD5EBD758B42C3CB6ACFEC5C (SpatialInteractionSource_tF5344A6C35341EF626EAC41ADCDFDCE01154752F * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!!0> System.WindowsRuntimeSystemExtensions::GetAwaiter<Windows.Perception.People.HandMeshObserver>(Windows.Foundation.IAsyncOperation`1<!!0>)
inline TaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E  WindowsRuntimeSystemExtensions_GetAwaiter_TisHandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273_m5EC4FF7F7B66CDE9B445927A5B7350344EAF4FBD (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E  (*) (RuntimeObject*, const RuntimeMethod*))WindowsRuntimeSystemExtensions_GetAwaiter_TisRuntimeObject_m59A39C18839C39E7B0BA3B24C5B236DD299F8968_gshared)(___source0, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Perception.People.HandMeshObserver>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m5D6FF641B7538EB84114C6AE307B3A91B49DBD1D (TaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Perception.People.HandMeshObserver>,Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition/<SetHandMeshObserver>d__17>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E_TisU3CSetHandMeshObserverU3Ed__17_tB6D9B203D85335F7DCEEF262F084016559A10517_mD0DA7135E72195C6FE7B90DE51E01A253D7B9C8B (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E * ___awaiter0, U3CSetHandMeshObserverU3Ed__17_tB6D9B203D85335F7DCEEF262F084016559A10517 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E *, U3CSetHandMeshObserverU3Ed__17_tB6D9B203D85335F7DCEEF262F084016559A10517 *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CSetHandMeshObserverU3Ed__17_tB6D9B203D85335F7DCEEF262F084016559A10517_m61BFEDE7FAABA4EDBD8FD97E9A73D98C2B7150DD_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Perception.People.HandMeshObserver>::GetResult()
inline HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * TaskAwaiter_1_GetResult_m59638659560BF6E7A32BE216A243011FC4E906F1 (TaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E * __this, const RuntimeMethod* method)
{
	return ((  HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * (*) (TaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition/<SetHandMeshObserver>d__17::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetHandMeshObserverU3Ed__17_MoveNext_mD5D3499AEFB8E8FD738F49644D3B5E52D6A524AB (U3CSetHandMeshObserverU3Ed__17_tB6D9B203D85335F7DCEEF262F084016559A10517 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition/<SetHandMeshObserver>d__17::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetHandMeshObserverU3Ed__17_SetStateMachine_m6F75D442B0D401745BA6DD81AF212BAA0D35BA02 (U3CSetHandMeshObserverU3Ed__17_tB6D9B203D85335F7DCEEF262F084016559A10517 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
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
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::.ctor(Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityCameraSettings__ctor_m8AC7A52EE592D3B184ED31184CDB275A20ADDF9A (BaseWindowsMixedRealityCameraSettings_tA5B8622CC64E1B447C12B83A20AF7B3D5D95D385 * __this, RuntimeObject* ___cameraSystem0, String_t* ___name1, uint32_t ___priority2, BaseCameraSettingsProfile_t58D17D4EC9CF1682B49D0BCA5B18733DE9A8D2F0 * ___profile3, const RuntimeMethod* method)
{
	{
		// BaseCameraSettingsProfile profile = null) : base(cameraSystem, name, priority, profile)
		RuntimeObject* L_0 = ___cameraSystem0;
		String_t* L_1 = ___name1;
		uint32_t L_2 = ___priority2;
		BaseCameraSettingsProfile_t58D17D4EC9CF1682B49D0BCA5B18733DE9A8D2F0 * L_3 = ___profile3;
		BaseCameraSettingsProvider__ctor_mB644E50C8E2E911E4353BB6A2721AE4466CEBC35(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityCameraSettings_Enable_m46C0F031A3C7840B8E96677D4775B37F35CCD5A6 (BaseWindowsMixedRealityCameraSettings_tA5B8622CC64E1B447C12B83A20AF7B3D5D95D385 * __this, const RuntimeMethod* method)
{
	{
		// base.Enable();
		BaseService_Enable_m28D1FB3AEE18C0A33E22597EF985DC2DC872821F(__this, /*hidden argument*/NULL);
		// InitializeReprojectionUpdater();
		BaseWindowsMixedRealityCameraSettings_InitializeReprojectionUpdater_m0B4B168EDC7C308BB93694510BF65EA87D89AE9C(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityCameraSettings_Disable_mF0383F60DFFC3143EE4EA7276688A32E30C45BF0 (BaseWindowsMixedRealityCameraSettings_tA5B8622CC64E1B447C12B83A20AF7B3D5D95D385 * __this, const RuntimeMethod* method)
{
	{
		// UninitializeReprojectionUpdater();
		BaseWindowsMixedRealityCameraSettings_UninitializeReprojectionUpdater_mA42E10F78C2B637F6548ED1C853B53DD48E8C438(__this, /*hidden argument*/NULL);
		// base.Disable();
		BaseService_Disable_mFDAACFD3617E984F498F198C22701C9BE2394636(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityCameraSettingsProfile Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::get_Profile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WindowsMixedRealityCameraSettingsProfile_t315EAD84CE3FB831C6072D7AB2E3E0FDC7AD352C * BaseWindowsMixedRealityCameraSettings_get_Profile_mCFB437B6754A2F8925916A6BAD837EF10F7306C5 (BaseWindowsMixedRealityCameraSettings_tA5B8622CC64E1B447C12B83A20AF7B3D5D95D385 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseWindowsMixedRealityCameraSettings_get_Profile_mCFB437B6754A2F8925916A6BAD837EF10F7306C5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private WindowsMixedRealityCameraSettingsProfile Profile => ConfigurationProfile as WindowsMixedRealityCameraSettingsProfile;
		BaseMixedRealityProfile_t9B92D8A7CB0AE5AF973870EDF7DE2BC12E5FA4E5 * L_0 = VirtFuncInvoker0< BaseMixedRealityProfile_t9B92D8A7CB0AE5AF973870EDF7DE2BC12E5FA4E5 * >::Invoke(19 /* Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::get_ConfigurationProfile() */, __this);
		return ((WindowsMixedRealityCameraSettingsProfile_t315EAD84CE3FB831C6072D7AB2E3E0FDC7AD352C *)IsInstClass((RuntimeObject*)L_0, WindowsMixedRealityCameraSettingsProfile_t315EAD84CE3FB831C6072D7AB2E3E0FDC7AD352C_il2cpp_TypeInfo_var));
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::ApplyConfiguration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityCameraSettings_ApplyConfiguration_m2E5DCE3F69CB56696F82508DFC7ACAFF8F8604FA (BaseWindowsMixedRealityCameraSettings_tA5B8622CC64E1B447C12B83A20AF7B3D5D95D385 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseWindowsMixedRealityCameraSettings_ApplyConfiguration_m2E5DCE3F69CB56696F82508DFC7ACAFF8F8604FA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HolographicViewConfiguration_tE179E9B0B22770D34F8757D4314359560DC2CBCB * V_0 = NULL;
	HolographicDisplay_t64D6F94B22A96A3AB13B7935EBDAE901CE418B6E * G_B5_0 = NULL;
	HolographicDisplay_t64D6F94B22A96A3AB13B7935EBDAE901CE418B6E * G_B4_0 = NULL;
	HolographicViewConfiguration_tE179E9B0B22770D34F8757D4314359560DC2CBCB * G_B6_0 = NULL;
	{
		// base.ApplyConfiguration();
		BaseCameraSettingsProvider_ApplyConfiguration_m155409F8DFF437EB746074CB03E6C871B37C4FF6(__this, /*hidden argument*/NULL);
		// if (Profile != null
		//     && Profile.RenderFromPVCameraForMixedRealityCapture
		//     && isTryGetViewConfigurationSupported)
		WindowsMixedRealityCameraSettingsProfile_t315EAD84CE3FB831C6072D7AB2E3E0FDC7AD352C * L_0 = BaseWindowsMixedRealityCameraSettings_get_Profile_mCFB437B6754A2F8925916A6BAD837EF10F7306C5(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0045;
		}
	}
	{
		WindowsMixedRealityCameraSettingsProfile_t315EAD84CE3FB831C6072D7AB2E3E0FDC7AD352C * L_2 = BaseWindowsMixedRealityCameraSettings_get_Profile_mCFB437B6754A2F8925916A6BAD837EF10F7306C5(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3 = WindowsMixedRealityCameraSettingsProfile_get_RenderFromPVCameraForMixedRealityCapture_mC18E446F2625A1459676CA7CE6482C87411D67AE_inline(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0045;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BaseWindowsMixedRealityCameraSettings_tA5B8622CC64E1B447C12B83A20AF7B3D5D95D385_il2cpp_TypeInfo_var);
		bool L_4 = ((BaseWindowsMixedRealityCameraSettings_tA5B8622CC64E1B447C12B83A20AF7B3D5D95D385_StaticFields*)il2cpp_codegen_static_fields_for(BaseWindowsMixedRealityCameraSettings_tA5B8622CC64E1B447C12B83A20AF7B3D5D95D385_il2cpp_TypeInfo_var))->get_isTryGetViewConfigurationSupported_8();
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		// global::Windows.Graphics.Holographic.HolographicViewConfiguration viewConfiguration = global::Windows.Graphics.Holographic.HolographicDisplay.GetDefault()?.TryGetViewConfiguration(global::Windows.Graphics.Holographic.HolographicViewConfigurationKind.PhotoVideoCamera);
		HolographicDisplay_t64D6F94B22A96A3AB13B7935EBDAE901CE418B6E * L_5 = HolographicDisplay_GetDefault_m0F00077DA9B4ABA9BB4545AE0CE23017D8ABB4F3(/*hidden argument*/NULL);
		HolographicDisplay_t64D6F94B22A96A3AB13B7935EBDAE901CE418B6E * L_6 = L_5;
		G_B4_0 = L_6;
		if (L_6)
		{
			G_B5_0 = L_6;
			goto IL_0034;
		}
	}
	{
		G_B6_0 = ((HolographicViewConfiguration_tE179E9B0B22770D34F8757D4314359560DC2CBCB *)(NULL));
		goto IL_003a;
	}

IL_0034:
	{
		NullCheck(G_B5_0);
		HolographicViewConfiguration_tE179E9B0B22770D34F8757D4314359560DC2CBCB * L_7 = HolographicDisplay_TryGetViewConfiguration_m3BA447E93CCABA413509B300E575D8739916C121(G_B5_0, 1, /*hidden argument*/NULL);
		G_B6_0 = L_7;
	}

IL_003a:
	{
		V_0 = G_B6_0;
		// if (viewConfiguration != null)
		HolographicViewConfiguration_tE179E9B0B22770D34F8757D4314359560DC2CBCB * L_8 = V_0;
		if (!L_8)
		{
			goto IL_0045;
		}
	}
	{
		// viewConfiguration.IsEnabled = true;
		HolographicViewConfiguration_tE179E9B0B22770D34F8757D4314359560DC2CBCB * L_9 = V_0;
		NullCheck(L_9);
		HolographicViewConfiguration_put_IsEnabled_mD1763BD67038C5B79F0B8E0C7AE210286203A62E(L_9, (bool)1, /*hidden argument*/NULL);
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::InitializeReprojectionUpdater()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityCameraSettings_InitializeReprojectionUpdater_m0B4B168EDC7C308BB93694510BF65EA87D89AE9C (BaseWindowsMixedRealityCameraSettings_tA5B8622CC64E1B447C12B83A20AF7B3D5D95D385 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseWindowsMixedRealityCameraSettings_InitializeReprojectionUpdater_m0B4B168EDC7C308BB93694510BF65EA87D89AE9C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (reprojectionUpdater == null && Profile != null)
		WindowsMixedRealityReprojectionUpdater_t9C1F363D0E755B6A4C8F84CF10D09CC3A1479F43 * L_0 = __this->get_reprojectionUpdater_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0042;
		}
	}
	{
		WindowsMixedRealityCameraSettingsProfile_t315EAD84CE3FB831C6072D7AB2E3E0FDC7AD352C * L_2 = BaseWindowsMixedRealityCameraSettings_get_Profile_mCFB437B6754A2F8925916A6BAD837EF10F7306C5(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0042;
		}
	}
	{
		// reprojectionUpdater = CameraCache.Main.EnsureComponent<WindowsMixedRealityReprojectionUpdater>();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_4 = CameraCache_get_Main_mE989C7A267DEEBFA4B04569521133A2D566B7D5B(/*hidden argument*/NULL);
		WindowsMixedRealityReprojectionUpdater_t9C1F363D0E755B6A4C8F84CF10D09CC3A1479F43 * L_5 = ComponentExtensions_EnsureComponent_TisWindowsMixedRealityReprojectionUpdater_t9C1F363D0E755B6A4C8F84CF10D09CC3A1479F43_m02601E5017D9CCAE00B8A881FE6A9E70FF4DB98B(L_4, /*hidden argument*/ComponentExtensions_EnsureComponent_TisWindowsMixedRealityReprojectionUpdater_t9C1F363D0E755B6A4C8F84CF10D09CC3A1479F43_m02601E5017D9CCAE00B8A881FE6A9E70FF4DB98B_RuntimeMethod_var);
		__this->set_reprojectionUpdater_9(L_5);
		// reprojectionUpdater.ReprojectionMethod = Profile.ReprojectionMethod;
		WindowsMixedRealityReprojectionUpdater_t9C1F363D0E755B6A4C8F84CF10D09CC3A1479F43 * L_6 = __this->get_reprojectionUpdater_9();
		WindowsMixedRealityCameraSettingsProfile_t315EAD84CE3FB831C6072D7AB2E3E0FDC7AD352C * L_7 = BaseWindowsMixedRealityCameraSettings_get_Profile_mCFB437B6754A2F8925916A6BAD837EF10F7306C5(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		int32_t L_8 = WindowsMixedRealityCameraSettingsProfile_get_ReprojectionMethod_m073CF98355DAFFEF2E79C254BA62275B5CB1CE91_inline(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		WindowsMixedRealityReprojectionUpdater_set_ReprojectionMethod_mA2279B18F4202E9C343CFC0B5E0A91201ADE46B1_inline(L_6, L_8, /*hidden argument*/NULL);
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::UninitializeReprojectionUpdater()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityCameraSettings_UninitializeReprojectionUpdater_mA42E10F78C2B637F6548ED1C853B53DD48E8C438 (BaseWindowsMixedRealityCameraSettings_tA5B8622CC64E1B447C12B83A20AF7B3D5D95D385 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseWindowsMixedRealityCameraSettings_UninitializeReprojectionUpdater_mA42E10F78C2B637F6548ED1C853B53DD48E8C438_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (reprojectionUpdater != null)
		WindowsMixedRealityReprojectionUpdater_t9C1F363D0E755B6A4C8F84CF10D09CC3A1479F43 * L_0 = __this->get_reprojectionUpdater_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// UnityObjectExtensions.DestroyObject(reprojectionUpdater);
		WindowsMixedRealityReprojectionUpdater_t9C1F363D0E755B6A4C8F84CF10D09CC3A1479F43 * L_2 = __this->get_reprojectionUpdater_9();
		UnityObjectExtensions_DestroyObject_m63D9011D67521DCFC4F77C118FB65B7180F34F73(L_2, (0.0f), /*hidden argument*/NULL);
		// reprojectionUpdater = null;
		__this->set_reprojectionUpdater_9((WindowsMixedRealityReprojectionUpdater_t9C1F363D0E755B6A4C8F84CF10D09CC3A1479F43 *)NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityCameraSettings__cctor_mABDE7A2EB81DB69B86FEEBC6ED5F6E6B403C0D72 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseWindowsMixedRealityCameraSettings__cctor_mABDE7A2EB81DB69B86FEEBC6ED5F6E6B403C0D72_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly bool isTryGetViewConfigurationSupported = ApiInformation.IsMethodPresent("Windows.Graphics.Holographic.HolographicDisplay", "TryGetViewConfiguration");
		bool L_0 = ApiInformation_IsMethodPresent_mD2C37413DF214462F37AEBB5196C4C799A6F5B7B(_stringLiteral1D666B4EA1FB937539CA8FC0DD4AB92B572E4AD9, _stringLiteralFAEE63AB5907DDB2FFDA6A074F7B5BF1561A4A42, /*hidden argument*/NULL);
		((BaseWindowsMixedRealityCameraSettings_tA5B8622CC64E1B447C12B83A20AF7B3D5D95D385_StaticFields*)il2cpp_codegen_static_fields_for(BaseWindowsMixedRealityCameraSettings_tA5B8622CC64E1B447C12B83A20AF7B3D5D95D385_il2cpp_TypeInfo_var))->set_isTryGetViewConfigurationSupported_8(L_0);
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
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsExtensions::ToMRTKHandedness(Windows.UI.Input.Spatial.SpatialInteractionSourceHandedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t WindowsExtensions_ToMRTKHandedness_m752D876F506A255CA2071B3906CEDCDFAE65093E (int32_t ___handedness0, const RuntimeMethod* method)
{
	{
		// switch (handedness)
		int32_t L_0 = ___handedness0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0018;
			}
			case 1:
			{
				goto IL_0014;
			}
			case 2:
			{
				goto IL_0016;
			}
		}
	}
	{
		goto IL_0018;
	}

IL_0014:
	{
		// return Handedness.Left;
		return (uint8_t)(1);
	}

IL_0016:
	{
		// return Handedness.Right;
		return (uint8_t)(2);
	}

IL_0018:
	{
		// return Handedness.None;
		return (uint8_t)(0);
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
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityArticulatedHandDefinition__ctor_m27217E041175A7ECB8A76A18A529FD3C6E058608 (WindowsMixedRealityArticulatedHandDefinition_t6767A4BDFA6A972CE918EDC477B279BF2637FAA7 * __this, RuntimeObject* ___source0, uint8_t ___handedness1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityArticulatedHandDefinition__ctor_m27217E041175A7ECB8A76A18A529FD3C6E058608_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly float cursorBeamBackwardTolerance = 0.5f;
		__this->set_cursorBeamBackwardTolerance_2((0.5f));
		// private readonly float cursorBeamUpTolerance = 0.8f;
		__this->set_cursorBeamUpTolerance_3((0.800000012f));
		// private Dictionary<TrackedHandJoint, MixedRealityPose> unityJointPoses = new Dictionary<TrackedHandJoint, MixedRealityPose>();
		Dictionary_2_t2608D8F85D3104F212EC3BC05E54C1515108B68E * L_0 = (Dictionary_2_t2608D8F85D3104F212EC3BC05E54C1515108B68E *)il2cpp_codegen_object_new(Dictionary_2_t2608D8F85D3104F212EC3BC05E54C1515108B68E_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m98FA9A5E83858B1899CF3494493ACF76DE701543(L_0, /*hidden argument*/Dictionary_2__ctor_m98FA9A5E83858B1899CF3494493ACF76DE701543_RuntimeMethod_var);
		__this->set_unityJointPoses_4(L_0);
		// private MixedRealityPose currentIndexPose = MixedRealityPose.ZeroIdentity;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5_il2cpp_TypeInfo_var);
		MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  L_1 = MixedRealityPose_get_ZeroIdentity_m7DFFCF17695B53E77ABCC4035C292C405996350E_inline(/*hidden argument*/NULL);
		__this->set_currentIndexPose_5(L_1);
		// public WindowsMixedRealityArticulatedHandDefinition(IMixedRealityInputSource source, Handedness handedness)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// inputSource = source;
		RuntimeObject* L_2 = ___source0;
		__this->set_inputSource_0(L_2);
		// this.handedness = handedness;
		uint8_t L_3 = ___handedness1;
		__this->set_handedness_1(L_3);
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::get_DefaultInteractions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityInteractionMappingU5BU5D_t58ABFE60A3BBA3990FE46287C816977BE5B4567D* WindowsMixedRealityArticulatedHandDefinition_get_DefaultInteractions_m1161C8DC4F88A9296EB87E390D8121C83D50BB5A (WindowsMixedRealityArticulatedHandDefinition_t6767A4BDFA6A972CE918EDC477B279BF2637FAA7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityArticulatedHandDefinition_get_DefaultInteractions_m1161C8DC4F88A9296EB87E390D8121C83D50BB5A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MixedRealityInteractionMapping[] DefaultInteractions => new[]
		// {
		//     new MixedRealityInteractionMapping(0, "Spatial Pointer", AxisType.SixDof, DeviceInputType.SpatialPointer),
		//     new MixedRealityInteractionMapping(1, "Spatial Grip", AxisType.SixDof, DeviceInputType.SpatialGrip),
		//     new MixedRealityInteractionMapping(2, "Select", AxisType.Digital, DeviceInputType.Select),
		//     new MixedRealityInteractionMapping(3, "Grab", AxisType.SingleAxis, DeviceInputType.TriggerPress),
		//     new MixedRealityInteractionMapping(4, "Index Finger Pose", AxisType.SixDof, DeviceInputType.IndexFinger)
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
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::get_IsInPointingPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMixedRealityArticulatedHandDefinition_get_IsInPointingPose_m0AEE4E2D04A9D34779B3C9C4444F9253F5F4DB24 (WindowsMixedRealityArticulatedHandDefinition_t6767A4BDFA6A972CE918EDC477B279BF2637FAA7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityArticulatedHandDefinition_get_IsInPointingPose_m0AEE4E2D04A9D34779B3C9C4444F9253F5F4DB24_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (unityJointPoses.TryGetValue(TrackedHandJoint.Palm, out palmJoint))
		Dictionary_2_t2608D8F85D3104F212EC3BC05E54C1515108B68E * L_0 = __this->get_unityJointPoses_4();
		NullCheck(L_0);
		bool L_1 = Dictionary_2_TryGetValue_m68CBDA00749C9C3E905574F6A9F8A0D17BB0D04D(L_0, 2, (MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5 *)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m68CBDA00749C9C3E905574F6A9F8A0D17BB0D04D_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0087;
		}
	}
	{
		// Vector3 palmNormal = palmJoint.Rotation * (-1 * Vector3.up);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_2 = MixedRealityPose_get_Rotation_mA4D1C5FACB636919D31001E69C5062E94B6B9E45_inline((MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5 *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline((-1.0f), L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_2, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		// if (cursorBeamBackwardTolerance >= 0)
		float L_6 = __this->get_cursorBeamBackwardTolerance_2();
		if ((!(((float)L_6) >= ((float)(0.0f)))))
		{
			goto IL_0065;
		}
	}
	{
		// Vector3 cameraBackward = -CameraCache.Main.transform.forward;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_7 = CameraCache_get_Main_mE989C7A267DEEBFA4B04569521133A2D566B7D5B(/*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		// if (Vector3.Dot(palmNormal.normalized, cameraBackward) > cursorBeamBackwardTolerance)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = V_2;
		float L_13 = Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline(L_11, L_12, /*hidden argument*/NULL);
		float L_14 = __this->get_cursorBeamBackwardTolerance_2();
		if ((!(((float)L_13) > ((float)L_14))))
		{
			goto IL_0065;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0065:
	{
		// if (cursorBeamUpTolerance >= 0)
		float L_15 = __this->get_cursorBeamUpTolerance_3();
		if ((!(((float)L_15) >= ((float)(0.0f)))))
		{
			goto IL_0087;
		}
	}
	{
		// if (Vector3.Dot(palmNormal, Vector3.up) > cursorBeamUpTolerance)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		float L_18 = Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline(L_16, L_17, /*hidden argument*/NULL);
		float L_19 = __this->get_cursorBeamUpTolerance_3();
		if ((!(((float)L_18) > ((float)L_19))))
		{
			goto IL_0087;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0087:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::UpdateHandJoints(System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityArticulatedHandDefinition_UpdateHandJoints_m65869BA9A2083EBD5D4B8E5AEA903ABCF0DA0148 (WindowsMixedRealityArticulatedHandDefinition_t6767A4BDFA6A972CE918EDC477B279BF2637FAA7 * __this, Dictionary_2_t2608D8F85D3104F212EC3BC05E54C1515108B68E * ___jointPoses0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityArticulatedHandDefinition_UpdateHandJoints_m65869BA9A2083EBD5D4B8E5AEA903ABCF0DA0148_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// unityJointPoses = jointPoses;
		Dictionary_2_t2608D8F85D3104F212EC3BC05E54C1515108B68E * L_0 = ___jointPoses0;
		__this->set_unityJointPoses_4(L_0);
		// CoreServices.InputSystem?.RaiseHandJointsUpdated(inputSource, handedness, unityJointPoses);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tDB76F6146407FDEA9A4479E5553ED32DC19AADBD_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = CoreServices_get_InputSystem_m734103F090144FE710940E31C6B3581D15572FB0(/*hidden argument*/NULL);
		RuntimeObject* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		RuntimeObject* L_3 = __this->get_inputSource_0();
		uint8_t L_4 = __this->get_handedness_1();
		Dictionary_2_t2608D8F85D3104F212EC3BC05E54C1515108B68E * L_5 = __this->get_unityJointPoses_4();
		NullCheck(G_B2_0);
		InterfaceActionInvoker3< RuntimeObject*, uint8_t, RuntimeObject* >::Invoke(62 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseHandJointsUpdated(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,System.Collections.Generic.IDictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>) */, IMixedRealityInputSystem_t64ABD77097BAD8C4A1194C39BFFD4E6F6CBF55B1_il2cpp_TypeInfo_var, G_B2_0, L_3, L_4, L_5);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::UpdateCurrentIndexPose(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityArticulatedHandDefinition_UpdateCurrentIndexPose_m1C9B64A926647675FAC4FEBFB053FCB2CEB18E8B (WindowsMixedRealityArticulatedHandDefinition_t6767A4BDFA6A972CE918EDC477B279BF2637FAA7 * __this, MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 * ___interactionMapping0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityArticulatedHandDefinition_UpdateCurrentIndexPose_m1C9B64A926647675FAC4FEBFB053FCB2CEB18E8B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B4_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		// if (unityJointPoses.TryGetValue(TrackedHandJoint.IndexTip, out currentIndexPose))
		Dictionary_2_t2608D8F85D3104F212EC3BC05E54C1515108B68E * L_0 = __this->get_unityJointPoses_4();
		MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5 * L_1 = __this->get_address_of_currentIndexPose_5();
		NullCheck(L_0);
		bool L_2 = Dictionary_2_TryGetValue_m68CBDA00749C9C3E905574F6A9F8A0D17BB0D04D(L_0, ((int32_t)11), (MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5 *)L_1, /*hidden argument*/Dictionary_2_TryGetValue_m68CBDA00749C9C3E905574F6A9F8A0D17BB0D04D_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		// interactionMapping.PoseData = currentIndexPose;
		MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 * L_3 = ___interactionMapping0;
		MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  L_4 = __this->get_currentIndexPose_5();
		NullCheck(L_3);
		MixedRealityInteractionMapping_set_PoseData_mAE3A962D306D4CCA9228111491E8AA96D523F44D(L_3, L_4, /*hidden argument*/NULL);
		// if (interactionMapping.Changed)
		MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 * L_5 = ___interactionMapping0;
		NullCheck(L_5);
		bool L_6 = MixedRealityInteractionMapping_get_Changed_mFDC721362095F9525C839C0BA20EF8B9A55A37EC(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0050;
		}
	}
	{
		// CoreServices.InputSystem?.RaisePoseInputChanged(inputSource, handedness, interactionMapping.MixedRealityInputAction, currentIndexPose);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tDB76F6146407FDEA9A4479E5553ED32DC19AADBD_il2cpp_TypeInfo_var);
		RuntimeObject* L_7 = CoreServices_get_InputSystem_m734103F090144FE710940E31C6B3581D15572FB0(/*hidden argument*/NULL);
		RuntimeObject* L_8 = L_7;
		G_B3_0 = L_8;
		if (L_8)
		{
			G_B4_0 = L_8;
			goto IL_0033;
		}
	}
	{
		return;
	}

IL_0033:
	{
		RuntimeObject* L_9 = __this->get_inputSource_0();
		uint8_t L_10 = __this->get_handedness_1();
		MixedRealityInteractionMapping_tE66D4F70B6726B2DAB9CD4A3CF9D58E9FDB77BF0 * L_11 = ___interactionMapping0;
		NullCheck(L_11);
		MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  L_12 = MixedRealityInteractionMapping_get_MixedRealityInputAction_mB9F6AA03D64CE6F746424699CD1F4993446CE41A_inline(L_11, /*hidden argument*/NULL);
		MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  L_13 = __this->get_currentIndexPose_5();
		NullCheck(G_B4_0);
		InterfaceActionInvoker4< RuntimeObject*, uint8_t, MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35 , MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  >::Invoke(44 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaisePoseInputChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose) */, IMixedRealityInputSystem_t64ABD77097BAD8C4A1194C39BFFD4E6F6CBF55B1_il2cpp_TypeInfo_var, G_B4_0, L_9, L_10, L_12, L_13);
	}

IL_0050:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::SetHandMeshObserver(Windows.UI.Input.Spatial.SpatialInteractionSourceState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityArticulatedHandDefinition_SetHandMeshObserver_m59B3A0D70CCF32FCC9FA81FBB03424B4E071FB38 (WindowsMixedRealityArticulatedHandDefinition_t6767A4BDFA6A972CE918EDC477B279BF2637FAA7 * __this, SpatialInteractionSourceState_t6E721C100623C9060174FE6F6FBAC61D17FDF199 * ___sourceState0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityArticulatedHandDefinition_SetHandMeshObserver_m59B3A0D70CCF32FCC9FA81FBB03424B4E071FB38_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CSetHandMeshObserverU3Ed__17_tB6D9B203D85335F7DCEEF262F084016559A10517  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_3(__this);
		SpatialInteractionSourceState_t6E721C100623C9060174FE6F6FBAC61D17FDF199 * L_0 = ___sourceState0;
		(&V_0)->set_sourceState_2(L_0);
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_1 = AsyncVoidMethodBuilder_Create_m878314259623CC47A2EBAEEF2F8E8D6B61560FA5(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_1);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CSetHandMeshObserverU3Ed__17_tB6D9B203D85335F7DCEEF262F084016559A10517  L_2 = V_0;
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_3 = L_2.get_U3CU3Et__builder_1();
		V_1 = L_3;
		AsyncVoidMethodBuilder_Start_TisU3CSetHandMeshObserverU3Ed__17_tB6D9B203D85335F7DCEEF262F084016559A10517_mAC7D8BF08D393DF453E3D589064ED4F619E5F530((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)(&V_1), (U3CSetHandMeshObserverU3Ed__17_tB6D9B203D85335F7DCEEF262F084016559A10517 *)(&V_0), /*hidden argument*/AsyncVoidMethodBuilder_Start_TisU3CSetHandMeshObserverU3Ed__17_tB6D9B203D85335F7DCEEF262F084016559A10517_mAC7D8BF08D393DF453E3D589064ED4F619E5F530_RuntimeMethod_var);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::InitializeUVs(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityArticulatedHandDefinition_InitializeUVs_mE6B9D144CAB9E821DEAF12E9BFF8C22EF158D6AA (WindowsMixedRealityArticulatedHandDefinition_t6767A4BDFA6A972CE918EDC477B279BF2637FAA7 * __this, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___neutralPoseVertices0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityArticulatedHandDefinition_InitializeUVs_mE6B9D144CAB9E821DEAF12E9BFF8C22EF158D6AA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// if (neutralPoseVertices.Length == 0)
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_0 = ___neutralPoseVertices0;
		NullCheck(L_0);
		if ((((RuntimeArray*)L_0)->max_length))
		{
			goto IL_000e;
		}
	}
	{
		// Debug.LogError("Loaded 0 verts for neutralPoseVertices");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralD51862061BEF6981AB4BE866F6A89BA4489E5DDC, /*hidden argument*/NULL);
	}

IL_000e:
	{
		// float minY = neutralPoseVertices[0].y;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_1 = ___neutralPoseVertices0;
		NullCheck(L_1);
		float L_2 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_y_3();
		V_0 = L_2;
		// float maxY = minY;
		float L_3 = V_0;
		V_1 = L_3;
		// for (int ix = 1; ix < neutralPoseVertices.Length; ix++)
		V_3 = 1;
		goto IL_0054;
	}

IL_0021:
	{
		// Vector3 p = neutralPoseVertices[ix];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_4 = ___neutralPoseVertices0;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_4 = L_7;
		// if (p.y < minY)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = V_4;
		float L_9 = L_8.get_y_3();
		float L_10 = V_0;
		if ((!(((float)L_9) < ((float)L_10))))
		{
			goto IL_003e;
		}
	}
	{
		// minY = p.y;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = V_4;
		float L_12 = L_11.get_y_3();
		V_0 = L_12;
		// }
		goto IL_0050;
	}

IL_003e:
	{
		// else if (p.y > maxY)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_4;
		float L_14 = L_13.get_y_3();
		float L_15 = V_1;
		if ((!(((float)L_14) > ((float)L_15))))
		{
			goto IL_0050;
		}
	}
	{
		// maxY = p.y;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = V_4;
		float L_17 = L_16.get_y_3();
		V_1 = L_17;
	}

IL_0050:
	{
		// for (int ix = 1; ix < neutralPoseVertices.Length; ix++)
		int32_t L_18 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0054:
	{
		// for (int ix = 1; ix < neutralPoseVertices.Length; ix++)
		int32_t L_19 = V_3;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_20 = ___neutralPoseVertices0;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))))
		{
			goto IL_0021;
		}
	}
	{
		// float scale = 1.0f / (maxY - minY);
		float L_21 = V_1;
		float L_22 = V_0;
		V_2 = ((float)((float)(1.0f)/(float)((float)il2cpp_codegen_subtract((float)L_21, (float)L_22))));
		// handMeshUVs = new Vector2[neutralPoseVertices.Length];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_23 = ___neutralPoseVertices0;
		NullCheck(L_23);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_24 = (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)SZArrayNew(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))));
		__this->set_handMeshUVs_6(L_24);
		// for (int ix = 0; ix < neutralPoseVertices.Length; ix++)
		V_5 = 0;
		goto IL_00b3;
	}

IL_0077:
	{
		// Vector3 p = neutralPoseVertices[ix];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_25 = ___neutralPoseVertices0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_6 = L_28;
		// handMeshUVs[ix] = new Vector2(p.x * scale + 0.5f, (p.y - minY) * scale);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_29 = __this->get_handMeshUVs_6();
		int32_t L_30 = V_5;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31 = V_6;
		float L_32 = L_31.get_x_2();
		float L_33 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34 = V_6;
		float L_35 = L_34.get_y_3();
		float L_36 = V_0;
		float L_37 = V_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_38;
		memset((&L_38), 0, sizeof(L_38));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_38), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_32, (float)L_33)), (float)(0.5f))), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_35, (float)L_36)), (float)L_37)), /*hidden argument*/NULL);
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_30), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_38);
		// for (int ix = 0; ix < neutralPoseVertices.Length; ix++)
		int32_t L_39 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
	}

IL_00b3:
	{
		// for (int ix = 0; ix < neutralPoseVertices.Length; ix++)
		int32_t L_40 = V_5;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_41 = ___neutralPoseVertices0;
		NullCheck(L_41);
		if ((((int32_t)L_40) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length)))))))
		{
			goto IL_0077;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::UpdateHandMesh(Windows.UI.Input.Spatial.SpatialInteractionSourceState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityArticulatedHandDefinition_UpdateHandMesh_mA70F3137D39795B62D71D1831433938E9EBC4228 (WindowsMixedRealityArticulatedHandDefinition_t6767A4BDFA6A972CE918EDC477B279BF2637FAA7 * __this, SpatialInteractionSourceState_t6E721C100623C9060174FE6F6FBAC61D17FDF199 * ___sourceState0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityArticulatedHandDefinition_UpdateHandMesh_mA70F3137D39795B62D71D1831433938E9EBC4228_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityHandTrackingProfile_tDADC6D5367650C672DB618EED78274B7C1720AF0 * V_0 = NULL;
	MixedRealityInputSystemProfile_t6086D1D813224695CFB52FA000EDC2A6B6125255 * V_1 = NULL;
	HandPose_tA80E49BEA85A49A6594EC7FF8E1470F10978A0AE * V_2 = NULL;
	HandMeshInfo_t2149B356EA6B50B1E60C46E30EF537D6D8E78566 * V_3 = NULL;
	uint32_t V_4 = 0;
	UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* V_5 = NULL;
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* V_6 = NULL;
	HandPose_tA80E49BEA85A49A6594EC7FF8E1470F10978A0AE * V_7 = NULL;
	HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1* V_8 = NULL;
	int32_t V_9 = 0;
	HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1* V_10 = NULL;
	Nullable_1_t9FF3BE791A3B4350B3DE3D72C440E11029540DD8  V_11;
	memset((&V_11), 0, sizeof(V_11));
	Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  V_12;
	memset((&V_12), 0, sizeof(V_12));
	Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C  V_13;
	memset((&V_13), 0, sizeof(V_13));
	Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  V_14;
	memset((&V_14), 0, sizeof(V_14));
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* V_15 = NULL;
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* V_16 = NULL;
	HandMeshInfo_t2149B356EA6B50B1E60C46E30EF537D6D8E78566 * V_17 = NULL;
	int32_t V_18 = 0;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	MixedRealityInputSystemProfile_t6086D1D813224695CFB52FA000EDC2A6B6125255 * G_B3_0 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	RuntimeObject* G_B31_0 = NULL;
	RuntimeObject* G_B30_0 = NULL;
	{
		// MixedRealityHandTrackingProfile handTrackingProfile = null;
		V_0 = (MixedRealityHandTrackingProfile_tDADC6D5367650C672DB618EED78274B7C1720AF0 *)NULL;
		// MixedRealityInputSystemProfile inputSystemProfile = CoreServices.InputSystem?.InputSystemProfile;
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tDB76F6146407FDEA9A4479E5553ED32DC19AADBD_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = CoreServices_get_InputSystem_m734103F090144FE710940E31C6B3581D15572FB0(/*hidden argument*/NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000e;
		}
	}
	{
		G_B3_0 = ((MixedRealityInputSystemProfile_t6086D1D813224695CFB52FA000EDC2A6B6125255 *)(NULL));
		goto IL_0013;
	}

IL_000e:
	{
		NullCheck(G_B2_0);
		MixedRealityInputSystemProfile_t6086D1D813224695CFB52FA000EDC2A6B6125255 * L_2 = InterfaceFuncInvoker0< MixedRealityInputSystemProfile_t6086D1D813224695CFB52FA000EDC2A6B6125255 * >::Invoke(6 /* Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::get_InputSystemProfile() */, IMixedRealityInputSystem_t64ABD77097BAD8C4A1194C39BFFD4E6F6CBF55B1_il2cpp_TypeInfo_var, G_B2_0);
		G_B3_0 = L_2;
	}

IL_0013:
	{
		V_1 = G_B3_0;
		// if (inputSystemProfile != null)
		MixedRealityInputSystemProfile_t6086D1D813224695CFB52FA000EDC2A6B6125255 * L_3 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		// handTrackingProfile = inputSystemProfile.HandTrackingProfile;
		MixedRealityInputSystemProfile_t6086D1D813224695CFB52FA000EDC2A6B6125255 * L_5 = V_1;
		NullCheck(L_5);
		MixedRealityHandTrackingProfile_tDADC6D5367650C672DB618EED78274B7C1720AF0 * L_6 = MixedRealityInputSystemProfile_get_HandTrackingProfile_m0E906F33FA6FC6D91ED150C13D289B2A66EAD9C5_inline(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
	}

IL_0024:
	{
		// if (handTrackingProfile == null || !handTrackingProfile.EnableHandMeshVisualization)
		MixedRealityHandTrackingProfile_tDADC6D5367650C672DB618EED78274B7C1720AF0 * L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_7, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0035;
		}
	}
	{
		MixedRealityHandTrackingProfile_tDADC6D5367650C672DB618EED78274B7C1720AF0 * L_9 = V_0;
		NullCheck(L_9);
		bool L_10 = MixedRealityHandTrackingProfile_get_EnableHandMeshVisualization_m5C7E7F8959081B8360EAF1A1CE95667680485D17(L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_006f;
		}
	}

IL_0035:
	{
		// if (handMeshObserver != null)
		HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * L_11 = __this->get_handMeshObserver_7();
		if (!L_11)
		{
			goto IL_006e;
		}
	}
	{
		// HandMeshInfo handMeshInfo = new HandMeshInfo();
		HandMeshInfo_t2149B356EA6B50B1E60C46E30EF537D6D8E78566 * L_12 = (HandMeshInfo_t2149B356EA6B50B1E60C46E30EF537D6D8E78566 *)il2cpp_codegen_object_new(HandMeshInfo_t2149B356EA6B50B1E60C46E30EF537D6D8E78566_il2cpp_TypeInfo_var);
		HandMeshInfo__ctor_m49CB34A7FBF92CDAAF537248F55F2CEB3FD02DBB(L_12, /*hidden argument*/NULL);
		V_3 = L_12;
		// CoreServices.InputSystem?.RaiseHandMeshUpdated(inputSource, handedness, handMeshInfo);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tDB76F6146407FDEA9A4479E5553ED32DC19AADBD_il2cpp_TypeInfo_var);
		RuntimeObject* L_13 = CoreServices_get_InputSystem_m734103F090144FE710940E31C6B3581D15572FB0(/*hidden argument*/NULL);
		RuntimeObject* L_14 = L_13;
		G_B9_0 = L_14;
		if (L_14)
		{
			G_B10_0 = L_14;
			goto IL_004e;
		}
	}
	{
		goto IL_0060;
	}

IL_004e:
	{
		RuntimeObject* L_15 = __this->get_inputSource_0();
		uint8_t L_16 = __this->get_handedness_1();
		HandMeshInfo_t2149B356EA6B50B1E60C46E30EF537D6D8E78566 * L_17 = V_3;
		NullCheck(G_B10_0);
		InterfaceActionInvoker3< RuntimeObject*, uint8_t, HandMeshInfo_t2149B356EA6B50B1E60C46E30EF537D6D8E78566 * >::Invoke(63 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseHandMeshUpdated(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.HandMeshInfo) */, IMixedRealityInputSystem_t64ABD77097BAD8C4A1194C39BFFD4E6F6CBF55B1_il2cpp_TypeInfo_var, G_B10_0, L_15, L_16, L_17);
	}

IL_0060:
	{
		// hasRequestedHandMeshObserver = false;
		__this->set_hasRequestedHandMeshObserver_9((bool)0);
		// handMeshObserver = null;
		__this->set_handMeshObserver_7((HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 *)NULL);
	}

IL_006e:
	{
		// return;
		return;
	}

IL_006f:
	{
		// HandPose handPose = sourceState.TryGetHandPose();
		SpatialInteractionSourceState_t6E721C100623C9060174FE6F6FBAC61D17FDF199 * L_18 = ___sourceState0;
		NullCheck(L_18);
		HandPose_tA80E49BEA85A49A6594EC7FF8E1470F10978A0AE * L_19 = SpatialInteractionSourceState_TryGetHandPose_m9B623E31B753FD11674C848601622016AF260110(L_18, /*hidden argument*/NULL);
		V_2 = L_19;
		// if (handMeshObserver == null && !hasRequestedHandMeshObserver)
		HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * L_20 = __this->get_handMeshObserver_7();
		if (L_20)
		{
			goto IL_0094;
		}
	}
	{
		bool L_21 = __this->get_hasRequestedHandMeshObserver_9();
		if (L_21)
		{
			goto IL_0094;
		}
	}
	{
		// SetHandMeshObserver(sourceState);
		SpatialInteractionSourceState_t6E721C100623C9060174FE6F6FBAC61D17FDF199 * L_22 = ___sourceState0;
		WindowsMixedRealityArticulatedHandDefinition_SetHandMeshObserver_m59B3A0D70CCF32FCC9FA81FBB03424B4E071FB38(__this, L_22, /*hidden argument*/NULL);
		// hasRequestedHandMeshObserver = true;
		__this->set_hasRequestedHandMeshObserver_9((bool)1);
	}

IL_0094:
	{
		// if (handMeshObserver != null && handMeshTriangleIndices == null)
		HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * L_23 = __this->get_handMeshObserver_7();
		if (!L_23)
		{
			goto IL_0177;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_24 = __this->get_handMeshTriangleIndices_8();
		if (L_24)
		{
			goto IL_0177;
		}
	}
	{
		// uint indexCount = handMeshObserver.TriangleIndexCount;
		HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * L_25 = __this->get_handMeshObserver_7();
		NullCheck(L_25);
		uint32_t L_26 = HandMeshObserver_get_TriangleIndexCount_mFF115FBB6E545038C1BD1420DF2873C5172D54FA(L_25, /*hidden argument*/NULL);
		V_4 = L_26;
		// ushort[] indices = new ushort[indexCount];
		uint32_t L_27 = V_4;
		UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* L_28 = (UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67*)(UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67*)SZArrayNew(UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67_il2cpp_TypeInfo_var, (uint32_t)L_27);
		V_5 = L_28;
		// handMeshObserver.GetTriangleIndices(indices);
		HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * L_29 = __this->get_handMeshObserver_7();
		UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* L_30 = V_5;
		NullCheck(L_29);
		HandMeshObserver_GetTriangleIndices_m822E18BFBC457E8CDFF9DF03D0316DE316631424(L_29, L_30, /*hidden argument*/NULL);
		// handMeshTriangleIndices = new int[indexCount];
		uint32_t L_31 = V_4;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_32 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_31);
		__this->set_handMeshTriangleIndices_8(L_32);
		// Array.Copy(indices, handMeshTriangleIndices, (int)handMeshObserver.TriangleIndexCount);
		UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* L_33 = V_5;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_34 = __this->get_handMeshTriangleIndices_8();
		HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * L_35 = __this->get_handMeshObserver_7();
		NullCheck(L_35);
		uint32_t L_36 = HandMeshObserver_get_TriangleIndexCount_mFF115FBB6E545038C1BD1420DF2873C5172D54FA(L_35, /*hidden argument*/NULL);
		Array_Copy_m40103AA97DC582C557B912CF4BBE86A4D166F803((RuntimeArray *)(RuntimeArray *)L_33, (RuntimeArray *)(RuntimeArray *)L_34, L_36, /*hidden argument*/NULL);
		// Vector3[] neutralPoseVertices = new Vector3[handMeshObserver.VertexCount];
		HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * L_37 = __this->get_handMeshObserver_7();
		NullCheck(L_37);
		uint32_t L_38 = HandMeshObserver_get_VertexCount_mF44DDE4B9A043F460CE7C8F9DA46C4B7FB0E82B6(L_37, /*hidden argument*/NULL);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_39 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)L_38);
		V_6 = L_39;
		// HandPose neutralPose = handMeshObserver.NeutralPose;
		HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * L_40 = __this->get_handMeshObserver_7();
		NullCheck(L_40);
		HandPose_tA80E49BEA85A49A6594EC7FF8E1470F10978A0AE * L_41 = HandMeshObserver_get_NeutralPose_m5E28EB4B46D13DFD8E3556DCCC387C44D06BD9F9(L_40, /*hidden argument*/NULL);
		V_7 = L_41;
		// var vertexAndNormals = new HandMeshVertex[handMeshObserver.VertexCount];
		HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * L_42 = __this->get_handMeshObserver_7();
		NullCheck(L_42);
		uint32_t L_43 = HandMeshObserver_get_VertexCount_mF44DDE4B9A043F460CE7C8F9DA46C4B7FB0E82B6(L_42, /*hidden argument*/NULL);
		HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1* L_44 = (HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1*)(HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1*)SZArrayNew(HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1_il2cpp_TypeInfo_var, (uint32_t)L_43);
		V_8 = L_44;
		// HandMeshVertexState handMeshVertexState = handMeshObserver.GetVertexStateForPose(neutralPose);
		HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * L_45 = __this->get_handMeshObserver_7();
		HandPose_tA80E49BEA85A49A6594EC7FF8E1470F10978A0AE * L_46 = V_7;
		NullCheck(L_45);
		HandMeshVertexState_t472D7CF8982D6D93200D405B7F990404C022A9F8 * L_47 = HandMeshObserver_GetVertexStateForPose_m15A85E28A95DD93A7CEEB07C98A9240A7EED5B38(L_45, L_46, /*hidden argument*/NULL);
		// handMeshVertexState.GetVertices(vertexAndNormals);
		HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1* L_48 = V_8;
		NullCheck(L_47);
		HandMeshVertexState_GetVertices_mF42AFC0B0A958259F449205CA0FED73239595CBF(L_47, L_48, /*hidden argument*/NULL);
		// for (int i = 0; i < handMeshObserver.VertexCount; i++)
		V_9 = 0;
		goto IL_015e;
	}

IL_013c:
	{
		// neutralPoseVertices[i] = vertexAndNormals[i].Position.ToUnityVector3();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_49 = V_6;
		int32_t L_50 = V_9;
		HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1* L_51 = V_8;
		int32_t L_52 = V_9;
		NullCheck(L_51);
		Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->get_Position_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_54 = SystemNumericsExtensions_ToUnityVector3_mFB97FBEA6DF5B1E921C4C61B716D40F5A022233B(L_53, /*hidden argument*/NULL);
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(L_50), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_54);
		// for (int i = 0; i < handMeshObserver.VertexCount; i++)
		int32_t L_55 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)1));
	}

IL_015e:
	{
		// for (int i = 0; i < handMeshObserver.VertexCount; i++)
		int32_t L_56 = V_9;
		HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * L_57 = __this->get_handMeshObserver_7();
		NullCheck(L_57);
		uint32_t L_58 = HandMeshObserver_get_VertexCount_mF44DDE4B9A043F460CE7C8F9DA46C4B7FB0E82B6(L_57, /*hidden argument*/NULL);
		if ((((int64_t)(((int64_t)((int64_t)L_56)))) < ((int64_t)(((int64_t)((uint64_t)L_58))))))
		{
			goto IL_013c;
		}
	}
	{
		// InitializeUVs(neutralPoseVertices);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_59 = V_6;
		WindowsMixedRealityArticulatedHandDefinition_InitializeUVs_mE6B9D144CAB9E821DEAF12E9BFF8C22EF158D6AA(__this, L_59, /*hidden argument*/NULL);
	}

IL_0177:
	{
		// if (handPose != null && handMeshObserver != null && handMeshTriangleIndices != null)
		HandPose_tA80E49BEA85A49A6594EC7FF8E1470F10978A0AE * L_60 = V_2;
		if (!L_60)
		{
			goto IL_02c7;
		}
	}
	{
		HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * L_61 = __this->get_handMeshObserver_7();
		if (!L_61)
		{
			goto IL_02c7;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_62 = __this->get_handMeshTriangleIndices_8();
		if (!L_62)
		{
			goto IL_02c7;
		}
	}
	{
		// var vertexAndNormals = new HandMeshVertex[handMeshObserver.VertexCount];
		HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * L_63 = __this->get_handMeshObserver_7();
		NullCheck(L_63);
		uint32_t L_64 = HandMeshObserver_get_VertexCount_mF44DDE4B9A043F460CE7C8F9DA46C4B7FB0E82B6(L_63, /*hidden argument*/NULL);
		HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1* L_65 = (HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1*)(HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1*)SZArrayNew(HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1_il2cpp_TypeInfo_var, (uint32_t)L_64);
		V_10 = L_65;
		// var handMeshVertexState = handMeshObserver.GetVertexStateForPose(handPose);
		HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * L_66 = __this->get_handMeshObserver_7();
		HandPose_tA80E49BEA85A49A6594EC7FF8E1470F10978A0AE * L_67 = V_2;
		NullCheck(L_66);
		HandMeshVertexState_t472D7CF8982D6D93200D405B7F990404C022A9F8 * L_68 = HandMeshObserver_GetVertexStateForPose_m15A85E28A95DD93A7CEEB07C98A9240A7EED5B38(L_66, L_67, /*hidden argument*/NULL);
		// handMeshVertexState.GetVertices(vertexAndNormals);
		HandMeshVertexState_t472D7CF8982D6D93200D405B7F990404C022A9F8 * L_69 = L_68;
		HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1* L_70 = V_10;
		NullCheck(L_69);
		HandMeshVertexState_GetVertices_mF42AFC0B0A958259F449205CA0FED73239595CBF(L_69, L_70, /*hidden argument*/NULL);
		// var meshTransform = handMeshVertexState.CoordinateSystem.TryGetTransformTo(WindowsMixedRealityUtilities.SpatialCoordinateSystem);
		NullCheck(L_69);
		SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * L_71 = HandMeshVertexState_get_CoordinateSystem_m4AC199BB8E0D40D4C80AC8C446E0C565F979808A(L_69, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_t6E3AF6A539480B47E4F166D5E6EFBBF7CCB0E958_il2cpp_TypeInfo_var);
		SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * L_72 = WindowsMixedRealityUtilities_get_SpatialCoordinateSystem_m35FA29F240C4E318D10DFEA6914F39C8B5C2C98D(/*hidden argument*/NULL);
		NullCheck(L_71);
		Nullable_1_t9FF3BE791A3B4350B3DE3D72C440E11029540DD8  L_73 = SpatialCoordinateSystem_TryGetTransformTo_m9860B951AA3C929F3C1A39347C72EA838E5774FF(L_71, L_72, /*hidden argument*/NULL);
		V_11 = L_73;
		// if (meshTransform.HasValue)
		bool L_74 = Nullable_1_get_HasValue_m1C8741C73000BD525E6034625DD1ED12EB07EA10_inline((Nullable_1_t9FF3BE791A3B4350B3DE3D72C440E11029540DD8 *)(&V_11), /*hidden argument*/Nullable_1_get_HasValue_m1C8741C73000BD525E6034625DD1ED12EB07EA10_RuntimeMethod_var);
		if (!L_74)
		{
			goto IL_02c7;
		}
	}
	{
		// System.Numerics.Matrix4x4.Decompose(meshTransform.Value, out scale, out rotation, out translation);
		Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  L_75 = Nullable_1_get_Value_m608A59322CEE9B305CE8472969742F446EA8318A((Nullable_1_t9FF3BE791A3B4350B3DE3D72C440E11029540DD8 *)(&V_11), /*hidden argument*/Nullable_1_get_Value_m608A59322CEE9B305CE8472969742F446EA8318A_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_il2cpp_TypeInfo_var);
		Matrix4x4_Decompose_mAEEBB02601928ECC39E5459CC1015C8FEE7D4754(L_75, (Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4 *)(&V_12), (Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C *)(&V_13), (Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4 *)(&V_14), /*hidden argument*/NULL);
		// var handMeshVertices = new Vector3[handMeshObserver.VertexCount];
		HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * L_76 = __this->get_handMeshObserver_7();
		NullCheck(L_76);
		uint32_t L_77 = HandMeshObserver_get_VertexCount_mF44DDE4B9A043F460CE7C8F9DA46C4B7FB0E82B6(L_76, /*hidden argument*/NULL);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_78 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)L_77);
		V_15 = L_78;
		// var handMeshNormals = new Vector3[handMeshObserver.VertexCount];
		HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * L_79 = __this->get_handMeshObserver_7();
		NullCheck(L_79);
		uint32_t L_80 = HandMeshObserver_get_VertexCount_mF44DDE4B9A043F460CE7C8F9DA46C4B7FB0E82B6(L_79, /*hidden argument*/NULL);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_81 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)L_80);
		V_16 = L_81;
		// for (int i = 0; i < handMeshObserver.VertexCount; i++)
		V_18 = 0;
		goto IL_0250;
	}

IL_0212:
	{
		// handMeshVertices[i] = vertexAndNormals[i].Position.ToUnityVector3();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_82 = V_15;
		int32_t L_83 = V_18;
		HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1* L_84 = V_10;
		int32_t L_85 = V_18;
		NullCheck(L_84);
		Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  L_86 = ((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)))->get_Position_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_87 = SystemNumericsExtensions_ToUnityVector3_mFB97FBEA6DF5B1E921C4C61B716D40F5A022233B(L_86, /*hidden argument*/NULL);
		NullCheck(L_82);
		(L_82)->SetAt(static_cast<il2cpp_array_size_t>(L_83), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_87);
		// handMeshNormals[i] = vertexAndNormals[i].Normal.ToUnityVector3();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_88 = V_16;
		int32_t L_89 = V_18;
		HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1* L_90 = V_10;
		int32_t L_91 = V_18;
		NullCheck(L_90);
		Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  L_92 = ((L_90)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_91)))->get_Normal_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_93 = SystemNumericsExtensions_ToUnityVector3_mFB97FBEA6DF5B1E921C4C61B716D40F5A022233B(L_92, /*hidden argument*/NULL);
		NullCheck(L_88);
		(L_88)->SetAt(static_cast<il2cpp_array_size_t>(L_89), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_93);
		// for (int i = 0; i < handMeshObserver.VertexCount; i++)
		int32_t L_94 = V_18;
		V_18 = ((int32_t)il2cpp_codegen_add((int32_t)L_94, (int32_t)1));
	}

IL_0250:
	{
		// for (int i = 0; i < handMeshObserver.VertexCount; i++)
		int32_t L_95 = V_18;
		HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * L_96 = __this->get_handMeshObserver_7();
		NullCheck(L_96);
		uint32_t L_97 = HandMeshObserver_get_VertexCount_mF44DDE4B9A043F460CE7C8F9DA46C4B7FB0E82B6(L_96, /*hidden argument*/NULL);
		if ((((int64_t)(((int64_t)((int64_t)L_95)))) < ((int64_t)(((int64_t)((uint64_t)L_97))))))
		{
			goto IL_0212;
		}
	}
	{
		// HandMeshInfo handMeshInfo = new HandMeshInfo
		// {
		//     vertices = handMeshVertices,
		//     normals = handMeshNormals,
		//     triangles = handMeshTriangleIndices,
		//     uvs = handMeshUVs,
		//     position = translation.ToUnityVector3(),
		//     rotation = rotation.ToUnityQuaternion()
		// };
		HandMeshInfo_t2149B356EA6B50B1E60C46E30EF537D6D8E78566 * L_98 = (HandMeshInfo_t2149B356EA6B50B1E60C46E30EF537D6D8E78566 *)il2cpp_codegen_object_new(HandMeshInfo_t2149B356EA6B50B1E60C46E30EF537D6D8E78566_il2cpp_TypeInfo_var);
		HandMeshInfo__ctor_m49CB34A7FBF92CDAAF537248F55F2CEB3FD02DBB(L_98, /*hidden argument*/NULL);
		HandMeshInfo_t2149B356EA6B50B1E60C46E30EF537D6D8E78566 * L_99 = L_98;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_100 = V_15;
		NullCheck(L_99);
		L_99->set_vertices_0(L_100);
		HandMeshInfo_t2149B356EA6B50B1E60C46E30EF537D6D8E78566 * L_101 = L_99;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_102 = V_16;
		NullCheck(L_101);
		L_101->set_normals_2(L_102);
		HandMeshInfo_t2149B356EA6B50B1E60C46E30EF537D6D8E78566 * L_103 = L_101;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_104 = __this->get_handMeshTriangleIndices_8();
		NullCheck(L_103);
		L_103->set_triangles_1(L_104);
		HandMeshInfo_t2149B356EA6B50B1E60C46E30EF537D6D8E78566 * L_105 = L_103;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_106 = __this->get_handMeshUVs_6();
		NullCheck(L_105);
		L_105->set_uvs_3(L_106);
		HandMeshInfo_t2149B356EA6B50B1E60C46E30EF537D6D8E78566 * L_107 = L_105;
		Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  L_108 = V_14;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_109 = SystemNumericsExtensions_ToUnityVector3_mFB97FBEA6DF5B1E921C4C61B716D40F5A022233B(L_108, /*hidden argument*/NULL);
		NullCheck(L_107);
		L_107->set_position_4(L_109);
		HandMeshInfo_t2149B356EA6B50B1E60C46E30EF537D6D8E78566 * L_110 = L_107;
		Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C  L_111 = V_13;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_112 = SystemNumericsExtensions_ToUnityQuaternion_m41F7D569D129AD05FAC5A599B70AC71A169477E2(L_111, /*hidden argument*/NULL);
		NullCheck(L_110);
		L_110->set_rotation_5(L_112);
		V_17 = L_110;
		// CoreServices.InputSystem?.RaiseHandMeshUpdated(inputSource, handedness, handMeshInfo);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tDB76F6146407FDEA9A4479E5553ED32DC19AADBD_il2cpp_TypeInfo_var);
		RuntimeObject* L_113 = CoreServices_get_InputSystem_m734103F090144FE710940E31C6B3581D15572FB0(/*hidden argument*/NULL);
		RuntimeObject* L_114 = L_113;
		G_B30_0 = L_114;
		if (L_114)
		{
			G_B31_0 = L_114;
			goto IL_02b4;
		}
	}
	{
		return;
	}

IL_02b4:
	{
		RuntimeObject* L_115 = __this->get_inputSource_0();
		uint8_t L_116 = __this->get_handedness_1();
		HandMeshInfo_t2149B356EA6B50B1E60C46E30EF537D6D8E78566 * L_117 = V_17;
		NullCheck(G_B31_0);
		InterfaceActionInvoker3< RuntimeObject*, uint8_t, HandMeshInfo_t2149B356EA6B50B1E60C46E30EF537D6D8E78566 * >::Invoke(63 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseHandMeshUpdated(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.HandMeshInfo) */, IMixedRealityInputSystem_t64ABD77097BAD8C4A1194C39BFFD4E6F6CBF55B1_il2cpp_TypeInfo_var, G_B31_0, L_115, L_116, L_117);
	}

IL_02c7:
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
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityCameraSettingsProfile::get_RenderFromPVCameraForMixedRealityCapture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMixedRealityCameraSettingsProfile_get_RenderFromPVCameraForMixedRealityCapture_mC18E446F2625A1459676CA7CE6482C87411D67AE (WindowsMixedRealityCameraSettingsProfile_t315EAD84CE3FB831C6072D7AB2E3E0FDC7AD352C * __this, const RuntimeMethod* method)
{
	{
		// public bool RenderFromPVCameraForMixedRealityCapture => renderFromPVCameraForMixedRealityCapture;
		bool L_0 = __this->get_renderFromPVCameraForMixedRealityCapture_5();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.HolographicDepthReprojectionMethod Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityCameraSettingsProfile::get_ReprojectionMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsMixedRealityCameraSettingsProfile_get_ReprojectionMethod_m073CF98355DAFFEF2E79C254BA62275B5CB1CE91 (WindowsMixedRealityCameraSettingsProfile_t315EAD84CE3FB831C6072D7AB2E3E0FDC7AD352C * __this, const RuntimeMethod* method)
{
	{
		// public HolographicDepthReprojectionMethod ReprojectionMethod => reprojectionMethod;
		int32_t L_0 = __this->get_reprojectionMethod_6();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityCameraSettingsProfile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityCameraSettingsProfile__ctor_m342B187C16A84AB9BDF6E8460520C8700A452ED9 (WindowsMixedRealityCameraSettingsProfile_t315EAD84CE3FB831C6072D7AB2E3E0FDC7AD352C * __this, const RuntimeMethod* method)
{
	{
		BaseCameraSettingsProfile__ctor_m4F3D7BB2B144F4E7B4678894B6AF34D71DE4F2AE(__this, /*hidden argument*/NULL);
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
// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::get_ReferenceJoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsMixedRealityHandRecorder_get_ReferenceJoint_mF47398E6FC9A6DFA528C0C5FCB259BF502BC5526 (WindowsMixedRealityHandRecorder_t238D464312EDB1A73A6442BD23B3D340CF4EA210 * __this, const RuntimeMethod* method)
{
	{
		// public TrackedHandJoint ReferenceJoint { get; set; } = TrackedHandJoint.IndexTip;
		int32_t L_0 = __this->get_U3CReferenceJointU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::set_ReferenceJoint(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityHandRecorder_set_ReferenceJoint_mF7B25B2B48A1C023F473854F7FFC3E4561ACD572 (WindowsMixedRealityHandRecorder_t238D464312EDB1A73A6442BD23B3D340CF4EA210 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public TrackedHandJoint ReferenceJoint { get; set; } = TrackedHandJoint.IndexTip;
		int32_t L_0 = ___value0;
		__this->set_U3CReferenceJointU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::get_OutputFileName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WindowsMixedRealityHandRecorder_get_OutputFileName_m00DA57FD16ED1A5A3184E38B854178A0FEF15D92 (WindowsMixedRealityHandRecorder_t238D464312EDB1A73A6442BD23B3D340CF4EA210 * __this, const RuntimeMethod* method)
{
	{
		// public string OutputFileName { get; } = "ArticulatedHandPose";
		String_t* L_0 = __this->get_U3COutputFileNameU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::RecordLeftHandStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityHandRecorder_RecordLeftHandStart_mCC20D89F763EB6743C8C6306722CAA4AC130928B (WindowsMixedRealityHandRecorder_t238D464312EDB1A73A6442BD23B3D340CF4EA210 * __this, const RuntimeMethod* method)
{
	{
		// RecordHandStart(Handedness.Left);
		WindowsMixedRealityHandRecorder_RecordHandStart_m37DBF5B1B3C473FBBF41E2206F2474F20AEFD0D3(__this, 1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::RecordRightHandStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityHandRecorder_RecordRightHandStart_m3994BC93AF9D0B743E8A79C8A35AF120AB8BECF8 (WindowsMixedRealityHandRecorder_t238D464312EDB1A73A6442BD23B3D340CF4EA210 * __this, const RuntimeMethod* method)
{
	{
		// RecordHandStart(Handedness.Right);
		WindowsMixedRealityHandRecorder_RecordHandStart_m37DBF5B1B3C473FBBF41E2206F2474F20AEFD0D3(__this, 2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::RecordHandStart(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityHandRecorder_RecordHandStart_m37DBF5B1B3C473FBBF41E2206F2474F20AEFD0D3 (WindowsMixedRealityHandRecorder_t238D464312EDB1A73A6442BD23B3D340CF4EA210 * __this, uint8_t ___handedness0, const RuntimeMethod* method)
{
	MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// HandJointUtils.TryGetJointPose(ReferenceJoint, handedness, out MixedRealityPose joint);
		int32_t L_0 = WindowsMixedRealityHandRecorder_get_ReferenceJoint_mF47398E6FC9A6DFA528C0C5FCB259BF502BC5526_inline(__this, /*hidden argument*/NULL);
		uint8_t L_1 = ___handedness0;
		HandJointUtils_TryGetJointPose_mE6010964EC9F98542BF0A0163111681A83C7BE15(L_0, L_1, (MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5 *)(&V_0), /*hidden argument*/NULL);
		// offset = joint.Position;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = MixedRealityPose_get_Position_mA85AA29A7C35C13E7DDDCF058D1CB4F0371F6A08_inline((MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5 *)(&V_0), /*hidden argument*/NULL);
		__this->set_offset_7(L_2);
		// recordingHand = handedness;
		uint8_t L_3 = ___handedness0;
		__this->set_recordingHand_8(L_3);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::RecordHandStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityHandRecorder_RecordHandStop_m5968F1ACE444E5DB1E3922D19AD036F5527F3E94 (WindowsMixedRealityHandRecorder_t238D464312EDB1A73A6442BD23B3D340CF4EA210 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityHandRecorder_RecordHandStop_m5968F1ACE444E5DB1E3922D19AD036F5527F3E94_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityPoseU5BU5D_t94ED3D45C754C96FE1E9BBD9C193E0DE07B32019* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// MixedRealityPose[] jointPoses = new MixedRealityPose[jointCount];
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityHandRecorder_t238D464312EDB1A73A6442BD23B3D340CF4EA210_il2cpp_TypeInfo_var);
		int32_t L_0 = ((WindowsMixedRealityHandRecorder_t238D464312EDB1A73A6442BD23B3D340CF4EA210_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityHandRecorder_t238D464312EDB1A73A6442BD23B3D340CF4EA210_il2cpp_TypeInfo_var))->get_jointCount_4();
		MixedRealityPoseU5BU5D_t94ED3D45C754C96FE1E9BBD9C193E0DE07B32019* L_1 = (MixedRealityPoseU5BU5D_t94ED3D45C754C96FE1E9BBD9C193E0DE07B32019*)(MixedRealityPoseU5BU5D_t94ED3D45C754C96FE1E9BBD9C193E0DE07B32019*)SZArrayNew(MixedRealityPoseU5BU5D_t94ED3D45C754C96FE1E9BBD9C193E0DE07B32019_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		// for (int i = 0; i < jointCount; ++i)
		V_2 = 0;
		goto IL_0027;
	}

IL_000f:
	{
		// HandJointUtils.TryGetJointPose((TrackedHandJoint)i, recordingHand, out jointPoses[i]);
		int32_t L_2 = V_2;
		uint8_t L_3 = __this->get_recordingHand_8();
		MixedRealityPoseU5BU5D_t94ED3D45C754C96FE1E9BBD9C193E0DE07B32019* L_4 = V_0;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		HandJointUtils_TryGetJointPose_mE6010964EC9F98542BF0A0163111681A83C7BE15(L_2, L_3, (MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5 *)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), /*hidden argument*/NULL);
		// for (int i = 0; i < jointCount; ++i)
		int32_t L_6 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0027:
	{
		// for (int i = 0; i < jointCount; ++i)
		int32_t L_7 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityHandRecorder_t238D464312EDB1A73A6442BD23B3D340CF4EA210_il2cpp_TypeInfo_var);
		int32_t L_8 = ((WindowsMixedRealityHandRecorder_t238D464312EDB1A73A6442BD23B3D340CF4EA210_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityHandRecorder_t238D464312EDB1A73A6442BD23B3D340CF4EA210_il2cpp_TypeInfo_var))->get_jointCount_4();
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_000f;
		}
	}
	{
		// ArticulatedHandPose pose = new ArticulatedHandPose();
		ArticulatedHandPose_t0ACAC8E09F0FFC54CB295B9ECD097834791F65BF * L_9 = (ArticulatedHandPose_t0ACAC8E09F0FFC54CB295B9ECD097834791F65BF *)il2cpp_codegen_object_new(ArticulatedHandPose_t0ACAC8E09F0FFC54CB295B9ECD097834791F65BF_il2cpp_TypeInfo_var);
		ArticulatedHandPose__ctor_m36726004DECA00F5A66D992D1BE16B23D931ABD4(L_9, /*hidden argument*/NULL);
		// pose.ParseFromJointPoses(jointPoses, recordingHand, Quaternion.identity, offset);
		ArticulatedHandPose_t0ACAC8E09F0FFC54CB295B9ECD097834791F65BF * L_10 = L_9;
		MixedRealityPoseU5BU5D_t94ED3D45C754C96FE1E9BBD9C193E0DE07B32019* L_11 = V_0;
		uint8_t L_12 = __this->get_recordingHand_8();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_13 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = __this->get_offset_7();
		NullCheck(L_10);
		ArticulatedHandPose_ParseFromJointPoses_m7FB8CF8A334E2501462E4C0C1AFD639FCFB3F303(L_10, L_11, L_12, L_13, L_14, /*hidden argument*/NULL);
		// recordingHand = Handedness.None;
		__this->set_recordingHand_8(0);
		// var filename = String.Format("{0}-{1}.json", OutputFileName, DateTime.UtcNow.ToString("yyyyMMdd-HHmmss"));
		String_t* L_15 = WindowsMixedRealityHandRecorder_get_OutputFileName_m00DA57FD16ED1A5A3184E38B854178A0FEF15D92_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_16 = DateTime_get_UtcNow_m761E57F86226DDD94F0A2F4D98F0A8E27C74F090(/*hidden argument*/NULL);
		V_3 = L_16;
		String_t* L_17 = DateTime_ToString_m19ECEFF7BA22ED4425F7562A82A1C2308E934204((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_3), _stringLiteral845601714FB132030B7585887918D078E9CE2267, /*hidden argument*/NULL);
		String_t* L_18 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteralD89EC3F9FF2985A58F63B8BD8CBC002A9CBBEA32, L_15, L_17, /*hidden argument*/NULL);
		V_1 = L_18;
		// StoreRecordedHandPose(pose.ToJson(), filename);
		NullCheck(L_10);
		String_t* L_19 = ArticulatedHandPose_ToJson_m0DB903CE792AC92FA73DCE31AE0BA67C288B4BFF(L_10, /*hidden argument*/NULL);
		String_t* L_20 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityHandRecorder_t238D464312EDB1A73A6442BD23B3D340CF4EA210_il2cpp_TypeInfo_var);
		WindowsMixedRealityHandRecorder_StoreRecordedHandPose_mFD6E1F7C7508CD1E8F7F94E4FECD267506D5B9C9(L_19, L_20, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::StoreRecordedHandPose(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityHandRecorder_StoreRecordedHandPose_mFD6E1F7C7508CD1E8F7F94E4FECD267506D5B9C9 (String_t* ___data0, String_t* ___filename1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityHandRecorder_StoreRecordedHandPose_mFD6E1F7C7508CD1E8F7F94E4FECD267506D5B9C9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// string path = Path.Combine(Application.persistentDataPath, filename);
		String_t* L_0 = Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463(/*hidden argument*/NULL);
		String_t* L_1 = ___filename1;
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_2 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_0, L_1, /*hidden argument*/NULL);
		// using (TextWriter writer = File.CreateText(path))
		StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * L_3 = File_CreateText_mF393781AD8227008F1FE3646C896EBD3C4AC42B6(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		// writer.Write(data);
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_4 = V_0;
		String_t* L_5 = ___data0;
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_4, L_5);
		// }
		IL2CPP_LEAVE(0x24, FINALLY_001a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001a;
	}

FINALLY_001a:
	{ // begin finally (depth: 1)
		{
			TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_6 = V_0;
			if (!L_6)
			{
				goto IL_0023;
			}
		}

IL_001d:
		{
			TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_7 = V_0;
			NullCheck(L_7);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_7);
		}

IL_0023:
		{
			IL2CPP_END_FINALLY(26)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(26)
	{
		IL2CPP_JUMP_TBL(0x24, IL_0024)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityHandRecorder__ctor_m8AF9CAE95B290CB360C1C6FE07047DC80B441D7F (WindowsMixedRealityHandRecorder_t238D464312EDB1A73A6442BD23B3D340CF4EA210 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityHandRecorder__ctor_m8AF9CAE95B290CB360C1C6FE07047DC80B441D7F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public TrackedHandJoint ReferenceJoint { get; set; } = TrackedHandJoint.IndexTip;
		__this->set_U3CReferenceJointU3Ek__BackingField_5(((int32_t)11));
		// public string OutputFileName { get; } = "ArticulatedHandPose";
		__this->set_U3COutputFileNameU3Ek__BackingField_6(_stringLiteral454DCA3FD02B698041CB0BC1D2E9DC932FDA7A7C);
		// private Vector3 offset = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_offset_7(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityHandRecorder__cctor_mBB3BBC9821E1CD0E3D84757E79BC033976446B05 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityHandRecorder__cctor_mBB3BBC9821E1CD0E3D84757E79BC033976446B05_MetadataUsageId);
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
		((WindowsMixedRealityHandRecorder_t238D464312EDB1A73A6442BD23B3D340CF4EA210_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityHandRecorder_t238D464312EDB1A73A6442BD23B3D340CF4EA210_il2cpp_TypeInfo_var))->set_jointCount_4((((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))));
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
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.HolographicDepthReprojectionMethod Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityReprojectionUpdater::get_ReprojectionMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsMixedRealityReprojectionUpdater_get_ReprojectionMethod_m54A6E53074E04F0BBF77CEA241E1B98A85CCE265 (WindowsMixedRealityReprojectionUpdater_t9C1F363D0E755B6A4C8F84CF10D09CC3A1479F43 * __this, const RuntimeMethod* method)
{
	{
		// public HolographicDepthReprojectionMethod ReprojectionMethod { get; set; }
		int32_t L_0 = __this->get_U3CReprojectionMethodU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityReprojectionUpdater::set_ReprojectionMethod(Microsoft.MixedReality.Toolkit.WindowsMixedReality.HolographicDepthReprojectionMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityReprojectionUpdater_set_ReprojectionMethod_mA2279B18F4202E9C343CFC0B5E0A91201ADE46B1 (WindowsMixedRealityReprojectionUpdater_t9C1F363D0E755B6A4C8F84CF10D09CC3A1479F43 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public HolographicDepthReprojectionMethod ReprojectionMethod { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CReprojectionMethodU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityReprojectionUpdater::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityReprojectionUpdater__ctor_mBDAF46CE9824C98D67F9368D0846358BC8ACC17C (WindowsMixedRealityReprojectionUpdater_t9C1F363D0E755B6A4C8F84CF10D09CC3A1479F43 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::get_UtilitiesProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WindowsMixedRealityUtilities_get_UtilitiesProvider_m8BBCC384C698F1FA504B618B249FB2F84B76F8A9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityUtilities_get_UtilitiesProvider_m8BBCC384C698F1FA504B618B249FB2F84B76F8A9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static IWindowsMixedRealityUtilitiesProvider UtilitiesProvider { get; set; } = null;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_t6E3AF6A539480B47E4F166D5E6EFBBF7CCB0E958_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((WindowsMixedRealityUtilities_t6E3AF6A539480B47E4F166D5E6EFBBF7CCB0E958_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityUtilities_t6E3AF6A539480B47E4F166D5E6EFBBF7CCB0E958_il2cpp_TypeInfo_var))->get_U3CUtilitiesProviderU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::set_UtilitiesProvider(Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityUtilities_set_UtilitiesProvider_m66ECC937DB6E460A56860661B2D493F0C44AA052 (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityUtilities_set_UtilitiesProvider_m66ECC937DB6E460A56860661B2D493F0C44AA052_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static IWindowsMixedRealityUtilitiesProvider UtilitiesProvider { get; set; } = null;
		RuntimeObject* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_t6E3AF6A539480B47E4F166D5E6EFBBF7CCB0E958_il2cpp_TypeInfo_var);
		((WindowsMixedRealityUtilities_t6E3AF6A539480B47E4F166D5E6EFBBF7CCB0E958_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityUtilities_t6E3AF6A539480B47E4F166D5E6EFBBF7CCB0E958_il2cpp_TypeInfo_var))->set_U3CUtilitiesProviderU3Ek__BackingField_0(L_0);
		return;
	}
}
// Windows.Perception.Spatial.SpatialCoordinateSystem Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::get_SpatialCoordinateSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * WindowsMixedRealityUtilities_get_SpatialCoordinateSystem_m35FA29F240C4E318D10DFEA6914F39C8B5C2C98D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityUtilities_get_SpatialCoordinateSystem_m35FA29F240C4E318D10DFEA6914F39C8B5C2C98D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (UtilitiesProvider != null)
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_t6E3AF6A539480B47E4F166D5E6EFBBF7CCB0E958_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = WindowsMixedRealityUtilities_get_UtilitiesProvider_m8BBCC384C698F1FA504B618B249FB2F84B76F8A9_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0042;
		}
	}
	{
		// IntPtr newSpatialCoordinateSystemPtr = UtilitiesProvider.ISpatialCoordinateSystemPtr;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_t6E3AF6A539480B47E4F166D5E6EFBBF7CCB0E958_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = WindowsMixedRealityUtilities_get_UtilitiesProvider_m8BBCC384C698F1FA504B618B249FB2F84B76F8A9_inline(/*hidden argument*/NULL);
		NullCheck(L_1);
		intptr_t L_2 = InterfaceFuncInvoker0< intptr_t >::Invoke(0 /* System.IntPtr Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider::get_ISpatialCoordinateSystemPtr() */, IWindowsMixedRealityUtilitiesProvider_t19A9A1B642C5868676ED2EA00FA75B08FC07DB63_il2cpp_TypeInfo_var, L_1);
		V_0 = (intptr_t)L_2;
		// if (newSpatialCoordinateSystemPtr != currentSpatialCoordinateSystemPtr && newSpatialCoordinateSystemPtr != IntPtr.Zero)
		intptr_t L_3 = V_0;
		intptr_t L_4 = ((WindowsMixedRealityUtilities_t6E3AF6A539480B47E4F166D5E6EFBBF7CCB0E958_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityUtilities_t6E3AF6A539480B47E4F166D5E6EFBBF7CCB0E958_il2cpp_TypeInfo_var))->get_currentSpatialCoordinateSystemPtr_1();
		bool L_5 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_3, (intptr_t)L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0042;
		}
	}
	{
		intptr_t L_6 = V_0;
		bool L_7 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_6, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0042;
		}
	}
	{
		// spatialCoordinateSystem = Marshal.GetObjectForIUnknown(newSpatialCoordinateSystemPtr) as SpatialCoordinateSystem;
		intptr_t L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		RuntimeObject * L_9 = Marshal_GetObjectForIUnknown_m9D5CB9B12B72BC4CCC46E363C805A03FFE644443((intptr_t)L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_t6E3AF6A539480B47E4F166D5E6EFBBF7CCB0E958_il2cpp_TypeInfo_var);
		((WindowsMixedRealityUtilities_t6E3AF6A539480B47E4F166D5E6EFBBF7CCB0E958_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityUtilities_t6E3AF6A539480B47E4F166D5E6EFBBF7CCB0E958_il2cpp_TypeInfo_var))->set_spatialCoordinateSystem_2(((SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB *)IsInstSealed((RuntimeObject*)L_9, SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB_il2cpp_TypeInfo_var)));
		// currentSpatialCoordinateSystemPtr = newSpatialCoordinateSystemPtr;
		intptr_t L_10 = V_0;
		((WindowsMixedRealityUtilities_t6E3AF6A539480B47E4F166D5E6EFBBF7CCB0E958_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityUtilities_t6E3AF6A539480B47E4F166D5E6EFBBF7CCB0E958_il2cpp_TypeInfo_var))->set_currentSpatialCoordinateSystemPtr_1((intptr_t)L_10);
	}

IL_0042:
	{
		// return spatialCoordinateSystem;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_t6E3AF6A539480B47E4F166D5E6EFBBF7CCB0E958_il2cpp_TypeInfo_var);
		SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * L_11 = ((WindowsMixedRealityUtilities_t6E3AF6A539480B47E4F166D5E6EFBBF7CCB0E958_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityUtilities_t6E3AF6A539480B47E4F166D5E6EFBBF7CCB0E958_il2cpp_TypeInfo_var))->get_spatialCoordinateSystem_2();
		return L_11;
	}
}
// Windows.Graphics.Holographic.HolographicFrame Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::get_CurrentHolographicFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HolographicFrame_t16CC7D90BCAF0D8BAC1D7C941B18567F460C99EC * WindowsMixedRealityUtilities_get_CurrentHolographicFrame_mB94F1A42980732440624EE5A758448CC8FA2C352 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityUtilities_get_CurrentHolographicFrame_mB94F1A42980732440624EE5A758448CC8FA2C352_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (UtilitiesProvider == null || UtilitiesProvider.IHolographicFramePtr == IntPtr.Zero)
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_t6E3AF6A539480B47E4F166D5E6EFBBF7CCB0E958_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = WindowsMixedRealityUtilities_get_UtilitiesProvider_m8BBCC384C698F1FA504B618B249FB2F84B76F8A9_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_t6E3AF6A539480B47E4F166D5E6EFBBF7CCB0E958_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = WindowsMixedRealityUtilities_get_UtilitiesProvider_m8BBCC384C698F1FA504B618B249FB2F84B76F8A9_inline(/*hidden argument*/NULL);
		NullCheck(L_1);
		intptr_t L_2 = InterfaceFuncInvoker0< intptr_t >::Invoke(1 /* System.IntPtr Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider::get_IHolographicFramePtr() */, IWindowsMixedRealityUtilitiesProvider_t19A9A1B642C5868676ED2EA00FA75B08FC07DB63_il2cpp_TypeInfo_var, L_1);
		bool L_3 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001f;
		}
	}

IL_001d:
	{
		// return null;
		return (HolographicFrame_t16CC7D90BCAF0D8BAC1D7C941B18567F460C99EC *)NULL;
	}

IL_001f:
	{
		// return Marshal.GetObjectForIUnknown(UtilitiesProvider.IHolographicFramePtr) as HolographicFrame;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_t6E3AF6A539480B47E4F166D5E6EFBBF7CCB0E958_il2cpp_TypeInfo_var);
		RuntimeObject* L_4 = WindowsMixedRealityUtilities_get_UtilitiesProvider_m8BBCC384C698F1FA504B618B249FB2F84B76F8A9_inline(/*hidden argument*/NULL);
		NullCheck(L_4);
		intptr_t L_5 = InterfaceFuncInvoker0< intptr_t >::Invoke(1 /* System.IntPtr Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider::get_IHolographicFramePtr() */, IWindowsMixedRealityUtilitiesProvider_t19A9A1B642C5868676ED2EA00FA75B08FC07DB63_il2cpp_TypeInfo_var, L_4);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		RuntimeObject * L_6 = Marshal_GetObjectForIUnknown_m9D5CB9B12B72BC4CCC46E363C805A03FFE644443((intptr_t)L_5, /*hidden argument*/NULL);
		return ((HolographicFrame_t16CC7D90BCAF0D8BAC1D7C941B18567F460C99EC *)IsInstSealed((RuntimeObject*)L_6, HolographicFrame_t16CC7D90BCAF0D8BAC1D7C941B18567F460C99EC_il2cpp_TypeInfo_var));
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::SystemVector3ToUnity(System.Numerics.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  WindowsMixedRealityUtilities_SystemVector3ToUnity_mF93436723A3E9948CEEFAC907CD2B2974E54FB8C (Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  ___vector0, const RuntimeMethod* method)
{
	{
		// return vector.ToUnityVector3();
		Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  L_0 = ___vector0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = SystemNumericsExtensions_ToUnityVector3_mFB97FBEA6DF5B1E921C4C61B716D40F5A022233B(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::SystemQuaternionToUnity(System.Numerics.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  WindowsMixedRealityUtilities_SystemQuaternionToUnity_m28908A6D2F4F5253B693C87CF3047F74748B50A5 (Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C  ___quaternion0, const RuntimeMethod* method)
{
	{
		// return quaternion.ToUnityQuaternion();
		Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C  L_0 = ___quaternion0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1 = SystemNumericsExtensions_ToUnityQuaternion_m41F7D569D129AD05FAC5A599B70AC71A169477E2(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityUtilities__cctor_m51D5DD3A968A3C21243CA02E0B50E71389F4EAED (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityUtilities__cctor_m51D5DD3A968A3C21243CA02E0B50E71389F4EAED_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static IWindowsMixedRealityUtilitiesProvider UtilitiesProvider { get; set; } = null;
		((WindowsMixedRealityUtilities_t6E3AF6A539480B47E4F166D5E6EFBBF7CCB0E958_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityUtilities_t6E3AF6A539480B47E4F166D5E6EFBBF7CCB0E958_il2cpp_TypeInfo_var))->set_U3CUtilitiesProviderU3Ek__BackingField_0((RuntimeObject*)NULL);
		// private static IntPtr currentSpatialCoordinateSystemPtr = IntPtr.Zero;
		((WindowsMixedRealityUtilities_t6E3AF6A539480B47E4F166D5E6EFBBF7CCB0E958_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityUtilities_t6E3AF6A539480B47E4F166D5E6EFBBF7CCB0E958_il2cpp_TypeInfo_var))->set_currentSpatialCoordinateSystemPtr_1((intptr_t)(0));
		// private static SpatialCoordinateSystem spatialCoordinateSystem = null;
		((WindowsMixedRealityUtilities_t6E3AF6A539480B47E4F166D5E6EFBBF7CCB0E958_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityUtilities_t6E3AF6A539480B47E4F166D5E6EFBBF7CCB0E958_il2cpp_TypeInfo_var))->set_spatialCoordinateSystem_2((SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB *)NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition_<SetHandMeshObserver>d__17::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetHandMeshObserverU3Ed__17_MoveNext_mD5D3499AEFB8E8FD738F49644D3B5E52D6A524AB (U3CSetHandMeshObserverU3Ed__17_tB6D9B203D85335F7DCEEF262F084016559A10517 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSetHandMeshObserverU3Ed__17_MoveNext_mD5D3499AEFB8E8FD738F49644D3B5E52D6A524AB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WindowsMixedRealityArticulatedHandDefinition_t6767A4BDFA6A972CE918EDC477B279BF2637FAA7 * V_1 = NULL;
	HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * V_2 = NULL;
	TaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WindowsMixedRealityArticulatedHandDefinition_t6767A4BDFA6A972CE918EDC477B279BF2637FAA7 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0050;
			}
		}

IL_0011:
		{
			// handMeshObserver = await sourceState.Source.TryCreateHandMeshObserverAsync();
			SpatialInteractionSourceState_t6E721C100623C9060174FE6F6FBAC61D17FDF199 * L_3 = __this->get_sourceState_2();
			NullCheck(L_3);
			SpatialInteractionSource_tF5344A6C35341EF626EAC41ADCDFDCE01154752F * L_4 = SpatialInteractionSourceState_get_Source_mDFBB7ECDC326D42075DCF0B8D5779B7D11EAFD8F(L_3, /*hidden argument*/NULL);
			NullCheck(L_4);
			RuntimeObject* L_5 = SpatialInteractionSource_TryCreateHandMeshObserverAsync_mE8630D9D92744C27BD5EBD758B42C3CB6ACFEC5C(L_4, /*hidden argument*/NULL);
			TaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E  L_6 = WindowsRuntimeSystemExtensions_GetAwaiter_TisHandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273_m5EC4FF7F7B66CDE9B445927A5B7350344EAF4FBD(L_5, /*hidden argument*/WindowsRuntimeSystemExtensions_GetAwaiter_TisHandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273_m5EC4FF7F7B66CDE9B445927A5B7350344EAF4FBD_RuntimeMethod_var);
			V_3 = L_6;
			bool L_7 = TaskAwaiter_1_get_IsCompleted_m5D6FF641B7538EB84114C6AE307B3A91B49DBD1D((TaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E *)(&V_3), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m5D6FF641B7538EB84114C6AE307B3A91B49DBD1D_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_006c;
			}
		}

IL_0030:
		{
			int32_t L_8 = 0;
			V_0 = L_8;
			__this->set_U3CU3E1__state_0(L_8);
			TaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E  L_9 = V_3;
			__this->set_U3CU3Eu__1_4(L_9);
			AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_10 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E_TisU3CSetHandMeshObserverU3Ed__17_tB6D9B203D85335F7DCEEF262F084016559A10517_mD0DA7135E72195C6FE7B90DE51E01A253D7B9C8B((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_10, (TaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E *)(&V_3), (U3CSetHandMeshObserverU3Ed__17_tB6D9B203D85335F7DCEEF262F084016559A10517 *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E_TisU3CSetHandMeshObserverU3Ed__17_tB6D9B203D85335F7DCEEF262F084016559A10517_mD0DA7135E72195C6FE7B90DE51E01A253D7B9C8B_RuntimeMethod_var);
			goto IL_00a9;
		}

IL_0050:
		{
			TaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E  L_11 = __this->get_U3CU3Eu__1_4();
			V_3 = L_11;
			TaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E * L_12 = __this->get_address_of_U3CU3Eu__1_4();
			il2cpp_codegen_initobj(L_12, sizeof(TaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E ));
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->set_U3CU3E1__state_0(L_13);
		}

IL_006c:
		{
			HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * L_14 = TaskAwaiter_1_GetResult_m59638659560BF6E7A32BE216A243011FC4E906F1((TaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E *)(&V_3), /*hidden argument*/TaskAwaiter_1_GetResult_m59638659560BF6E7A32BE216A243011FC4E906F1_RuntimeMethod_var);
			V_2 = L_14;
			WindowsMixedRealityArticulatedHandDefinition_t6767A4BDFA6A972CE918EDC477B279BF2637FAA7 * L_15 = V_1;
			HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * L_16 = V_2;
			NullCheck(L_15);
			L_15->set_handMeshObserver_7(L_16);
			goto IL_0096;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_007d;
		throw e;
	}

CATCH_007d:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_17 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_18 = V_4;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_17, L_18, /*hidden argument*/NULL);
		goto IL_00a9;
	} // end catch (depth: 1)

IL_0096:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_19 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_19, /*hidden argument*/NULL);
	}

IL_00a9:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSetHandMeshObserverU3Ed__17_MoveNext_mD5D3499AEFB8E8FD738F49644D3B5E52D6A524AB_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CSetHandMeshObserverU3Ed__17_tB6D9B203D85335F7DCEEF262F084016559A10517 * _thisAdjusted = reinterpret_cast<U3CSetHandMeshObserverU3Ed__17_tB6D9B203D85335F7DCEEF262F084016559A10517 *>(__this + _offset);
	U3CSetHandMeshObserverU3Ed__17_MoveNext_mD5D3499AEFB8E8FD738F49644D3B5E52D6A524AB(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition_<SetHandMeshObserver>d__17::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetHandMeshObserverU3Ed__17_SetStateMachine_m6F75D442B0D401745BA6DD81AF212BAA0D35BA02 (U3CSetHandMeshObserverU3Ed__17_tB6D9B203D85335F7DCEEF262F084016559A10517 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSetHandMeshObserverU3Ed__17_SetStateMachine_m6F75D442B0D401745BA6DD81AF212BAA0D35BA02_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CSetHandMeshObserverU3Ed__17_tB6D9B203D85335F7DCEEF262F084016559A10517 * _thisAdjusted = reinterpret_cast<U3CSetHandMeshObserverU3Ed__17_tB6D9B203D85335F7DCEEF262F084016559A10517 *>(__this + _offset);
	U3CSetHandMeshObserverU3Ed__17_SetStateMachine_m6F75D442B0D401745BA6DD81AF212BAA0D35BA02(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool WindowsMixedRealityCameraSettingsProfile_get_RenderFromPVCameraForMixedRealityCapture_mC18E446F2625A1459676CA7CE6482C87411D67AE_inline (WindowsMixedRealityCameraSettingsProfile_t315EAD84CE3FB831C6072D7AB2E3E0FDC7AD352C * __this, const RuntimeMethod* method)
{
	{
		// public bool RenderFromPVCameraForMixedRealityCapture => renderFromPVCameraForMixedRealityCapture;
		bool L_0 = __this->get_renderFromPVCameraForMixedRealityCapture_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WindowsMixedRealityCameraSettingsProfile_get_ReprojectionMethod_m073CF98355DAFFEF2E79C254BA62275B5CB1CE91_inline (WindowsMixedRealityCameraSettingsProfile_t315EAD84CE3FB831C6072D7AB2E3E0FDC7AD352C * __this, const RuntimeMethod* method)
{
	{
		// public HolographicDepthReprojectionMethod ReprojectionMethod => reprojectionMethod;
		int32_t L_0 = __this->get_reprojectionMethod_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsMixedRealityReprojectionUpdater_set_ReprojectionMethod_mA2279B18F4202E9C343CFC0B5E0A91201ADE46B1_inline (WindowsMixedRealityReprojectionUpdater_t9C1F363D0E755B6A4C8F84CF10D09CC3A1479F43 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public HolographicDepthReprojectionMethod ReprojectionMethod { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CReprojectionMethodU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  MixedRealityPose_get_ZeroIdentity_m7DFFCF17695B53E77ABCC4035C292C405996350E_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityPose_get_ZeroIdentity_m7DFFCF17695B53E77ABCC4035C292C405996350EMicrosoft_MixedReality_Toolkit_Providers_WindowsMixedReality_Shared_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MixedRealityPose ZeroIdentity { get; } = new MixedRealityPose(Vector3.zero, Quaternion.identity);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5_il2cpp_TypeInfo_var);
		MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  L_0 = ((MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5_il2cpp_TypeInfo_var))->get_U3CZeroIdentityU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  MixedRealityPose_get_Rotation_mA4D1C5FACB636919D31001E69C5062E94B6B9E45_inline (MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5 * __this, const RuntimeMethod* method)
{
	{
		// public Quaternion Rotation { get { return rotation; } set { rotation = value; } }
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0 = __this->get_rotation_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline (float ___d0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a1;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a1;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a1;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___lhs0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___rhs1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___lhs0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___rhs1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___lhs0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___rhs1;
		float L_11 = L_10.get_z_4();
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)), (float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_7)))), (float)((float)il2cpp_codegen_multiply((float)L_9, (float)L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityHandTrackingProfile_tDADC6D5367650C672DB618EED78274B7C1720AF0 * MixedRealityInputSystemProfile_get_HandTrackingProfile_m0E906F33FA6FC6D91ED150C13D289B2A66EAD9C5_inline (MixedRealityInputSystemProfile_t6086D1D813224695CFB52FA000EDC2A6B6125255 * __this, const RuntimeMethod* method)
{
	{
		// get { return handTrackingProfile; }
		MixedRealityHandTrackingProfile_tDADC6D5367650C672DB618EED78274B7C1720AF0 * L_0 = __this->get_handTrackingProfile_19();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WindowsMixedRealityHandRecorder_get_ReferenceJoint_mF47398E6FC9A6DFA528C0C5FCB259BF502BC5526_inline (WindowsMixedRealityHandRecorder_t238D464312EDB1A73A6442BD23B3D340CF4EA210 * __this, const RuntimeMethod* method)
{
	{
		// public TrackedHandJoint ReferenceJoint { get; set; } = TrackedHandJoint.IndexTip;
		int32_t L_0 = __this->get_U3CReferenceJointU3Ek__BackingField_5();
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* WindowsMixedRealityHandRecorder_get_OutputFileName_m00DA57FD16ED1A5A3184E38B854178A0FEF15D92_inline (WindowsMixedRealityHandRecorder_t238D464312EDB1A73A6442BD23B3D340CF4EA210 * __this, const RuntimeMethod* method)
{
	{
		// public string OutputFileName { get; } = "ArticulatedHandPose";
		String_t* L_0 = __this->get_U3COutputFileNameU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* WindowsMixedRealityUtilities_get_UtilitiesProvider_m8BBCC384C698F1FA504B618B249FB2F84B76F8A9_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityUtilities_get_UtilitiesProvider_m8BBCC384C698F1FA504B618B249FB2F84B76F8A9Microsoft_MixedReality_Toolkit_Providers_WindowsMixedReality_Shared_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static IWindowsMixedRealityUtilitiesProvider UtilitiesProvider { get; set; } = null;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_t6E3AF6A539480B47E4F166D5E6EFBBF7CCB0E958_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((WindowsMixedRealityUtilities_t6E3AF6A539480B47E4F166D5E6EFBBF7CCB0E958_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityUtilities_t6E3AF6A539480B47E4F166D5E6EFBBF7CCB0E958_il2cpp_TypeInfo_var))->get_U3CUtilitiesProviderU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m1C8741C73000BD525E6034625DD1ED12EB07EA10_gshared_inline (Nullable_1_t9FF3BE791A3B4350B3DE3D72C440E11029540DD8 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
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
