#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService
struct HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62;
// Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile
struct HandPhysicsServiceProfile_tEF03D15AFC38FC06DA510603A16ED58F220FF9A0;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_t689792F74DC068BC68EBBF279929CF1756D466B3;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_t4D7C2C115C9A65FB6B24304700B1E9167410EB54;
// Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody
struct JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.Examples.PhysicsTriggerEventReadout
struct PhysicsTriggerEventReadout_t32B6FF61712D41B62A1EB6B91045ED904D557520;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// TMPro.TMP_Character
struct TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714;
// TMPro.TMP_Style
struct TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E;
// TMPro.TMP_TextElement
struct TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// System.Action`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>
struct Action_1_t6AC51F95C320504155E365235FB02570EBC11815;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>
struct List_1_t8B72AC0039307D81C9D833E0EC1ACBA710108D98;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// Microsoft.MixedReality.Toolkit.BaseExtensionService
struct BaseExtensionService_t6B8647D87D003C3582FEB487330C3C91290F9CDA;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_t9B92D8A7CB0AE5AF973870EDF7DE2BC12E5FA4E5;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Color32[]
struct Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Decimal[]
struct DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Microsoft.MixedReality.Toolkit.Utilities.Handedness[]
struct HandednessU5BU5D_t9007C0EC1534ED9D4EDC49F0756602B961E24B1D;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService
struct IMixedRealityHandJointService_t1A4574D9866B409E8F945AD8BA5B59A606378358;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t64ABD77097BAD8C4A1194C39BFFD4E6F6CBF55B1;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody[]
struct JointKinematicBodyU5BU5D_t79FB743FBECEF874A1917FD867EB29AE158BAE86;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MeshFilter
struct MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A;
// TMPro.TMP_SubMesh[]
struct TMP_SubMeshU5BU5D_t2EF6E7C00AD0C05C7BD3E565CF716B62BED324A2;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t1E4BEAC3D61A2AD0284E919166D0F38D21540A37;
// TMPro.TextMeshPro
struct TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint[]
struct TrackedHandJointU5BU5D_t211452F885C4210C190EF8B95FCB589209721A34;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t4B20066E10D8FF621FB20C05F21B22167C90F548;

IL2CPP_EXTERN_C RuntimeClass* CoreServices_tDB76F6146407FDEA9A4479E5553ED32DC19AADBD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandPhysicsServiceProfile_tEF03D15AFC38FC06DA510603A16ED58F220FF9A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandednessU5BU5D_t9007C0EC1534ED9D4EDC49F0756602B961E24B1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Handedness_t2A8F6DF331DF5C083E9C1E04C62AF9075B3A878C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityDataProviderAccess_t374BBC423F74323FAAE54B45D01DD9D0AEDF1743_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityHandJointService_t1A4574D9866B409E8F945AD8BA5B59A606378358_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8B72AC0039307D81C9D833E0EC1ACBA710108D98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackedHandJointU5BU5D_t211452F885C4210C190EF8B95FCB589209721A34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackedHandJoint_t4DB5CFA2EE94BCBB8866FF22332E0BFD48033137_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t7EA2C0293A35DAF92E0AE2E7D247F1FBB62AD7D5____E38A34258C42BD75BCA0E2465D0A82E4DDB75DEE_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1BF3851D2FF976D593FAA31A5A6B4F0460019994;
IL2CPP_EXTERN_C String_t* _stringLiteral1D091D04287D4679285A2E663193C6F6B9AFDEAA;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral2CA525E745821399EEF6F1D2733A285A82160939;
IL2CPP_EXTERN_C String_t* _stringLiteralA87FA1E3368C9FAD9D143A70CB395D64D193CBD3;
IL2CPP_EXTERN_C String_t* _stringLiteralD615BA2D4F588D5542763B1799E1B17A4021E235;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDA498934C25635BF965454E7B0EFC76A87F36A1B;
IL2CPP_EXTERN_C String_t* _stringLiteralE32213B913E2692579F46DFC5F32A1E135F596B6;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m88EDE6DE5F03E54DAF7F492D8E81B46BF5AA260F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisJointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9_m259B16608E7D146DF86E17A92D1620D3D8F5A5AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mFBD9154FF0F2564918C71E2357553EEB8F46F8B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mD0D4E50099395577EB6FCA2E432D34B6A34D9767_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m54D14F2F7C8346665E98430B08C22B06D9DE5056_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m7CB95AA45111B8F2FD8968CBDF0CE3359F6B2E08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisJointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9_m252380AB6FD1C8141DC8F53E11A51B974869A97D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IMixedRealityDataProviderAccess_GetDataProvider_TisIMixedRealityHandJointService_t1A4574D9866B409E8F945AD8BA5B59A606378358_m37E4BAC0318C28974C6AF42E94AB042B8D65DEA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mFD36DB6E94EEBC7DFCA6630891B16DA76BB4A986_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m9545BB4315A1F899798682C096D884E1FF23FD32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mB9F3ABE5B0A6074809806B58F6DBCCAD80409B29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mFBD8872A40AF066BDFED212C17C2F2135B0885E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m18A274BB3EA15685C5052537C480B355218FBF12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mFD88A3BCD23E0A70F86D152FE45033C91809F026_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t HandPhysicsService_CreateKinematicBodies_m71B95DC19BF627238DBF290B955240069493700A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HandPhysicsService_DestroyKinematicBodies_m78B3FF710F704EEA9720BB0ACEF1F6DB2D46C4EC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HandPhysicsService_Disable_m2648DAAE586BB98E5632B06E95659D6BCA0F4B11_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HandPhysicsService_Enable_m8CB48E356DE7BF4866FD7CE4703B0BDA69903DD5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HandPhysicsService_TryCreateJointKinematicBody_m42A1FC76D98BE64D68CBE146356DC89752CC1924_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HandPhysicsService_Update_m553E923BDDD77C230A55CF5BB5FFC250FC42EFFC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HandPhysicsService__cctor_m7608CC3393AA81DBF8E09014C725D70A34E1143D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HandPhysicsService__ctor_mEB45584DBA9416E1054E067EBBBAD7DEDDC9C2C0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HandPhysicsService_get_HandJointService_m19E75B05A8EC09D9F6EFB8DAA0495626A22F00E1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HandPhysicsService_set_FingerTipKinematicBodyPrefab_m4762E97607032A149B03FA0BFE3D3A88995102BC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HandPhysicsService_set_PalmKinematicBodyPrefab_m2BD668E395A5C52BCCCDAC723F0EB270496495FA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JointKinematicBody_UpdateState_m39A8907A401AED69673296BD75779205413152CC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PhysicsTriggerEventReadout_OnTriggerEnter_mD6A5830E9E8F72E206B2DFE6EDFF109783335C60_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PhysicsTriggerEventReadout_OnTriggerExit_m49BEB18478F43F14CF608773406CD48137B7F135_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PhysicsTriggerEventReadout_WriteText_m34BD177DF80211D0FFD2B37778AD3DF102FDD401_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PhysicsTriggerEventReadout__ctor_mF5A3B48605A23A2B9B3C6172313E6E5F05375C4C_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct HandednessU5BU5D_t9007C0EC1534ED9D4EDC49F0756602B961E24B1D;
struct TrackedHandJointU5BU5D_t211452F885C4210C190EF8B95FCB589209721A34;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tE08655B4F4158DF7F869E918067FB39B515CD111 
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

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>
struct  List_1_t8B72AC0039307D81C9D833E0EC1ACBA710108D98  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	JointKinematicBodyU5BU5D_t79FB743FBECEF874A1917FD867EB29AE158BAE86* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t8B72AC0039307D81C9D833E0EC1ACBA710108D98, ____items_1)); }
	inline JointKinematicBodyU5BU5D_t79FB743FBECEF874A1917FD867EB29AE158BAE86* get__items_1() const { return ____items_1; }
	inline JointKinematicBodyU5BU5D_t79FB743FBECEF874A1917FD867EB29AE158BAE86** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(JointKinematicBodyU5BU5D_t79FB743FBECEF874A1917FD867EB29AE158BAE86* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t8B72AC0039307D81C9D833E0EC1ACBA710108D98, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t8B72AC0039307D81C9D833E0EC1ACBA710108D98, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t8B72AC0039307D81C9D833E0EC1ACBA710108D98, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t8B72AC0039307D81C9D833E0EC1ACBA710108D98_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	JointKinematicBodyU5BU5D_t79FB743FBECEF874A1917FD867EB29AE158BAE86* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t8B72AC0039307D81C9D833E0EC1ACBA710108D98_StaticFields, ____emptyArray_5)); }
	inline JointKinematicBodyU5BU5D_t79FB743FBECEF874A1917FD867EB29AE158BAE86* get__emptyArray_5() const { return ____emptyArray_5; }
	inline JointKinematicBodyU5BU5D_t79FB743FBECEF874A1917FD867EB29AE158BAE86** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(JointKinematicBodyU5BU5D_t79FB743FBECEF874A1917FD867EB29AE158BAE86* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
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


// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
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
struct  __StaticArrayInitTypeSizeU3D20_t314A5064A834D0078D1B6B80847F0F9CBF1AB65E 
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
		uint8_t __StaticArrayInitTypeSizeU3D20_t314A5064A834D0078D1B6B80847F0F9CBF1AB65E__padding[20];
	};

public:
};


// Microsoft.MixedReality.Toolkit.BaseExtensionService
struct  BaseExtensionService_t6B8647D87D003C3582FEB487330C3C91290F9CDA  : public BaseService_tA51F0EA841C4C16598268B190DC8663BCB38F555
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseExtensionService::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BaseExtensionService_t6B8647D87D003C3582FEB487330C3C91290F9CDA, ___U3CRegistrarU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_5() const { return ___U3CRegistrarU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_5() { return &___U3CRegistrarU3Ek__BackingField_5; }
	inline void set_U3CRegistrarU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_5), (void*)value);
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


// System.Collections.Generic.List`1_Enumerator<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>
struct  Enumerator_tB115EEEF330DD55DA3A4229A5B724220B18DB6AF 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t8B72AC0039307D81C9D833E0EC1ACBA710108D98 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB115EEEF330DD55DA3A4229A5B724220B18DB6AF, ___list_0)); }
	inline List_1_t8B72AC0039307D81C9D833E0EC1ACBA710108D98 * get_list_0() const { return ___list_0; }
	inline List_1_t8B72AC0039307D81C9D833E0EC1ACBA710108D98 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t8B72AC0039307D81C9D833E0EC1ACBA710108D98 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB115EEEF330DD55DA3A4229A5B724220B18DB6AF, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB115EEEF330DD55DA3A4229A5B724220B18DB6AF, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB115EEEF330DD55DA3A4229A5B724220B18DB6AF, ___current_3)); }
	inline JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * get_current_3() const { return ___current_3; }
	inline JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<System.Object>
struct  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
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


// TMPro.MaterialReference
struct  MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B 
{
public:
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}

	inline static int32_t get_offset_of_fontAsset_1() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___fontAsset_1)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_fontAsset_1() const { return ___fontAsset_1; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_fontAsset_1() { return &___fontAsset_1; }
	inline void set_fontAsset_1(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___fontAsset_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fontAsset_1), (void*)value);
	}

	inline static int32_t get_offset_of_spriteAsset_2() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___spriteAsset_2)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_spriteAsset_2() const { return ___spriteAsset_2; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_spriteAsset_2() { return &___spriteAsset_2; }
	inline void set_spriteAsset_2(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___spriteAsset_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spriteAsset_2), (void*)value);
	}

	inline static int32_t get_offset_of_material_3() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___material_3)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_material_3() const { return ___material_3; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_material_3() { return &___material_3; }
	inline void set_material_3(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___material_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_3), (void*)value);
	}

	inline static int32_t get_offset_of_isDefaultMaterial_4() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___isDefaultMaterial_4)); }
	inline bool get_isDefaultMaterial_4() const { return ___isDefaultMaterial_4; }
	inline bool* get_address_of_isDefaultMaterial_4() { return &___isDefaultMaterial_4; }
	inline void set_isDefaultMaterial_4(bool value)
	{
		___isDefaultMaterial_4 = value;
	}

	inline static int32_t get_offset_of_isFallbackMaterial_5() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___isFallbackMaterial_5)); }
	inline bool get_isFallbackMaterial_5() const { return ___isFallbackMaterial_5; }
	inline bool* get_address_of_isFallbackMaterial_5() { return &___isFallbackMaterial_5; }
	inline void set_isFallbackMaterial_5(bool value)
	{
		___isFallbackMaterial_5 = value;
	}

	inline static int32_t get_offset_of_fallbackMaterial_6() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___fallbackMaterial_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_fallbackMaterial_6() const { return ___fallbackMaterial_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_fallbackMaterial_6() { return &___fallbackMaterial_6; }
	inline void set_fallbackMaterial_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___fallbackMaterial_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fallbackMaterial_6), (void*)value);
	}

	inline static int32_t get_offset_of_padding_7() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___padding_7)); }
	inline float get_padding_7() const { return ___padding_7; }
	inline float* get_address_of_padding_7() { return &___padding_7; }
	inline void set_padding_7(float value)
	{
		___padding_7 = value;
	}

	inline static int32_t get_offset_of_referenceCount_8() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___referenceCount_8)); }
	inline int32_t get_referenceCount_8() const { return ___referenceCount_8; }
	inline int32_t* get_address_of_referenceCount_8() { return &___referenceCount_8; }
	inline void set_referenceCount_8(int32_t value)
	{
		___referenceCount_8 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___spriteAsset_2;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___spriteAsset_2;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// TMPro.TMP_FontStyleStack
struct  TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9 
{
public:
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;

public:
	inline static int32_t get_offset_of_bold_0() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___bold_0)); }
	inline uint8_t get_bold_0() const { return ___bold_0; }
	inline uint8_t* get_address_of_bold_0() { return &___bold_0; }
	inline void set_bold_0(uint8_t value)
	{
		___bold_0 = value;
	}

	inline static int32_t get_offset_of_italic_1() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___italic_1)); }
	inline uint8_t get_italic_1() const { return ___italic_1; }
	inline uint8_t* get_address_of_italic_1() { return &___italic_1; }
	inline void set_italic_1(uint8_t value)
	{
		___italic_1 = value;
	}

	inline static int32_t get_offset_of_underline_2() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___underline_2)); }
	inline uint8_t get_underline_2() const { return ___underline_2; }
	inline uint8_t* get_address_of_underline_2() { return &___underline_2; }
	inline void set_underline_2(uint8_t value)
	{
		___underline_2 = value;
	}

	inline static int32_t get_offset_of_strikethrough_3() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___strikethrough_3)); }
	inline uint8_t get_strikethrough_3() const { return ___strikethrough_3; }
	inline uint8_t* get_address_of_strikethrough_3() { return &___strikethrough_3; }
	inline void set_strikethrough_3(uint8_t value)
	{
		___strikethrough_3 = value;
	}

	inline static int32_t get_offset_of_highlight_4() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___highlight_4)); }
	inline uint8_t get_highlight_4() const { return ___highlight_4; }
	inline uint8_t* get_address_of_highlight_4() { return &___highlight_4; }
	inline void set_highlight_4(uint8_t value)
	{
		___highlight_4 = value;
	}

	inline static int32_t get_offset_of_superscript_5() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___superscript_5)); }
	inline uint8_t get_superscript_5() const { return ___superscript_5; }
	inline uint8_t* get_address_of_superscript_5() { return &___superscript_5; }
	inline void set_superscript_5(uint8_t value)
	{
		___superscript_5 = value;
	}

	inline static int32_t get_offset_of_subscript_6() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___subscript_6)); }
	inline uint8_t get_subscript_6() const { return ___subscript_6; }
	inline uint8_t* get_address_of_subscript_6() { return &___subscript_6; }
	inline void set_subscript_6(uint8_t value)
	{
		___subscript_6 = value;
	}

	inline static int32_t get_offset_of_uppercase_7() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___uppercase_7)); }
	inline uint8_t get_uppercase_7() const { return ___uppercase_7; }
	inline uint8_t* get_address_of_uppercase_7() { return &___uppercase_7; }
	inline void set_uppercase_7(uint8_t value)
	{
		___uppercase_7 = value;
	}

	inline static int32_t get_offset_of_lowercase_8() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___lowercase_8)); }
	inline uint8_t get_lowercase_8() const { return ___lowercase_8; }
	inline uint8_t* get_address_of_lowercase_8() { return &___lowercase_8; }
	inline void set_lowercase_8(uint8_t value)
	{
		___lowercase_8 = value;
	}

	inline static int32_t get_offset_of_smallcaps_9() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___smallcaps_9)); }
	inline uint8_t get_smallcaps_9() const { return ___smallcaps_9; }
	inline uint8_t* get_address_of_smallcaps_9() { return &___smallcaps_9; }
	inline void set_smallcaps_9(uint8_t value)
	{
		___smallcaps_9 = value;
	}
};


// TMPro.TMP_Offset
struct  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 
{
public:
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;

public:
	inline static int32_t get_offset_of_m_Left_0() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117, ___m_Left_0)); }
	inline float get_m_Left_0() const { return ___m_Left_0; }
	inline float* get_address_of_m_Left_0() { return &___m_Left_0; }
	inline void set_m_Left_0(float value)
	{
		___m_Left_0 = value;
	}

	inline static int32_t get_offset_of_m_Right_1() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117, ___m_Right_1)); }
	inline float get_m_Right_1() const { return ___m_Right_1; }
	inline float* get_address_of_m_Right_1() { return &___m_Right_1; }
	inline void set_m_Right_1(float value)
	{
		___m_Right_1 = value;
	}

	inline static int32_t get_offset_of_m_Top_2() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117, ___m_Top_2)); }
	inline float get_m_Top_2() const { return ___m_Top_2; }
	inline float* get_address_of_m_Top_2() { return &___m_Top_2; }
	inline void set_m_Top_2(float value)
	{
		___m_Top_2 = value;
	}

	inline static int32_t get_offset_of_m_Bottom_3() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117, ___m_Bottom_3)); }
	inline float get_m_Bottom_3() const { return ___m_Bottom_3; }
	inline float* get_address_of_m_Bottom_3() { return &___m_Bottom_3; }
	inline void set_m_Bottom_3(float value)
	{
		___m_Bottom_3 = value;
	}
};

struct TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117_StaticFields
{
public:
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  ___k_ZeroOffset_4;

public:
	inline static int32_t get_offset_of_k_ZeroOffset_4() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117_StaticFields, ___k_ZeroOffset_4)); }
	inline TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  get_k_ZeroOffset_4() const { return ___k_ZeroOffset_4; }
	inline TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 * get_address_of_k_ZeroOffset_4() { return &___k_ZeroOffset_4; }
	inline void set_k_ZeroOffset_4(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  value)
	{
		___k_ZeroOffset_4 = value;
	}
};


// TMPro.TMP_Text_SpecialCharacter
struct  SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F 
{
public:
	// TMPro.TMP_Character TMPro.TMP_Text_SpecialCharacter::character
	TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text_SpecialCharacter::fontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text_SpecialCharacter::material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_2;
	// System.Int32 TMPro.TMP_Text_SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;

public:
	inline static int32_t get_offset_of_character_0() { return static_cast<int32_t>(offsetof(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F, ___character_0)); }
	inline TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * get_character_0() const { return ___character_0; }
	inline TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C ** get_address_of_character_0() { return &___character_0; }
	inline void set_character_0(TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * value)
	{
		___character_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___character_0), (void*)value);
	}

	inline static int32_t get_offset_of_fontAsset_1() { return static_cast<int32_t>(offsetof(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F, ___fontAsset_1)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_fontAsset_1() const { return ___fontAsset_1; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_fontAsset_1() { return &___fontAsset_1; }
	inline void set_fontAsset_1(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___fontAsset_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fontAsset_1), (void*)value);
	}

	inline static int32_t get_offset_of_material_2() { return static_cast<int32_t>(offsetof(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F, ___material_2)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_material_2() const { return ___material_2; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_material_2() { return &___material_2; }
	inline void set_material_2(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___material_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_2), (void*)value);
	}

	inline static int32_t get_offset_of_materialIndex_3() { return static_cast<int32_t>(offsetof(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F, ___materialIndex_3)); }
	inline int32_t get_materialIndex_3() const { return ___materialIndex_3; }
	inline int32_t* get_address_of_materialIndex_3() { return &___materialIndex_3; }
	inline void set_materialIndex_3(int32_t value)
	{
		___materialIndex_3 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F_marshaled_pinvoke
{
	TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * ___character_0;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F_marshaled_com
{
	TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * ___character_0;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct  TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___itemStack_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_itemStack_0() const { return ___itemStack_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___m_DefaultItem_2)); }
	inline int32_t get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline int32_t* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(int32_t value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<System.Single>
struct  TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___itemStack_0)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_itemStack_0() const { return ___itemStack_0; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___m_DefaultItem_2)); }
	inline float get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline float* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(float value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct  TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___itemStack_0)); }
	inline TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A* get_itemStack_0() const { return ___itemStack_0; }
	inline TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___m_DefaultItem_2)); }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 ** get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * value)
	{
		___m_DefaultItem_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefaultItem_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// UnityEngine.Color
struct  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Color32
struct  Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};


// UnityEngine.Matrix4x4
struct  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 
{
public:
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

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___identityMatrix_17 = value;
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


// UnityEngine.Vector4
struct  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t7EA2C0293A35DAF92E0AE2E7D247F1FBB62AD7D5  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t7EA2C0293A35DAF92E0AE2E7D247F1FBB62AD7D5_StaticFields
{
public:
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D20 <PrivateImplementationDetails>::E38A34258C42BD75BCA0E2465D0A82E4DDB75DEE
	__StaticArrayInitTypeSizeU3D20_t314A5064A834D0078D1B6B80847F0F9CBF1AB65E  ___E38A34258C42BD75BCA0E2465D0A82E4DDB75DEE_0;

public:
	inline static int32_t get_offset_of_E38A34258C42BD75BCA0E2465D0A82E4DDB75DEE_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t7EA2C0293A35DAF92E0AE2E7D247F1FBB62AD7D5_StaticFields, ___E38A34258C42BD75BCA0E2465D0A82E4DDB75DEE_0)); }
	inline __StaticArrayInitTypeSizeU3D20_t314A5064A834D0078D1B6B80847F0F9CBF1AB65E  get_E38A34258C42BD75BCA0E2465D0A82E4DDB75DEE_0() const { return ___E38A34258C42BD75BCA0E2465D0A82E4DDB75DEE_0; }
	inline __StaticArrayInitTypeSizeU3D20_t314A5064A834D0078D1B6B80847F0F9CBF1AB65E * get_address_of_E38A34258C42BD75BCA0E2465D0A82E4DDB75DEE_0() { return &___E38A34258C42BD75BCA0E2465D0A82E4DDB75DEE_0; }
	inline void set_E38A34258C42BD75BCA0E2465D0A82E4DDB75DEE_0(__StaticArrayInitTypeSizeU3D20_t314A5064A834D0078D1B6B80847F0F9CBF1AB65E  value)
	{
		___E38A34258C42BD75BCA0E2465D0A82E4DDB75DEE_0 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService
struct  HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62  : public BaseExtensionService_t6B8647D87D003C3582FEB487330C3C91290F9CDA
{
public:
	// Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::handPhysicsServiceProfile
	HandPhysicsServiceProfile_tEF03D15AFC38FC06DA510603A16ED58F220FF9A0 * ___handPhysicsServiceProfile_6;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::<HandPhysicsServiceRoot>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CHandPhysicsServiceRootU3Ek__BackingField_7;
	// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::<HandPhysicsLayer>k__BackingField
	int32_t ___U3CHandPhysicsLayerU3Ek__BackingField_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::<UsePalmKinematicBody>k__BackingField
	bool ___U3CUsePalmKinematicBodyU3Ek__BackingField_9;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::fingerTipKinematicBodyPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___fingerTipKinematicBodyPrefab_10;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::palmKinematicBodyPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___palmKinematicBodyPrefab_11;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::handJointService
	RuntimeObject* ___handJointService_12;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody> Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::jointKinematicBodies
	List_1_t8B72AC0039307D81C9D833E0EC1ACBA710108D98 * ___jointKinematicBodies_15;

public:
	inline static int32_t get_offset_of_handPhysicsServiceProfile_6() { return static_cast<int32_t>(offsetof(HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62, ___handPhysicsServiceProfile_6)); }
	inline HandPhysicsServiceProfile_tEF03D15AFC38FC06DA510603A16ED58F220FF9A0 * get_handPhysicsServiceProfile_6() const { return ___handPhysicsServiceProfile_6; }
	inline HandPhysicsServiceProfile_tEF03D15AFC38FC06DA510603A16ED58F220FF9A0 ** get_address_of_handPhysicsServiceProfile_6() { return &___handPhysicsServiceProfile_6; }
	inline void set_handPhysicsServiceProfile_6(HandPhysicsServiceProfile_tEF03D15AFC38FC06DA510603A16ED58F220FF9A0 * value)
	{
		___handPhysicsServiceProfile_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handPhysicsServiceProfile_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CHandPhysicsServiceRootU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62, ___U3CHandPhysicsServiceRootU3Ek__BackingField_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CHandPhysicsServiceRootU3Ek__BackingField_7() const { return ___U3CHandPhysicsServiceRootU3Ek__BackingField_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CHandPhysicsServiceRootU3Ek__BackingField_7() { return &___U3CHandPhysicsServiceRootU3Ek__BackingField_7; }
	inline void set_U3CHandPhysicsServiceRootU3Ek__BackingField_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CHandPhysicsServiceRootU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CHandPhysicsServiceRootU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CHandPhysicsLayerU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62, ___U3CHandPhysicsLayerU3Ek__BackingField_8)); }
	inline int32_t get_U3CHandPhysicsLayerU3Ek__BackingField_8() const { return ___U3CHandPhysicsLayerU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CHandPhysicsLayerU3Ek__BackingField_8() { return &___U3CHandPhysicsLayerU3Ek__BackingField_8; }
	inline void set_U3CHandPhysicsLayerU3Ek__BackingField_8(int32_t value)
	{
		___U3CHandPhysicsLayerU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CUsePalmKinematicBodyU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62, ___U3CUsePalmKinematicBodyU3Ek__BackingField_9)); }
	inline bool get_U3CUsePalmKinematicBodyU3Ek__BackingField_9() const { return ___U3CUsePalmKinematicBodyU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CUsePalmKinematicBodyU3Ek__BackingField_9() { return &___U3CUsePalmKinematicBodyU3Ek__BackingField_9; }
	inline void set_U3CUsePalmKinematicBodyU3Ek__BackingField_9(bool value)
	{
		___U3CUsePalmKinematicBodyU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_fingerTipKinematicBodyPrefab_10() { return static_cast<int32_t>(offsetof(HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62, ___fingerTipKinematicBodyPrefab_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_fingerTipKinematicBodyPrefab_10() const { return ___fingerTipKinematicBodyPrefab_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_fingerTipKinematicBodyPrefab_10() { return &___fingerTipKinematicBodyPrefab_10; }
	inline void set_fingerTipKinematicBodyPrefab_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___fingerTipKinematicBodyPrefab_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fingerTipKinematicBodyPrefab_10), (void*)value);
	}

	inline static int32_t get_offset_of_palmKinematicBodyPrefab_11() { return static_cast<int32_t>(offsetof(HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62, ___palmKinematicBodyPrefab_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_palmKinematicBodyPrefab_11() const { return ___palmKinematicBodyPrefab_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_palmKinematicBodyPrefab_11() { return &___palmKinematicBodyPrefab_11; }
	inline void set_palmKinematicBodyPrefab_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___palmKinematicBodyPrefab_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___palmKinematicBodyPrefab_11), (void*)value);
	}

	inline static int32_t get_offset_of_handJointService_12() { return static_cast<int32_t>(offsetof(HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62, ___handJointService_12)); }
	inline RuntimeObject* get_handJointService_12() const { return ___handJointService_12; }
	inline RuntimeObject** get_address_of_handJointService_12() { return &___handJointService_12; }
	inline void set_handJointService_12(RuntimeObject* value)
	{
		___handJointService_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handJointService_12), (void*)value);
	}

	inline static int32_t get_offset_of_jointKinematicBodies_15() { return static_cast<int32_t>(offsetof(HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62, ___jointKinematicBodies_15)); }
	inline List_1_t8B72AC0039307D81C9D833E0EC1ACBA710108D98 * get_jointKinematicBodies_15() const { return ___jointKinematicBodies_15; }
	inline List_1_t8B72AC0039307D81C9D833E0EC1ACBA710108D98 ** get_address_of_jointKinematicBodies_15() { return &___jointKinematicBodies_15; }
	inline void set_jointKinematicBodies_15(List_1_t8B72AC0039307D81C9D833E0EC1ACBA710108D98 * value)
	{
		___jointKinematicBodies_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___jointKinematicBodies_15), (void*)value);
	}
};

struct HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness[] Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::handednessTypes
	HandednessU5BU5D_t9007C0EC1534ED9D4EDC49F0756602B961E24B1D* ___handednessTypes_13;
	// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint[] Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::fingerTipTypes
	TrackedHandJointU5BU5D_t211452F885C4210C190EF8B95FCB589209721A34* ___fingerTipTypes_14;

public:
	inline static int32_t get_offset_of_handednessTypes_13() { return static_cast<int32_t>(offsetof(HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62_StaticFields, ___handednessTypes_13)); }
	inline HandednessU5BU5D_t9007C0EC1534ED9D4EDC49F0756602B961E24B1D* get_handednessTypes_13() const { return ___handednessTypes_13; }
	inline HandednessU5BU5D_t9007C0EC1534ED9D4EDC49F0756602B961E24B1D** get_address_of_handednessTypes_13() { return &___handednessTypes_13; }
	inline void set_handednessTypes_13(HandednessU5BU5D_t9007C0EC1534ED9D4EDC49F0756602B961E24B1D* value)
	{
		___handednessTypes_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handednessTypes_13), (void*)value);
	}

	inline static int32_t get_offset_of_fingerTipTypes_14() { return static_cast<int32_t>(offsetof(HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62_StaticFields, ___fingerTipTypes_14)); }
	inline TrackedHandJointU5BU5D_t211452F885C4210C190EF8B95FCB589209721A34* get_fingerTipTypes_14() const { return ___fingerTipTypes_14; }
	inline TrackedHandJointU5BU5D_t211452F885C4210C190EF8B95FCB589209721A34** get_address_of_fingerTipTypes_14() { return &___fingerTipTypes_14; }
	inline void set_fingerTipTypes_14(TrackedHandJointU5BU5D_t211452F885C4210C190EF8B95FCB589209721A34* value)
	{
		___fingerTipTypes_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fingerTipTypes_14), (void*)value);
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


// TMPro.ColorMode
struct  ColorMode_t2C99ABBE35C08A863709500BFBBD6784D7114C09 
{
public:
	// System.Int32 TMPro.ColorMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ColorMode_t2C99ABBE35C08A863709500BFBBD6784D7114C09, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.Extents
struct  Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA 
{
public:
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___max_3;

public:
	inline static int32_t get_offset_of_min_2() { return static_cast<int32_t>(offsetof(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA, ___min_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_min_2() const { return ___min_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_min_2() { return &___min_2; }
	inline void set_min_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___min_2 = value;
	}

	inline static int32_t get_offset_of_max_3() { return static_cast<int32_t>(offsetof(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA, ___max_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_max_3() const { return ___max_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_max_3() { return &___max_3; }
	inline void set_max_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___max_3 = value;
	}
};

struct Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA_StaticFields
{
public:
	// TMPro.Extents TMPro.Extents::zero
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___uninitialized_1;

public:
	inline static int32_t get_offset_of_zero_0() { return static_cast<int32_t>(offsetof(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA_StaticFields, ___zero_0)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_zero_0() const { return ___zero_0; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_zero_0() { return &___zero_0; }
	inline void set_zero_0(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___zero_0 = value;
	}

	inline static int32_t get_offset_of_uninitialized_1() { return static_cast<int32_t>(offsetof(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA_StaticFields, ___uninitialized_1)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_uninitialized_1() const { return ___uninitialized_1; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_uninitialized_1() { return &___uninitialized_1; }
	inline void set_uninitialized_1(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___uninitialized_1 = value;
	}
};


// TMPro.FontStyles
struct  FontStyles_tAB9AC2C8316219AE73612ED4DD60417C14B5B74C 
{
public:
	// System.Int32 TMPro.FontStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FontStyles_tAB9AC2C8316219AE73612ED4DD60417C14B5B74C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.FontWeight
struct  FontWeight_tBF8B23C3A4F63D5602FEC93BE775C93CA4DDDC26 
{
public:
	// System.Int32 TMPro.FontWeight::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FontWeight_tBF8B23C3A4F63D5602FEC93BE775C93CA4DDDC26, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.HighlightState
struct  HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759 
{
public:
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  ___padding_1;

public:
	inline static int32_t get_offset_of_color_0() { return static_cast<int32_t>(offsetof(HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759, ___color_0)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_color_0() const { return ___color_0; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_color_0() { return &___color_0; }
	inline void set_color_0(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___color_0 = value;
	}

	inline static int32_t get_offset_of_padding_1() { return static_cast<int32_t>(offsetof(HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759, ___padding_1)); }
	inline TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  get_padding_1() const { return ___padding_1; }
	inline TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 * get_address_of_padding_1() { return &___padding_1; }
	inline void set_padding_1(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  value)
	{
		___padding_1 = value;
	}
};


// TMPro.HorizontalAlignmentOptions
struct  HorizontalAlignmentOptions_tCBBC74167BDEF6B5B510DDC43B5136F793A05193 
{
public:
	// System.Int32 TMPro.HorizontalAlignmentOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HorizontalAlignmentOptions_tCBBC74167BDEF6B5B510DDC43B5136F793A05193, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.MaskingTypes
struct  MaskingTypes_t0CDA999B819C7FDED898736492CA0E70E4163477 
{
public:
	// System.Int32 TMPro.MaskingTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MaskingTypes_t0CDA999B819C7FDED898736492CA0E70E4163477, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_Text_TextInputSources
struct  TextInputSources_t8A0451130450FC08C5847209E7551F27F5CAF4D0 
{
public:
	// System.Int32 TMPro.TMP_Text_TextInputSources::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextInputSources_t8A0451130450FC08C5847209E7551F27F5CAF4D0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_TextElementType
struct  TMP_TextElementType_t4BDF96DA2071216188B19EB33C35912BD185ECA3 
{
public:
	// System.Int32 TMPro.TMP_TextElementType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TMP_TextElementType_t4BDF96DA2071216188B19EB33C35912BD185ECA3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct  TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___itemStack_0)); }
	inline MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* get_itemStack_0() const { return ___itemStack_0; }
	inline MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___m_DefaultItem_2)); }
	inline MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B  value)
	{
		___m_DefaultItem_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct  TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___itemStack_0)); }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* get_itemStack_0() const { return ___itemStack_0; }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___m_DefaultItem_2)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TextAlignmentOptions
struct  TextAlignmentOptions_t682AC2BC382B468C04A23B008505ACCBF826AD63 
{
public:
	// System.Int32 TMPro.TextAlignmentOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextAlignmentOptions_t682AC2BC382B468C04A23B008505ACCBF826AD63, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextOverflowModes
struct  TextOverflowModes_t3E5E40446E0C1088788010EE07323B45DB7549C6 
{
public:
	// System.Int32 TMPro.TextOverflowModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextOverflowModes_t3E5E40446E0C1088788010EE07323B45DB7549C6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextRenderFlags
struct  TextRenderFlags_tBA599FEF207E56A80860B6266E3C9F57B59CA9F4 
{
public:
	// System.Int32 TMPro.TextRenderFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextRenderFlags_tBA599FEF207E56A80860B6266E3C9F57B59CA9F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextureMappingOptions
struct  TextureMappingOptions_t9FA25F9B2D01E6B7D8DA8761AAED241D285A285A 
{
public:
	// System.Int32 TMPro.TextureMappingOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureMappingOptions_t9FA25F9B2D01E6B7D8DA8761AAED241D285A285A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.VertexGradient
struct  VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D 
{
public:
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___bottomRight_3;

public:
	inline static int32_t get_offset_of_topLeft_0() { return static_cast<int32_t>(offsetof(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D, ___topLeft_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_topLeft_0() const { return ___topLeft_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_topLeft_0() { return &___topLeft_0; }
	inline void set_topLeft_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___topLeft_0 = value;
	}

	inline static int32_t get_offset_of_topRight_1() { return static_cast<int32_t>(offsetof(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D, ___topRight_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_topRight_1() const { return ___topRight_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_topRight_1() { return &___topRight_1; }
	inline void set_topRight_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___topRight_1 = value;
	}

	inline static int32_t get_offset_of_bottomLeft_2() { return static_cast<int32_t>(offsetof(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D, ___bottomLeft_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_bottomLeft_2() const { return ___bottomLeft_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_bottomLeft_2() { return &___bottomLeft_2; }
	inline void set_bottomLeft_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___bottomLeft_2 = value;
	}

	inline static int32_t get_offset_of_bottomRight_3() { return static_cast<int32_t>(offsetof(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D, ___bottomRight_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_bottomRight_3() const { return ___bottomRight_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_bottomRight_3() { return &___bottomRight_3; }
	inline void set_bottomRight_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___bottomRight_3 = value;
	}
};


// TMPro.VertexSortingOrder
struct  VertexSortingOrder_t8D099B77634C901CB5D2497AEAC94127E9DE013B 
{
public:
	// System.Int32 TMPro.VertexSortingOrder::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VertexSortingOrder_t8D099B77634C901CB5D2497AEAC94127E9DE013B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.VerticalAlignmentOptions
struct  VerticalAlignmentOptions_t6F8B6FBA36D97C6CA534AE3956D9060E39C9D326 
{
public:
	// System.Int32 TMPro.VerticalAlignmentOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VerticalAlignmentOptions_t6F8B6FBA36D97C6CA534AE3956D9060E39C9D326, ___value___2)); }
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

// TMPro.TMP_LineInfo
struct  TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7 
{
public:
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___lineExtents_19;

public:
	inline static int32_t get_offset_of_controlCharacterCount_0() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___controlCharacterCount_0)); }
	inline int32_t get_controlCharacterCount_0() const { return ___controlCharacterCount_0; }
	inline int32_t* get_address_of_controlCharacterCount_0() { return &___controlCharacterCount_0; }
	inline void set_controlCharacterCount_0(int32_t value)
	{
		___controlCharacterCount_0 = value;
	}

	inline static int32_t get_offset_of_characterCount_1() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___characterCount_1)); }
	inline int32_t get_characterCount_1() const { return ___characterCount_1; }
	inline int32_t* get_address_of_characterCount_1() { return &___characterCount_1; }
	inline void set_characterCount_1(int32_t value)
	{
		___characterCount_1 = value;
	}

	inline static int32_t get_offset_of_visibleCharacterCount_2() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___visibleCharacterCount_2)); }
	inline int32_t get_visibleCharacterCount_2() const { return ___visibleCharacterCount_2; }
	inline int32_t* get_address_of_visibleCharacterCount_2() { return &___visibleCharacterCount_2; }
	inline void set_visibleCharacterCount_2(int32_t value)
	{
		___visibleCharacterCount_2 = value;
	}

	inline static int32_t get_offset_of_spaceCount_3() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___spaceCount_3)); }
	inline int32_t get_spaceCount_3() const { return ___spaceCount_3; }
	inline int32_t* get_address_of_spaceCount_3() { return &___spaceCount_3; }
	inline void set_spaceCount_3(int32_t value)
	{
		___spaceCount_3 = value;
	}

	inline static int32_t get_offset_of_wordCount_4() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___wordCount_4)); }
	inline int32_t get_wordCount_4() const { return ___wordCount_4; }
	inline int32_t* get_address_of_wordCount_4() { return &___wordCount_4; }
	inline void set_wordCount_4(int32_t value)
	{
		___wordCount_4 = value;
	}

	inline static int32_t get_offset_of_firstCharacterIndex_5() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___firstCharacterIndex_5)); }
	inline int32_t get_firstCharacterIndex_5() const { return ___firstCharacterIndex_5; }
	inline int32_t* get_address_of_firstCharacterIndex_5() { return &___firstCharacterIndex_5; }
	inline void set_firstCharacterIndex_5(int32_t value)
	{
		___firstCharacterIndex_5 = value;
	}

	inline static int32_t get_offset_of_firstVisibleCharacterIndex_6() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___firstVisibleCharacterIndex_6)); }
	inline int32_t get_firstVisibleCharacterIndex_6() const { return ___firstVisibleCharacterIndex_6; }
	inline int32_t* get_address_of_firstVisibleCharacterIndex_6() { return &___firstVisibleCharacterIndex_6; }
	inline void set_firstVisibleCharacterIndex_6(int32_t value)
	{
		___firstVisibleCharacterIndex_6 = value;
	}

	inline static int32_t get_offset_of_lastCharacterIndex_7() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___lastCharacterIndex_7)); }
	inline int32_t get_lastCharacterIndex_7() const { return ___lastCharacterIndex_7; }
	inline int32_t* get_address_of_lastCharacterIndex_7() { return &___lastCharacterIndex_7; }
	inline void set_lastCharacterIndex_7(int32_t value)
	{
		___lastCharacterIndex_7 = value;
	}

	inline static int32_t get_offset_of_lastVisibleCharacterIndex_8() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___lastVisibleCharacterIndex_8)); }
	inline int32_t get_lastVisibleCharacterIndex_8() const { return ___lastVisibleCharacterIndex_8; }
	inline int32_t* get_address_of_lastVisibleCharacterIndex_8() { return &___lastVisibleCharacterIndex_8; }
	inline void set_lastVisibleCharacterIndex_8(int32_t value)
	{
		___lastVisibleCharacterIndex_8 = value;
	}

	inline static int32_t get_offset_of_length_9() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___length_9)); }
	inline float get_length_9() const { return ___length_9; }
	inline float* get_address_of_length_9() { return &___length_9; }
	inline void set_length_9(float value)
	{
		___length_9 = value;
	}

	inline static int32_t get_offset_of_lineHeight_10() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___lineHeight_10)); }
	inline float get_lineHeight_10() const { return ___lineHeight_10; }
	inline float* get_address_of_lineHeight_10() { return &___lineHeight_10; }
	inline void set_lineHeight_10(float value)
	{
		___lineHeight_10 = value;
	}

	inline static int32_t get_offset_of_ascender_11() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___ascender_11)); }
	inline float get_ascender_11() const { return ___ascender_11; }
	inline float* get_address_of_ascender_11() { return &___ascender_11; }
	inline void set_ascender_11(float value)
	{
		___ascender_11 = value;
	}

	inline static int32_t get_offset_of_baseline_12() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___baseline_12)); }
	inline float get_baseline_12() const { return ___baseline_12; }
	inline float* get_address_of_baseline_12() { return &___baseline_12; }
	inline void set_baseline_12(float value)
	{
		___baseline_12 = value;
	}

	inline static int32_t get_offset_of_descender_13() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___descender_13)); }
	inline float get_descender_13() const { return ___descender_13; }
	inline float* get_address_of_descender_13() { return &___descender_13; }
	inline void set_descender_13(float value)
	{
		___descender_13 = value;
	}

	inline static int32_t get_offset_of_maxAdvance_14() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___maxAdvance_14)); }
	inline float get_maxAdvance_14() const { return ___maxAdvance_14; }
	inline float* get_address_of_maxAdvance_14() { return &___maxAdvance_14; }
	inline void set_maxAdvance_14(float value)
	{
		___maxAdvance_14 = value;
	}

	inline static int32_t get_offset_of_width_15() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___width_15)); }
	inline float get_width_15() const { return ___width_15; }
	inline float* get_address_of_width_15() { return &___width_15; }
	inline void set_width_15(float value)
	{
		___width_15 = value;
	}

	inline static int32_t get_offset_of_marginLeft_16() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___marginLeft_16)); }
	inline float get_marginLeft_16() const { return ___marginLeft_16; }
	inline float* get_address_of_marginLeft_16() { return &___marginLeft_16; }
	inline void set_marginLeft_16(float value)
	{
		___marginLeft_16 = value;
	}

	inline static int32_t get_offset_of_marginRight_17() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___marginRight_17)); }
	inline float get_marginRight_17() const { return ___marginRight_17; }
	inline float* get_address_of_marginRight_17() { return &___marginRight_17; }
	inline void set_marginRight_17(float value)
	{
		___marginRight_17 = value;
	}

	inline static int32_t get_offset_of_alignment_18() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___alignment_18)); }
	inline int32_t get_alignment_18() const { return ___alignment_18; }
	inline int32_t* get_address_of_alignment_18() { return &___alignment_18; }
	inline void set_alignment_18(int32_t value)
	{
		___alignment_18 = value;
	}

	inline static int32_t get_offset_of_lineExtents_19() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___lineExtents_19)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_lineExtents_19() const { return ___lineExtents_19; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_lineExtents_19() { return &___lineExtents_19; }
	inline void set_lineExtents_19(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___lineExtents_19 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct  TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___itemStack_0)); }
	inline FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6* get_itemStack_0() const { return ___itemStack_0; }
	inline FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___m_DefaultItem_2)); }
	inline int32_t get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline int32_t* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(int32_t value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct  TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___itemStack_0)); }
	inline HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA* get_itemStack_0() const { return ___itemStack_0; }
	inline HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___m_DefaultItem_2)); }
	inline HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759 * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct  TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___itemStack_0)); }
	inline HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB* get_itemStack_0() const { return ___itemStack_0; }
	inline HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___m_DefaultItem_2)); }
	inline int32_t get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline int32_t* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(int32_t value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
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


// System.Action`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>
struct  Action_1_t6AC51F95C320504155E365235FB02570EBC11815  : public MulticastDelegate_t
{
public:

public:
};


// TMPro.WordWrapState
struct  WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 
{
public:
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScale
	float ___fontScale_27;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_28;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_29;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_30;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_31;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_32;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_33;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_34;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_35;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___textInfo_36;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  ___lineInfo_37;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___vertexColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___underlineColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___strikethroughColor_40;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___highlightColor_41;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  ___basicStyleStack_42;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___italicAngleStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___colorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___underlineColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___strikethroughColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___highlightColorStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  ___highlightStateStack_48;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  ___colorGradientStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___sizeStack_50;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___indentStack_51;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  ___fontWeightStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___styleStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___baselineStack_54;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___actionStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  ___materialReferenceStack_56;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  ___lineJustificationStack_57;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_58;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___currentFontAsset_59;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___currentSpriteAsset_60;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___currentMaterial_61;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_62;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___meshExtents_63;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_64;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_65;

public:
	inline static int32_t get_offset_of_previous_WordBreak_0() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___previous_WordBreak_0)); }
	inline int32_t get_previous_WordBreak_0() const { return ___previous_WordBreak_0; }
	inline int32_t* get_address_of_previous_WordBreak_0() { return &___previous_WordBreak_0; }
	inline void set_previous_WordBreak_0(int32_t value)
	{
		___previous_WordBreak_0 = value;
	}

	inline static int32_t get_offset_of_total_CharacterCount_1() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___total_CharacterCount_1)); }
	inline int32_t get_total_CharacterCount_1() const { return ___total_CharacterCount_1; }
	inline int32_t* get_address_of_total_CharacterCount_1() { return &___total_CharacterCount_1; }
	inline void set_total_CharacterCount_1(int32_t value)
	{
		___total_CharacterCount_1 = value;
	}

	inline static int32_t get_offset_of_visible_CharacterCount_2() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___visible_CharacterCount_2)); }
	inline int32_t get_visible_CharacterCount_2() const { return ___visible_CharacterCount_2; }
	inline int32_t* get_address_of_visible_CharacterCount_2() { return &___visible_CharacterCount_2; }
	inline void set_visible_CharacterCount_2(int32_t value)
	{
		___visible_CharacterCount_2 = value;
	}

	inline static int32_t get_offset_of_visible_SpriteCount_3() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___visible_SpriteCount_3)); }
	inline int32_t get_visible_SpriteCount_3() const { return ___visible_SpriteCount_3; }
	inline int32_t* get_address_of_visible_SpriteCount_3() { return &___visible_SpriteCount_3; }
	inline void set_visible_SpriteCount_3(int32_t value)
	{
		___visible_SpriteCount_3 = value;
	}

	inline static int32_t get_offset_of_visible_LinkCount_4() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___visible_LinkCount_4)); }
	inline int32_t get_visible_LinkCount_4() const { return ___visible_LinkCount_4; }
	inline int32_t* get_address_of_visible_LinkCount_4() { return &___visible_LinkCount_4; }
	inline void set_visible_LinkCount_4(int32_t value)
	{
		___visible_LinkCount_4 = value;
	}

	inline static int32_t get_offset_of_firstCharacterIndex_5() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___firstCharacterIndex_5)); }
	inline int32_t get_firstCharacterIndex_5() const { return ___firstCharacterIndex_5; }
	inline int32_t* get_address_of_firstCharacterIndex_5() { return &___firstCharacterIndex_5; }
	inline void set_firstCharacterIndex_5(int32_t value)
	{
		___firstCharacterIndex_5 = value;
	}

	inline static int32_t get_offset_of_firstVisibleCharacterIndex_6() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___firstVisibleCharacterIndex_6)); }
	inline int32_t get_firstVisibleCharacterIndex_6() const { return ___firstVisibleCharacterIndex_6; }
	inline int32_t* get_address_of_firstVisibleCharacterIndex_6() { return &___firstVisibleCharacterIndex_6; }
	inline void set_firstVisibleCharacterIndex_6(int32_t value)
	{
		___firstVisibleCharacterIndex_6 = value;
	}

	inline static int32_t get_offset_of_lastCharacterIndex_7() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lastCharacterIndex_7)); }
	inline int32_t get_lastCharacterIndex_7() const { return ___lastCharacterIndex_7; }
	inline int32_t* get_address_of_lastCharacterIndex_7() { return &___lastCharacterIndex_7; }
	inline void set_lastCharacterIndex_7(int32_t value)
	{
		___lastCharacterIndex_7 = value;
	}

	inline static int32_t get_offset_of_lastVisibleCharIndex_8() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lastVisibleCharIndex_8)); }
	inline int32_t get_lastVisibleCharIndex_8() const { return ___lastVisibleCharIndex_8; }
	inline int32_t* get_address_of_lastVisibleCharIndex_8() { return &___lastVisibleCharIndex_8; }
	inline void set_lastVisibleCharIndex_8(int32_t value)
	{
		___lastVisibleCharIndex_8 = value;
	}

	inline static int32_t get_offset_of_lineNumber_9() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lineNumber_9)); }
	inline int32_t get_lineNumber_9() const { return ___lineNumber_9; }
	inline int32_t* get_address_of_lineNumber_9() { return &___lineNumber_9; }
	inline void set_lineNumber_9(int32_t value)
	{
		___lineNumber_9 = value;
	}

	inline static int32_t get_offset_of_maxCapHeight_10() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxCapHeight_10)); }
	inline float get_maxCapHeight_10() const { return ___maxCapHeight_10; }
	inline float* get_address_of_maxCapHeight_10() { return &___maxCapHeight_10; }
	inline void set_maxCapHeight_10(float value)
	{
		___maxCapHeight_10 = value;
	}

	inline static int32_t get_offset_of_maxAscender_11() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxAscender_11)); }
	inline float get_maxAscender_11() const { return ___maxAscender_11; }
	inline float* get_address_of_maxAscender_11() { return &___maxAscender_11; }
	inline void set_maxAscender_11(float value)
	{
		___maxAscender_11 = value;
	}

	inline static int32_t get_offset_of_maxDescender_12() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxDescender_12)); }
	inline float get_maxDescender_12() const { return ___maxDescender_12; }
	inline float* get_address_of_maxDescender_12() { return &___maxDescender_12; }
	inline void set_maxDescender_12(float value)
	{
		___maxDescender_12 = value;
	}

	inline static int32_t get_offset_of_startOfLineAscender_13() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___startOfLineAscender_13)); }
	inline float get_startOfLineAscender_13() const { return ___startOfLineAscender_13; }
	inline float* get_address_of_startOfLineAscender_13() { return &___startOfLineAscender_13; }
	inline void set_startOfLineAscender_13(float value)
	{
		___startOfLineAscender_13 = value;
	}

	inline static int32_t get_offset_of_maxLineAscender_14() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxLineAscender_14)); }
	inline float get_maxLineAscender_14() const { return ___maxLineAscender_14; }
	inline float* get_address_of_maxLineAscender_14() { return &___maxLineAscender_14; }
	inline void set_maxLineAscender_14(float value)
	{
		___maxLineAscender_14 = value;
	}

	inline static int32_t get_offset_of_maxLineDescender_15() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxLineDescender_15)); }
	inline float get_maxLineDescender_15() const { return ___maxLineDescender_15; }
	inline float* get_address_of_maxLineDescender_15() { return &___maxLineDescender_15; }
	inline void set_maxLineDescender_15(float value)
	{
		___maxLineDescender_15 = value;
	}

	inline static int32_t get_offset_of_pageAscender_16() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___pageAscender_16)); }
	inline float get_pageAscender_16() const { return ___pageAscender_16; }
	inline float* get_address_of_pageAscender_16() { return &___pageAscender_16; }
	inline void set_pageAscender_16(float value)
	{
		___pageAscender_16 = value;
	}

	inline static int32_t get_offset_of_horizontalAlignment_17() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___horizontalAlignment_17)); }
	inline int32_t get_horizontalAlignment_17() const { return ___horizontalAlignment_17; }
	inline int32_t* get_address_of_horizontalAlignment_17() { return &___horizontalAlignment_17; }
	inline void set_horizontalAlignment_17(int32_t value)
	{
		___horizontalAlignment_17 = value;
	}

	inline static int32_t get_offset_of_marginLeft_18() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___marginLeft_18)); }
	inline float get_marginLeft_18() const { return ___marginLeft_18; }
	inline float* get_address_of_marginLeft_18() { return &___marginLeft_18; }
	inline void set_marginLeft_18(float value)
	{
		___marginLeft_18 = value;
	}

	inline static int32_t get_offset_of_marginRight_19() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___marginRight_19)); }
	inline float get_marginRight_19() const { return ___marginRight_19; }
	inline float* get_address_of_marginRight_19() { return &___marginRight_19; }
	inline void set_marginRight_19(float value)
	{
		___marginRight_19 = value;
	}

	inline static int32_t get_offset_of_xAdvance_20() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___xAdvance_20)); }
	inline float get_xAdvance_20() const { return ___xAdvance_20; }
	inline float* get_address_of_xAdvance_20() { return &___xAdvance_20; }
	inline void set_xAdvance_20(float value)
	{
		___xAdvance_20 = value;
	}

	inline static int32_t get_offset_of_preferredWidth_21() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___preferredWidth_21)); }
	inline float get_preferredWidth_21() const { return ___preferredWidth_21; }
	inline float* get_address_of_preferredWidth_21() { return &___preferredWidth_21; }
	inline void set_preferredWidth_21(float value)
	{
		___preferredWidth_21 = value;
	}

	inline static int32_t get_offset_of_preferredHeight_22() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___preferredHeight_22)); }
	inline float get_preferredHeight_22() const { return ___preferredHeight_22; }
	inline float* get_address_of_preferredHeight_22() { return &___preferredHeight_22; }
	inline void set_preferredHeight_22(float value)
	{
		___preferredHeight_22 = value;
	}

	inline static int32_t get_offset_of_previousLineScale_23() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___previousLineScale_23)); }
	inline float get_previousLineScale_23() const { return ___previousLineScale_23; }
	inline float* get_address_of_previousLineScale_23() { return &___previousLineScale_23; }
	inline void set_previousLineScale_23(float value)
	{
		___previousLineScale_23 = value;
	}

	inline static int32_t get_offset_of_wordCount_24() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___wordCount_24)); }
	inline int32_t get_wordCount_24() const { return ___wordCount_24; }
	inline int32_t* get_address_of_wordCount_24() { return &___wordCount_24; }
	inline void set_wordCount_24(int32_t value)
	{
		___wordCount_24 = value;
	}

	inline static int32_t get_offset_of_fontStyle_25() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___fontStyle_25)); }
	inline int32_t get_fontStyle_25() const { return ___fontStyle_25; }
	inline int32_t* get_address_of_fontStyle_25() { return &___fontStyle_25; }
	inline void set_fontStyle_25(int32_t value)
	{
		___fontStyle_25 = value;
	}

	inline static int32_t get_offset_of_italicAngle_26() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___italicAngle_26)); }
	inline int32_t get_italicAngle_26() const { return ___italicAngle_26; }
	inline int32_t* get_address_of_italicAngle_26() { return &___italicAngle_26; }
	inline void set_italicAngle_26(int32_t value)
	{
		___italicAngle_26 = value;
	}

	inline static int32_t get_offset_of_fontScale_27() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___fontScale_27)); }
	inline float get_fontScale_27() const { return ___fontScale_27; }
	inline float* get_address_of_fontScale_27() { return &___fontScale_27; }
	inline void set_fontScale_27(float value)
	{
		___fontScale_27 = value;
	}

	inline static int32_t get_offset_of_fontScaleMultiplier_28() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___fontScaleMultiplier_28)); }
	inline float get_fontScaleMultiplier_28() const { return ___fontScaleMultiplier_28; }
	inline float* get_address_of_fontScaleMultiplier_28() { return &___fontScaleMultiplier_28; }
	inline void set_fontScaleMultiplier_28(float value)
	{
		___fontScaleMultiplier_28 = value;
	}

	inline static int32_t get_offset_of_currentFontSize_29() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentFontSize_29)); }
	inline float get_currentFontSize_29() const { return ___currentFontSize_29; }
	inline float* get_address_of_currentFontSize_29() { return &___currentFontSize_29; }
	inline void set_currentFontSize_29(float value)
	{
		___currentFontSize_29 = value;
	}

	inline static int32_t get_offset_of_baselineOffset_30() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___baselineOffset_30)); }
	inline float get_baselineOffset_30() const { return ___baselineOffset_30; }
	inline float* get_address_of_baselineOffset_30() { return &___baselineOffset_30; }
	inline void set_baselineOffset_30(float value)
	{
		___baselineOffset_30 = value;
	}

	inline static int32_t get_offset_of_lineOffset_31() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lineOffset_31)); }
	inline float get_lineOffset_31() const { return ___lineOffset_31; }
	inline float* get_address_of_lineOffset_31() { return &___lineOffset_31; }
	inline void set_lineOffset_31(float value)
	{
		___lineOffset_31 = value;
	}

	inline static int32_t get_offset_of_isDrivenLineSpacing_32() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___isDrivenLineSpacing_32)); }
	inline bool get_isDrivenLineSpacing_32() const { return ___isDrivenLineSpacing_32; }
	inline bool* get_address_of_isDrivenLineSpacing_32() { return &___isDrivenLineSpacing_32; }
	inline void set_isDrivenLineSpacing_32(bool value)
	{
		___isDrivenLineSpacing_32 = value;
	}

	inline static int32_t get_offset_of_glyphHorizontalAdvanceAdjustment_33() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___glyphHorizontalAdvanceAdjustment_33)); }
	inline float get_glyphHorizontalAdvanceAdjustment_33() const { return ___glyphHorizontalAdvanceAdjustment_33; }
	inline float* get_address_of_glyphHorizontalAdvanceAdjustment_33() { return &___glyphHorizontalAdvanceAdjustment_33; }
	inline void set_glyphHorizontalAdvanceAdjustment_33(float value)
	{
		___glyphHorizontalAdvanceAdjustment_33 = value;
	}

	inline static int32_t get_offset_of_cSpace_34() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___cSpace_34)); }
	inline float get_cSpace_34() const { return ___cSpace_34; }
	inline float* get_address_of_cSpace_34() { return &___cSpace_34; }
	inline void set_cSpace_34(float value)
	{
		___cSpace_34 = value;
	}

	inline static int32_t get_offset_of_mSpace_35() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___mSpace_35)); }
	inline float get_mSpace_35() const { return ___mSpace_35; }
	inline float* get_address_of_mSpace_35() { return &___mSpace_35; }
	inline void set_mSpace_35(float value)
	{
		___mSpace_35 = value;
	}

	inline static int32_t get_offset_of_textInfo_36() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___textInfo_36)); }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * get_textInfo_36() const { return ___textInfo_36; }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 ** get_address_of_textInfo_36() { return &___textInfo_36; }
	inline void set_textInfo_36(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * value)
	{
		___textInfo_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_36), (void*)value);
	}

	inline static int32_t get_offset_of_lineInfo_37() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lineInfo_37)); }
	inline TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  get_lineInfo_37() const { return ___lineInfo_37; }
	inline TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7 * get_address_of_lineInfo_37() { return &___lineInfo_37; }
	inline void set_lineInfo_37(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  value)
	{
		___lineInfo_37 = value;
	}

	inline static int32_t get_offset_of_vertexColor_38() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___vertexColor_38)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_vertexColor_38() const { return ___vertexColor_38; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_vertexColor_38() { return &___vertexColor_38; }
	inline void set_vertexColor_38(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___vertexColor_38 = value;
	}

	inline static int32_t get_offset_of_underlineColor_39() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___underlineColor_39)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_underlineColor_39() const { return ___underlineColor_39; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_underlineColor_39() { return &___underlineColor_39; }
	inline void set_underlineColor_39(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___underlineColor_39 = value;
	}

	inline static int32_t get_offset_of_strikethroughColor_40() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___strikethroughColor_40)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_strikethroughColor_40() const { return ___strikethroughColor_40; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_strikethroughColor_40() { return &___strikethroughColor_40; }
	inline void set_strikethroughColor_40(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___strikethroughColor_40 = value;
	}

	inline static int32_t get_offset_of_highlightColor_41() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___highlightColor_41)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_highlightColor_41() const { return ___highlightColor_41; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_highlightColor_41() { return &___highlightColor_41; }
	inline void set_highlightColor_41(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___highlightColor_41 = value;
	}

	inline static int32_t get_offset_of_basicStyleStack_42() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___basicStyleStack_42)); }
	inline TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  get_basicStyleStack_42() const { return ___basicStyleStack_42; }
	inline TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9 * get_address_of_basicStyleStack_42() { return &___basicStyleStack_42; }
	inline void set_basicStyleStack_42(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  value)
	{
		___basicStyleStack_42 = value;
	}

	inline static int32_t get_offset_of_italicAngleStack_43() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___italicAngleStack_43)); }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  get_italicAngleStack_43() const { return ___italicAngleStack_43; }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA * get_address_of_italicAngleStack_43() { return &___italicAngleStack_43; }
	inline void set_italicAngleStack_43(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  value)
	{
		___italicAngleStack_43 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___italicAngleStack_43))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorStack_44() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___colorStack_44)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_colorStack_44() const { return ___colorStack_44; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_colorStack_44() { return &___colorStack_44; }
	inline void set_colorStack_44(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___colorStack_44 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorStack_44))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_underlineColorStack_45() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___underlineColorStack_45)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_underlineColorStack_45() const { return ___underlineColorStack_45; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_underlineColorStack_45() { return &___underlineColorStack_45; }
	inline void set_underlineColorStack_45(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___underlineColorStack_45 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___underlineColorStack_45))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_strikethroughColorStack_46() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___strikethroughColorStack_46)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_strikethroughColorStack_46() const { return ___strikethroughColorStack_46; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_strikethroughColorStack_46() { return &___strikethroughColorStack_46; }
	inline void set_strikethroughColorStack_46(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___strikethroughColorStack_46 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___strikethroughColorStack_46))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_highlightColorStack_47() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___highlightColorStack_47)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_highlightColorStack_47() const { return ___highlightColorStack_47; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_highlightColorStack_47() { return &___highlightColorStack_47; }
	inline void set_highlightColorStack_47(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___highlightColorStack_47 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___highlightColorStack_47))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_highlightStateStack_48() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___highlightStateStack_48)); }
	inline TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  get_highlightStateStack_48() const { return ___highlightStateStack_48; }
	inline TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E * get_address_of_highlightStateStack_48() { return &___highlightStateStack_48; }
	inline void set_highlightStateStack_48(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  value)
	{
		___highlightStateStack_48 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___highlightStateStack_48))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorGradientStack_49() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___colorGradientStack_49)); }
	inline TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  get_colorGradientStack_49() const { return ___colorGradientStack_49; }
	inline TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804 * get_address_of_colorGradientStack_49() { return &___colorGradientStack_49; }
	inline void set_colorGradientStack_49(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  value)
	{
		___colorGradientStack_49 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorGradientStack_49))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorGradientStack_49))->___m_DefaultItem_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_sizeStack_50() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___sizeStack_50)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_sizeStack_50() const { return ___sizeStack_50; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_sizeStack_50() { return &___sizeStack_50; }
	inline void set_sizeStack_50(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___sizeStack_50 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___sizeStack_50))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_indentStack_51() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___indentStack_51)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_indentStack_51() const { return ___indentStack_51; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_indentStack_51() { return &___indentStack_51; }
	inline void set_indentStack_51(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___indentStack_51 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___indentStack_51))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_fontWeightStack_52() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___fontWeightStack_52)); }
	inline TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  get_fontWeightStack_52() const { return ___fontWeightStack_52; }
	inline TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7 * get_address_of_fontWeightStack_52() { return &___fontWeightStack_52; }
	inline void set_fontWeightStack_52(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  value)
	{
		___fontWeightStack_52 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___fontWeightStack_52))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_styleStack_53() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___styleStack_53)); }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  get_styleStack_53() const { return ___styleStack_53; }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA * get_address_of_styleStack_53() { return &___styleStack_53; }
	inline void set_styleStack_53(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  value)
	{
		___styleStack_53 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___styleStack_53))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_baselineStack_54() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___baselineStack_54)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_baselineStack_54() const { return ___baselineStack_54; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_baselineStack_54() { return &___baselineStack_54; }
	inline void set_baselineStack_54(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___baselineStack_54 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___baselineStack_54))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_actionStack_55() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___actionStack_55)); }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  get_actionStack_55() const { return ___actionStack_55; }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA * get_address_of_actionStack_55() { return &___actionStack_55; }
	inline void set_actionStack_55(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  value)
	{
		___actionStack_55 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___actionStack_55))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_materialReferenceStack_56() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___materialReferenceStack_56)); }
	inline TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  get_materialReferenceStack_56() const { return ___materialReferenceStack_56; }
	inline TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3 * get_address_of_materialReferenceStack_56() { return &___materialReferenceStack_56; }
	inline void set_materialReferenceStack_56(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  value)
	{
		___materialReferenceStack_56 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___materialReferenceStack_56))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_56))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_56))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_56))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_56))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_lineJustificationStack_57() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lineJustificationStack_57)); }
	inline TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  get_lineJustificationStack_57() const { return ___lineJustificationStack_57; }
	inline TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B * get_address_of_lineJustificationStack_57() { return &___lineJustificationStack_57; }
	inline void set_lineJustificationStack_57(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  value)
	{
		___lineJustificationStack_57 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___lineJustificationStack_57))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_spriteAnimationID_58() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___spriteAnimationID_58)); }
	inline int32_t get_spriteAnimationID_58() const { return ___spriteAnimationID_58; }
	inline int32_t* get_address_of_spriteAnimationID_58() { return &___spriteAnimationID_58; }
	inline void set_spriteAnimationID_58(int32_t value)
	{
		___spriteAnimationID_58 = value;
	}

	inline static int32_t get_offset_of_currentFontAsset_59() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentFontAsset_59)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_currentFontAsset_59() const { return ___currentFontAsset_59; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_currentFontAsset_59() { return &___currentFontAsset_59; }
	inline void set_currentFontAsset_59(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___currentFontAsset_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentFontAsset_59), (void*)value);
	}

	inline static int32_t get_offset_of_currentSpriteAsset_60() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentSpriteAsset_60)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_currentSpriteAsset_60() const { return ___currentSpriteAsset_60; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_currentSpriteAsset_60() { return &___currentSpriteAsset_60; }
	inline void set_currentSpriteAsset_60(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___currentSpriteAsset_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentSpriteAsset_60), (void*)value);
	}

	inline static int32_t get_offset_of_currentMaterial_61() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentMaterial_61)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_currentMaterial_61() const { return ___currentMaterial_61; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_currentMaterial_61() { return &___currentMaterial_61; }
	inline void set_currentMaterial_61(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___currentMaterial_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentMaterial_61), (void*)value);
	}

	inline static int32_t get_offset_of_currentMaterialIndex_62() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentMaterialIndex_62)); }
	inline int32_t get_currentMaterialIndex_62() const { return ___currentMaterialIndex_62; }
	inline int32_t* get_address_of_currentMaterialIndex_62() { return &___currentMaterialIndex_62; }
	inline void set_currentMaterialIndex_62(int32_t value)
	{
		___currentMaterialIndex_62 = value;
	}

	inline static int32_t get_offset_of_meshExtents_63() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___meshExtents_63)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_meshExtents_63() const { return ___meshExtents_63; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_meshExtents_63() { return &___meshExtents_63; }
	inline void set_meshExtents_63(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___meshExtents_63 = value;
	}

	inline static int32_t get_offset_of_tagNoParsing_64() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___tagNoParsing_64)); }
	inline bool get_tagNoParsing_64() const { return ___tagNoParsing_64; }
	inline bool* get_address_of_tagNoParsing_64() { return &___tagNoParsing_64; }
	inline void set_tagNoParsing_64(bool value)
	{
		___tagNoParsing_64 = value;
	}

	inline static int32_t get_offset_of_isNonBreakingSpace_65() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___isNonBreakingSpace_65)); }
	inline bool get_isNonBreakingSpace_65() const { return ___isNonBreakingSpace_65; }
	inline bool* get_address_of_isNonBreakingSpace_65() { return &___isNonBreakingSpace_65; }
	inline void set_isNonBreakingSpace_65(bool value)
	{
		___isNonBreakingSpace_65 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScale_27;
	float ___fontScaleMultiplier_28;
	float ___currentFontSize_29;
	float ___baselineOffset_30;
	float ___lineOffset_31;
	int32_t ___isDrivenLineSpacing_32;
	float ___glyphHorizontalAdvanceAdjustment_33;
	float ___cSpace_34;
	float ___mSpace_35;
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___textInfo_36;
	TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  ___lineInfo_37;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___vertexColor_38;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___underlineColor_39;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___strikethroughColor_40;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___highlightColor_41;
	TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  ___basicStyleStack_42;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___italicAngleStack_43;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___colorStack_44;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___underlineColorStack_45;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___strikethroughColorStack_46;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___highlightColorStack_47;
	TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  ___highlightStateStack_48;
	TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  ___colorGradientStack_49;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___sizeStack_50;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___indentStack_51;
	TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  ___fontWeightStack_52;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___styleStack_53;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___baselineStack_54;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___actionStack_55;
	TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  ___materialReferenceStack_56;
	TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  ___lineJustificationStack_57;
	int32_t ___spriteAnimationID_58;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___currentFontAsset_59;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___currentSpriteAsset_60;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___currentMaterial_61;
	int32_t ___currentMaterialIndex_62;
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___meshExtents_63;
	int32_t ___tagNoParsing_64;
	int32_t ___isNonBreakingSpace_65;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScale_27;
	float ___fontScaleMultiplier_28;
	float ___currentFontSize_29;
	float ___baselineOffset_30;
	float ___lineOffset_31;
	int32_t ___isDrivenLineSpacing_32;
	float ___glyphHorizontalAdvanceAdjustment_33;
	float ___cSpace_34;
	float ___mSpace_35;
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___textInfo_36;
	TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  ___lineInfo_37;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___vertexColor_38;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___underlineColor_39;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___strikethroughColor_40;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___highlightColor_41;
	TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  ___basicStyleStack_42;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___italicAngleStack_43;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___colorStack_44;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___underlineColorStack_45;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___strikethroughColorStack_46;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___highlightColorStack_47;
	TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  ___highlightStateStack_48;
	TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  ___colorGradientStack_49;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___sizeStack_50;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___indentStack_51;
	TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  ___fontWeightStack_52;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___styleStack_53;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___baselineStack_54;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___actionStack_55;
	TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  ___materialReferenceStack_56;
	TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  ___lineJustificationStack_57;
	int32_t ___spriteAnimationID_58;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___currentFontAsset_59;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___currentSpriteAsset_60;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___currentMaterial_61;
	int32_t ___currentMaterialIndex_62;
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___meshExtents_63;
	int32_t ___tagNoParsing_64;
	int32_t ___isNonBreakingSpace_65;
};

// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct  Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody
struct  Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
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


// Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile
struct  HandPhysicsServiceProfile_tEF03D15AFC38FC06DA510603A16ED58F220FF9A0  : public BaseMixedRealityProfile_t9B92D8A7CB0AE5AF973870EDF7DE2BC12E5FA4E5
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile::handPhysicsLayer
	int32_t ___handPhysicsLayer_5;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile::fingerTipKinematicBodyPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___fingerTipKinematicBodyPrefab_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile::usePalmKinematicBody
	bool ___usePalmKinematicBody_7;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile::palmKinematicBodyPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___palmKinematicBodyPrefab_8;

public:
	inline static int32_t get_offset_of_handPhysicsLayer_5() { return static_cast<int32_t>(offsetof(HandPhysicsServiceProfile_tEF03D15AFC38FC06DA510603A16ED58F220FF9A0, ___handPhysicsLayer_5)); }
	inline int32_t get_handPhysicsLayer_5() const { return ___handPhysicsLayer_5; }
	inline int32_t* get_address_of_handPhysicsLayer_5() { return &___handPhysicsLayer_5; }
	inline void set_handPhysicsLayer_5(int32_t value)
	{
		___handPhysicsLayer_5 = value;
	}

	inline static int32_t get_offset_of_fingerTipKinematicBodyPrefab_6() { return static_cast<int32_t>(offsetof(HandPhysicsServiceProfile_tEF03D15AFC38FC06DA510603A16ED58F220FF9A0, ___fingerTipKinematicBodyPrefab_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_fingerTipKinematicBodyPrefab_6() const { return ___fingerTipKinematicBodyPrefab_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_fingerTipKinematicBodyPrefab_6() { return &___fingerTipKinematicBodyPrefab_6; }
	inline void set_fingerTipKinematicBodyPrefab_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___fingerTipKinematicBodyPrefab_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fingerTipKinematicBodyPrefab_6), (void*)value);
	}

	inline static int32_t get_offset_of_usePalmKinematicBody_7() { return static_cast<int32_t>(offsetof(HandPhysicsServiceProfile_tEF03D15AFC38FC06DA510603A16ED58F220FF9A0, ___usePalmKinematicBody_7)); }
	inline bool get_usePalmKinematicBody_7() const { return ___usePalmKinematicBody_7; }
	inline bool* get_address_of_usePalmKinematicBody_7() { return &___usePalmKinematicBody_7; }
	inline void set_usePalmKinematicBody_7(bool value)
	{
		___usePalmKinematicBody_7 = value;
	}

	inline static int32_t get_offset_of_palmKinematicBodyPrefab_8() { return static_cast<int32_t>(offsetof(HandPhysicsServiceProfile_tEF03D15AFC38FC06DA510603A16ED58F220FF9A0, ___palmKinematicBodyPrefab_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_palmKinematicBodyPrefab_8() const { return ___palmKinematicBodyPrefab_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_palmKinematicBodyPrefab_8() { return &___palmKinematicBodyPrefab_8; }
	inline void set_palmKinematicBodyPrefab_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___palmKinematicBodyPrefab_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___palmKinematicBodyPrefab_8), (void*)value);
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct  TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t4B20066E10D8FF621FB20C05F21B22167C90F548* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___itemStack_0)); }
	inline WordWrapStateU5BU5D_t4B20066E10D8FF621FB20C05F21B22167C90F548* get_itemStack_0() const { return ___itemStack_0; }
	inline WordWrapStateU5BU5D_t4B20066E10D8FF621FB20C05F21B22167C90F548** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(WordWrapStateU5BU5D_t4B20066E10D8FF621FB20C05F21B22167C90F548* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___m_DefaultItem_2)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_DefaultItem_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___textInfo_36), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___italicAngleStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___colorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___underlineColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___strikethroughColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___highlightColorStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___highlightStateStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___colorGradientStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___colorGradientStack_49))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___sizeStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___indentStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___fontWeightStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___styleStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___baselineStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___actionStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___materialReferenceStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_56))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_56))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___lineJustificationStack_57))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___currentFontAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___currentSpriteAsset_60), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___currentMaterial_61), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.Examples.PhysicsTriggerEventReadout
struct  PhysicsTriggerEventReadout_t32B6FF61712D41B62A1EB6B91045ED904D557520  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// TMPro.TextMeshPro Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.Examples.PhysicsTriggerEventReadout::textField
	TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * ___textField_4;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody> Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.Examples.PhysicsTriggerEventReadout::currentJoints
	List_1_t8B72AC0039307D81C9D833E0EC1ACBA710108D98 * ___currentJoints_5;

public:
	inline static int32_t get_offset_of_textField_4() { return static_cast<int32_t>(offsetof(PhysicsTriggerEventReadout_t32B6FF61712D41B62A1EB6B91045ED904D557520, ___textField_4)); }
	inline TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * get_textField_4() const { return ___textField_4; }
	inline TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 ** get_address_of_textField_4() { return &___textField_4; }
	inline void set_textField_4(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * value)
	{
		___textField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textField_4), (void*)value);
	}

	inline static int32_t get_offset_of_currentJoints_5() { return static_cast<int32_t>(offsetof(PhysicsTriggerEventReadout_t32B6FF61712D41B62A1EB6B91045ED904D557520, ___currentJoints_5)); }
	inline List_1_t8B72AC0039307D81C9D833E0EC1ACBA710108D98 * get_currentJoints_5() const { return ___currentJoints_5; }
	inline List_1_t8B72AC0039307D81C9D833E0EC1ACBA710108D98 ** get_address_of_currentJoints_5() { return &___currentJoints_5; }
	inline void set_currentJoints_5(List_1_t8B72AC0039307D81C9D833E0EC1ACBA710108D98 * value)
	{
		___currentJoints_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentJoints_5), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody
struct  JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::<Joint>k__BackingField
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CJointU3Ek__BackingField_4;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::<HandednessType>k__BackingField
	uint8_t ___U3CHandednessTypeU3Ek__BackingField_5;
	// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::<JointType>k__BackingField
	int32_t ___U3CJointTypeU3Ek__BackingField_6;
	// System.Action`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody> Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::<OnEnableAction>k__BackingField
	Action_1_t6AC51F95C320504155E365235FB02570EBC11815 * ___U3COnEnableActionU3Ek__BackingField_7;
	// System.Action`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody> Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::<OnDisableAction>k__BackingField
	Action_1_t6AC51F95C320504155E365235FB02570EBC11815 * ___U3COnDisableActionU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CJointU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9, ___U3CJointU3Ek__BackingField_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CJointU3Ek__BackingField_4() const { return ___U3CJointU3Ek__BackingField_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CJointU3Ek__BackingField_4() { return &___U3CJointU3Ek__BackingField_4; }
	inline void set_U3CJointU3Ek__BackingField_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CJointU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CJointU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CHandednessTypeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9, ___U3CHandednessTypeU3Ek__BackingField_5)); }
	inline uint8_t get_U3CHandednessTypeU3Ek__BackingField_5() const { return ___U3CHandednessTypeU3Ek__BackingField_5; }
	inline uint8_t* get_address_of_U3CHandednessTypeU3Ek__BackingField_5() { return &___U3CHandednessTypeU3Ek__BackingField_5; }
	inline void set_U3CHandednessTypeU3Ek__BackingField_5(uint8_t value)
	{
		___U3CHandednessTypeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CJointTypeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9, ___U3CJointTypeU3Ek__BackingField_6)); }
	inline int32_t get_U3CJointTypeU3Ek__BackingField_6() const { return ___U3CJointTypeU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CJointTypeU3Ek__BackingField_6() { return &___U3CJointTypeU3Ek__BackingField_6; }
	inline void set_U3CJointTypeU3Ek__BackingField_6(int32_t value)
	{
		___U3CJointTypeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3COnEnableActionU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9, ___U3COnEnableActionU3Ek__BackingField_7)); }
	inline Action_1_t6AC51F95C320504155E365235FB02570EBC11815 * get_U3COnEnableActionU3Ek__BackingField_7() const { return ___U3COnEnableActionU3Ek__BackingField_7; }
	inline Action_1_t6AC51F95C320504155E365235FB02570EBC11815 ** get_address_of_U3COnEnableActionU3Ek__BackingField_7() { return &___U3COnEnableActionU3Ek__BackingField_7; }
	inline void set_U3COnEnableActionU3Ek__BackingField_7(Action_1_t6AC51F95C320504155E365235FB02570EBC11815 * value)
	{
		___U3COnEnableActionU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnEnableActionU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnDisableActionU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9, ___U3COnDisableActionU3Ek__BackingField_8)); }
	inline Action_1_t6AC51F95C320504155E365235FB02570EBC11815 * get_U3COnDisableActionU3Ek__BackingField_8() const { return ___U3COnDisableActionU3Ek__BackingField_8; }
	inline Action_1_t6AC51F95C320504155E365235FB02570EBC11815 ** get_address_of_U3COnDisableActionU3Ek__BackingField_8() { return &___U3COnDisableActionU3Ek__BackingField_8; }
	inline void set_U3COnDisableActionU3Ek__BackingField_8(Action_1_t6AC51F95C320504155E365235FB02570EBC11815 * value)
	{
		___U3COnDisableActionU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnDisableActionU3Ek__BackingField_8), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UI.Graphic
struct  Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic_CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// TMPro.TMP_Text
struct  TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_37;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_38;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___m_fontAsset_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___m_currentFontAsset_40;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_41;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_sharedMaterial_42;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_currentMaterial_43;
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* ___m_materialReferences_44;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * ___m_materialReferenceIndexLookup_45;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  ___m_materialReferenceStack_46;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_47;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ___m_fontSharedMaterials_48;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_fontMaterial_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ___m_fontMaterials_50;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_51;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_fontColor32_52;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_fontColor_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_underlineColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_strikethroughColor_56;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_57;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_58;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D  ___m_fontColorGradient_59;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * ___m_fontColorGradientPreset_60;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___m_spriteAsset_61;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_62;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_63;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_spriteColor_64;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E * ___m_StyleSheet_65;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB * ___m_TextStyle_66;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_67;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_68;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_faceColor_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_outlineColor_70;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_71;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_72;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_73;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_74;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___m_sizeStack_75;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_77;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  ___m_FontWeightStack_78;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_79;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_80;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_81;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_83;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_84;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_86;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_88;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  ___m_fontStyleStack_89;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_90;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_91;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_92;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_93;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_94;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  ___m_lineJustificationStack_95;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_textContainerLocalCorners_96;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_97;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_98;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_99;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_100;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_102;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_103;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_104;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_105;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_106;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_107;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_108;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_109;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_110;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_111;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_112;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_113;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_114;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_115;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___m_linkedTextComponent_116;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___parentLinkedComponent_117;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_118;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_119;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_120;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_121;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_122;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_123;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_124;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_125;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_126;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_127;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_128;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_129;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_130;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_132;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_133;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_134;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_135;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_136;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_137;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_138;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_141;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_142;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_143;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_144;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_margin_145;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_146;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_147;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_148;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_149;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_150;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___m_textInfo_151;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_152;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_153;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_transform_154;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_rectTransform_155;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PreviousRectTransformSize_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PreviousPivotPosition_157;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_158;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_159;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_mesh_160;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_161;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 * ___OnPreRenderText_164;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 * ___m_spriteAnimator_165;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_166;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_167;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_168;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_169;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_170;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_171;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF * ___m_LayoutElement_172;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_173;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_174;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_175;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_176;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_177;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_178;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_179;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_180;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_181;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_182;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_183;
	// System.Boolean TMPro.TMP_Text::m_isInputParsingRequired
	bool ___m_isInputParsingRequired_184;
	// TMPro.TMP_Text_TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScale
	float ___m_fontScale_186;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_187;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_htmlTag_188;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615* ___m_xmlAttribute_189;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___m_attributeParameterValues_190;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_191;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_192;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___m_indentStack_193;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_194;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_195;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_FXMatrix_196;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_197;
	// TMPro.TMP_Text_UnicodeChar[] TMPro.TMP_Text::m_InternalParsingBuffer
	UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7* ___m_InternalParsingBuffer_198;
	// System.Int32 TMPro.TMP_Text::m_InternalParsingBufferSize
	int32_t ___m_InternalParsingBufferSize_199;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* ___m_internalCharacterInfo_200;
	// System.Char[] TMPro.TMP_Text::m_input_CharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_input_CharArray_201;
	// System.Int32 TMPro.TMP_Text::m_charArray_Length
	int32_t ___m_charArray_Length_202;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedWordWrapState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedLineState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedEllipsisState_206;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedLastValidState_207;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedSoftLineBreakState_208;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7  ___m_EllipsisInsertionCandidateStack_209;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_210;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_213;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_214;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_215;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_216;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_217;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_218;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_219;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_220;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_221;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_222;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_223;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_224;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_225;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_226;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_227;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___m_meshExtents_228;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_htmlColor_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___m_colorStack_230;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___m_underlineColorStack_231;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___m_strikethroughColorStack_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  ___m_HighlightStateStack_233;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * ___m_colorGradientPreset_234;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  ___m_colorGradientStack_235;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_236;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_237;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t1E4BEAC3D61A2AD0284E919166D0F38D21540A37* ___m_TextStyleStacks_239;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___m_ItalicAngleStack_241;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_242;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___m_actionStack_243;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_244;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_245;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___m_baselineOffsetStack_246;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_247;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_248;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * ___m_cached_TextElement_249;
	// TMPro.TMP_Text_SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  ___m_Ellipsis_250;
	// TMPro.TMP_Text_SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  ___m_Underline_251;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___m_defaultSpriteAsset_252;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___m_currentSpriteAsset_253;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_254;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_255;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_256;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA* ___k_Power_258;

public:
	inline static int32_t get_offset_of_m_text_36() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_text_36)); }
	inline String_t* get_m_text_36() const { return ___m_text_36; }
	inline String_t** get_address_of_m_text_36() { return &___m_text_36; }
	inline void set_m_text_36(String_t* value)
	{
		___m_text_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_text_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextPreprocessor_37() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextPreprocessor_37)); }
	inline RuntimeObject* get_m_TextPreprocessor_37() const { return ___m_TextPreprocessor_37; }
	inline RuntimeObject** get_address_of_m_TextPreprocessor_37() { return &___m_TextPreprocessor_37; }
	inline void set_m_TextPreprocessor_37(RuntimeObject* value)
	{
		___m_TextPreprocessor_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextPreprocessor_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_isRightToLeft_38() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isRightToLeft_38)); }
	inline bool get_m_isRightToLeft_38() const { return ___m_isRightToLeft_38; }
	inline bool* get_address_of_m_isRightToLeft_38() { return &___m_isRightToLeft_38; }
	inline void set_m_isRightToLeft_38(bool value)
	{
		___m_isRightToLeft_38 = value;
	}

	inline static int32_t get_offset_of_m_fontAsset_39() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontAsset_39)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_m_fontAsset_39() const { return ___m_fontAsset_39; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_m_fontAsset_39() { return &___m_fontAsset_39; }
	inline void set_m_fontAsset_39(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___m_fontAsset_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontAsset_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentFontAsset_40() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentFontAsset_40)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_m_currentFontAsset_40() const { return ___m_currentFontAsset_40; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_m_currentFontAsset_40() { return &___m_currentFontAsset_40; }
	inline void set_m_currentFontAsset_40(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___m_currentFontAsset_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentFontAsset_40), (void*)value);
	}

	inline static int32_t get_offset_of_m_isSDFShader_41() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isSDFShader_41)); }
	inline bool get_m_isSDFShader_41() const { return ___m_isSDFShader_41; }
	inline bool* get_address_of_m_isSDFShader_41() { return &___m_isSDFShader_41; }
	inline void set_m_isSDFShader_41(bool value)
	{
		___m_isSDFShader_41 = value;
	}

	inline static int32_t get_offset_of_m_sharedMaterial_42() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_sharedMaterial_42)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_sharedMaterial_42() const { return ___m_sharedMaterial_42; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_sharedMaterial_42() { return &___m_sharedMaterial_42; }
	inline void set_m_sharedMaterial_42(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_sharedMaterial_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_sharedMaterial_42), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentMaterial_43() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentMaterial_43)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_currentMaterial_43() const { return ___m_currentMaterial_43; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_currentMaterial_43() { return &___m_currentMaterial_43; }
	inline void set_m_currentMaterial_43(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_currentMaterial_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentMaterial_43), (void*)value);
	}

	inline static int32_t get_offset_of_m_materialReferences_44() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_materialReferences_44)); }
	inline MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* get_m_materialReferences_44() const { return ___m_materialReferences_44; }
	inline MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD** get_address_of_m_materialReferences_44() { return &___m_materialReferences_44; }
	inline void set_m_materialReferences_44(MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* value)
	{
		___m_materialReferences_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_materialReferences_44), (void*)value);
	}

	inline static int32_t get_offset_of_m_materialReferenceIndexLookup_45() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_materialReferenceIndexLookup_45)); }
	inline Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * get_m_materialReferenceIndexLookup_45() const { return ___m_materialReferenceIndexLookup_45; }
	inline Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 ** get_address_of_m_materialReferenceIndexLookup_45() { return &___m_materialReferenceIndexLookup_45; }
	inline void set_m_materialReferenceIndexLookup_45(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * value)
	{
		___m_materialReferenceIndexLookup_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_materialReferenceIndexLookup_45), (void*)value);
	}

	inline static int32_t get_offset_of_m_materialReferenceStack_46() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_materialReferenceStack_46)); }
	inline TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  get_m_materialReferenceStack_46() const { return ___m_materialReferenceStack_46; }
	inline TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3 * get_address_of_m_materialReferenceStack_46() { return &___m_materialReferenceStack_46; }
	inline void set_m_materialReferenceStack_46(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  value)
	{
		___m_materialReferenceStack_46 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_materialReferenceStack_46))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_46))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_46))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_46))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_46))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_currentMaterialIndex_47() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentMaterialIndex_47)); }
	inline int32_t get_m_currentMaterialIndex_47() const { return ___m_currentMaterialIndex_47; }
	inline int32_t* get_address_of_m_currentMaterialIndex_47() { return &___m_currentMaterialIndex_47; }
	inline void set_m_currentMaterialIndex_47(int32_t value)
	{
		___m_currentMaterialIndex_47 = value;
	}

	inline static int32_t get_offset_of_m_fontSharedMaterials_48() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSharedMaterials_48)); }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* get_m_fontSharedMaterials_48() const { return ___m_fontSharedMaterials_48; }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492** get_address_of_m_fontSharedMaterials_48() { return &___m_fontSharedMaterials_48; }
	inline void set_m_fontSharedMaterials_48(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* value)
	{
		___m_fontSharedMaterials_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontSharedMaterials_48), (void*)value);
	}

	inline static int32_t get_offset_of_m_fontMaterial_49() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontMaterial_49)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_fontMaterial_49() const { return ___m_fontMaterial_49; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_fontMaterial_49() { return &___m_fontMaterial_49; }
	inline void set_m_fontMaterial_49(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_fontMaterial_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontMaterial_49), (void*)value);
	}

	inline static int32_t get_offset_of_m_fontMaterials_50() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontMaterials_50)); }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* get_m_fontMaterials_50() const { return ___m_fontMaterials_50; }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492** get_address_of_m_fontMaterials_50() { return &___m_fontMaterials_50; }
	inline void set_m_fontMaterials_50(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* value)
	{
		___m_fontMaterials_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontMaterials_50), (void*)value);
	}

	inline static int32_t get_offset_of_m_isMaterialDirty_51() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isMaterialDirty_51)); }
	inline bool get_m_isMaterialDirty_51() const { return ___m_isMaterialDirty_51; }
	inline bool* get_address_of_m_isMaterialDirty_51() { return &___m_isMaterialDirty_51; }
	inline void set_m_isMaterialDirty_51(bool value)
	{
		___m_isMaterialDirty_51 = value;
	}

	inline static int32_t get_offset_of_m_fontColor32_52() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontColor32_52)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_fontColor32_52() const { return ___m_fontColor32_52; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_fontColor32_52() { return &___m_fontColor32_52; }
	inline void set_m_fontColor32_52(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_fontColor32_52 = value;
	}

	inline static int32_t get_offset_of_m_fontColor_53() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontColor_53)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_fontColor_53() const { return ___m_fontColor_53; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_fontColor_53() { return &___m_fontColor_53; }
	inline void set_m_fontColor_53(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_fontColor_53 = value;
	}

	inline static int32_t get_offset_of_m_underlineColor_55() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_underlineColor_55)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_underlineColor_55() const { return ___m_underlineColor_55; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_underlineColor_55() { return &___m_underlineColor_55; }
	inline void set_m_underlineColor_55(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_underlineColor_55 = value;
	}

	inline static int32_t get_offset_of_m_strikethroughColor_56() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_strikethroughColor_56)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_strikethroughColor_56() const { return ___m_strikethroughColor_56; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_strikethroughColor_56() { return &___m_strikethroughColor_56; }
	inline void set_m_strikethroughColor_56(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_strikethroughColor_56 = value;
	}

	inline static int32_t get_offset_of_m_enableVertexGradient_57() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableVertexGradient_57)); }
	inline bool get_m_enableVertexGradient_57() const { return ___m_enableVertexGradient_57; }
	inline bool* get_address_of_m_enableVertexGradient_57() { return &___m_enableVertexGradient_57; }
	inline void set_m_enableVertexGradient_57(bool value)
	{
		___m_enableVertexGradient_57 = value;
	}

	inline static int32_t get_offset_of_m_colorMode_58() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorMode_58)); }
	inline int32_t get_m_colorMode_58() const { return ___m_colorMode_58; }
	inline int32_t* get_address_of_m_colorMode_58() { return &___m_colorMode_58; }
	inline void set_m_colorMode_58(int32_t value)
	{
		___m_colorMode_58 = value;
	}

	inline static int32_t get_offset_of_m_fontColorGradient_59() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontColorGradient_59)); }
	inline VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D  get_m_fontColorGradient_59() const { return ___m_fontColorGradient_59; }
	inline VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D * get_address_of_m_fontColorGradient_59() { return &___m_fontColorGradient_59; }
	inline void set_m_fontColorGradient_59(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D  value)
	{
		___m_fontColorGradient_59 = value;
	}

	inline static int32_t get_offset_of_m_fontColorGradientPreset_60() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontColorGradientPreset_60)); }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * get_m_fontColorGradientPreset_60() const { return ___m_fontColorGradientPreset_60; }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 ** get_address_of_m_fontColorGradientPreset_60() { return &___m_fontColorGradientPreset_60; }
	inline void set_m_fontColorGradientPreset_60(TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * value)
	{
		___m_fontColorGradientPreset_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontColorGradientPreset_60), (void*)value);
	}

	inline static int32_t get_offset_of_m_spriteAsset_61() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteAsset_61)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_m_spriteAsset_61() const { return ___m_spriteAsset_61; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_m_spriteAsset_61() { return &___m_spriteAsset_61; }
	inline void set_m_spriteAsset_61(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___m_spriteAsset_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_spriteAsset_61), (void*)value);
	}

	inline static int32_t get_offset_of_m_tintAllSprites_62() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_tintAllSprites_62)); }
	inline bool get_m_tintAllSprites_62() const { return ___m_tintAllSprites_62; }
	inline bool* get_address_of_m_tintAllSprites_62() { return &___m_tintAllSprites_62; }
	inline void set_m_tintAllSprites_62(bool value)
	{
		___m_tintAllSprites_62 = value;
	}

	inline static int32_t get_offset_of_m_tintSprite_63() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_tintSprite_63)); }
	inline bool get_m_tintSprite_63() const { return ___m_tintSprite_63; }
	inline bool* get_address_of_m_tintSprite_63() { return &___m_tintSprite_63; }
	inline void set_m_tintSprite_63(bool value)
	{
		___m_tintSprite_63 = value;
	}

	inline static int32_t get_offset_of_m_spriteColor_64() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteColor_64)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_spriteColor_64() const { return ___m_spriteColor_64; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_spriteColor_64() { return &___m_spriteColor_64; }
	inline void set_m_spriteColor_64(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_spriteColor_64 = value;
	}

	inline static int32_t get_offset_of_m_StyleSheet_65() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_StyleSheet_65)); }
	inline TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E * get_m_StyleSheet_65() const { return ___m_StyleSheet_65; }
	inline TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E ** get_address_of_m_StyleSheet_65() { return &___m_StyleSheet_65; }
	inline void set_m_StyleSheet_65(TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E * value)
	{
		___m_StyleSheet_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StyleSheet_65), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextStyle_66() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextStyle_66)); }
	inline TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB * get_m_TextStyle_66() const { return ___m_TextStyle_66; }
	inline TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB ** get_address_of_m_TextStyle_66() { return &___m_TextStyle_66; }
	inline void set_m_TextStyle_66(TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB * value)
	{
		___m_TextStyle_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextStyle_66), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextStyleHashCode_67() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextStyleHashCode_67)); }
	inline int32_t get_m_TextStyleHashCode_67() const { return ___m_TextStyleHashCode_67; }
	inline int32_t* get_address_of_m_TextStyleHashCode_67() { return &___m_TextStyleHashCode_67; }
	inline void set_m_TextStyleHashCode_67(int32_t value)
	{
		___m_TextStyleHashCode_67 = value;
	}

	inline static int32_t get_offset_of_m_overrideHtmlColors_68() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_overrideHtmlColors_68)); }
	inline bool get_m_overrideHtmlColors_68() const { return ___m_overrideHtmlColors_68; }
	inline bool* get_address_of_m_overrideHtmlColors_68() { return &___m_overrideHtmlColors_68; }
	inline void set_m_overrideHtmlColors_68(bool value)
	{
		___m_overrideHtmlColors_68 = value;
	}

	inline static int32_t get_offset_of_m_faceColor_69() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_faceColor_69)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_faceColor_69() const { return ___m_faceColor_69; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_faceColor_69() { return &___m_faceColor_69; }
	inline void set_m_faceColor_69(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_faceColor_69 = value;
	}

	inline static int32_t get_offset_of_m_outlineColor_70() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_outlineColor_70)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_outlineColor_70() const { return ___m_outlineColor_70; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_outlineColor_70() { return &___m_outlineColor_70; }
	inline void set_m_outlineColor_70(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_outlineColor_70 = value;
	}

	inline static int32_t get_offset_of_m_outlineWidth_71() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_outlineWidth_71)); }
	inline float get_m_outlineWidth_71() const { return ___m_outlineWidth_71; }
	inline float* get_address_of_m_outlineWidth_71() { return &___m_outlineWidth_71; }
	inline void set_m_outlineWidth_71(float value)
	{
		___m_outlineWidth_71 = value;
	}

	inline static int32_t get_offset_of_m_fontSize_72() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSize_72)); }
	inline float get_m_fontSize_72() const { return ___m_fontSize_72; }
	inline float* get_address_of_m_fontSize_72() { return &___m_fontSize_72; }
	inline void set_m_fontSize_72(float value)
	{
		___m_fontSize_72 = value;
	}

	inline static int32_t get_offset_of_m_currentFontSize_73() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentFontSize_73)); }
	inline float get_m_currentFontSize_73() const { return ___m_currentFontSize_73; }
	inline float* get_address_of_m_currentFontSize_73() { return &___m_currentFontSize_73; }
	inline void set_m_currentFontSize_73(float value)
	{
		___m_currentFontSize_73 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeBase_74() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSizeBase_74)); }
	inline float get_m_fontSizeBase_74() const { return ___m_fontSizeBase_74; }
	inline float* get_address_of_m_fontSizeBase_74() { return &___m_fontSizeBase_74; }
	inline void set_m_fontSizeBase_74(float value)
	{
		___m_fontSizeBase_74 = value;
	}

	inline static int32_t get_offset_of_m_sizeStack_75() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_sizeStack_75)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_m_sizeStack_75() const { return ___m_sizeStack_75; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_m_sizeStack_75() { return &___m_sizeStack_75; }
	inline void set_m_sizeStack_75(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___m_sizeStack_75 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_sizeStack_75))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_fontWeight_76() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontWeight_76)); }
	inline int32_t get_m_fontWeight_76() const { return ___m_fontWeight_76; }
	inline int32_t* get_address_of_m_fontWeight_76() { return &___m_fontWeight_76; }
	inline void set_m_fontWeight_76(int32_t value)
	{
		___m_fontWeight_76 = value;
	}

	inline static int32_t get_offset_of_m_FontWeightInternal_77() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_FontWeightInternal_77)); }
	inline int32_t get_m_FontWeightInternal_77() const { return ___m_FontWeightInternal_77; }
	inline int32_t* get_address_of_m_FontWeightInternal_77() { return &___m_FontWeightInternal_77; }
	inline void set_m_FontWeightInternal_77(int32_t value)
	{
		___m_FontWeightInternal_77 = value;
	}

	inline static int32_t get_offset_of_m_FontWeightStack_78() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_FontWeightStack_78)); }
	inline TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  get_m_FontWeightStack_78() const { return ___m_FontWeightStack_78; }
	inline TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7 * get_address_of_m_FontWeightStack_78() { return &___m_FontWeightStack_78; }
	inline void set_m_FontWeightStack_78(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  value)
	{
		___m_FontWeightStack_78 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_FontWeightStack_78))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_enableAutoSizing_79() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableAutoSizing_79)); }
	inline bool get_m_enableAutoSizing_79() const { return ___m_enableAutoSizing_79; }
	inline bool* get_address_of_m_enableAutoSizing_79() { return &___m_enableAutoSizing_79; }
	inline void set_m_enableAutoSizing_79(bool value)
	{
		___m_enableAutoSizing_79 = value;
	}

	inline static int32_t get_offset_of_m_maxFontSize_80() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxFontSize_80)); }
	inline float get_m_maxFontSize_80() const { return ___m_maxFontSize_80; }
	inline float* get_address_of_m_maxFontSize_80() { return &___m_maxFontSize_80; }
	inline void set_m_maxFontSize_80(float value)
	{
		___m_maxFontSize_80 = value;
	}

	inline static int32_t get_offset_of_m_minFontSize_81() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_minFontSize_81)); }
	inline float get_m_minFontSize_81() const { return ___m_minFontSize_81; }
	inline float* get_address_of_m_minFontSize_81() { return &___m_minFontSize_81; }
	inline void set_m_minFontSize_81(float value)
	{
		___m_minFontSize_81 = value;
	}

	inline static int32_t get_offset_of_m_AutoSizeIterationCount_82() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_AutoSizeIterationCount_82)); }
	inline int32_t get_m_AutoSizeIterationCount_82() const { return ___m_AutoSizeIterationCount_82; }
	inline int32_t* get_address_of_m_AutoSizeIterationCount_82() { return &___m_AutoSizeIterationCount_82; }
	inline void set_m_AutoSizeIterationCount_82(int32_t value)
	{
		___m_AutoSizeIterationCount_82 = value;
	}

	inline static int32_t get_offset_of_m_AutoSizeMaxIterationCount_83() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_AutoSizeMaxIterationCount_83)); }
	inline int32_t get_m_AutoSizeMaxIterationCount_83() const { return ___m_AutoSizeMaxIterationCount_83; }
	inline int32_t* get_address_of_m_AutoSizeMaxIterationCount_83() { return &___m_AutoSizeMaxIterationCount_83; }
	inline void set_m_AutoSizeMaxIterationCount_83(int32_t value)
	{
		___m_AutoSizeMaxIterationCount_83 = value;
	}

	inline static int32_t get_offset_of_m_IsAutoSizePointSizeSet_84() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_IsAutoSizePointSizeSet_84)); }
	inline bool get_m_IsAutoSizePointSizeSet_84() const { return ___m_IsAutoSizePointSizeSet_84; }
	inline bool* get_address_of_m_IsAutoSizePointSizeSet_84() { return &___m_IsAutoSizePointSizeSet_84; }
	inline void set_m_IsAutoSizePointSizeSet_84(bool value)
	{
		___m_IsAutoSizePointSizeSet_84 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeMin_85() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSizeMin_85)); }
	inline float get_m_fontSizeMin_85() const { return ___m_fontSizeMin_85; }
	inline float* get_address_of_m_fontSizeMin_85() { return &___m_fontSizeMin_85; }
	inline void set_m_fontSizeMin_85(float value)
	{
		___m_fontSizeMin_85 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeMax_86() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSizeMax_86)); }
	inline float get_m_fontSizeMax_86() const { return ___m_fontSizeMax_86; }
	inline float* get_address_of_m_fontSizeMax_86() { return &___m_fontSizeMax_86; }
	inline void set_m_fontSizeMax_86(float value)
	{
		___m_fontSizeMax_86 = value;
	}

	inline static int32_t get_offset_of_m_fontStyle_87() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontStyle_87)); }
	inline int32_t get_m_fontStyle_87() const { return ___m_fontStyle_87; }
	inline int32_t* get_address_of_m_fontStyle_87() { return &___m_fontStyle_87; }
	inline void set_m_fontStyle_87(int32_t value)
	{
		___m_fontStyle_87 = value;
	}

	inline static int32_t get_offset_of_m_FontStyleInternal_88() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_FontStyleInternal_88)); }
	inline int32_t get_m_FontStyleInternal_88() const { return ___m_FontStyleInternal_88; }
	inline int32_t* get_address_of_m_FontStyleInternal_88() { return &___m_FontStyleInternal_88; }
	inline void set_m_FontStyleInternal_88(int32_t value)
	{
		___m_FontStyleInternal_88 = value;
	}

	inline static int32_t get_offset_of_m_fontStyleStack_89() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontStyleStack_89)); }
	inline TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  get_m_fontStyleStack_89() const { return ___m_fontStyleStack_89; }
	inline TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9 * get_address_of_m_fontStyleStack_89() { return &___m_fontStyleStack_89; }
	inline void set_m_fontStyleStack_89(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  value)
	{
		___m_fontStyleStack_89 = value;
	}

	inline static int32_t get_offset_of_m_isUsingBold_90() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isUsingBold_90)); }
	inline bool get_m_isUsingBold_90() const { return ___m_isUsingBold_90; }
	inline bool* get_address_of_m_isUsingBold_90() { return &___m_isUsingBold_90; }
	inline void set_m_isUsingBold_90(bool value)
	{
		___m_isUsingBold_90 = value;
	}

	inline static int32_t get_offset_of_m_HorizontalAlignment_91() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_HorizontalAlignment_91)); }
	inline int32_t get_m_HorizontalAlignment_91() const { return ___m_HorizontalAlignment_91; }
	inline int32_t* get_address_of_m_HorizontalAlignment_91() { return &___m_HorizontalAlignment_91; }
	inline void set_m_HorizontalAlignment_91(int32_t value)
	{
		___m_HorizontalAlignment_91 = value;
	}

	inline static int32_t get_offset_of_m_VerticalAlignment_92() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_VerticalAlignment_92)); }
	inline int32_t get_m_VerticalAlignment_92() const { return ___m_VerticalAlignment_92; }
	inline int32_t* get_address_of_m_VerticalAlignment_92() { return &___m_VerticalAlignment_92; }
	inline void set_m_VerticalAlignment_92(int32_t value)
	{
		___m_VerticalAlignment_92 = value;
	}

	inline static int32_t get_offset_of_m_textAlignment_93() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_textAlignment_93)); }
	inline int32_t get_m_textAlignment_93() const { return ___m_textAlignment_93; }
	inline int32_t* get_address_of_m_textAlignment_93() { return &___m_textAlignment_93; }
	inline void set_m_textAlignment_93(int32_t value)
	{
		___m_textAlignment_93 = value;
	}

	inline static int32_t get_offset_of_m_lineJustification_94() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineJustification_94)); }
	inline int32_t get_m_lineJustification_94() const { return ___m_lineJustification_94; }
	inline int32_t* get_address_of_m_lineJustification_94() { return &___m_lineJustification_94; }
	inline void set_m_lineJustification_94(int32_t value)
	{
		___m_lineJustification_94 = value;
	}

	inline static int32_t get_offset_of_m_lineJustificationStack_95() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineJustificationStack_95)); }
	inline TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  get_m_lineJustificationStack_95() const { return ___m_lineJustificationStack_95; }
	inline TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B * get_address_of_m_lineJustificationStack_95() { return &___m_lineJustificationStack_95; }
	inline void set_m_lineJustificationStack_95(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  value)
	{
		___m_lineJustificationStack_95 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_lineJustificationStack_95))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_textContainerLocalCorners_96() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_textContainerLocalCorners_96)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_textContainerLocalCorners_96() const { return ___m_textContainerLocalCorners_96; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_textContainerLocalCorners_96() { return &___m_textContainerLocalCorners_96; }
	inline void set_m_textContainerLocalCorners_96(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_textContainerLocalCorners_96 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textContainerLocalCorners_96), (void*)value);
	}

	inline static int32_t get_offset_of_m_characterSpacing_97() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_characterSpacing_97)); }
	inline float get_m_characterSpacing_97() const { return ___m_characterSpacing_97; }
	inline float* get_address_of_m_characterSpacing_97() { return &___m_characterSpacing_97; }
	inline void set_m_characterSpacing_97(float value)
	{
		___m_characterSpacing_97 = value;
	}

	inline static int32_t get_offset_of_m_cSpacing_98() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_cSpacing_98)); }
	inline float get_m_cSpacing_98() const { return ___m_cSpacing_98; }
	inline float* get_address_of_m_cSpacing_98() { return &___m_cSpacing_98; }
	inline void set_m_cSpacing_98(float value)
	{
		___m_cSpacing_98 = value;
	}

	inline static int32_t get_offset_of_m_monoSpacing_99() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_monoSpacing_99)); }
	inline float get_m_monoSpacing_99() const { return ___m_monoSpacing_99; }
	inline float* get_address_of_m_monoSpacing_99() { return &___m_monoSpacing_99; }
	inline void set_m_monoSpacing_99(float value)
	{
		___m_monoSpacing_99 = value;
	}

	inline static int32_t get_offset_of_m_wordSpacing_100() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_wordSpacing_100)); }
	inline float get_m_wordSpacing_100() const { return ___m_wordSpacing_100; }
	inline float* get_address_of_m_wordSpacing_100() { return &___m_wordSpacing_100; }
	inline void set_m_wordSpacing_100(float value)
	{
		___m_wordSpacing_100 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacing_101() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineSpacing_101)); }
	inline float get_m_lineSpacing_101() const { return ___m_lineSpacing_101; }
	inline float* get_address_of_m_lineSpacing_101() { return &___m_lineSpacing_101; }
	inline void set_m_lineSpacing_101(float value)
	{
		___m_lineSpacing_101 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacingDelta_102() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineSpacingDelta_102)); }
	inline float get_m_lineSpacingDelta_102() const { return ___m_lineSpacingDelta_102; }
	inline float* get_address_of_m_lineSpacingDelta_102() { return &___m_lineSpacingDelta_102; }
	inline void set_m_lineSpacingDelta_102(float value)
	{
		___m_lineSpacingDelta_102 = value;
	}

	inline static int32_t get_offset_of_m_lineHeight_103() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineHeight_103)); }
	inline float get_m_lineHeight_103() const { return ___m_lineHeight_103; }
	inline float* get_address_of_m_lineHeight_103() { return &___m_lineHeight_103; }
	inline void set_m_lineHeight_103(float value)
	{
		___m_lineHeight_103 = value;
	}

	inline static int32_t get_offset_of_m_IsDrivenLineSpacing_104() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_IsDrivenLineSpacing_104)); }
	inline bool get_m_IsDrivenLineSpacing_104() const { return ___m_IsDrivenLineSpacing_104; }
	inline bool* get_address_of_m_IsDrivenLineSpacing_104() { return &___m_IsDrivenLineSpacing_104; }
	inline void set_m_IsDrivenLineSpacing_104(bool value)
	{
		___m_IsDrivenLineSpacing_104 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacingMax_105() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineSpacingMax_105)); }
	inline float get_m_lineSpacingMax_105() const { return ___m_lineSpacingMax_105; }
	inline float* get_address_of_m_lineSpacingMax_105() { return &___m_lineSpacingMax_105; }
	inline void set_m_lineSpacingMax_105(float value)
	{
		___m_lineSpacingMax_105 = value;
	}

	inline static int32_t get_offset_of_m_paragraphSpacing_106() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_paragraphSpacing_106)); }
	inline float get_m_paragraphSpacing_106() const { return ___m_paragraphSpacing_106; }
	inline float* get_address_of_m_paragraphSpacing_106() { return &___m_paragraphSpacing_106; }
	inline void set_m_paragraphSpacing_106(float value)
	{
		___m_paragraphSpacing_106 = value;
	}

	inline static int32_t get_offset_of_m_charWidthMaxAdj_107() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_charWidthMaxAdj_107)); }
	inline float get_m_charWidthMaxAdj_107() const { return ___m_charWidthMaxAdj_107; }
	inline float* get_address_of_m_charWidthMaxAdj_107() { return &___m_charWidthMaxAdj_107; }
	inline void set_m_charWidthMaxAdj_107(float value)
	{
		___m_charWidthMaxAdj_107 = value;
	}

	inline static int32_t get_offset_of_m_charWidthAdjDelta_108() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_charWidthAdjDelta_108)); }
	inline float get_m_charWidthAdjDelta_108() const { return ___m_charWidthAdjDelta_108; }
	inline float* get_address_of_m_charWidthAdjDelta_108() { return &___m_charWidthAdjDelta_108; }
	inline void set_m_charWidthAdjDelta_108(float value)
	{
		___m_charWidthAdjDelta_108 = value;
	}

	inline static int32_t get_offset_of_m_enableWordWrapping_109() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableWordWrapping_109)); }
	inline bool get_m_enableWordWrapping_109() const { return ___m_enableWordWrapping_109; }
	inline bool* get_address_of_m_enableWordWrapping_109() { return &___m_enableWordWrapping_109; }
	inline void set_m_enableWordWrapping_109(bool value)
	{
		___m_enableWordWrapping_109 = value;
	}

	inline static int32_t get_offset_of_m_isCharacterWrappingEnabled_110() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isCharacterWrappingEnabled_110)); }
	inline bool get_m_isCharacterWrappingEnabled_110() const { return ___m_isCharacterWrappingEnabled_110; }
	inline bool* get_address_of_m_isCharacterWrappingEnabled_110() { return &___m_isCharacterWrappingEnabled_110; }
	inline void set_m_isCharacterWrappingEnabled_110(bool value)
	{
		___m_isCharacterWrappingEnabled_110 = value;
	}

	inline static int32_t get_offset_of_m_isNonBreakingSpace_111() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isNonBreakingSpace_111)); }
	inline bool get_m_isNonBreakingSpace_111() const { return ___m_isNonBreakingSpace_111; }
	inline bool* get_address_of_m_isNonBreakingSpace_111() { return &___m_isNonBreakingSpace_111; }
	inline void set_m_isNonBreakingSpace_111(bool value)
	{
		___m_isNonBreakingSpace_111 = value;
	}

	inline static int32_t get_offset_of_m_isIgnoringAlignment_112() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isIgnoringAlignment_112)); }
	inline bool get_m_isIgnoringAlignment_112() const { return ___m_isIgnoringAlignment_112; }
	inline bool* get_address_of_m_isIgnoringAlignment_112() { return &___m_isIgnoringAlignment_112; }
	inline void set_m_isIgnoringAlignment_112(bool value)
	{
		___m_isIgnoringAlignment_112 = value;
	}

	inline static int32_t get_offset_of_m_wordWrappingRatios_113() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_wordWrappingRatios_113)); }
	inline float get_m_wordWrappingRatios_113() const { return ___m_wordWrappingRatios_113; }
	inline float* get_address_of_m_wordWrappingRatios_113() { return &___m_wordWrappingRatios_113; }
	inline void set_m_wordWrappingRatios_113(float value)
	{
		___m_wordWrappingRatios_113 = value;
	}

	inline static int32_t get_offset_of_m_overflowMode_114() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_overflowMode_114)); }
	inline int32_t get_m_overflowMode_114() const { return ___m_overflowMode_114; }
	inline int32_t* get_address_of_m_overflowMode_114() { return &___m_overflowMode_114; }
	inline void set_m_overflowMode_114(int32_t value)
	{
		___m_overflowMode_114 = value;
	}

	inline static int32_t get_offset_of_m_firstOverflowCharacterIndex_115() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_firstOverflowCharacterIndex_115)); }
	inline int32_t get_m_firstOverflowCharacterIndex_115() const { return ___m_firstOverflowCharacterIndex_115; }
	inline int32_t* get_address_of_m_firstOverflowCharacterIndex_115() { return &___m_firstOverflowCharacterIndex_115; }
	inline void set_m_firstOverflowCharacterIndex_115(int32_t value)
	{
		___m_firstOverflowCharacterIndex_115 = value;
	}

	inline static int32_t get_offset_of_m_linkedTextComponent_116() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_linkedTextComponent_116)); }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * get_m_linkedTextComponent_116() const { return ___m_linkedTextComponent_116; }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 ** get_address_of_m_linkedTextComponent_116() { return &___m_linkedTextComponent_116; }
	inline void set_m_linkedTextComponent_116(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * value)
	{
		___m_linkedTextComponent_116 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_linkedTextComponent_116), (void*)value);
	}

	inline static int32_t get_offset_of_parentLinkedComponent_117() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___parentLinkedComponent_117)); }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * get_parentLinkedComponent_117() const { return ___parentLinkedComponent_117; }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 ** get_address_of_parentLinkedComponent_117() { return &___parentLinkedComponent_117; }
	inline void set_parentLinkedComponent_117(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * value)
	{
		___parentLinkedComponent_117 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parentLinkedComponent_117), (void*)value);
	}

	inline static int32_t get_offset_of_m_isTextTruncated_118() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isTextTruncated_118)); }
	inline bool get_m_isTextTruncated_118() const { return ___m_isTextTruncated_118; }
	inline bool* get_address_of_m_isTextTruncated_118() { return &___m_isTextTruncated_118; }
	inline void set_m_isTextTruncated_118(bool value)
	{
		___m_isTextTruncated_118 = value;
	}

	inline static int32_t get_offset_of_m_enableKerning_119() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableKerning_119)); }
	inline bool get_m_enableKerning_119() const { return ___m_enableKerning_119; }
	inline bool* get_address_of_m_enableKerning_119() { return &___m_enableKerning_119; }
	inline void set_m_enableKerning_119(bool value)
	{
		___m_enableKerning_119 = value;
	}

	inline static int32_t get_offset_of_m_GlyphHorizontalAdvanceAdjustment_120() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_GlyphHorizontalAdvanceAdjustment_120)); }
	inline float get_m_GlyphHorizontalAdvanceAdjustment_120() const { return ___m_GlyphHorizontalAdvanceAdjustment_120; }
	inline float* get_address_of_m_GlyphHorizontalAdvanceAdjustment_120() { return &___m_GlyphHorizontalAdvanceAdjustment_120; }
	inline void set_m_GlyphHorizontalAdvanceAdjustment_120(float value)
	{
		___m_GlyphHorizontalAdvanceAdjustment_120 = value;
	}

	inline static int32_t get_offset_of_m_enableExtraPadding_121() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableExtraPadding_121)); }
	inline bool get_m_enableExtraPadding_121() const { return ___m_enableExtraPadding_121; }
	inline bool* get_address_of_m_enableExtraPadding_121() { return &___m_enableExtraPadding_121; }
	inline void set_m_enableExtraPadding_121(bool value)
	{
		___m_enableExtraPadding_121 = value;
	}

	inline static int32_t get_offset_of_checkPaddingRequired_122() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___checkPaddingRequired_122)); }
	inline bool get_checkPaddingRequired_122() const { return ___checkPaddingRequired_122; }
	inline bool* get_address_of_checkPaddingRequired_122() { return &___checkPaddingRequired_122; }
	inline void set_checkPaddingRequired_122(bool value)
	{
		___checkPaddingRequired_122 = value;
	}

	inline static int32_t get_offset_of_m_isRichText_123() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isRichText_123)); }
	inline bool get_m_isRichText_123() const { return ___m_isRichText_123; }
	inline bool* get_address_of_m_isRichText_123() { return &___m_isRichText_123; }
	inline void set_m_isRichText_123(bool value)
	{
		___m_isRichText_123 = value;
	}

	inline static int32_t get_offset_of_m_parseCtrlCharacters_124() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_parseCtrlCharacters_124)); }
	inline bool get_m_parseCtrlCharacters_124() const { return ___m_parseCtrlCharacters_124; }
	inline bool* get_address_of_m_parseCtrlCharacters_124() { return &___m_parseCtrlCharacters_124; }
	inline void set_m_parseCtrlCharacters_124(bool value)
	{
		___m_parseCtrlCharacters_124 = value;
	}

	inline static int32_t get_offset_of_m_isOverlay_125() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isOverlay_125)); }
	inline bool get_m_isOverlay_125() const { return ___m_isOverlay_125; }
	inline bool* get_address_of_m_isOverlay_125() { return &___m_isOverlay_125; }
	inline void set_m_isOverlay_125(bool value)
	{
		___m_isOverlay_125 = value;
	}

	inline static int32_t get_offset_of_m_isOrthographic_126() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isOrthographic_126)); }
	inline bool get_m_isOrthographic_126() const { return ___m_isOrthographic_126; }
	inline bool* get_address_of_m_isOrthographic_126() { return &___m_isOrthographic_126; }
	inline void set_m_isOrthographic_126(bool value)
	{
		___m_isOrthographic_126 = value;
	}

	inline static int32_t get_offset_of_m_isCullingEnabled_127() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isCullingEnabled_127)); }
	inline bool get_m_isCullingEnabled_127() const { return ___m_isCullingEnabled_127; }
	inline bool* get_address_of_m_isCullingEnabled_127() { return &___m_isCullingEnabled_127; }
	inline void set_m_isCullingEnabled_127(bool value)
	{
		___m_isCullingEnabled_127 = value;
	}

	inline static int32_t get_offset_of_m_isMaskingEnabled_128() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isMaskingEnabled_128)); }
	inline bool get_m_isMaskingEnabled_128() const { return ___m_isMaskingEnabled_128; }
	inline bool* get_address_of_m_isMaskingEnabled_128() { return &___m_isMaskingEnabled_128; }
	inline void set_m_isMaskingEnabled_128(bool value)
	{
		___m_isMaskingEnabled_128 = value;
	}

	inline static int32_t get_offset_of_isMaskUpdateRequired_129() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___isMaskUpdateRequired_129)); }
	inline bool get_isMaskUpdateRequired_129() const { return ___isMaskUpdateRequired_129; }
	inline bool* get_address_of_isMaskUpdateRequired_129() { return &___isMaskUpdateRequired_129; }
	inline void set_isMaskUpdateRequired_129(bool value)
	{
		___isMaskUpdateRequired_129 = value;
	}

	inline static int32_t get_offset_of_m_ignoreCulling_130() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ignoreCulling_130)); }
	inline bool get_m_ignoreCulling_130() const { return ___m_ignoreCulling_130; }
	inline bool* get_address_of_m_ignoreCulling_130() { return &___m_ignoreCulling_130; }
	inline void set_m_ignoreCulling_130(bool value)
	{
		___m_ignoreCulling_130 = value;
	}

	inline static int32_t get_offset_of_m_horizontalMapping_131() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_horizontalMapping_131)); }
	inline int32_t get_m_horizontalMapping_131() const { return ___m_horizontalMapping_131; }
	inline int32_t* get_address_of_m_horizontalMapping_131() { return &___m_horizontalMapping_131; }
	inline void set_m_horizontalMapping_131(int32_t value)
	{
		___m_horizontalMapping_131 = value;
	}

	inline static int32_t get_offset_of_m_verticalMapping_132() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_verticalMapping_132)); }
	inline int32_t get_m_verticalMapping_132() const { return ___m_verticalMapping_132; }
	inline int32_t* get_address_of_m_verticalMapping_132() { return &___m_verticalMapping_132; }
	inline void set_m_verticalMapping_132(int32_t value)
	{
		___m_verticalMapping_132 = value;
	}

	inline static int32_t get_offset_of_m_uvLineOffset_133() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_uvLineOffset_133)); }
	inline float get_m_uvLineOffset_133() const { return ___m_uvLineOffset_133; }
	inline float* get_address_of_m_uvLineOffset_133() { return &___m_uvLineOffset_133; }
	inline void set_m_uvLineOffset_133(float value)
	{
		___m_uvLineOffset_133 = value;
	}

	inline static int32_t get_offset_of_m_renderMode_134() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_renderMode_134)); }
	inline int32_t get_m_renderMode_134() const { return ___m_renderMode_134; }
	inline int32_t* get_address_of_m_renderMode_134() { return &___m_renderMode_134; }
	inline void set_m_renderMode_134(int32_t value)
	{
		___m_renderMode_134 = value;
	}

	inline static int32_t get_offset_of_m_geometrySortingOrder_135() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_geometrySortingOrder_135)); }
	inline int32_t get_m_geometrySortingOrder_135() const { return ___m_geometrySortingOrder_135; }
	inline int32_t* get_address_of_m_geometrySortingOrder_135() { return &___m_geometrySortingOrder_135; }
	inline void set_m_geometrySortingOrder_135(int32_t value)
	{
		___m_geometrySortingOrder_135 = value;
	}

	inline static int32_t get_offset_of_m_IsTextObjectScaleStatic_136() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_IsTextObjectScaleStatic_136)); }
	inline bool get_m_IsTextObjectScaleStatic_136() const { return ___m_IsTextObjectScaleStatic_136; }
	inline bool* get_address_of_m_IsTextObjectScaleStatic_136() { return &___m_IsTextObjectScaleStatic_136; }
	inline void set_m_IsTextObjectScaleStatic_136(bool value)
	{
		___m_IsTextObjectScaleStatic_136 = value;
	}

	inline static int32_t get_offset_of_m_VertexBufferAutoSizeReduction_137() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_VertexBufferAutoSizeReduction_137)); }
	inline bool get_m_VertexBufferAutoSizeReduction_137() const { return ___m_VertexBufferAutoSizeReduction_137; }
	inline bool* get_address_of_m_VertexBufferAutoSizeReduction_137() { return &___m_VertexBufferAutoSizeReduction_137; }
	inline void set_m_VertexBufferAutoSizeReduction_137(bool value)
	{
		___m_VertexBufferAutoSizeReduction_137 = value;
	}

	inline static int32_t get_offset_of_m_firstVisibleCharacter_138() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_firstVisibleCharacter_138)); }
	inline int32_t get_m_firstVisibleCharacter_138() const { return ___m_firstVisibleCharacter_138; }
	inline int32_t* get_address_of_m_firstVisibleCharacter_138() { return &___m_firstVisibleCharacter_138; }
	inline void set_m_firstVisibleCharacter_138(int32_t value)
	{
		___m_firstVisibleCharacter_138 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleCharacters_139() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxVisibleCharacters_139)); }
	inline int32_t get_m_maxVisibleCharacters_139() const { return ___m_maxVisibleCharacters_139; }
	inline int32_t* get_address_of_m_maxVisibleCharacters_139() { return &___m_maxVisibleCharacters_139; }
	inline void set_m_maxVisibleCharacters_139(int32_t value)
	{
		___m_maxVisibleCharacters_139 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleWords_140() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxVisibleWords_140)); }
	inline int32_t get_m_maxVisibleWords_140() const { return ___m_maxVisibleWords_140; }
	inline int32_t* get_address_of_m_maxVisibleWords_140() { return &___m_maxVisibleWords_140; }
	inline void set_m_maxVisibleWords_140(int32_t value)
	{
		___m_maxVisibleWords_140 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleLines_141() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxVisibleLines_141)); }
	inline int32_t get_m_maxVisibleLines_141() const { return ___m_maxVisibleLines_141; }
	inline int32_t* get_address_of_m_maxVisibleLines_141() { return &___m_maxVisibleLines_141; }
	inline void set_m_maxVisibleLines_141(int32_t value)
	{
		___m_maxVisibleLines_141 = value;
	}

	inline static int32_t get_offset_of_m_useMaxVisibleDescender_142() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_useMaxVisibleDescender_142)); }
	inline bool get_m_useMaxVisibleDescender_142() const { return ___m_useMaxVisibleDescender_142; }
	inline bool* get_address_of_m_useMaxVisibleDescender_142() { return &___m_useMaxVisibleDescender_142; }
	inline void set_m_useMaxVisibleDescender_142(bool value)
	{
		___m_useMaxVisibleDescender_142 = value;
	}

	inline static int32_t get_offset_of_m_pageToDisplay_143() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_pageToDisplay_143)); }
	inline int32_t get_m_pageToDisplay_143() const { return ___m_pageToDisplay_143; }
	inline int32_t* get_address_of_m_pageToDisplay_143() { return &___m_pageToDisplay_143; }
	inline void set_m_pageToDisplay_143(int32_t value)
	{
		___m_pageToDisplay_143 = value;
	}

	inline static int32_t get_offset_of_m_isNewPage_144() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isNewPage_144)); }
	inline bool get_m_isNewPage_144() const { return ___m_isNewPage_144; }
	inline bool* get_address_of_m_isNewPage_144() { return &___m_isNewPage_144; }
	inline void set_m_isNewPage_144(bool value)
	{
		___m_isNewPage_144 = value;
	}

	inline static int32_t get_offset_of_m_margin_145() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_margin_145)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_margin_145() const { return ___m_margin_145; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_margin_145() { return &___m_margin_145; }
	inline void set_m_margin_145(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_margin_145 = value;
	}

	inline static int32_t get_offset_of_m_marginLeft_146() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_marginLeft_146)); }
	inline float get_m_marginLeft_146() const { return ___m_marginLeft_146; }
	inline float* get_address_of_m_marginLeft_146() { return &___m_marginLeft_146; }
	inline void set_m_marginLeft_146(float value)
	{
		___m_marginLeft_146 = value;
	}

	inline static int32_t get_offset_of_m_marginRight_147() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_marginRight_147)); }
	inline float get_m_marginRight_147() const { return ___m_marginRight_147; }
	inline float* get_address_of_m_marginRight_147() { return &___m_marginRight_147; }
	inline void set_m_marginRight_147(float value)
	{
		___m_marginRight_147 = value;
	}

	inline static int32_t get_offset_of_m_marginWidth_148() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_marginWidth_148)); }
	inline float get_m_marginWidth_148() const { return ___m_marginWidth_148; }
	inline float* get_address_of_m_marginWidth_148() { return &___m_marginWidth_148; }
	inline void set_m_marginWidth_148(float value)
	{
		___m_marginWidth_148 = value;
	}

	inline static int32_t get_offset_of_m_marginHeight_149() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_marginHeight_149)); }
	inline float get_m_marginHeight_149() const { return ___m_marginHeight_149; }
	inline float* get_address_of_m_marginHeight_149() { return &___m_marginHeight_149; }
	inline void set_m_marginHeight_149(float value)
	{
		___m_marginHeight_149 = value;
	}

	inline static int32_t get_offset_of_m_width_150() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_width_150)); }
	inline float get_m_width_150() const { return ___m_width_150; }
	inline float* get_address_of_m_width_150() { return &___m_width_150; }
	inline void set_m_width_150(float value)
	{
		___m_width_150 = value;
	}

	inline static int32_t get_offset_of_m_textInfo_151() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_textInfo_151)); }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * get_m_textInfo_151() const { return ___m_textInfo_151; }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 ** get_address_of_m_textInfo_151() { return &___m_textInfo_151; }
	inline void set_m_textInfo_151(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * value)
	{
		___m_textInfo_151 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textInfo_151), (void*)value);
	}

	inline static int32_t get_offset_of_m_havePropertiesChanged_152() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_havePropertiesChanged_152)); }
	inline bool get_m_havePropertiesChanged_152() const { return ___m_havePropertiesChanged_152; }
	inline bool* get_address_of_m_havePropertiesChanged_152() { return &___m_havePropertiesChanged_152; }
	inline void set_m_havePropertiesChanged_152(bool value)
	{
		___m_havePropertiesChanged_152 = value;
	}

	inline static int32_t get_offset_of_m_isUsingLegacyAnimationComponent_153() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isUsingLegacyAnimationComponent_153)); }
	inline bool get_m_isUsingLegacyAnimationComponent_153() const { return ___m_isUsingLegacyAnimationComponent_153; }
	inline bool* get_address_of_m_isUsingLegacyAnimationComponent_153() { return &___m_isUsingLegacyAnimationComponent_153; }
	inline void set_m_isUsingLegacyAnimationComponent_153(bool value)
	{
		___m_isUsingLegacyAnimationComponent_153 = value;
	}

	inline static int32_t get_offset_of_m_transform_154() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_transform_154)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_transform_154() const { return ___m_transform_154; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_transform_154() { return &___m_transform_154; }
	inline void set_m_transform_154(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_transform_154 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_transform_154), (void*)value);
	}

	inline static int32_t get_offset_of_m_rectTransform_155() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_rectTransform_155)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_rectTransform_155() const { return ___m_rectTransform_155; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_rectTransform_155() { return &___m_rectTransform_155; }
	inline void set_m_rectTransform_155(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_rectTransform_155 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_rectTransform_155), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreviousRectTransformSize_156() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_PreviousRectTransformSize_156)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PreviousRectTransformSize_156() const { return ___m_PreviousRectTransformSize_156; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PreviousRectTransformSize_156() { return &___m_PreviousRectTransformSize_156; }
	inline void set_m_PreviousRectTransformSize_156(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PreviousRectTransformSize_156 = value;
	}

	inline static int32_t get_offset_of_m_PreviousPivotPosition_157() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_PreviousPivotPosition_157)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PreviousPivotPosition_157() const { return ___m_PreviousPivotPosition_157; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PreviousPivotPosition_157() { return &___m_PreviousPivotPosition_157; }
	inline void set_m_PreviousPivotPosition_157(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PreviousPivotPosition_157 = value;
	}

	inline static int32_t get_offset_of_U3CautoSizeTextContainerU3Ek__BackingField_158() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___U3CautoSizeTextContainerU3Ek__BackingField_158)); }
	inline bool get_U3CautoSizeTextContainerU3Ek__BackingField_158() const { return ___U3CautoSizeTextContainerU3Ek__BackingField_158; }
	inline bool* get_address_of_U3CautoSizeTextContainerU3Ek__BackingField_158() { return &___U3CautoSizeTextContainerU3Ek__BackingField_158; }
	inline void set_U3CautoSizeTextContainerU3Ek__BackingField_158(bool value)
	{
		___U3CautoSizeTextContainerU3Ek__BackingField_158 = value;
	}

	inline static int32_t get_offset_of_m_autoSizeTextContainer_159() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_autoSizeTextContainer_159)); }
	inline bool get_m_autoSizeTextContainer_159() const { return ___m_autoSizeTextContainer_159; }
	inline bool* get_address_of_m_autoSizeTextContainer_159() { return &___m_autoSizeTextContainer_159; }
	inline void set_m_autoSizeTextContainer_159(bool value)
	{
		___m_autoSizeTextContainer_159 = value;
	}

	inline static int32_t get_offset_of_m_mesh_160() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_mesh_160)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_mesh_160() const { return ___m_mesh_160; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_mesh_160() { return &___m_mesh_160; }
	inline void set_m_mesh_160(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_mesh_160 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_mesh_160), (void*)value);
	}

	inline static int32_t get_offset_of_m_isVolumetricText_161() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isVolumetricText_161)); }
	inline bool get_m_isVolumetricText_161() const { return ___m_isVolumetricText_161; }
	inline bool* get_address_of_m_isVolumetricText_161() { return &___m_isVolumetricText_161; }
	inline void set_m_isVolumetricText_161(bool value)
	{
		___m_isVolumetricText_161 = value;
	}

	inline static int32_t get_offset_of_OnPreRenderText_164() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___OnPreRenderText_164)); }
	inline Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 * get_OnPreRenderText_164() const { return ___OnPreRenderText_164; }
	inline Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 ** get_address_of_OnPreRenderText_164() { return &___OnPreRenderText_164; }
	inline void set_OnPreRenderText_164(Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 * value)
	{
		___OnPreRenderText_164 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPreRenderText_164), (void*)value);
	}

	inline static int32_t get_offset_of_m_spriteAnimator_165() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteAnimator_165)); }
	inline TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 * get_m_spriteAnimator_165() const { return ___m_spriteAnimator_165; }
	inline TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 ** get_address_of_m_spriteAnimator_165() { return &___m_spriteAnimator_165; }
	inline void set_m_spriteAnimator_165(TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 * value)
	{
		___m_spriteAnimator_165 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_spriteAnimator_165), (void*)value);
	}

	inline static int32_t get_offset_of_m_flexibleHeight_166() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_flexibleHeight_166)); }
	inline float get_m_flexibleHeight_166() const { return ___m_flexibleHeight_166; }
	inline float* get_address_of_m_flexibleHeight_166() { return &___m_flexibleHeight_166; }
	inline void set_m_flexibleHeight_166(float value)
	{
		___m_flexibleHeight_166 = value;
	}

	inline static int32_t get_offset_of_m_flexibleWidth_167() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_flexibleWidth_167)); }
	inline float get_m_flexibleWidth_167() const { return ___m_flexibleWidth_167; }
	inline float* get_address_of_m_flexibleWidth_167() { return &___m_flexibleWidth_167; }
	inline void set_m_flexibleWidth_167(float value)
	{
		___m_flexibleWidth_167 = value;
	}

	inline static int32_t get_offset_of_m_minWidth_168() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_minWidth_168)); }
	inline float get_m_minWidth_168() const { return ___m_minWidth_168; }
	inline float* get_address_of_m_minWidth_168() { return &___m_minWidth_168; }
	inline void set_m_minWidth_168(float value)
	{
		___m_minWidth_168 = value;
	}

	inline static int32_t get_offset_of_m_minHeight_169() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_minHeight_169)); }
	inline float get_m_minHeight_169() const { return ___m_minHeight_169; }
	inline float* get_address_of_m_minHeight_169() { return &___m_minHeight_169; }
	inline void set_m_minHeight_169(float value)
	{
		___m_minHeight_169 = value;
	}

	inline static int32_t get_offset_of_m_maxWidth_170() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxWidth_170)); }
	inline float get_m_maxWidth_170() const { return ___m_maxWidth_170; }
	inline float* get_address_of_m_maxWidth_170() { return &___m_maxWidth_170; }
	inline void set_m_maxWidth_170(float value)
	{
		___m_maxWidth_170 = value;
	}

	inline static int32_t get_offset_of_m_maxHeight_171() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxHeight_171)); }
	inline float get_m_maxHeight_171() const { return ___m_maxHeight_171; }
	inline float* get_address_of_m_maxHeight_171() { return &___m_maxHeight_171; }
	inline void set_m_maxHeight_171(float value)
	{
		___m_maxHeight_171 = value;
	}

	inline static int32_t get_offset_of_m_LayoutElement_172() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_LayoutElement_172)); }
	inline LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF * get_m_LayoutElement_172() const { return ___m_LayoutElement_172; }
	inline LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF ** get_address_of_m_LayoutElement_172() { return &___m_LayoutElement_172; }
	inline void set_m_LayoutElement_172(LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF * value)
	{
		___m_LayoutElement_172 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LayoutElement_172), (void*)value);
	}

	inline static int32_t get_offset_of_m_preferredWidth_173() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_preferredWidth_173)); }
	inline float get_m_preferredWidth_173() const { return ___m_preferredWidth_173; }
	inline float* get_address_of_m_preferredWidth_173() { return &___m_preferredWidth_173; }
	inline void set_m_preferredWidth_173(float value)
	{
		___m_preferredWidth_173 = value;
	}

	inline static int32_t get_offset_of_m_renderedWidth_174() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_renderedWidth_174)); }
	inline float get_m_renderedWidth_174() const { return ___m_renderedWidth_174; }
	inline float* get_address_of_m_renderedWidth_174() { return &___m_renderedWidth_174; }
	inline void set_m_renderedWidth_174(float value)
	{
		___m_renderedWidth_174 = value;
	}

	inline static int32_t get_offset_of_m_isPreferredWidthDirty_175() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isPreferredWidthDirty_175)); }
	inline bool get_m_isPreferredWidthDirty_175() const { return ___m_isPreferredWidthDirty_175; }
	inline bool* get_address_of_m_isPreferredWidthDirty_175() { return &___m_isPreferredWidthDirty_175; }
	inline void set_m_isPreferredWidthDirty_175(bool value)
	{
		___m_isPreferredWidthDirty_175 = value;
	}

	inline static int32_t get_offset_of_m_preferredHeight_176() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_preferredHeight_176)); }
	inline float get_m_preferredHeight_176() const { return ___m_preferredHeight_176; }
	inline float* get_address_of_m_preferredHeight_176() { return &___m_preferredHeight_176; }
	inline void set_m_preferredHeight_176(float value)
	{
		___m_preferredHeight_176 = value;
	}

	inline static int32_t get_offset_of_m_renderedHeight_177() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_renderedHeight_177)); }
	inline float get_m_renderedHeight_177() const { return ___m_renderedHeight_177; }
	inline float* get_address_of_m_renderedHeight_177() { return &___m_renderedHeight_177; }
	inline void set_m_renderedHeight_177(float value)
	{
		___m_renderedHeight_177 = value;
	}

	inline static int32_t get_offset_of_m_isPreferredHeightDirty_178() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isPreferredHeightDirty_178)); }
	inline bool get_m_isPreferredHeightDirty_178() const { return ___m_isPreferredHeightDirty_178; }
	inline bool* get_address_of_m_isPreferredHeightDirty_178() { return &___m_isPreferredHeightDirty_178; }
	inline void set_m_isPreferredHeightDirty_178(bool value)
	{
		___m_isPreferredHeightDirty_178 = value;
	}

	inline static int32_t get_offset_of_m_isCalculatingPreferredValues_179() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isCalculatingPreferredValues_179)); }
	inline bool get_m_isCalculatingPreferredValues_179() const { return ___m_isCalculatingPreferredValues_179; }
	inline bool* get_address_of_m_isCalculatingPreferredValues_179() { return &___m_isCalculatingPreferredValues_179; }
	inline void set_m_isCalculatingPreferredValues_179(bool value)
	{
		___m_isCalculatingPreferredValues_179 = value;
	}

	inline static int32_t get_offset_of_m_layoutPriority_180() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_layoutPriority_180)); }
	inline int32_t get_m_layoutPriority_180() const { return ___m_layoutPriority_180; }
	inline int32_t* get_address_of_m_layoutPriority_180() { return &___m_layoutPriority_180; }
	inline void set_m_layoutPriority_180(int32_t value)
	{
		___m_layoutPriority_180 = value;
	}

	inline static int32_t get_offset_of_m_isLayoutDirty_181() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isLayoutDirty_181)); }
	inline bool get_m_isLayoutDirty_181() const { return ___m_isLayoutDirty_181; }
	inline bool* get_address_of_m_isLayoutDirty_181() { return &___m_isLayoutDirty_181; }
	inline void set_m_isLayoutDirty_181(bool value)
	{
		___m_isLayoutDirty_181 = value;
	}

	inline static int32_t get_offset_of_m_isAwake_182() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isAwake_182)); }
	inline bool get_m_isAwake_182() const { return ___m_isAwake_182; }
	inline bool* get_address_of_m_isAwake_182() { return &___m_isAwake_182; }
	inline void set_m_isAwake_182(bool value)
	{
		___m_isAwake_182 = value;
	}

	inline static int32_t get_offset_of_m_isWaitingOnResourceLoad_183() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isWaitingOnResourceLoad_183)); }
	inline bool get_m_isWaitingOnResourceLoad_183() const { return ___m_isWaitingOnResourceLoad_183; }
	inline bool* get_address_of_m_isWaitingOnResourceLoad_183() { return &___m_isWaitingOnResourceLoad_183; }
	inline void set_m_isWaitingOnResourceLoad_183(bool value)
	{
		___m_isWaitingOnResourceLoad_183 = value;
	}

	inline static int32_t get_offset_of_m_isInputParsingRequired_184() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isInputParsingRequired_184)); }
	inline bool get_m_isInputParsingRequired_184() const { return ___m_isInputParsingRequired_184; }
	inline bool* get_address_of_m_isInputParsingRequired_184() { return &___m_isInputParsingRequired_184; }
	inline void set_m_isInputParsingRequired_184(bool value)
	{
		___m_isInputParsingRequired_184 = value;
	}

	inline static int32_t get_offset_of_m_inputSource_185() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_inputSource_185)); }
	inline int32_t get_m_inputSource_185() const { return ___m_inputSource_185; }
	inline int32_t* get_address_of_m_inputSource_185() { return &___m_inputSource_185; }
	inline void set_m_inputSource_185(int32_t value)
	{
		___m_inputSource_185 = value;
	}

	inline static int32_t get_offset_of_m_fontScale_186() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontScale_186)); }
	inline float get_m_fontScale_186() const { return ___m_fontScale_186; }
	inline float* get_address_of_m_fontScale_186() { return &___m_fontScale_186; }
	inline void set_m_fontScale_186(float value)
	{
		___m_fontScale_186 = value;
	}

	inline static int32_t get_offset_of_m_fontScaleMultiplier_187() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontScaleMultiplier_187)); }
	inline float get_m_fontScaleMultiplier_187() const { return ___m_fontScaleMultiplier_187; }
	inline float* get_address_of_m_fontScaleMultiplier_187() { return &___m_fontScaleMultiplier_187; }
	inline void set_m_fontScaleMultiplier_187(float value)
	{
		___m_fontScaleMultiplier_187 = value;
	}

	inline static int32_t get_offset_of_m_htmlTag_188() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_htmlTag_188)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_htmlTag_188() const { return ___m_htmlTag_188; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_htmlTag_188() { return &___m_htmlTag_188; }
	inline void set_m_htmlTag_188(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_htmlTag_188 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_htmlTag_188), (void*)value);
	}

	inline static int32_t get_offset_of_m_xmlAttribute_189() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_xmlAttribute_189)); }
	inline RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615* get_m_xmlAttribute_189() const { return ___m_xmlAttribute_189; }
	inline RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615** get_address_of_m_xmlAttribute_189() { return &___m_xmlAttribute_189; }
	inline void set_m_xmlAttribute_189(RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615* value)
	{
		___m_xmlAttribute_189 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_xmlAttribute_189), (void*)value);
	}

	inline static int32_t get_offset_of_m_attributeParameterValues_190() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_attributeParameterValues_190)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_m_attributeParameterValues_190() const { return ___m_attributeParameterValues_190; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_m_attributeParameterValues_190() { return &___m_attributeParameterValues_190; }
	inline void set_m_attributeParameterValues_190(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___m_attributeParameterValues_190 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_attributeParameterValues_190), (void*)value);
	}

	inline static int32_t get_offset_of_tag_LineIndent_191() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___tag_LineIndent_191)); }
	inline float get_tag_LineIndent_191() const { return ___tag_LineIndent_191; }
	inline float* get_address_of_tag_LineIndent_191() { return &___tag_LineIndent_191; }
	inline void set_tag_LineIndent_191(float value)
	{
		___tag_LineIndent_191 = value;
	}

	inline static int32_t get_offset_of_tag_Indent_192() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___tag_Indent_192)); }
	inline float get_tag_Indent_192() const { return ___tag_Indent_192; }
	inline float* get_address_of_tag_Indent_192() { return &___tag_Indent_192; }
	inline void set_tag_Indent_192(float value)
	{
		___tag_Indent_192 = value;
	}

	inline static int32_t get_offset_of_m_indentStack_193() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_indentStack_193)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_m_indentStack_193() const { return ___m_indentStack_193; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_m_indentStack_193() { return &___m_indentStack_193; }
	inline void set_m_indentStack_193(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___m_indentStack_193 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_indentStack_193))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_tag_NoParsing_194() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___tag_NoParsing_194)); }
	inline bool get_tag_NoParsing_194() const { return ___tag_NoParsing_194; }
	inline bool* get_address_of_tag_NoParsing_194() { return &___tag_NoParsing_194; }
	inline void set_tag_NoParsing_194(bool value)
	{
		___tag_NoParsing_194 = value;
	}

	inline static int32_t get_offset_of_m_isParsingText_195() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isParsingText_195)); }
	inline bool get_m_isParsingText_195() const { return ___m_isParsingText_195; }
	inline bool* get_address_of_m_isParsingText_195() { return &___m_isParsingText_195; }
	inline void set_m_isParsingText_195(bool value)
	{
		___m_isParsingText_195 = value;
	}

	inline static int32_t get_offset_of_m_FXMatrix_196() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_FXMatrix_196)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_m_FXMatrix_196() const { return ___m_FXMatrix_196; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_m_FXMatrix_196() { return &___m_FXMatrix_196; }
	inline void set_m_FXMatrix_196(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___m_FXMatrix_196 = value;
	}

	inline static int32_t get_offset_of_m_isFXMatrixSet_197() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isFXMatrixSet_197)); }
	inline bool get_m_isFXMatrixSet_197() const { return ___m_isFXMatrixSet_197; }
	inline bool* get_address_of_m_isFXMatrixSet_197() { return &___m_isFXMatrixSet_197; }
	inline void set_m_isFXMatrixSet_197(bool value)
	{
		___m_isFXMatrixSet_197 = value;
	}

	inline static int32_t get_offset_of_m_InternalParsingBuffer_198() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_InternalParsingBuffer_198)); }
	inline UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7* get_m_InternalParsingBuffer_198() const { return ___m_InternalParsingBuffer_198; }
	inline UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7** get_address_of_m_InternalParsingBuffer_198() { return &___m_InternalParsingBuffer_198; }
	inline void set_m_InternalParsingBuffer_198(UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7* value)
	{
		___m_InternalParsingBuffer_198 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InternalParsingBuffer_198), (void*)value);
	}

	inline static int32_t get_offset_of_m_InternalParsingBufferSize_199() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_InternalParsingBufferSize_199)); }
	inline int32_t get_m_InternalParsingBufferSize_199() const { return ___m_InternalParsingBufferSize_199; }
	inline int32_t* get_address_of_m_InternalParsingBufferSize_199() { return &___m_InternalParsingBufferSize_199; }
	inline void set_m_InternalParsingBufferSize_199(int32_t value)
	{
		___m_InternalParsingBufferSize_199 = value;
	}

	inline static int32_t get_offset_of_m_internalCharacterInfo_200() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_internalCharacterInfo_200)); }
	inline TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* get_m_internalCharacterInfo_200() const { return ___m_internalCharacterInfo_200; }
	inline TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970** get_address_of_m_internalCharacterInfo_200() { return &___m_internalCharacterInfo_200; }
	inline void set_m_internalCharacterInfo_200(TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* value)
	{
		___m_internalCharacterInfo_200 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_internalCharacterInfo_200), (void*)value);
	}

	inline static int32_t get_offset_of_m_input_CharArray_201() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_input_CharArray_201)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_input_CharArray_201() const { return ___m_input_CharArray_201; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_input_CharArray_201() { return &___m_input_CharArray_201; }
	inline void set_m_input_CharArray_201(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_input_CharArray_201 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_input_CharArray_201), (void*)value);
	}

	inline static int32_t get_offset_of_m_charArray_Length_202() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_charArray_Length_202)); }
	inline int32_t get_m_charArray_Length_202() const { return ___m_charArray_Length_202; }
	inline int32_t* get_address_of_m_charArray_Length_202() { return &___m_charArray_Length_202; }
	inline void set_m_charArray_Length_202(int32_t value)
	{
		___m_charArray_Length_202 = value;
	}

	inline static int32_t get_offset_of_m_totalCharacterCount_203() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_totalCharacterCount_203)); }
	inline int32_t get_m_totalCharacterCount_203() const { return ___m_totalCharacterCount_203; }
	inline int32_t* get_address_of_m_totalCharacterCount_203() { return &___m_totalCharacterCount_203; }
	inline void set_m_totalCharacterCount_203(int32_t value)
	{
		___m_totalCharacterCount_203 = value;
	}

	inline static int32_t get_offset_of_m_SavedWordWrapState_204() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_SavedWordWrapState_204)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedWordWrapState_204() const { return ___m_SavedWordWrapState_204; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedWordWrapState_204() { return &___m_SavedWordWrapState_204; }
	inline void set_m_SavedWordWrapState_204(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedWordWrapState_204 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_204))->___textInfo_36), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_204))->___italicAngleStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_204))->___colorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_204))->___underlineColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_204))->___strikethroughColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_204))->___highlightColorStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_204))->___highlightStateStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_204))->___colorGradientStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_204))->___colorGradientStack_49))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_204))->___sizeStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_204))->___indentStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_204))->___fontWeightStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_204))->___styleStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_204))->___baselineStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_204))->___actionStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_204))->___materialReferenceStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_204))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_204))->___materialReferenceStack_56))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_204))->___materialReferenceStack_56))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_204))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_204))->___lineJustificationStack_57))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_204))->___currentFontAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_204))->___currentSpriteAsset_60), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_204))->___currentMaterial_61), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedLineState_205() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_SavedLineState_205)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedLineState_205() const { return ___m_SavedLineState_205; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedLineState_205() { return &___m_SavedLineState_205; }
	inline void set_m_SavedLineState_205(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedLineState_205 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_205))->___textInfo_36), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_205))->___italicAngleStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_205))->___colorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_205))->___underlineColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_205))->___strikethroughColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_205))->___highlightColorStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_205))->___highlightStateStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_205))->___colorGradientStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_205))->___colorGradientStack_49))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_205))->___sizeStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_205))->___indentStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_205))->___fontWeightStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_205))->___styleStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_205))->___baselineStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_205))->___actionStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_205))->___materialReferenceStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_205))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_205))->___materialReferenceStack_56))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_205))->___materialReferenceStack_56))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_205))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_205))->___lineJustificationStack_57))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_205))->___currentFontAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_205))->___currentSpriteAsset_60), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_205))->___currentMaterial_61), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedEllipsisState_206() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_SavedEllipsisState_206)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedEllipsisState_206() const { return ___m_SavedEllipsisState_206; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedEllipsisState_206() { return &___m_SavedEllipsisState_206; }
	inline void set_m_SavedEllipsisState_206(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedEllipsisState_206 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_206))->___textInfo_36), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_206))->___italicAngleStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_206))->___colorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_206))->___underlineColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_206))->___strikethroughColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_206))->___highlightColorStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_206))->___highlightStateStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_206))->___colorGradientStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_206))->___colorGradientStack_49))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_206))->___sizeStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_206))->___indentStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_206))->___fontWeightStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_206))->___styleStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_206))->___baselineStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_206))->___actionStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_206))->___materialReferenceStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_206))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_206))->___materialReferenceStack_56))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_206))->___materialReferenceStack_56))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_206))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_206))->___lineJustificationStack_57))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_206))->___currentFontAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_206))->___currentSpriteAsset_60), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_206))->___currentMaterial_61), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedLastValidState_207() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_SavedLastValidState_207)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedLastValidState_207() const { return ___m_SavedLastValidState_207; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedLastValidState_207() { return &___m_SavedLastValidState_207; }
	inline void set_m_SavedLastValidState_207(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedLastValidState_207 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_207))->___textInfo_36), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_207))->___italicAngleStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_207))->___colorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_207))->___underlineColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_207))->___strikethroughColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_207))->___highlightColorStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_207))->___highlightStateStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_207))->___colorGradientStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_207))->___colorGradientStack_49))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_207))->___sizeStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_207))->___indentStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_207))->___fontWeightStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_207))->___styleStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_207))->___baselineStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_207))->___actionStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_207))->___materialReferenceStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_207))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_207))->___materialReferenceStack_56))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_207))->___materialReferenceStack_56))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_207))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_207))->___lineJustificationStack_57))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_207))->___currentFontAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_207))->___currentSpriteAsset_60), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_207))->___currentMaterial_61), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedSoftLineBreakState_208() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_SavedSoftLineBreakState_208)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedSoftLineBreakState_208() const { return ___m_SavedSoftLineBreakState_208; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedSoftLineBreakState_208() { return &___m_SavedSoftLineBreakState_208; }
	inline void set_m_SavedSoftLineBreakState_208(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedSoftLineBreakState_208 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_208))->___textInfo_36), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_208))->___italicAngleStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_208))->___colorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_208))->___underlineColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_208))->___strikethroughColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_208))->___highlightColorStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_208))->___highlightStateStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_208))->___colorGradientStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_208))->___colorGradientStack_49))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_208))->___sizeStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_208))->___indentStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_208))->___fontWeightStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_208))->___styleStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_208))->___baselineStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_208))->___actionStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_208))->___materialReferenceStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_208))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_208))->___materialReferenceStack_56))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_208))->___materialReferenceStack_56))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_208))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_208))->___lineJustificationStack_57))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_208))->___currentFontAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_208))->___currentSpriteAsset_60), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_208))->___currentMaterial_61), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_EllipsisInsertionCandidateStack_209() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_EllipsisInsertionCandidateStack_209)); }
	inline TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7  get_m_EllipsisInsertionCandidateStack_209() const { return ___m_EllipsisInsertionCandidateStack_209; }
	inline TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7 * get_address_of_m_EllipsisInsertionCandidateStack_209() { return &___m_EllipsisInsertionCandidateStack_209; }
	inline void set_m_EllipsisInsertionCandidateStack_209(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7  value)
	{
		___m_EllipsisInsertionCandidateStack_209 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_EllipsisInsertionCandidateStack_209))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___textInfo_36), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___italicAngleStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___colorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___underlineColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___strikethroughColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___highlightColorStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___highlightStateStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___colorGradientStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___colorGradientStack_49))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___sizeStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___indentStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___fontWeightStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___styleStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___baselineStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___actionStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___materialReferenceStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___materialReferenceStack_56))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___materialReferenceStack_56))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___lineJustificationStack_57))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___currentFontAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___currentSpriteAsset_60), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___currentMaterial_61), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_characterCount_210() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_characterCount_210)); }
	inline int32_t get_m_characterCount_210() const { return ___m_characterCount_210; }
	inline int32_t* get_address_of_m_characterCount_210() { return &___m_characterCount_210; }
	inline void set_m_characterCount_210(int32_t value)
	{
		___m_characterCount_210 = value;
	}

	inline static int32_t get_offset_of_m_firstCharacterOfLine_211() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_firstCharacterOfLine_211)); }
	inline int32_t get_m_firstCharacterOfLine_211() const { return ___m_firstCharacterOfLine_211; }
	inline int32_t* get_address_of_m_firstCharacterOfLine_211() { return &___m_firstCharacterOfLine_211; }
	inline void set_m_firstCharacterOfLine_211(int32_t value)
	{
		___m_firstCharacterOfLine_211 = value;
	}

	inline static int32_t get_offset_of_m_firstVisibleCharacterOfLine_212() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_firstVisibleCharacterOfLine_212)); }
	inline int32_t get_m_firstVisibleCharacterOfLine_212() const { return ___m_firstVisibleCharacterOfLine_212; }
	inline int32_t* get_address_of_m_firstVisibleCharacterOfLine_212() { return &___m_firstVisibleCharacterOfLine_212; }
	inline void set_m_firstVisibleCharacterOfLine_212(int32_t value)
	{
		___m_firstVisibleCharacterOfLine_212 = value;
	}

	inline static int32_t get_offset_of_m_lastCharacterOfLine_213() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lastCharacterOfLine_213)); }
	inline int32_t get_m_lastCharacterOfLine_213() const { return ___m_lastCharacterOfLine_213; }
	inline int32_t* get_address_of_m_lastCharacterOfLine_213() { return &___m_lastCharacterOfLine_213; }
	inline void set_m_lastCharacterOfLine_213(int32_t value)
	{
		___m_lastCharacterOfLine_213 = value;
	}

	inline static int32_t get_offset_of_m_lastVisibleCharacterOfLine_214() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lastVisibleCharacterOfLine_214)); }
	inline int32_t get_m_lastVisibleCharacterOfLine_214() const { return ___m_lastVisibleCharacterOfLine_214; }
	inline int32_t* get_address_of_m_lastVisibleCharacterOfLine_214() { return &___m_lastVisibleCharacterOfLine_214; }
	inline void set_m_lastVisibleCharacterOfLine_214(int32_t value)
	{
		___m_lastVisibleCharacterOfLine_214 = value;
	}

	inline static int32_t get_offset_of_m_lineNumber_215() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineNumber_215)); }
	inline int32_t get_m_lineNumber_215() const { return ___m_lineNumber_215; }
	inline int32_t* get_address_of_m_lineNumber_215() { return &___m_lineNumber_215; }
	inline void set_m_lineNumber_215(int32_t value)
	{
		___m_lineNumber_215 = value;
	}

	inline static int32_t get_offset_of_m_lineVisibleCharacterCount_216() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineVisibleCharacterCount_216)); }
	inline int32_t get_m_lineVisibleCharacterCount_216() const { return ___m_lineVisibleCharacterCount_216; }
	inline int32_t* get_address_of_m_lineVisibleCharacterCount_216() { return &___m_lineVisibleCharacterCount_216; }
	inline void set_m_lineVisibleCharacterCount_216(int32_t value)
	{
		___m_lineVisibleCharacterCount_216 = value;
	}

	inline static int32_t get_offset_of_m_pageNumber_217() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_pageNumber_217)); }
	inline int32_t get_m_pageNumber_217() const { return ___m_pageNumber_217; }
	inline int32_t* get_address_of_m_pageNumber_217() { return &___m_pageNumber_217; }
	inline void set_m_pageNumber_217(int32_t value)
	{
		___m_pageNumber_217 = value;
	}

	inline static int32_t get_offset_of_m_PageAscender_218() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_PageAscender_218)); }
	inline float get_m_PageAscender_218() const { return ___m_PageAscender_218; }
	inline float* get_address_of_m_PageAscender_218() { return &___m_PageAscender_218; }
	inline void set_m_PageAscender_218(float value)
	{
		___m_PageAscender_218 = value;
	}

	inline static int32_t get_offset_of_m_maxTextAscender_219() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxTextAscender_219)); }
	inline float get_m_maxTextAscender_219() const { return ___m_maxTextAscender_219; }
	inline float* get_address_of_m_maxTextAscender_219() { return &___m_maxTextAscender_219; }
	inline void set_m_maxTextAscender_219(float value)
	{
		___m_maxTextAscender_219 = value;
	}

	inline static int32_t get_offset_of_m_maxCapHeight_220() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxCapHeight_220)); }
	inline float get_m_maxCapHeight_220() const { return ___m_maxCapHeight_220; }
	inline float* get_address_of_m_maxCapHeight_220() { return &___m_maxCapHeight_220; }
	inline void set_m_maxCapHeight_220(float value)
	{
		___m_maxCapHeight_220 = value;
	}

	inline static int32_t get_offset_of_m_ElementAscender_221() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ElementAscender_221)); }
	inline float get_m_ElementAscender_221() const { return ___m_ElementAscender_221; }
	inline float* get_address_of_m_ElementAscender_221() { return &___m_ElementAscender_221; }
	inline void set_m_ElementAscender_221(float value)
	{
		___m_ElementAscender_221 = value;
	}

	inline static int32_t get_offset_of_m_ElementDescender_222() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ElementDescender_222)); }
	inline float get_m_ElementDescender_222() const { return ___m_ElementDescender_222; }
	inline float* get_address_of_m_ElementDescender_222() { return &___m_ElementDescender_222; }
	inline void set_m_ElementDescender_222(float value)
	{
		___m_ElementDescender_222 = value;
	}

	inline static int32_t get_offset_of_m_maxLineAscender_223() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxLineAscender_223)); }
	inline float get_m_maxLineAscender_223() const { return ___m_maxLineAscender_223; }
	inline float* get_address_of_m_maxLineAscender_223() { return &___m_maxLineAscender_223; }
	inline void set_m_maxLineAscender_223(float value)
	{
		___m_maxLineAscender_223 = value;
	}

	inline static int32_t get_offset_of_m_maxLineDescender_224() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxLineDescender_224)); }
	inline float get_m_maxLineDescender_224() const { return ___m_maxLineDescender_224; }
	inline float* get_address_of_m_maxLineDescender_224() { return &___m_maxLineDescender_224; }
	inline void set_m_maxLineDescender_224(float value)
	{
		___m_maxLineDescender_224 = value;
	}

	inline static int32_t get_offset_of_m_startOfLineAscender_225() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_startOfLineAscender_225)); }
	inline float get_m_startOfLineAscender_225() const { return ___m_startOfLineAscender_225; }
	inline float* get_address_of_m_startOfLineAscender_225() { return &___m_startOfLineAscender_225; }
	inline void set_m_startOfLineAscender_225(float value)
	{
		___m_startOfLineAscender_225 = value;
	}

	inline static int32_t get_offset_of_m_startOfLineDescender_226() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_startOfLineDescender_226)); }
	inline float get_m_startOfLineDescender_226() const { return ___m_startOfLineDescender_226; }
	inline float* get_address_of_m_startOfLineDescender_226() { return &___m_startOfLineDescender_226; }
	inline void set_m_startOfLineDescender_226(float value)
	{
		___m_startOfLineDescender_226 = value;
	}

	inline static int32_t get_offset_of_m_lineOffset_227() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineOffset_227)); }
	inline float get_m_lineOffset_227() const { return ___m_lineOffset_227; }
	inline float* get_address_of_m_lineOffset_227() { return &___m_lineOffset_227; }
	inline void set_m_lineOffset_227(float value)
	{
		___m_lineOffset_227 = value;
	}

	inline static int32_t get_offset_of_m_meshExtents_228() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_meshExtents_228)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_m_meshExtents_228() const { return ___m_meshExtents_228; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_m_meshExtents_228() { return &___m_meshExtents_228; }
	inline void set_m_meshExtents_228(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___m_meshExtents_228 = value;
	}

	inline static int32_t get_offset_of_m_htmlColor_229() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_htmlColor_229)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_htmlColor_229() const { return ___m_htmlColor_229; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_htmlColor_229() { return &___m_htmlColor_229; }
	inline void set_m_htmlColor_229(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_htmlColor_229 = value;
	}

	inline static int32_t get_offset_of_m_colorStack_230() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorStack_230)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_m_colorStack_230() const { return ___m_colorStack_230; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_m_colorStack_230() { return &___m_colorStack_230; }
	inline void set_m_colorStack_230(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___m_colorStack_230 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorStack_230))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_underlineColorStack_231() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_underlineColorStack_231)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_m_underlineColorStack_231() const { return ___m_underlineColorStack_231; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_m_underlineColorStack_231() { return &___m_underlineColorStack_231; }
	inline void set_m_underlineColorStack_231(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___m_underlineColorStack_231 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_underlineColorStack_231))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_strikethroughColorStack_232() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_strikethroughColorStack_232)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_m_strikethroughColorStack_232() const { return ___m_strikethroughColorStack_232; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_m_strikethroughColorStack_232() { return &___m_strikethroughColorStack_232; }
	inline void set_m_strikethroughColorStack_232(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___m_strikethroughColorStack_232 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_strikethroughColorStack_232))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_HighlightStateStack_233() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_HighlightStateStack_233)); }
	inline TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  get_m_HighlightStateStack_233() const { return ___m_HighlightStateStack_233; }
	inline TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E * get_address_of_m_HighlightStateStack_233() { return &___m_HighlightStateStack_233; }
	inline void set_m_HighlightStateStack_233(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  value)
	{
		___m_HighlightStateStack_233 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_HighlightStateStack_233))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_colorGradientPreset_234() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorGradientPreset_234)); }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * get_m_colorGradientPreset_234() const { return ___m_colorGradientPreset_234; }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 ** get_address_of_m_colorGradientPreset_234() { return &___m_colorGradientPreset_234; }
	inline void set_m_colorGradientPreset_234(TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * value)
	{
		___m_colorGradientPreset_234 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_colorGradientPreset_234), (void*)value);
	}

	inline static int32_t get_offset_of_m_colorGradientStack_235() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorGradientStack_235)); }
	inline TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  get_m_colorGradientStack_235() const { return ___m_colorGradientStack_235; }
	inline TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804 * get_address_of_m_colorGradientStack_235() { return &___m_colorGradientStack_235; }
	inline void set_m_colorGradientStack_235(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  value)
	{
		___m_colorGradientStack_235 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorGradientStack_235))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorGradientStack_235))->___m_DefaultItem_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_colorGradientPresetIsTinted_236() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorGradientPresetIsTinted_236)); }
	inline bool get_m_colorGradientPresetIsTinted_236() const { return ___m_colorGradientPresetIsTinted_236; }
	inline bool* get_address_of_m_colorGradientPresetIsTinted_236() { return &___m_colorGradientPresetIsTinted_236; }
	inline void set_m_colorGradientPresetIsTinted_236(bool value)
	{
		___m_colorGradientPresetIsTinted_236 = value;
	}

	inline static int32_t get_offset_of_m_tabSpacing_237() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_tabSpacing_237)); }
	inline float get_m_tabSpacing_237() const { return ___m_tabSpacing_237; }
	inline float* get_address_of_m_tabSpacing_237() { return &___m_tabSpacing_237; }
	inline void set_m_tabSpacing_237(float value)
	{
		___m_tabSpacing_237 = value;
	}

	inline static int32_t get_offset_of_m_spacing_238() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spacing_238)); }
	inline float get_m_spacing_238() const { return ___m_spacing_238; }
	inline float* get_address_of_m_spacing_238() { return &___m_spacing_238; }
	inline void set_m_spacing_238(float value)
	{
		___m_spacing_238 = value;
	}

	inline static int32_t get_offset_of_m_TextStyleStacks_239() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextStyleStacks_239)); }
	inline TMP_TextProcessingStack_1U5BU5D_t1E4BEAC3D61A2AD0284E919166D0F38D21540A37* get_m_TextStyleStacks_239() const { return ___m_TextStyleStacks_239; }
	inline TMP_TextProcessingStack_1U5BU5D_t1E4BEAC3D61A2AD0284E919166D0F38D21540A37** get_address_of_m_TextStyleStacks_239() { return &___m_TextStyleStacks_239; }
	inline void set_m_TextStyleStacks_239(TMP_TextProcessingStack_1U5BU5D_t1E4BEAC3D61A2AD0284E919166D0F38D21540A37* value)
	{
		___m_TextStyleStacks_239 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextStyleStacks_239), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextStyleStackDepth_240() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextStyleStackDepth_240)); }
	inline int32_t get_m_TextStyleStackDepth_240() const { return ___m_TextStyleStackDepth_240; }
	inline int32_t* get_address_of_m_TextStyleStackDepth_240() { return &___m_TextStyleStackDepth_240; }
	inline void set_m_TextStyleStackDepth_240(int32_t value)
	{
		___m_TextStyleStackDepth_240 = value;
	}

	inline static int32_t get_offset_of_m_ItalicAngleStack_241() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ItalicAngleStack_241)); }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  get_m_ItalicAngleStack_241() const { return ___m_ItalicAngleStack_241; }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA * get_address_of_m_ItalicAngleStack_241() { return &___m_ItalicAngleStack_241; }
	inline void set_m_ItalicAngleStack_241(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  value)
	{
		___m_ItalicAngleStack_241 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ItalicAngleStack_241))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_ItalicAngle_242() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ItalicAngle_242)); }
	inline int32_t get_m_ItalicAngle_242() const { return ___m_ItalicAngle_242; }
	inline int32_t* get_address_of_m_ItalicAngle_242() { return &___m_ItalicAngle_242; }
	inline void set_m_ItalicAngle_242(int32_t value)
	{
		___m_ItalicAngle_242 = value;
	}

	inline static int32_t get_offset_of_m_actionStack_243() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_actionStack_243)); }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  get_m_actionStack_243() const { return ___m_actionStack_243; }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA * get_address_of_m_actionStack_243() { return &___m_actionStack_243; }
	inline void set_m_actionStack_243(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  value)
	{
		___m_actionStack_243 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_actionStack_243))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_padding_244() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_padding_244)); }
	inline float get_m_padding_244() const { return ___m_padding_244; }
	inline float* get_address_of_m_padding_244() { return &___m_padding_244; }
	inline void set_m_padding_244(float value)
	{
		___m_padding_244 = value;
	}

	inline static int32_t get_offset_of_m_baselineOffset_245() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_baselineOffset_245)); }
	inline float get_m_baselineOffset_245() const { return ___m_baselineOffset_245; }
	inline float* get_address_of_m_baselineOffset_245() { return &___m_baselineOffset_245; }
	inline void set_m_baselineOffset_245(float value)
	{
		___m_baselineOffset_245 = value;
	}

	inline static int32_t get_offset_of_m_baselineOffsetStack_246() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_baselineOffsetStack_246)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_m_baselineOffsetStack_246() const { return ___m_baselineOffsetStack_246; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_m_baselineOffsetStack_246() { return &___m_baselineOffsetStack_246; }
	inline void set_m_baselineOffsetStack_246(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___m_baselineOffsetStack_246 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_baselineOffsetStack_246))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_xAdvance_247() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_xAdvance_247)); }
	inline float get_m_xAdvance_247() const { return ___m_xAdvance_247; }
	inline float* get_address_of_m_xAdvance_247() { return &___m_xAdvance_247; }
	inline void set_m_xAdvance_247(float value)
	{
		___m_xAdvance_247 = value;
	}

	inline static int32_t get_offset_of_m_textElementType_248() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_textElementType_248)); }
	inline int32_t get_m_textElementType_248() const { return ___m_textElementType_248; }
	inline int32_t* get_address_of_m_textElementType_248() { return &___m_textElementType_248; }
	inline void set_m_textElementType_248(int32_t value)
	{
		___m_textElementType_248 = value;
	}

	inline static int32_t get_offset_of_m_cached_TextElement_249() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_cached_TextElement_249)); }
	inline TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * get_m_cached_TextElement_249() const { return ___m_cached_TextElement_249; }
	inline TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 ** get_address_of_m_cached_TextElement_249() { return &___m_cached_TextElement_249; }
	inline void set_m_cached_TextElement_249(TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * value)
	{
		___m_cached_TextElement_249 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cached_TextElement_249), (void*)value);
	}

	inline static int32_t get_offset_of_m_Ellipsis_250() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_Ellipsis_250)); }
	inline SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  get_m_Ellipsis_250() const { return ___m_Ellipsis_250; }
	inline SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F * get_address_of_m_Ellipsis_250() { return &___m_Ellipsis_250; }
	inline void set_m_Ellipsis_250(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  value)
	{
		___m_Ellipsis_250 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Ellipsis_250))->___character_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Ellipsis_250))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Ellipsis_250))->___material_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Underline_251() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_Underline_251)); }
	inline SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  get_m_Underline_251() const { return ___m_Underline_251; }
	inline SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F * get_address_of_m_Underline_251() { return &___m_Underline_251; }
	inline void set_m_Underline_251(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  value)
	{
		___m_Underline_251 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Underline_251))->___character_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Underline_251))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Underline_251))->___material_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_defaultSpriteAsset_252() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_defaultSpriteAsset_252)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_m_defaultSpriteAsset_252() const { return ___m_defaultSpriteAsset_252; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_m_defaultSpriteAsset_252() { return &___m_defaultSpriteAsset_252; }
	inline void set_m_defaultSpriteAsset_252(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___m_defaultSpriteAsset_252 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultSpriteAsset_252), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentSpriteAsset_253() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentSpriteAsset_253)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_m_currentSpriteAsset_253() const { return ___m_currentSpriteAsset_253; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_m_currentSpriteAsset_253() { return &___m_currentSpriteAsset_253; }
	inline void set_m_currentSpriteAsset_253(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___m_currentSpriteAsset_253 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentSpriteAsset_253), (void*)value);
	}

	inline static int32_t get_offset_of_m_spriteCount_254() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteCount_254)); }
	inline int32_t get_m_spriteCount_254() const { return ___m_spriteCount_254; }
	inline int32_t* get_address_of_m_spriteCount_254() { return &___m_spriteCount_254; }
	inline void set_m_spriteCount_254(int32_t value)
	{
		___m_spriteCount_254 = value;
	}

	inline static int32_t get_offset_of_m_spriteIndex_255() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteIndex_255)); }
	inline int32_t get_m_spriteIndex_255() const { return ___m_spriteIndex_255; }
	inline int32_t* get_address_of_m_spriteIndex_255() { return &___m_spriteIndex_255; }
	inline void set_m_spriteIndex_255(int32_t value)
	{
		___m_spriteIndex_255 = value;
	}

	inline static int32_t get_offset_of_m_spriteAnimationID_256() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteAnimationID_256)); }
	inline int32_t get_m_spriteAnimationID_256() const { return ___m_spriteAnimationID_256; }
	inline int32_t* get_address_of_m_spriteAnimationID_256() { return &___m_spriteAnimationID_256; }
	inline void set_m_spriteAnimationID_256(int32_t value)
	{
		___m_spriteAnimationID_256 = value;
	}

	inline static int32_t get_offset_of_m_ignoreActiveState_257() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ignoreActiveState_257)); }
	inline bool get_m_ignoreActiveState_257() const { return ___m_ignoreActiveState_257; }
	inline bool* get_address_of_m_ignoreActiveState_257() { return &___m_ignoreActiveState_257; }
	inline void set_m_ignoreActiveState_257(bool value)
	{
		___m_ignoreActiveState_257 = value;
	}

	inline static int32_t get_offset_of_k_Power_258() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___k_Power_258)); }
	inline DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA* get_k_Power_258() const { return ___k_Power_258; }
	inline DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA** get_address_of_k_Power_258() { return &___k_Power_258; }
	inline void set_k_Power_258(DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA* value)
	{
		___k_Power_258 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_Power_258), (void*)value);
	}
};

struct TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields
{
public:
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___s_colorWhite_54;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0 * ___OnFontAssetRequest_162;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA * ___OnSpriteAssetRequest_163;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;

public:
	inline static int32_t get_offset_of_s_colorWhite_54() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___s_colorWhite_54)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_s_colorWhite_54() const { return ___s_colorWhite_54; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_s_colorWhite_54() { return &___s_colorWhite_54; }
	inline void set_s_colorWhite_54(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___s_colorWhite_54 = value;
	}

	inline static int32_t get_offset_of_OnFontAssetRequest_162() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___OnFontAssetRequest_162)); }
	inline Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0 * get_OnFontAssetRequest_162() const { return ___OnFontAssetRequest_162; }
	inline Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0 ** get_address_of_OnFontAssetRequest_162() { return &___OnFontAssetRequest_162; }
	inline void set_OnFontAssetRequest_162(Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0 * value)
	{
		___OnFontAssetRequest_162 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFontAssetRequest_162), (void*)value);
	}

	inline static int32_t get_offset_of_OnSpriteAssetRequest_163() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___OnSpriteAssetRequest_163)); }
	inline Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA * get_OnSpriteAssetRequest_163() const { return ___OnSpriteAssetRequest_163; }
	inline Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA ** get_address_of_OnSpriteAssetRequest_163() { return &___OnSpriteAssetRequest_163; }
	inline void set_OnSpriteAssetRequest_163(Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA * value)
	{
		___OnSpriteAssetRequest_163 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSpriteAssetRequest_163), (void*)value);
	}

	inline static int32_t get_offset_of_k_LargePositiveVector2_259() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargePositiveVector2_259)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_k_LargePositiveVector2_259() const { return ___k_LargePositiveVector2_259; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_k_LargePositiveVector2_259() { return &___k_LargePositiveVector2_259; }
	inline void set_k_LargePositiveVector2_259(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___k_LargePositiveVector2_259 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeVector2_260() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargeNegativeVector2_260)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_k_LargeNegativeVector2_260() const { return ___k_LargeNegativeVector2_260; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_k_LargeNegativeVector2_260() { return &___k_LargeNegativeVector2_260; }
	inline void set_k_LargeNegativeVector2_260(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___k_LargeNegativeVector2_260 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveFloat_261() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargePositiveFloat_261)); }
	inline float get_k_LargePositiveFloat_261() const { return ___k_LargePositiveFloat_261; }
	inline float* get_address_of_k_LargePositiveFloat_261() { return &___k_LargePositiveFloat_261; }
	inline void set_k_LargePositiveFloat_261(float value)
	{
		___k_LargePositiveFloat_261 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeFloat_262() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargeNegativeFloat_262)); }
	inline float get_k_LargeNegativeFloat_262() const { return ___k_LargeNegativeFloat_262; }
	inline float* get_address_of_k_LargeNegativeFloat_262() { return &___k_LargeNegativeFloat_262; }
	inline void set_k_LargeNegativeFloat_262(float value)
	{
		___k_LargeNegativeFloat_262 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveInt_263() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargePositiveInt_263)); }
	inline int32_t get_k_LargePositiveInt_263() const { return ___k_LargePositiveInt_263; }
	inline int32_t* get_address_of_k_LargePositiveInt_263() { return &___k_LargePositiveInt_263; }
	inline void set_k_LargePositiveInt_263(int32_t value)
	{
		___k_LargePositiveInt_263 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeInt_264() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargeNegativeInt_264)); }
	inline int32_t get_k_LargeNegativeInt_264() const { return ___k_LargeNegativeInt_264; }
	inline int32_t* get_address_of_k_LargeNegativeInt_264() { return &___k_LargeNegativeInt_264; }
	inline void set_k_LargeNegativeInt_264(int32_t value)
	{
		___k_LargeNegativeInt_264 = value;
	}
};


// TMPro.TextMeshPro
struct  TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4  : public TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262
{
public:
	// System.Boolean TMPro.TextMeshPro::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_265;
	// System.Single TMPro.TextMeshPro::m_previousLossyScaleY
	float ___m_previousLossyScaleY_266;
	// UnityEngine.Renderer TMPro.TextMeshPro::m_renderer
	Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * ___m_renderer_267;
	// UnityEngine.MeshFilter TMPro.TextMeshPro::m_meshFilter
	MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * ___m_meshFilter_268;
	// System.Boolean TMPro.TextMeshPro::m_isFirstAllocation
	bool ___m_isFirstAllocation_269;
	// System.Int32 TMPro.TextMeshPro::m_max_characters
	int32_t ___m_max_characters_270;
	// System.Int32 TMPro.TextMeshPro::m_max_numberOfLines
	int32_t ___m_max_numberOfLines_271;
	// TMPro.TMP_SubMesh[] TMPro.TextMeshPro::m_subTextObjects
	TMP_SubMeshU5BU5D_t2EF6E7C00AD0C05C7BD3E565CF716B62BED324A2* ___m_subTextObjects_272;
	// TMPro.MaskingTypes TMPro.TextMeshPro::m_maskType
	int32_t ___m_maskType_273;
	// UnityEngine.Matrix4x4 TMPro.TextMeshPro::m_EnvMapMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_EnvMapMatrix_274;
	// UnityEngine.Vector3[] TMPro.TextMeshPro::m_RectTransformCorners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_RectTransformCorners_275;
	// System.Boolean TMPro.TextMeshPro::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_276;
	// System.Int32 TMPro.TextMeshPro::_SortingLayerID
	int32_t ____SortingLayerID_277;
	// System.Int32 TMPro.TextMeshPro::_SortingOrder
	int32_t ____SortingOrder_278;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshPro::OnPreRenderText
	Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 * ___OnPreRenderText_279;
	// System.Boolean TMPro.TextMeshPro::m_currentAutoSizeMode
	bool ___m_currentAutoSizeMode_280;

public:
	inline static int32_t get_offset_of_m_hasFontAssetChanged_265() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_hasFontAssetChanged_265)); }
	inline bool get_m_hasFontAssetChanged_265() const { return ___m_hasFontAssetChanged_265; }
	inline bool* get_address_of_m_hasFontAssetChanged_265() { return &___m_hasFontAssetChanged_265; }
	inline void set_m_hasFontAssetChanged_265(bool value)
	{
		___m_hasFontAssetChanged_265 = value;
	}

	inline static int32_t get_offset_of_m_previousLossyScaleY_266() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_previousLossyScaleY_266)); }
	inline float get_m_previousLossyScaleY_266() const { return ___m_previousLossyScaleY_266; }
	inline float* get_address_of_m_previousLossyScaleY_266() { return &___m_previousLossyScaleY_266; }
	inline void set_m_previousLossyScaleY_266(float value)
	{
		___m_previousLossyScaleY_266 = value;
	}

	inline static int32_t get_offset_of_m_renderer_267() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_renderer_267)); }
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * get_m_renderer_267() const { return ___m_renderer_267; }
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C ** get_address_of_m_renderer_267() { return &___m_renderer_267; }
	inline void set_m_renderer_267(Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * value)
	{
		___m_renderer_267 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_renderer_267), (void*)value);
	}

	inline static int32_t get_offset_of_m_meshFilter_268() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_meshFilter_268)); }
	inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * get_m_meshFilter_268() const { return ___m_meshFilter_268; }
	inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A ** get_address_of_m_meshFilter_268() { return &___m_meshFilter_268; }
	inline void set_m_meshFilter_268(MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * value)
	{
		___m_meshFilter_268 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_meshFilter_268), (void*)value);
	}

	inline static int32_t get_offset_of_m_isFirstAllocation_269() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_isFirstAllocation_269)); }
	inline bool get_m_isFirstAllocation_269() const { return ___m_isFirstAllocation_269; }
	inline bool* get_address_of_m_isFirstAllocation_269() { return &___m_isFirstAllocation_269; }
	inline void set_m_isFirstAllocation_269(bool value)
	{
		___m_isFirstAllocation_269 = value;
	}

	inline static int32_t get_offset_of_m_max_characters_270() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_max_characters_270)); }
	inline int32_t get_m_max_characters_270() const { return ___m_max_characters_270; }
	inline int32_t* get_address_of_m_max_characters_270() { return &___m_max_characters_270; }
	inline void set_m_max_characters_270(int32_t value)
	{
		___m_max_characters_270 = value;
	}

	inline static int32_t get_offset_of_m_max_numberOfLines_271() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_max_numberOfLines_271)); }
	inline int32_t get_m_max_numberOfLines_271() const { return ___m_max_numberOfLines_271; }
	inline int32_t* get_address_of_m_max_numberOfLines_271() { return &___m_max_numberOfLines_271; }
	inline void set_m_max_numberOfLines_271(int32_t value)
	{
		___m_max_numberOfLines_271 = value;
	}

	inline static int32_t get_offset_of_m_subTextObjects_272() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_subTextObjects_272)); }
	inline TMP_SubMeshU5BU5D_t2EF6E7C00AD0C05C7BD3E565CF716B62BED324A2* get_m_subTextObjects_272() const { return ___m_subTextObjects_272; }
	inline TMP_SubMeshU5BU5D_t2EF6E7C00AD0C05C7BD3E565CF716B62BED324A2** get_address_of_m_subTextObjects_272() { return &___m_subTextObjects_272; }
	inline void set_m_subTextObjects_272(TMP_SubMeshU5BU5D_t2EF6E7C00AD0C05C7BD3E565CF716B62BED324A2* value)
	{
		___m_subTextObjects_272 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_subTextObjects_272), (void*)value);
	}

	inline static int32_t get_offset_of_m_maskType_273() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_maskType_273)); }
	inline int32_t get_m_maskType_273() const { return ___m_maskType_273; }
	inline int32_t* get_address_of_m_maskType_273() { return &___m_maskType_273; }
	inline void set_m_maskType_273(int32_t value)
	{
		___m_maskType_273 = value;
	}

	inline static int32_t get_offset_of_m_EnvMapMatrix_274() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_EnvMapMatrix_274)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_m_EnvMapMatrix_274() const { return ___m_EnvMapMatrix_274; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_m_EnvMapMatrix_274() { return &___m_EnvMapMatrix_274; }
	inline void set_m_EnvMapMatrix_274(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___m_EnvMapMatrix_274 = value;
	}

	inline static int32_t get_offset_of_m_RectTransformCorners_275() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_RectTransformCorners_275)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_RectTransformCorners_275() const { return ___m_RectTransformCorners_275; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_RectTransformCorners_275() { return &___m_RectTransformCorners_275; }
	inline void set_m_RectTransformCorners_275(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_RectTransformCorners_275 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransformCorners_275), (void*)value);
	}

	inline static int32_t get_offset_of_m_isRegisteredForEvents_276() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_isRegisteredForEvents_276)); }
	inline bool get_m_isRegisteredForEvents_276() const { return ___m_isRegisteredForEvents_276; }
	inline bool* get_address_of_m_isRegisteredForEvents_276() { return &___m_isRegisteredForEvents_276; }
	inline void set_m_isRegisteredForEvents_276(bool value)
	{
		___m_isRegisteredForEvents_276 = value;
	}

	inline static int32_t get_offset_of__SortingLayerID_277() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ____SortingLayerID_277)); }
	inline int32_t get__SortingLayerID_277() const { return ____SortingLayerID_277; }
	inline int32_t* get_address_of__SortingLayerID_277() { return &____SortingLayerID_277; }
	inline void set__SortingLayerID_277(int32_t value)
	{
		____SortingLayerID_277 = value;
	}

	inline static int32_t get_offset_of__SortingOrder_278() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ____SortingOrder_278)); }
	inline int32_t get__SortingOrder_278() const { return ____SortingOrder_278; }
	inline int32_t* get_address_of__SortingOrder_278() { return &____SortingOrder_278; }
	inline void set__SortingOrder_278(int32_t value)
	{
		____SortingOrder_278 = value;
	}

	inline static int32_t get_offset_of_OnPreRenderText_279() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___OnPreRenderText_279)); }
	inline Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 * get_OnPreRenderText_279() const { return ___OnPreRenderText_279; }
	inline Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 ** get_address_of_OnPreRenderText_279() { return &___OnPreRenderText_279; }
	inline void set_OnPreRenderText_279(Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 * value)
	{
		___OnPreRenderText_279 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPreRenderText_279), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentAutoSizeMode_280() { return static_cast<int32_t>(offsetof(TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4, ___m_currentAutoSizeMode_280)); }
	inline bool get_m_currentAutoSizeMode_280() const { return ___m_currentAutoSizeMode_280; }
	inline bool* get_address_of_m_currentAutoSizeMode_280() { return &___m_currentAutoSizeMode_280; }
	inline void set_m_currentAutoSizeMode_280(bool value)
	{
		___m_currentAutoSizeMode_280 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Microsoft.MixedReality.Toolkit.Utilities.Handedness[]
struct HandednessU5BU5D_t9007C0EC1534ED9D4EDC49F0756602B961E24B1D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint[]
struct TrackedHandJointU5BU5D_t211452F885C4210C190EF8B95FCB589209721A34  : public RuntimeArray
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


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared (RuntimeObject * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);

// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>::.ctor()
inline void List_1__ctor_m18A274BB3EA15685C5052537C480B355218FBF12 (List_1_t8B72AC0039307D81C9D833E0EC1ACBA710108D98 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8B72AC0039307D81C9D833E0EC1ACBA710108D98 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.BaseExtensionService::.ctor(System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseExtensionService__ctor_m07D09AF7C80DDA70230ADFDF9D7E10D6C03F0901 (BaseExtensionService_t6B8647D87D003C3582FEB487330C3C91290F9CDA * __this, String_t* ___name0, uint32_t ___priority1, BaseMixedRealityProfile_t9B92D8A7CB0AE5AF973870EDF7DE2BC12E5FA4E5 * ___profile2, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.CoreServices::get_InputSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreServices_get_InputSystem_m734103F090144FE710940E31C6B3581D15572FB0 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::CreateKinematicBodies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_CreateKinematicBodies_m71B95DC19BF627238DBF290B955240069493700A (HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::DestroyKinematicBodies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_DestroyKinematicBodies_m78B3FF710F704EEA9720BB0ACEF1F6DB2D46C4EC (HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62 * __this, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile::get_HandPhysicsLayer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HandPhysicsServiceProfile_get_HandPhysicsLayer_m89795DCC8B876FEC586FF036D41016EAD80ACBDA_inline (HandPhysicsServiceProfile_tEF03D15AFC38FC06DA510603A16ED58F220FF9A0 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::set_HandPhysicsLayer(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandPhysicsService_set_HandPhysicsLayer_m98EE92EE532568C53E5BC7AB7EADFA363C396DEE_inline (HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile::get_UsePalmKinematicBody()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HandPhysicsServiceProfile_get_UsePalmKinematicBody_mA13BAE8C828FF8FAED28DC413C5815D4F4D5ADE9_inline (HandPhysicsServiceProfile_tEF03D15AFC38FC06DA510603A16ED58F220FF9A0 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::set_UsePalmKinematicBody(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandPhysicsService_set_UsePalmKinematicBody_m203BFFC903442FA010A6D731B64F44FE79059A97_inline (HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile::get_FingerTipKinematicBodyPrefab()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * HandPhysicsServiceProfile_get_FingerTipKinematicBodyPrefab_mE887BD678EE33EFF346DA8602398405C616F6DF1_inline (HandPhysicsServiceProfile_tEF03D15AFC38FC06DA510603A16ED58F220FF9A0 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::set_FingerTipKinematicBodyPrefab(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_set_FingerTipKinematicBodyPrefab_m4762E97607032A149B03FA0BFE3D3A88995102BC (HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile::get_PalmKinematicBodyPrefab()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * HandPhysicsServiceProfile_get_PalmKinematicBodyPrefab_m190E84CAEB93C875912A73CAFF84953BE56D11D0_inline (HandPhysicsServiceProfile_tEF03D15AFC38FC06DA510603A16ED58F220FF9A0 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::set_PalmKinematicBodyPrefab(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_set_PalmKinematicBodyPrefab_m2BD668E395A5C52BCCCDAC723F0EB270496495FA (HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::set_HandPhysicsServiceRoot(UnityEngine.GameObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandPhysicsService_set_HandPhysicsServiceRoot_m00DBBD75E09651391842B3B31A423CD695AFA6F9_inline (HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::get_HandPhysicsServiceRoot()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * HandPhysicsService_get_HandPhysicsServiceRoot_m086F367CEA0B0C6FAB4EFF62545E240C5C40FA97_inline (HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>::GetEnumerator()
inline Enumerator_tB115EEEF330DD55DA3A4229A5B724220B18DB6AF  List_1_GetEnumerator_mB9F3ABE5B0A6074809806B58F6DBCCAD80409B29 (List_1_t8B72AC0039307D81C9D833E0EC1ACBA710108D98 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tB115EEEF330DD55DA3A4229A5B724220B18DB6AF  (*) (List_1_t8B72AC0039307D81C9D833E0EC1ACBA710108D98 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>::get_Current()
inline JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * Enumerator_get_Current_m54D14F2F7C8346665E98430B08C22B06D9DE5056_inline (Enumerator_tB115EEEF330DD55DA3A4229A5B724220B18DB6AF * __this, const RuntimeMethod* method)
{
	return ((  JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * (*) (Enumerator_tB115EEEF330DD55DA3A4229A5B724220B18DB6AF *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::get_HandJointService()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HandPhysicsService_get_HandJointService_m19E75B05A8EC09D9F6EFB8DAA0495626A22F00E1 (HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::get_HandednessType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t JointKinematicBody_get_HandednessType_m2AF1811513D14A84D3A8C465F7CE776A6419051A_inline (JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * __this, const RuntimeMethod* method);
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::get_Joint()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * JointKinematicBody_get_Joint_m2A37EB193494714DB3FB3FE78E901BC70A394666_inline (JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::get_JointType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t JointKinematicBody_get_JointType_m286B2AFD5E3B808148B70689947E2BE52546C772_inline (JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::set_Joint(UnityEngine.Transform)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JointKinematicBody_set_Joint_mFB41B1B610BB6C5856BBA0EAB4BECCEB9F55433B_inline (JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::UpdateState(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointKinematicBody_UpdateState_m39A8907A401AED69673296BD75779205413152CC (JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * __this, bool ___active0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>::MoveNext()
inline bool Enumerator_MoveNext_mD0D4E50099395577EB6FCA2E432D34B6A34D9767 (Enumerator_tB115EEEF330DD55DA3A4229A5B724220B18DB6AF * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB115EEEF330DD55DA3A4229A5B724220B18DB6AF *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>::Dispose()
inline void Enumerator_Dispose_mFBD9154FF0F2564918C71E2357553EEB8F46F8B5 (Enumerator_tB115EEEF330DD55DA3A4229A5B724220B18DB6AF * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB115EEEF330DD55DA3A4229A5B724220B18DB6AF *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::get_FingerTipKinematicBodyPrefab()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * HandPhysicsService_get_FingerTipKinematicBodyPrefab_m6AFDE69EB8CCF80051BF57EAE423E1FB9B024723_inline (HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::get_HandPhysicsLayer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HandPhysicsService_get_HandPhysicsLayer_mEFAE056D7B76560CBCAE14EF28C2E46EA62BB1CA_inline (HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::TryCreateJointKinematicBody(UnityEngine.GameObject,System.Int32,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,UnityEngine.Transform,Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandPhysicsService_TryCreateJointKinematicBody_m42A1FC76D98BE64D68CBE146356DC89752CC1924 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___rigidBodyPrefab0, int32_t ___layer1, uint8_t ___handednessType2, int32_t ___jointType3, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent4, JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 ** ___jointKinematicBody5, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>::Add(!0)
inline void List_1_Add_mFD36DB6E94EEBC7DFCA6630891B16DA76BB4A986 (List_1_t8B72AC0039307D81C9D833E0EC1ACBA710108D98 * __this, JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8B72AC0039307D81C9D833E0EC1ACBA710108D98 *, JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::get_UsePalmKinematicBody()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HandPhysicsService_get_UsePalmKinematicBody_m2C9E86A4634B5064FC6A2C5E4585A43B4596E7A4_inline (HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::get_PalmKinematicBodyPrefab()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * HandPhysicsService_get_PalmKinematicBodyPrefab_m6C3614EB8042C25C4DBE6EE997EABF4D6B49BC6D_inline (HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>::get_Count()
inline int32_t List_1_get_Count_mFD88A3BCD23E0A70F86D152FE45033C91809F026_inline (List_1_t8B72AC0039307D81C9D833E0EC1ACBA710108D98 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t8B72AC0039307D81C9D833E0EC1ACBA710108D98 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Transform)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared)(___original0, ___parent1, method);
}
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_layer_m2F946916ACB41A59C46346F5243F2BAC235A36A6 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, int32_t ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>()
inline JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * GameObject_GetComponent_TisJointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9_m252380AB6FD1C8141DC8F53E11A51B974869A97D (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::set_JointType(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JointKinematicBody_set_JointType_m3516E003C2B57B01C0BE4A8FA0E60433C302188C_inline (JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::set_HandednessType(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JointKinematicBody_set_HandednessType_m38CFBD65828F4689C6D36D5242D2777BE00057EE_inline (JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFCF5F98D38F99DE7C831CBB9A1BAAAB148FC7D57 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, String_t* ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Collider>()
inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * GameObject_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m7CB95AA45111B8F2FD8968CBDF0CE3359F6B2E08 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Boolean UnityEngine.Rigidbody::get_isKinematic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rigidbody_get_isKinematic_m597B48C45021313B6C6C4B126E405EF566C5C80C (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_isKinematic_mCF74D680205544826F2DE2CAB929C9F25409A311 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F (RuntimeArray * ___array0, RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  ___fldHandle1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMixedRealityProfile__ctor_mF22E85943179AF29010F40443EAFE26A592F16D2 (BaseMixedRealityProfile_t9B92D8A7CB0AE5AF973870EDF7DE2BC12E5FA4E5 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Action`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody> Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::get_OnEnableAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_t6AC51F95C320504155E365235FB02570EBC11815 * JointKinematicBody_get_OnEnableAction_m114D8F284EDB0888779DDA16F169D0E540482D75_inline (JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>::Invoke(!0)
inline void Action_1_Invoke_m88EDE6DE5F03E54DAF7F492D8E81B46BF5AA260F (Action_1_t6AC51F95C320504155E365235FB02570EBC11815 * __this, JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6AC51F95C320504155E365235FB02570EBC11815 *, JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Action`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody> Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::get_OnDisableAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_t6AC51F95C320504155E365235FB02570EBC11815 * JointKinematicBody_get_OnDisableAction_m06170C7FD197A76F2F0866526EF057FBBFAC2C72_inline (JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>()
inline JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * Component_GetComponent_TisJointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9_m259B16608E7D146DF86E17A92D1620D3D8F5A5AB (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.Examples.PhysicsTriggerEventReadout::WriteText(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsTriggerEventReadout_WriteText_m34BD177DF80211D0FFD2B37778AD3DF102FDD401 (PhysicsTriggerEventReadout_t32B6FF61712D41B62A1EB6B91045ED904D557520 * __this, bool ___clear0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>::Contains(!0)
inline bool List_1_Contains_m9545BB4315A1F899798682C096D884E1FF23FD32 (List_1_t8B72AC0039307D81C9D833E0EC1ACBA710108D98 * __this, JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t8B72AC0039307D81C9D833E0EC1ACBA710108D98 *, JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 *, const RuntimeMethod*))List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>::Remove(!0)
inline bool List_1_Remove_mFBD8872A40AF066BDFED212C17C2F2135B0885E5 (List_1_t8B72AC0039307D81C9D833E0EC1ACBA710108D98 * __this, JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t8B72AC0039307D81C9D833E0EC1ACBA710108D98 *, JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 *, const RuntimeMethod*))List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared)(__this, ___item0, method);
}
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
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
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::.ctor(System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService__ctor_mEB45584DBA9416E1054E067EBBBAD7DEDDC9C2C0 (HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62 * __this, String_t* ___name0, uint32_t ___priority1, BaseMixedRealityProfile_t9B92D8A7CB0AE5AF973870EDF7DE2BC12E5FA4E5 * ___profile2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HandPhysicsService__ctor_mEB45584DBA9416E1054E067EBBBAD7DEDDC9C2C0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<JointKinematicBody> jointKinematicBodies = new List<JointKinematicBody>();
		List_1_t8B72AC0039307D81C9D833E0EC1ACBA710108D98 * L_0 = (List_1_t8B72AC0039307D81C9D833E0EC1ACBA710108D98 *)il2cpp_codegen_object_new(List_1_t8B72AC0039307D81C9D833E0EC1ACBA710108D98_il2cpp_TypeInfo_var);
		List_1__ctor_m18A274BB3EA15685C5052537C480B355218FBF12(L_0, /*hidden argument*/List_1__ctor_m18A274BB3EA15685C5052537C480B355218FBF12_RuntimeMethod_var);
		__this->set_jointKinematicBodies_15(L_0);
		// public HandPhysicsService(string name, uint priority, BaseMixedRealityProfile profile) : base(name, priority, profile)
		String_t* L_1 = ___name0;
		uint32_t L_2 = ___priority1;
		BaseMixedRealityProfile_t9B92D8A7CB0AE5AF973870EDF7DE2BC12E5FA4E5 * L_3 = ___profile2;
		BaseExtensionService__ctor_m07D09AF7C80DDA70230ADFDF9D7E10D6C03F0901(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		// handPhysicsServiceProfile = (HandPhysicsServiceProfile)profile;
		BaseMixedRealityProfile_t9B92D8A7CB0AE5AF973870EDF7DE2BC12E5FA4E5 * L_4 = ___profile2;
		__this->set_handPhysicsServiceProfile_6(((HandPhysicsServiceProfile_tEF03D15AFC38FC06DA510603A16ED58F220FF9A0 *)CastclassClass((RuntimeObject*)L_4, HandPhysicsServiceProfile_tEF03D15AFC38FC06DA510603A16ED58F220FF9A0_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::get_HandJointService()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HandPhysicsService_get_HandJointService_m19E75B05A8EC09D9F6EFB8DAA0495626A22F00E1 (HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HandPhysicsService_get_HandJointService_m19E75B05A8EC09D9F6EFB8DAA0495626A22F00E1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B4_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	{
		// private IMixedRealityHandJointService HandJointService => handJointService ??
		//     (CoreServices.InputSystem as IMixedRealityDataProviderAccess)?.GetDataProvider<IMixedRealityHandJointService>();
		RuntimeObject* L_0 = __this->get_handJointService_12();
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B4_0 = L_1;
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tDB76F6146407FDEA9A4479E5553ED32DC19AADBD_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = CoreServices_get_InputSystem_m734103F090144FE710940E31C6B3581D15572FB0(/*hidden argument*/NULL);
		RuntimeObject* L_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IMixedRealityDataProviderAccess_t374BBC423F74323FAAE54B45D01DD9D0AEDF1743_il2cpp_TypeInfo_var));
		G_B2_0 = L_3;
		if (L_3)
		{
			G_B3_0 = L_3;
			goto IL_001a;
		}
	}
	{
		return (RuntimeObject*)NULL;
	}

IL_001a:
	{
		NullCheck(G_B3_0);
		RuntimeObject* L_4 = GenericInterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(IMixedRealityDataProviderAccess_GetDataProvider_TisIMixedRealityHandJointService_t1A4574D9866B409E8F945AD8BA5B59A606378358_m37E4BAC0318C28974C6AF42E94AB042B8D65DEA1_RuntimeMethod_var, G_B3_0, (String_t*)NULL);
		G_B4_0 = L_4;
	}

IL_0020:
	{
		return G_B4_0;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::get_HandPhysicsServiceRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * HandPhysicsService_get_HandPhysicsServiceRoot_m086F367CEA0B0C6FAB4EFF62545E240C5C40FA97 (HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject HandPhysicsServiceRoot { get; private set; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_U3CHandPhysicsServiceRootU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::set_HandPhysicsServiceRoot(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_set_HandPhysicsServiceRoot_m00DBBD75E09651391842B3B31A423CD695AFA6F9 (HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method)
{
	{
		// public GameObject HandPhysicsServiceRoot { get; private set; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___value0;
		__this->set_U3CHandPhysicsServiceRootU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::get_HandPhysicsLayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HandPhysicsService_get_HandPhysicsLayer_mEFAE056D7B76560CBCAE14EF28C2E46EA62BB1CA (HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62 * __this, const RuntimeMethod* method)
{
	{
		// public int HandPhysicsLayer { get; set; }
		int32_t L_0 = __this->get_U3CHandPhysicsLayerU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::set_HandPhysicsLayer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_set_HandPhysicsLayer_m98EE92EE532568C53E5BC7AB7EADFA363C396DEE (HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int HandPhysicsLayer { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CHandPhysicsLayerU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::get_UsePalmKinematicBody()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandPhysicsService_get_UsePalmKinematicBody_m2C9E86A4634B5064FC6A2C5E4585A43B4596E7A4 (HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62 * __this, const RuntimeMethod* method)
{
	{
		// public bool UsePalmKinematicBody { get; set; }
		bool L_0 = __this->get_U3CUsePalmKinematicBodyU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::set_UsePalmKinematicBody(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_set_UsePalmKinematicBody_m203BFFC903442FA010A6D731B64F44FE79059A97 (HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool UsePalmKinematicBody { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CUsePalmKinematicBodyU3Ek__BackingField_9(L_0);
		return;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::get_FingerTipKinematicBodyPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * HandPhysicsService_get_FingerTipKinematicBodyPrefab_m6AFDE69EB8CCF80051BF57EAE423E1FB9B024723 (HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62 * __this, const RuntimeMethod* method)
{
	{
		// get { return fingerTipKinematicBodyPrefab; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_fingerTipKinematicBodyPrefab_10();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::set_FingerTipKinematicBodyPrefab(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_set_FingerTipKinematicBodyPrefab_m4762E97607032A149B03FA0BFE3D3A88995102BC (HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HandPhysicsService_set_FingerTipKinematicBodyPrefab_m4762E97607032A149B03FA0BFE3D3A88995102BC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// CreateKinematicBodies();
		HandPhysicsService_CreateKinematicBodies_m71B95DC19BF627238DBF290B955240069493700A(__this, /*hidden argument*/NULL);
		// }
		goto IL_0017;
	}

IL_0011:
	{
		// DestroyKinematicBodies();
		HandPhysicsService_DestroyKinematicBodies_m78B3FF710F704EEA9720BB0ACEF1F6DB2D46C4EC(__this, /*hidden argument*/NULL);
	}

IL_0017:
	{
		// fingerTipKinematicBodyPrefab = value;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = ___value0;
		__this->set_fingerTipKinematicBodyPrefab_10(L_2);
		// }
		return;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::get_PalmKinematicBodyPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * HandPhysicsService_get_PalmKinematicBodyPrefab_m6C3614EB8042C25C4DBE6EE997EABF4D6B49BC6D (HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62 * __this, const RuntimeMethod* method)
{
	{
		// get { return palmKinematicBodyPrefab; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_palmKinematicBodyPrefab_11();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::set_PalmKinematicBodyPrefab(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_set_PalmKinematicBodyPrefab_m2BD668E395A5C52BCCCDAC723F0EB270496495FA (HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HandPhysicsService_set_PalmKinematicBodyPrefab_m2BD668E395A5C52BCCCDAC723F0EB270496495FA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(value != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// CreateKinematicBodies();
		HandPhysicsService_CreateKinematicBodies_m71B95DC19BF627238DBF290B955240069493700A(__this, /*hidden argument*/NULL);
		// }
		goto IL_0017;
	}

IL_0011:
	{
		// DestroyKinematicBodies();
		HandPhysicsService_DestroyKinematicBodies_m78B3FF710F704EEA9720BB0ACEF1F6DB2D46C4EC(__this, /*hidden argument*/NULL);
	}

IL_0017:
	{
		// palmKinematicBodyPrefab = value;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = ___value0;
		__this->set_palmKinematicBodyPrefab_11(L_2);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_Initialize_m02C09ECD8CAE31EA7611A059A699799A24CB7EC4 (HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62 * __this, const RuntimeMethod* method)
{
	{
		// HandPhysicsLayer = handPhysicsServiceProfile.HandPhysicsLayer;
		HandPhysicsServiceProfile_tEF03D15AFC38FC06DA510603A16ED58F220FF9A0 * L_0 = __this->get_handPhysicsServiceProfile_6();
		NullCheck(L_0);
		int32_t L_1 = HandPhysicsServiceProfile_get_HandPhysicsLayer_m89795DCC8B876FEC586FF036D41016EAD80ACBDA_inline(L_0, /*hidden argument*/NULL);
		HandPhysicsService_set_HandPhysicsLayer_m98EE92EE532568C53E5BC7AB7EADFA363C396DEE_inline(__this, L_1, /*hidden argument*/NULL);
		// UsePalmKinematicBody = handPhysicsServiceProfile.UsePalmKinematicBody;
		HandPhysicsServiceProfile_tEF03D15AFC38FC06DA510603A16ED58F220FF9A0 * L_2 = __this->get_handPhysicsServiceProfile_6();
		NullCheck(L_2);
		bool L_3 = HandPhysicsServiceProfile_get_UsePalmKinematicBody_mA13BAE8C828FF8FAED28DC413C5815D4F4D5ADE9_inline(L_2, /*hidden argument*/NULL);
		HandPhysicsService_set_UsePalmKinematicBody_m203BFFC903442FA010A6D731B64F44FE79059A97_inline(__this, L_3, /*hidden argument*/NULL);
		// FingerTipKinematicBodyPrefab = handPhysicsServiceProfile.FingerTipKinematicBodyPrefab;
		HandPhysicsServiceProfile_tEF03D15AFC38FC06DA510603A16ED58F220FF9A0 * L_4 = __this->get_handPhysicsServiceProfile_6();
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = HandPhysicsServiceProfile_get_FingerTipKinematicBodyPrefab_mE887BD678EE33EFF346DA8602398405C616F6DF1_inline(L_4, /*hidden argument*/NULL);
		HandPhysicsService_set_FingerTipKinematicBodyPrefab_m4762E97607032A149B03FA0BFE3D3A88995102BC(__this, L_5, /*hidden argument*/NULL);
		// PalmKinematicBodyPrefab = handPhysicsServiceProfile.PalmKinematicBodyPrefab;
		HandPhysicsServiceProfile_tEF03D15AFC38FC06DA510603A16ED58F220FF9A0 * L_6 = __this->get_handPhysicsServiceProfile_6();
		NullCheck(L_6);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = HandPhysicsServiceProfile_get_PalmKinematicBodyPrefab_m190E84CAEB93C875912A73CAFF84953BE56D11D0_inline(L_6, /*hidden argument*/NULL);
		HandPhysicsService_set_PalmKinematicBodyPrefab_m2BD668E395A5C52BCCCDAC723F0EB270496495FA(__this, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_Enable_m8CB48E356DE7BF4866FD7CE4703B0BDA69903DD5 (HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HandPhysicsService_Enable_m8CB48E356DE7BF4866FD7CE4703B0BDA69903DD5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// HandPhysicsServiceRoot = new GameObject("Hand Physics Service");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_0, _stringLiteral1D091D04287D4679285A2E663193C6F6B9AFDEAA, /*hidden argument*/NULL);
		HandPhysicsService_set_HandPhysicsServiceRoot_m00DBBD75E09651391842B3B31A423CD695AFA6F9_inline(__this, L_0, /*hidden argument*/NULL);
		// CreateKinematicBodies();
		HandPhysicsService_CreateKinematicBodies_m71B95DC19BF627238DBF290B955240069493700A(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_Disable_m2648DAAE586BB98E5632B06E95659D6BCA0F4B11 (HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HandPhysicsService_Disable_m2648DAAE586BB98E5632B06E95659D6BCA0F4B11_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (HandPhysicsServiceRoot != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = HandPhysicsService_get_HandPhysicsServiceRoot_m086F367CEA0B0C6FAB4EFF62545E240C5C40FA97_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// UnityEngine.Object.Destroy(HandPhysicsServiceRoot);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = HandPhysicsService_get_HandPhysicsServiceRoot_m086F367CEA0B0C6FAB4EFF62545E240C5C40FA97_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_2, /*hidden argument*/NULL);
		// HandPhysicsServiceRoot = null;
		HandPhysicsService_set_HandPhysicsServiceRoot_m00DBBD75E09651391842B3B31A423CD695AFA6F9_inline(__this, (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL, /*hidden argument*/NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_Update_m553E923BDDD77C230A55CF5BB5FFC250FC42EFFC (HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HandPhysicsService_Update_m553E923BDDD77C230A55CF5BB5FFC250FC42EFFC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tB115EEEF330DD55DA3A4229A5B724220B18DB6AF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * G_B5_0 = NULL;
	JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * G_B5_1 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * G_B4_0 = NULL;
	JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * G_B4_1 = NULL;
	{
		// foreach (JointKinematicBody jointKinematicBody in jointKinematicBodies)
		List_1_t8B72AC0039307D81C9D833E0EC1ACBA710108D98 * L_0 = __this->get_jointKinematicBodies_15();
		NullCheck(L_0);
		Enumerator_tB115EEEF330DD55DA3A4229A5B724220B18DB6AF  L_1 = List_1_GetEnumerator_mB9F3ABE5B0A6074809806B58F6DBCCAD80409B29(L_0, /*hidden argument*/List_1_GetEnumerator_mB9F3ABE5B0A6074809806B58F6DBCCAD80409B29_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_006b;
		}

IL_000e:
		{
			// foreach (JointKinematicBody jointKinematicBody in jointKinematicBodies)
			JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * L_2 = Enumerator_get_Current_m54D14F2F7C8346665E98430B08C22B06D9DE5056_inline((Enumerator_tB115EEEF330DD55DA3A4229A5B724220B18DB6AF *)(&V_0), /*hidden argument*/Enumerator_get_Current_m54D14F2F7C8346665E98430B08C22B06D9DE5056_RuntimeMethod_var);
			V_1 = L_2;
			// if (HandJointService.IsHandTracked(jointKinematicBody.HandednessType))
			RuntimeObject* L_3 = HandPhysicsService_get_HandJointService_m19E75B05A8EC09D9F6EFB8DAA0495626A22F00E1(__this, /*hidden argument*/NULL);
			JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * L_4 = V_1;
			NullCheck(L_4);
			uint8_t L_5 = JointKinematicBody_get_HandednessType_m2AF1811513D14A84D3A8C465F7CE776A6419051A_inline(L_4, /*hidden argument*/NULL);
			NullCheck(L_3);
			bool L_6 = InterfaceFuncInvoker1< bool, uint8_t >::Invoke(1 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService::IsHandTracked(Microsoft.MixedReality.Toolkit.Utilities.Handedness) */, IMixedRealityHandJointService_t1A4574D9866B409E8F945AD8BA5B59A606378358_il2cpp_TypeInfo_var, L_3, L_5);
			if (!L_6)
			{
				goto IL_0064;
			}
		}

IL_0029:
		{
			// jointKinematicBody.Joint = jointKinematicBody.Joint ?? HandJointService.RequestJointTransform(jointKinematicBody.JointType, jointKinematicBody.HandednessType);
			JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * L_7 = V_1;
			JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * L_8 = V_1;
			NullCheck(L_8);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9 = JointKinematicBody_get_Joint_m2A37EB193494714DB3FB3FE78E901BC70A394666_inline(L_8, /*hidden argument*/NULL);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10 = L_9;
			G_B4_0 = L_10;
			G_B4_1 = L_7;
			if (L_10)
			{
				G_B5_0 = L_10;
				G_B5_1 = L_7;
				goto IL_004b;
			}
		}

IL_0033:
		{
			RuntimeObject* L_11 = HandPhysicsService_get_HandJointService_m19E75B05A8EC09D9F6EFB8DAA0495626A22F00E1(__this, /*hidden argument*/NULL);
			JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * L_12 = V_1;
			NullCheck(L_12);
			int32_t L_13 = JointKinematicBody_get_JointType_m286B2AFD5E3B808148B70689947E2BE52546C772_inline(L_12, /*hidden argument*/NULL);
			JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * L_14 = V_1;
			NullCheck(L_14);
			uint8_t L_15 = JointKinematicBody_get_HandednessType_m2AF1811513D14A84D3A8C465F7CE776A6419051A_inline(L_14, /*hidden argument*/NULL);
			NullCheck(L_11);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16 = InterfaceFuncInvoker2< Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, int32_t, uint8_t >::Invoke(0 /* UnityEngine.Transform Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService::RequestJointTransform(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.Handedness) */, IMixedRealityHandJointService_t1A4574D9866B409E8F945AD8BA5B59A606378358_il2cpp_TypeInfo_var, L_11, L_13, L_15);
			G_B5_0 = L_16;
			G_B5_1 = G_B4_1;
		}

IL_004b:
		{
			NullCheck(G_B5_1);
			JointKinematicBody_set_Joint_mFB41B1B610BB6C5856BBA0EAB4BECCEB9F55433B_inline(G_B5_1, G_B5_0, /*hidden argument*/NULL);
			// jointKinematicBody.UpdateState(jointKinematicBody.Joint != null);
			JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * L_17 = V_1;
			JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * L_18 = V_1;
			NullCheck(L_18);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19 = JointKinematicBody_get_Joint_m2A37EB193494714DB3FB3FE78E901BC70A394666_inline(L_18, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_20 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_19, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			NullCheck(L_17);
			JointKinematicBody_UpdateState_m39A8907A401AED69673296BD75779205413152CC(L_17, L_20, /*hidden argument*/NULL);
			// }
			goto IL_006b;
		}

IL_0064:
		{
			// jointKinematicBody.UpdateState(false);
			JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * L_21 = V_1;
			NullCheck(L_21);
			JointKinematicBody_UpdateState_m39A8907A401AED69673296BD75779205413152CC(L_21, (bool)0, /*hidden argument*/NULL);
		}

IL_006b:
		{
			// foreach (JointKinematicBody jointKinematicBody in jointKinematicBodies)
			bool L_22 = Enumerator_MoveNext_mD0D4E50099395577EB6FCA2E432D34B6A34D9767((Enumerator_tB115EEEF330DD55DA3A4229A5B724220B18DB6AF *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mD0D4E50099395577EB6FCA2E432D34B6A34D9767_RuntimeMethod_var);
			if (L_22)
			{
				goto IL_000e;
			}
		}

IL_0074:
		{
			IL2CPP_LEAVE(0x84, FINALLY_0076);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0076;
	}

FINALLY_0076:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mFBD9154FF0F2564918C71E2357553EEB8F46F8B5((Enumerator_tB115EEEF330DD55DA3A4229A5B724220B18DB6AF *)(&V_0), /*hidden argument*/Enumerator_Dispose_mFBD9154FF0F2564918C71E2357553EEB8F46F8B5_RuntimeMethod_var);
		IL2CPP_END_FINALLY(118)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(118)
	{
		IL2CPP_JUMP_TBL(0x84, IL_0084)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0084:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::CreateKinematicBodies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_CreateKinematicBodies_m71B95DC19BF627238DBF290B955240069493700A (HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HandPhysicsService_CreateKinematicBodies_m71B95DC19BF627238DBF290B955240069493700A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * V_2 = NULL;
	JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * V_3 = NULL;
	{
		// DestroyKinematicBodies();
		HandPhysicsService_DestroyKinematicBodies_m78B3FF710F704EEA9720BB0ACEF1F6DB2D46C4EC(__this, /*hidden argument*/NULL);
		// for (int i = 0; i < handednessTypes.Length; ++i)
		V_0 = 0;
		goto IL_00b5;
	}

IL_000d:
	{
		// for (int j = 0; j < fingerTipTypes.Length; ++j)
		V_1 = 0;
		goto IL_005d;
	}

IL_0011:
	{
		// if(FingerTipKinematicBodyPrefab == null) { continue; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = HandPhysicsService_get_FingerTipKinematicBodyPrefab_m6AFDE69EB8CCF80051BF57EAE423E1FB9B024723_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0059;
		}
	}
	{
		// if (TryCreateJointKinematicBody(FingerTipKinematicBodyPrefab, HandPhysicsLayer, handednessTypes[i], fingerTipTypes[j], HandPhysicsServiceRoot.transform, out JointKinematicBody jointKinematicBody))
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = HandPhysicsService_get_FingerTipKinematicBodyPrefab_m6AFDE69EB8CCF80051BF57EAE423E1FB9B024723_inline(__this, /*hidden argument*/NULL);
		int32_t L_3 = HandPhysicsService_get_HandPhysicsLayer_mEFAE056D7B76560CBCAE14EF28C2E46EA62BB1CA_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62_il2cpp_TypeInfo_var);
		HandednessU5BU5D_t9007C0EC1534ED9D4EDC49F0756602B961E24B1D* L_4 = ((HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62_StaticFields*)il2cpp_codegen_static_fields_for(HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62_il2cpp_TypeInfo_var))->get_handednessTypes_13();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint8_t L_7 = (uint8_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		TrackedHandJointU5BU5D_t211452F885C4210C190EF8B95FCB589209721A34* L_8 = ((HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62_StaticFields*)il2cpp_codegen_static_fields_for(HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62_il2cpp_TypeInfo_var))->get_fingerTipTypes_14();
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		int32_t L_11 = (int32_t)(L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = HandPhysicsService_get_HandPhysicsServiceRoot_m086F367CEA0B0C6FAB4EFF62545E240C5C40FA97_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_12, /*hidden argument*/NULL);
		bool L_14 = HandPhysicsService_TryCreateJointKinematicBody_m42A1FC76D98BE64D68CBE146356DC89752CC1924(L_2, L_3, L_7, L_11, L_13, (JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 **)(&V_2), /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0059;
		}
	}
	{
		// jointKinematicBodies.Add(jointKinematicBody);
		List_1_t8B72AC0039307D81C9D833E0EC1ACBA710108D98 * L_15 = __this->get_jointKinematicBodies_15();
		JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * L_16 = V_2;
		NullCheck(L_15);
		List_1_Add_mFD36DB6E94EEBC7DFCA6630891B16DA76BB4A986(L_15, L_16, /*hidden argument*/List_1_Add_mFD36DB6E94EEBC7DFCA6630891B16DA76BB4A986_RuntimeMethod_var);
	}

IL_0059:
	{
		// for (int j = 0; j < fingerTipTypes.Length; ++j)
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_005d:
	{
		// for (int j = 0; j < fingerTipTypes.Length; ++j)
		int32_t L_18 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62_il2cpp_TypeInfo_var);
		TrackedHandJointU5BU5D_t211452F885C4210C190EF8B95FCB589209721A34* L_19 = ((HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62_StaticFields*)il2cpp_codegen_static_fields_for(HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62_il2cpp_TypeInfo_var))->get_fingerTipTypes_14();
		NullCheck(L_19);
		if ((((int32_t)L_18) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))))))
		{
			goto IL_0011;
		}
	}
	{
		// if (UsePalmKinematicBody)
		bool L_20 = HandPhysicsService_get_UsePalmKinematicBody_m2C9E86A4634B5064FC6A2C5E4585A43B4596E7A4_inline(__this, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00b1;
		}
	}
	{
		// if (PalmKinematicBodyPrefab == null) { continue; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = HandPhysicsService_get_PalmKinematicBodyPrefab_m6C3614EB8042C25C4DBE6EE997EABF4D6B49BC6D_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_22 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_21, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_22)
		{
			goto IL_00b1;
		}
	}
	{
		// if (TryCreateJointKinematicBody(PalmKinematicBodyPrefab, HandPhysicsLayer, handednessTypes[i], TrackedHandJoint.Palm, HandPhysicsServiceRoot.transform, out JointKinematicBody jointKinematicBody))
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = HandPhysicsService_get_PalmKinematicBodyPrefab_m6C3614EB8042C25C4DBE6EE997EABF4D6B49BC6D_inline(__this, /*hidden argument*/NULL);
		int32_t L_24 = HandPhysicsService_get_HandPhysicsLayer_mEFAE056D7B76560CBCAE14EF28C2E46EA62BB1CA_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62_il2cpp_TypeInfo_var);
		HandednessU5BU5D_t9007C0EC1534ED9D4EDC49F0756602B961E24B1D* L_25 = ((HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62_StaticFields*)il2cpp_codegen_static_fields_for(HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62_il2cpp_TypeInfo_var))->get_handednessTypes_13();
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		uint8_t L_28 = (uint8_t)(L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29 = HandPhysicsService_get_HandPhysicsServiceRoot_m086F367CEA0B0C6FAB4EFF62545E240C5C40FA97_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_29);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_29, /*hidden argument*/NULL);
		bool L_31 = HandPhysicsService_TryCreateJointKinematicBody_m42A1FC76D98BE64D68CBE146356DC89752CC1924(L_23, L_24, L_28, 2, L_30, (JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 **)(&V_3), /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_00b1;
		}
	}
	{
		// jointKinematicBodies.Add(jointKinematicBody);
		List_1_t8B72AC0039307D81C9D833E0EC1ACBA710108D98 * L_32 = __this->get_jointKinematicBodies_15();
		JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * L_33 = V_3;
		NullCheck(L_32);
		List_1_Add_mFD36DB6E94EEBC7DFCA6630891B16DA76BB4A986(L_32, L_33, /*hidden argument*/List_1_Add_mFD36DB6E94EEBC7DFCA6630891B16DA76BB4A986_RuntimeMethod_var);
	}

IL_00b1:
	{
		// for (int i = 0; i < handednessTypes.Length; ++i)
		int32_t L_34 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
	}

IL_00b5:
	{
		// for (int i = 0; i < handednessTypes.Length; ++i)
		int32_t L_35 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62_il2cpp_TypeInfo_var);
		HandednessU5BU5D_t9007C0EC1534ED9D4EDC49F0756602B961E24B1D* L_36 = ((HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62_StaticFields*)il2cpp_codegen_static_fields_for(HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62_il2cpp_TypeInfo_var))->get_handednessTypes_13();
		NullCheck(L_36);
		if ((((int32_t)L_35) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_36)->max_length)))))))
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::DestroyKinematicBodies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_DestroyKinematicBodies_m78B3FF710F704EEA9720BB0ACEF1F6DB2D46C4EC (HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HandPhysicsService_DestroyKinematicBodies_m78B3FF710F704EEA9720BB0ACEF1F6DB2D46C4EC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tB115EEEF330DD55DA3A4229A5B724220B18DB6AF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if(jointKinematicBodies.Count > 0)
		List_1_t8B72AC0039307D81C9D833E0EC1ACBA710108D98 * L_0 = __this->get_jointKinematicBodies_15();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_mFD88A3BCD23E0A70F86D152FE45033C91809F026_inline(L_0, /*hidden argument*/List_1_get_Count_mFD88A3BCD23E0A70F86D152FE45033C91809F026_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		// foreach (JointKinematicBody jointKinematicBody in jointKinematicBodies)
		List_1_t8B72AC0039307D81C9D833E0EC1ACBA710108D98 * L_2 = __this->get_jointKinematicBodies_15();
		NullCheck(L_2);
		Enumerator_tB115EEEF330DD55DA3A4229A5B724220B18DB6AF  L_3 = List_1_GetEnumerator_mB9F3ABE5B0A6074809806B58F6DBCCAD80409B29(L_2, /*hidden argument*/List_1_GetEnumerator_mB9F3ABE5B0A6074809806B58F6DBCCAD80409B29_RuntimeMethod_var);
		V_0 = L_3;
	}

IL_001a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002d;
		}

IL_001c:
		{
			// foreach (JointKinematicBody jointKinematicBody in jointKinematicBodies)
			JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * L_4 = Enumerator_get_Current_m54D14F2F7C8346665E98430B08C22B06D9DE5056_inline((Enumerator_tB115EEEF330DD55DA3A4229A5B724220B18DB6AF *)(&V_0), /*hidden argument*/Enumerator_get_Current_m54D14F2F7C8346665E98430B08C22B06D9DE5056_RuntimeMethod_var);
			// UnityEngine.Object.Destroy(jointKinematicBody.gameObject);
			NullCheck(L_4);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_5, /*hidden argument*/NULL);
		}

IL_002d:
		{
			// foreach (JointKinematicBody jointKinematicBody in jointKinematicBodies)
			bool L_6 = Enumerator_MoveNext_mD0D4E50099395577EB6FCA2E432D34B6A34D9767((Enumerator_tB115EEEF330DD55DA3A4229A5B724220B18DB6AF *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mD0D4E50099395577EB6FCA2E432D34B6A34D9767_RuntimeMethod_var);
			if (L_6)
			{
				goto IL_001c;
			}
		}

IL_0036:
		{
			IL2CPP_LEAVE(0x46, FINALLY_0038);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0038;
	}

FINALLY_0038:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mFBD9154FF0F2564918C71E2357553EEB8F46F8B5((Enumerator_tB115EEEF330DD55DA3A4229A5B724220B18DB6AF *)(&V_0), /*hidden argument*/Enumerator_Dispose_mFBD9154FF0F2564918C71E2357553EEB8F46F8B5_RuntimeMethod_var);
		IL2CPP_END_FINALLY(56)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(56)
	{
		IL2CPP_JUMP_TBL(0x46, IL_0046)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::TryCreateJointKinematicBody(UnityEngine.GameObject,System.Int32,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,UnityEngine.Transform,Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandPhysicsService_TryCreateJointKinematicBody_m42A1FC76D98BE64D68CBE146356DC89752CC1924 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___rigidBodyPrefab0, int32_t ___layer1, uint8_t ___handednessType2, int32_t ___jointType3, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent4, JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 ** ___jointKinematicBody5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HandPhysicsService_TryCreateJointKinematicBody_m42A1FC76D98BE64D68CBE146356DC89752CC1924_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * V_1 = NULL;
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * V_2 = NULL;
	{
		// jointKinematicBody = null;
		JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 ** L_0 = ___jointKinematicBody5;
		*((RuntimeObject **)L_0) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_0, (void*)(RuntimeObject *)NULL);
		// GameObject currentGameObject = GameObject.Instantiate(rigidBodyPrefab, parent);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = ___rigidBodyPrefab0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = ___parent4;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8(L_1, L_2, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		V_0 = L_3;
		// currentGameObject.layer = layer;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = V_0;
		int32_t L_5 = ___layer1;
		NullCheck(L_4);
		GameObject_set_layer_m2F946916ACB41A59C46346F5243F2BAC235A36A6(L_4, L_5, /*hidden argument*/NULL);
		// JointKinematicBody currentJoint = currentGameObject.GetComponent<JointKinematicBody>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = V_0;
		NullCheck(L_6);
		JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * L_7 = GameObject_GetComponent_TisJointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9_m252380AB6FD1C8141DC8F53E11A51B974869A97D(L_6, /*hidden argument*/GameObject_GetComponent_TisJointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9_m252380AB6FD1C8141DC8F53E11A51B974869A97D_RuntimeMethod_var);
		V_1 = L_7;
		// if (currentJoint == null)
		JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * L_8 = V_1;
		bool L_9 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_8, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0036;
		}
	}
	{
		// Debug.LogError("The HandPhysicsService assumes the FingerTipKinematicBodyPrefab has a JointKinematicBody component.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralDA498934C25635BF965454E7B0EFC76A87F36A1B, /*hidden argument*/NULL);
		// UnityEngine.Object.Destroy(currentGameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_10, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_0036:
	{
		// currentJoint.JointType = jointType;
		JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * L_11 = V_1;
		int32_t L_12 = ___jointType3;
		NullCheck(L_11);
		JointKinematicBody_set_JointType_m3516E003C2B57B01C0BE4A8FA0E60433C302188C_inline(L_11, L_12, /*hidden argument*/NULL);
		// currentJoint.HandednessType = handednessType;
		JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * L_13 = V_1;
		uint8_t L_14 = ___handednessType2;
		NullCheck(L_13);
		JointKinematicBody_set_HandednessType_m38CFBD65828F4689C6D36D5242D2777BE00057EE_inline(L_13, L_14, /*hidden argument*/NULL);
		// currentGameObject.name = handednessType + " " + jointType;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = V_0;
		uint8_t L_16 = ___handednessType2;
		uint8_t L_17 = L_16;
		RuntimeObject * L_18 = Box(Handedness_t2A8F6DF331DF5C083E9C1E04C62AF9075B3A878C_il2cpp_TypeInfo_var, &L_17);
		int32_t L_19 = ___jointType3;
		int32_t L_20 = L_19;
		RuntimeObject * L_21 = Box(TrackedHandJoint_t4DB5CFA2EE94BCBB8866FF22332E0BFD48033137_il2cpp_TypeInfo_var, &L_20);
		String_t* L_22 = String_Concat_mFCF5F98D38F99DE7C831CBB9A1BAAAB148FC7D57(L_18, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_21, /*hidden argument*/NULL);
		NullCheck(L_15);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_15, L_22, /*hidden argument*/NULL);
		// if (currentGameObject.GetComponent<Collider>() == null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = V_0;
		NullCheck(L_23);
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_24 = GameObject_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m7CB95AA45111B8F2FD8968CBDF0CE3359F6B2E08(L_23, /*hidden argument*/GameObject_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m7CB95AA45111B8F2FD8968CBDF0CE3359F6B2E08_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_25 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_24, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_0080;
		}
	}
	{
		// Debug.LogError("The HandPhysicsService assumes the FingerTipKinematicBodyPrefab has a Collder component.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral1BF3851D2FF976D593FAA31A5A6B4F0460019994, /*hidden argument*/NULL);
		// UnityEngine.Object.Destroy(currentGameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_26, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_0080:
	{
		// Rigidbody rigidbody = currentGameObject.GetComponent<Rigidbody>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27 = V_0;
		NullCheck(L_27);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_28 = GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354(L_27, /*hidden argument*/GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354_RuntimeMethod_var);
		V_2 = L_28;
		// if (rigidbody == null)
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_29 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_30 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_29, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_00a2;
		}
	}
	{
		// Debug.LogError("The HandPhysicsService assumes the FingerTipKinematicBodyPrefab has a Rigidbody component.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralE32213B913E2692579F46DFC5F32A1E135F596B6, /*hidden argument*/NULL);
		// UnityEngine.Object.Destroy(currentGameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_31, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_00a2:
	{
		// if (!rigidbody.isKinematic)
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_32 = V_2;
		NullCheck(L_32);
		bool L_33 = Rigidbody_get_isKinematic_m597B48C45021313B6C6C4B126E405EF566C5C80C(L_32, /*hidden argument*/NULL);
		if (L_33)
		{
			goto IL_00bb;
		}
	}
	{
		// Debug.LogWarning("The HandPhysicsService FingerTipKinematicBodyPrefab rigidbody should be marked as kinematic, making kinematic.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral2CA525E745821399EEF6F1D2733A285A82160939, /*hidden argument*/NULL);
		// rigidbody.isKinematic = true;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_34 = V_2;
		NullCheck(L_34);
		Rigidbody_set_isKinematic_mCF74D680205544826F2DE2CAB929C9F25409A311(L_34, (bool)1, /*hidden argument*/NULL);
	}

IL_00bb:
	{
		// jointKinematicBody = currentJoint;
		JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 ** L_35 = ___jointKinematicBody5;
		JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * L_36 = V_1;
		*((RuntimeObject **)L_35) = (RuntimeObject *)L_36;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_35, (void*)(RuntimeObject *)L_36);
		// return true;
		return (bool)1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService__cctor_m7608CC3393AA81DBF8E09014C725D70A34E1143D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HandPhysicsService__cctor_m7608CC3393AA81DBF8E09014C725D70A34E1143D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly Handedness[] handednessTypes = new Handedness[]
		// {
		//     Handedness.Left,
		//     Handedness.Right
		// };
		HandednessU5BU5D_t9007C0EC1534ED9D4EDC49F0756602B961E24B1D* L_0 = (HandednessU5BU5D_t9007C0EC1534ED9D4EDC49F0756602B961E24B1D*)(HandednessU5BU5D_t9007C0EC1534ED9D4EDC49F0756602B961E24B1D*)SZArrayNew(HandednessU5BU5D_t9007C0EC1534ED9D4EDC49F0756602B961E24B1D_il2cpp_TypeInfo_var, (uint32_t)2);
		HandednessU5BU5D_t9007C0EC1534ED9D4EDC49F0756602B961E24B1D* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)1);
		HandednessU5BU5D_t9007C0EC1534ED9D4EDC49F0756602B961E24B1D* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)2);
		((HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62_StaticFields*)il2cpp_codegen_static_fields_for(HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62_il2cpp_TypeInfo_var))->set_handednessTypes_13(L_2);
		// private static readonly TrackedHandJoint[] fingerTipTypes = new TrackedHandJoint[]
		// {
		//     TrackedHandJoint.ThumbTip,
		//     TrackedHandJoint.IndexTip,
		//     TrackedHandJoint.MiddleTip,
		//     TrackedHandJoint.RingTip,
		//     TrackedHandJoint.PinkyTip
		// };
		TrackedHandJointU5BU5D_t211452F885C4210C190EF8B95FCB589209721A34* L_3 = (TrackedHandJointU5BU5D_t211452F885C4210C190EF8B95FCB589209721A34*)(TrackedHandJointU5BU5D_t211452F885C4210C190EF8B95FCB589209721A34*)SZArrayNew(TrackedHandJointU5BU5D_t211452F885C4210C190EF8B95FCB589209721A34_il2cpp_TypeInfo_var, (uint32_t)5);
		TrackedHandJointU5BU5D_t211452F885C4210C190EF8B95FCB589209721A34* L_4 = L_3;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t7EA2C0293A35DAF92E0AE2E7D247F1FBB62AD7D5____E38A34258C42BD75BCA0E2465D0A82E4DDB75DEE_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_4, L_5, /*hidden argument*/NULL);
		((HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62_StaticFields*)il2cpp_codegen_static_fields_for(HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62_il2cpp_TypeInfo_var))->set_fingerTipTypes_14(L_4);
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
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile::get_UsePalmKinematicBody()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandPhysicsServiceProfile_get_UsePalmKinematicBody_mA13BAE8C828FF8FAED28DC413C5815D4F4D5ADE9 (HandPhysicsServiceProfile_tEF03D15AFC38FC06DA510603A16ED58F220FF9A0 * __this, const RuntimeMethod* method)
{
	{
		// public bool UsePalmKinematicBody => usePalmKinematicBody;
		bool L_0 = __this->get_usePalmKinematicBody_7();
		return L_0;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile::get_FingerTipKinematicBodyPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * HandPhysicsServiceProfile_get_FingerTipKinematicBodyPrefab_mE887BD678EE33EFF346DA8602398405C616F6DF1 (HandPhysicsServiceProfile_tEF03D15AFC38FC06DA510603A16ED58F220FF9A0 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject FingerTipKinematicBodyPrefab => fingerTipKinematicBodyPrefab;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_fingerTipKinematicBodyPrefab_6();
		return L_0;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile::get_PalmKinematicBodyPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * HandPhysicsServiceProfile_get_PalmKinematicBodyPrefab_m190E84CAEB93C875912A73CAFF84953BE56D11D0 (HandPhysicsServiceProfile_tEF03D15AFC38FC06DA510603A16ED58F220FF9A0 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject PalmKinematicBodyPrefab => palmKinematicBodyPrefab;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_palmKinematicBodyPrefab_8();
		return L_0;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile::get_HandPhysicsLayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HandPhysicsServiceProfile_get_HandPhysicsLayer_m89795DCC8B876FEC586FF036D41016EAD80ACBDA (HandPhysicsServiceProfile_tEF03D15AFC38FC06DA510603A16ED58F220FF9A0 * __this, const RuntimeMethod* method)
{
	{
		// public int HandPhysicsLayer => handPhysicsLayer;
		int32_t L_0 = __this->get_handPhysicsLayer_5();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsServiceProfile__ctor_m7E9667E539008902CEEB2CA1E9CFA7103670807A (HandPhysicsServiceProfile_tEF03D15AFC38FC06DA510603A16ED58F220FF9A0 * __this, const RuntimeMethod* method)
{
	{
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
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::get_Joint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * JointKinematicBody_get_Joint_m2A37EB193494714DB3FB3FE78E901BC70A394666 (JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * __this, const RuntimeMethod* method)
{
	{
		// public Transform Joint { get; set; }
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_U3CJointU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::set_Joint(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointKinematicBody_set_Joint_mFB41B1B610BB6C5856BBA0EAB4BECCEB9F55433B (JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method)
{
	{
		// public Transform Joint { get; set; }
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___value0;
		__this->set_U3CJointU3Ek__BackingField_4(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::get_HandednessType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t JointKinematicBody_get_HandednessType_m2AF1811513D14A84D3A8C465F7CE776A6419051A (JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * __this, const RuntimeMethod* method)
{
	{
		// public Handedness HandednessType { get; set; }
		uint8_t L_0 = __this->get_U3CHandednessTypeU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::set_HandednessType(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointKinematicBody_set_HandednessType_m38CFBD65828F4689C6D36D5242D2777BE00057EE (JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		// public Handedness HandednessType { get; set; }
		uint8_t L_0 = ___value0;
		__this->set_U3CHandednessTypeU3Ek__BackingField_5(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::get_JointType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JointKinematicBody_get_JointType_m286B2AFD5E3B808148B70689947E2BE52546C772 (JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * __this, const RuntimeMethod* method)
{
	{
		// public TrackedHandJoint JointType { get; set; }
		int32_t L_0 = __this->get_U3CJointTypeU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::set_JointType(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointKinematicBody_set_JointType_m3516E003C2B57B01C0BE4A8FA0E60433C302188C (JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public TrackedHandJoint JointType { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CJointTypeU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Action`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody> Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::get_OnEnableAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_t6AC51F95C320504155E365235FB02570EBC11815 * JointKinematicBody_get_OnEnableAction_m114D8F284EDB0888779DDA16F169D0E540482D75 (JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * __this, const RuntimeMethod* method)
{
	{
		// public Action<JointKinematicBody> OnEnableAction { get; set; }
		Action_1_t6AC51F95C320504155E365235FB02570EBC11815 * L_0 = __this->get_U3COnEnableActionU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::set_OnEnableAction(System.Action`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointKinematicBody_set_OnEnableAction_m91A3CE7FD5303A299A89A3DC637A3C644134B7C7 (JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * __this, Action_1_t6AC51F95C320504155E365235FB02570EBC11815 * ___value0, const RuntimeMethod* method)
{
	{
		// public Action<JointKinematicBody> OnEnableAction { get; set; }
		Action_1_t6AC51F95C320504155E365235FB02570EBC11815 * L_0 = ___value0;
		__this->set_U3COnEnableActionU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Action`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody> Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::get_OnDisableAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_t6AC51F95C320504155E365235FB02570EBC11815 * JointKinematicBody_get_OnDisableAction_m06170C7FD197A76F2F0866526EF057FBBFAC2C72 (JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * __this, const RuntimeMethod* method)
{
	{
		// public Action<JointKinematicBody> OnDisableAction { get; set; }
		Action_1_t6AC51F95C320504155E365235FB02570EBC11815 * L_0 = __this->get_U3COnDisableActionU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::set_OnDisableAction(System.Action`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointKinematicBody_set_OnDisableAction_m0E82E2F8CF126E2D830BB94B0D494F48347AF154 (JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * __this, Action_1_t6AC51F95C320504155E365235FB02570EBC11815 * ___value0, const RuntimeMethod* method)
{
	{
		// public Action<JointKinematicBody> OnDisableAction { get; set; }
		Action_1_t6AC51F95C320504155E365235FB02570EBC11815 * L_0 = ___value0;
		__this->set_U3COnDisableActionU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::UpdateState(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointKinematicBody_UpdateState_m39A8907A401AED69673296BD75779205413152CC (JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * __this, bool ___active0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JointKinematicBody_UpdateState_m39A8907A401AED69673296BD75779205413152CC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool G_B2_0 = false;
	bool G_B1_0 = false;
	Action_1_t6AC51F95C320504155E365235FB02570EBC11815 * G_B6_0 = NULL;
	Action_1_t6AC51F95C320504155E365235FB02570EBC11815 * G_B5_0 = NULL;
	Action_1_t6AC51F95C320504155E365235FB02570EBC11815 * G_B9_0 = NULL;
	Action_1_t6AC51F95C320504155E365235FB02570EBC11815 * G_B8_0 = NULL;
	{
		// bool previousActiveState = gameObject.activeSelf;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_0, /*hidden argument*/NULL);
		// gameObject.SetActive(active);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		bool L_3 = ___active0;
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, L_3, /*hidden argument*/NULL);
		// if (active)
		bool L_4 = ___active0;
		G_B1_0 = L_1;
		if (!L_4)
		{
			G_B2_0 = L_1;
			goto IL_0046;
		}
	}
	{
		// transform.position = Joint.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = JointKinematicBody_get_Joint_m2A37EB193494714DB3FB3FE78E901BC70A394666_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_5, L_7, /*hidden argument*/NULL);
		// transform.rotation = Joint.rotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9 = JointKinematicBody_get_Joint_m2A37EB193494714DB3FB3FE78E901BC70A394666_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_8, L_10, /*hidden argument*/NULL);
		G_B2_0 = G_B1_0;
	}

IL_0046:
	{
		// if (previousActiveState != active)
		bool L_11 = ___active0;
		if ((((int32_t)G_B2_0) == ((int32_t)L_11)))
		{
			goto IL_006f;
		}
	}
	{
		// if (active)
		bool L_12 = ___active0;
		if (!L_12)
		{
			goto IL_005e;
		}
	}
	{
		// OnEnableAction?.Invoke(this);
		Action_1_t6AC51F95C320504155E365235FB02570EBC11815 * L_13 = JointKinematicBody_get_OnEnableAction_m114D8F284EDB0888779DDA16F169D0E540482D75_inline(__this, /*hidden argument*/NULL);
		Action_1_t6AC51F95C320504155E365235FB02570EBC11815 * L_14 = L_13;
		G_B5_0 = L_14;
		if (L_14)
		{
			G_B6_0 = L_14;
			goto IL_0057;
		}
	}
	{
		return;
	}

IL_0057:
	{
		NullCheck(G_B6_0);
		Action_1_Invoke_m88EDE6DE5F03E54DAF7F492D8E81B46BF5AA260F(G_B6_0, __this, /*hidden argument*/Action_1_Invoke_m88EDE6DE5F03E54DAF7F492D8E81B46BF5AA260F_RuntimeMethod_var);
		// }
		return;
	}

IL_005e:
	{
		// OnDisableAction?.Invoke(this);
		Action_1_t6AC51F95C320504155E365235FB02570EBC11815 * L_15 = JointKinematicBody_get_OnDisableAction_m06170C7FD197A76F2F0866526EF057FBBFAC2C72_inline(__this, /*hidden argument*/NULL);
		Action_1_t6AC51F95C320504155E365235FB02570EBC11815 * L_16 = L_15;
		G_B8_0 = L_16;
		if (L_16)
		{
			G_B9_0 = L_16;
			goto IL_0069;
		}
	}
	{
		return;
	}

IL_0069:
	{
		NullCheck(G_B9_0);
		Action_1_Invoke_m88EDE6DE5F03E54DAF7F492D8E81B46BF5AA260F(G_B9_0, __this, /*hidden argument*/Action_1_Invoke_m88EDE6DE5F03E54DAF7F492D8E81B46BF5AA260F_RuntimeMethod_var);
	}

IL_006f:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointKinematicBody__ctor_m3EAC00014F2C26F01FC533747FD703376E0EB887 (JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * __this, const RuntimeMethod* method)
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
// TMPro.TextMeshPro Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.Examples.PhysicsTriggerEventReadout::get_TextField()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * PhysicsTriggerEventReadout_get_TextField_mF68173B4A9E3AD2A6CF6CD385B846B78AC2EEF81 (PhysicsTriggerEventReadout_t32B6FF61712D41B62A1EB6B91045ED904D557520 * __this, const RuntimeMethod* method)
{
	{
		// get { return textField; }
		TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * L_0 = __this->get_textField_4();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.Examples.PhysicsTriggerEventReadout::set_TextField(TMPro.TextMeshPro)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsTriggerEventReadout_set_TextField_mCD5C93C55669F636767C996FD34EAB1FAD6496EB (PhysicsTriggerEventReadout_t32B6FF61712D41B62A1EB6B91045ED904D557520 * __this, TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * ___value0, const RuntimeMethod* method)
{
	{
		// set { textField = value; }
		TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * L_0 = ___value0;
		__this->set_textField_4(L_0);
		// set { textField = value; }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.Examples.PhysicsTriggerEventReadout::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsTriggerEventReadout_OnTriggerEnter_mD6A5830E9E8F72E206B2DFE6EDFF109783335C60 (PhysicsTriggerEventReadout_t32B6FF61712D41B62A1EB6B91045ED904D557520 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhysicsTriggerEventReadout_OnTriggerEnter_mD6A5830E9E8F72E206B2DFE6EDFF109783335C60_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * V_0 = NULL;
	{
		// JointKinematicBody joint = other.GetComponent<JointKinematicBody>();
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___other0;
		NullCheck(L_0);
		JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * L_1 = Component_GetComponent_TisJointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9_m259B16608E7D146DF86E17A92D1620D3D8F5A5AB(L_0, /*hidden argument*/Component_GetComponent_TisJointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9_m259B16608E7D146DF86E17A92D1620D3D8F5A5AB_RuntimeMethod_var);
		V_0 = L_1;
		// if (joint == null) { return; }
		JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0011;
		}
	}
	{
		// if (joint == null) { return; }
		return;
	}

IL_0011:
	{
		// currentJoints.Add(joint);
		List_1_t8B72AC0039307D81C9D833E0EC1ACBA710108D98 * L_4 = __this->get_currentJoints_5();
		JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * L_5 = V_0;
		NullCheck(L_4);
		List_1_Add_mFD36DB6E94EEBC7DFCA6630891B16DA76BB4A986(L_4, L_5, /*hidden argument*/List_1_Add_mFD36DB6E94EEBC7DFCA6630891B16DA76BB4A986_RuntimeMethod_var);
		// WriteText();
		PhysicsTriggerEventReadout_WriteText_m34BD177DF80211D0FFD2B37778AD3DF102FDD401(__this, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.Examples.PhysicsTriggerEventReadout::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsTriggerEventReadout_OnTriggerExit_m49BEB18478F43F14CF608773406CD48137B7F135 (PhysicsTriggerEventReadout_t32B6FF61712D41B62A1EB6B91045ED904D557520 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhysicsTriggerEventReadout_OnTriggerExit_m49BEB18478F43F14CF608773406CD48137B7F135_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * V_0 = NULL;
	{
		// JointKinematicBody joint = other.GetComponent<JointKinematicBody>();
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___other0;
		NullCheck(L_0);
		JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * L_1 = Component_GetComponent_TisJointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9_m259B16608E7D146DF86E17A92D1620D3D8F5A5AB(L_0, /*hidden argument*/Component_GetComponent_TisJointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9_m259B16608E7D146DF86E17A92D1620D3D8F5A5AB_RuntimeMethod_var);
		V_0 = L_1;
		// if (joint == null) { return; }
		JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0011;
		}
	}
	{
		// if (joint == null) { return; }
		return;
	}

IL_0011:
	{
		// if(currentJoints.Contains(joint))
		List_1_t8B72AC0039307D81C9D833E0EC1ACBA710108D98 * L_4 = __this->get_currentJoints_5();
		JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * L_5 = V_0;
		NullCheck(L_4);
		bool L_6 = List_1_Contains_m9545BB4315A1F899798682C096D884E1FF23FD32(L_4, L_5, /*hidden argument*/List_1_Contains_m9545BB4315A1F899798682C096D884E1FF23FD32_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_002e;
		}
	}
	{
		// currentJoints.Remove(joint);
		List_1_t8B72AC0039307D81C9D833E0EC1ACBA710108D98 * L_7 = __this->get_currentJoints_5();
		JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * L_8 = V_0;
		NullCheck(L_7);
		List_1_Remove_mFBD8872A40AF066BDFED212C17C2F2135B0885E5(L_7, L_8, /*hidden argument*/List_1_Remove_mFBD8872A40AF066BDFED212C17C2F2135B0885E5_RuntimeMethod_var);
		// }
		goto IL_004e;
	}

IL_002e:
	{
		// currentJoints.Add(joint);
		List_1_t8B72AC0039307D81C9D833E0EC1ACBA710108D98 * L_9 = __this->get_currentJoints_5();
		JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * L_10 = V_0;
		NullCheck(L_9);
		List_1_Add_mFD36DB6E94EEBC7DFCA6630891B16DA76BB4A986(L_9, L_10, /*hidden argument*/List_1_Add_mFD36DB6E94EEBC7DFCA6630891B16DA76BB4A986_RuntimeMethod_var);
		// WriteText();
		PhysicsTriggerEventReadout_WriteText_m34BD177DF80211D0FFD2B37778AD3DF102FDD401(__this, (bool)0, /*hidden argument*/NULL);
		// currentJoints.Remove(joint);
		List_1_t8B72AC0039307D81C9D833E0EC1ACBA710108D98 * L_11 = __this->get_currentJoints_5();
		JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * L_12 = V_0;
		NullCheck(L_11);
		List_1_Remove_mFBD8872A40AF066BDFED212C17C2F2135B0885E5(L_11, L_12, /*hidden argument*/List_1_Remove_mFBD8872A40AF066BDFED212C17C2F2135B0885E5_RuntimeMethod_var);
	}

IL_004e:
	{
		// if(currentJoints.Count <= 0)
		List_1_t8B72AC0039307D81C9D833E0EC1ACBA710108D98 * L_13 = __this->get_currentJoints_5();
		NullCheck(L_13);
		int32_t L_14 = List_1_get_Count_mFD88A3BCD23E0A70F86D152FE45033C91809F026_inline(L_13, /*hidden argument*/List_1_get_Count_mFD88A3BCD23E0A70F86D152FE45033C91809F026_RuntimeMethod_var);
		if ((((int32_t)L_14) > ((int32_t)0)))
		{
			goto IL_0063;
		}
	}
	{
		// WriteText(true);
		PhysicsTriggerEventReadout_WriteText_m34BD177DF80211D0FFD2B37778AD3DF102FDD401(__this, (bool)1, /*hidden argument*/NULL);
	}

IL_0063:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.Examples.PhysicsTriggerEventReadout::WriteText(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsTriggerEventReadout_WriteText_m34BD177DF80211D0FFD2B37778AD3DF102FDD401 (PhysicsTriggerEventReadout_t32B6FF61712D41B62A1EB6B91045ED904D557520 * __this, bool ___clear0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhysicsTriggerEventReadout_WriteText_m34BD177DF80211D0FFD2B37778AD3DF102FDD401_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	Enumerator_tB115EEEF330DD55DA3A4229A5B724220B18DB6AF  V_1;
	memset((&V_1), 0, sizeof(V_1));
	JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (textField == null) { return; }
		TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * L_0 = __this->get_textField_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// if (textField == null) { return; }
		return;
	}

IL_000f:
	{
		// if (clear)
		bool L_2 = ___clear0;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// textField.text = "";
		TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * L_3 = __this->get_textField_4();
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(64 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_3, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// return;
		return;
	}

IL_0023:
	{
		// StringBuilder text = new StringBuilder();
		StringBuilder_t * L_4 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_4, /*hidden argument*/NULL);
		V_0 = L_4;
		// foreach (var joint in currentJoints)
		List_1_t8B72AC0039307D81C9D833E0EC1ACBA710108D98 * L_5 = __this->get_currentJoints_5();
		NullCheck(L_5);
		Enumerator_tB115EEEF330DD55DA3A4229A5B724220B18DB6AF  L_6 = List_1_GetEnumerator_mB9F3ABE5B0A6074809806B58F6DBCCAD80409B29(L_5, /*hidden argument*/List_1_GetEnumerator_mB9F3ABE5B0A6074809806B58F6DBCCAD80409B29_RuntimeMethod_var);
		V_1 = L_6;
	}

IL_0035:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0056;
		}

IL_0037:
		{
			// foreach (var joint in currentJoints)
			JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * L_7 = Enumerator_get_Current_m54D14F2F7C8346665E98430B08C22B06D9DE5056_inline((Enumerator_tB115EEEF330DD55DA3A4229A5B724220B18DB6AF *)(&V_1), /*hidden argument*/Enumerator_get_Current_m54D14F2F7C8346665E98430B08C22B06D9DE5056_RuntimeMethod_var);
			V_2 = L_7;
			// text.Append(joint.name + " is touching. <br>");
			StringBuilder_t * L_8 = V_0;
			JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * L_9 = V_2;
			NullCheck(L_9);
			String_t* L_10 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_9, /*hidden argument*/NULL);
			String_t* L_11 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_10, _stringLiteralA87FA1E3368C9FAD9D143A70CB395D64D193CBD3, /*hidden argument*/NULL);
			NullCheck(L_8);
			StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_8, L_11, /*hidden argument*/NULL);
		}

IL_0056:
		{
			// foreach (var joint in currentJoints)
			bool L_12 = Enumerator_MoveNext_mD0D4E50099395577EB6FCA2E432D34B6A34D9767((Enumerator_tB115EEEF330DD55DA3A4229A5B724220B18DB6AF *)(&V_1), /*hidden argument*/Enumerator_MoveNext_mD0D4E50099395577EB6FCA2E432D34B6A34D9767_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_0037;
			}
		}

IL_005f:
		{
			IL2CPP_LEAVE(0x6F, FINALLY_0061);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0061;
	}

FINALLY_0061:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mFBD9154FF0F2564918C71E2357553EEB8F46F8B5((Enumerator_tB115EEEF330DD55DA3A4229A5B724220B18DB6AF *)(&V_1), /*hidden argument*/Enumerator_Dispose_mFBD9154FF0F2564918C71E2357553EEB8F46F8B5_RuntimeMethod_var);
		IL2CPP_END_FINALLY(97)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(97)
	{
		IL2CPP_JUMP_TBL(0x6F, IL_006f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_006f:
	{
		// textField.text = text + "<br>";
		TextMeshPro_t4C8C961C0939CD311CCC4F5F306C27C5301BD8E4 * L_13 = __this->get_textField_4();
		StringBuilder_t * L_14 = V_0;
		String_t* L_15 = String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2(L_14, _stringLiteralD615BA2D4F588D5542763B1799E1B17A4021E235, /*hidden argument*/NULL);
		NullCheck(L_13);
		VirtActionInvoker1< String_t* >::Invoke(64 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_13, L_15);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.Examples.PhysicsTriggerEventReadout::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsTriggerEventReadout__ctor_mF5A3B48605A23A2B9B3C6172313E6E5F05375C4C (PhysicsTriggerEventReadout_t32B6FF61712D41B62A1EB6B91045ED904D557520 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhysicsTriggerEventReadout__ctor_mF5A3B48605A23A2B9B3C6172313E6E5F05375C4C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<JointKinematicBody> currentJoints = new List<JointKinematicBody>();
		List_1_t8B72AC0039307D81C9D833E0EC1ACBA710108D98 * L_0 = (List_1_t8B72AC0039307D81C9D833E0EC1ACBA710108D98 *)il2cpp_codegen_object_new(List_1_t8B72AC0039307D81C9D833E0EC1ACBA710108D98_il2cpp_TypeInfo_var);
		List_1__ctor_m18A274BB3EA15685C5052537C480B355218FBF12(L_0, /*hidden argument*/List_1__ctor_m18A274BB3EA15685C5052537C480B355218FBF12_RuntimeMethod_var);
		__this->set_currentJoints_5(L_0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HandPhysicsServiceProfile_get_HandPhysicsLayer_m89795DCC8B876FEC586FF036D41016EAD80ACBDA_inline (HandPhysicsServiceProfile_tEF03D15AFC38FC06DA510603A16ED58F220FF9A0 * __this, const RuntimeMethod* method)
{
	{
		// public int HandPhysicsLayer => handPhysicsLayer;
		int32_t L_0 = __this->get_handPhysicsLayer_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandPhysicsService_set_HandPhysicsLayer_m98EE92EE532568C53E5BC7AB7EADFA363C396DEE_inline (HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int HandPhysicsLayer { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CHandPhysicsLayerU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HandPhysicsServiceProfile_get_UsePalmKinematicBody_mA13BAE8C828FF8FAED28DC413C5815D4F4D5ADE9_inline (HandPhysicsServiceProfile_tEF03D15AFC38FC06DA510603A16ED58F220FF9A0 * __this, const RuntimeMethod* method)
{
	{
		// public bool UsePalmKinematicBody => usePalmKinematicBody;
		bool L_0 = __this->get_usePalmKinematicBody_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandPhysicsService_set_UsePalmKinematicBody_m203BFFC903442FA010A6D731B64F44FE79059A97_inline (HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool UsePalmKinematicBody { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CUsePalmKinematicBodyU3Ek__BackingField_9(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * HandPhysicsServiceProfile_get_FingerTipKinematicBodyPrefab_mE887BD678EE33EFF346DA8602398405C616F6DF1_inline (HandPhysicsServiceProfile_tEF03D15AFC38FC06DA510603A16ED58F220FF9A0 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject FingerTipKinematicBodyPrefab => fingerTipKinematicBodyPrefab;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_fingerTipKinematicBodyPrefab_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * HandPhysicsServiceProfile_get_PalmKinematicBodyPrefab_m190E84CAEB93C875912A73CAFF84953BE56D11D0_inline (HandPhysicsServiceProfile_tEF03D15AFC38FC06DA510603A16ED58F220FF9A0 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject PalmKinematicBodyPrefab => palmKinematicBodyPrefab;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_palmKinematicBodyPrefab_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandPhysicsService_set_HandPhysicsServiceRoot_m00DBBD75E09651391842B3B31A423CD695AFA6F9_inline (HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method)
{
	{
		// public GameObject HandPhysicsServiceRoot { get; private set; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___value0;
		__this->set_U3CHandPhysicsServiceRootU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * HandPhysicsService_get_HandPhysicsServiceRoot_m086F367CEA0B0C6FAB4EFF62545E240C5C40FA97_inline (HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject HandPhysicsServiceRoot { get; private set; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_U3CHandPhysicsServiceRootU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t JointKinematicBody_get_HandednessType_m2AF1811513D14A84D3A8C465F7CE776A6419051A_inline (JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * __this, const RuntimeMethod* method)
{
	{
		// public Handedness HandednessType { get; set; }
		uint8_t L_0 = __this->get_U3CHandednessTypeU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * JointKinematicBody_get_Joint_m2A37EB193494714DB3FB3FE78E901BC70A394666_inline (JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * __this, const RuntimeMethod* method)
{
	{
		// public Transform Joint { get; set; }
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_U3CJointU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t JointKinematicBody_get_JointType_m286B2AFD5E3B808148B70689947E2BE52546C772_inline (JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * __this, const RuntimeMethod* method)
{
	{
		// public TrackedHandJoint JointType { get; set; }
		int32_t L_0 = __this->get_U3CJointTypeU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JointKinematicBody_set_Joint_mFB41B1B610BB6C5856BBA0EAB4BECCEB9F55433B_inline (JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method)
{
	{
		// public Transform Joint { get; set; }
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___value0;
		__this->set_U3CJointU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * HandPhysicsService_get_FingerTipKinematicBodyPrefab_m6AFDE69EB8CCF80051BF57EAE423E1FB9B024723_inline (HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62 * __this, const RuntimeMethod* method)
{
	{
		// get { return fingerTipKinematicBodyPrefab; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_fingerTipKinematicBodyPrefab_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HandPhysicsService_get_HandPhysicsLayer_mEFAE056D7B76560CBCAE14EF28C2E46EA62BB1CA_inline (HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62 * __this, const RuntimeMethod* method)
{
	{
		// public int HandPhysicsLayer { get; set; }
		int32_t L_0 = __this->get_U3CHandPhysicsLayerU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HandPhysicsService_get_UsePalmKinematicBody_m2C9E86A4634B5064FC6A2C5E4585A43B4596E7A4_inline (HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62 * __this, const RuntimeMethod* method)
{
	{
		// public bool UsePalmKinematicBody { get; set; }
		bool L_0 = __this->get_U3CUsePalmKinematicBodyU3Ek__BackingField_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * HandPhysicsService_get_PalmKinematicBodyPrefab_m6C3614EB8042C25C4DBE6EE997EABF4D6B49BC6D_inline (HandPhysicsService_tF4F1BB54DE28A7772BFD1B33706772EAF16C9D62 * __this, const RuntimeMethod* method)
{
	{
		// get { return palmKinematicBodyPrefab; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_palmKinematicBodyPrefab_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JointKinematicBody_set_JointType_m3516E003C2B57B01C0BE4A8FA0E60433C302188C_inline (JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public TrackedHandJoint JointType { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CJointTypeU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JointKinematicBody_set_HandednessType_m38CFBD65828F4689C6D36D5242D2777BE00057EE_inline (JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		// public Handedness HandednessType { get; set; }
		uint8_t L_0 = ___value0;
		__this->set_U3CHandednessTypeU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_t6AC51F95C320504155E365235FB02570EBC11815 * JointKinematicBody_get_OnEnableAction_m114D8F284EDB0888779DDA16F169D0E540482D75_inline (JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * __this, const RuntimeMethod* method)
{
	{
		// public Action<JointKinematicBody> OnEnableAction { get; set; }
		Action_1_t6AC51F95C320504155E365235FB02570EBC11815 * L_0 = __this->get_U3COnEnableActionU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_t6AC51F95C320504155E365235FB02570EBC11815 * JointKinematicBody_get_OnDisableAction_m06170C7FD197A76F2F0866526EF057FBBFAC2C72_inline (JointKinematicBody_t6B2247098D336225971F22D04D856E818E35A0E9 * __this, const RuntimeMethod* method)
{
	{
		// public Action<JointKinematicBody> OnDisableAction { get; set; }
		Action_1_t6AC51F95C320504155E365235FB02570EBC11815 * L_0 = __this->get_U3COnDisableActionU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
