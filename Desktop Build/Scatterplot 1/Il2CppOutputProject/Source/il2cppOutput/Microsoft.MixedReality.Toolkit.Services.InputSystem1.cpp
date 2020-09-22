#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876;
// Microsoft.MixedReality.Toolkit.Input.HandMeshInfo
struct HandMeshInfo_t2149B356EA6B50B1E60C46E30EF537D6D8E78566;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController
struct IMixedRealityController_t51391153B4DE18E271BDB3EF5F5164159837A5BD;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource
struct IMixedRealityInputSource_t5FD93249755F746278AEAC000A28B7765ACB7F9F;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData
struct PointerData_tF120A74439BD4348AD619D3389299A2FD83AF72C;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c
struct U3CU3Ec_t813C0BCD29DF294DFE9EB626784A877CC1FD5B1D;
// Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable/<>c
struct U3CU3Ec_tDBA99090C30B1568CB760F0F62733CA74F874FC5;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38;
// System.Func`3<System.String,UnityEngine.Transform,System.String>
struct Func_3_t25039A52ED82957816F93C2D9CF335791DA6FCFD;
// System.Collections.Generic.IDictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct IDictionary_2_tF646D34B8C1453646BB4A8E7DA274B171B105575;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct IMixedRealityGestureHandler_1_tC3D50ECE722E4173E2CF4012BD787EF6C50D5681;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Quaternion>
struct IMixedRealityGestureHandler_1_tCC659FB75C9E286B9286800DD96281D9B57FED33;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector2>
struct IMixedRealityGestureHandler_1_t643C22AB6C28F3B7FE621EC02896646B7601C264;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector3>
struct IMixedRealityGestureHandler_1_t0C9D17A1F6D580F45C6DF7BD3AE2765ABE229CD3;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct IMixedRealityInputHandler_1_t75C53C879FBB56BB0996DBF5D64CB77FFF2005AB;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Quaternion>
struct IMixedRealityInputHandler_1_tA106127380DEA582536E8116805F7DF92225AE0D;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<System.Single>
struct IMixedRealityInputHandler_1_tF630D5E78881598E706AEF9CB76153E80A5A1A29;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Vector2>
struct IMixedRealityInputHandler_1_tF77D37AAA391EC38E6179A37EAE665362E780FF9;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Vector3>
struct IMixedRealityInputHandler_1_t636B79E1C8F31E341E88055EAABDF7C94373C580;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Collections.Generic.IDictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>>
struct InputEventData_1_tCC6F77EA129BA5BB32CA4B26D9555B82F923CE62;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Input.HandMeshInfo>
struct InputEventData_1_tCD17D8B2C5BB4781E9073B160FBD5F8E8C49B367;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct InputEventData_1_t6158ACFE1C7FBC5703A33F92BB8B93E681AFF1D2;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Quaternion>
struct InputEventData_1_tC01F6DE63DE68B1AD94AB5BD08274141F73EFAB0;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Single>
struct InputEventData_1_tE655DA67179834FFBDF6C1C78CF03AEC837CDCAA;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector2>
struct InputEventData_1_t3CB921E01118FB1DEE0FAEAF6A6787342EA38D66;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector3>
struct InputEventData_1_t40F1EC00AC203CC6880075975AA0341CD74469AA;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
struct List_1_t75FFBEBE24171F12D0459DE4BA90E0FD3E22A60E;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct SourcePoseEventData_1_t657ADCF01C75C585700D387D3A9D7E0224573931;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Quaternion>
struct SourcePoseEventData_1_tA74EBE5022478D8141994E3869840238FED98B95;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.TrackingState>
struct SourcePoseEventData_1_t969CC2220FC27E0DDB17619431135BC2EE948BAA;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector2>
struct SourcePoseEventData_1_t033FA7B2DFD448AE19A6B09E1580236E2FBAFF48;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector3>
struct SourcePoseEventData_1_tE815B8D81A2E769059E352A21F4B09B4A4C5192A;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// Microsoft.MixedReality.Toolkit.Input.DictationEventData
struct DictationEventData_tA1F305F741F4F44777C90987013669EB89A541C9;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C;
// Microsoft.MixedReality.Toolkit.Input.FocusEventData
struct FocusEventData_tFBDB33B33F11F0F0AC4AE18A00E3C7CF43A83BD7;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Microsoft.MixedReality.Toolkit.Input.HandTrackingInputEventData
struct HandTrackingInputEventData_tE85C6A2DE13B9D871CAC18B726B5EFB8687960BC;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler
struct IMixedRealityBaseInputHandler_t1B989328721628EA0EEFAB238155B440B446CFB6;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler
struct IMixedRealityDictationHandler_t793F4D7903A78C4417B2B11800833D26BC01BCB6;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusChangedHandler
struct IMixedRealityFocusChangedHandler_tB580620194C6E0484A14C5F7812CFA462BE1E300;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler
struct IMixedRealityFocusHandler_t2E7355CC99F9C99349E37D7194784D4FBB49C5F0;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler
struct IMixedRealityGestureHandler_tDF664CDE3AEE7CFE82F6CF7118BAC683C4D018BA;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointHandler
struct IMixedRealityHandJointHandler_t6DC1338CD4EC6EB2CC6DF2E4B9C027434A989DA8;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandMeshHandler
struct IMixedRealityHandMeshHandler_t6B2578C87B3F0CE03FE72F3714AE4DA2DEFEF6C1;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler
struct IMixedRealityInputHandler_t5416C64F6EF5F4EB651A9A18DC0E6A891044E8F8;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer
struct IMixedRealityPointer_t1DD839A694B3A5CDBAB1B01724EE8A2FD4FFBA1A;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler
struct IMixedRealityPointerHandler_tA6DE5B54846F0E07C42009CDB559A847669C5E4D;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler
struct IMixedRealitySourcePoseHandler_t4737D525AD19FEC3694B7B127F3443334B27FF10;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourceStateHandler
struct IMixedRealitySourceStateHandler_tFF4648994821AB43DA96EB2E501BA7C3F1C8D6FD;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealitySpeechHandler
struct IMixedRealitySpeechHandler_t45D4F0632FDE701D153AB5DE7BC7217041F616B7;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler
struct IMixedRealityTouchHandler_t85AA14576D8B43260EC2B8CCCA64E23C9DF5BD86;
// Microsoft.MixedReality.Toolkit.Input.InputEventData
struct InputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData
struct MixedRealityPointerEventData_t7881133BF2C96F77D750AA6A5FEC7C588183B3BD;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954;
// Microsoft.MixedReality.Toolkit.Input.SourceStateEventData
struct SourceStateEventData_tC737D99EF91947EED9DB2A9939158561E95B9E64;
// Microsoft.MixedReality.Toolkit.Input.SpeechEventData
struct SpeechEventData_t8F9285E039F9C46D058B636C74BCC27498D9C7C0;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.EventSystems.PointerInputModule/MouseState
struct MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1;

IL2CPP_EXTERN_C RuntimeClass* ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityDictationHandler_t793F4D7903A78C4417B2B11800833D26BC01BCB6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityFocusChangedHandler_tB580620194C6E0484A14C5F7812CFA462BE1E300_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityFocusHandler_t2E7355CC99F9C99349E37D7194784D4FBB49C5F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityGestureHandler_1_t0C9D17A1F6D580F45C6DF7BD3AE2765ABE229CD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityGestureHandler_1_t643C22AB6C28F3B7FE621EC02896646B7601C264_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityGestureHandler_1_tC3D50ECE722E4173E2CF4012BD787EF6C50D5681_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityGestureHandler_1_tCC659FB75C9E286B9286800DD96281D9B57FED33_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityGestureHandler_tDF664CDE3AEE7CFE82F6CF7118BAC683C4D018BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityHandJointHandler_t6DC1338CD4EC6EB2CC6DF2E4B9C027434A989DA8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityHandMeshHandler_t6B2578C87B3F0CE03FE72F3714AE4DA2DEFEF6C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputActionHandler_t01EC2D317CEBCAC398957A8F29CC19C403CDDC42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputHandler_1_t636B79E1C8F31E341E88055EAABDF7C94373C580_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputHandler_1_t75C53C879FBB56BB0996DBF5D64CB77FFF2005AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputHandler_1_tA106127380DEA582536E8116805F7DF92225AE0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputHandler_1_tF630D5E78881598E706AEF9CB76153E80A5A1A29_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputHandler_1_tF77D37AAA391EC38E6179A37EAE665362E780FF9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputHandler_t5416C64F6EF5F4EB651A9A18DC0E6A891044E8F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityPointerHandler_tA6DE5B54846F0E07C42009CDB559A847669C5E4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealitySourcePoseHandler_t4737D525AD19FEC3694B7B127F3443334B27FF10_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealitySourceStateHandler_tFF4648994821AB43DA96EB2E501BA7C3F1C8D6FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealitySpeechHandler_t45D4F0632FDE701D153AB5DE7BC7217041F616B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityTouchHandler_t85AA14576D8B43260EC2B8CCCA64E23C9DF5BD86_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t813C0BCD29DF294DFE9EB626784A877CC1FD5B1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tDBA99090C30B1568CB760F0F62733CA74F874FC5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral193EAB9F1EC19468783C52A94D9B84DF6D5BEE4F;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisDictationEventData_tA1F305F741F4F44777C90987013669EB89A541C9_m6C45A235B47BC1076AA7CF790915C9847EEED6E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisFocusEventData_tFBDB33B33F11F0F0AC4AE18A00E3C7CF43A83BD7_m86DD1AE7B33C3D255BA6D39ACED1F853131A6773_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisHandTrackingInputEventData_tE85C6A2DE13B9D871CAC18B726B5EFB8687960BC_m89E52F63BCA56659A94A747AD73A0FEF2D2FE229_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisInputEventData_1_t3CB921E01118FB1DEE0FAEAF6A6787342EA38D66_m6A9EAE737C4C9B86596B71AB2D50C9E3800559BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisInputEventData_1_t40F1EC00AC203CC6880075975AA0341CD74469AA_m182F04C39F472481DF4D1E1E9BAC4BCC2AA0452A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisInputEventData_1_t6158ACFE1C7FBC5703A33F92BB8B93E681AFF1D2_m5799007909DE072939012567D3E2CCF36BCF12A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisInputEventData_1_tC01F6DE63DE68B1AD94AB5BD08274141F73EFAB0_mB42E04FF7089340C2A39842BB21629684CEB1A28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisInputEventData_1_tCC6F77EA129BA5BB32CA4B26D9555B82F923CE62_mFBB4A36A0C264360F11B30F81B895CC2CE9132B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisInputEventData_1_tCD17D8B2C5BB4781E9073B160FBD5F8E8C49B367_mEDD269A78AD5DD2E183C9D29C15EAE50AB521C4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisInputEventData_1_tE655DA67179834FFBDF6C1C78CF03AEC837CDCAA_mAF27536AF51BD12C3E57A726F68E729F3821718A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisInputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340_m0EEC9EE692BED08CB3E5F43CE67E0BBB5B600693_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_t7881133BF2C96F77D750AA6A5FEC7C588183B3BD_m9DCBEF97A4B701E937221551089D5631A2CCCCAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t033FA7B2DFD448AE19A6B09E1580236E2FBAFF48_m4B6F345B2E84FE15687E3780FB2318F84D9EB812_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t657ADCF01C75C585700D387D3A9D7E0224573931_m0DA9C5C9C55D8490F7EB1A59692BABB63BCF310E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t969CC2220FC27E0DDB17619431135BC2EE948BAA_mDA118E3404F55AFCA6CEEAF7A7DF49579565B1F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_tA74EBE5022478D8141994E3869840238FED98B95_mF9AA3C8660156FF100D87AF58EBC1B4B1B261C51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_tE815B8D81A2E769059E352A21F4B09B4A4C5192A_m05A3C9BED811B9AE5CCBA889A2ACADC8B2849412_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisSourceStateEventData_tC737D99EF91947EED9DB2A9939158561E95B9E64_mB6577E99783EFDC9E8413B30B8260766976C1B7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisSpeechEventData_t8F9285E039F9C46D058B636C74BCC27498D9C7C0_m1DF1056AD5B9AFBE75B93CAC85CF688577BA071A_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t PointerData__ctor_m3B78E95C82923CBF9770BFDCB71829E621D4FD93_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3COnValidateU3Eb__25_0_mC5202527AD449E451138C6422762B35A7D7AA5D7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__196_0_m8876C4A4E6143C9A80D61D6143D57F4AE79ACF0F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__196_10_mE39BECACF5E8BAE0857151A964352BDED6A6894E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__196_11_m300BE987C7734DF7FCF1F0EEB04B6F858BB1559F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__196_12_m5BD4D55E5E8E37B9820DE8736D87E7560E8EBCC7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__196_13_m087671F37985F3FBF032D2AE3B188DDB3D3A41D8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__196_14_m665A79EFD69FA5EB597AFCA375BD005C73CE49BB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__196_15_m1BFC3228B4986B678D8AD3264520EED6EF23EAF0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__196_16_m3B6455E7A7661B961C91D17A40BCF8B90D063B41_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__196_17_mC395A4FDC8B1ACE79A462F269E28299B3F4C6D73_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__196_18_m8C28C0B0EDBBD655AF153E520967C39C7EF217EE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__196_19_m3448112EED981404D2E8CA87997346CD783706A8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__196_1_m73356EF687234404EC6C6305AD0006C2F2C67EDA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__196_20_m9146C685685F40EA56068BAB5CA72DA5415E018D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__196_21_mAA00A832D8A417EE4BB99017A3DA20450C690CF8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__196_22_mDCE303C5BD6E1D4E9BA4370B2EB8ED1F60AA5A48_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__196_23_m28B466859BDABF99EF523DC3D5BBB36E6F5EB112_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__196_24_m5BF877163C7645CBBE7BA92838729579D7493968_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__196_25_m430D72E328EC137BD37C371A201BA2CDD48538E5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__196_26_m02047D9D22D1A552E1AF55DFF9E934F9B6CEB7EA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__196_27_m95D105F3708451B8AECDA56FEF21D95C5B5F3B2C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__196_28_m40464637CE0DE469FDA4ED480058FD0081AEC0A5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__196_29_m336EDF159368522A847F5E8E255740C2E4C66DC9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__196_2_m8F101A120CC0C3CA05F8FE7348A1C3700F5399F9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__196_30_m281D9C230052CF1C8B328FFE36B61AED85035F7A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__196_31_m112BC4082FCC738C74BCCB956BEE0F60F487278A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__196_32_m54ACF1C79331A4AEA714A8217C30CB50AE025D60_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__196_33_m8DF91512AB2DC91A37540F04D4769FD324DA9601_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__196_34_m5FA3734B7A734DD3EB5C8D0653F6840EE86BDD61_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__196_35_mA6BBCE3DBB481E05F3DA84EEFEE5A673C11E10A5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__196_36_mA5BBC522ACBBE015E85224C3F324208301F7AE80_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__196_37_m915509B14091975CDAB10D44D11AD14D779E6430_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__196_38_m546A990EC8B6985E94701F38A75E6BFFF743F4AE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__196_39_mFAF55D094F332839FA48053B60D9F70C798B27AE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__196_3_mE75CAB49852B8F8C09C1B982A06CE9BC40EF4774_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__196_40_m8CB21D13DBD4CAF46C0E96B7B7D4840AF6491CB5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__196_41_m29349161E4BA3DA78B65B55503C679E645227455_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__196_42_m2D7BF594339B2C5032193D9D089A804221B86E79_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__196_43_mB3EA7DC9377B8AF5028849E6A5F8CD7F560EBE0B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__196_44_mF3B0AFBB08988A34903112D3553F5DCCDFDA7C5A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__196_45_m6CA55552345D2320F3DEE43022430CC6F1B66724_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__196_46_m63BD4010536610D5D274A035EEE963DF4BA774E9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__196_47_mD3B950FDB3B3A676BF8F200D83D13799C11E9701_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__196_48_mF3F070DBD8DF319A503DE7F971A2D823E379FE3A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__196_4_mD5A136F28FB264BB699C9A3CE64D922C1D36B821_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__196_5_m96975C8E23632AFD26603191823C725A0C8FB5F6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__196_6_mCAB69CC98D9B9C7B13E0285D6BE6D8E8D3D62ECB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__196_7_mAEB0B5231ED434E29EFC9CD9285604C23030023D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__196_8_m87A16A7CBF2C25FA99400AF4A39201FD16C7BE4B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__196_9_m2EB634F2049D56DE03A81274D0108645E2314AE7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_m00899DB85B6C994B6D5865A24C6345FF38504B4C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_m3B38B842132C94B69EF52CF1B0B77F71EC035D7D_MetadataUsageId;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem_<>c
struct  U3CU3Ec_t813C0BCD29DF294DFE9EB626784A877CC1FD5B1D  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t813C0BCD29DF294DFE9EB626784A877CC1FD5B1D_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem_<>c Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem_<>c::<>9
	U3CU3Ec_t813C0BCD29DF294DFE9EB626784A877CC1FD5B1D * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t813C0BCD29DF294DFE9EB626784A877CC1FD5B1D_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t813C0BCD29DF294DFE9EB626784A877CC1FD5B1D * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t813C0BCD29DF294DFE9EB626784A877CC1FD5B1D ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t813C0BCD29DF294DFE9EB626784A877CC1FD5B1D * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable_<>c
struct  U3CU3Ec_tDBA99090C30B1568CB760F0F62733CA74F874FC5  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tDBA99090C30B1568CB760F0F62733CA74F874FC5_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable_<>c Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable_<>c::<>9
	U3CU3Ec_tDBA99090C30B1568CB760F0F62733CA74F874FC5 * ___U3CU3E9_0;
	// System.Func`3<System.String,UnityEngine.Transform,System.String> Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable_<>c::<>9__25_0
	Func_3_t25039A52ED82957816F93C2D9CF335791DA6FCFD * ___U3CU3E9__25_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDBA99090C30B1568CB760F0F62733CA74F874FC5_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tDBA99090C30B1568CB760F0F62733CA74F874FC5 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tDBA99090C30B1568CB760F0F62733CA74F874FC5 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tDBA99090C30B1568CB760F0F62733CA74F874FC5 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDBA99090C30B1568CB760F0F62733CA74F874FC5_StaticFields, ___U3CU3E9__25_0_1)); }
	inline Func_3_t25039A52ED82957816F93C2D9CF335791DA6FCFD * get_U3CU3E9__25_0_1() const { return ___U3CU3E9__25_0_1; }
	inline Func_3_t25039A52ED82957816F93C2D9CF335791DA6FCFD ** get_address_of_U3CU3E9__25_0_1() { return &___U3CU3E9__25_0_1; }
	inline void set_U3CU3E9__25_0_1(Func_3_t25039A52ED82957816F93C2D9CF335791DA6FCFD * value)
	{
		___U3CU3E9__25_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_0_1), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


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


// UnityEngine.EventSystems.PointerInputModule_MouseState
struct  MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule_ButtonState> UnityEngine.EventSystems.PointerInputModule_MouseState::m_TrackedButtons
	List_1_t75FFBEBE24171F12D0459DE4BA90E0FD3E22A60E * ___m_TrackedButtons_0;

public:
	inline static int32_t get_offset_of_m_TrackedButtons_0() { return static_cast<int32_t>(offsetof(MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1, ___m_TrackedButtons_0)); }
	inline List_1_t75FFBEBE24171F12D0459DE4BA90E0FD3E22A60E * get_m_TrackedButtons_0() const { return ___m_TrackedButtons_0; }
	inline List_1_t75FFBEBE24171F12D0459DE4BA90E0FD3E22A60E ** get_address_of_m_TrackedButtons_0() { return &___m_TrackedButtons_0; }
	inline void set_m_TrackedButtons_0(List_1_t75FFBEBE24171F12D0459DE4BA90E0FD3E22A60E * value)
	{
		___m_TrackedButtons_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedButtons_0), (void*)value);
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


// Microsoft.MixedReality.Toolkit.Input.FocusEventData
struct  FocusEventData_tFBDB33B33F11F0F0AC4AE18A00E3C7CF43A83BD7  : public BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Input.FocusEventData::<Pointer>k__BackingField
	RuntimeObject* ___U3CPointerU3Ek__BackingField_2;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.FocusEventData::<OldFocusedObject>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3COldFocusedObjectU3Ek__BackingField_3;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.FocusEventData::<NewFocusedObject>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CNewFocusedObjectU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CPointerU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(FocusEventData_tFBDB33B33F11F0F0AC4AE18A00E3C7CF43A83BD7, ___U3CPointerU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CPointerU3Ek__BackingField_2() const { return ___U3CPointerU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CPointerU3Ek__BackingField_2() { return &___U3CPointerU3Ek__BackingField_2; }
	inline void set_U3CPointerU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CPointerU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPointerU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3COldFocusedObjectU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(FocusEventData_tFBDB33B33F11F0F0AC4AE18A00E3C7CF43A83BD7, ___U3COldFocusedObjectU3Ek__BackingField_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3COldFocusedObjectU3Ek__BackingField_3() const { return ___U3COldFocusedObjectU3Ek__BackingField_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3COldFocusedObjectU3Ek__BackingField_3() { return &___U3COldFocusedObjectU3Ek__BackingField_3; }
	inline void set_U3COldFocusedObjectU3Ek__BackingField_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3COldFocusedObjectU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COldFocusedObjectU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNewFocusedObjectU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(FocusEventData_tFBDB33B33F11F0F0AC4AE18A00E3C7CF43A83BD7, ___U3CNewFocusedObjectU3Ek__BackingField_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CNewFocusedObjectU3Ek__BackingField_4() const { return ___U3CNewFocusedObjectU3Ek__BackingField_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CNewFocusedObjectU3Ek__BackingField_4() { return &___U3CNewFocusedObjectU3Ek__BackingField_4; }
	inline void set_U3CNewFocusedObjectU3Ek__BackingField_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CNewFocusedObjectU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNewFocusedObjectU3Ek__BackingField_4), (void*)value);
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


// Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel
struct  RecognitionConfidenceLevel_t55D591F5AC58618C8D08862A5AA02E6EB234D19A 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RecognitionConfidenceLevel_t55D591F5AC58618C8D08862A5AA02E6EB234D19A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Nullable`1<UnityEngine.Vector3>
struct  Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 
{
public:
	// T System.Nullable`1::value
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258, ___value_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_value_0() const { return ___value_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.TimeSpan
struct  TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_0)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_2)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};


// UnityEngine.EventSystems.PointerEventData_FramePressState
struct  FramePressState_t4BB461B7704D7F72519B36A0C8B3370AB302E7A7 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData_FramePressState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FramePressState_t4BB461B7704D7F72519B36A0C8B3370AB302E7A7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventSystems.PointerEventData_InputButton
struct  InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData_InputButton::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventSystems.RaycastResult
struct  RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___m_GameObject_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___module_1)); }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_1), (void*)value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldPosition_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldNormal_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___screenPosition_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___screenPosition_9 = value;
	}

	inline static int32_t get_offset_of_displayIndex_10() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___displayIndex_10)); }
	inline int32_t get_displayIndex_10() const { return ___displayIndex_10; }
	inline int32_t* get_address_of_displayIndex_10() { return &___displayIndex_10; }
	inline void set_displayIndex_10(int32_t value)
	{
		___displayIndex_10 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_pinvoke
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_com
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
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

// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule_PointerData
struct  PointerData_tF120A74439BD4348AD619D3389299A2FD83AF72C  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule_PointerData::pointer
	RuntimeObject* ___pointer_0;
	// System.Nullable`1<UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule_PointerData::lastMousePoint3d
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___lastMousePoint3d_1;
	// UnityEngine.EventSystems.PointerEventData_FramePressState Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule_PointerData::nextPressState
	int32_t ___nextPressState_2;
	// UnityEngine.EventSystems.PointerInputModule_MouseState Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule_PointerData::mouseState
	MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 * ___mouseState_3;
	// UnityEngine.EventSystems.PointerEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule_PointerData::eventDataLeft
	PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventDataLeft_4;
	// UnityEngine.EventSystems.PointerEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule_PointerData::eventDataMiddle
	PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventDataMiddle_5;
	// UnityEngine.EventSystems.PointerEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule_PointerData::eventDataRight
	PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventDataRight_6;

public:
	inline static int32_t get_offset_of_pointer_0() { return static_cast<int32_t>(offsetof(PointerData_tF120A74439BD4348AD619D3389299A2FD83AF72C, ___pointer_0)); }
	inline RuntimeObject* get_pointer_0() const { return ___pointer_0; }
	inline RuntimeObject** get_address_of_pointer_0() { return &___pointer_0; }
	inline void set_pointer_0(RuntimeObject* value)
	{
		___pointer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointer_0), (void*)value);
	}

	inline static int32_t get_offset_of_lastMousePoint3d_1() { return static_cast<int32_t>(offsetof(PointerData_tF120A74439BD4348AD619D3389299A2FD83AF72C, ___lastMousePoint3d_1)); }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  get_lastMousePoint3d_1() const { return ___lastMousePoint3d_1; }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * get_address_of_lastMousePoint3d_1() { return &___lastMousePoint3d_1; }
	inline void set_lastMousePoint3d_1(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  value)
	{
		___lastMousePoint3d_1 = value;
	}

	inline static int32_t get_offset_of_nextPressState_2() { return static_cast<int32_t>(offsetof(PointerData_tF120A74439BD4348AD619D3389299A2FD83AF72C, ___nextPressState_2)); }
	inline int32_t get_nextPressState_2() const { return ___nextPressState_2; }
	inline int32_t* get_address_of_nextPressState_2() { return &___nextPressState_2; }
	inline void set_nextPressState_2(int32_t value)
	{
		___nextPressState_2 = value;
	}

	inline static int32_t get_offset_of_mouseState_3() { return static_cast<int32_t>(offsetof(PointerData_tF120A74439BD4348AD619D3389299A2FD83AF72C, ___mouseState_3)); }
	inline MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 * get_mouseState_3() const { return ___mouseState_3; }
	inline MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 ** get_address_of_mouseState_3() { return &___mouseState_3; }
	inline void set_mouseState_3(MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 * value)
	{
		___mouseState_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mouseState_3), (void*)value);
	}

	inline static int32_t get_offset_of_eventDataLeft_4() { return static_cast<int32_t>(offsetof(PointerData_tF120A74439BD4348AD619D3389299A2FD83AF72C, ___eventDataLeft_4)); }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * get_eventDataLeft_4() const { return ___eventDataLeft_4; }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 ** get_address_of_eventDataLeft_4() { return &___eventDataLeft_4; }
	inline void set_eventDataLeft_4(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * value)
	{
		___eventDataLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventDataLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_eventDataMiddle_5() { return static_cast<int32_t>(offsetof(PointerData_tF120A74439BD4348AD619D3389299A2FD83AF72C, ___eventDataMiddle_5)); }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * get_eventDataMiddle_5() const { return ___eventDataMiddle_5; }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 ** get_address_of_eventDataMiddle_5() { return &___eventDataMiddle_5; }
	inline void set_eventDataMiddle_5(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * value)
	{
		___eventDataMiddle_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventDataMiddle_5), (void*)value);
	}

	inline static int32_t get_offset_of_eventDataRight_6() { return static_cast<int32_t>(offsetof(PointerData_tF120A74439BD4348AD619D3389299A2FD83AF72C, ___eventDataRight_6)); }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * get_eventDataRight_6() const { return ___eventDataRight_6; }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 ** get_address_of_eventDataRight_6() { return &___eventDataRight_6; }
	inline void set_eventDataRight_6(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * value)
	{
		___eventDataRight_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventDataRight_6), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.EventSystems.PointerEventData
struct  PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954  : public BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData_InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerEnterU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___m_PointerPress_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerPress_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClastPressU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrawPointerPressU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerDragU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerClickU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerClickU3Ek__BackingField_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerClickU3Ek__BackingField_7() const { return ___U3CpointerClickU3Ek__BackingField_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerClickU3Ek__BackingField_7() { return &___U3CpointerClickU3Ek__BackingField_7; }
	inline void set_U3CpointerClickU3Ek__BackingField_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerClickU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerClickU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerCurrentRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerCurrentRaycastU3Ek__BackingField_8() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_8(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerPressRaycastU3Ek__BackingField_9)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerPressRaycastU3Ek__BackingField_9() const { return ___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return &___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_9(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_hovered_10() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___hovered_10)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_hovered_10() const { return ___hovered_10; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_hovered_10() { return &___hovered_10; }
	inline void set_hovered_10(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___hovered_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hovered_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CeligibleForClickU3Ek__BackingField_11)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_11() const { return ___U3CeligibleForClickU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_11() { return &___U3CeligibleForClickU3Ek__BackingField_11; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_11(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerIdU3Ek__BackingField_12)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_12() const { return ___U3CpointerIdU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_12() { return &___U3CpointerIdU3Ek__BackingField_12; }
	inline void set_U3CpointerIdU3Ek__BackingField_12(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpositionU3Ek__BackingField_13)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpositionU3Ek__BackingField_13() const { return ___U3CpositionU3Ek__BackingField_13; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpositionU3Ek__BackingField_13() { return &___U3CpositionU3Ek__BackingField_13; }
	inline void set_U3CpositionU3Ek__BackingField_13(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpositionU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdeltaU3Ek__BackingField_14)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CdeltaU3Ek__BackingField_14() const { return ___U3CdeltaU3Ek__BackingField_14; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CdeltaU3Ek__BackingField_14() { return &___U3CdeltaU3Ek__BackingField_14; }
	inline void set_U3CdeltaU3Ek__BackingField_14(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CdeltaU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpressPositionU3Ek__BackingField_15)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpressPositionU3Ek__BackingField_15() const { return ___U3CpressPositionU3Ek__BackingField_15; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpressPositionU3Ek__BackingField_15() { return &___U3CpressPositionU3Ek__BackingField_15; }
	inline void set_U3CpressPositionU3Ek__BackingField_15(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpressPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldPositionU3Ek__BackingField_16)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldPositionU3Ek__BackingField_16() const { return ___U3CworldPositionU3Ek__BackingField_16; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldPositionU3Ek__BackingField_16() { return &___U3CworldPositionU3Ek__BackingField_16; }
	inline void set_U3CworldPositionU3Ek__BackingField_16(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldPositionU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldNormalU3Ek__BackingField_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldNormalU3Ek__BackingField_17() const { return ___U3CworldNormalU3Ek__BackingField_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldNormalU3Ek__BackingField_17() { return &___U3CworldNormalU3Ek__BackingField_17; }
	inline void set_U3CworldNormalU3Ek__BackingField_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldNormalU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickTimeU3Ek__BackingField_18)); }
	inline float get_U3CclickTimeU3Ek__BackingField_18() const { return ___U3CclickTimeU3Ek__BackingField_18; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_18() { return &___U3CclickTimeU3Ek__BackingField_18; }
	inline void set_U3CclickTimeU3Ek__BackingField_18(float value)
	{
		___U3CclickTimeU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickCountU3Ek__BackingField_19)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_19() const { return ___U3CclickCountU3Ek__BackingField_19; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_19() { return &___U3CclickCountU3Ek__BackingField_19; }
	inline void set_U3CclickCountU3Ek__BackingField_19(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CscrollDeltaU3Ek__BackingField_20)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CscrollDeltaU3Ek__BackingField_20() const { return ___U3CscrollDeltaU3Ek__BackingField_20; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CscrollDeltaU3Ek__BackingField_20() { return &___U3CscrollDeltaU3Ek__BackingField_20; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_20(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CuseDragThresholdU3Ek__BackingField_21)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_21() const { return ___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_21() { return &___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_21(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdraggingU3Ek__BackingField_22)); }
	inline bool get_U3CdraggingU3Ek__BackingField_22() const { return ___U3CdraggingU3Ek__BackingField_22; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_22() { return &___U3CdraggingU3Ek__BackingField_22; }
	inline void set_U3CdraggingU3Ek__BackingField_22(bool value)
	{
		___U3CdraggingU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CbuttonU3Ek__BackingField_23)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_23() const { return ___U3CbuttonU3Ek__BackingField_23; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_23() { return &___U3CbuttonU3Ek__BackingField_23; }
	inline void set_U3CbuttonU3Ek__BackingField_23(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_23 = value;
	}
};


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.BaseInputEventData
struct  BaseInputEventData_tDE6C183FBF3A78A08F23F94D2C86C5D9072F0921  : public BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E
{
public:
	// System.DateTime Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<EventTime>k__BackingField
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___U3CEventTimeU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<InputSource>k__BackingField
	RuntimeObject* ___U3CInputSourceU3Ek__BackingField_3;
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<SourceId>k__BackingField
	uint32_t ___U3CSourceIdU3Ek__BackingField_4;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<MixedRealityInputAction>k__BackingField
	MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  ___U3CMixedRealityInputActionU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CEventTimeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseInputEventData_tDE6C183FBF3A78A08F23F94D2C86C5D9072F0921, ___U3CEventTimeU3Ek__BackingField_2)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_U3CEventTimeU3Ek__BackingField_2() const { return ___U3CEventTimeU3Ek__BackingField_2; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_U3CEventTimeU3Ek__BackingField_2() { return &___U3CEventTimeU3Ek__BackingField_2; }
	inline void set_U3CEventTimeU3Ek__BackingField_2(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___U3CEventTimeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CInputSourceU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseInputEventData_tDE6C183FBF3A78A08F23F94D2C86C5D9072F0921, ___U3CInputSourceU3Ek__BackingField_3)); }
	inline RuntimeObject* get_U3CInputSourceU3Ek__BackingField_3() const { return ___U3CInputSourceU3Ek__BackingField_3; }
	inline RuntimeObject** get_address_of_U3CInputSourceU3Ek__BackingField_3() { return &___U3CInputSourceU3Ek__BackingField_3; }
	inline void set_U3CInputSourceU3Ek__BackingField_3(RuntimeObject* value)
	{
		___U3CInputSourceU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInputSourceU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSourceIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BaseInputEventData_tDE6C183FBF3A78A08F23F94D2C86C5D9072F0921, ___U3CSourceIdU3Ek__BackingField_4)); }
	inline uint32_t get_U3CSourceIdU3Ek__BackingField_4() const { return ___U3CSourceIdU3Ek__BackingField_4; }
	inline uint32_t* get_address_of_U3CSourceIdU3Ek__BackingField_4() { return &___U3CSourceIdU3Ek__BackingField_4; }
	inline void set_U3CSourceIdU3Ek__BackingField_4(uint32_t value)
	{
		___U3CSourceIdU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CMixedRealityInputActionU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BaseInputEventData_tDE6C183FBF3A78A08F23F94D2C86C5D9072F0921, ___U3CMixedRealityInputActionU3Ek__BackingField_5)); }
	inline MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  get_U3CMixedRealityInputActionU3Ek__BackingField_5() const { return ___U3CMixedRealityInputActionU3Ek__BackingField_5; }
	inline MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35 * get_address_of_U3CMixedRealityInputActionU3Ek__BackingField_5() { return &___U3CMixedRealityInputActionU3Ek__BackingField_5; }
	inline void set_U3CMixedRealityInputActionU3Ek__BackingField_5(MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  value)
	{
		___U3CMixedRealityInputActionU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CMixedRealityInputActionU3Ek__BackingField_5))->___description_2), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.Input.SpeechCommands
struct  SpeechCommands_tAC1CAA2AB08C3D8EC3F62208C1BE2DEE17BE636C 
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Input.SpeechCommands::localizationKey
	String_t* ___localizationKey_0;
	// System.String Microsoft.MixedReality.Toolkit.Input.SpeechCommands::localizedKeyword
	String_t* ___localizedKeyword_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.SpeechCommands::keyword
	String_t* ___keyword_2;
	// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.SpeechCommands::keyCode
	int32_t ___keyCode_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.SpeechCommands::action
	MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  ___action_4;

public:
	inline static int32_t get_offset_of_localizationKey_0() { return static_cast<int32_t>(offsetof(SpeechCommands_tAC1CAA2AB08C3D8EC3F62208C1BE2DEE17BE636C, ___localizationKey_0)); }
	inline String_t* get_localizationKey_0() const { return ___localizationKey_0; }
	inline String_t** get_address_of_localizationKey_0() { return &___localizationKey_0; }
	inline void set_localizationKey_0(String_t* value)
	{
		___localizationKey_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localizationKey_0), (void*)value);
	}

	inline static int32_t get_offset_of_localizedKeyword_1() { return static_cast<int32_t>(offsetof(SpeechCommands_tAC1CAA2AB08C3D8EC3F62208C1BE2DEE17BE636C, ___localizedKeyword_1)); }
	inline String_t* get_localizedKeyword_1() const { return ___localizedKeyword_1; }
	inline String_t** get_address_of_localizedKeyword_1() { return &___localizedKeyword_1; }
	inline void set_localizedKeyword_1(String_t* value)
	{
		___localizedKeyword_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localizedKeyword_1), (void*)value);
	}

	inline static int32_t get_offset_of_keyword_2() { return static_cast<int32_t>(offsetof(SpeechCommands_tAC1CAA2AB08C3D8EC3F62208C1BE2DEE17BE636C, ___keyword_2)); }
	inline String_t* get_keyword_2() const { return ___keyword_2; }
	inline String_t** get_address_of_keyword_2() { return &___keyword_2; }
	inline void set_keyword_2(String_t* value)
	{
		___keyword_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyword_2), (void*)value);
	}

	inline static int32_t get_offset_of_keyCode_3() { return static_cast<int32_t>(offsetof(SpeechCommands_tAC1CAA2AB08C3D8EC3F62208C1BE2DEE17BE636C, ___keyCode_3)); }
	inline int32_t get_keyCode_3() const { return ___keyCode_3; }
	inline int32_t* get_address_of_keyCode_3() { return &___keyCode_3; }
	inline void set_keyCode_3(int32_t value)
	{
		___keyCode_3 = value;
	}

	inline static int32_t get_offset_of_action_4() { return static_cast<int32_t>(offsetof(SpeechCommands_tAC1CAA2AB08C3D8EC3F62208C1BE2DEE17BE636C, ___action_4)); }
	inline MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  get_action_4() const { return ___action_4; }
	inline MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35 * get_address_of_action_4() { return &___action_4; }
	inline void set_action_4(MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35  value)
	{
		___action_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___action_4))->___description_2), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.SpeechCommands
struct SpeechCommands_tAC1CAA2AB08C3D8EC3F62208C1BE2DEE17BE636C_marshaled_pinvoke
{
	char* ___localizationKey_0;
	char* ___localizedKeyword_1;
	char* ___keyword_2;
	int32_t ___keyCode_3;
	MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35_marshaled_pinvoke ___action_4;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.SpeechCommands
struct SpeechCommands_tAC1CAA2AB08C3D8EC3F62208C1BE2DEE17BE636C_marshaled_com
{
	Il2CppChar* ___localizationKey_0;
	Il2CppChar* ___localizedKeyword_1;
	Il2CppChar* ___keyword_2;
	int32_t ___keyCode_3;
	MixedRealityInputAction_t19FB81DFE1D2CA38D093CFC9979936AAD0471D35_marshaled_com ___action_4;
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


// Microsoft.MixedReality.Toolkit.Input.DictationEventData
struct  DictationEventData_tA1F305F741F4F44777C90987013669EB89A541C9  : public BaseInputEventData_tDE6C183FBF3A78A08F23F94D2C86C5D9072F0921
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Input.DictationEventData::<DictationResult>k__BackingField
	String_t* ___U3CDictationResultU3Ek__BackingField_6;
	// UnityEngine.AudioClip Microsoft.MixedReality.Toolkit.Input.DictationEventData::<DictationAudioClip>k__BackingField
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___U3CDictationAudioClipU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CDictationResultU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(DictationEventData_tA1F305F741F4F44777C90987013669EB89A541C9, ___U3CDictationResultU3Ek__BackingField_6)); }
	inline String_t* get_U3CDictationResultU3Ek__BackingField_6() const { return ___U3CDictationResultU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CDictationResultU3Ek__BackingField_6() { return &___U3CDictationResultU3Ek__BackingField_6; }
	inline void set_U3CDictationResultU3Ek__BackingField_6(String_t* value)
	{
		___U3CDictationResultU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDictationResultU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDictationAudioClipU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(DictationEventData_tA1F305F741F4F44777C90987013669EB89A541C9, ___U3CDictationAudioClipU3Ek__BackingField_7)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_U3CDictationAudioClipU3Ek__BackingField_7() const { return ___U3CDictationAudioClipU3Ek__BackingField_7; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_U3CDictationAudioClipU3Ek__BackingField_7() { return &___U3CDictationAudioClipU3Ek__BackingField_7; }
	inline void set_U3CDictationAudioClipU3Ek__BackingField_7(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___U3CDictationAudioClipU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDictationAudioClipU3Ek__BackingField_7), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputEventData
struct  InputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340  : public BaseInputEventData_tDE6C183FBF3A78A08F23F94D2C86C5D9072F0921
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.InputEventData::<Handedness>k__BackingField
	uint8_t ___U3CHandednessU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CHandednessU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(InputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340, ___U3CHandednessU3Ek__BackingField_6)); }
	inline uint8_t get_U3CHandednessU3Ek__BackingField_6() const { return ___U3CHandednessU3Ek__BackingField_6; }
	inline uint8_t* get_address_of_U3CHandednessU3Ek__BackingField_6() { return &___U3CHandednessU3Ek__BackingField_6; }
	inline void set_U3CHandednessU3Ek__BackingField_6(uint8_t value)
	{
		___U3CHandednessU3Ek__BackingField_6 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.SourceStateEventData
struct  SourceStateEventData_tC737D99EF91947EED9DB2A9939158561E95B9E64  : public BaseInputEventData_tDE6C183FBF3A78A08F23F94D2C86C5D9072F0921
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController Microsoft.MixedReality.Toolkit.Input.SourceStateEventData::<Controller>k__BackingField
	RuntimeObject* ___U3CControllerU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CControllerU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SourceStateEventData_tC737D99EF91947EED9DB2A9939158561E95B9E64, ___U3CControllerU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CControllerU3Ek__BackingField_6() const { return ___U3CControllerU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CControllerU3Ek__BackingField_6() { return &___U3CControllerU3Ek__BackingField_6; }
	inline void set_U3CControllerU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CControllerU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CControllerU3Ek__BackingField_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.SpeechEventData
struct  SpeechEventData_t8F9285E039F9C46D058B636C74BCC27498D9C7C0  : public BaseInputEventData_tDE6C183FBF3A78A08F23F94D2C86C5D9072F0921
{
public:
	// System.TimeSpan Microsoft.MixedReality.Toolkit.Input.SpeechEventData::<PhraseDuration>k__BackingField
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___U3CPhraseDurationU3Ek__BackingField_6;
	// System.DateTime Microsoft.MixedReality.Toolkit.Input.SpeechEventData::<PhraseStartTime>k__BackingField
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___U3CPhraseStartTimeU3Ek__BackingField_7;
	// Microsoft.MixedReality.Toolkit.Input.SpeechCommands Microsoft.MixedReality.Toolkit.Input.SpeechEventData::<Command>k__BackingField
	SpeechCommands_tAC1CAA2AB08C3D8EC3F62208C1BE2DEE17BE636C  ___U3CCommandU3Ek__BackingField_8;
	// Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel Microsoft.MixedReality.Toolkit.Input.SpeechEventData::<Confidence>k__BackingField
	int32_t ___U3CConfidenceU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_U3CPhraseDurationU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SpeechEventData_t8F9285E039F9C46D058B636C74BCC27498D9C7C0, ___U3CPhraseDurationU3Ek__BackingField_6)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_U3CPhraseDurationU3Ek__BackingField_6() const { return ___U3CPhraseDurationU3Ek__BackingField_6; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_U3CPhraseDurationU3Ek__BackingField_6() { return &___U3CPhraseDurationU3Ek__BackingField_6; }
	inline void set_U3CPhraseDurationU3Ek__BackingField_6(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___U3CPhraseDurationU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CPhraseStartTimeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(SpeechEventData_t8F9285E039F9C46D058B636C74BCC27498D9C7C0, ___U3CPhraseStartTimeU3Ek__BackingField_7)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_U3CPhraseStartTimeU3Ek__BackingField_7() const { return ___U3CPhraseStartTimeU3Ek__BackingField_7; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_U3CPhraseStartTimeU3Ek__BackingField_7() { return &___U3CPhraseStartTimeU3Ek__BackingField_7; }
	inline void set_U3CPhraseStartTimeU3Ek__BackingField_7(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___U3CPhraseStartTimeU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CCommandU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(SpeechEventData_t8F9285E039F9C46D058B636C74BCC27498D9C7C0, ___U3CCommandU3Ek__BackingField_8)); }
	inline SpeechCommands_tAC1CAA2AB08C3D8EC3F62208C1BE2DEE17BE636C  get_U3CCommandU3Ek__BackingField_8() const { return ___U3CCommandU3Ek__BackingField_8; }
	inline SpeechCommands_tAC1CAA2AB08C3D8EC3F62208C1BE2DEE17BE636C * get_address_of_U3CCommandU3Ek__BackingField_8() { return &___U3CCommandU3Ek__BackingField_8; }
	inline void set_U3CCommandU3Ek__BackingField_8(SpeechCommands_tAC1CAA2AB08C3D8EC3F62208C1BE2DEE17BE636C  value)
	{
		___U3CCommandU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CCommandU3Ek__BackingField_8))->___localizationKey_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CCommandU3Ek__BackingField_8))->___localizedKeyword_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CCommandU3Ek__BackingField_8))->___keyword_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CCommandU3Ek__BackingField_8))->___action_4))->___description_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CConfidenceU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(SpeechEventData_t8F9285E039F9C46D058B636C74BCC27498D9C7C0, ___U3CConfidenceU3Ek__BackingField_9)); }
	inline int32_t get_U3CConfidenceU3Ek__BackingField_9() const { return ___U3CConfidenceU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CConfidenceU3Ek__BackingField_9() { return &___U3CConfidenceU3Ek__BackingField_9; }
	inline void set_U3CConfidenceU3Ek__BackingField_9(int32_t value)
	{
		___U3CConfidenceU3Ek__BackingField_9 = value;
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Input.HandMeshInfo>
struct  InputEventData_1_tCD17D8B2C5BB4781E9073B160FBD5F8E8C49B367  : public InputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.InputEventData`1::<InputData>k__BackingField
	HandMeshInfo_t2149B356EA6B50B1E60C46E30EF537D6D8E78566 * ___U3CInputDataU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CInputDataU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(InputEventData_1_tCD17D8B2C5BB4781E9073B160FBD5F8E8C49B367, ___U3CInputDataU3Ek__BackingField_7)); }
	inline HandMeshInfo_t2149B356EA6B50B1E60C46E30EF537D6D8E78566 * get_U3CInputDataU3Ek__BackingField_7() const { return ___U3CInputDataU3Ek__BackingField_7; }
	inline HandMeshInfo_t2149B356EA6B50B1E60C46E30EF537D6D8E78566 ** get_address_of_U3CInputDataU3Ek__BackingField_7() { return &___U3CInputDataU3Ek__BackingField_7; }
	inline void set_U3CInputDataU3Ek__BackingField_7(HandMeshInfo_t2149B356EA6B50B1E60C46E30EF537D6D8E78566 * value)
	{
		___U3CInputDataU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInputDataU3Ek__BackingField_7), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct  InputEventData_1_t6158ACFE1C7FBC5703A33F92BB8B93E681AFF1D2  : public InputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.InputEventData`1::<InputData>k__BackingField
	MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  ___U3CInputDataU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CInputDataU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(InputEventData_1_t6158ACFE1C7FBC5703A33F92BB8B93E681AFF1D2, ___U3CInputDataU3Ek__BackingField_7)); }
	inline MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  get_U3CInputDataU3Ek__BackingField_7() const { return ___U3CInputDataU3Ek__BackingField_7; }
	inline MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5 * get_address_of_U3CInputDataU3Ek__BackingField_7() { return &___U3CInputDataU3Ek__BackingField_7; }
	inline void set_U3CInputDataU3Ek__BackingField_7(MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  value)
	{
		___U3CInputDataU3Ek__BackingField_7 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Collections.Generic.IDictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>>
struct  InputEventData_1_tCC6F77EA129BA5BB32CA4B26D9555B82F923CE62  : public InputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.InputEventData`1::<InputData>k__BackingField
	RuntimeObject* ___U3CInputDataU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CInputDataU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(InputEventData_1_tCC6F77EA129BA5BB32CA4B26D9555B82F923CE62, ___U3CInputDataU3Ek__BackingField_7)); }
	inline RuntimeObject* get_U3CInputDataU3Ek__BackingField_7() const { return ___U3CInputDataU3Ek__BackingField_7; }
	inline RuntimeObject** get_address_of_U3CInputDataU3Ek__BackingField_7() { return &___U3CInputDataU3Ek__BackingField_7; }
	inline void set_U3CInputDataU3Ek__BackingField_7(RuntimeObject* value)
	{
		___U3CInputDataU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInputDataU3Ek__BackingField_7), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Single>
struct  InputEventData_1_tE655DA67179834FFBDF6C1C78CF03AEC837CDCAA  : public InputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.InputEventData`1::<InputData>k__BackingField
	float ___U3CInputDataU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CInputDataU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(InputEventData_1_tE655DA67179834FFBDF6C1C78CF03AEC837CDCAA, ___U3CInputDataU3Ek__BackingField_7)); }
	inline float get_U3CInputDataU3Ek__BackingField_7() const { return ___U3CInputDataU3Ek__BackingField_7; }
	inline float* get_address_of_U3CInputDataU3Ek__BackingField_7() { return &___U3CInputDataU3Ek__BackingField_7; }
	inline void set_U3CInputDataU3Ek__BackingField_7(float value)
	{
		___U3CInputDataU3Ek__BackingField_7 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Quaternion>
struct  InputEventData_1_tC01F6DE63DE68B1AD94AB5BD08274141F73EFAB0  : public InputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.InputEventData`1::<InputData>k__BackingField
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3CInputDataU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CInputDataU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(InputEventData_1_tC01F6DE63DE68B1AD94AB5BD08274141F73EFAB0, ___U3CInputDataU3Ek__BackingField_7)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_U3CInputDataU3Ek__BackingField_7() const { return ___U3CInputDataU3Ek__BackingField_7; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_U3CInputDataU3Ek__BackingField_7() { return &___U3CInputDataU3Ek__BackingField_7; }
	inline void set_U3CInputDataU3Ek__BackingField_7(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___U3CInputDataU3Ek__BackingField_7 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector2>
struct  InputEventData_1_t3CB921E01118FB1DEE0FAEAF6A6787342EA38D66  : public InputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.InputEventData`1::<InputData>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CInputDataU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CInputDataU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(InputEventData_1_t3CB921E01118FB1DEE0FAEAF6A6787342EA38D66, ___U3CInputDataU3Ek__BackingField_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CInputDataU3Ek__BackingField_7() const { return ___U3CInputDataU3Ek__BackingField_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CInputDataU3Ek__BackingField_7() { return &___U3CInputDataU3Ek__BackingField_7; }
	inline void set_U3CInputDataU3Ek__BackingField_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CInputDataU3Ek__BackingField_7 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector3>
struct  InputEventData_1_t40F1EC00AC203CC6880075975AA0341CD74469AA  : public InputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.InputEventData`1::<InputData>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CInputDataU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CInputDataU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(InputEventData_1_t40F1EC00AC203CC6880075975AA0341CD74469AA, ___U3CInputDataU3Ek__BackingField_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CInputDataU3Ek__BackingField_7() const { return ___U3CInputDataU3Ek__BackingField_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CInputDataU3Ek__BackingField_7() { return &___U3CInputDataU3Ek__BackingField_7; }
	inline void set_U3CInputDataU3Ek__BackingField_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CInputDataU3Ek__BackingField_7 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData
struct  MixedRealityPointerEventData_t7881133BF2C96F77D750AA6A5FEC7C588183B3BD  : public InputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData::<Pointer>k__BackingField
	RuntimeObject* ___U3CPointerU3Ek__BackingField_7;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData::<Count>k__BackingField
	int32_t ___U3CCountU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CPointerU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(MixedRealityPointerEventData_t7881133BF2C96F77D750AA6A5FEC7C588183B3BD, ___U3CPointerU3Ek__BackingField_7)); }
	inline RuntimeObject* get_U3CPointerU3Ek__BackingField_7() const { return ___U3CPointerU3Ek__BackingField_7; }
	inline RuntimeObject** get_address_of_U3CPointerU3Ek__BackingField_7() { return &___U3CPointerU3Ek__BackingField_7; }
	inline void set_U3CPointerU3Ek__BackingField_7(RuntimeObject* value)
	{
		___U3CPointerU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPointerU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCountU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(MixedRealityPointerEventData_t7881133BF2C96F77D750AA6A5FEC7C588183B3BD, ___U3CCountU3Ek__BackingField_8)); }
	inline int32_t get_U3CCountU3Ek__BackingField_8() const { return ___U3CCountU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CCountU3Ek__BackingField_8() { return &___U3CCountU3Ek__BackingField_8; }
	inline void set_U3CCountU3Ek__BackingField_8(int32_t value)
	{
		___U3CCountU3Ek__BackingField_8 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.TrackingState>
struct  SourcePoseEventData_1_t969CC2220FC27E0DDB17619431135BC2EE948BAA  : public SourceStateEventData_tC737D99EF91947EED9DB2A9939158561E95B9E64
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1::<SourceData>k__BackingField
	int32_t ___U3CSourceDataU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CSourceDataU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(SourcePoseEventData_1_t969CC2220FC27E0DDB17619431135BC2EE948BAA, ___U3CSourceDataU3Ek__BackingField_7)); }
	inline int32_t get_U3CSourceDataU3Ek__BackingField_7() const { return ___U3CSourceDataU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CSourceDataU3Ek__BackingField_7() { return &___U3CSourceDataU3Ek__BackingField_7; }
	inline void set_U3CSourceDataU3Ek__BackingField_7(int32_t value)
	{
		___U3CSourceDataU3Ek__BackingField_7 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct  SourcePoseEventData_1_t657ADCF01C75C585700D387D3A9D7E0224573931  : public SourceStateEventData_tC737D99EF91947EED9DB2A9939158561E95B9E64
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1::<SourceData>k__BackingField
	MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  ___U3CSourceDataU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CSourceDataU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(SourcePoseEventData_1_t657ADCF01C75C585700D387D3A9D7E0224573931, ___U3CSourceDataU3Ek__BackingField_7)); }
	inline MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  get_U3CSourceDataU3Ek__BackingField_7() const { return ___U3CSourceDataU3Ek__BackingField_7; }
	inline MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5 * get_address_of_U3CSourceDataU3Ek__BackingField_7() { return &___U3CSourceDataU3Ek__BackingField_7; }
	inline void set_U3CSourceDataU3Ek__BackingField_7(MixedRealityPose_tF3E06866A59B8E5C623C290616502C97D9880BF5  value)
	{
		___U3CSourceDataU3Ek__BackingField_7 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Quaternion>
struct  SourcePoseEventData_1_tA74EBE5022478D8141994E3869840238FED98B95  : public SourceStateEventData_tC737D99EF91947EED9DB2A9939158561E95B9E64
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1::<SourceData>k__BackingField
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3CSourceDataU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CSourceDataU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(SourcePoseEventData_1_tA74EBE5022478D8141994E3869840238FED98B95, ___U3CSourceDataU3Ek__BackingField_7)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_U3CSourceDataU3Ek__BackingField_7() const { return ___U3CSourceDataU3Ek__BackingField_7; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_U3CSourceDataU3Ek__BackingField_7() { return &___U3CSourceDataU3Ek__BackingField_7; }
	inline void set_U3CSourceDataU3Ek__BackingField_7(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___U3CSourceDataU3Ek__BackingField_7 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector2>
struct  SourcePoseEventData_1_t033FA7B2DFD448AE19A6B09E1580236E2FBAFF48  : public SourceStateEventData_tC737D99EF91947EED9DB2A9939158561E95B9E64
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1::<SourceData>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CSourceDataU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CSourceDataU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(SourcePoseEventData_1_t033FA7B2DFD448AE19A6B09E1580236E2FBAFF48, ___U3CSourceDataU3Ek__BackingField_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CSourceDataU3Ek__BackingField_7() const { return ___U3CSourceDataU3Ek__BackingField_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CSourceDataU3Ek__BackingField_7() { return &___U3CSourceDataU3Ek__BackingField_7; }
	inline void set_U3CSourceDataU3Ek__BackingField_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CSourceDataU3Ek__BackingField_7 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector3>
struct  SourcePoseEventData_1_tE815B8D81A2E769059E352A21F4B09B4A4C5192A  : public SourceStateEventData_tC737D99EF91947EED9DB2A9939158561E95B9E64
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1::<SourceData>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CSourceDataU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CSourceDataU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(SourcePoseEventData_1_tE815B8D81A2E769059E352A21F4B09B4A4C5192A, ___U3CSourceDataU3Ek__BackingField_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CSourceDataU3Ek__BackingField_7() const { return ___U3CSourceDataU3Ek__BackingField_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CSourceDataU3Ek__BackingField_7() { return &___U3CSourceDataU3Ek__BackingField_7; }
	inline void set_U3CSourceDataU3Ek__BackingField_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CSourceDataU3Ek__BackingField_7 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.HandTrackingInputEventData
struct  HandTrackingInputEventData_tE85C6A2DE13B9D871CAC18B726B5EFB8687960BC  : public InputEventData_1_t40F1EC00AC203CC6880075975AA0341CD74469AA
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController Microsoft.MixedReality.Toolkit.Input.HandTrackingInputEventData::<Controller>k__BackingField
	RuntimeObject* ___U3CControllerU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CControllerU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(HandTrackingInputEventData_tE85C6A2DE13B9D871CAC18B726B5EFB8687960BC, ___U3CControllerU3Ek__BackingField_8)); }
	inline RuntimeObject* get_U3CControllerU3Ek__BackingField_8() const { return ___U3CControllerU3Ek__BackingField_8; }
	inline RuntimeObject** get_address_of_U3CControllerU3Ek__BackingField_8() { return &___U3CControllerU3Ek__BackingField_8; }
	inline void set_U3CControllerU3Ek__BackingField_8(RuntimeObject* value)
	{
		___U3CControllerU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CControllerU3Ek__BackingField_8), (void*)value);
	}
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


// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<System.Object>(UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method);

// System.Void UnityEngine.EventSystems.PointerInputModule/MouseState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseState__ctor_m16EF8D45AF8A178368547BD1CE4FBF9DBC563605 (MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.PointerEventData::.ctor(UnityEngine.EventSystems.EventSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventData__ctor_m3A877590C20995B4F549C6923BBE2B0901A684F2 (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___eventSystem0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5A9B8127662E6DA4ED0BB77C2CEE6BC68869DC73 (U3CU3Ec_t813C0BCD29DF294DFE9EB626784A877CC1FD5B1D * __this, const RuntimeMethod* method);
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.SourceStateEventData>(UnityEngine.EventSystems.BaseEventData)
inline SourceStateEventData_tC737D99EF91947EED9DB2A9939158561E95B9E64 * ExecuteEvents_ValidateEventData_TisSourceStateEventData_tC737D99EF91947EED9DB2A9939158561E95B9E64_mB6577E99783EFDC9E8413B30B8260766976C1B7E (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  SourceStateEventData_tC737D99EF91947EED9DB2A9939158561E95B9E64 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.TrackingState>>(UnityEngine.EventSystems.BaseEventData)
inline SourcePoseEventData_1_t969CC2220FC27E0DDB17619431135BC2EE948BAA * ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t969CC2220FC27E0DDB17619431135BC2EE948BAA_mDA118E3404F55AFCA6CEEAF7A7DF49579565B1F0 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  SourcePoseEventData_1_t969CC2220FC27E0DDB17619431135BC2EE948BAA * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector2>>(UnityEngine.EventSystems.BaseEventData)
inline SourcePoseEventData_1_t033FA7B2DFD448AE19A6B09E1580236E2FBAFF48 * ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t033FA7B2DFD448AE19A6B09E1580236E2FBAFF48_m4B6F345B2E84FE15687E3780FB2318F84D9EB812 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  SourcePoseEventData_1_t033FA7B2DFD448AE19A6B09E1580236E2FBAFF48 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector3>>(UnityEngine.EventSystems.BaseEventData)
inline SourcePoseEventData_1_tE815B8D81A2E769059E352A21F4B09B4A4C5192A * ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_tE815B8D81A2E769059E352A21F4B09B4A4C5192A_m05A3C9BED811B9AE5CCBA889A2ACADC8B2849412 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  SourcePoseEventData_1_tE815B8D81A2E769059E352A21F4B09B4A4C5192A * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Quaternion>>(UnityEngine.EventSystems.BaseEventData)
inline SourcePoseEventData_1_tA74EBE5022478D8141994E3869840238FED98B95 * ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_tA74EBE5022478D8141994E3869840238FED98B95_mF9AA3C8660156FF100D87AF58EBC1B4B1B261C51 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  SourcePoseEventData_1_tA74EBE5022478D8141994E3869840238FED98B95 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>>(UnityEngine.EventSystems.BaseEventData)
inline SourcePoseEventData_1_t657ADCF01C75C585700D387D3A9D7E0224573931 * ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t657ADCF01C75C585700D387D3A9D7E0224573931_m0DA9C5C9C55D8490F7EB1A59692BABB63BCF310E (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  SourcePoseEventData_1_t657ADCF01C75C585700D387D3A9D7E0224573931 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.FocusEventData>(UnityEngine.EventSystems.BaseEventData)
inline FocusEventData_tFBDB33B33F11F0F0AC4AE18A00E3C7CF43A83BD7 * ExecuteEvents_ValidateEventData_TisFocusEventData_tFBDB33B33F11F0F0AC4AE18A00E3C7CF43A83BD7_m86DD1AE7B33C3D255BA6D39ACED1F853131A6773 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  FocusEventData_tFBDB33B33F11F0F0AC4AE18A00E3C7CF43A83BD7 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData>(UnityEngine.EventSystems.BaseEventData)
inline MixedRealityPointerEventData_t7881133BF2C96F77D750AA6A5FEC7C588183B3BD * ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_t7881133BF2C96F77D750AA6A5FEC7C588183B3BD_m9DCBEF97A4B701E937221551089D5631A2CCCCAF (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  MixedRealityPointerEventData_t7881133BF2C96F77D750AA6A5FEC7C588183B3BD * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.InputEventData>(UnityEngine.EventSystems.BaseEventData)
inline InputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340 * ExecuteEvents_ValidateEventData_TisInputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340_m0EEC9EE692BED08CB3E5F43CE67E0BBB5B600693 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  InputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Single>>(UnityEngine.EventSystems.BaseEventData)
inline InputEventData_1_tE655DA67179834FFBDF6C1C78CF03AEC837CDCAA * ExecuteEvents_ValidateEventData_TisInputEventData_1_tE655DA67179834FFBDF6C1C78CF03AEC837CDCAA_mAF27536AF51BD12C3E57A726F68E729F3821718A (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  InputEventData_1_tE655DA67179834FFBDF6C1C78CF03AEC837CDCAA * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector2>>(UnityEngine.EventSystems.BaseEventData)
inline InputEventData_1_t3CB921E01118FB1DEE0FAEAF6A6787342EA38D66 * ExecuteEvents_ValidateEventData_TisInputEventData_1_t3CB921E01118FB1DEE0FAEAF6A6787342EA38D66_m6A9EAE737C4C9B86596B71AB2D50C9E3800559BE (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  InputEventData_1_t3CB921E01118FB1DEE0FAEAF6A6787342EA38D66 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector3>>(UnityEngine.EventSystems.BaseEventData)
inline InputEventData_1_t40F1EC00AC203CC6880075975AA0341CD74469AA * ExecuteEvents_ValidateEventData_TisInputEventData_1_t40F1EC00AC203CC6880075975AA0341CD74469AA_m182F04C39F472481DF4D1E1E9BAC4BCC2AA0452A (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  InputEventData_1_t40F1EC00AC203CC6880075975AA0341CD74469AA * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Quaternion>>(UnityEngine.EventSystems.BaseEventData)
inline InputEventData_1_tC01F6DE63DE68B1AD94AB5BD08274141F73EFAB0 * ExecuteEvents_ValidateEventData_TisInputEventData_1_tC01F6DE63DE68B1AD94AB5BD08274141F73EFAB0_mB42E04FF7089340C2A39842BB21629684CEB1A28 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  InputEventData_1_tC01F6DE63DE68B1AD94AB5BD08274141F73EFAB0 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>>(UnityEngine.EventSystems.BaseEventData)
inline InputEventData_1_t6158ACFE1C7FBC5703A33F92BB8B93E681AFF1D2 * ExecuteEvents_ValidateEventData_TisInputEventData_1_t6158ACFE1C7FBC5703A33F92BB8B93E681AFF1D2_m5799007909DE072939012567D3E2CCF36BCF12A7 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  InputEventData_1_t6158ACFE1C7FBC5703A33F92BB8B93E681AFF1D2 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.SpeechEventData>(UnityEngine.EventSystems.BaseEventData)
inline SpeechEventData_t8F9285E039F9C46D058B636C74BCC27498D9C7C0 * ExecuteEvents_ValidateEventData_TisSpeechEventData_t8F9285E039F9C46D058B636C74BCC27498D9C7C0_m1DF1056AD5B9AFBE75B93CAC85CF688577BA071A (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  SpeechEventData_t8F9285E039F9C46D058B636C74BCC27498D9C7C0 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.DictationEventData>(UnityEngine.EventSystems.BaseEventData)
inline DictationEventData_tA1F305F741F4F44777C90987013669EB89A541C9 * ExecuteEvents_ValidateEventData_TisDictationEventData_tA1F305F741F4F44777C90987013669EB89A541C9_m6C45A235B47BC1076AA7CF790915C9847EEED6E6 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  DictationEventData_tA1F305F741F4F44777C90987013669EB89A541C9 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Collections.Generic.IDictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>>>(UnityEngine.EventSystems.BaseEventData)
inline InputEventData_1_tCC6F77EA129BA5BB32CA4B26D9555B82F923CE62 * ExecuteEvents_ValidateEventData_TisInputEventData_1_tCC6F77EA129BA5BB32CA4B26D9555B82F923CE62_mFBB4A36A0C264360F11B30F81B895CC2CE9132B0 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  InputEventData_1_tCC6F77EA129BA5BB32CA4B26D9555B82F923CE62 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Input.HandMeshInfo>>(UnityEngine.EventSystems.BaseEventData)
inline InputEventData_1_tCD17D8B2C5BB4781E9073B160FBD5F8E8C49B367 * ExecuteEvents_ValidateEventData_TisInputEventData_1_tCD17D8B2C5BB4781E9073B160FBD5F8E8C49B367_mEDD269A78AD5DD2E183C9D29C15EAE50AB521C4A (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  InputEventData_1_tCD17D8B2C5BB4781E9073B160FBD5F8E8C49B367 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.HandTrackingInputEventData>(UnityEngine.EventSystems.BaseEventData)
inline HandTrackingInputEventData_tE85C6A2DE13B9D871CAC18B726B5EFB8687960BC * ExecuteEvents_ValidateEventData_TisHandTrackingInputEventData_tE85C6A2DE13B9D871CAC18B726B5EFB8687960BC_m89E52F63BCA56659A94A747AD73A0FEF2D2FE229 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  HandTrackingInputEventData_tE85C6A2DE13B9D871CAC18B726B5EFB8687960BC * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0BB3ACCC68F2EF575E1279CBBA54FFDEE409CCD2 (U3CU3Ec_tDBA99090C30B1568CB760F0F62733CA74F874FC5 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule_PointerData::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,UnityEngine.EventSystems.EventSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerData__ctor_m3B78E95C82923CBF9770BFDCB71829E621D4FD93 (PointerData_tF120A74439BD4348AD619D3389299A2FD83AF72C * __this, RuntimeObject* ___pointer0, EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___eventSystem1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PointerData__ctor_m3B78E95C82923CBF9770BFDCB71829E621D4FD93_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public PointerEventData.FramePressState nextPressState = PointerEventData.FramePressState.NotChanged;
		__this->set_nextPressState_2(3);
		// public MouseState mouseState = new MouseState();
		MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 * L_0 = (MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 *)il2cpp_codegen_object_new(MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1_il2cpp_TypeInfo_var);
		MouseState__ctor_m16EF8D45AF8A178368547BD1CE4FBF9DBC563605(L_0, /*hidden argument*/NULL);
		__this->set_mouseState_3(L_0);
		// public PointerData(IMixedRealityPointer pointer, EventSystem eventSystem)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.pointer = pointer;
		RuntimeObject* L_1 = ___pointer0;
		__this->set_pointer_0(L_1);
		// eventDataLeft = new PointerEventData(eventSystem);
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_2 = ___eventSystem1;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_3 = (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *)il2cpp_codegen_object_new(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954_il2cpp_TypeInfo_var);
		PointerEventData__ctor_m3A877590C20995B4F549C6923BBE2B0901A684F2(L_3, L_2, /*hidden argument*/NULL);
		__this->set_eventDataLeft_4(L_3);
		// eventDataMiddle = new PointerEventData(eventSystem);
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_4 = ___eventSystem1;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_5 = (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *)il2cpp_codegen_object_new(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954_il2cpp_TypeInfo_var);
		PointerEventData__ctor_m3A877590C20995B4F549C6923BBE2B0901A684F2(L_5, L_4, /*hidden argument*/NULL);
		__this->set_eventDataMiddle_5(L_5);
		// eventDataRight = new PointerEventData(eventSystem);
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_6 = ___eventSystem1;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_7 = (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *)il2cpp_codegen_object_new(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954_il2cpp_TypeInfo_var);
		PointerEventData__ctor_m3A877590C20995B4F549C6923BBE2B0901A684F2(L_7, L_6, /*hidden argument*/NULL);
		__this->set_eventDataRight_6(L_7);
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
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m00899DB85B6C994B6D5865A24C6345FF38504B4C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m00899DB85B6C994B6D5865A24C6345FF38504B4C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t813C0BCD29DF294DFE9EB626784A877CC1FD5B1D * L_0 = (U3CU3Ec_t813C0BCD29DF294DFE9EB626784A877CC1FD5B1D *)il2cpp_codegen_object_new(U3CU3Ec_t813C0BCD29DF294DFE9EB626784A877CC1FD5B1D_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m5A9B8127662E6DA4ED0BB77C2CEE6BC68869DC73(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t813C0BCD29DF294DFE9EB626784A877CC1FD5B1D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t813C0BCD29DF294DFE9EB626784A877CC1FD5B1D_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5A9B8127662E6DA4ED0BB77C2CEE6BC68869DC73 (U3CU3Ec_t813C0BCD29DF294DFE9EB626784A877CC1FD5B1D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem_<>c::<.cctor>b__196_0(Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourceStateHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__196_0_m8876C4A4E6143C9A80D61D6143D57F4AE79ACF0F (U3CU3Ec_t813C0BCD29DF294DFE9EB626784A877CC1FD5B1D * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__196_0_m8876C4A4E6143C9A80D61D6143D57F4AE79ACF0F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SourceStateEventData_tC737D99EF91947EED9DB2A9939158561E95B9E64 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<SourceStateEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		SourceStateEventData_tC737D99EF91947EED9DB2A9939158561E95B9E64 * L_1 = ExecuteEvents_ValidateEventData_TisSourceStateEventData_tC737D99EF91947EED9DB2A9939158561E95B9E64_mB6577E99783EFDC9E8413B30B8260766976C1B7E(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisSourceStateEventData_tC737D99EF91947EED9DB2A9939158561E95B9E64_mB6577E99783EFDC9E8413B30B8260766976C1B7E_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnSourceDetected(casted);
		RuntimeObject* L_2 = ___handler0;
		SourceStateEventData_tC737D99EF91947EED9DB2A9939158561E95B9E64 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< SourceStateEventData_tC737D99EF91947EED9DB2A9939158561E95B9E64 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourceStateHandler::OnSourceDetected(Microsoft.MixedReality.Toolkit.Input.SourceStateEventData) */, IMixedRealitySourceStateHandler_tFF4648994821AB43DA96EB2E501BA7C3F1C8D6FD_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem_<>c::<.cctor>b__196_1(Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourceStateHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__196_1_m73356EF687234404EC6C6305AD0006C2F2C67EDA (U3CU3Ec_t813C0BCD29DF294DFE9EB626784A877CC1FD5B1D * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__196_1_m73356EF687234404EC6C6305AD0006C2F2C67EDA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SourceStateEventData_tC737D99EF91947EED9DB2A9939158561E95B9E64 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<SourceStateEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		SourceStateEventData_tC737D99EF91947EED9DB2A9939158561E95B9E64 * L_1 = ExecuteEvents_ValidateEventData_TisSourceStateEventData_tC737D99EF91947EED9DB2A9939158561E95B9E64_mB6577E99783EFDC9E8413B30B8260766976C1B7E(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisSourceStateEventData_tC737D99EF91947EED9DB2A9939158561E95B9E64_mB6577E99783EFDC9E8413B30B8260766976C1B7E_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnSourceLost(casted);
		RuntimeObject* L_2 = ___handler0;
		SourceStateEventData_tC737D99EF91947EED9DB2A9939158561E95B9E64 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< SourceStateEventData_tC737D99EF91947EED9DB2A9939158561E95B9E64 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourceStateHandler::OnSourceLost(Microsoft.MixedReality.Toolkit.Input.SourceStateEventData) */, IMixedRealitySourceStateHandler_tFF4648994821AB43DA96EB2E501BA7C3F1C8D6FD_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem_<>c::<.cctor>b__196_2(Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__196_2_m8F101A120CC0C3CA05F8FE7348A1C3700F5399F9 (U3CU3Ec_t813C0BCD29DF294DFE9EB626784A877CC1FD5B1D * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__196_2_m8F101A120CC0C3CA05F8FE7348A1C3700F5399F9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SourcePoseEventData_1_t969CC2220FC27E0DDB17619431135BC2EE948BAA * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<SourcePoseEventData<TrackingState>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		SourcePoseEventData_1_t969CC2220FC27E0DDB17619431135BC2EE948BAA * L_1 = ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t969CC2220FC27E0DDB17619431135BC2EE948BAA_mDA118E3404F55AFCA6CEEAF7A7DF49579565B1F0(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t969CC2220FC27E0DDB17619431135BC2EE948BAA_mDA118E3404F55AFCA6CEEAF7A7DF49579565B1F0_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnSourcePoseChanged(casted);
		RuntimeObject* L_2 = ___handler0;
		SourcePoseEventData_1_t969CC2220FC27E0DDB17619431135BC2EE948BAA * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< SourcePoseEventData_1_t969CC2220FC27E0DDB17619431135BC2EE948BAA * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler::OnSourcePoseChanged(Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.TrackingState>) */, IMixedRealitySourcePoseHandler_t4737D525AD19FEC3694B7B127F3443334B27FF10_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem_<>c::<.cctor>b__196_3(Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__196_3_mE75CAB49852B8F8C09C1B982A06CE9BC40EF4774 (U3CU3Ec_t813C0BCD29DF294DFE9EB626784A877CC1FD5B1D * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__196_3_mE75CAB49852B8F8C09C1B982A06CE9BC40EF4774_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SourcePoseEventData_1_t033FA7B2DFD448AE19A6B09E1580236E2FBAFF48 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<SourcePoseEventData<Vector2>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		SourcePoseEventData_1_t033FA7B2DFD448AE19A6B09E1580236E2FBAFF48 * L_1 = ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t033FA7B2DFD448AE19A6B09E1580236E2FBAFF48_m4B6F345B2E84FE15687E3780FB2318F84D9EB812(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t033FA7B2DFD448AE19A6B09E1580236E2FBAFF48_m4B6F345B2E84FE15687E3780FB2318F84D9EB812_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnSourcePoseChanged(casted);
		RuntimeObject* L_2 = ___handler0;
		SourcePoseEventData_1_t033FA7B2DFD448AE19A6B09E1580236E2FBAFF48 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< SourcePoseEventData_1_t033FA7B2DFD448AE19A6B09E1580236E2FBAFF48 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler::OnSourcePoseChanged(Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector2>) */, IMixedRealitySourcePoseHandler_t4737D525AD19FEC3694B7B127F3443334B27FF10_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem_<>c::<.cctor>b__196_4(Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__196_4_mD5A136F28FB264BB699C9A3CE64D922C1D36B821 (U3CU3Ec_t813C0BCD29DF294DFE9EB626784A877CC1FD5B1D * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__196_4_mD5A136F28FB264BB699C9A3CE64D922C1D36B821_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SourcePoseEventData_1_tE815B8D81A2E769059E352A21F4B09B4A4C5192A * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<SourcePoseEventData<Vector3>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		SourcePoseEventData_1_tE815B8D81A2E769059E352A21F4B09B4A4C5192A * L_1 = ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_tE815B8D81A2E769059E352A21F4B09B4A4C5192A_m05A3C9BED811B9AE5CCBA889A2ACADC8B2849412(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_tE815B8D81A2E769059E352A21F4B09B4A4C5192A_m05A3C9BED811B9AE5CCBA889A2ACADC8B2849412_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnSourcePoseChanged(casted);
		RuntimeObject* L_2 = ___handler0;
		SourcePoseEventData_1_tE815B8D81A2E769059E352A21F4B09B4A4C5192A * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< SourcePoseEventData_1_tE815B8D81A2E769059E352A21F4B09B4A4C5192A * >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler::OnSourcePoseChanged(Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector3>) */, IMixedRealitySourcePoseHandler_t4737D525AD19FEC3694B7B127F3443334B27FF10_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem_<>c::<.cctor>b__196_5(Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__196_5_m96975C8E23632AFD26603191823C725A0C8FB5F6 (U3CU3Ec_t813C0BCD29DF294DFE9EB626784A877CC1FD5B1D * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__196_5_m96975C8E23632AFD26603191823C725A0C8FB5F6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SourcePoseEventData_1_tA74EBE5022478D8141994E3869840238FED98B95 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<SourcePoseEventData<Quaternion>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		SourcePoseEventData_1_tA74EBE5022478D8141994E3869840238FED98B95 * L_1 = ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_tA74EBE5022478D8141994E3869840238FED98B95_mF9AA3C8660156FF100D87AF58EBC1B4B1B261C51(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_tA74EBE5022478D8141994E3869840238FED98B95_mF9AA3C8660156FF100D87AF58EBC1B4B1B261C51_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnSourcePoseChanged(casted);
		RuntimeObject* L_2 = ___handler0;
		SourcePoseEventData_1_tA74EBE5022478D8141994E3869840238FED98B95 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< SourcePoseEventData_1_tA74EBE5022478D8141994E3869840238FED98B95 * >::Invoke(3 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler::OnSourcePoseChanged(Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Quaternion>) */, IMixedRealitySourcePoseHandler_t4737D525AD19FEC3694B7B127F3443334B27FF10_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem_<>c::<.cctor>b__196_6(Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__196_6_mCAB69CC98D9B9C7B13E0285D6BE6D8E8D3D62ECB (U3CU3Ec_t813C0BCD29DF294DFE9EB626784A877CC1FD5B1D * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__196_6_mCAB69CC98D9B9C7B13E0285D6BE6D8E8D3D62ECB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SourcePoseEventData_1_t657ADCF01C75C585700D387D3A9D7E0224573931 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<SourcePoseEventData<MixedRealityPose>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		SourcePoseEventData_1_t657ADCF01C75C585700D387D3A9D7E0224573931 * L_1 = ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t657ADCF01C75C585700D387D3A9D7E0224573931_m0DA9C5C9C55D8490F7EB1A59692BABB63BCF310E(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t657ADCF01C75C585700D387D3A9D7E0224573931_m0DA9C5C9C55D8490F7EB1A59692BABB63BCF310E_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnSourcePoseChanged(casted);
		RuntimeObject* L_2 = ___handler0;
		SourcePoseEventData_1_t657ADCF01C75C585700D387D3A9D7E0224573931 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< SourcePoseEventData_1_t657ADCF01C75C585700D387D3A9D7E0224573931 * >::Invoke(4 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler::OnSourcePoseChanged(Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>) */, IMixedRealitySourcePoseHandler_t4737D525AD19FEC3694B7B127F3443334B27FF10_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem_<>c::<.cctor>b__196_7(Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusChangedHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__196_7_mAEB0B5231ED434E29EFC9CD9285604C23030023D (U3CU3Ec_t813C0BCD29DF294DFE9EB626784A877CC1FD5B1D * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__196_7_mAEB0B5231ED434E29EFC9CD9285604C23030023D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	FocusEventData_tFBDB33B33F11F0F0AC4AE18A00E3C7CF43A83BD7 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<FocusEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		FocusEventData_tFBDB33B33F11F0F0AC4AE18A00E3C7CF43A83BD7 * L_1 = ExecuteEvents_ValidateEventData_TisFocusEventData_tFBDB33B33F11F0F0AC4AE18A00E3C7CF43A83BD7_m86DD1AE7B33C3D255BA6D39ACED1F853131A6773(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisFocusEventData_tFBDB33B33F11F0F0AC4AE18A00E3C7CF43A83BD7_m86DD1AE7B33C3D255BA6D39ACED1F853131A6773_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnBeforeFocusChange(casted);
		RuntimeObject* L_2 = ___handler0;
		FocusEventData_tFBDB33B33F11F0F0AC4AE18A00E3C7CF43A83BD7 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< FocusEventData_tFBDB33B33F11F0F0AC4AE18A00E3C7CF43A83BD7 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusChangedHandler::OnBeforeFocusChange(Microsoft.MixedReality.Toolkit.Input.FocusEventData) */, IMixedRealityFocusChangedHandler_tB580620194C6E0484A14C5F7812CFA462BE1E300_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem_<>c::<.cctor>b__196_8(Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusChangedHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__196_8_m87A16A7CBF2C25FA99400AF4A39201FD16C7BE4B (U3CU3Ec_t813C0BCD29DF294DFE9EB626784A877CC1FD5B1D * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__196_8_m87A16A7CBF2C25FA99400AF4A39201FD16C7BE4B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	FocusEventData_tFBDB33B33F11F0F0AC4AE18A00E3C7CF43A83BD7 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<FocusEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		FocusEventData_tFBDB33B33F11F0F0AC4AE18A00E3C7CF43A83BD7 * L_1 = ExecuteEvents_ValidateEventData_TisFocusEventData_tFBDB33B33F11F0F0AC4AE18A00E3C7CF43A83BD7_m86DD1AE7B33C3D255BA6D39ACED1F853131A6773(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisFocusEventData_tFBDB33B33F11F0F0AC4AE18A00E3C7CF43A83BD7_m86DD1AE7B33C3D255BA6D39ACED1F853131A6773_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnFocusChanged(casted);
		RuntimeObject* L_2 = ___handler0;
		FocusEventData_tFBDB33B33F11F0F0AC4AE18A00E3C7CF43A83BD7 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< FocusEventData_tFBDB33B33F11F0F0AC4AE18A00E3C7CF43A83BD7 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusChangedHandler::OnFocusChanged(Microsoft.MixedReality.Toolkit.Input.FocusEventData) */, IMixedRealityFocusChangedHandler_tB580620194C6E0484A14C5F7812CFA462BE1E300_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem_<>c::<.cctor>b__196_9(Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__196_9_m2EB634F2049D56DE03A81274D0108645E2314AE7 (U3CU3Ec_t813C0BCD29DF294DFE9EB626784A877CC1FD5B1D * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__196_9_m2EB634F2049D56DE03A81274D0108645E2314AE7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	FocusEventData_tFBDB33B33F11F0F0AC4AE18A00E3C7CF43A83BD7 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<FocusEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		FocusEventData_tFBDB33B33F11F0F0AC4AE18A00E3C7CF43A83BD7 * L_1 = ExecuteEvents_ValidateEventData_TisFocusEventData_tFBDB33B33F11F0F0AC4AE18A00E3C7CF43A83BD7_m86DD1AE7B33C3D255BA6D39ACED1F853131A6773(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisFocusEventData_tFBDB33B33F11F0F0AC4AE18A00E3C7CF43A83BD7_m86DD1AE7B33C3D255BA6D39ACED1F853131A6773_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnFocusEnter(casted);
		RuntimeObject* L_2 = ___handler0;
		FocusEventData_tFBDB33B33F11F0F0AC4AE18A00E3C7CF43A83BD7 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< FocusEventData_tFBDB33B33F11F0F0AC4AE18A00E3C7CF43A83BD7 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler::OnFocusEnter(Microsoft.MixedReality.Toolkit.Input.FocusEventData) */, IMixedRealityFocusHandler_t2E7355CC99F9C99349E37D7194784D4FBB49C5F0_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem_<>c::<.cctor>b__196_10(Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__196_10_mE39BECACF5E8BAE0857151A964352BDED6A6894E (U3CU3Ec_t813C0BCD29DF294DFE9EB626784A877CC1FD5B1D * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__196_10_mE39BECACF5E8BAE0857151A964352BDED6A6894E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	FocusEventData_tFBDB33B33F11F0F0AC4AE18A00E3C7CF43A83BD7 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<FocusEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		FocusEventData_tFBDB33B33F11F0F0AC4AE18A00E3C7CF43A83BD7 * L_1 = ExecuteEvents_ValidateEventData_TisFocusEventData_tFBDB33B33F11F0F0AC4AE18A00E3C7CF43A83BD7_m86DD1AE7B33C3D255BA6D39ACED1F853131A6773(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisFocusEventData_tFBDB33B33F11F0F0AC4AE18A00E3C7CF43A83BD7_m86DD1AE7B33C3D255BA6D39ACED1F853131A6773_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnFocusExit(casted);
		RuntimeObject* L_2 = ___handler0;
		FocusEventData_tFBDB33B33F11F0F0AC4AE18A00E3C7CF43A83BD7 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< FocusEventData_tFBDB33B33F11F0F0AC4AE18A00E3C7CF43A83BD7 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler::OnFocusExit(Microsoft.MixedReality.Toolkit.Input.FocusEventData) */, IMixedRealityFocusHandler_t2E7355CC99F9C99349E37D7194784D4FBB49C5F0_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem_<>c::<.cctor>b__196_11(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__196_11_m300BE987C7734DF7FCF1F0EEB04B6F858BB1559F (U3CU3Ec_t813C0BCD29DF294DFE9EB626784A877CC1FD5B1D * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__196_11_m300BE987C7734DF7FCF1F0EEB04B6F858BB1559F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityPointerEventData_t7881133BF2C96F77D750AA6A5FEC7C588183B3BD * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<MixedRealityPointerEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		MixedRealityPointerEventData_t7881133BF2C96F77D750AA6A5FEC7C588183B3BD * L_1 = ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_t7881133BF2C96F77D750AA6A5FEC7C588183B3BD_m9DCBEF97A4B701E937221551089D5631A2CCCCAF(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_t7881133BF2C96F77D750AA6A5FEC7C588183B3BD_m9DCBEF97A4B701E937221551089D5631A2CCCCAF_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnPointerDown(casted);
		RuntimeObject* L_2 = ___handler0;
		MixedRealityPointerEventData_t7881133BF2C96F77D750AA6A5FEC7C588183B3BD * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< MixedRealityPointerEventData_t7881133BF2C96F77D750AA6A5FEC7C588183B3BD * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler::OnPointerDown(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData) */, IMixedRealityPointerHandler_tA6DE5B54846F0E07C42009CDB559A847669C5E4D_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem_<>c::<.cctor>b__196_12(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__196_12_m5BD4D55E5E8E37B9820DE8736D87E7560E8EBCC7 (U3CU3Ec_t813C0BCD29DF294DFE9EB626784A877CC1FD5B1D * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__196_12_m5BD4D55E5E8E37B9820DE8736D87E7560E8EBCC7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityPointerEventData_t7881133BF2C96F77D750AA6A5FEC7C588183B3BD * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<MixedRealityPointerEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		MixedRealityPointerEventData_t7881133BF2C96F77D750AA6A5FEC7C588183B3BD * L_1 = ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_t7881133BF2C96F77D750AA6A5FEC7C588183B3BD_m9DCBEF97A4B701E937221551089D5631A2CCCCAF(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_t7881133BF2C96F77D750AA6A5FEC7C588183B3BD_m9DCBEF97A4B701E937221551089D5631A2CCCCAF_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnPointerDragged(casted);
		RuntimeObject* L_2 = ___handler0;
		MixedRealityPointerEventData_t7881133BF2C96F77D750AA6A5FEC7C588183B3BD * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< MixedRealityPointerEventData_t7881133BF2C96F77D750AA6A5FEC7C588183B3BD * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler::OnPointerDragged(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData) */, IMixedRealityPointerHandler_tA6DE5B54846F0E07C42009CDB559A847669C5E4D_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem_<>c::<.cctor>b__196_13(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__196_13_m087671F37985F3FBF032D2AE3B188DDB3D3A41D8 (U3CU3Ec_t813C0BCD29DF294DFE9EB626784A877CC1FD5B1D * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__196_13_m087671F37985F3FBF032D2AE3B188DDB3D3A41D8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityPointerEventData_t7881133BF2C96F77D750AA6A5FEC7C588183B3BD * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<MixedRealityPointerEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		MixedRealityPointerEventData_t7881133BF2C96F77D750AA6A5FEC7C588183B3BD * L_1 = ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_t7881133BF2C96F77D750AA6A5FEC7C588183B3BD_m9DCBEF97A4B701E937221551089D5631A2CCCCAF(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_t7881133BF2C96F77D750AA6A5FEC7C588183B3BD_m9DCBEF97A4B701E937221551089D5631A2CCCCAF_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnPointerClicked(casted);
		RuntimeObject* L_2 = ___handler0;
		MixedRealityPointerEventData_t7881133BF2C96F77D750AA6A5FEC7C588183B3BD * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< MixedRealityPointerEventData_t7881133BF2C96F77D750AA6A5FEC7C588183B3BD * >::Invoke(3 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler::OnPointerClicked(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData) */, IMixedRealityPointerHandler_tA6DE5B54846F0E07C42009CDB559A847669C5E4D_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem_<>c::<.cctor>b__196_14(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__196_14_m665A79EFD69FA5EB597AFCA375BD005C73CE49BB (U3CU3Ec_t813C0BCD29DF294DFE9EB626784A877CC1FD5B1D * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__196_14_m665A79EFD69FA5EB597AFCA375BD005C73CE49BB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityPointerEventData_t7881133BF2C96F77D750AA6A5FEC7C588183B3BD * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<MixedRealityPointerEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		MixedRealityPointerEventData_t7881133BF2C96F77D750AA6A5FEC7C588183B3BD * L_1 = ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_t7881133BF2C96F77D750AA6A5FEC7C588183B3BD_m9DCBEF97A4B701E937221551089D5631A2CCCCAF(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_t7881133BF2C96F77D750AA6A5FEC7C588183B3BD_m9DCBEF97A4B701E937221551089D5631A2CCCCAF_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnPointerUp(casted);
		RuntimeObject* L_2 = ___handler0;
		MixedRealityPointerEventData_t7881133BF2C96F77D750AA6A5FEC7C588183B3BD * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< MixedRealityPointerEventData_t7881133BF2C96F77D750AA6A5FEC7C588183B3BD * >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler::OnPointerUp(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData) */, IMixedRealityPointerHandler_tA6DE5B54846F0E07C42009CDB559A847669C5E4D_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem_<>c::<.cctor>b__196_15(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__196_15_m1BFC3228B4986B678D8AD3264520EED6EF23EAF0 (U3CU3Ec_t813C0BCD29DF294DFE9EB626784A877CC1FD5B1D * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__196_15_m1BFC3228B4986B678D8AD3264520EED6EF23EAF0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340 * L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340_m0EEC9EE692BED08CB3E5F43CE67E0BBB5B600693(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340_m0EEC9EE692BED08CB3E5F43CE67E0BBB5B600693_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnInputDown(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler::OnInputDown(Microsoft.MixedReality.Toolkit.Input.InputEventData) */, IMixedRealityInputHandler_t5416C64F6EF5F4EB651A9A18DC0E6A891044E8F8_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem_<>c::<.cctor>b__196_16(Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__196_16_m3B6455E7A7661B961C91D17A40BCF8B90D063B41 (U3CU3Ec_t813C0BCD29DF294DFE9EB626784A877CC1FD5B1D * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__196_16_m3B6455E7A7661B961C91D17A40BCF8B90D063B41_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// var inputData = ExecuteEvents.ValidateEventData<InputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340 * L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340_m0EEC9EE692BED08CB3E5F43CE67E0BBB5B600693(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340_m0EEC9EE692BED08CB3E5F43CE67E0BBB5B600693_RuntimeMethod_var);
		V_0 = L_1;
		// var inputHandler = handler as IMixedRealityInputHandler;
		RuntimeObject* L_2 = ___handler0;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IMixedRealityInputHandler_t5416C64F6EF5F4EB651A9A18DC0E6A891044E8F8_il2cpp_TypeInfo_var));
		// if (inputHandler != null)
		RuntimeObject* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		// inputHandler.OnInputDown(inputData);
		RuntimeObject* L_4 = V_1;
		InputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340 * L_5 = V_0;
		NullCheck(L_4);
		InterfaceActionInvoker1< InputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler::OnInputDown(Microsoft.MixedReality.Toolkit.Input.InputEventData) */, IMixedRealityInputHandler_t5416C64F6EF5F4EB651A9A18DC0E6A891044E8F8_il2cpp_TypeInfo_var, L_4, L_5);
	}

IL_0018:
	{
		// var actionHandler = handler as IMixedRealityInputActionHandler;
		RuntimeObject* L_6 = ___handler0;
		V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_6, IMixedRealityInputActionHandler_t01EC2D317CEBCAC398957A8F29CC19C403CDDC42_il2cpp_TypeInfo_var));
		// if (actionHandler != null)
		RuntimeObject* L_7 = V_2;
		if (!L_7)
		{
			goto IL_0029;
		}
	}
	{
		// actionHandler.OnActionStarted(inputData);
		RuntimeObject* L_8 = V_2;
		InputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340 * L_9 = V_0;
		NullCheck(L_8);
		InterfaceActionInvoker1< BaseInputEventData_tDE6C183FBF3A78A08F23F94D2C86C5D9072F0921 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputActionHandler::OnActionStarted(Microsoft.MixedReality.Toolkit.Input.BaseInputEventData) */, IMixedRealityInputActionHandler_t01EC2D317CEBCAC398957A8F29CC19C403CDDC42_il2cpp_TypeInfo_var, L_8, L_9);
	}

IL_0029:
	{
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem_<>c::<.cctor>b__196_17(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__196_17_mC395A4FDC8B1ACE79A462F269E28299B3F4C6D73 (U3CU3Ec_t813C0BCD29DF294DFE9EB626784A877CC1FD5B1D * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__196_17_mC395A4FDC8B1ACE79A462F269E28299B3F4C6D73_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340 * L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340_m0EEC9EE692BED08CB3E5F43CE67E0BBB5B600693(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340_m0EEC9EE692BED08CB3E5F43CE67E0BBB5B600693_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnInputUp(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler::OnInputUp(Microsoft.MixedReality.Toolkit.Input.InputEventData) */, IMixedRealityInputHandler_t5416C64F6EF5F4EB651A9A18DC0E6A891044E8F8_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem_<>c::<.cctor>b__196_18(Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__196_18_m8C28C0B0EDBBD655AF153E520967C39C7EF217EE (U3CU3Ec_t813C0BCD29DF294DFE9EB626784A877CC1FD5B1D * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__196_18_m8C28C0B0EDBBD655AF153E520967C39C7EF217EE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// var inputData = ExecuteEvents.ValidateEventData<InputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340 * L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340_m0EEC9EE692BED08CB3E5F43CE67E0BBB5B600693(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340_m0EEC9EE692BED08CB3E5F43CE67E0BBB5B600693_RuntimeMethod_var);
		V_0 = L_1;
		// var inputHandler = handler as IMixedRealityInputHandler;
		RuntimeObject* L_2 = ___handler0;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IMixedRealityInputHandler_t5416C64F6EF5F4EB651A9A18DC0E6A891044E8F8_il2cpp_TypeInfo_var));
		// if (inputHandler != null)
		RuntimeObject* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		// inputHandler.OnInputUp(inputData);
		RuntimeObject* L_4 = V_1;
		InputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340 * L_5 = V_0;
		NullCheck(L_4);
		InterfaceActionInvoker1< InputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler::OnInputUp(Microsoft.MixedReality.Toolkit.Input.InputEventData) */, IMixedRealityInputHandler_t5416C64F6EF5F4EB651A9A18DC0E6A891044E8F8_il2cpp_TypeInfo_var, L_4, L_5);
	}

IL_0018:
	{
		// var actionHandler = handler as IMixedRealityInputActionHandler;
		RuntimeObject* L_6 = ___handler0;
		V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_6, IMixedRealityInputActionHandler_t01EC2D317CEBCAC398957A8F29CC19C403CDDC42_il2cpp_TypeInfo_var));
		// if (actionHandler != null)
		RuntimeObject* L_7 = V_2;
		if (!L_7)
		{
			goto IL_0029;
		}
	}
	{
		// actionHandler.OnActionEnded(inputData);
		RuntimeObject* L_8 = V_2;
		InputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340 * L_9 = V_0;
		NullCheck(L_8);
		InterfaceActionInvoker1< BaseInputEventData_tDE6C183FBF3A78A08F23F94D2C86C5D9072F0921 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputActionHandler::OnActionEnded(Microsoft.MixedReality.Toolkit.Input.BaseInputEventData) */, IMixedRealityInputActionHandler_t01EC2D317CEBCAC398957A8F29CC19C403CDDC42_il2cpp_TypeInfo_var, L_8, L_9);
	}

IL_0029:
	{
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem_<>c::<.cctor>b__196_19(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<System.Single>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__196_19_m3448112EED981404D2E8CA87997346CD783706A8 (U3CU3Ec_t813C0BCD29DF294DFE9EB626784A877CC1FD5B1D * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__196_19_m3448112EED981404D2E8CA87997346CD783706A8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_tE655DA67179834FFBDF6C1C78CF03AEC837CDCAA * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<float>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_tE655DA67179834FFBDF6C1C78CF03AEC837CDCAA * L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_tE655DA67179834FFBDF6C1C78CF03AEC837CDCAA_mAF27536AF51BD12C3E57A726F68E729F3821718A(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_tE655DA67179834FFBDF6C1C78CF03AEC837CDCAA_mAF27536AF51BD12C3E57A726F68E729F3821718A_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnInputChanged(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_tE655DA67179834FFBDF6C1C78CF03AEC837CDCAA * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_tE655DA67179834FFBDF6C1C78CF03AEC837CDCAA * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<System.Single>::OnInputChanged(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityInputHandler_1_tF630D5E78881598E706AEF9CB76153E80A5A1A29_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem_<>c::<.cctor>b__196_20(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Vector2>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__196_20_m9146C685685F40EA56068BAB5CA72DA5415E018D (U3CU3Ec_t813C0BCD29DF294DFE9EB626784A877CC1FD5B1D * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__196_20_m9146C685685F40EA56068BAB5CA72DA5415E018D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_t3CB921E01118FB1DEE0FAEAF6A6787342EA38D66 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<Vector2>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_t3CB921E01118FB1DEE0FAEAF6A6787342EA38D66 * L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_t3CB921E01118FB1DEE0FAEAF6A6787342EA38D66_m6A9EAE737C4C9B86596B71AB2D50C9E3800559BE(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_t3CB921E01118FB1DEE0FAEAF6A6787342EA38D66_m6A9EAE737C4C9B86596B71AB2D50C9E3800559BE_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnInputChanged(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_t3CB921E01118FB1DEE0FAEAF6A6787342EA38D66 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_t3CB921E01118FB1DEE0FAEAF6A6787342EA38D66 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Vector2>::OnInputChanged(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityInputHandler_1_tF77D37AAA391EC38E6179A37EAE665362E780FF9_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem_<>c::<.cctor>b__196_21(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Vector3>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__196_21_mAA00A832D8A417EE4BB99017A3DA20450C690CF8 (U3CU3Ec_t813C0BCD29DF294DFE9EB626784A877CC1FD5B1D * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__196_21_mAA00A832D8A417EE4BB99017A3DA20450C690CF8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_t40F1EC00AC203CC6880075975AA0341CD74469AA * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<Vector3>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_t40F1EC00AC203CC6880075975AA0341CD74469AA * L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_t40F1EC00AC203CC6880075975AA0341CD74469AA_m182F04C39F472481DF4D1E1E9BAC4BCC2AA0452A(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_t40F1EC00AC203CC6880075975AA0341CD74469AA_m182F04C39F472481DF4D1E1E9BAC4BCC2AA0452A_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnInputChanged(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_t40F1EC00AC203CC6880075975AA0341CD74469AA * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_t40F1EC00AC203CC6880075975AA0341CD74469AA * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Vector3>::OnInputChanged(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityInputHandler_1_t636B79E1C8F31E341E88055EAABDF7C94373C580_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem_<>c::<.cctor>b__196_22(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Quaternion>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__196_22_mDCE303C5BD6E1D4E9BA4370B2EB8ED1F60AA5A48 (U3CU3Ec_t813C0BCD29DF294DFE9EB626784A877CC1FD5B1D * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__196_22_mDCE303C5BD6E1D4E9BA4370B2EB8ED1F60AA5A48_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_tC01F6DE63DE68B1AD94AB5BD08274141F73EFAB0 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<Quaternion>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_tC01F6DE63DE68B1AD94AB5BD08274141F73EFAB0 * L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_tC01F6DE63DE68B1AD94AB5BD08274141F73EFAB0_mB42E04FF7089340C2A39842BB21629684CEB1A28(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_tC01F6DE63DE68B1AD94AB5BD08274141F73EFAB0_mB42E04FF7089340C2A39842BB21629684CEB1A28_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnInputChanged(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_tC01F6DE63DE68B1AD94AB5BD08274141F73EFAB0 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_tC01F6DE63DE68B1AD94AB5BD08274141F73EFAB0 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Quaternion>::OnInputChanged(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityInputHandler_1_tA106127380DEA582536E8116805F7DF92225AE0D_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem_<>c::<.cctor>b__196_23(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__196_23_m28B466859BDABF99EF523DC3D5BBB36E6F5EB112 (U3CU3Ec_t813C0BCD29DF294DFE9EB626784A877CC1FD5B1D * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__196_23_m28B466859BDABF99EF523DC3D5BBB36E6F5EB112_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_t6158ACFE1C7FBC5703A33F92BB8B93E681AFF1D2 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<MixedRealityPose>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_t6158ACFE1C7FBC5703A33F92BB8B93E681AFF1D2 * L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_t6158ACFE1C7FBC5703A33F92BB8B93E681AFF1D2_m5799007909DE072939012567D3E2CCF36BCF12A7(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_t6158ACFE1C7FBC5703A33F92BB8B93E681AFF1D2_m5799007909DE072939012567D3E2CCF36BCF12A7_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnInputChanged(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_t6158ACFE1C7FBC5703A33F92BB8B93E681AFF1D2 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_t6158ACFE1C7FBC5703A33F92BB8B93E681AFF1D2 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::OnInputChanged(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityInputHandler_1_t75C53C879FBB56BB0996DBF5D64CB77FFF2005AB_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem_<>c::<.cctor>b__196_24(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__196_24_m5BF877163C7645CBBE7BA92838729579D7493968 (U3CU3Ec_t813C0BCD29DF294DFE9EB626784A877CC1FD5B1D * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__196_24_m5BF877163C7645CBBE7BA92838729579D7493968_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340 * L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340_m0EEC9EE692BED08CB3E5F43CE67E0BBB5B600693(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340_m0EEC9EE692BED08CB3E5F43CE67E0BBB5B600693_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureStarted(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler::OnGestureStarted(Microsoft.MixedReality.Toolkit.Input.InputEventData) */, IMixedRealityGestureHandler_tDF664CDE3AEE7CFE82F6CF7118BAC683C4D018BA_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem_<>c::<.cctor>b__196_25(Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__196_25_m430D72E328EC137BD37C371A201BA2CDD48538E5 (U3CU3Ec_t813C0BCD29DF294DFE9EB626784A877CC1FD5B1D * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__196_25_m430D72E328EC137BD37C371A201BA2CDD48538E5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// var inputData = ExecuteEvents.ValidateEventData<InputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340 * L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340_m0EEC9EE692BED08CB3E5F43CE67E0BBB5B600693(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340_m0EEC9EE692BED08CB3E5F43CE67E0BBB5B600693_RuntimeMethod_var);
		V_0 = L_1;
		// var gestureHandler = handler as IMixedRealityGestureHandler;
		RuntimeObject* L_2 = ___handler0;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IMixedRealityGestureHandler_tDF664CDE3AEE7CFE82F6CF7118BAC683C4D018BA_il2cpp_TypeInfo_var));
		// if (gestureHandler != null)
		RuntimeObject* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		// gestureHandler.OnGestureStarted(inputData);
		RuntimeObject* L_4 = V_1;
		InputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340 * L_5 = V_0;
		NullCheck(L_4);
		InterfaceActionInvoker1< InputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler::OnGestureStarted(Microsoft.MixedReality.Toolkit.Input.InputEventData) */, IMixedRealityGestureHandler_tDF664CDE3AEE7CFE82F6CF7118BAC683C4D018BA_il2cpp_TypeInfo_var, L_4, L_5);
	}

IL_0018:
	{
		// var actionHandler = handler as IMixedRealityInputActionHandler;
		RuntimeObject* L_6 = ___handler0;
		V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_6, IMixedRealityInputActionHandler_t01EC2D317CEBCAC398957A8F29CC19C403CDDC42_il2cpp_TypeInfo_var));
		// if (actionHandler != null)
		RuntimeObject* L_7 = V_2;
		if (!L_7)
		{
			goto IL_0029;
		}
	}
	{
		// actionHandler.OnActionStarted(inputData);
		RuntimeObject* L_8 = V_2;
		InputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340 * L_9 = V_0;
		NullCheck(L_8);
		InterfaceActionInvoker1< BaseInputEventData_tDE6C183FBF3A78A08F23F94D2C86C5D9072F0921 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputActionHandler::OnActionStarted(Microsoft.MixedReality.Toolkit.Input.BaseInputEventData) */, IMixedRealityInputActionHandler_t01EC2D317CEBCAC398957A8F29CC19C403CDDC42_il2cpp_TypeInfo_var, L_8, L_9);
	}

IL_0029:
	{
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem_<>c::<.cctor>b__196_26(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__196_26_m02047D9D22D1A552E1AF55DFF9E934F9B6CEB7EA (U3CU3Ec_t813C0BCD29DF294DFE9EB626784A877CC1FD5B1D * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__196_26_m02047D9D22D1A552E1AF55DFF9E934F9B6CEB7EA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340 * L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340_m0EEC9EE692BED08CB3E5F43CE67E0BBB5B600693(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340_m0EEC9EE692BED08CB3E5F43CE67E0BBB5B600693_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureUpdated(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler::OnGestureUpdated(Microsoft.MixedReality.Toolkit.Input.InputEventData) */, IMixedRealityGestureHandler_tDF664CDE3AEE7CFE82F6CF7118BAC683C4D018BA_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem_<>c::<.cctor>b__196_27(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector2>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__196_27_m95D105F3708451B8AECDA56FEF21D95C5B5F3B2C (U3CU3Ec_t813C0BCD29DF294DFE9EB626784A877CC1FD5B1D * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__196_27_m95D105F3708451B8AECDA56FEF21D95C5B5F3B2C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_t3CB921E01118FB1DEE0FAEAF6A6787342EA38D66 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<Vector2>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_t3CB921E01118FB1DEE0FAEAF6A6787342EA38D66 * L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_t3CB921E01118FB1DEE0FAEAF6A6787342EA38D66_m6A9EAE737C4C9B86596B71AB2D50C9E3800559BE(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_t3CB921E01118FB1DEE0FAEAF6A6787342EA38D66_m6A9EAE737C4C9B86596B71AB2D50C9E3800559BE_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureUpdated(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_t3CB921E01118FB1DEE0FAEAF6A6787342EA38D66 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_t3CB921E01118FB1DEE0FAEAF6A6787342EA38D66 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector2>::OnGestureUpdated(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityGestureHandler_1_t643C22AB6C28F3B7FE621EC02896646B7601C264_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem_<>c::<.cctor>b__196_28(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector3>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__196_28_m40464637CE0DE469FDA4ED480058FD0081AEC0A5 (U3CU3Ec_t813C0BCD29DF294DFE9EB626784A877CC1FD5B1D * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__196_28_m40464637CE0DE469FDA4ED480058FD0081AEC0A5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_t40F1EC00AC203CC6880075975AA0341CD74469AA * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<Vector3>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_t40F1EC00AC203CC6880075975AA0341CD74469AA * L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_t40F1EC00AC203CC6880075975AA0341CD74469AA_m182F04C39F472481DF4D1E1E9BAC4BCC2AA0452A(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_t40F1EC00AC203CC6880075975AA0341CD74469AA_m182F04C39F472481DF4D1E1E9BAC4BCC2AA0452A_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureUpdated(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_t40F1EC00AC203CC6880075975AA0341CD74469AA * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_t40F1EC00AC203CC6880075975AA0341CD74469AA * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector3>::OnGestureUpdated(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityGestureHandler_1_t0C9D17A1F6D580F45C6DF7BD3AE2765ABE229CD3_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem_<>c::<.cctor>b__196_29(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Quaternion>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__196_29_m336EDF159368522A847F5E8E255740C2E4C66DC9 (U3CU3Ec_t813C0BCD29DF294DFE9EB626784A877CC1FD5B1D * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__196_29_m336EDF159368522A847F5E8E255740C2E4C66DC9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_tC01F6DE63DE68B1AD94AB5BD08274141F73EFAB0 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<Quaternion>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_tC01F6DE63DE68B1AD94AB5BD08274141F73EFAB0 * L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_tC01F6DE63DE68B1AD94AB5BD08274141F73EFAB0_mB42E04FF7089340C2A39842BB21629684CEB1A28(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_tC01F6DE63DE68B1AD94AB5BD08274141F73EFAB0_mB42E04FF7089340C2A39842BB21629684CEB1A28_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureUpdated(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_tC01F6DE63DE68B1AD94AB5BD08274141F73EFAB0 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_tC01F6DE63DE68B1AD94AB5BD08274141F73EFAB0 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Quaternion>::OnGestureUpdated(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityGestureHandler_1_tCC659FB75C9E286B9286800DD96281D9B57FED33_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem_<>c::<.cctor>b__196_30(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__196_30_m281D9C230052CF1C8B328FFE36B61AED85035F7A (U3CU3Ec_t813C0BCD29DF294DFE9EB626784A877CC1FD5B1D * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__196_30_m281D9C230052CF1C8B328FFE36B61AED85035F7A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_t6158ACFE1C7FBC5703A33F92BB8B93E681AFF1D2 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<MixedRealityPose>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_t6158ACFE1C7FBC5703A33F92BB8B93E681AFF1D2 * L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_t6158ACFE1C7FBC5703A33F92BB8B93E681AFF1D2_m5799007909DE072939012567D3E2CCF36BCF12A7(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_t6158ACFE1C7FBC5703A33F92BB8B93E681AFF1D2_m5799007909DE072939012567D3E2CCF36BCF12A7_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureUpdated(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_t6158ACFE1C7FBC5703A33F92BB8B93E681AFF1D2 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_t6158ACFE1C7FBC5703A33F92BB8B93E681AFF1D2 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::OnGestureUpdated(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityGestureHandler_1_tC3D50ECE722E4173E2CF4012BD787EF6C50D5681_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem_<>c::<.cctor>b__196_31(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__196_31_m112BC4082FCC738C74BCCB956BEE0F60F487278A (U3CU3Ec_t813C0BCD29DF294DFE9EB626784A877CC1FD5B1D * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__196_31_m112BC4082FCC738C74BCCB956BEE0F60F487278A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340 * L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340_m0EEC9EE692BED08CB3E5F43CE67E0BBB5B600693(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340_m0EEC9EE692BED08CB3E5F43CE67E0BBB5B600693_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureCompleted(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340 * >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler::OnGestureCompleted(Microsoft.MixedReality.Toolkit.Input.InputEventData) */, IMixedRealityGestureHandler_tDF664CDE3AEE7CFE82F6CF7118BAC683C4D018BA_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem_<>c::<.cctor>b__196_32(Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__196_32_m54ACF1C79331A4AEA714A8217C30CB50AE025D60 (U3CU3Ec_t813C0BCD29DF294DFE9EB626784A877CC1FD5B1D * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__196_32_m54ACF1C79331A4AEA714A8217C30CB50AE025D60_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// var inputData = ExecuteEvents.ValidateEventData<InputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340 * L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340_m0EEC9EE692BED08CB3E5F43CE67E0BBB5B600693(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340_m0EEC9EE692BED08CB3E5F43CE67E0BBB5B600693_RuntimeMethod_var);
		V_0 = L_1;
		// var gestureHandler = handler as IMixedRealityGestureHandler;
		RuntimeObject* L_2 = ___handler0;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IMixedRealityGestureHandler_tDF664CDE3AEE7CFE82F6CF7118BAC683C4D018BA_il2cpp_TypeInfo_var));
		// if (gestureHandler != null)
		RuntimeObject* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		// gestureHandler.OnGestureCompleted(inputData);
		RuntimeObject* L_4 = V_1;
		InputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340 * L_5 = V_0;
		NullCheck(L_4);
		InterfaceActionInvoker1< InputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340 * >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler::OnGestureCompleted(Microsoft.MixedReality.Toolkit.Input.InputEventData) */, IMixedRealityGestureHandler_tDF664CDE3AEE7CFE82F6CF7118BAC683C4D018BA_il2cpp_TypeInfo_var, L_4, L_5);
	}

IL_0018:
	{
		// var actionHandler = handler as IMixedRealityInputActionHandler;
		RuntimeObject* L_6 = ___handler0;
		V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_6, IMixedRealityInputActionHandler_t01EC2D317CEBCAC398957A8F29CC19C403CDDC42_il2cpp_TypeInfo_var));
		// if (actionHandler != null)
		RuntimeObject* L_7 = V_2;
		if (!L_7)
		{
			goto IL_0029;
		}
	}
	{
		// actionHandler.OnActionEnded(inputData);
		RuntimeObject* L_8 = V_2;
		InputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340 * L_9 = V_0;
		NullCheck(L_8);
		InterfaceActionInvoker1< BaseInputEventData_tDE6C183FBF3A78A08F23F94D2C86C5D9072F0921 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputActionHandler::OnActionEnded(Microsoft.MixedReality.Toolkit.Input.BaseInputEventData) */, IMixedRealityInputActionHandler_t01EC2D317CEBCAC398957A8F29CC19C403CDDC42_il2cpp_TypeInfo_var, L_8, L_9);
	}

IL_0029:
	{
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem_<>c::<.cctor>b__196_33(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector2>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__196_33_m8DF91512AB2DC91A37540F04D4769FD324DA9601 (U3CU3Ec_t813C0BCD29DF294DFE9EB626784A877CC1FD5B1D * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__196_33_m8DF91512AB2DC91A37540F04D4769FD324DA9601_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_t3CB921E01118FB1DEE0FAEAF6A6787342EA38D66 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<Vector2>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_t3CB921E01118FB1DEE0FAEAF6A6787342EA38D66 * L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_t3CB921E01118FB1DEE0FAEAF6A6787342EA38D66_m6A9EAE737C4C9B86596B71AB2D50C9E3800559BE(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_t3CB921E01118FB1DEE0FAEAF6A6787342EA38D66_m6A9EAE737C4C9B86596B71AB2D50C9E3800559BE_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureCompleted(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_t3CB921E01118FB1DEE0FAEAF6A6787342EA38D66 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_t3CB921E01118FB1DEE0FAEAF6A6787342EA38D66 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector2>::OnGestureCompleted(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityGestureHandler_1_t643C22AB6C28F3B7FE621EC02896646B7601C264_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem_<>c::<.cctor>b__196_34(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector3>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__196_34_m5FA3734B7A734DD3EB5C8D0653F6840EE86BDD61 (U3CU3Ec_t813C0BCD29DF294DFE9EB626784A877CC1FD5B1D * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__196_34_m5FA3734B7A734DD3EB5C8D0653F6840EE86BDD61_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_t40F1EC00AC203CC6880075975AA0341CD74469AA * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<Vector3>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_t40F1EC00AC203CC6880075975AA0341CD74469AA * L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_t40F1EC00AC203CC6880075975AA0341CD74469AA_m182F04C39F472481DF4D1E1E9BAC4BCC2AA0452A(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_t40F1EC00AC203CC6880075975AA0341CD74469AA_m182F04C39F472481DF4D1E1E9BAC4BCC2AA0452A_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureCompleted(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_t40F1EC00AC203CC6880075975AA0341CD74469AA * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_t40F1EC00AC203CC6880075975AA0341CD74469AA * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector3>::OnGestureCompleted(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityGestureHandler_1_t0C9D17A1F6D580F45C6DF7BD3AE2765ABE229CD3_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem_<>c::<.cctor>b__196_35(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Quaternion>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__196_35_mA6BBCE3DBB481E05F3DA84EEFEE5A673C11E10A5 (U3CU3Ec_t813C0BCD29DF294DFE9EB626784A877CC1FD5B1D * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__196_35_mA6BBCE3DBB481E05F3DA84EEFEE5A673C11E10A5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_tC01F6DE63DE68B1AD94AB5BD08274141F73EFAB0 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<Quaternion>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_tC01F6DE63DE68B1AD94AB5BD08274141F73EFAB0 * L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_tC01F6DE63DE68B1AD94AB5BD08274141F73EFAB0_mB42E04FF7089340C2A39842BB21629684CEB1A28(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_tC01F6DE63DE68B1AD94AB5BD08274141F73EFAB0_mB42E04FF7089340C2A39842BB21629684CEB1A28_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureCompleted(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_tC01F6DE63DE68B1AD94AB5BD08274141F73EFAB0 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_tC01F6DE63DE68B1AD94AB5BD08274141F73EFAB0 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Quaternion>::OnGestureCompleted(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityGestureHandler_1_tCC659FB75C9E286B9286800DD96281D9B57FED33_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem_<>c::<.cctor>b__196_36(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__196_36_mA5BBC522ACBBE015E85224C3F324208301F7AE80 (U3CU3Ec_t813C0BCD29DF294DFE9EB626784A877CC1FD5B1D * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__196_36_mA5BBC522ACBBE015E85224C3F324208301F7AE80_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_t6158ACFE1C7FBC5703A33F92BB8B93E681AFF1D2 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<MixedRealityPose>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_t6158ACFE1C7FBC5703A33F92BB8B93E681AFF1D2 * L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_t6158ACFE1C7FBC5703A33F92BB8B93E681AFF1D2_m5799007909DE072939012567D3E2CCF36BCF12A7(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_t6158ACFE1C7FBC5703A33F92BB8B93E681AFF1D2_m5799007909DE072939012567D3E2CCF36BCF12A7_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureCompleted(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_t6158ACFE1C7FBC5703A33F92BB8B93E681AFF1D2 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_t6158ACFE1C7FBC5703A33F92BB8B93E681AFF1D2 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::OnGestureCompleted(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityGestureHandler_1_tC3D50ECE722E4173E2CF4012BD787EF6C50D5681_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem_<>c::<.cctor>b__196_37(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__196_37_m915509B14091975CDAB10D44D11AD14D779E6430 (U3CU3Ec_t813C0BCD29DF294DFE9EB626784A877CC1FD5B1D * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__196_37_m915509B14091975CDAB10D44D11AD14D779E6430_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340 * L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340_m0EEC9EE692BED08CB3E5F43CE67E0BBB5B600693(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340_m0EEC9EE692BED08CB3E5F43CE67E0BBB5B600693_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureCanceled(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_t261683C1D2FF1E083549F6A4E8499640A4317340 * >::Invoke(3 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler::OnGestureCanceled(Microsoft.MixedReality.Toolkit.Input.InputEventData) */, IMixedRealityGestureHandler_tDF664CDE3AEE7CFE82F6CF7118BAC683C4D018BA_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem_<>c::<.cctor>b__196_38(Microsoft.MixedReality.Toolkit.Input.IMixedRealitySpeechHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__196_38_m546A990EC8B6985E94701F38A75E6BFFF743F4AE (U3CU3Ec_t813C0BCD29DF294DFE9EB626784A877CC1FD5B1D * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__196_38_m546A990EC8B6985E94701F38A75E6BFFF743F4AE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SpeechEventData_t8F9285E039F9C46D058B636C74BCC27498D9C7C0 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<SpeechEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		SpeechEventData_t8F9285E039F9C46D058B636C74BCC27498D9C7C0 * L_1 = ExecuteEvents_ValidateEventData_TisSpeechEventData_t8F9285E039F9C46D058B636C74BCC27498D9C7C0_m1DF1056AD5B9AFBE75B93CAC85CF688577BA071A(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisSpeechEventData_t8F9285E039F9C46D058B636C74BCC27498D9C7C0_m1DF1056AD5B9AFBE75B93CAC85CF688577BA071A_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnSpeechKeywordRecognized(casted);
		RuntimeObject* L_2 = ___handler0;
		SpeechEventData_t8F9285E039F9C46D058B636C74BCC27498D9C7C0 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< SpeechEventData_t8F9285E039F9C46D058B636C74BCC27498D9C7C0 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealitySpeechHandler::OnSpeechKeywordRecognized(Microsoft.MixedReality.Toolkit.Input.SpeechEventData) */, IMixedRealitySpeechHandler_t45D4F0632FDE701D153AB5DE7BC7217041F616B7_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem_<>c::<.cctor>b__196_39(Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__196_39_mFAF55D094F332839FA48053B60D9F70C798B27AE (U3CU3Ec_t813C0BCD29DF294DFE9EB626784A877CC1FD5B1D * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__196_39_mFAF55D094F332839FA48053B60D9F70C798B27AE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SpeechEventData_t8F9285E039F9C46D058B636C74BCC27498D9C7C0 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// var speechData = ExecuteEvents.ValidateEventData<SpeechEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		SpeechEventData_t8F9285E039F9C46D058B636C74BCC27498D9C7C0 * L_1 = ExecuteEvents_ValidateEventData_TisSpeechEventData_t8F9285E039F9C46D058B636C74BCC27498D9C7C0_m1DF1056AD5B9AFBE75B93CAC85CF688577BA071A(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisSpeechEventData_t8F9285E039F9C46D058B636C74BCC27498D9C7C0_m1DF1056AD5B9AFBE75B93CAC85CF688577BA071A_RuntimeMethod_var);
		V_0 = L_1;
		// var speechHandler = handler as IMixedRealitySpeechHandler;
		RuntimeObject* L_2 = ___handler0;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IMixedRealitySpeechHandler_t45D4F0632FDE701D153AB5DE7BC7217041F616B7_il2cpp_TypeInfo_var));
		// if (speechHandler != null)
		RuntimeObject* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		// speechHandler.OnSpeechKeywordRecognized(speechData);
		RuntimeObject* L_4 = V_1;
		SpeechEventData_t8F9285E039F9C46D058B636C74BCC27498D9C7C0 * L_5 = V_0;
		NullCheck(L_4);
		InterfaceActionInvoker1< SpeechEventData_t8F9285E039F9C46D058B636C74BCC27498D9C7C0 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealitySpeechHandler::OnSpeechKeywordRecognized(Microsoft.MixedReality.Toolkit.Input.SpeechEventData) */, IMixedRealitySpeechHandler_t45D4F0632FDE701D153AB5DE7BC7217041F616B7_il2cpp_TypeInfo_var, L_4, L_5);
	}

IL_0018:
	{
		// var actionHandler = handler as IMixedRealityInputActionHandler;
		RuntimeObject* L_6 = ___handler0;
		V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_6, IMixedRealityInputActionHandler_t01EC2D317CEBCAC398957A8F29CC19C403CDDC42_il2cpp_TypeInfo_var));
		// if (actionHandler != null)
		RuntimeObject* L_7 = V_2;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		// actionHandler.OnActionStarted(speechData);
		RuntimeObject* L_8 = V_2;
		SpeechEventData_t8F9285E039F9C46D058B636C74BCC27498D9C7C0 * L_9 = V_0;
		NullCheck(L_8);
		InterfaceActionInvoker1< BaseInputEventData_tDE6C183FBF3A78A08F23F94D2C86C5D9072F0921 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputActionHandler::OnActionStarted(Microsoft.MixedReality.Toolkit.Input.BaseInputEventData) */, IMixedRealityInputActionHandler_t01EC2D317CEBCAC398957A8F29CC19C403CDDC42_il2cpp_TypeInfo_var, L_8, L_9);
		// actionHandler.OnActionEnded(speechData);
		RuntimeObject* L_10 = V_2;
		SpeechEventData_t8F9285E039F9C46D058B636C74BCC27498D9C7C0 * L_11 = V_0;
		NullCheck(L_10);
		InterfaceActionInvoker1< BaseInputEventData_tDE6C183FBF3A78A08F23F94D2C86C5D9072F0921 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputActionHandler::OnActionEnded(Microsoft.MixedReality.Toolkit.Input.BaseInputEventData) */, IMixedRealityInputActionHandler_t01EC2D317CEBCAC398957A8F29CC19C403CDDC42_il2cpp_TypeInfo_var, L_10, L_11);
	}

IL_0030:
	{
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem_<>c::<.cctor>b__196_40(Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__196_40_m8CB21D13DBD4CAF46C0E96B7B7D4840AF6491CB5 (U3CU3Ec_t813C0BCD29DF294DFE9EB626784A877CC1FD5B1D * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__196_40_m8CB21D13DBD4CAF46C0E96B7B7D4840AF6491CB5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DictationEventData_tA1F305F741F4F44777C90987013669EB89A541C9 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<DictationEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		DictationEventData_tA1F305F741F4F44777C90987013669EB89A541C9 * L_1 = ExecuteEvents_ValidateEventData_TisDictationEventData_tA1F305F741F4F44777C90987013669EB89A541C9_m6C45A235B47BC1076AA7CF790915C9847EEED6E6(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisDictationEventData_tA1F305F741F4F44777C90987013669EB89A541C9_m6C45A235B47BC1076AA7CF790915C9847EEED6E6_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnDictationHypothesis(casted);
		RuntimeObject* L_2 = ___handler0;
		DictationEventData_tA1F305F741F4F44777C90987013669EB89A541C9 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< DictationEventData_tA1F305F741F4F44777C90987013669EB89A541C9 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler::OnDictationHypothesis(Microsoft.MixedReality.Toolkit.Input.DictationEventData) */, IMixedRealityDictationHandler_t793F4D7903A78C4417B2B11800833D26BC01BCB6_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem_<>c::<.cctor>b__196_41(Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__196_41_m29349161E4BA3DA78B65B55503C679E645227455 (U3CU3Ec_t813C0BCD29DF294DFE9EB626784A877CC1FD5B1D * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__196_41_m29349161E4BA3DA78B65B55503C679E645227455_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DictationEventData_tA1F305F741F4F44777C90987013669EB89A541C9 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<DictationEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		DictationEventData_tA1F305F741F4F44777C90987013669EB89A541C9 * L_1 = ExecuteEvents_ValidateEventData_TisDictationEventData_tA1F305F741F4F44777C90987013669EB89A541C9_m6C45A235B47BC1076AA7CF790915C9847EEED6E6(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisDictationEventData_tA1F305F741F4F44777C90987013669EB89A541C9_m6C45A235B47BC1076AA7CF790915C9847EEED6E6_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnDictationResult(casted);
		RuntimeObject* L_2 = ___handler0;
		DictationEventData_tA1F305F741F4F44777C90987013669EB89A541C9 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< DictationEventData_tA1F305F741F4F44777C90987013669EB89A541C9 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler::OnDictationResult(Microsoft.MixedReality.Toolkit.Input.DictationEventData) */, IMixedRealityDictationHandler_t793F4D7903A78C4417B2B11800833D26BC01BCB6_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem_<>c::<.cctor>b__196_42(Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__196_42_m2D7BF594339B2C5032193D9D089A804221B86E79 (U3CU3Ec_t813C0BCD29DF294DFE9EB626784A877CC1FD5B1D * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__196_42_m2D7BF594339B2C5032193D9D089A804221B86E79_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DictationEventData_tA1F305F741F4F44777C90987013669EB89A541C9 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<DictationEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		DictationEventData_tA1F305F741F4F44777C90987013669EB89A541C9 * L_1 = ExecuteEvents_ValidateEventData_TisDictationEventData_tA1F305F741F4F44777C90987013669EB89A541C9_m6C45A235B47BC1076AA7CF790915C9847EEED6E6(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisDictationEventData_tA1F305F741F4F44777C90987013669EB89A541C9_m6C45A235B47BC1076AA7CF790915C9847EEED6E6_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnDictationComplete(casted);
		RuntimeObject* L_2 = ___handler0;
		DictationEventData_tA1F305F741F4F44777C90987013669EB89A541C9 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< DictationEventData_tA1F305F741F4F44777C90987013669EB89A541C9 * >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler::OnDictationComplete(Microsoft.MixedReality.Toolkit.Input.DictationEventData) */, IMixedRealityDictationHandler_t793F4D7903A78C4417B2B11800833D26BC01BCB6_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem_<>c::<.cctor>b__196_43(Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__196_43_mB3EA7DC9377B8AF5028849E6A5F8CD7F560EBE0B (U3CU3Ec_t813C0BCD29DF294DFE9EB626784A877CC1FD5B1D * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__196_43_mB3EA7DC9377B8AF5028849E6A5F8CD7F560EBE0B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DictationEventData_tA1F305F741F4F44777C90987013669EB89A541C9 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<DictationEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		DictationEventData_tA1F305F741F4F44777C90987013669EB89A541C9 * L_1 = ExecuteEvents_ValidateEventData_TisDictationEventData_tA1F305F741F4F44777C90987013669EB89A541C9_m6C45A235B47BC1076AA7CF790915C9847EEED6E6(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisDictationEventData_tA1F305F741F4F44777C90987013669EB89A541C9_m6C45A235B47BC1076AA7CF790915C9847EEED6E6_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnDictationError(casted);
		RuntimeObject* L_2 = ___handler0;
		DictationEventData_tA1F305F741F4F44777C90987013669EB89A541C9 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< DictationEventData_tA1F305F741F4F44777C90987013669EB89A541C9 * >::Invoke(3 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler::OnDictationError(Microsoft.MixedReality.Toolkit.Input.DictationEventData) */, IMixedRealityDictationHandler_t793F4D7903A78C4417B2B11800833D26BC01BCB6_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem_<>c::<.cctor>b__196_44(Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__196_44_mF3B0AFBB08988A34903112D3553F5DCCDFDA7C5A (U3CU3Ec_t813C0BCD29DF294DFE9EB626784A877CC1FD5B1D * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__196_44_mF3B0AFBB08988A34903112D3553F5DCCDFDA7C5A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_tCC6F77EA129BA5BB32CA4B26D9555B82F923CE62 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<IDictionary<TrackedHandJoint, MixedRealityPose>>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_tCC6F77EA129BA5BB32CA4B26D9555B82F923CE62 * L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_tCC6F77EA129BA5BB32CA4B26D9555B82F923CE62_mFBB4A36A0C264360F11B30F81B895CC2CE9132B0(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_tCC6F77EA129BA5BB32CA4B26D9555B82F923CE62_mFBB4A36A0C264360F11B30F81B895CC2CE9132B0_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnHandJointsUpdated(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_tCC6F77EA129BA5BB32CA4B26D9555B82F923CE62 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_tCC6F77EA129BA5BB32CA4B26D9555B82F923CE62 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointHandler::OnHandJointsUpdated(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Collections.Generic.IDictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>>) */, IMixedRealityHandJointHandler_t6DC1338CD4EC6EB2CC6DF2E4B9C027434A989DA8_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem_<>c::<.cctor>b__196_45(Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandMeshHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__196_45_m6CA55552345D2320F3DEE43022430CC6F1B66724 (U3CU3Ec_t813C0BCD29DF294DFE9EB626784A877CC1FD5B1D * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__196_45_m6CA55552345D2320F3DEE43022430CC6F1B66724_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_tCD17D8B2C5BB4781E9073B160FBD5F8E8C49B367 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<HandMeshInfo>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_tCD17D8B2C5BB4781E9073B160FBD5F8E8C49B367 * L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_tCD17D8B2C5BB4781E9073B160FBD5F8E8C49B367_mEDD269A78AD5DD2E183C9D29C15EAE50AB521C4A(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_tCD17D8B2C5BB4781E9073B160FBD5F8E8C49B367_mEDD269A78AD5DD2E183C9D29C15EAE50AB521C4A_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnHandMeshUpdated(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_tCD17D8B2C5BB4781E9073B160FBD5F8E8C49B367 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_tCD17D8B2C5BB4781E9073B160FBD5F8E8C49B367 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandMeshHandler::OnHandMeshUpdated(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Input.HandMeshInfo>) */, IMixedRealityHandMeshHandler_t6B2578C87B3F0CE03FE72F3714AE4DA2DEFEF6C1_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem_<>c::<.cctor>b__196_46(Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__196_46_m63BD4010536610D5D274A035EEE963DF4BA774E9 (U3CU3Ec_t813C0BCD29DF294DFE9EB626784A877CC1FD5B1D * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__196_46_m63BD4010536610D5D274A035EEE963DF4BA774E9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HandTrackingInputEventData_tE85C6A2DE13B9D871CAC18B726B5EFB8687960BC * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<HandTrackingInputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		HandTrackingInputEventData_tE85C6A2DE13B9D871CAC18B726B5EFB8687960BC * L_1 = ExecuteEvents_ValidateEventData_TisHandTrackingInputEventData_tE85C6A2DE13B9D871CAC18B726B5EFB8687960BC_m89E52F63BCA56659A94A747AD73A0FEF2D2FE229(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisHandTrackingInputEventData_tE85C6A2DE13B9D871CAC18B726B5EFB8687960BC_m89E52F63BCA56659A94A747AD73A0FEF2D2FE229_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnTouchStarted(casted);
		RuntimeObject* L_2 = ___handler0;
		HandTrackingInputEventData_tE85C6A2DE13B9D871CAC18B726B5EFB8687960BC * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< HandTrackingInputEventData_tE85C6A2DE13B9D871CAC18B726B5EFB8687960BC * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler::OnTouchStarted(Microsoft.MixedReality.Toolkit.Input.HandTrackingInputEventData) */, IMixedRealityTouchHandler_t85AA14576D8B43260EC2B8CCCA64E23C9DF5BD86_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem_<>c::<.cctor>b__196_47(Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__196_47_mD3B950FDB3B3A676BF8F200D83D13799C11E9701 (U3CU3Ec_t813C0BCD29DF294DFE9EB626784A877CC1FD5B1D * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__196_47_mD3B950FDB3B3A676BF8F200D83D13799C11E9701_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HandTrackingInputEventData_tE85C6A2DE13B9D871CAC18B726B5EFB8687960BC * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<HandTrackingInputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		HandTrackingInputEventData_tE85C6A2DE13B9D871CAC18B726B5EFB8687960BC * L_1 = ExecuteEvents_ValidateEventData_TisHandTrackingInputEventData_tE85C6A2DE13B9D871CAC18B726B5EFB8687960BC_m89E52F63BCA56659A94A747AD73A0FEF2D2FE229(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisHandTrackingInputEventData_tE85C6A2DE13B9D871CAC18B726B5EFB8687960BC_m89E52F63BCA56659A94A747AD73A0FEF2D2FE229_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnTouchCompleted(casted);
		RuntimeObject* L_2 = ___handler0;
		HandTrackingInputEventData_tE85C6A2DE13B9D871CAC18B726B5EFB8687960BC * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< HandTrackingInputEventData_tE85C6A2DE13B9D871CAC18B726B5EFB8687960BC * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler::OnTouchCompleted(Microsoft.MixedReality.Toolkit.Input.HandTrackingInputEventData) */, IMixedRealityTouchHandler_t85AA14576D8B43260EC2B8CCCA64E23C9DF5BD86_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem_<>c::<.cctor>b__196_48(Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__196_48_mF3F070DBD8DF319A503DE7F971A2D823E379FE3A (U3CU3Ec_t813C0BCD29DF294DFE9EB626784A877CC1FD5B1D * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__196_48_mF3F070DBD8DF319A503DE7F971A2D823E379FE3A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HandTrackingInputEventData_tE85C6A2DE13B9D871CAC18B726B5EFB8687960BC * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<HandTrackingInputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		HandTrackingInputEventData_tE85C6A2DE13B9D871CAC18B726B5EFB8687960BC * L_1 = ExecuteEvents_ValidateEventData_TisHandTrackingInputEventData_tE85C6A2DE13B9D871CAC18B726B5EFB8687960BC_m89E52F63BCA56659A94A747AD73A0FEF2D2FE229(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisHandTrackingInputEventData_tE85C6A2DE13B9D871CAC18B726B5EFB8687960BC_m89E52F63BCA56659A94A747AD73A0FEF2D2FE229_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnTouchUpdated(casted);
		RuntimeObject* L_2 = ___handler0;
		HandTrackingInputEventData_tE85C6A2DE13B9D871CAC18B726B5EFB8687960BC * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< HandTrackingInputEventData_tE85C6A2DE13B9D871CAC18B726B5EFB8687960BC * >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler::OnTouchUpdated(Microsoft.MixedReality.Toolkit.Input.HandTrackingInputEventData) */, IMixedRealityTouchHandler_t85AA14576D8B43260EC2B8CCCA64E23C9DF5BD86_il2cpp_TypeInfo_var, L_2, L_3);
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
// System.Void Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m3B38B842132C94B69EF52CF1B0B77F71EC035D7D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m3B38B842132C94B69EF52CF1B0B77F71EC035D7D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tDBA99090C30B1568CB760F0F62733CA74F874FC5 * L_0 = (U3CU3Ec_tDBA99090C30B1568CB760F0F62733CA74F874FC5 *)il2cpp_codegen_object_new(U3CU3Ec_tDBA99090C30B1568CB760F0F62733CA74F874FC5_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m0BB3ACCC68F2EF575E1279CBBA54FFDEE409CCD2(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tDBA99090C30B1568CB760F0F62733CA74F874FC5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDBA99090C30B1568CB760F0F62733CA74F874FC5_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0BB3ACCC68F2EF575E1279CBBA54FFDEE409CCD2 (U3CU3Ec_tDBA99090C30B1568CB760F0F62733CA74F874FC5 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable_<>c::<OnValidate>b__25_0(System.String,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3COnValidateU3Eb__25_0_mC5202527AD449E451138C6422762B35A7D7AA5D7 (U3CU3Ec_tDBA99090C30B1568CB760F0F62733CA74F874FC5 * __this, String_t* ___result0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___next1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3COnValidateU3Eb__25_0_mC5202527AD449E451138C6422762B35A7D7AA5D7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string hierarchy = gameObject.transform.EnumerateAncestors(true).Aggregate("", (result, next) => next.gameObject.name + "=>" + result);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___next1;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_1, /*hidden argument*/NULL);
		String_t* L_3 = ___result0;
		String_t* L_4 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_2, _stringLiteral193EAB9F1EC19468783C52A94D9B84DF6D5BEE4F, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
