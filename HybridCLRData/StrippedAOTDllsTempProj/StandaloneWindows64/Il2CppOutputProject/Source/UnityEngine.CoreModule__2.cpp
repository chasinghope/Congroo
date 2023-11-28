﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
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
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		R ret;
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2, T3*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		R ret;
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Playables.PlayableBinding>
struct IEnumerable_1_tABF27AED8E88C2557464B0E32EAD36CE8213B1B8;
// System.Collections.Generic.List`1<UnityEngine.Camera>
struct List_1_tD2FA3273746E404D72561E8324608D18B52B533E;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Camera/RenderRequest>
struct List_1_t77E053728435B6D4F08A615FE9CD7AEBE6EE7B48;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// UnityEngine.Camera[]
struct CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.Experimental.Rendering.GraphicsFormat[]
struct GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Light[]
struct LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Playables.PlayableBinding[]
struct PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.Camera/RenderRequest[]
struct RenderRequestU5BU5D_tFE888F219954AB94F31C62B8A20A4AC46AD2B940;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// UnityEngine.Assertions.AssertionException
struct AssertionException_t13955C5225033D3A79D633A04E4D86E8FD0CC372;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem
struct BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// UnityEngine.IExposedPropertyTable
struct IExposedPropertyTable_t8B327FA25AB9C1D8C585388D91DC4C08DD123020;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// UnityEngine.Playables.INotification
struct INotification_tEF630287442F0A66470493068A5D158E3C2D3C6B;
// UnityEngine.Playables.INotificationReceiver
struct INotificationReceiver_tC9F99214950669266369744A234B75BE82DCE55D;
// UnityEngine.Experimental.Rendering.IScriptableRuntimeReflectionSystem
struct IScriptableRuntimeReflectionSystem_t0E6ED00D872A0EFCF87A494C5C893AE9FBE560AD;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82;
// System.InvalidCastException
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E;
// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.ObjectDisposedException
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB;
// UnityEngine.Playables.PlayableAsset
struct PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E;
// UnityEngine.Playables.PlayableBehaviour
struct PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2;
// UnityEngine.Rendering.RenderPipeline
struct RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69;
// UnityEngine.Rendering.RenderPipelineAsset
struct RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper
struct ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// UnityEngine.Rendering.SortingGroup
struct SortingGroup_tA8DA95BF22F76688DAF54122EB3EEA35C70E9759;
// System.String
struct String_t;
// UnityEngine.Rendering.SupportedRenderingFeatures
struct SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c
struct U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4;
// UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate
struct RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB;
// UnityEngine.Playables.PlayableBinding/CreateOutputMethod
struct CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AssertionException_t13955C5225033D3A79D633A04E4D86E8FD0CC372_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IScriptableRuntimeReflectionSystem_t0E6ED00D872A0EFCF87A494C5C893AE9FBE560AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD2FA3273746E404D72561E8324608D18B52B533E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral008638F66804CEA9D15A6D4279FA7DA7FCC6B35D;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral05ED6AEC94875AE42F2118950FFBA1D613C05C37;
IL2CPP_EXTERN_C String_t* _stringLiteral132E80EAA09197CF3EE157E8CAFE6EC4A4EE7426;
IL2CPP_EXTERN_C String_t* _stringLiteral136D6CCF1AA96D28737A6F5823378564A17A07B1;
IL2CPP_EXTERN_C String_t* _stringLiteral15688BC513A63346074978C5D893B01207733A34;
IL2CPP_EXTERN_C String_t* _stringLiteral180C5DB7272B54061862DF51C798C0FE1E1AB386;
IL2CPP_EXTERN_C String_t* _stringLiteral188E04405D8D43DAB34FCE46235E3F3B9E939794;
IL2CPP_EXTERN_C String_t* _stringLiteral1D3707F2DB6891EF40E60A4CFB5A9CBEB40B55F2;
IL2CPP_EXTERN_C String_t* _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6;
IL2CPP_EXTERN_C String_t* _stringLiteral1FF2D5DA17EE1782E8A80B6907AA0B4B5F811249;
IL2CPP_EXTERN_C String_t* _stringLiteral22EBAF9990823EA0B061F556D70C5786C35B8988;
IL2CPP_EXTERN_C String_t* _stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466;
IL2CPP_EXTERN_C String_t* _stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748;
IL2CPP_EXTERN_C String_t* _stringLiteral25231130FE0C70CC2141B3D6AF214C0E2CB6C4CC;
IL2CPP_EXTERN_C String_t* _stringLiteral29C142AE3A55685A1D7CC7DC727CB3C94CC89323;
IL2CPP_EXTERN_C String_t* _stringLiteral424B3C6544FA8C37056D18AD8DE5AD44F6874458;
IL2CPP_EXTERN_C String_t* _stringLiteral489645AAD8BA859BA3C92176D1FC5FD57829EF03;
IL2CPP_EXTERN_C String_t* _stringLiteral7D6A316D6057DA4AE1BFCD029CC6003AD94EBB0F;
IL2CPP_EXTERN_C String_t* _stringLiteral7EF1829A378D66B1DD70A767729127A0DC5EDCAE;
IL2CPP_EXTERN_C String_t* _stringLiteral8E752B76D455A50FE476984D4B09A7CDBF2A753E;
IL2CPP_EXTERN_C String_t* _stringLiteralAA1EF620F523327123017878A2862AB13B665F4E;
IL2CPP_EXTERN_C String_t* _stringLiteralAADB85DA7FB62DC073513239D42C3A0A59E8EB0E;
IL2CPP_EXTERN_C String_t* _stringLiteralBB23B6E4115134649FD594B1C398564BF3814F76;
IL2CPP_EXTERN_C String_t* _stringLiteralBB994086C18AA022E5A2DA0F304A8D5119EDD397;
IL2CPP_EXTERN_C String_t* _stringLiteralC54E787F785B4E40A3D3688157624B421E8D4B05;
IL2CPP_EXTERN_C String_t* _stringLiteralCC6606055C46DC44B34F9C145AAC175DD3FA7E44;
IL2CPP_EXTERN_C String_t* _stringLiteralCCE1912E091B2153DFAE28F4F55D34CD3C4EF3D4;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDAC507E92A1A38ED15DB6692E1968942985D4237;
IL2CPP_EXTERN_C String_t* _stringLiteralE2F79FB192876E4E1E171924672DA41A76D4BECA;
IL2CPP_EXTERN_C String_t* _stringLiteralE8AD7FBC702E767C92DE68E9B5D81D24ED183C29;
IL2CPP_EXTERN_C String_t* _stringLiteralEE31982B42DCCF887A2B3F373397E4946E200724;
IL2CPP_EXTERN_C String_t* _stringLiteralF67141A2C63171C3D363B9A795E9AA3F25DA98CB;
IL2CPP_EXTERN_C String_t* _stringLiteralFB7177E6394CDB63713D04A0A8E4B643EB7A825D;
IL2CPP_EXTERN_C String_t* _stringLiteralFDAAB9944D2BDD67EF768F807537202334A02D27;
IL2CPP_EXTERN_C const RuntimeMethod* Assert_AreEqual_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1C7D690BD2B4127279886CDD4F1201F22D1BB81E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Assert_Fail_mCC76351EF5EAA85F4012330D498CB802861B41BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GraphicsFormatUtility_GetDepthStencilFormat_m963D66601AD1C71D4E90483076BCDB175F958321_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinearColor_Convert_m0E220E18AC54A8040BAD7FFEB0D81538639F9BBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinearColor_set_blue_m3FEEAF946772BB177733B67D9DA4B72D84874375_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinearColor_set_green_mBD9C7EA6415DC54B3F6B643C3CD02B71565F0694_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinearColor_set_red_m0ACFCEDDD205A6F235BE95936816E92898B01B52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mFA6D8529DA219A26E2A3547C04EA59BC2F9ED69D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mF6C79D8FC0E5B72BBAE2C467B674992253BA2B2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m735F7A05528CC71E71E3019311F2E22CF9E2C681_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mDCDDC4E9E15CD83C00D4CC32F79830261769F65C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m7CEE3A6E144C8D86DE6490620206FAB13432ACF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mC82DECEB698D4AABF41EE9DF0E1FC00C8803BD3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableExtensions_SetInputCount_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m83E88C6D9DB5E178A5CD37203DBAE1C4009F39AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_CheckInputBounds_mEA09337758C333586D6B7B4A5D1E10852ECFC1D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableOutputHandle_IsPlayableOutputOfType_TisScriptPlayableOutput_t70DA4CCE83BAE5C0EE7D3BC19E3216DC8B6DCB1F_mD58D2B238CA80FB346C3D2F58C36173C475F477B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RenderPipeline_InternalRenderWithRequests_mA4E809CF43979778D7F5048F79BF506746E82B57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RenderPipeline_InternalRender_mCB77395158F4572F348D8227BA9127ABF1C9C5BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptPlayableBinding_CreateScriptOutput_m10A702F636DE80EE7452267EECB90E23A20DCD5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptPlayableOutput__ctor_m867BA54A9DCDFCA187EA927F75A6903D0F8FF2C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__7_0_m3DE1C9F0E58017EDCEAFA5FEC90132A153B492F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_0_0_0_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com;;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke;;

struct CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5;
struct LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Camera>
struct List_1_tD2FA3273746E404D72561E8324608D18B52B533E  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

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

// System.Collections.Generic.List`1<UnityEngine.Camera/RenderRequest>
struct List_1_t77E053728435B6D4F08A615FE9CD7AEBE6EE7B48  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RenderRequestU5BU5D_tFE888F219954AB94F31C62B8A20A4AC46AD2B940* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// UnityEngine.Assertions.Assert
struct Assert_tDC16963451AC4364803739B73A4477ADCB365863  : public RuntimeObject
{
};

// UnityEngine.Assertions.AssertionMessageUtil
struct AssertionMessageUtil_t6B8BAAD78CE5B0EE8ADB7F650827295343FB842D  : public RuntimeObject
{
};

// UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem
struct BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE  : public RuntimeObject
{
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// UnityEngine.Experimental.Rendering.GraphicsFormatUtility
struct GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD  : public RuntimeObject
{
};

// UnityEngine.Experimental.GlobalIllumination.LightmapperUtils
struct LightmapperUtils_tA76DFC04F9CA5CE874A5443DD3423DB351FD3D6A  : public RuntimeObject
{
};

// UnityEngine.Experimental.GlobalIllumination.Lightmapping
struct Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472  : public RuntimeObject
{
	// System.Int32[] System.Globalization.NumberFormatInfo::numberGroupSizes
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___numberGroupSizes_1;
	// System.Int32[] System.Globalization.NumberFormatInfo::currencyGroupSizes
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___currencyGroupSizes_2;
	// System.Int32[] System.Globalization.NumberFormatInfo::percentGroupSizes
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___percentGroupSizes_3;
	// System.String System.Globalization.NumberFormatInfo::positiveSign
	String_t* ___positiveSign_4;
	// System.String System.Globalization.NumberFormatInfo::negativeSign
	String_t* ___negativeSign_5;
	// System.String System.Globalization.NumberFormatInfo::numberDecimalSeparator
	String_t* ___numberDecimalSeparator_6;
	// System.String System.Globalization.NumberFormatInfo::numberGroupSeparator
	String_t* ___numberGroupSeparator_7;
	// System.String System.Globalization.NumberFormatInfo::currencyGroupSeparator
	String_t* ___currencyGroupSeparator_8;
	// System.String System.Globalization.NumberFormatInfo::currencyDecimalSeparator
	String_t* ___currencyDecimalSeparator_9;
	// System.String System.Globalization.NumberFormatInfo::currencySymbol
	String_t* ___currencySymbol_10;
	// System.String System.Globalization.NumberFormatInfo::ansiCurrencySymbol
	String_t* ___ansiCurrencySymbol_11;
	// System.String System.Globalization.NumberFormatInfo::nanSymbol
	String_t* ___nanSymbol_12;
	// System.String System.Globalization.NumberFormatInfo::positiveInfinitySymbol
	String_t* ___positiveInfinitySymbol_13;
	// System.String System.Globalization.NumberFormatInfo::negativeInfinitySymbol
	String_t* ___negativeInfinitySymbol_14;
	// System.String System.Globalization.NumberFormatInfo::percentDecimalSeparator
	String_t* ___percentDecimalSeparator_15;
	// System.String System.Globalization.NumberFormatInfo::percentGroupSeparator
	String_t* ___percentGroupSeparator_16;
	// System.String System.Globalization.NumberFormatInfo::percentSymbol
	String_t* ___percentSymbol_17;
	// System.String System.Globalization.NumberFormatInfo::perMilleSymbol
	String_t* ___perMilleSymbol_18;
	// System.String[] System.Globalization.NumberFormatInfo::nativeDigits
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___nativeDigits_19;
	// System.Int32 System.Globalization.NumberFormatInfo::m_dataItem
	int32_t ___m_dataItem_20;
	// System.Int32 System.Globalization.NumberFormatInfo::numberDecimalDigits
	int32_t ___numberDecimalDigits_21;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyDecimalDigits
	int32_t ___currencyDecimalDigits_22;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyPositivePattern
	int32_t ___currencyPositivePattern_23;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyNegativePattern
	int32_t ___currencyNegativePattern_24;
	// System.Int32 System.Globalization.NumberFormatInfo::numberNegativePattern
	int32_t ___numberNegativePattern_25;
	// System.Int32 System.Globalization.NumberFormatInfo::percentPositivePattern
	int32_t ___percentPositivePattern_26;
	// System.Int32 System.Globalization.NumberFormatInfo::percentNegativePattern
	int32_t ___percentNegativePattern_27;
	// System.Int32 System.Globalization.NumberFormatInfo::percentDecimalDigits
	int32_t ___percentDecimalDigits_28;
	// System.Int32 System.Globalization.NumberFormatInfo::digitSubstitution
	int32_t ___digitSubstitution_29;
	// System.Boolean System.Globalization.NumberFormatInfo::isReadOnly
	bool ___isReadOnly_30;
	// System.Boolean System.Globalization.NumberFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_31;
	// System.Boolean System.Globalization.NumberFormatInfo::m_isInvariant
	bool ___m_isInvariant_32;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsNumber
	bool ___validForParseAsNumber_33;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsCurrency
	bool ___validForParseAsCurrency_34;
};

// UnityEngine.Playables.PlayableBehaviour
struct PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2  : public RuntimeObject
{
};

// UnityEngine.Playables.PlayableExtensions
struct PlayableExtensions_t86D67105B499492AE917BF5A7CFBEEEB5FADED7E  : public RuntimeObject
{
};

// UnityEngine.Playables.PlayableOutputExtensions
struct PlayableOutputExtensions_t03B5A73210D9C8B1A0C2E3AA032FB32E6797F421  : public RuntimeObject
{
};

// UnityEngine.Rendering.RenderPipeline
struct RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69  : public RuntimeObject
{
	// System.Boolean UnityEngine.Rendering.RenderPipeline::<disposed>k__BackingField
	bool ___U3CdisposedU3Ek__BackingField_0;
};

// UnityEngine.Rendering.RenderPipelineManager
struct RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB  : public RuntimeObject
{
};

// UnityEngine.Playables.ScriptPlayableBinding
struct ScriptPlayableBinding_t2EE46675B4ADF1FAA27B87CC963E20535A514086  : public RuntimeObject
{
};

// UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings
struct ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF  : public RuntimeObject
{
};

// UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper
struct ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924  : public RuntimeObject
{
	// UnityEngine.Experimental.Rendering.IScriptableRuntimeReflectionSystem UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper::<implementation>k__BackingField
	RuntimeObject* ___U3CimplementationU3Ek__BackingField_0;
};

// UnityEngine.Experimental.U2D.SpriteRendererGroup
struct SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.U2D.SpriteRendererGroup
struct SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.Experimental.U2D.SpriteRendererGroup
struct SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshaled_com
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

// UnityEngine.Rendering.SupportedRenderingFeatures
struct SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6  : public RuntimeObject
{
	// UnityEngine.Rendering.SupportedRenderingFeatures/ReflectionProbeModes UnityEngine.Rendering.SupportedRenderingFeatures::<reflectionProbeModes>k__BackingField
	int32_t ___U3CreflectionProbeModesU3Ek__BackingField_1;
	// UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes UnityEngine.Rendering.SupportedRenderingFeatures::<defaultMixedLightingModes>k__BackingField
	int32_t ___U3CdefaultMixedLightingModesU3Ek__BackingField_2;
	// UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes UnityEngine.Rendering.SupportedRenderingFeatures::<mixedLightingModes>k__BackingField
	int32_t ___U3CmixedLightingModesU3Ek__BackingField_3;
	// UnityEngine.LightmapBakeType UnityEngine.Rendering.SupportedRenderingFeatures::<lightmapBakeTypes>k__BackingField
	int32_t ___U3ClightmapBakeTypesU3Ek__BackingField_4;
	// UnityEngine.LightmapsMode UnityEngine.Rendering.SupportedRenderingFeatures::<lightmapsModes>k__BackingField
	int32_t ___U3ClightmapsModesU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<enlightenLightmapper>k__BackingField
	bool ___U3CenlightenLightmapperU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<enlighten>k__BackingField
	bool ___U3CenlightenU3Ek__BackingField_7;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<lightProbeProxyVolumes>k__BackingField
	bool ___U3ClightProbeProxyVolumesU3Ek__BackingField_8;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<motionVectors>k__BackingField
	bool ___U3CmotionVectorsU3Ek__BackingField_9;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<receiveShadows>k__BackingField
	bool ___U3CreceiveShadowsU3Ek__BackingField_10;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<reflectionProbes>k__BackingField
	bool ___U3CreflectionProbesU3Ek__BackingField_11;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<reflectionProbesBlendDistance>k__BackingField
	bool ___U3CreflectionProbesBlendDistanceU3Ek__BackingField_12;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<rendererPriority>k__BackingField
	bool ___U3CrendererPriorityU3Ek__BackingField_13;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<rendersUIOverlay>k__BackingField
	bool ___U3CrendersUIOverlayU3Ek__BackingField_14;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<overridesEnvironmentLighting>k__BackingField
	bool ___U3CoverridesEnvironmentLightingU3Ek__BackingField_15;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<overridesFog>k__BackingField
	bool ___U3CoverridesFogU3Ek__BackingField_16;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<overridesRealtimeReflectionProbes>k__BackingField
	bool ___U3CoverridesRealtimeReflectionProbesU3Ek__BackingField_17;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<overridesOtherLightingSettings>k__BackingField
	bool ___U3CoverridesOtherLightingSettingsU3Ek__BackingField_18;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<editableMaterialRenderQueue>k__BackingField
	bool ___U3CeditableMaterialRenderQueueU3Ek__BackingField_19;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<overridesLODBias>k__BackingField
	bool ___U3CoverridesLODBiasU3Ek__BackingField_20;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<overridesMaximumLODLevel>k__BackingField
	bool ___U3CoverridesMaximumLODLevelU3Ek__BackingField_21;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<rendererProbes>k__BackingField
	bool ___U3CrendererProbesU3Ek__BackingField_22;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<particleSystemInstancing>k__BackingField
	bool ___U3CparticleSystemInstancingU3Ek__BackingField_23;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<autoAmbientProbeBaking>k__BackingField
	bool ___U3CautoAmbientProbeBakingU3Ek__BackingField_24;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<autoDefaultReflectionProbeBaking>k__BackingField
	bool ___U3CautoDefaultReflectionProbeBakingU3Ek__BackingField_25;
	// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::<overridesShadowmask>k__BackingField
	bool ___U3CoverridesShadowmaskU3Ek__BackingField_26;
	// System.String UnityEngine.Rendering.SupportedRenderingFeatures::<overrideShadowmaskMessage>k__BackingField
	String_t* ___U3CoverrideShadowmaskMessageU3Ek__BackingField_27;
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

// UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c
struct U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4  : public RuntimeObject
{
};

// Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>
struct NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// UnityEngine.Playables.FrameRate
struct FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E 
{
	// System.Int32 UnityEngine.Playables.FrameRate::m_Rate
	int32_t ___m_Rate_8;
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

// UnityEngine.LightBakingOutput
struct LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90 
{
	// System.Int32 UnityEngine.LightBakingOutput::probeOcclusionLightIndex
	int32_t ___probeOcclusionLightIndex_0;
	// System.Int32 UnityEngine.LightBakingOutput::occlusionMaskChannel
	int32_t ___occlusionMaskChannel_1;
	// UnityEngine.LightmapBakeType UnityEngine.LightBakingOutput::lightmapBakeType
	int32_t ___lightmapBakeType_2;
	// UnityEngine.MixedLightingMode UnityEngine.LightBakingOutput::mixedLightingMode
	int32_t ___mixedLightingMode_3;
	// System.Boolean UnityEngine.LightBakingOutput::isBaked
	bool ___isBaked_4;
};
// Native definition for P/Invoke marshalling of UnityEngine.LightBakingOutput
struct LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90_marshaled_pinvoke
{
	int32_t ___probeOcclusionLightIndex_0;
	int32_t ___occlusionMaskChannel_1;
	int32_t ___lightmapBakeType_2;
	int32_t ___mixedLightingMode_3;
	int32_t ___isBaked_4;
};
// Native definition for COM marshalling of UnityEngine.LightBakingOutput
struct LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90_marshaled_com
{
	int32_t ___probeOcclusionLightIndex_0;
	int32_t ___occlusionMaskChannel_1;
	int32_t ___lightmapBakeType_2;
	int32_t ___mixedLightingMode_3;
	int32_t ___isBaked_4;
};

// UnityEngine.Experimental.GlobalIllumination.LinearColor
struct LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 
{
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_red
	float ___m_red_0;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_green
	float ___m_green_1;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_blue
	float ___m_blue_2;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_intensity
	float ___m_intensity_3;
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

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// UnityEngine.Rendering.ShaderTagId
struct ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 
{
	// System.Int32 UnityEngine.Rendering.ShaderTagId::m_Id
	int32_t ___m_Id_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Rendering.StencilState
struct StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 
{
	// System.Byte UnityEngine.Rendering.StencilState::m_Enabled
	uint8_t ___m_Enabled_0;
	// System.Byte UnityEngine.Rendering.StencilState::m_ReadMask
	uint8_t ___m_ReadMask_1;
	// System.Byte UnityEngine.Rendering.StencilState::m_WriteMask
	uint8_t ___m_WriteMask_2;
	// System.Byte UnityEngine.Rendering.StencilState::m_Padding
	uint8_t ___m_Padding_3;
	// System.Byte UnityEngine.Rendering.StencilState::m_CompareFunctionFront
	uint8_t ___m_CompareFunctionFront_4;
	// System.Byte UnityEngine.Rendering.StencilState::m_PassOperationFront
	uint8_t ___m_PassOperationFront_5;
	// System.Byte UnityEngine.Rendering.StencilState::m_FailOperationFront
	uint8_t ___m_FailOperationFront_6;
	// System.Byte UnityEngine.Rendering.StencilState::m_ZFailOperationFront
	uint8_t ___m_ZFailOperationFront_7;
	// System.Byte UnityEngine.Rendering.StencilState::m_CompareFunctionBack
	uint8_t ___m_CompareFunctionBack_8;
	// System.Byte UnityEngine.Rendering.StencilState::m_PassOperationBack
	uint8_t ___m_PassOperationBack_9;
	// System.Byte UnityEngine.Rendering.StencilState::m_FailOperationBack
	uint8_t ___m_FailOperationBack_10;
	// System.Byte UnityEngine.Rendering.StencilState::m_ZFailOperationBack
	uint8_t ___m_ZFailOperationBack_11;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
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

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// UnityEngine.Experimental.GlobalIllumination.Cookie
struct Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0 
{
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.Cookie::instanceID
	int32_t ___instanceID_0;
	// System.Single UnityEngine.Experimental.GlobalIllumination.Cookie::scale
	float ___scale_1;
	// UnityEngine.Vector2 UnityEngine.Experimental.GlobalIllumination.Cookie::sizes
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___sizes_2;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	intptr_t ___method_ptr_0;
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

// UnityEngine.Experimental.GlobalIllumination.DirectionalLight
struct DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB 
{
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.DirectionalLight::instanceID
	int32_t ___instanceID_0;
	// System.Boolean UnityEngine.Experimental.GlobalIllumination.DirectionalLight::shadow
	bool ___shadow_1;
	// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.DirectionalLight::mode
	uint8_t ___mode_2;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.DirectionalLight::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	// UnityEngine.Quaternion UnityEngine.Experimental.GlobalIllumination.DirectionalLight::orientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.DirectionalLight::color
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.DirectionalLight::indirectColor
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	// System.Single UnityEngine.Experimental.GlobalIllumination.DirectionalLight::penumbraWidthRadian
	float ___penumbraWidthRadian_7;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.DirectionalLight::direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction_8;
};
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.GlobalIllumination.DirectionalLight
struct DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshaled_pinvoke
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	float ___penumbraWidthRadian_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction_8;
};
// Native definition for COM marshalling of UnityEngine.Experimental.GlobalIllumination.DirectionalLight
struct DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshaled_com
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	float ___penumbraWidthRadian_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction_8;
};

// UnityEngine.Experimental.GlobalIllumination.DiscLight
struct DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E 
{
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.DiscLight::instanceID
	int32_t ___instanceID_0;
	// System.Boolean UnityEngine.Experimental.GlobalIllumination.DiscLight::shadow
	bool ___shadow_1;
	// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.DiscLight::mode
	uint8_t ___mode_2;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.DiscLight::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	// UnityEngine.Quaternion UnityEngine.Experimental.GlobalIllumination.DiscLight::orientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.DiscLight::color
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.DiscLight::indirectColor
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	// System.Single UnityEngine.Experimental.GlobalIllumination.DiscLight::range
	float ___range_7;
	// System.Single UnityEngine.Experimental.GlobalIllumination.DiscLight::radius
	float ___radius_8;
	// UnityEngine.Experimental.GlobalIllumination.FalloffType UnityEngine.Experimental.GlobalIllumination.DiscLight::falloff
	uint8_t ___falloff_9;
};
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.GlobalIllumination.DiscLight
struct DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshaled_pinvoke
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	float ___range_7;
	float ___radius_8;
	uint8_t ___falloff_9;
};
// Native definition for COM marshalling of UnityEngine.Experimental.GlobalIllumination.DiscLight
struct DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshaled_com
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	float ___range_7;
	float ___radius_8;
	uint8_t ___falloff_9;
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

// UnityEngine.Experimental.Rendering.GraphicsFormat
struct GraphicsFormat_tC3D1898F3F3F1F57256C7F3FFD6BA9A37AE7E713 
{
	// System.Int32 UnityEngine.Experimental.Rendering.GraphicsFormat::value__
	int32_t ___value___2;
};

// UnityEngine.Experimental.GlobalIllumination.LightDataGI
struct LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 
{
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.LightDataGI::instanceID
	int32_t ___instanceID_0;
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.LightDataGI::cookieID
	int32_t ___cookieID_1;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::cookieScale
	float ___cookieScale_2;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LightDataGI::color
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_3;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LightDataGI::indirectColor
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_4;
	// UnityEngine.Quaternion UnityEngine.Experimental.GlobalIllumination.LightDataGI::orientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_5;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.LightDataGI::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_6;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::range
	float ___range_7;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::coneAngle
	float ___coneAngle_8;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::innerConeAngle
	float ___innerConeAngle_9;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::shape0
	float ___shape0_10;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::shape1
	float ___shape1_11;
	// UnityEngine.Experimental.GlobalIllumination.LightType UnityEngine.Experimental.GlobalIllumination.LightDataGI::type
	uint8_t ___type_12;
	// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.LightDataGI::mode
	uint8_t ___mode_13;
	// System.Byte UnityEngine.Experimental.GlobalIllumination.LightDataGI::shadow
	uint8_t ___shadow_14;
	// UnityEngine.Experimental.GlobalIllumination.FalloffType UnityEngine.Experimental.GlobalIllumination.LightDataGI::falloff
	uint8_t ___falloff_15;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
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

// UnityEngine.Playables.PlayableGraph
struct PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E 
{
	// System.IntPtr UnityEngine.Playables.PlayableGraph::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableGraph::m_Version
	uint32_t ___m_Version_1;
};

// UnityEngine.Playables.PlayableHandle
struct PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 
{
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableHandle::m_Version
	uint32_t ___m_Version_1;
};

// UnityEngine.Playables.PlayableOutputHandle
struct PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 
{
	// System.IntPtr UnityEngine.Playables.PlayableOutputHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableOutputHandle::m_Version
	uint32_t ___m_Version_1;
};

// UnityEngine.Experimental.GlobalIllumination.PointLight
struct PointLight_tD01A1428DC1015D98A527136034187F732433EA7 
{
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.PointLight::instanceID
	int32_t ___instanceID_0;
	// System.Boolean UnityEngine.Experimental.GlobalIllumination.PointLight::shadow
	bool ___shadow_1;
	// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.PointLight::mode
	uint8_t ___mode_2;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.PointLight::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	// UnityEngine.Quaternion UnityEngine.Experimental.GlobalIllumination.PointLight::orientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.PointLight::color
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.PointLight::indirectColor
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	// System.Single UnityEngine.Experimental.GlobalIllumination.PointLight::range
	float ___range_7;
	// System.Single UnityEngine.Experimental.GlobalIllumination.PointLight::sphereRadius
	float ___sphereRadius_8;
	// UnityEngine.Experimental.GlobalIllumination.FalloffType UnityEngine.Experimental.GlobalIllumination.PointLight::falloff
	uint8_t ___falloff_9;
};
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.GlobalIllumination.PointLight
struct PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshaled_pinvoke
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	float ___range_7;
	float ___sphereRadius_8;
	uint8_t ___falloff_9;
};
// Native definition for COM marshalling of UnityEngine.Experimental.GlobalIllumination.PointLight
struct PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshaled_com
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	float ___range_7;
	float ___sphereRadius_8;
	uint8_t ___falloff_9;
};

// UnityEngine.Experimental.GlobalIllumination.RectangleLight
struct RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698 
{
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.RectangleLight::instanceID
	int32_t ___instanceID_0;
	// System.Boolean UnityEngine.Experimental.GlobalIllumination.RectangleLight::shadow
	bool ___shadow_1;
	// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.RectangleLight::mode
	uint8_t ___mode_2;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.RectangleLight::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	// UnityEngine.Quaternion UnityEngine.Experimental.GlobalIllumination.RectangleLight::orientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.RectangleLight::color
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.RectangleLight::indirectColor
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	// System.Single UnityEngine.Experimental.GlobalIllumination.RectangleLight::range
	float ___range_7;
	// System.Single UnityEngine.Experimental.GlobalIllumination.RectangleLight::width
	float ___width_8;
	// System.Single UnityEngine.Experimental.GlobalIllumination.RectangleLight::height
	float ___height_9;
	// UnityEngine.Experimental.GlobalIllumination.FalloffType UnityEngine.Experimental.GlobalIllumination.RectangleLight::falloff
	uint8_t ___falloff_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.GlobalIllumination.RectangleLight
struct RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshaled_pinvoke
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	float ___range_7;
	float ___width_8;
	float ___height_9;
	uint8_t ___falloff_10;
};
// Native definition for COM marshalling of UnityEngine.Experimental.GlobalIllumination.RectangleLight
struct RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshaled_com
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	float ___range_7;
	float ___width_8;
	float ___height_9;
	uint8_t ___falloff_10;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Rendering.ScriptableRenderContext
struct ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 
{
	// System.IntPtr UnityEngine.Rendering.ScriptableRenderContext::m_Ptr
	intptr_t ___m_Ptr_1;
};

// UnityEngine.Experimental.GlobalIllumination.SpotLight
struct SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869 
{
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.SpotLight::instanceID
	int32_t ___instanceID_0;
	// System.Boolean UnityEngine.Experimental.GlobalIllumination.SpotLight::shadow
	bool ___shadow_1;
	// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.SpotLight::mode
	uint8_t ___mode_2;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.SpotLight::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	// UnityEngine.Quaternion UnityEngine.Experimental.GlobalIllumination.SpotLight::orientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.SpotLight::color
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.SpotLight::indirectColor
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	// System.Single UnityEngine.Experimental.GlobalIllumination.SpotLight::range
	float ___range_7;
	// System.Single UnityEngine.Experimental.GlobalIllumination.SpotLight::sphereRadius
	float ___sphereRadius_8;
	// System.Single UnityEngine.Experimental.GlobalIllumination.SpotLight::coneAngle
	float ___coneAngle_9;
	// System.Single UnityEngine.Experimental.GlobalIllumination.SpotLight::innerConeAngle
	float ___innerConeAngle_10;
	// UnityEngine.Experimental.GlobalIllumination.FalloffType UnityEngine.Experimental.GlobalIllumination.SpotLight::falloff
	uint8_t ___falloff_11;
	// UnityEngine.Experimental.GlobalIllumination.AngularFalloffType UnityEngine.Experimental.GlobalIllumination.SpotLight::angularFalloff
	uint8_t ___angularFalloff_12;
};
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.GlobalIllumination.SpotLight
struct SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshaled_pinvoke
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	float ___range_7;
	float ___sphereRadius_8;
	float ___coneAngle_9;
	float ___innerConeAngle_10;
	uint8_t ___falloff_11;
	uint8_t ___angularFalloff_12;
};
// Native definition for COM marshalling of UnityEngine.Experimental.GlobalIllumination.SpotLight
struct SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshaled_com
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	float ___range_7;
	float ___sphereRadius_8;
	float ___coneAngle_9;
	float ___innerConeAngle_10;
	uint8_t ___falloff_11;
	uint8_t ___angularFalloff_12;
};

// UnityEngine.Assertions.AssertionException
struct AssertionException_t13955C5225033D3A79D633A04E4D86E8FD0CC372  : public Exception_t
{
	// System.String UnityEngine.Assertions.AssertionException::m_UserMessage
	String_t* ___m_UserMessage_18;
};

// UnityEngine.Experimental.Playables.CameraPlayable
struct CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Playables.CameraPlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Experimental.Playables.MaterialEffectPlayable
struct MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Playables.MaterialEffectPlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
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

// UnityEngine.Playables.Playable
struct Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.Playable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

// UnityEngine.Playables.PlayableBinding
struct PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 
{
	// System.String UnityEngine.Playables.PlayableBinding::m_StreamName
	String_t* ___m_StreamName_0;
	// UnityEngine.Object UnityEngine.Playables.PlayableBinding::m_SourceObject
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_SourceObject_1;
	// System.Type UnityEngine.Playables.PlayableBinding::m_SourceBindingType
	Type_t* ___m_SourceBindingType_2;
	// UnityEngine.Playables.PlayableBinding/CreateOutputMethod UnityEngine.Playables.PlayableBinding::m_CreateOutputMethod
	CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* ___m_CreateOutputMethod_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.Playables.PlayableBinding
struct PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshaled_pinvoke
{
	char* ___m_StreamName_0;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke ___m_SourceObject_1;
	Type_t* ___m_SourceBindingType_2;
	Il2CppMethodPointer ___m_CreateOutputMethod_3;
};
// Native definition for COM marshalling of UnityEngine.Playables.PlayableBinding
struct PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshaled_com
{
	Il2CppChar* ___m_StreamName_0;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com* ___m_SourceObject_1;
	Type_t* ___m_SourceBindingType_2;
	Il2CppMethodPointer ___m_CreateOutputMethod_3;
};

// UnityEngine.Playables.PlayableOutput
struct PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 
{
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutput::m_Handle
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___m_Handle_0;
};

// UnityEngine.Playables.ScriptPlayableOutput
struct ScriptPlayableOutput_t70DA4CCE83BAE5C0EE7D3BC19E3216DC8B6DCB1F 
{
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.ScriptPlayableOutput::m_Handle
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___m_Handle_0;
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

// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo
struct SpriteIntermediateRendererInfo_tCE099727551F5747789D3AD0D3A9CA66E9DEB934 
{
	// System.Int32 UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo::SpriteID
	int32_t ___SpriteID_0;
	// System.Int32 UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo::TextureID
	int32_t ___TextureID_1;
	// System.Int32 UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo::MaterialID
	int32_t ___MaterialID_2;
	// UnityEngine.Color UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo::Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___Color_3;
	// UnityEngine.Matrix4x4 UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo::Transform
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___Transform_4;
	// UnityEngine.Bounds UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo::Bounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___Bounds_5;
	// System.Int32 UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo::Layer
	int32_t ___Layer_6;
	// System.Int32 UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo::SortingLayer
	int32_t ___SortingLayer_7;
	// System.Int32 UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo::SortingOrder
	int32_t ___SortingOrder_8;
	// System.UInt64 UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo::SceneCullingMask
	uint64_t ___SceneCullingMask_9;
	// System.IntPtr UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo::IndexData
	intptr_t ___IndexData_10;
	// System.IntPtr UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo::VertexData
	intptr_t ___VertexData_11;
	// System.Int32 UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo::IndexCount
	int32_t ___IndexCount_12;
	// System.Int32 UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo::VertexCount
	int32_t ___VertexCount_13;
	// System.Int32 UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo::ShaderChannelMask
	int32_t ___ShaderChannelMask_14;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Experimental.Playables.TextureMixerPlayable
struct TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Playables.TextureMixerPlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

// UnityEngine.Experimental.Playables.TexturePlayableOutput
struct TexturePlayableOutput_t289BEACD45B8E5183E91E8021EBD353110F5BC4B 
{
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Experimental.Playables.TexturePlayableOutput::m_Handle
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___m_Handle_0;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
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

// UnityEngine.Playables.FrameData
struct FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314 
{
	// System.UInt64 UnityEngine.Playables.FrameData::m_FrameID
	uint64_t ___m_FrameID_0;
	// System.Double UnityEngine.Playables.FrameData::m_DeltaTime
	double ___m_DeltaTime_1;
	// System.Single UnityEngine.Playables.FrameData::m_Weight
	float ___m_Weight_2;
	// System.Single UnityEngine.Playables.FrameData::m_EffectiveWeight
	float ___m_EffectiveWeight_3;
	// System.Double UnityEngine.Playables.FrameData::m_EffectiveParentDelay
	double ___m_EffectiveParentDelay_4;
	// System.Single UnityEngine.Playables.FrameData::m_EffectiveParentSpeed
	float ___m_EffectiveParentSpeed_5;
	// System.Single UnityEngine.Playables.FrameData::m_EffectiveSpeed
	float ___m_EffectiveSpeed_6;
	// UnityEngine.Playables.FrameData/Flags UnityEngine.Playables.FrameData::m_Flags
	int32_t ___m_Flags_7;
	// UnityEngine.Playables.PlayableOutput UnityEngine.Playables.FrameData::m_Output
	PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 ___m_Output_8;
};

// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidCastException
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Playables.PlayableAsset
struct PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// UnityEngine.Rendering.RenderPipelineAsset
struct RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate
struct RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB  : public MulticastDelegate_t
{
};

// UnityEngine.Playables.PlayableBinding/CreateOutputMethod
struct CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509  : public MulticastDelegate_t
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_4;
};

// System.ObjectDisposedException
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB  : public InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB
{
	// System.String System.ObjectDisposedException::_objectName
	String_t* ____objectName_18;
};

// UnityEngine.Rendering.SortingGroup
struct SortingGroup_tA8DA95BF22F76688DAF54122EB3EEA35C70E9759  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// System.Collections.Generic.List`1<UnityEngine.Camera>
struct List_1_tD2FA3273746E404D72561E8324608D18B52B533E_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Camera>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<UnityEngine.Camera/RenderRequest>
struct List_1_t77E053728435B6D4F08A615FE9CD7AEBE6EE7B48_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RenderRequestU5BU5D_tFE888F219954AB94F31C62B8A20A4AC46AD2B940* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Camera/RenderRequest>

// UnityEngine.Assertions.Assert
struct Assert_tDC16963451AC4364803739B73A4477ADCB365863_StaticFields
{
	// System.Boolean UnityEngine.Assertions.Assert::raiseExceptions
	bool ___raiseExceptions_0;
};

// UnityEngine.Assertions.Assert

// UnityEngine.Assertions.AssertionMessageUtil

// UnityEngine.Assertions.AssertionMessageUtil

// UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem

// UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};

// System.Globalization.CultureInfo

// UnityEngine.Experimental.Rendering.GraphicsFormatUtility
struct GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_StaticFields
{
	// UnityEngine.Experimental.Rendering.GraphicsFormat[] UnityEngine.Experimental.Rendering.GraphicsFormatUtility::tableNoStencil
	GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* ___tableNoStencil_0;
	// UnityEngine.Experimental.Rendering.GraphicsFormat[] UnityEngine.Experimental.Rendering.GraphicsFormatUtility::tableStencil
	GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* ___tableStencil_1;
};

// UnityEngine.Experimental.Rendering.GraphicsFormatUtility

// UnityEngine.Experimental.GlobalIllumination.LightmapperUtils

// UnityEngine.Experimental.GlobalIllumination.LightmapperUtils

// UnityEngine.Experimental.GlobalIllumination.Lightmapping
struct Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields
{
	// UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate UnityEngine.Experimental.GlobalIllumination.Lightmapping::s_DefaultDelegate
	RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* ___s_DefaultDelegate_0;
	// UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate UnityEngine.Experimental.GlobalIllumination.Lightmapping::s_RequestLightsDelegate
	RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* ___s_RequestLightsDelegate_1;
};

// UnityEngine.Experimental.GlobalIllumination.Lightmapping

// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472_StaticFields
{
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.NumberFormatInfo::invariantInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___invariantInfo_0;
};

// System.Globalization.NumberFormatInfo

// UnityEngine.Playables.PlayableBehaviour

// UnityEngine.Playables.PlayableBehaviour

// UnityEngine.Playables.PlayableExtensions

// UnityEngine.Playables.PlayableExtensions

// UnityEngine.Playables.PlayableOutputExtensions

// UnityEngine.Playables.PlayableOutputExtensions

// UnityEngine.Rendering.RenderPipeline

// UnityEngine.Rendering.RenderPipeline

// UnityEngine.Rendering.RenderPipelineManager
struct RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields
{
	// UnityEngine.Rendering.RenderPipelineAsset UnityEngine.Rendering.RenderPipelineManager::s_CurrentPipelineAsset
	RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* ___s_CurrentPipelineAsset_0;
	// System.Collections.Generic.List`1<UnityEngine.Camera> UnityEngine.Rendering.RenderPipelineManager::s_Cameras
	List_1_tD2FA3273746E404D72561E8324608D18B52B533E* ___s_Cameras_1;
	// System.String UnityEngine.Rendering.RenderPipelineManager::s_currentPipelineType
	String_t* ___s_currentPipelineType_2;
	// System.String UnityEngine.Rendering.RenderPipelineManager::s_builtinPipelineName
	String_t* ___s_builtinPipelineName_3;
	// UnityEngine.Rendering.RenderPipeline UnityEngine.Rendering.RenderPipelineManager::s_currentPipeline
	RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* ___s_currentPipeline_4;
	// System.Action UnityEngine.Rendering.RenderPipelineManager::activeRenderPipelineTypeChanged
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___activeRenderPipelineTypeChanged_5;
};

// UnityEngine.Rendering.RenderPipelineManager

// UnityEngine.Playables.ScriptPlayableBinding

// UnityEngine.Playables.ScriptPlayableBinding

// UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings
struct ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_StaticFields
{
	// UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings::s_Instance
	ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* ___s_Instance_0;
};

// UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings

// UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper

// UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper

// UnityEngine.Experimental.U2D.SpriteRendererGroup

// UnityEngine.Experimental.U2D.SpriteRendererGroup

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// UnityEngine.Rendering.SupportedRenderingFeatures
struct SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_StaticFields
{
	// UnityEngine.Rendering.SupportedRenderingFeatures UnityEngine.Rendering.SupportedRenderingFeatures::s_Active
	SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* ___s_Active_0;
};

// UnityEngine.Rendering.SupportedRenderingFeatures

// UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c
struct U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_StaticFields
{
	// UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c::<>9
	U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4* ___U3CU3E9_0;
};

// UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c

// Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>

// Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// UnityEngine.Color

// UnityEngine.Color

// System.Double

// System.Double

// UnityEngine.Playables.FrameRate
struct FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E_StaticFields
{
	// UnityEngine.Playables.FrameRate UnityEngine.Playables.FrameRate::k_24Fps
	FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E ___k_24Fps_0;
	// UnityEngine.Playables.FrameRate UnityEngine.Playables.FrameRate::k_23_976Fps
	FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E ___k_23_976Fps_1;
	// UnityEngine.Playables.FrameRate UnityEngine.Playables.FrameRate::k_25Fps
	FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E ___k_25Fps_2;
	// UnityEngine.Playables.FrameRate UnityEngine.Playables.FrameRate::k_30Fps
	FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E ___k_30Fps_3;
	// UnityEngine.Playables.FrameRate UnityEngine.Playables.FrameRate::k_29_97Fps
	FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E ___k_29_97Fps_4;
	// UnityEngine.Playables.FrameRate UnityEngine.Playables.FrameRate::k_50Fps
	FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E ___k_50Fps_5;
	// UnityEngine.Playables.FrameRate UnityEngine.Playables.FrameRate::k_60Fps
	FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E ___k_60Fps_6;
	// UnityEngine.Playables.FrameRate UnityEngine.Playables.FrameRate::k_59_94Fps
	FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E ___k_59_94Fps_7;
};

// UnityEngine.Playables.FrameRate

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.LightBakingOutput

// UnityEngine.LightBakingOutput

// UnityEngine.Experimental.GlobalIllumination.LinearColor

// UnityEngine.Experimental.GlobalIllumination.LinearColor

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// UnityEngine.Rendering.ShaderTagId

// UnityEngine.Rendering.ShaderTagId

// System.Single

// System.Single

// UnityEngine.Rendering.StencilState

// UnityEngine.Rendering.StencilState

// System.UInt32

// System.UInt32

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// UnityEngine.Vector3
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

// UnityEngine.Vector3

// System.Void

// System.Void

// UnityEngine.Experimental.GlobalIllumination.Cookie

// UnityEngine.Experimental.GlobalIllumination.Cookie

// System.Delegate

// System.Delegate

// UnityEngine.Experimental.GlobalIllumination.DirectionalLight

// UnityEngine.Experimental.GlobalIllumination.DirectionalLight

// UnityEngine.Experimental.GlobalIllumination.DiscLight

// UnityEngine.Experimental.GlobalIllumination.DiscLight

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.Experimental.Rendering.GraphicsFormat

// UnityEngine.Experimental.Rendering.GraphicsFormat

// UnityEngine.Experimental.GlobalIllumination.LightDataGI

// UnityEngine.Experimental.GlobalIllumination.LightDataGI

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Playables.PlayableGraph

// UnityEngine.Playables.PlayableGraph

// UnityEngine.Playables.PlayableHandle
struct PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_StaticFields
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::m_Null
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Null_2;
};

// UnityEngine.Playables.PlayableHandle

// UnityEngine.Playables.PlayableOutputHandle
struct PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_StaticFields
{
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutputHandle::m_Null
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___m_Null_2;
};

// UnityEngine.Playables.PlayableOutputHandle

// UnityEngine.Experimental.GlobalIllumination.PointLight

// UnityEngine.Experimental.GlobalIllumination.PointLight

// UnityEngine.Experimental.GlobalIllumination.RectangleLight

// UnityEngine.Experimental.GlobalIllumination.RectangleLight

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// UnityEngine.Rendering.ScriptableRenderContext
struct ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_StaticFields
{
	// UnityEngine.Rendering.ShaderTagId UnityEngine.Rendering.ScriptableRenderContext::kRenderTypeTag
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___kRenderTypeTag_0;
};

// UnityEngine.Rendering.ScriptableRenderContext

// UnityEngine.Experimental.GlobalIllumination.SpotLight

// UnityEngine.Experimental.GlobalIllumination.SpotLight

// UnityEngine.Assertions.AssertionException

// UnityEngine.Assertions.AssertionException

// UnityEngine.Experimental.Playables.CameraPlayable

// UnityEngine.Experimental.Playables.CameraPlayable

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Material

// UnityEngine.Material

// UnityEngine.Experimental.Playables.MaterialEffectPlayable

// UnityEngine.Experimental.Playables.MaterialEffectPlayable

// UnityEngine.Playables.Playable
struct Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_StaticFields
{
	// UnityEngine.Playables.Playable UnityEngine.Playables.Playable::m_NullPlayable
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___m_NullPlayable_1;
};

// UnityEngine.Playables.Playable

// UnityEngine.Playables.PlayableBinding
struct PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_StaticFields
{
	// UnityEngine.Playables.PlayableBinding[] UnityEngine.Playables.PlayableBinding::None
	PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD* ___None_4;
	// System.Double UnityEngine.Playables.PlayableBinding::DefaultDuration
	double ___DefaultDuration_5;
};

// UnityEngine.Playables.PlayableBinding

// UnityEngine.Playables.PlayableOutput
struct PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680_StaticFields
{
	// UnityEngine.Playables.PlayableOutput UnityEngine.Playables.PlayableOutput::m_NullPlayableOutput
	PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 ___m_NullPlayableOutput_1;
};

// UnityEngine.Playables.PlayableOutput

// UnityEngine.Playables.ScriptPlayableOutput

// UnityEngine.Playables.ScriptPlayableOutput

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

// UnityEngine.Shader

// UnityEngine.Shader

// UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo

// UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Texture

// UnityEngine.Experimental.Playables.TextureMixerPlayable

// UnityEngine.Experimental.Playables.TextureMixerPlayable

// UnityEngine.Experimental.Playables.TexturePlayableOutput

// UnityEngine.Experimental.Playables.TexturePlayableOutput

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// System.Action

// System.Action

// System.ArgumentException

// System.ArgumentException

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.Playables.FrameData

// UnityEngine.Playables.FrameData

// System.IndexOutOfRangeException

// System.IndexOutOfRangeException

// System.InvalidCastException

// System.InvalidCastException

// UnityEngine.Playables.PlayableAsset

// UnityEngine.Playables.PlayableAsset

// UnityEngine.Rendering.RenderPipelineAsset

// UnityEngine.Rendering.RenderPipelineAsset

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate

// UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate

// UnityEngine.Playables.PlayableBinding/CreateOutputMethod

// UnityEngine.Playables.PlayableBinding/CreateOutputMethod

// System.ArgumentOutOfRangeException

// System.ArgumentOutOfRangeException

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// UnityEngine.Light

// UnityEngine.Light

// System.ObjectDisposedException

// System.ObjectDisposedException

// UnityEngine.Rendering.SortingGroup

// UnityEngine.Rendering.SortingGroup
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Camera[]
struct CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B  : public RuntimeArray
{
	ALIGN_FIELD (8) Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* m_Items[1];

	inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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
// UnityEngine.Playables.PlayableBinding[]
struct PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD  : public RuntimeArray
{
	ALIGN_FIELD (8) PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 m_Items[1];

	inline PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_StreamName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_SourceObject_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_SourceBindingType_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_CreateOutputMethod_3), (void*)NULL);
		#endif
	}
	inline PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_StreamName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_SourceObject_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_SourceBindingType_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_CreateOutputMethod_3), (void*)NULL);
		#endif
	}
};
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
// UnityEngine.Light[]
struct LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990  : public RuntimeArray
{
	ALIGN_FIELD (8) Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* m_Items[1];

	inline Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Experimental.Rendering.GraphicsFormat[]
struct GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

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

IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke(const Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C& unmarshaled, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke_back(const Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke& marshaled, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C& unmarshaled);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke_cleanup(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_com(const Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C& unmarshaled, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com& marshaled);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_com_back(const Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com& marshaled, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C& unmarshaled);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_com_cleanup(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com& marshaled);

// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableExtensions::SetInputCount<UnityEngine.Playables.Playable>(U,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableExtensions_SetInputCount_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m83E88C6D9DB5E178A5CD37203DBAE1C4009F39AD_gshared (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___0_playable, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::IsPlayableOutputOfType<UnityEngine.Playables.ScriptPlayableOutput>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_IsPlayableOutputOfType_TisScriptPlayableOutput_t70DA4CCE83BAE5C0EE7D3BC19E3216DC8B6DCB1F_mD58D2B238CA80FB346C3D2F58C36173C475F477B_gshared (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Experimental.GlobalIllumination.LightDataGI>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mC82DECEB698D4AABF41EE9DF0E1FC00C8803BD3A_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
// System.Void UnityEngine.Assertions.Assert::AreEqual<System.Int32>(T,T,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_AreEqual_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1C7D690BD2B4127279886CDD4F1201F22D1BB81E_gshared (int32_t ___0_expected, int32_t ___1_actual, String_t* ___2_message, const RuntimeMethod* method) ;

// T[] System.Collections.Generic.List`1<UnityEngine.Camera>::ToArray()
inline CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* List_1_ToArray_mF6C79D8FC0E5B72BBAE2C467B674992253BA2B2A (List_1_tD2FA3273746E404D72561E8324608D18B52B533E* __this, const RuntimeMethod* method)
{
	return ((  CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* (*) (List_1_tD2FA3273746E404D72561E8324608D18B52B533E*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Boolean UnityEngine.Rendering.RenderPipeline::get_disposed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool RenderPipeline_get_disposed_mF0D4B88DF44249E0FC2371697B913DD5A81B3850_inline (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Void System.ObjectDisposedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48 (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* __this, String_t* ___0_objectName, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Camera>::get_Count()
inline int32_t List_1_get_Count_mDCDDC4E9E15CD83C00D4CC32F79830261769F65C_inline (List_1_tD2FA3273746E404D72561E8324608D18B52B533E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tD2FA3273746E404D72561E8324608D18B52B533E*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Camera>::get_Item(System.Int32)
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* List_1_get_Item_m7CEE3A6E144C8D86DE6490620206FAB13432ACF6 (List_1_tD2FA3273746E404D72561E8324608D18B52B533E* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (List_1_tD2FA3273746E404D72561E8324608D18B52B533E*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.RenderPipeline::set_disposed(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderPipeline_set_disposed_mB7EC4BD04C80015CBCC0B92A65A6DE615F2828A8_inline (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0 (Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.RenderPipelineManager::CleanupRenderPipeline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineManager_CleanupRenderPipeline_m1104AEE59AFE2EC1F1AD15DCF862802230466F99 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.RenderPipelineManager::PrepareRenderPipeline(UnityEngine.Rendering.RenderPipelineAsset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineManager_PrepareRenderPipeline_m342C65E962B20B547DB2BAF537EA870457736108 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* ___0_pipelineAsset, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// UnityEngine.Rendering.RenderPipeline UnityEngine.Rendering.RenderPipelineManager::get_currentPipeline()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* RenderPipelineManager_get_currentPipeline_m270A15A23593BAD8D6A20CE2E328210FF9AA692D_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.RenderPipeline::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipeline_Dispose_mDF8A62A6B7D3A00128C9341921C036D015C41179 (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.RenderPipelineManager::set_currentPipeline(UnityEngine.Rendering.RenderPipeline)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineManager_set_currentPipeline_m1C8CDEC2FD862823D0C4DC007CB57DBAFB1CDB3F (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures__ctor_mF7728980F81142B7BD45FBB25AB001B17A4BF0ED (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::set_active(UnityEngine.Rendering.SupportedRenderingFeatures)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_set_active_mB2A1A6137C816592E6526CD3DA7405260EAEA8AE (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ScriptableRenderContext::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext__ctor_m10159F14BB69F555C375E13BB77A1898FDB42FA5 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, intptr_t ___0_ptr, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Camera>::Clear()
inline void List_1_Clear_mFA6D8529DA219A26E2A3547C04EA59BC2F9ED69D_inline (List_1_tD2FA3273746E404D72561E8324608D18B52B533E* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD2FA3273746E404D72561E8324608D18B52B533E*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::GetCameras(System.Collections.Generic.List`1<UnityEngine.Camera>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_GetCameras_m9B2329F79132EE49B719560AD739FD3601C44189 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, List_1_tD2FA3273746E404D72561E8324608D18B52B533E* ___0_results, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.RenderPipeline::InternalRender(UnityEngine.Rendering.ScriptableRenderContext,System.Collections.Generic.List`1<UnityEngine.Camera>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipeline_InternalRender_mCB77395158F4572F348D8227BA9127ABF1C9C5BE (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 ___0_context, List_1_tD2FA3273746E404D72561E8324608D18B52B533E* ___1_cameras, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.RenderPipeline::InternalRenderWithRequests(UnityEngine.Rendering.ScriptableRenderContext,System.Collections.Generic.List`1<UnityEngine.Camera>,System.Collections.Generic.List`1<UnityEngine.Camera/RenderRequest>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipeline_InternalRenderWithRequests_mA4E809CF43979778D7F5048F79BF506746E82B57 (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 ___0_context, List_1_tD2FA3273746E404D72561E8324608D18B52B533E* ___1_cameras, List_1_t77E053728435B6D4F08A615FE9CD7AEBE6EE7B48* ___2_renderRequests, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.RenderPipelineManager::HandleRenderPipelineChange(UnityEngine.Rendering.RenderPipelineAsset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineManager_HandleRenderPipelineChange_m8B7BA0E0ADC1AD84C4A2E119E08C225EF519482E (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* ___0_pipelineAsset, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Rendering.RenderPipeline UnityEngine.Rendering.RenderPipelineAsset::InternalCreatePipeline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* RenderPipelineAsset_InternalCreatePipeline_m662E6A3D3B14C19D5318E172A4AF81FEF71C6252 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Camera>::.ctor()
inline void List_1__ctor_m735F7A05528CC71E71E3019311F2E22CF9E2C681 (List_1_tD2FA3273746E404D72561E8324608D18B52B533E* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD2FA3273746E404D72561E8324608D18B52B533E*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::GetCameras_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&,System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_GetCameras_Internal_Injected_mFA0C805805CE2CC5BB6AD8DB0075733BF194FEE7 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* ___0__unity_self, Type_t* ___1_listType, RuntimeObject* ___2_resultList, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ScriptableRenderContext::GetCameras_Internal(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_GetCameras_Internal_m852016B3544E3ED5FEFB9695EC175622A5B6A8C8 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, Type_t* ___0_listType, RuntimeObject* ___1_resultList, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_Equals_m0F39AB64A7BBD67190E745FF8334A5FC766CB26E (intptr_t* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.ScriptableRenderContext::Equals(UnityEngine.Rendering.ScriptableRenderContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ScriptableRenderContext_Equals_mBFDA5815F2B6ABA9B16503DA906B8BA42078718D (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.ScriptableRenderContext::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ScriptableRenderContext_Equals_m99E5A233945DFC3B9A786F2413ECE68E5019AB88 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Int32 System.IntPtr::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_GetHashCode_m669B16AD7483C1C396E48F41D9CAC4B719E38F3D (intptr_t* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.ScriptableRenderContext::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScriptableRenderContext_GetHashCode_mA1EE09239F1ACFC29A2ADB027D5E76E690510207 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ShaderTagId::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderTagId__ctor_m4191968F1D2CE19F9092253EC10F83734A9CFF5B (ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Shader::TagToID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Shader_TagToID_m5B5214F0AABE47C7465EEA717C78568AE1251FE9 (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.ShaderTagId::Equals(UnityEngine.Rendering.ShaderTagId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShaderTagId_Equals_m932EFCC38C276EEB2784BBC866330F4C595F52E0 (ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* __this, ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.ShaderTagId::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShaderTagId_Equals_m02826F7AFC63AA3AE5DB14F7A891F8F173FD9A33 (ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Int32 System.Int32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295 (int32_t* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.ShaderTagId::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ShaderTagId_GetHashCode_mF5E3A1F96CBDFDCEFABE1B56125EBBA6E3B9EFEF (ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* __this, const RuntimeMethod* method) ;
// System.Byte System.Convert::ToByte(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Convert_ToByte_mC22A7EFFB28AA32D8F797E456E92BA88DBA19A08 (bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.StencilState::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_enabled_m6DC861C699D1044E896E833D2DAE69B82F796564 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.StencilState::set_readMask(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_readMask_m1BA8F9033413889D4E77DA343DC0029566A9BB9B (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, uint8_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.StencilState::set_writeMask(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_writeMask_m94471C671E03D42F36DA61436B1068B362375D65 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, uint8_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.StencilState::set_compareFunctionFront(UnityEngine.Rendering.CompareFunction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_compareFunctionFront_m1388C37901DAB6AF9D23C0F01946DCCE19BC9BFC (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.StencilState::set_passOperationFront(UnityEngine.Rendering.StencilOp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_passOperationFront_m1F15CC29366DAEAA6CCE1DB0622C70D6ECC5A3EB (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.StencilState::set_failOperationFront(UnityEngine.Rendering.StencilOp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_failOperationFront_mADCECAE5D2E75ABAE51650F1F314E661D09C2CD6 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.StencilState::set_zFailOperationFront(UnityEngine.Rendering.StencilOp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_zFailOperationFront_mC7D8F0A08B9AEC4203BD6B352CB795E8011EFBB6 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.StencilState::set_compareFunctionBack(UnityEngine.Rendering.CompareFunction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_compareFunctionBack_m8AF73F4E8FC95A46D33E3192C50702D2AA15D61D (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.StencilState::set_passOperationBack(UnityEngine.Rendering.StencilOp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_passOperationBack_m4B1395FE21F5B5C809DC6F31D5824A90E05ED220 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.StencilState::set_failOperationBack(UnityEngine.Rendering.StencilOp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_failOperationBack_mD279271DD1F99EE5B8BC19F5AE60988E6C6F0E4A (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.StencilState::set_zFailOperationBack(UnityEngine.Rendering.StencilOp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_zFailOperationBack_mC092ABD8A5EA87245640A10E54C6A1990C4F6864 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.StencilState::Equals(UnityEngine.Rendering.StencilState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StencilState_Equals_m9FFB8A41D8838FD128875CB2D4DAA760C6DF1051 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.StencilState::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StencilState_Equals_mEA45A5D2BF2223B15EE0FB8BCEDBA9CB534ADF4B (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Int32 System.Byte::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678 (uint8_t* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.StencilState::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StencilState_GetHashCode_mB4A02DEE780377C853D16FFF49CCB9D9F4F711A5 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, const RuntimeMethod* method) ;
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF (intptr_t ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Rendering.SupportedRenderingFeatures UnityEngine.Rendering.SupportedRenderingFeatures::get_active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054 (const RuntimeMethod* method) ;
// UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes UnityEngine.Rendering.SupportedRenderingFeatures::get_defaultMixedLightingModes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_defaultMixedLightingModes_m7F9FDF9012EC41E36466613C8A9103D74666CBC4_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) ;
// UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes UnityEngine.Rendering.SupportedRenderingFeatures::get_mixedLightingModes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_mixedLightingModes_m929C0CE80A4990993EBCAB8B46C1E273A0829137_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::IsMixedLightingModeSupported(UnityEngine.MixedLightingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_IsMixedLightingModeSupported_m11E0ADD90300D5396090ED9B2EFD9924524D50AF (int32_t ___0_mixedMode, const RuntimeMethod* method) ;
// System.Void System.IntPtr::.ctor(System.Void*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline (intptr_t* __this, void* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::IsMixedLightingModeSupportedByRef(UnityEngine.MixedLightingMode,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_IsMixedLightingModeSupportedByRef_mE48C26F367ABEC734BDB7A8A66FEB8796A401AAF (int32_t ___0_mixedMode, intptr_t ___1_isSupportedPtr, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::IsLightmapBakeTypeSupported(UnityEngine.LightmapBakeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_IsLightmapBakeTypeSupported_mE8EE2ACBE267FDAEFA6229CD67298C9D3A16C691 (int32_t ___0_bakeType, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::IsLightmapBakeTypeSupportedByRef(UnityEngine.LightmapBakeType,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_IsLightmapBakeTypeSupportedByRef_mABE7E2BC06CA25519079DF4EEC89667EB51B8460 (int32_t ___0_bakeType, intptr_t ___1_isSupportedPtr, const RuntimeMethod* method) ;
// UnityEngine.LightmapBakeType UnityEngine.Rendering.SupportedRenderingFeatures::get_lightmapBakeTypes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_lightmapBakeTypes_m1311A5AD5BE1A6BA3251238C893D7D340358C156_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::get_enlighten()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_enlighten_m6F973FEB7CCF0BB1B7A2F25317EADC5F6FD95ED6_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) ;
// UnityEngine.LightmapsMode UnityEngine.Rendering.SupportedRenderingFeatures::get_lightmapsModes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_lightmapsModes_m925D670110EF7109A26BE1B228066E1201FAAE38_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::get_enlightenLightmapper()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_enlightenLightmapper_mF7C756BBD4E605DD047BD502DFF8569C4CEE8F27_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::get_rendersUIOverlay()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_rendersUIOverlay_m657FFFC5B360F7BCE9964EF50E7449779224AEFC_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::get_autoAmbientProbeBaking()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_autoAmbientProbeBaking_m42E98E922511B1CF790FC414C9A85D70DFACA2C8_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::get_autoDefaultReflectionProbeBaking()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_autoDefaultReflectionProbeBaking_mFDB934E6645FA5CA95E1F0BEF4A12345A1025207_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour__ctor_m00422B6EFEA829BCB116D715E74F1EAD2CB6F4F8 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.FrameData::HasFlags(UnityEngine.Playables.FrameData/Flags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FrameData_HasFlags_m268F3C0E03481E2F7217CEB6153C072AB0A68C1C (FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314* __this, int32_t ___0_flag, const RuntimeMethod* method) ;
// System.Single UnityEngine.Playables.FrameData::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FrameData_get_deltaTime_m522E00CB1B4DA759A5121778A7688DA07735C1F8 (FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Playables.FrameData::get_effectiveSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FrameData_get_effectiveSpeed_m49D7C9FB90C9B640B64D701B026DC26540BC25B9 (FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314* __this, const RuntimeMethod* method) ;
// UnityEngine.Playables.FrameData/EvaluationType UnityEngine.Playables.FrameData::get_evaluationType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FrameData_get_evaluationType_m0212C6B9A3C3AD09BA24DD4291A9FB528BFD0842 (FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.FrameData::get_seekOccurred()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FrameData_get_seekOccurred_mC8325617A69EA31B70169D921E258AC60B2750D2 (FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.FrameData::get_timeLooped()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FrameData_get_timeLooped_m88F002C13ED791E65D9F5705AAD05C19C505918B (FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.FrameData::get_timeHeld()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FrameData_get_timeHeld_m1213876DD47660CEA565831282ACA4477BC6644F (FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314* __this, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableOutput UnityEngine.Playables.FrameData::get_output()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 FrameData_get_output_mB5B10130E39676C78F53E6194390B01B87D54FBF (FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314* __this, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayState UnityEngine.Playables.FrameData::get_effectivePlayState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FrameData_get_effectivePlayState_m58201D8BB3B3489399055AC4D1264007552F2BAB (FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.FrameRate::get_dropFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FrameRate_get_dropFrame_mC8BFEB9E9E33328497040C4D02EAF1F0DC84AFF4 (FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E* __this, const RuntimeMethod* method) ;
// System.Double UnityEngine.Playables.FrameRate::get_rate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double FrameRate_get_rate_mF21BC02932E30CCC1832FE1B3C08FE6679F95406 (FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.FrameRate::.ctor(System.UInt32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameRate__ctor_m9DF0B1521A85AE2CD542C19C1C253301B389CA71 (FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E* __this, uint32_t ___0_frameRate, bool ___1_drop, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.FrameRate::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FrameRate_IsValid_m8F983C71BC91E1AEF857517C4D344D9FCEAE2851 (FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.FrameRate::Equals(UnityEngine.Playables.FrameRate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FrameRate_Equals_m71B1BAAEDC9E1096965764135FF45A1C464639E6 (FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E* __this, FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.FrameRate::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FrameRate_Equals_m318AFC57E72479688AFA71ECFCB8F2113BC0044C (FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Playables.FrameRate::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FrameRate_GetHashCode_mD760D080786680B77E3E8F059950F48EAAF6A819 (FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Playables.FrameRate::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FrameRate_ToString_m72358F5840A02CA9E1B5F326575596E2B094BB56 (FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E* __this, String_t* ___0_format, RuntimeObject* ___1_formatProvider, const RuntimeMethod* method) ;
// System.String UnityEngine.Playables.FrameRate::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FrameRate_ToString_m899E2A85E7CE55B74522F23706508BD4AF18934F (FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
// System.String System.Double::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m7E3930DDFB35B1919FE538A246A59C3FC62AF789 (double* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
// System.String UnityEngine.UnityString::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityString_Format_m98A0629641086A1BE20BBF7F4EADDE3FE3877D85 (String_t* ___0_fmt, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableGraph::CreatePlayableHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 PlayableGraph_CreatePlayableHandle_mF90D606A614FB603DBFFE4E87C325F8CC59BED67 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.Playable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Playable__ctor_mD2EB35E024816AEED68795D0124EAB30E05BF6C4 (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableExtensions::SetInputCount<UnityEngine.Playables.Playable>(U,System.Int32)
inline void PlayableExtensions_SetInputCount_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m83E88C6D9DB5E178A5CD37203DBAE1C4009F39AD (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___0_playable, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F, int32_t, const RuntimeMethod*))PlayableExtensions_SetInputCount_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m83E88C6D9DB5E178A5CD37203DBAE1C4009F39AD_gshared)(___0_playable, ___1_value, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.Playable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 Playable_GetHandle_m39356D23E849DC5428B262092657662C064E04F8 (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* __this, const RuntimeMethod* method) ;
// System.Type UnityEngine.Playables.PlayableHandle::GetPlayableType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* PlayableHandle_GetPlayableType_mD9750F1B85DF086F52641D6AB85789601486B686 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Type UnityEngine.Playables.Playable::GetPlayableType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Playable_GetPlayableType_mF7103BE376DCD61F54669681AE7BB7D6963D6D43 (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::op_Equality(UnityEngine.Playables.PlayableHandle,UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_x, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___1_y, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.Playable::Equals(UnityEngine.Playables.Playable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Playable_Equals_mD72D3DB892B8867A0E7BAC032A16C08616EEFF86 (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___0_other, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975 (const RuntimeMethod* method) ;
// UnityEngine.Playables.Playable UnityEngine.Playables.Playable::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F Playable_get_Null_m0D0BB32BC23983C490A363AD6AAC47D8B72864F2 (const RuntimeMethod* method) ;
// System.Void* System.IntPtr::ToPointer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) ;
// System.Object System.Object::MemberwiseClone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_MemberwiseClone_m0676AEE25C3CF7C09F15ECF9EC5CC407863617B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.Object UnityEngine.Playables.PlayableBinding::get_sourceObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* PlayableBinding_get_sourceObject_m195E6C4C3DF88BD89A2DE3923646B9A013310C09 (PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4* __this, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableOutput UnityEngine.Playables.PlayableBinding/CreateOutputMethod::Invoke(UnityEngine.Playables.PlayableGraph,System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 CreateOutputMethod_Invoke_mEC7DC5D9A9325BFFB17C248AE9738637704B89CC_inline (CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* __this, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___0_graph, String_t* ___1_name, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableOutput UnityEngine.Playables.PlayableOutput::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 PlayableOutput_get_Null_mF602832968A37CB4E1971E2DD8EB95D760332E6E (const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableOutput UnityEngine.Playables.PlayableBinding::CreateOutput(UnityEngine.Playables.PlayableGraph)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 PlayableBinding_CreateOutput_mE29B8B4AE0857C038D6DCA6824A307C60E2DD7C6 (PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4* __this, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___0_graph, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableGraph::GetRootPlayableInternal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 PlayableGraph_GetRootPlayableInternal_mB01EE3DE1FED4EB160B5EA367448521ED0F36165 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// UnityEngine.Playables.Playable UnityEngine.Playables.PlayableGraph::GetRootPlayable(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F PlayableGraph_GetRootPlayable_m3BA0011AD6B13FCE5D58EA3E9BB17BE84319B53C (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableGraph::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableGraph_Evaluate_m56DAAF530D0A6079FCBCFE86EF5E3E33374A22A7 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* __this, float ___0_deltaTime, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableGraph::Evaluate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableGraph_Evaluate_m5E8756A5AB34EB7F9FC7682932D4BD6BE418352A (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableGraph::IsValid_Injected(UnityEngine.Playables.PlayableGraph&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableGraph_IsValid_Injected_mFFF3A7CB0D151BB47517B179E6D896896EABEB59 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___0__unity_self, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableGraph::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableGraph_IsValid_mB608FD2CEDAA27C31C34DF4639CF98199ECDC3CA (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableGraph::IsPlaying_Injected(UnityEngine.Playables.PlayableGraph&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableGraph_IsPlaying_Injected_m468BBBE757D50B44C92E779DF415E1DAE1347D15 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___0__unity_self, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableGraph::IsPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableGraph_IsPlaying_m9289A7D3CBD3A73051568C20F384C1D4FBBA89E0 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableGraph::Evaluate_Injected(UnityEngine.Playables.PlayableGraph&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableGraph_Evaluate_Injected_mE269438DB1E95213E3D0FDFE4F4812FB46E497D2 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___0__unity_self, float ___1_deltaTime, const RuntimeMethod* method) ;
// UnityEngine.IExposedPropertyTable UnityEngine.Playables.PlayableGraph::GetResolver_Injected(UnityEngine.Playables.PlayableGraph&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayableGraph_GetResolver_Injected_m9AFBA9449AE07F7EAFA9584F94C982AB8EA86884 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___0__unity_self, const RuntimeMethod* method) ;
// UnityEngine.IExposedPropertyTable UnityEngine.Playables.PlayableGraph::GetResolver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayableGraph_GetResolver_m7869599485E96C9D09E0680FA25099E9B2789A47 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Playables.PlayableGraph::GetPlayableCount_Injected(UnityEngine.Playables.PlayableGraph&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableGraph_GetPlayableCount_Injected_mFD310C816E60BC671AAD0F28BBA6F56AF7A8BECC (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___0__unity_self, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Playables.PlayableGraph::GetPlayableCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableGraph_GetPlayableCount_m69E1448E840367C9A1D05BE0FB1908BD0C04B809 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Playables.PlayableGraph::GetRootPlayableCount_Injected(UnityEngine.Playables.PlayableGraph&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableGraph_GetRootPlayableCount_Injected_m68B5BA1E3A03E7A5648C88DC1F468B32EFE0F806 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___0__unity_self, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Playables.PlayableGraph::GetRootPlayableCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableGraph_GetRootPlayableCount_mAD4CB33AEDB21181CAE1312C3D23CA14E52FFA45 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableGraph::SynchronizeEvaluation_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Playables.PlayableGraph&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableGraph_SynchronizeEvaluation_Injected_m96FF3DC943BCDDEF96FA72BD38A7825D906FBE73 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___0__unity_self, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___1_playable, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableGraph::SynchronizeEvaluation(UnityEngine.Playables.PlayableGraph)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableGraph_SynchronizeEvaluation_m9911E65EE4FE46BAE375EF11C884136C840760C0 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* __this, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___0_playable, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableGraph::CreatePlayableHandle_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableGraph_CreatePlayableHandle_Injected_m5E12AF54EFA209FDDCAE4F01A568A671386B5939 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___0__unity_self, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___1_ret, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableGraph::CreateScriptOutputInternal_Injected(UnityEngine.Playables.PlayableGraph&,System.String,UnityEngine.Playables.PlayableOutputHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableGraph_CreateScriptOutputInternal_Injected_mA0A211C35D348D53BF00CB6AC1B288A8913917B5 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___0__unity_self, String_t* ___1_name, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___2_handle, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableGraph::CreateScriptOutputInternal(System.String,UnityEngine.Playables.PlayableOutputHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableGraph_CreateScriptOutputInternal_m7B8A726419E5A7E5C07436BC168CE28B2D970393 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* __this, String_t* ___0_name, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___1_handle, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableGraph::GetRootPlayableInternal_Injected(UnityEngine.Playables.PlayableGraph&,System.Int32,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableGraph_GetRootPlayableInternal_Injected_m2497977732B8062F0C9C91563DB70E0AFA8533BB (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___0__unity_self, int32_t ___1_index, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___2_ret, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableGraph::IsMatchFrameRateEnabled_Injected(UnityEngine.Playables.PlayableGraph&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableGraph_IsMatchFrameRateEnabled_Injected_m4E5F1D55E7FE7F40E86E6125519B99E1C42E9352 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___0__unity_self, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableGraph::IsMatchFrameRateEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableGraph_IsMatchFrameRateEnabled_mC6D005B2F581E49DEA0037C8811CEA771C3CE1C3 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableGraph::GetFrameRate_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Playables.FrameRate&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableGraph_GetFrameRate_Injected_m6E6FDD47EE02D67D6ACD8078FF92CBBA4CD5D321 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___0__unity_self, FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E* ___1_ret, const RuntimeMethod* method) ;
// UnityEngine.Playables.FrameRate UnityEngine.Playables.PlayableGraph::GetFrameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E PlayableGraph_GetFrameRate_m81DF8FC361E09CC2A2FE2350E48FF2B1E4AFA990 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableGraph::ConnectInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Playables.PlayableHandle&,System.Int32,UnityEngine.Playables.PlayableHandle&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableGraph_ConnectInternal_Injected_m1691F7ABEC3D3236450A775DD809AE46E9FC395D (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___0__unity_self, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___1_source, int32_t ___2_sourceOutputPort, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___3_destination, int32_t ___4_destinationInputPort, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableGraph::ConnectInternal(UnityEngine.Playables.PlayableHandle,System.Int32,UnityEngine.Playables.PlayableHandle,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableGraph_ConnectInternal_m86DBDCCD0D8D5B1734EA7E90268F057A6E52525A (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_source, int32_t ___1_sourceOutputPort, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___2_destination, int32_t ___3_destinationInputPort, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::GetInputHandle(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 PlayableHandle_GetInputHandle_mB9DAEF700C72515D7CA640F71C51A09C08DAD380 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// UnityEngine.Playables.Playable UnityEngine.Playables.PlayableHandle::GetInput(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F PlayableHandle_GetInput_m3F42E2CF0D7DFA2396295133D02622C1BE3A8633 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, int32_t ___0_inputPort, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::CheckInputBounds(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_CheckInputBounds_m5A5D02E53EF84B63F75DBB414906923677EED1E3 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, int32_t ___0_inputIndex, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableHandle::SetInputWeightFromIndex(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetInputWeightFromIndex_mF56AA0C0055C18FF46EF8E315331FDF45D832752 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, int32_t ___0_index, float ___1_weight, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::SetInputWeight(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_SetInputWeight_m8647C2593A24870E429A0832FC26EE2241CC302E (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, int32_t ___0_inputIndex, float ___1_weight, const RuntimeMethod* method) ;
// System.Single UnityEngine.Playables.PlayableHandle::GetInputWeightFromIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayableHandle_GetInputWeightFromIndex_mF50333BE4F3BD48CCF6A431BC6B99D4CBF131CD6 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Single UnityEngine.Playables.PlayableHandle::GetInputWeight(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayableHandle_GetInputWeight_m0C5D7A870D6DDE9F1A5193907ADCA0335DC6207A (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, int32_t ___0_inputIndex, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::CompareVersion(UnityEngine.Playables.PlayableHandle,UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_CompareVersion_m228CA864DC2BCAA0E03B4C74EC9F2A7B529526D9 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_lhs, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___1_rhs, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::Equals(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_Equals_m81BA0E127133DFF3E45DA61D185FDF48E16BCF45 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_Equals_m60AD76B7D38CA989AE84501B2E9F9ED5CB5F9670 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, RuntimeObject* ___0_p, const RuntimeMethod* method) ;
// System.Int32 System.UInt32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC (uint32_t* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Playables.PlayableHandle::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableHandle_GetHashCode_m10FB32ECDC0B9D7BDAEA9E3B76BDDF4614F4EF4F (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271 (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::CheckInputBounds(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_CheckInputBounds_mEA09337758C333586D6B7B4A5D1E10852ECFC1D8 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, int32_t ___0_inputIndex, bool ___1_acceptAny, const RuntimeMethod* method) ;
// System.Void System.IndexOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425 (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Playables.PlayableHandle::GetInputCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableHandle_GetInputCount_m7FE60883E4B7C9AF7D39F28A044924ADBD5E5121 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsValid_Injected(UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsValid_Injected_m9D662778C1A39FD8AEC18AEF053AE5C3DBD7B4B9 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0__unity_self, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Type UnityEngine.Playables.PlayableHandle::GetPlayableType_Injected(UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* PlayableHandle_GetPlayableType_Injected_mD71007C85AACC8A18E2A5296B88FD8EA47349A9D (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0__unity_self, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableHandle::SetScriptInstance_Injected(UnityEngine.Playables.PlayableHandle&,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetScriptInstance_Injected_m0857A5E5961A9F0C85AF6FBC8BDCA81040B472A9 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0__unity_self, RuntimeObject* ___1_scriptInstance, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableHandle::SetScriptInstance(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetScriptInstance_m479F7C03A25E77284BE1949CF5EABE903B9B26EE (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, RuntimeObject* ___0_scriptInstance, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayState UnityEngine.Playables.PlayableHandle::GetPlayState_Injected(UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableHandle_GetPlayState_Injected_m13EB10AE657A2CA4DCDD017BBB6128FE5C5D262A (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0__unity_self, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayState UnityEngine.Playables.PlayableHandle::GetPlayState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableHandle_GetPlayState_m14547B804BB9B9B9E2B20B3F0975334CC99E778F (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableHandle::Play_Injected(UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_Play_Injected_m8F34984563F1A8BF53D393C9893D4F2C05B18838 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0__unity_self, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableHandle::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_Play_m1EF8E1105EB6A4A9B0D6638A57CDCBCEEDC6FB2D (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableHandle::Pause_Injected(UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_Pause_Injected_m03C53A86591E68B96874119A8B1B56B22E7A2F71 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0__unity_self, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableHandle::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_Pause_m75833A31BA17AC8900736C6F5AC778D033001B32 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableHandle::SetSpeed_Injected(UnityEngine.Playables.PlayableHandle&,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetSpeed_Injected_mC55D3E342BBB56C6BA115537ADA3B2CAE82E26C0 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0__unity_self, double ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableHandle::SetSpeed(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetSpeed_m39D426AE0DF93F876C2C1EDF9417C11B97A305E9 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, double ___0_value, const RuntimeMethod* method) ;
// System.Double UnityEngine.Playables.PlayableHandle::GetTime_Injected(UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double PlayableHandle_GetTime_Injected_m1D4833ED2DB4BD71082BDD577AEAF293028EB654 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0__unity_self, const RuntimeMethod* method) ;
// System.Double UnityEngine.Playables.PlayableHandle::GetTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double PlayableHandle_GetTime_m27CB24B86EF0E6A4BD2C53907A677059B5D2BD5D (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableHandle::SetTime_Injected(UnityEngine.Playables.PlayableHandle&,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetTime_Injected_m8449B7E24321BFA6894EAC1834E79C5A5DC45E77 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0__unity_self, double ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableHandle::SetTime(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetTime_m6D255AB6779F3DC278813F1C016FE4EBC9F4B1E4 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, double ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsDone_Injected(UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsDone_Injected_mF38535A24976C4976BA572A806A08AC7796CD85C (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0__unity_self, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsDone_mF5DAB54F941BC13799577396526E3901CF639DE6 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableHandle::SetDone_Injected(UnityEngine.Playables.PlayableHandle&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetDone_Injected_m2D0CC96C8CF9B9F6921C242FF1685A219E9AF740 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0__unity_self, bool ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableHandle::SetDone(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetDone_mE04197A8D1657035DC6C70AF7291715557A9FB49 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Double UnityEngine.Playables.PlayableHandle::GetDuration_Injected(UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double PlayableHandle_GetDuration_Injected_mB0942C618219679840CE56270EEAE8A61D7183F3 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0__unity_self, const RuntimeMethod* method) ;
// System.Double UnityEngine.Playables.PlayableHandle::GetDuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double PlayableHandle_GetDuration_mE3CF9C12CA5A186288A7F1981A92F043100E02A7 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableHandle::SetDuration_Injected(UnityEngine.Playables.PlayableHandle&,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetDuration_Injected_m427D8F5EC8D7A4AF48274B7A12E197667B1392B4 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0__unity_self, double ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableHandle::SetDuration(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetDuration_m4E07F9F3A90B2F3CE10325D9F405993F03CCA08B (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, double ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableHandle::SetPropagateSetTime_Injected(UnityEngine.Playables.PlayableHandle&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetPropagateSetTime_Injected_mA7ADF0169F58568C4B880F7D0A32B5489D59A7DD (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0__unity_self, bool ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableHandle::SetPropagateSetTime(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetPropagateSetTime_mD1458DFF49EF07D73884A9BBAC31358579C8931B (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableHandle::GetGraph_Injected(UnityEngine.Playables.PlayableHandle&,UnityEngine.Playables.PlayableGraph&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_GetGraph_Injected_m07C513A9056C9A67230EFA8692EE76C6BD02DA3B (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0__unity_self, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___1_ret, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableGraph UnityEngine.Playables.PlayableHandle::GetGraph()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E PlayableHandle_GetGraph_m03AFC9F0B66AC13A120EC37F6964200C9973CE24 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Playables.PlayableHandle::GetInputCount_Injected(UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableHandle_GetInputCount_Injected_m802EC16FCA791F8E54ED29F090D5D16A931FFA9C (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0__unity_self, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableHandle::SetInputCount_Injected(UnityEngine.Playables.PlayableHandle&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetInputCount_Injected_mD0EF7227FFAE50E134562BA1EC1BF3C2D02BDF77 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0__unity_self, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableHandle::SetInputCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetInputCount_m6067CD3616C428F777903FCBFD789060A2185DEE (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableHandle::SetInputWeight_Injected(UnityEngine.Playables.PlayableHandle&,UnityEngine.Playables.PlayableHandle&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetInputWeight_Injected_mF5F691D651C7807A5C3426083FD0296EDA97ABDB (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0__unity_self, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___1_input, float ___2_weight, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableHandle::SetInputWeight(UnityEngine.Playables.PlayableHandle,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetInputWeight_mCC570E6D826D79987CC4E021DA9E7C0B700C0AC1 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_input, float ___1_weight, const RuntimeMethod* method) ;
// System.Double UnityEngine.Playables.PlayableHandle::GetPreviousTime_Injected(UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double PlayableHandle_GetPreviousTime_Injected_m3B00E2845E777DF6860D65CE352C21100AB2D958 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0__unity_self, const RuntimeMethod* method) ;
// System.Double UnityEngine.Playables.PlayableHandle::GetPreviousTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double PlayableHandle_GetPreviousTime_m0C6881E900DF5FE7281699876DFE48BA64DEC1BF (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableHandle::SetTraversalMode_Injected(UnityEngine.Playables.PlayableHandle&,UnityEngine.Playables.PlayableTraversalMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetTraversalMode_Injected_mC412F9CD172B11A45E1F68441F1C9905C2D7B315 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0__unity_self, int32_t ___1_mode, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableHandle::SetTraversalMode(UnityEngine.Playables.PlayableTraversalMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetTraversalMode_m5302D6FC1935F2EF97E25DF58B402CC8700DE03D (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, int32_t ___0_mode, const RuntimeMethod* method) ;
// UnityEngine.Playables.DirectorWrapMode UnityEngine.Playables.PlayableHandle::GetTimeWrapMode_Injected(UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableHandle_GetTimeWrapMode_Injected_m48C83527FF7BBD9B7F100ED2490E50A5BE327415 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0__unity_self, const RuntimeMethod* method) ;
// UnityEngine.Playables.DirectorWrapMode UnityEngine.Playables.PlayableHandle::GetTimeWrapMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableHandle_GetTimeWrapMode_m3C4CF421B7470E04537C45092DA9A1D242A5D1B4 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableHandle::SetTimeWrapMode_Injected(UnityEngine.Playables.PlayableHandle&,UnityEngine.Playables.DirectorWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetTimeWrapMode_Injected_mADEF8F2E92C329006CC97E7B179AC8DEB945F84B (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0__unity_self, int32_t ___1_mode, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableHandle::SetTimeWrapMode(UnityEngine.Playables.DirectorWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetTimeWrapMode_m88B50CE0AABE0183BBF12ACEC5E84CBEDAB76C2F (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, int32_t ___0_mode, const RuntimeMethod* method) ;
// System.Object UnityEngine.Playables.PlayableHandle::GetScriptInstance_Injected(UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayableHandle_GetScriptInstance_Injected_mEA519D092C0AEECAB6B22178D837CB0F6F9FCF21 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0__unity_self, const RuntimeMethod* method) ;
// System.Object UnityEngine.Playables.PlayableHandle::GetScriptInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayableHandle_GetScriptInstance_m14D182ED7BEB2AAE1ADD86189A687FF0F86FA925 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableHandle::GetInputHandle_Injected(UnityEngine.Playables.PlayableHandle&,System.Int32,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_GetInputHandle_Injected_mE1DBCCE1A34C8C3E8B8939A7232EB6B69976ADBF (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0__unity_self, int32_t ___1_index, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___2_ret, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableHandle::SetInputWeightFromIndex_Injected(UnityEngine.Playables.PlayableHandle&,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetInputWeightFromIndex_Injected_m1B209DBD186EA35CA4B32A5DB2616F882250E7E9 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0__unity_self, int32_t ___1_index, float ___2_weight, const RuntimeMethod* method) ;
// System.Single UnityEngine.Playables.PlayableHandle::GetInputWeightFromIndex_Injected(UnityEngine.Playables.PlayableHandle&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayableHandle_GetInputWeightFromIndex_Injected_mBD7D1FBCD09D2AAE5F9D86D9F06A897DCD40493A (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0__unity_self, int32_t ___1_index, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableOutput::.ctor(UnityEngine.Playables.PlayableOutputHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableOutput__ctor_m55FBB20EC479F67641835EA48D84A1AB3DF39747 (PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680* __this, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___0_handle, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutput::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 PlayableOutput_GetHandle_m12FF2889D15884CBEB92A6CB376827EBA5A607BF (PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::op_Equality(UnityEngine.Playables.PlayableOutputHandle,UnityEngine.Playables.PlayableOutputHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_op_Equality_m116A314100562913DD28474B8D7DA5FBFCA9CD3C (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___0_lhs, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___1_rhs, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableOutput::Equals(UnityEngine.Playables.PlayableOutput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutput_Equals_m4CC730818751114DC5643600B5FE20243F4B7121 (PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680* __this, PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 ___0_other, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutputHandle::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 PlayableOutputHandle_get_Null_m656E8D2549FA031DA8A2EA5B39CE3B33D75B69F8 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Playables.PlayableOutputHandle::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableOutputHandle_GetHashCode_mC2FAF756D71026E3AF4492157EDAE7186429B079 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::CompareVersion(UnityEngine.Playables.PlayableOutputHandle,UnityEngine.Playables.PlayableOutputHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_CompareVersion_mAB102578900E20BB3B4273F94D1A6AFDB6E20FFD (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___0_lhs, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___1_rhs, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::Equals(UnityEngine.Playables.PlayableOutputHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_Equals_mF5C23882B2A007186F00EB3D23E9BD6664E8DAE6 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_Equals_mB9106CB9333E0BF4C893E43AD7A23B64471CC21A (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, RuntimeObject* ___0_p, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::IsValid_Injected(UnityEngine.Playables.PlayableOutputHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_IsValid_Injected_m212EF9786C2C73A1147E5D4CD087DAB16092C35A (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___0__unity_self, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_IsValid_mA94C343D72B72C3B1C7636C93A8DB5EA71691312 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, const RuntimeMethod* method) ;
// System.Type UnityEngine.Playables.PlayableOutputHandle::GetPlayableOutputType_Injected(UnityEngine.Playables.PlayableOutputHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* PlayableOutputHandle_GetPlayableOutputType_Injected_m207177D14DFF7F2CAA293A22F57DBCF69C07106A (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___0__unity_self, const RuntimeMethod* method) ;
// System.Type UnityEngine.Playables.PlayableOutputHandle::GetPlayableOutputType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* PlayableOutputHandle_GetPlayableOutputType_m5FA19BC37FD64EC6C2174B6DA6CB202F5451C108 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableOutputHandle::SetReferenceObject_Injected(UnityEngine.Playables.PlayableOutputHandle&,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableOutputHandle_SetReferenceObject_Injected_m13864271BC7D984E3194F1A7FBE6613FC325B9B4 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___0__unity_self, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_target, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableOutputHandle::SetReferenceObject(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableOutputHandle_SetReferenceObject_m898B8810539BBD3B4B4382CD436FE84EC60AF77F (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableOutputHandle::SetUserData_Injected(UnityEngine.Playables.PlayableOutputHandle&,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableOutputHandle_SetUserData_Injected_m0C738940D2F7F2AD282D14249DE7AC3C439015BB (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___0__unity_self, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_target, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableOutputHandle::SetUserData(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableOutputHandle_SetUserData_m23E8BB63D93E67DD981C9045D610C6B2289F435B (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableOutputHandle::GetSourcePlayable_Injected(UnityEngine.Playables.PlayableOutputHandle&,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableOutputHandle_GetSourcePlayable_Injected_m348438D1C77465405BAEE6258DEE4E2ABF896297 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___0__unity_self, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___1_ret, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableOutputHandle::GetSourcePlayable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 PlayableOutputHandle_GetSourcePlayable_m6D142AAB19E92AAD5D7C4F96087F27B0F8185627 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableOutputHandle::SetSourcePlayable_Injected(UnityEngine.Playables.PlayableOutputHandle&,UnityEngine.Playables.PlayableHandle&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableOutputHandle_SetSourcePlayable_Injected_mEF960B22FFBF6C40F1E325EAD178AF7FE1E7754A (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___0__unity_self, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___1_target, int32_t ___2_port, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableOutputHandle::SetSourcePlayable(UnityEngine.Playables.PlayableHandle,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableOutputHandle_SetSourcePlayable_mBC96BBEB1838444B937337B985FFD9A6084A6A8D (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_target, int32_t ___1_port, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Playables.PlayableOutputHandle::GetSourceOutputPort_Injected(UnityEngine.Playables.PlayableOutputHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableOutputHandle_GetSourceOutputPort_Injected_m2B5CBD4B03237A502578DA147BFC96A59D32ACF0 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___0__unity_self, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Playables.PlayableOutputHandle::GetSourceOutputPort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableOutputHandle_GetSourceOutputPort_m9E9AA2A0E62DFBA3570DC262AFECD08FF0E71D1F (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableOutputHandle::SetWeight_Injected(UnityEngine.Playables.PlayableOutputHandle&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableOutputHandle_SetWeight_Injected_m3B1326E82C9C8B4F8BDB063C1ECB1FD55AFC08AA (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___0__unity_self, float ___1_weight, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableOutputHandle::SetWeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableOutputHandle_SetWeight_m6A8B44B22EFA5628A90A87085FD86D478913093F (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, float ___0_weight, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableOutputHandle::PushNotification_Injected(UnityEngine.Playables.PlayableOutputHandle&,UnityEngine.Playables.PlayableHandle&,UnityEngine.Playables.INotification,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableOutputHandle_PushNotification_Injected_mE72024374037D33096E5C815D513B51819D2809C (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___0__unity_self, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___1_origin, RuntimeObject* ___2_notification, RuntimeObject* ___3_context, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableOutputHandle::PushNotification(UnityEngine.Playables.PlayableHandle,UnityEngine.Playables.INotification,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableOutputHandle_PushNotification_m97131909E6A9A76742074B4023CA6C94A2A95610 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_origin, RuntimeObject* ___1_notification, RuntimeObject* ___2_context, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableOutputHandle::AddNotificationReceiver_Injected(UnityEngine.Playables.PlayableOutputHandle&,UnityEngine.Playables.INotificationReceiver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableOutputHandle_AddNotificationReceiver_Injected_m2963627A22A1E4C118F0DEB876A460A16C1497BC (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___0__unity_self, RuntimeObject* ___1_receiver, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableOutputHandle::AddNotificationReceiver(UnityEngine.Playables.INotificationReceiver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableOutputHandle_AddNotificationReceiver_m2E93B0DB0A7A98AECFDAEB02D610B45617FC357C (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, RuntimeObject* ___0_receiver, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableBinding/CreateOutputMethod::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateOutputMethod__ctor_m5A339017CD8ECB0140EB936FD2A5B589B20166B4 (CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableBinding UnityEngine.Playables.PlayableBinding::CreateInternal(System.String,UnityEngine.Object,System.Type,UnityEngine.Playables.PlayableBinding/CreateOutputMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 PlayableBinding_CreateInternal_m63C8C98E659B52725E0373019ECFCEC22167A47A (String_t* ___0_name, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_sourceObject, Type_t* ___2_sourceType, CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* ___3_createFunction, const RuntimeMethod* method) ;
// UnityEngine.Playables.ScriptPlayableOutput UnityEngine.Playables.ScriptPlayableOutput::Create(UnityEngine.Playables.PlayableGraph,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptPlayableOutput_t70DA4CCE83BAE5C0EE7D3BC19E3216DC8B6DCB1F ScriptPlayableOutput_Create_m458B29D78C5B8AD04B7F4A1D59319C46FED9C01A (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___0_graph, String_t* ___1_name, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableOutput UnityEngine.Playables.ScriptPlayableOutput::op_Implicit(UnityEngine.Playables.ScriptPlayableOutput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 ScriptPlayableOutput_op_Implicit_m5F36380C097556574DD030DB93C7D9927CEB03A5 (ScriptPlayableOutput_t70DA4CCE83BAE5C0EE7D3BC19E3216DC8B6DCB1F ___0_output, const RuntimeMethod* method) ;
// UnityEngine.Playables.ScriptPlayableOutput UnityEngine.Playables.ScriptPlayableOutput::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptPlayableOutput_t70DA4CCE83BAE5C0EE7D3BC19E3216DC8B6DCB1F ScriptPlayableOutput_get_Null_mEBA48EE25E0B02135A062DE97F5DA7017DB05E98 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.ScriptPlayableOutput::.ctor(UnityEngine.Playables.PlayableOutputHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptPlayableOutput__ctor_m867BA54A9DCDFCA187EA927F75A6903D0F8FF2C4 (ScriptPlayableOutput_t70DA4CCE83BAE5C0EE7D3BC19E3216DC8B6DCB1F* __this, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___0_handle, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::IsPlayableOutputOfType<UnityEngine.Playables.ScriptPlayableOutput>()
inline bool PlayableOutputHandle_IsPlayableOutputOfType_TisScriptPlayableOutput_t70DA4CCE83BAE5C0EE7D3BC19E3216DC8B6DCB1F_mD58D2B238CA80FB346C3D2F58C36173C475F477B (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*, const RuntimeMethod*))PlayableOutputHandle_IsPlayableOutputOfType_TisScriptPlayableOutput_t70DA4CCE83BAE5C0EE7D3BC19E3216DC8B6DCB1F_mD58D2B238CA80FB346C3D2F58C36173C475F477B_gshared)(__this, method);
}
// System.Void System.InvalidCastException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644 (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.ScriptPlayableOutput::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ScriptPlayableOutput_GetHandle_m21A3E97125928298D6942D0EDE58ADAD018E4E93 (ScriptPlayableOutput_t70DA4CCE83BAE5C0EE7D3BC19E3216DC8B6DCB1F* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::get_red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LinearColor_get_red_m376617B8E3156420835055189BB28D953FE46A2A (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LinearColor::set_red(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinearColor_set_red_m0ACFCEDDD205A6F235BE95936816E92898B01B52 (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::get_green()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LinearColor_get_green_mCCE90A662234EE3605368F3AEC14E51572665AE5 (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LinearColor::set_green(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinearColor_set_green_mBD9C7EA6415DC54B3F6B643C3CD02B71565F0694 (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::get_blue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LinearColor_get_blue_mAFAEA5D5590DD14CFC48BC18DF4BFEBBDCB0A99A (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LinearColor::set_blue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinearColor_set_blue_m3FEEAF946772BB177733B67D9DA4B72D84874375 (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.GraphicsSettings::get_lightsUseLinearIntensity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphicsSettings_get_lightsUseLinearIntensity_m74D1A18837CB7E9D3A9BF20D44212F94DD1F67B9 (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::RGBMultiplied(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_RGBMultiplied_m4B3BAE4310EA98451D608E0300331012AFFF1B01_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_multiplier, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_linear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_linear_m76EB88E15DA4E00D615DF33D1CEE51092683117C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Color::get_maxColorComponent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Color_get_maxColorComponent_m97D2940D48767ACC21D76F8CCEAD6898B722529C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, const RuntimeMethod* method) ;
// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LinearColor::Black()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 LinearColor_Black_mF5AEFA40487500C1683D14FFA58554BF4D7B1A42 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.DirectionalLight&,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_m112DEBB76EC57AC52E6384C97A3E8B2EAA867207 (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* ___0_light, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.PointLight&,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_mACE06E00CC639CA89F3847E9DB55FD0F00812A7A (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, PointLight_tD01A1428DC1015D98A527136034187F732433EA7* ___0_light, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.SpotLight&,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_m0A999D118CDCBDA99B9E24231ED057D943C9C67B (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* ___0_light, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.RectangleLight&,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_mDC887CA8191C6CADE1DB585D7FEB46B080B25038 (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* ___0_light, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.DiscLight&,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_mB2D1C73EDFEA6815E39A0FE3ED2F7BF9A7117632 (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* ___0_light, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::InitNoBake(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_InitNoBake_mBDF2EFB22D4BEE63B6F25F4EE9F1522D2866ED43 (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, int32_t ___0_lightInstanceID, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Light::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Light_get_color_mE7EB8F11BF394877B50A2F335627441889ADE536 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Light::get_intensity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Light::get_bounceIntensity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Light_get_bounceIntensity_m535008F539A0EF22BBB831113EC34F20D6331FAE (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LinearColor::Convert(UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 LinearColor_Convert_m0E220E18AC54A8040BAD7FFEB0D81538639F9BBA (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, float ___1_intensity, const RuntimeMethod* method) ;
// System.Single UnityEngine.Light::get_spotAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Light_get_spotAngle_m28B2CD7ADE25422693E7B1FA23E8615E9D7098FC (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Light::get_useColorTemperature()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Light_get_useColorTemperature_mD76967684F904F6068B58EE78BD65001D8AFF3EF (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Light::get_colorTemperature()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Light_get_colorTemperature_mA5B7C9A5B315B27625764B8CE7EF5ADC06060B08 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Mathf::CorrelatedColorTemperatureToRGB(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Mathf_CorrelatedColorTemperatureToRGB_m595A3D1E887CD42FE21CD2893D8E377B3F44153C (float ___0_kelvin, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Object::GetInstanceID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// UnityEngine.LightBakingOutput UnityEngine.Light::get_bakingOutput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90 Light_get_bakingOutput_mF383DB97CFD32D65DA468329E18DD2DD61521CED (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.LightmapBakeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t LightmapperUtils_Extract_m936FF4E20F593777EABF072404B37D0C1EB3AF5D (int32_t ___0_baketype, const RuntimeMethod* method) ;
// UnityEngine.LightShadows UnityEngine.Light::get_shadows()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Light_get_shadows_m1A11721F202C27838A7A8ED72455E6A727CEE6C5 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::ExtractColorTemperature(UnityEngine.Light)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F LightmapperUtils_ExtractColorTemperature_mEA79654385184193BC807A191696BE14B04ABEAA (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, const RuntimeMethod* method) ;
// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::ExtractIndirect(UnityEngine.Light)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 LightmapperUtils_ExtractIndirect_m5776341FC44CD3BBB634828E668732C2A490BB78 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::ApplyColorTemperature(UnityEngine.Color,UnityEngine.Experimental.GlobalIllumination.LinearColor&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_ApplyColorTemperature_m5286438BDED2F10292887505A26B1E33C714C325 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_cct, LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* ___1_lightColor, const RuntimeMethod* method) ;
// System.Single UnityEngine.Light::get_range()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Light_get_range_m4156F07BA6CD289DA47080B590D632721D975A22 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::ExtractInnerCone(UnityEngine.Light)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LightmapperUtils_ExtractInnerCone_m8B2B838A7D49A49D64813232503D5C3CA8957C5E (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, const RuntimeMethod* method) ;
// UnityEngine.Texture UnityEngine.Light::get_cookie()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* Light_get_cookie_m44A0C4B92F6CD6F2F8536A91C51B77FEEF59715E (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// UnityEngine.LightType UnityEngine.Light::get_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Light_get_type_m0D12CD1E54E010DC401F7371731D593DEF62D1C7 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Single UnityEngine.Light::get_cookieSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Light_get_cookieSize_m1BB417985207915659198F63CF825A23A8ED30B0 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Experimental.GlobalIllumination.LightDataGI>(System.Void*,System.Int32,Unity.Collections.Allocator)
inline NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mC82DECEB698D4AABF41EE9DF0E1FC00C8803BD3A (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mC82DECEB698D4AABF41EE9DF0E1FC00C8803BD3A_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate::Invoke(UnityEngine.Light[],Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_inline (RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* __this, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___0_requests, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D ___1_lightsOutput, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestLightsDelegate__ctor_mFFCE8681C67A169A04BEA2201C393E1FC84CAB7D (RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3FBD26AEC83F79DACB13A7EF6FE5F539A71F0902 (U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.DirectionalLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_m44511C1C63663F51CD77ABF24CC4B34B9A826F0F (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* ___1_dir, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_mF6521637E4DD97C8BBD71696B5A61C7B7B8C83D4 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.PointLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_m47570BBE32168BBEA4C823D83C8A94A4CBF03AE2 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, PointLight_tD01A1428DC1015D98A527136034187F732433EA7* ___1_point, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.SpotLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_m9F0C60CB137D268694B8CB324C73E799E1CE73F9 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* ___1_spot, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.RectangleLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_m3B3FFE050376D624857D5D67413BD532518949F1 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* ___1_rect, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.DiscLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_mA319A386DA025BF5F0B7D9C398ACD3BE3AF65ABB (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* ___1_disc, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Playables.CameraPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 CameraPlayable_GetHandle_mA04469CA50B43AF6219F9967B8AEB310CB5455BD (CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Experimental.Playables.CameraPlayable::Equals(UnityEngine.Experimental.Playables.CameraPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraPlayable_Equals_mD0FA195F3EA6511043E8F0AA1680CEB7E0E2E2CF (CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1* __this, CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1 ___0_other, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Playables.MaterialEffectPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 MaterialEffectPlayable_GetHandle_m748319E116317E9ADD1EA36A4EDA488338471058 (MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Experimental.Playables.MaterialEffectPlayable::Equals(UnityEngine.Experimental.Playables.MaterialEffectPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MaterialEffectPlayable_Equals_mC55640B5D29F90360F9743549FABD43C5AA320EC (MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504* __this, MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504 ___0_other, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Playables.TextureMixerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 TextureMixerPlayable_GetHandle_mB75CF651C6BDDF347ED6938D0F1DE4BED92BB7CD (TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Experimental.Playables.TextureMixerPlayable::Equals(UnityEngine.Experimental.Playables.TextureMixerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextureMixerPlayable_Equals_m6838329B39779020FC3309B7406B8A0418F44FE7 (TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445* __this, TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445 ___0_other, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Experimental.Playables.TexturePlayableOutput::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 TexturePlayableOutput_GetHandle_m482C2E6F3FB849142FA7936B1B6A0B9B072A1899 (TexturePlayableOutput_t289BEACD45B8E5183E91E8021EBD353110F5BC4B* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem::BuiltinUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BuiltinRuntimeReflectionSystem_BuiltinUpdate_m833B3EB0E69D46FDAB5A890FECB417C4D9D5D941 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuiltinRuntimeReflectionSystem_Dispose_m6B57B7E11B7A095063597FBCB0C6EE7036003F6B (BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE* __this, bool ___0_disposing, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuiltinRuntimeReflectionSystem__ctor_mC85D8357332DEC8325E27837409E463208ACE0E5 (BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE* __this, const RuntimeMethod* method) ;
// UnityEngine.Experimental.Rendering.IScriptableRuntimeReflectionSystem UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper::get_implementation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ScriptableRuntimeReflectionSystemWrapper_get_implementation_m1AFA781CCFEFE334D758AC43A9FAB9E0FB0F5C40_inline (ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper::set_implementation(UnityEngine.Experimental.Rendering.IScriptableRuntimeReflectionSystem)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScriptableRuntimeReflectionSystemWrapper_set_implementation_mF1552E093F0F437DF191D7CBB0CF7981C36744D8_inline (ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRuntimeReflectionSystemWrapper__ctor_mCF4DB3AC3AEB1FC08CB03DD0C1733E9BDED4DF8D (ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* __this, const RuntimeMethod* method) ;
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat_Native_TextureFormat(UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetGraphicsFormat_Native_TextureFormat_m4A193B562F6F81CE2C1C755B26B67564C2F65319 (int32_t ___0_format, bool ___1_isSRGB, const RuntimeMethod* method) ;
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat_Native_RenderTextureFormat(UnityEngine.RenderTextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetGraphicsFormat_Native_RenderTextureFormat_m27057B9C12BF2ADFF0C8A39BD7D03A9615304942 (int32_t ___0_format, bool ___1_isSRGB, const RuntimeMethod* method) ;
// UnityEngine.ColorSpace UnityEngine.QualitySettings::get_activeColorSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QualitySettings_get_activeColorSpace_m4F47784E7B0FE0A5497C8BAB9CA86BD576FB92F9 (const RuntimeMethod* method) ;
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat(UnityEngine.RenderTextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetGraphicsFormat_mB9E291EB1EC96594074112E54A7B9CAC20FC7BFA (int32_t ___0_format, bool ___1_isSRGB, const RuntimeMethod* method) ;
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetDepthStencilFormatFromBitsLegacy_Native(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetDepthStencilFormatFromBitsLegacy_Native_m6C8C3D62D09CAA5333599E53ED45700AEE76E06B (int32_t ___0_minimumDepthBits, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Assert(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D (bool ___0_condition, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SystemInfo::IsFormatSupported(UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.FormatUsage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_IsFormatSupported_m412D2A8B391BDBCD1EDB5C17ADAB724CDB123499 (int32_t ___0_format, int32_t ___1_usage, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::CanDecompressFormat(UnityEngine.Experimental.Rendering.GraphicsFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphicsFormatUtility_CanDecompressFormat_mDC3A7D8AC07ABAC875EACD11F48C5B571E22CEC6 (int32_t ___0_format, bool ___1_wholeImage, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogAssertion(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogAssertion_m71A412A496EAB476FFF6253618C706B2F1E4AFF0 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Assertions.AssertionException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssertionException__ctor_m01CD9ADC1B0067C20CDC2A0697BBF3969E67FEB6 (AssertionException_t13955C5225033D3A79D633A04E4D86E8FD0CC372* __this, String_t* ___0_message, String_t* ___1_userMessage, const RuntimeMethod* method) ;
// System.Void UnityEngine.Assertions.Assert::IsTrue(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsTrue_m390B3F48332F46CE76AB45491A60ACDCCF521AAE (bool ___0_condition, String_t* ___1_message, const RuntimeMethod* method) ;
// System.String UnityEngine.Assertions.AssertionMessageUtil::BooleanFailureMessage(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AssertionMessageUtil_BooleanFailureMessage_m1390F2418023DC1717341A836F0F40FBC5801FB4 (bool ___0_expected, const RuntimeMethod* method) ;
// System.Void UnityEngine.Assertions.Assert::Fail(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_Fail_mCC76351EF5EAA85F4012330D498CB802861B41BA (String_t* ___0_message, String_t* ___1_userMessage, const RuntimeMethod* method) ;
// System.String UnityEngine.Assertions.AssertionMessageUtil::GetEqualityMessage(System.Object,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AssertionMessageUtil_GetEqualityMessage_m64D77BB9CA4284DD9561C238BB1F97B566830DBB (RuntimeObject* ___0_actual, RuntimeObject* ___1_expected, bool ___2_expectEqual, const RuntimeMethod* method) ;
// System.String UnityEngine.Assertions.AssertionMessageUtil::NullFailureMessage(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AssertionMessageUtil_NullFailureMessage_mECBDB36C0C5433898BC4D3CF0AE55CEFBBCC9A50 (RuntimeObject* ___0_value, bool ___1_expectNull, const RuntimeMethod* method) ;
// System.Void UnityEngine.Assertions.Assert::AreEqual<System.Int32>(T,T,System.String)
inline void Assert_AreEqual_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1C7D690BD2B4127279886CDD4F1201F22D1BB81E (int32_t ___0_expected, int32_t ___1_actual, String_t* ___2_message, const RuntimeMethod* method)
{
	((  void (*) (int32_t, int32_t, String_t*, const RuntimeMethod*))Assert_AreEqual_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1C7D690BD2B4127279886CDD4F1201F22D1BB81E_gshared)(___0_expected, ___1_actual, ___2_message, method);
}
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.String System.Exception::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Exception_get_Message_mCFE0D38FDF9001405299AAE43BBE2A9AD806C441 (Exception_t* __this, const RuntimeMethod* method) ;
// System.String System.Environment::get_NewLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF (const RuntimeMethod* method) ;
// System.String UnityEngine.Assertions.AssertionMessageUtil::GetMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AssertionMessageUtil_GetMessage_m5AD26DAEC5DCCEB15C198EF6B70FED9E32BF299C (String_t* ___0_failureMessage, const RuntimeMethod* method) ;
// System.String UnityEngine.Assertions.AssertionMessageUtil::GetMessage(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AssertionMessageUtil_GetMessage_m0785AB2BEBDA81CFE63F87428268C91D63685EB3 (String_t* ___0_failureMessage, String_t* ___1_expected, const RuntimeMethod* method) ;
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63 (bool* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::GammaToLinearSpace(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_GammaToLinearSpace_mEF9E26BAD322E55448B286ABDCDF4A2CC236547F (float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.RenderPipeline::ProcessRenderRequests(UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera,System.Collections.Generic.List`1<UnityEngine.Camera/RenderRequest>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipeline_ProcessRenderRequests_m1303438384D0A5857A147C280A1AF0E16E488908 (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 ___0_context, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___1_camera, List_1_t77E053728435B6D4F08A615FE9CD7AEBE6EE7B48* ___2_renderRequests, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.Rendering.RenderPipeline::Render(UnityEngine.Rendering.ScriptableRenderContext,System.Collections.Generic.List`1<UnityEngine.Camera>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipeline_Render_m41E15C2221365D92636651792FBDAD1A04E8AF1A (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 ___0_context, List_1_tD2FA3273746E404D72561E8324608D18B52B533E* ___1_cameras, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mF6C79D8FC0E5B72BBAE2C467B674992253BA2B2A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 L_0 = ___0_context;
		List_1_tD2FA3273746E404D72561E8324608D18B52B533E* L_1 = ___1_cameras;
		NullCheck(L_1);
		CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* L_2;
		L_2 = List_1_ToArray_mF6C79D8FC0E5B72BBAE2C467B674992253BA2B2A(L_1, List_1_ToArray_mF6C79D8FC0E5B72BBAE2C467B674992253BA2B2A_RuntimeMethod_var);
		VirtualActionInvoker2< ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36, CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* >::Invoke(4 /* System.Void UnityEngine.Rendering.RenderPipeline::Render(UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera[]) */, __this, L_0, L_2);
		return;
	}
}
// System.Void UnityEngine.Rendering.RenderPipeline::InternalRender(UnityEngine.Rendering.ScriptableRenderContext,System.Collections.Generic.List`1<UnityEngine.Camera>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipeline_InternalRender_mCB77395158F4572F348D8227BA9127ABF1C9C5BE (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 ___0_context, List_1_tD2FA3273746E404D72561E8324608D18B52B533E* ___1_cameras, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0;
		L_0 = RenderPipeline_get_disposed_mF0D4B88DF44249E0FC2371697B913DD5A81B3850_inline(__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_2;
		L_2 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBB994086C18AA022E5A2DA0F304A8D5119EDD397)), __this, NULL);
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_3 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RenderPipeline_InternalRender_mCB77395158F4572F348D8227BA9127ABF1C9C5BE_RuntimeMethod_var)));
	}

IL_001c:
	{
		ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 L_4 = ___0_context;
		List_1_tD2FA3273746E404D72561E8324608D18B52B533E* L_5 = ___1_cameras;
		VirtualActionInvoker2< ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36, List_1_tD2FA3273746E404D72561E8324608D18B52B533E* >::Invoke(6 /* System.Void UnityEngine.Rendering.RenderPipeline::Render(UnityEngine.Rendering.ScriptableRenderContext,System.Collections.Generic.List`1<UnityEngine.Camera>) */, __this, L_4, L_5);
		return;
	}
}
// System.Void UnityEngine.Rendering.RenderPipeline::InternalRenderWithRequests(UnityEngine.Rendering.ScriptableRenderContext,System.Collections.Generic.List`1<UnityEngine.Camera>,System.Collections.Generic.List`1<UnityEngine.Camera/RenderRequest>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipeline_InternalRenderWithRequests_mA4E809CF43979778D7F5048F79BF506746E82B57 (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 ___0_context, List_1_tD2FA3273746E404D72561E8324608D18B52B533E* ___1_cameras, List_1_t77E053728435B6D4F08A615FE9CD7AEBE6EE7B48* ___2_renderRequests, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mDCDDC4E9E15CD83C00D4CC32F79830261769F65C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m7CEE3A6E144C8D86DE6490620206FAB13432ACF6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* G_B5_1 = NULL;
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* G_B3_1 = NULL;
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* G_B4_1 = NULL;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* G_B6_0 = NULL;
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 G_B6_1;
	memset((&G_B6_1), 0, sizeof(G_B6_1));
	RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* G_B6_2 = NULL;
	{
		bool L_0;
		L_0 = RenderPipeline_get_disposed_mF0D4B88DF44249E0FC2371697B913DD5A81B3850_inline(__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_2;
		L_2 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBB994086C18AA022E5A2DA0F304A8D5119EDD397)), __this, NULL);
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_3 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RenderPipeline_InternalRenderWithRequests_mA4E809CF43979778D7F5048F79BF506746E82B57_RuntimeMethod_var)));
	}

IL_001c:
	{
		ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 L_4 = ___0_context;
		List_1_tD2FA3273746E404D72561E8324608D18B52B533E* L_5 = ___1_cameras;
		G_B3_0 = L_4;
		G_B3_1 = __this;
		if (!L_5)
		{
			G_B5_0 = L_4;
			G_B5_1 = __this;
			goto IL_0032;
		}
	}
	{
		List_1_tD2FA3273746E404D72561E8324608D18B52B533E* L_6 = ___1_cameras;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_mDCDDC4E9E15CD83C00D4CC32F79830261769F65C_inline(L_6, List_1_get_Count_mDCDDC4E9E15CD83C00D4CC32F79830261769F65C_RuntimeMethod_var);
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
		if (!L_7)
		{
			G_B5_0 = G_B3_0;
			G_B5_1 = G_B3_1;
			goto IL_0032;
		}
	}
	{
		List_1_tD2FA3273746E404D72561E8324608D18B52B533E* L_8 = ___1_cameras;
		NullCheck(L_8);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_9;
		L_9 = List_1_get_Item_m7CEE3A6E144C8D86DE6490620206FAB13432ACF6(L_8, 0, List_1_get_Item_m7CEE3A6E144C8D86DE6490620206FAB13432ACF6_RuntimeMethod_var);
		G_B6_0 = L_9;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_0033;
	}

IL_0032:
	{
		G_B6_0 = ((Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)(NULL));
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_0033:
	{
		List_1_t77E053728435B6D4F08A615FE9CD7AEBE6EE7B48* L_10 = ___2_renderRequests;
		NullCheck(G_B6_2);
		VirtualActionInvoker3< ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*, List_1_t77E053728435B6D4F08A615FE9CD7AEBE6EE7B48* >::Invoke(5 /* System.Void UnityEngine.Rendering.RenderPipeline::ProcessRenderRequests(UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera,System.Collections.Generic.List`1<UnityEngine.Camera/RenderRequest>) */, G_B6_2, G_B6_1, G_B6_0, L_10);
		return;
	}
}
// System.Boolean UnityEngine.Rendering.RenderPipeline::get_disposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderPipeline_get_disposed_mF0D4B88DF44249E0FC2371697B913DD5A81B3850 (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CdisposedU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void UnityEngine.Rendering.RenderPipeline::set_disposed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipeline_set_disposed_mB7EC4BD04C80015CBCC0B92A65A6DE615F2828A8 (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CdisposedU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Rendering.RenderPipeline::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipeline_Dispose_mDF8A62A6B7D3A00128C9341921C036D015C41179 (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		VirtualActionInvoker1< bool >::Invoke(7 /* System.Void UnityEngine.Rendering.RenderPipeline::Dispose(System.Boolean) */, __this, (bool)1);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		RenderPipeline_set_disposed_mB7EC4BD04C80015CBCC0B92A65A6DE615F2828A8_inline(__this, (bool)1, NULL);
		return;
	}
}
// System.Void UnityEngine.Rendering.RenderPipeline::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipeline_Dispose_m581E2B33EF0CCAF2C3E7BD71AE32B4974D259286 (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	{
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
// UnityEngine.Rendering.RenderPipeline UnityEngine.Rendering.RenderPipelineAsset::InternalCreatePipeline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* RenderPipelineAsset_InternalCreatePipeline_m662E6A3D3B14C19D5318E172A4AF81FEF71C6252 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* V_0 = NULL;
	Exception_t* V_1 = NULL;
	bool V_2 = false;
	RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B6_0 = 0;
	{
		V_0 = (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69*)NULL;
	}
	try
	{// begin try (depth: 1)
		RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* L_0;
		L_0 = VirtualFuncInvoker0< RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* >::Invoke(24 /* UnityEngine.Rendering.RenderPipeline UnityEngine.Rendering.RenderPipelineAsset::CreatePipeline() */, __this);
		V_0 = L_0;
		goto IL_0065;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000e;
		}
		throw e;
	}

CATCH_000e:
	{// begin catch(System.Exception)
		{
			V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			Exception_t* L_1 = V_1;
			NullCheck(L_1);
			RuntimeObject* L_2;
			L_2 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Collections.IDictionary System.Exception::get_Data() */, L_1);
			NullCheck(L_2);
			bool L_3;
			L_3 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(4 /* System.Boolean System.Collections.IDictionary::Contains(System.Object) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var)), L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral180C5DB7272B54061862DF51C798C0FE1E1AB386)));
			if (!L_3)
			{
				goto IL_0056;
			}
		}
		{
			Exception_t* L_4 = V_1;
			NullCheck(L_4);
			RuntimeObject* L_5;
			L_5 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Collections.IDictionary System.Exception::get_Data() */, L_4);
			NullCheck(L_5);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral180C5DB7272B54061862DF51C798C0FE1E1AB386)));
			if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_6, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))))
			{
				goto IL_0056;
			}
		}
		{
			Exception_t* L_7 = V_1;
			NullCheck(L_7);
			RuntimeObject* L_8;
			L_8 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Collections.IDictionary System.Exception::get_Data() */, L_7);
			NullCheck(L_8);
			RuntimeObject* L_9;
			L_9 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var)), L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral180C5DB7272B54061862DF51C798C0FE1E1AB386)));
			G_B6_0 = ((((int32_t)((((int32_t)((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_9, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))))))) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			goto IL_0057;
		}

IL_0056:
		{
			G_B6_0 = 1;
		}

IL_0057:
		{
			V_2 = (bool)G_B6_0;
			bool L_10 = V_2;
			if (!L_10)
			{
				goto IL_0062;
			}
		}
		{
			Exception_t* L_11 = V_1;
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
			Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(L_11, NULL);
		}

IL_0062:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0065;
		}
	}// end catch (depth: 1)

IL_0065:
	{
		RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* L_12 = V_0;
		V_3 = L_12;
		goto IL_0069;
	}

IL_0069:
	{
		RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* L_13 = V_3;
		return L_13;
	}
}
// System.String[] UnityEngine.Rendering.RenderPipelineAsset::get_renderingLayerMaskNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* RenderPipelineAsset_get_renderingLayerMaskNames_mC0978F38B2EADD1462593AC6D8395E612CB1329D (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL;
	}
}
// System.String[] UnityEngine.Rendering.RenderPipelineAsset::get_prefixedRenderingLayerMaskNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* RenderPipelineAsset_get_prefixedRenderingLayerMaskNames_m89254E02D74CC6FC9320104B8A1748534FE55F6B (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL;
	}
}
// UnityEngine.Material UnityEngine.Rendering.RenderPipelineAsset::get_defaultMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* RenderPipelineAsset_get_defaultMaterial_mCF112570E7B47208A0B700BA97B33CAE6713D323 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
	}
}
// UnityEngine.Shader UnityEngine.Rendering.RenderPipelineAsset::get_autodeskInteractiveShader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* RenderPipelineAsset_get_autodeskInteractiveShader_m261A0788B4F73AFC5A50953878552BC3BFF8B674 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)NULL;
	}
}
// UnityEngine.Shader UnityEngine.Rendering.RenderPipelineAsset::get_autodeskInteractiveTransparentShader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* RenderPipelineAsset_get_autodeskInteractiveTransparentShader_m6E2A2439FCB378F64DC46CB6DB517A1661A306F8 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)NULL;
	}
}
// UnityEngine.Shader UnityEngine.Rendering.RenderPipelineAsset::get_autodeskInteractiveMaskedShader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* RenderPipelineAsset_get_autodeskInteractiveMaskedShader_m42DB9A70B290E217B91616E9274C9B7E58D54362 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)NULL;
	}
}
// UnityEngine.Shader UnityEngine.Rendering.RenderPipelineAsset::get_terrainDetailLitShader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* RenderPipelineAsset_get_terrainDetailLitShader_m74F2FA112CD18493E7003F6F711AA09A8C930136 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)NULL;
	}
}
// UnityEngine.Shader UnityEngine.Rendering.RenderPipelineAsset::get_terrainDetailGrassShader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* RenderPipelineAsset_get_terrainDetailGrassShader_mBE126045BF9048B59CE56D1BD9C69C3DEB4CDD96 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)NULL;
	}
}
// UnityEngine.Shader UnityEngine.Rendering.RenderPipelineAsset::get_terrainDetailGrassBillboardShader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* RenderPipelineAsset_get_terrainDetailGrassBillboardShader_mE233539926B92ADB7A057C34CBCD7E51823C75A2 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)NULL;
	}
}
// UnityEngine.Material UnityEngine.Rendering.RenderPipelineAsset::get_defaultParticleMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* RenderPipelineAsset_get_defaultParticleMaterial_mC68CA6787815E00CF501F268F34DA0B3C83B3013 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
	}
}
// UnityEngine.Material UnityEngine.Rendering.RenderPipelineAsset::get_defaultLineMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* RenderPipelineAsset_get_defaultLineMaterial_mB4DD122B043417F3810FEAAA74E79B369A26B484 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
	}
}
// UnityEngine.Material UnityEngine.Rendering.RenderPipelineAsset::get_defaultTerrainMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* RenderPipelineAsset_get_defaultTerrainMaterial_m129D75CFE9689112452AA911C24BEE4939ADB520 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
	}
}
// UnityEngine.Material UnityEngine.Rendering.RenderPipelineAsset::get_defaultUIMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* RenderPipelineAsset_get_defaultUIMaterial_mBB9F6694EEEB97AC6140C094A48743660A0DAF04 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
	}
}
// UnityEngine.Material UnityEngine.Rendering.RenderPipelineAsset::get_defaultUIOverdrawMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* RenderPipelineAsset_get_defaultUIOverdrawMaterial_m19832E76629C0AFC18F0D61C5C1CC47533200038 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
	}
}
// UnityEngine.Material UnityEngine.Rendering.RenderPipelineAsset::get_defaultUIETC1SupportedMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* RenderPipelineAsset_get_defaultUIETC1SupportedMaterial_m2D1DC4B89F59283C8AE3101F3DC05D88C10D4C10 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
	}
}
// UnityEngine.Material UnityEngine.Rendering.RenderPipelineAsset::get_default2DMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* RenderPipelineAsset_get_default2DMaterial_m2418C7E1A0974B2A06CF3BE81590C7B0DF1DB113 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
	}
}
// UnityEngine.Material UnityEngine.Rendering.RenderPipelineAsset::get_default2DMaskMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* RenderPipelineAsset_get_default2DMaskMaterial_mEE67105F80768BDFD1C93E8709FEBF2D4561E14E (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
	}
}
// UnityEngine.Shader UnityEngine.Rendering.RenderPipelineAsset::get_defaultShader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* RenderPipelineAsset_get_defaultShader_m633AD6A97B2D1D436E42920D766B1283C1FED858 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)NULL;
	}
}
// UnityEngine.Shader UnityEngine.Rendering.RenderPipelineAsset::get_defaultSpeedTree7Shader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* RenderPipelineAsset_get_defaultSpeedTree7Shader_mCEF3795C9E36F0A9D9A3CE29824790B172637252 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)NULL;
	}
}
// UnityEngine.Shader UnityEngine.Rendering.RenderPipelineAsset::get_defaultSpeedTree8Shader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* RenderPipelineAsset_get_defaultSpeedTree8Shader_mAEB3D02FC0A0016BAC5C22BC1967827403E5C17A (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	{
		return (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)NULL;
	}
}
// System.Void UnityEngine.Rendering.RenderPipelineAsset::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineAsset_OnValidate_mD160C7BDEA559BAF3DDA48B4819307E07B377F52 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* L_0 = ((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_CurrentPipelineAsset_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, __this, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipelineManager_CleanupRenderPipeline_m1104AEE59AFE2EC1F1AD15DCF862802230466F99(NULL);
		RenderPipelineManager_PrepareRenderPipeline_m342C65E962B20B547DB2BAF537EA870457736108(__this, NULL);
	}

IL_001f:
	{
		return;
	}
}
// System.Void UnityEngine.Rendering.RenderPipelineAsset::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineAsset_OnDisable_mE99CEED707BDC901AD37DC976FA3A3A313E7E00C (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipelineManager_CleanupRenderPipeline_m1104AEE59AFE2EC1F1AD15DCF862802230466F99(NULL);
		return;
	}
}
// System.Void UnityEngine.Rendering.RenderPipelineAsset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineAsset__ctor_mC45BECAED54BEDC4555AF010323EABF49BA7B78A (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* __this, const RuntimeMethod* method) 
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
// UnityEngine.Rendering.RenderPipeline UnityEngine.Rendering.RenderPipelineManager::get_currentPipeline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* RenderPipelineManager_get_currentPipeline_m270A15A23593BAD8D6A20CE2E328210FF9AA692D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* L_0 = ((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_currentPipeline_4;
		return L_0;
	}
}
// System.Void UnityEngine.Rendering.RenderPipelineManager::set_currentPipeline(UnityEngine.Rendering.RenderPipeline)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineManager_set_currentPipeline_m1C8CDEC2FD862823D0C4DC007CB57DBAFB1CDB3F (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B3_0 = NULL;
	{
		RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		String_t* L_1 = ((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_builtinPipelineName_3;
		G_B3_0 = L_1;
		goto IL_0016;
	}

IL_000b:
	{
		RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* L_2 = ___0_value;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_2, NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		G_B3_0 = L_4;
	}

IL_0016:
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_currentPipelineType_2 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_currentPipelineType_2), (void*)G_B3_0);
		RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* L_5 = ___0_value;
		((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_currentPipeline_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_currentPipeline_4), (void*)L_5);
		return;
	}
}
// System.Void UnityEngine.Rendering.RenderPipelineManager::OnActiveRenderPipelineTypeChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineManager_OnActiveRenderPipelineTypeChanged_m7BCA10285B43964387C7DA20EFC7C0C6A47C4E24 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___activeRenderPipelineTypeChanged_5;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0012;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
	}

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.Rendering.RenderPipelineManager::HandleRenderPipelineChange(UnityEngine.Rendering.RenderPipelineAsset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineManager_HandleRenderPipelineChange_m8B7BA0E0ADC1AD84C4A2E119E08C225EF519482E (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* ___0_pipelineAsset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* L_0 = ((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_CurrentPipelineAsset_0;
		RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* L_1 = ___0_pipelineAsset;
		V_0 = (bool)((((int32_t)((((RuntimeObject*)(RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E*)L_0) == ((RuntimeObject*)(RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E*)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipelineManager_CleanupRenderPipeline_m1104AEE59AFE2EC1F1AD15DCF862802230466F99(NULL);
		RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* L_4 = ___0_pipelineAsset;
		((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_CurrentPipelineAsset_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_CurrentPipelineAsset_0), (void*)L_4);
	}

IL_0020:
	{
		return;
	}
}
// System.Void UnityEngine.Rendering.RenderPipelineManager::CleanupRenderPipeline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineManager_CleanupRenderPipeline_m1104AEE59AFE2EC1F1AD15DCF862802230466F99 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* L_0;
		L_0 = RenderPipelineManager_get_currentPipeline_m270A15A23593BAD8D6A20CE2E328210FF9AA692D_inline(NULL);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* L_1;
		L_1 = RenderPipelineManager_get_currentPipeline_m270A15A23593BAD8D6A20CE2E328210FF9AA692D_inline(NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = RenderPipeline_get_disposed_mF0D4B88DF44249E0FC2371697B913DD5A81B3850_inline(L_1, NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
	}

IL_0018:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0041;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* L_4;
		L_4 = RenderPipelineManager_get_currentPipeline_m270A15A23593BAD8D6A20CE2E328210FF9AA692D_inline(NULL);
		NullCheck(L_4);
		RenderPipeline_Dispose_mDF8A62A6B7D3A00128C9341921C036D015C41179(L_4, NULL);
		((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_CurrentPipelineAsset_0 = (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_CurrentPipelineAsset_0), (void*)(RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E*)NULL);
		RenderPipelineManager_set_currentPipeline_m1C8CDEC2FD862823D0C4DC007CB57DBAFB1CDB3F((RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69*)NULL, NULL);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_5 = (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6*)il2cpp_codegen_object_new(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		SupportedRenderingFeatures__ctor_mF7728980F81142B7BD45FBB25AB001B17A4BF0ED(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_set_active_mB2A1A6137C816592E6526CD3DA7405260EAEA8AE(L_5, NULL);
	}

IL_0041:
	{
		return;
	}
}
// System.String UnityEngine.Rendering.RenderPipelineManager::GetCurrentPipelineAssetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RenderPipelineManager_GetCurrentPipelineAssetType_m78BBEBD08F2BCB77FA23BDCD54C10A4102115EF5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		String_t* L_0 = ((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_currentPipelineType_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Rendering.RenderPipelineManager::DoRenderLoop_Internal(UnityEngine.Rendering.RenderPipelineAsset,System.IntPtr,System.Collections.Generic.List`1<UnityEngine.Camera/RenderRequest>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineManager_DoRenderLoop_Internal_m01D54C058082806D20515903AC0558768DA1A0FA (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* ___0_pipe, intptr_t ___1_loopPtr, List_1_t77E053728435B6D4F08A615FE9CD7AEBE6EE7B48* ___2_renderRequests, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mFA6D8529DA219A26E2A3547C04EA59BC2F9ED69D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	{
		RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* L_0 = ___0_pipe;
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipelineManager_PrepareRenderPipeline_m342C65E962B20B547DB2BAF537EA870457736108(L_0, NULL);
		RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* L_1;
		L_1 = RenderPipelineManager_get_currentPipeline_m270A15A23593BAD8D6A20CE2E328210FF9AA692D_inline(NULL);
		V_1 = (bool)((((RuntimeObject*)(RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		goto IL_006e;
	}

IL_0016:
	{
		intptr_t L_3 = ___1_loopPtr;
		ScriptableRenderContext__ctor_m10159F14BB69F555C375E13BB77A1898FDB42FA5((&V_0), L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		List_1_tD2FA3273746E404D72561E8324608D18B52B533E* L_4 = ((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_Cameras_1;
		NullCheck(L_4);
		List_1_Clear_mFA6D8529DA219A26E2A3547C04EA59BC2F9ED69D_inline(L_4, List_1_Clear_mFA6D8529DA219A26E2A3547C04EA59BC2F9ED69D_RuntimeMethod_var);
		List_1_tD2FA3273746E404D72561E8324608D18B52B533E* L_5 = ((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_Cameras_1;
		ScriptableRenderContext_GetCameras_m9B2329F79132EE49B719560AD739FD3601C44189((&V_0), L_5, NULL);
		List_1_t77E053728435B6D4F08A615FE9CD7AEBE6EE7B48* L_6 = ___2_renderRequests;
		V_2 = (bool)((((RuntimeObject*)(List_1_t77E053728435B6D4F08A615FE9CD7AEBE6EE7B48*)L_6) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0051;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* L_8;
		L_8 = RenderPipelineManager_get_currentPipeline_m270A15A23593BAD8D6A20CE2E328210FF9AA692D_inline(NULL);
		ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 L_9 = V_0;
		List_1_tD2FA3273746E404D72561E8324608D18B52B533E* L_10 = ((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_Cameras_1;
		NullCheck(L_8);
		RenderPipeline_InternalRender_mCB77395158F4572F348D8227BA9127ABF1C9C5BE(L_8, L_9, L_10, NULL);
		goto IL_0063;
	}

IL_0051:
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* L_11;
		L_11 = RenderPipelineManager_get_currentPipeline_m270A15A23593BAD8D6A20CE2E328210FF9AA692D_inline(NULL);
		ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 L_12 = V_0;
		List_1_tD2FA3273746E404D72561E8324608D18B52B533E* L_13 = ((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_Cameras_1;
		List_1_t77E053728435B6D4F08A615FE9CD7AEBE6EE7B48* L_14 = ___2_renderRequests;
		NullCheck(L_11);
		RenderPipeline_InternalRenderWithRequests_mA4E809CF43979778D7F5048F79BF506746E82B57(L_11, L_12, L_13, L_14, NULL);
	}

IL_0063:
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		List_1_tD2FA3273746E404D72561E8324608D18B52B533E* L_15 = ((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_Cameras_1;
		NullCheck(L_15);
		List_1_Clear_mFA6D8529DA219A26E2A3547C04EA59BC2F9ED69D_inline(L_15, List_1_Clear_mFA6D8529DA219A26E2A3547C04EA59BC2F9ED69D_RuntimeMethod_var);
	}

IL_006e:
	{
		return;
	}
}
// System.Void UnityEngine.Rendering.RenderPipelineManager::PrepareRenderPipeline(UnityEngine.Rendering.RenderPipelineAsset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineManager_PrepareRenderPipeline_m342C65E962B20B547DB2BAF537EA870457736108 (RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* ___0_pipelineAsset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* L_0 = ___0_pipelineAsset;
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipelineManager_HandleRenderPipelineChange_m8B7BA0E0ADC1AD84C4A2E119E08C225EF519482E(L_0, NULL);
		RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* L_1 = ((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_CurrentPipelineAsset_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* L_3;
		L_3 = RenderPipelineManager_get_currentPipeline_m270A15A23593BAD8D6A20CE2E328210FF9AA692D_inline(NULL);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* L_4;
		L_4 = RenderPipelineManager_get_currentPipeline_m270A15A23593BAD8D6A20CE2E328210FF9AA692D_inline(NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = RenderPipeline_get_disposed_mF0D4B88DF44249E0FC2371697B913DD5A81B3850_inline(L_4, NULL);
		G_B4_0 = ((int32_t)(L_5));
		goto IL_0029;
	}

IL_0028:
	{
		G_B4_0 = 1;
	}

IL_0029:
	{
		G_B6_0 = G_B4_0;
		goto IL_002c;
	}

IL_002b:
	{
		G_B6_0 = 0;
	}

IL_002c:
	{
		V_0 = (bool)G_B6_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0042;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* L_7 = ((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_CurrentPipelineAsset_0;
		NullCheck(L_7);
		RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* L_8;
		L_8 = RenderPipelineAsset_InternalCreatePipeline_m662E6A3D3B14C19D5318E172A4AF81FEF71C6252(L_7, NULL);
		RenderPipelineManager_set_currentPipeline_m1C8CDEC2FD862823D0C4DC007CB57DBAFB1CDB3F(L_8, NULL);
	}

IL_0042:
	{
		return;
	}
}
// System.Void UnityEngine.Rendering.RenderPipelineManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineManager__cctor_m8A9308C1CD1B4F533F5D9855ECB44D6B71620807 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m735F7A05528CC71E71E3019311F2E22CF9E2C681_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD2FA3273746E404D72561E8324608D18B52B533E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC54E787F785B4E40A3D3688157624B421E8D4B05);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tD2FA3273746E404D72561E8324608D18B52B533E* L_0 = (List_1_tD2FA3273746E404D72561E8324608D18B52B533E*)il2cpp_codegen_object_new(List_1_tD2FA3273746E404D72561E8324608D18B52B533E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m735F7A05528CC71E71E3019311F2E22CF9E2C681(L_0, List_1__ctor_m735F7A05528CC71E71E3019311F2E22CF9E2C681_RuntimeMethod_var);
		((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_Cameras_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_Cameras_1), (void*)L_0);
		((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_builtinPipelineName_3 = _stringLiteralC54E787F785B4E40A3D3688157624B421E8D4B05;
		Il2CppCodeGenWriteBarrier((void**)(&((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_builtinPipelineName_3), (void*)_stringLiteralC54E787F785B4E40A3D3688157624B421E8D4B05);
		((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_currentPipeline_4 = (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_currentPipeline_4), (void*)(RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69*)NULL);
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
// System.Void UnityEngine.Rendering.ScriptableRenderContext::GetCameras_Internal(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_GetCameras_Internal_m852016B3544E3ED5FEFB9695EC175622A5B6A8C8 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, Type_t* ___0_listType, RuntimeObject* ___1_resultList, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___0_listType;
		RuntimeObject* L_1 = ___1_resultList;
		il2cpp_codegen_runtime_class_init_inline(ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var);
		ScriptableRenderContext_GetCameras_Internal_Injected_mFA0C805805CE2CC5BB6AD8DB0075733BF194FEE7(__this, L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ScriptableRenderContext_GetCameras_Internal_m852016B3544E3ED5FEFB9695EC175622A5B6A8C8_AdjustorThunk (RuntimeObject* __this, Type_t* ___0_listType, RuntimeObject* ___1_resultList, const RuntimeMethod* method)
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*>(__this + _offset);
	ScriptableRenderContext_GetCameras_Internal_m852016B3544E3ED5FEFB9695EC175622A5B6A8C8(_thisAdjusted, ___0_listType, ___1_resultList, method);
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext__ctor_m10159F14BB69F555C375E13BB77A1898FDB42FA5 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, intptr_t ___0_ptr, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_ptr;
		__this->___m_Ptr_1 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void ScriptableRenderContext__ctor_m10159F14BB69F555C375E13BB77A1898FDB42FA5_AdjustorThunk (RuntimeObject* __this, intptr_t ___0_ptr, const RuntimeMethod* method)
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*>(__this + _offset);
	ScriptableRenderContext__ctor_m10159F14BB69F555C375E13BB77A1898FDB42FA5(_thisAdjusted, ___0_ptr, method);
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::GetCameras(System.Collections.Generic.List`1<UnityEngine.Camera>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_GetCameras_m9B2329F79132EE49B719560AD739FD3601C44189 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, List_1_tD2FA3273746E404D72561E8324608D18B52B533E* ___0_results, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		List_1_tD2FA3273746E404D72561E8324608D18B52B533E* L_2 = ___0_results;
		ScriptableRenderContext_GetCameras_Internal_m852016B3544E3ED5FEFB9695EC175622A5B6A8C8(__this, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ScriptableRenderContext_GetCameras_m9B2329F79132EE49B719560AD739FD3601C44189_AdjustorThunk (RuntimeObject* __this, List_1_tD2FA3273746E404D72561E8324608D18B52B533E* ___0_results, const RuntimeMethod* method)
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*>(__this + _offset);
	ScriptableRenderContext_GetCameras_m9B2329F79132EE49B719560AD739FD3601C44189(_thisAdjusted, ___0_results, method);
}
// System.Boolean UnityEngine.Rendering.ScriptableRenderContext::Equals(UnityEngine.Rendering.ScriptableRenderContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ScriptableRenderContext_Equals_mBFDA5815F2B6ABA9B16503DA906B8BA42078718D (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Ptr_1);
		ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 L_1 = ___0_other;
		intptr_t L_2 = L_1.___m_Ptr_1;
		intptr_t L_3 = L_2;
		RuntimeObject* L_4 = Box(IntPtr_t_il2cpp_TypeInfo_var, &L_3);
		bool L_5;
		L_5 = IntPtr_Equals_m0F39AB64A7BBD67190E745FF8334A5FC766CB26E(L_0, L_4, NULL);
		V_0 = L_5;
		goto IL_001a;
	}

IL_001a:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C  bool ScriptableRenderContext_Equals_mBFDA5815F2B6ABA9B16503DA906B8BA42078718D_AdjustorThunk (RuntimeObject* __this, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 ___0_other, const RuntimeMethod* method)
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*>(__this + _offset);
	bool _returnValue;
	_returnValue = ScriptableRenderContext_Equals_mBFDA5815F2B6ABA9B16503DA906B8BA42078718D(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Rendering.ScriptableRenderContext::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ScriptableRenderContext_Equals_m99E5A233945DFC3B9A786F2413ECE68E5019AB88 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		RuntimeObject* L_0 = ___0_obj;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0027;
	}

IL_000d:
	{
		RuntimeObject* L_2 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_2, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject* L_3 = ___0_obj;
		bool L_4;
		L_4 = ScriptableRenderContext_Equals_mBFDA5815F2B6ABA9B16503DA906B8BA42078718D(__this, ((*(ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*)((ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*)(ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*)UnBox(L_3, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var)))), NULL);
		G_B5_0 = ((int32_t)(L_4));
		goto IL_0024;
	}

IL_0023:
	{
		G_B5_0 = 0;
	}

IL_0024:
	{
		V_1 = (bool)G_B5_0;
		goto IL_0027;
	}

IL_0027:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool ScriptableRenderContext_Equals_m99E5A233945DFC3B9A786F2413ECE68E5019AB88_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*>(__this + _offset);
	bool _returnValue;
	_returnValue = ScriptableRenderContext_Equals_m99E5A233945DFC3B9A786F2413ECE68E5019AB88(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.Int32 UnityEngine.Rendering.ScriptableRenderContext::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScriptableRenderContext_GetHashCode_mA1EE09239F1ACFC29A2ADB027D5E76E690510207 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Ptr_1);
		int32_t L_1;
		L_1 = IntPtr_GetHashCode_m669B16AD7483C1C396E48F41D9CAC4B719E38F3D(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t ScriptableRenderContext_GetHashCode_mA1EE09239F1ACFC29A2ADB027D5E76E690510207_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ScriptableRenderContext_GetHashCode_mA1EE09239F1ACFC29A2ADB027D5E76E690510207(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext__cctor_m0C385A2E228FAAEBACE8E912E26F05147525E8B1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCE1912E091B2153DFAE28F4F55D34CD3C4EF3D4);
		s_Il2CppMethodInitialized = true;
	}
	{
		ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 L_0;
		memset((&L_0), 0, sizeof(L_0));
		ShaderTagId__ctor_m4191968F1D2CE19F9092253EC10F83734A9CFF5B((&L_0), _stringLiteralCCE1912E091B2153DFAE28F4F55D34CD3C4EF3D4, /*hidden argument*/NULL);
		((ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_StaticFields*)il2cpp_codegen_static_fields_for(ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_il2cpp_TypeInfo_var))->___kRenderTypeTag_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Rendering.ScriptableRenderContext::GetCameras_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&,System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_GetCameras_Internal_Injected_mFA0C805805CE2CC5BB6AD8DB0075733BF194FEE7 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* ___0__unity_self, Type_t* ___1_listType, RuntimeObject* ___2_resultList, const RuntimeMethod* method) 
{
	typedef void (*ScriptableRenderContext_GetCameras_Internal_Injected_mFA0C805805CE2CC5BB6AD8DB0075733BF194FEE7_ftn) (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36*, Type_t*, RuntimeObject*);
	static ScriptableRenderContext_GetCameras_Internal_Injected_mFA0C805805CE2CC5BB6AD8DB0075733BF194FEE7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ScriptableRenderContext_GetCameras_Internal_Injected_mFA0C805805CE2CC5BB6AD8DB0075733BF194FEE7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.ScriptableRenderContext::GetCameras_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&,System.Type,System.Object)");
	_il2cpp_icall_func(___0__unity_self, ___1_listType, ___2_resultList);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.ShaderTagId::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderTagId__ctor_m4191968F1D2CE19F9092253EC10F83734A9CFF5B (ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_name;
		int32_t L_1;
		L_1 = Shader_TagToID_m5B5214F0AABE47C7465EEA717C78568AE1251FE9(L_0, NULL);
		__this->___m_Id_0 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void ShaderTagId__ctor_m4191968F1D2CE19F9092253EC10F83734A9CFF5B_AdjustorThunk (RuntimeObject* __this, String_t* ___0_name, const RuntimeMethod* method)
{
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0*>(__this + _offset);
	ShaderTagId__ctor_m4191968F1D2CE19F9092253EC10F83734A9CFF5B(_thisAdjusted, ___0_name, method);
}
// System.Boolean UnityEngine.Rendering.ShaderTagId::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShaderTagId_Equals_m02826F7AFC63AA3AE5DB14F7A891F8F173FD9A33 (ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		bool L_2;
		L_2 = ShaderTagId_Equals_m932EFCC38C276EEB2784BBC866330F4C595F52E0(__this, ((*(ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0*)((ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0*)(ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0*)UnBox(L_1, ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0_il2cpp_TypeInfo_var)))), NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
	}

IL_0018:
	{
		V_0 = (bool)G_B3_0;
		goto IL_001b;
	}

IL_001b:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool ShaderTagId_Equals_m02826F7AFC63AA3AE5DB14F7A891F8F173FD9A33_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0*>(__this + _offset);
	bool _returnValue;
	_returnValue = ShaderTagId_Equals_m02826F7AFC63AA3AE5DB14F7A891F8F173FD9A33(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Rendering.ShaderTagId::Equals(UnityEngine.Rendering.ShaderTagId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShaderTagId_Equals_m932EFCC38C276EEB2784BBC866330F4C595F52E0 (ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* __this, ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->___m_Id_0;
		ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 L_1 = ___0_other;
		int32_t L_2 = L_1.___m_Id_0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_2))? 1 : 0);
		goto IL_0012;
	}

IL_0012:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool ShaderTagId_Equals_m932EFCC38C276EEB2784BBC866330F4C595F52E0_AdjustorThunk (RuntimeObject* __this, ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___0_other, const RuntimeMethod* method)
{
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0*>(__this + _offset);
	bool _returnValue;
	_returnValue = ShaderTagId_Equals_m932EFCC38C276EEB2784BBC866330F4C595F52E0(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Int32 UnityEngine.Rendering.ShaderTagId::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ShaderTagId_GetHashCode_mF5E3A1F96CBDFDCEFABE1B56125EBBA6E3B9EFEF (ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = ((int32_t)2079669542);
		int32_t L_0 = V_0;
		int32_t* L_1 = (int32_t*)(&__this->___m_Id_0);
		int32_t L_2;
		L_2 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_1, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)-1521134295))), L_2));
		int32_t L_3 = V_0;
		V_1 = L_3;
		goto IL_001f;
	}

IL_001f:
	{
		int32_t L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t ShaderTagId_GetHashCode_mF5E3A1F96CBDFDCEFABE1B56125EBBA6E3B9EFEF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ShaderTagId_GetHashCode_mF5E3A1F96CBDFDCEFABE1B56125EBBA6E3B9EFEF(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.StencilState::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_enabled_m6DC861C699D1044E896E833D2DAE69B82F796564 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		uint8_t L_1;
		L_1 = Convert_ToByte_mC22A7EFFB28AA32D8F797E456E92BA88DBA19A08(L_0, NULL);
		__this->___m_Enabled_0 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void StencilState_set_enabled_m6DC861C699D1044E896E833D2DAE69B82F796564_AdjustorThunk (RuntimeObject* __this, bool ___0_value, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	StencilState_set_enabled_m6DC861C699D1044E896E833D2DAE69B82F796564(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.Rendering.StencilState::set_readMask(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_readMask_m1BA8F9033413889D4E77DA343DC0029566A9BB9B (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, uint8_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___0_value;
		__this->___m_ReadMask_1 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void StencilState_set_readMask_m1BA8F9033413889D4E77DA343DC0029566A9BB9B_AdjustorThunk (RuntimeObject* __this, uint8_t ___0_value, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	StencilState_set_readMask_m1BA8F9033413889D4E77DA343DC0029566A9BB9B(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.Rendering.StencilState::set_writeMask(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_writeMask_m94471C671E03D42F36DA61436B1068B362375D65 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, uint8_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___0_value;
		__this->___m_WriteMask_2 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void StencilState_set_writeMask_m94471C671E03D42F36DA61436B1068B362375D65_AdjustorThunk (RuntimeObject* __this, uint8_t ___0_value, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	StencilState_set_writeMask_m94471C671E03D42F36DA61436B1068B362375D65(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.Rendering.StencilState::set_compareFunctionFront(UnityEngine.Rendering.CompareFunction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_compareFunctionFront_m1388C37901DAB6AF9D23C0F01946DCCE19BC9BFC (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___m_CompareFunctionFront_4 = (uint8_t)((int32_t)(uint8_t)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void StencilState_set_compareFunctionFront_m1388C37901DAB6AF9D23C0F01946DCCE19BC9BFC_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	StencilState_set_compareFunctionFront_m1388C37901DAB6AF9D23C0F01946DCCE19BC9BFC(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.Rendering.StencilState::set_passOperationFront(UnityEngine.Rendering.StencilOp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_passOperationFront_m1F15CC29366DAEAA6CCE1DB0622C70D6ECC5A3EB (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___m_PassOperationFront_5 = (uint8_t)((int32_t)(uint8_t)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void StencilState_set_passOperationFront_m1F15CC29366DAEAA6CCE1DB0622C70D6ECC5A3EB_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	StencilState_set_passOperationFront_m1F15CC29366DAEAA6CCE1DB0622C70D6ECC5A3EB(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.Rendering.StencilState::set_failOperationFront(UnityEngine.Rendering.StencilOp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_failOperationFront_mADCECAE5D2E75ABAE51650F1F314E661D09C2CD6 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___m_FailOperationFront_6 = (uint8_t)((int32_t)(uint8_t)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void StencilState_set_failOperationFront_mADCECAE5D2E75ABAE51650F1F314E661D09C2CD6_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	StencilState_set_failOperationFront_mADCECAE5D2E75ABAE51650F1F314E661D09C2CD6(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.Rendering.StencilState::set_zFailOperationFront(UnityEngine.Rendering.StencilOp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_zFailOperationFront_mC7D8F0A08B9AEC4203BD6B352CB795E8011EFBB6 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___m_ZFailOperationFront_7 = (uint8_t)((int32_t)(uint8_t)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void StencilState_set_zFailOperationFront_mC7D8F0A08B9AEC4203BD6B352CB795E8011EFBB6_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	StencilState_set_zFailOperationFront_mC7D8F0A08B9AEC4203BD6B352CB795E8011EFBB6(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.Rendering.StencilState::set_compareFunctionBack(UnityEngine.Rendering.CompareFunction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_compareFunctionBack_m8AF73F4E8FC95A46D33E3192C50702D2AA15D61D (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___m_CompareFunctionBack_8 = (uint8_t)((int32_t)(uint8_t)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void StencilState_set_compareFunctionBack_m8AF73F4E8FC95A46D33E3192C50702D2AA15D61D_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	StencilState_set_compareFunctionBack_m8AF73F4E8FC95A46D33E3192C50702D2AA15D61D(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.Rendering.StencilState::set_passOperationBack(UnityEngine.Rendering.StencilOp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_passOperationBack_m4B1395FE21F5B5C809DC6F31D5824A90E05ED220 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___m_PassOperationBack_9 = (uint8_t)((int32_t)(uint8_t)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void StencilState_set_passOperationBack_m4B1395FE21F5B5C809DC6F31D5824A90E05ED220_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	StencilState_set_passOperationBack_m4B1395FE21F5B5C809DC6F31D5824A90E05ED220(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.Rendering.StencilState::set_failOperationBack(UnityEngine.Rendering.StencilOp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_failOperationBack_mD279271DD1F99EE5B8BC19F5AE60988E6C6F0E4A (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___m_FailOperationBack_10 = (uint8_t)((int32_t)(uint8_t)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void StencilState_set_failOperationBack_mD279271DD1F99EE5B8BC19F5AE60988E6C6F0E4A_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	StencilState_set_failOperationBack_mD279271DD1F99EE5B8BC19F5AE60988E6C6F0E4A(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.Rendering.StencilState::set_zFailOperationBack(UnityEngine.Rendering.StencilOp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_zFailOperationBack_mC092ABD8A5EA87245640A10E54C6A1990C4F6864 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___m_ZFailOperationBack_11 = (uint8_t)((int32_t)(uint8_t)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void StencilState_set_zFailOperationBack_mC092ABD8A5EA87245640A10E54C6A1990C4F6864_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	StencilState_set_zFailOperationBack_mC092ABD8A5EA87245640A10E54C6A1990C4F6864(_thisAdjusted, ___0_value, method);
}
// System.Boolean UnityEngine.Rendering.StencilState::Equals(UnityEngine.Rendering.StencilState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StencilState_Equals_m9FFB8A41D8838FD128875CB2D4DAA760C6DF1051 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B12_0 = 0;
	{
		uint8_t L_0 = __this->___m_Enabled_0;
		StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 L_1 = ___0_other;
		uint8_t L_2 = L_1.___m_Enabled_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_00a3;
		}
	}
	{
		uint8_t L_3 = __this->___m_ReadMask_1;
		StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 L_4 = ___0_other;
		uint8_t L_5 = L_4.___m_ReadMask_1;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_5))))
		{
			goto IL_00a3;
		}
	}
	{
		uint8_t L_6 = __this->___m_WriteMask_2;
		StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 L_7 = ___0_other;
		uint8_t L_8 = L_7.___m_WriteMask_2;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_8))))
		{
			goto IL_00a3;
		}
	}
	{
		uint8_t L_9 = __this->___m_CompareFunctionFront_4;
		StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 L_10 = ___0_other;
		uint8_t L_11 = L_10.___m_CompareFunctionFront_4;
		if ((!(((uint32_t)L_9) == ((uint32_t)L_11))))
		{
			goto IL_00a3;
		}
	}
	{
		uint8_t L_12 = __this->___m_PassOperationFront_5;
		StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 L_13 = ___0_other;
		uint8_t L_14 = L_13.___m_PassOperationFront_5;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_14))))
		{
			goto IL_00a3;
		}
	}
	{
		uint8_t L_15 = __this->___m_FailOperationFront_6;
		StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 L_16 = ___0_other;
		uint8_t L_17 = L_16.___m_FailOperationFront_6;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_17))))
		{
			goto IL_00a3;
		}
	}
	{
		uint8_t L_18 = __this->___m_ZFailOperationFront_7;
		StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 L_19 = ___0_other;
		uint8_t L_20 = L_19.___m_ZFailOperationFront_7;
		if ((!(((uint32_t)L_18) == ((uint32_t)L_20))))
		{
			goto IL_00a3;
		}
	}
	{
		uint8_t L_21 = __this->___m_CompareFunctionBack_8;
		StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 L_22 = ___0_other;
		uint8_t L_23 = L_22.___m_CompareFunctionBack_8;
		if ((!(((uint32_t)L_21) == ((uint32_t)L_23))))
		{
			goto IL_00a3;
		}
	}
	{
		uint8_t L_24 = __this->___m_PassOperationBack_9;
		StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 L_25 = ___0_other;
		uint8_t L_26 = L_25.___m_PassOperationBack_9;
		if ((!(((uint32_t)L_24) == ((uint32_t)L_26))))
		{
			goto IL_00a3;
		}
	}
	{
		uint8_t L_27 = __this->___m_FailOperationBack_10;
		StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 L_28 = ___0_other;
		uint8_t L_29 = L_28.___m_FailOperationBack_10;
		if ((!(((uint32_t)L_27) == ((uint32_t)L_29))))
		{
			goto IL_00a3;
		}
	}
	{
		uint8_t L_30 = __this->___m_ZFailOperationBack_11;
		StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 L_31 = ___0_other;
		uint8_t L_32 = L_31.___m_ZFailOperationBack_11;
		G_B12_0 = ((((int32_t)L_30) == ((int32_t)L_32))? 1 : 0);
		goto IL_00a4;
	}

IL_00a3:
	{
		G_B12_0 = 0;
	}

IL_00a4:
	{
		V_0 = (bool)G_B12_0;
		goto IL_00a7;
	}

IL_00a7:
	{
		bool L_33 = V_0;
		return L_33;
	}
}
IL2CPP_EXTERN_C  bool StencilState_Equals_m9FFB8A41D8838FD128875CB2D4DAA760C6DF1051_AdjustorThunk (RuntimeObject* __this, StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 ___0_other, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	bool _returnValue;
	_returnValue = StencilState_Equals_m9FFB8A41D8838FD128875CB2D4DAA760C6DF1051(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Rendering.StencilState::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StencilState_Equals_mEA45A5D2BF2223B15EE0FB8BCEDBA9CB534ADF4B (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		RuntimeObject* L_0 = ___0_obj;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0027;
	}

IL_000d:
	{
		RuntimeObject* L_2 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_2, StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject* L_3 = ___0_obj;
		bool L_4;
		L_4 = StencilState_Equals_m9FFB8A41D8838FD128875CB2D4DAA760C6DF1051(__this, ((*(StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*)((StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*)(StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*)UnBox(L_3, StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9_il2cpp_TypeInfo_var)))), NULL);
		G_B5_0 = ((int32_t)(L_4));
		goto IL_0024;
	}

IL_0023:
	{
		G_B5_0 = 0;
	}

IL_0024:
	{
		V_1 = (bool)G_B5_0;
		goto IL_0027;
	}

IL_0027:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool StencilState_Equals_mEA45A5D2BF2223B15EE0FB8BCEDBA9CB534ADF4B_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	bool _returnValue;
	_returnValue = StencilState_Equals_mEA45A5D2BF2223B15EE0FB8BCEDBA9CB534ADF4B(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.Int32 UnityEngine.Rendering.StencilState::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StencilState_GetHashCode_mB4A02DEE780377C853D16FFF49CCB9D9F4F711A5 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		uint8_t* L_0 = (uint8_t*)(&__this->___m_Enabled_0);
		int32_t L_1;
		L_1 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		uint8_t* L_3 = (uint8_t*)(&__this->___m_ReadMask_1);
		int32_t L_4;
		L_4 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_3, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_2, ((int32_t)397)))^L_4));
		int32_t L_5 = V_0;
		uint8_t* L_6 = (uint8_t*)(&__this->___m_WriteMask_2);
		int32_t L_7;
		L_7 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_6, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_5, ((int32_t)397)))^L_7));
		int32_t L_8 = V_0;
		uint8_t* L_9 = (uint8_t*)(&__this->___m_CompareFunctionFront_4);
		int32_t L_10;
		L_10 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_9, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_8, ((int32_t)397)))^L_10));
		int32_t L_11 = V_0;
		uint8_t* L_12 = (uint8_t*)(&__this->___m_PassOperationFront_5);
		int32_t L_13;
		L_13 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_12, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)397)))^L_13));
		int32_t L_14 = V_0;
		uint8_t* L_15 = (uint8_t*)(&__this->___m_FailOperationFront_6);
		int32_t L_16;
		L_16 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_15, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_14, ((int32_t)397)))^L_16));
		int32_t L_17 = V_0;
		uint8_t* L_18 = (uint8_t*)(&__this->___m_ZFailOperationFront_7);
		int32_t L_19;
		L_19 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_18, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_17, ((int32_t)397)))^L_19));
		int32_t L_20 = V_0;
		uint8_t* L_21 = (uint8_t*)(&__this->___m_CompareFunctionBack_8);
		int32_t L_22;
		L_22 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_21, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_20, ((int32_t)397)))^L_22));
		int32_t L_23 = V_0;
		uint8_t* L_24 = (uint8_t*)(&__this->___m_PassOperationBack_9);
		int32_t L_25;
		L_25 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_24, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_23, ((int32_t)397)))^L_25));
		int32_t L_26 = V_0;
		uint8_t* L_27 = (uint8_t*)(&__this->___m_FailOperationBack_10);
		int32_t L_28;
		L_28 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_27, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_26, ((int32_t)397)))^L_28));
		int32_t L_29 = V_0;
		uint8_t* L_30 = (uint8_t*)(&__this->___m_ZFailOperationBack_11);
		int32_t L_31;
		L_31 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_30, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_29, ((int32_t)397)))^L_31));
		int32_t L_32 = V_0;
		V_1 = L_32;
		goto IL_00da;
	}

IL_00da:
	{
		int32_t L_33 = V_1;
		return L_33;
	}
}
IL2CPP_EXTERN_C  int32_t StencilState_GetHashCode_mB4A02DEE780377C853D16FFF49CCB9D9F4F711A5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = StencilState_GetHashCode_mB4A02DEE780377C853D16FFF49CCB9D9F4F711A5(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Rendering.SupportedRenderingFeatures UnityEngine.Rendering.SupportedRenderingFeatures::get_active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* V_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_0 = ((SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_StaticFields*)il2cpp_codegen_static_fields_for(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var))->___s_Active_0;
		V_0 = (bool)((((RuntimeObject*)(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_2 = (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6*)il2cpp_codegen_object_new(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		SupportedRenderingFeatures__ctor_mF7728980F81142B7BD45FBB25AB001B17A4BF0ED(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		((SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_StaticFields*)il2cpp_codegen_static_fields_for(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var))->___s_Active_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_StaticFields*)il2cpp_codegen_static_fields_for(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var))->___s_Active_0), (void*)L_2);
	}

IL_0017:
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_3 = ((SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_StaticFields*)il2cpp_codegen_static_fields_for(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var))->___s_Active_0;
		V_1 = L_3;
		goto IL_001f;
	}

IL_001f:
	{
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_4 = V_1;
		return L_4;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::set_active(UnityEngine.Rendering.SupportedRenderingFeatures)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_set_active_mB2A1A6137C816592E6526CD3DA7405260EAEA8AE (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		((SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_StaticFields*)il2cpp_codegen_static_fields_for(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var))->___s_Active_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_StaticFields*)il2cpp_codegen_static_fields_for(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var))->___s_Active_0), (void*)L_0);
		return;
	}
}
// UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes UnityEngine.Rendering.SupportedRenderingFeatures::get_defaultMixedLightingModes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_defaultMixedLightingModes_m7F9FDF9012EC41E36466613C8A9103D74666CBC4 (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CdefaultMixedLightingModesU3Ek__BackingField_2;
		return L_0;
	}
}
// UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes UnityEngine.Rendering.SupportedRenderingFeatures::get_mixedLightingModes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_mixedLightingModes_m929C0CE80A4990993EBCAB8B46C1E273A0829137 (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CmixedLightingModesU3Ek__BackingField_3;
		return L_0;
	}
}
// UnityEngine.LightmapBakeType UnityEngine.Rendering.SupportedRenderingFeatures::get_lightmapBakeTypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_lightmapBakeTypes_m1311A5AD5BE1A6BA3251238C893D7D340358C156 (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3ClightmapBakeTypesU3Ek__BackingField_4;
		return L_0;
	}
}
// UnityEngine.LightmapsMode UnityEngine.Rendering.SupportedRenderingFeatures::get_lightmapsModes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_lightmapsModes_m925D670110EF7109A26BE1B228066E1201FAAE38 (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3ClightmapsModesU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::get_enlightenLightmapper()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_enlightenLightmapper_mF7C756BBD4E605DD047BD502DFF8569C4CEE8F27 (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CenlightenLightmapperU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::get_enlighten()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_enlighten_m6F973FEB7CCF0BB1B7A2F25317EADC5F6FD95ED6 (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CenlightenU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::get_rendersUIOverlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_rendersUIOverlay_m657FFFC5B360F7BCE9964EF50E7449779224AEFC (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CrendersUIOverlayU3Ek__BackingField_14;
		return L_0;
	}
}
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::get_autoAmbientProbeBaking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_autoAmbientProbeBaking_m42E98E922511B1CF790FC414C9A85D70DFACA2C8 (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CautoAmbientProbeBakingU3Ek__BackingField_24;
		return L_0;
	}
}
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::get_autoDefaultReflectionProbeBaking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_autoDefaultReflectionProbeBaking_mFDB934E6645FA5CA95E1F0BEF4A12345A1025207 (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CautoDefaultReflectionProbeBakingU3Ek__BackingField_25;
		return L_0;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::FallbackMixedLightingModeByRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_FallbackMixedLightingModeByRef_mEC3BA55F7A145AFCD9762F1FD752CA4D587D0F88 (intptr_t ___0_fallbackModePtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t* V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B3_0 = 0;
	{
		intptr_t L_0 = ___0_fallbackModePtr;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		V_0 = (int32_t*)L_1;
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_2;
		L_2 = SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054(NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = SupportedRenderingFeatures_get_defaultMixedLightingModes_m7F9FDF9012EC41E36466613C8A9103D74666CBC4_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_4;
		L_4 = SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054(NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = SupportedRenderingFeatures_get_mixedLightingModes_m929C0CE80A4990993EBCAB8B46C1E273A0829137_inline(L_4, NULL);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_6;
		L_6 = SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054(NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = SupportedRenderingFeatures_get_defaultMixedLightingModes_m7F9FDF9012EC41E36466613C8A9103D74666CBC4_inline(L_6, NULL);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_8;
		L_8 = SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054(NULL);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = SupportedRenderingFeatures_get_defaultMixedLightingModes_m7F9FDF9012EC41E36466613C8A9103D74666CBC4_inline(L_8, NULL);
		G_B3_0 = ((((int32_t)((int32_t)((int32_t)L_5&(int32_t)L_7))) == ((int32_t)L_9))? 1 : 0);
		goto IL_0038;
	}

IL_0037:
	{
		G_B3_0 = 0;
	}

IL_0038:
	{
		V_1 = (bool)G_B3_0;
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_0067;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_11;
		L_11 = SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054(NULL);
		NullCheck(L_11);
		int32_t L_12;
		L_12 = SupportedRenderingFeatures_get_defaultMixedLightingModes_m7F9FDF9012EC41E36466613C8A9103D74666CBC4_inline(L_11, NULL);
		V_3 = L_12;
		int32_t L_13 = V_3;
		V_2 = L_13;
		int32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)2)))
		{
			goto IL_005b;
		}
	}
	{
		goto IL_0050;
	}

IL_0050:
	{
		int32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)4)))
		{
			goto IL_0056;
		}
	}
	{
		goto IL_0060;
	}

IL_0056:
	{
		int32_t* L_16 = V_0;
		*((int32_t*)L_16) = (int32_t)2;
		goto IL_0065;
	}

IL_005b:
	{
		int32_t* L_17 = V_0;
		*((int32_t*)L_17) = (int32_t)1;
		goto IL_0065;
	}

IL_0060:
	{
		int32_t* L_18 = V_0;
		*((int32_t*)L_18) = (int32_t)0;
		goto IL_0065;
	}

IL_0065:
	{
		goto IL_008e;
	}

IL_0067:
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = SupportedRenderingFeatures_IsMixedLightingModeSupported_m11E0ADD90300D5396090ED9B2EFD9924524D50AF(2, NULL);
		V_4 = L_19;
		bool L_20 = V_4;
		if (!L_20)
		{
			goto IL_0079;
		}
	}
	{
		int32_t* L_21 = V_0;
		*((int32_t*)L_21) = (int32_t)2;
		goto IL_008e;
	}

IL_0079:
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = SupportedRenderingFeatures_IsMixedLightingModeSupported_m11E0ADD90300D5396090ED9B2EFD9924524D50AF(1, NULL);
		V_5 = L_22;
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_008b;
		}
	}
	{
		int32_t* L_24 = V_0;
		*((int32_t*)L_24) = (int32_t)1;
		goto IL_008e;
	}

IL_008b:
	{
		int32_t* L_25 = V_0;
		*((int32_t*)L_25) = (int32_t)0;
	}

IL_008e:
	{
		return;
	}
}
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::IsMixedLightingModeSupported(UnityEngine.MixedLightingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_IsMixedLightingModeSupported_m11E0ADD90300D5396090ED9B2EFD9924524D50AF (int32_t ___0_mixedMode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		int32_t L_0 = ___0_mixedMode;
		intptr_t L_1;
		memset((&L_1), 0, sizeof(L_1));
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&L_1), (void*)((uintptr_t)(&V_0)), /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_IsMixedLightingModeSupportedByRef_mE48C26F367ABEC734BDB7A8A66FEB8796A401AAF(L_0, L_1, NULL);
		bool L_2 = V_0;
		V_1 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		bool L_3 = V_1;
		return L_3;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::IsMixedLightingModeSupportedByRef(UnityEngine.MixedLightingMode,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_IsMixedLightingModeSupportedByRef_mE48C26F367ABEC734BDB7A8A66FEB8796A401AAF (int32_t ___0_mixedMode, intptr_t ___1_isSupportedPtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool* V_0 = NULL;
	bool V_1 = false;
	bool* G_B4_0 = NULL;
	bool* G_B3_0 = NULL;
	bool* G_B10_0 = NULL;
	bool* G_B6_0 = NULL;
	bool* G_B5_0 = NULL;
	bool* G_B8_0 = NULL;
	bool* G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	bool* G_B9_1 = NULL;
	int32_t G_B11_0 = 0;
	bool* G_B11_1 = NULL;
	{
		intptr_t L_0 = ___1_isSupportedPtr;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		V_0 = (bool*)L_1;
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SupportedRenderingFeatures_IsLightmapBakeTypeSupported_mE8EE2ACBE267FDAEFA6229CD67298C9D3A16C691(1, NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		bool* L_4 = V_0;
		*((int8_t*)L_4) = (int8_t)0;
		goto IL_005b;
	}

IL_001b:
	{
		bool* L_5 = V_0;
		int32_t L_6 = ___0_mixedMode;
		G_B3_0 = L_5;
		if (L_6)
		{
			G_B4_0 = L_5;
			goto IL_002e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_7;
		L_7 = SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054(NULL);
		NullCheck(L_7);
		int32_t L_8;
		L_8 = SupportedRenderingFeatures_get_mixedLightingModes_m929C0CE80A4990993EBCAB8B46C1E273A0829137_inline(L_7, NULL);
		G_B4_0 = G_B3_0;
		if ((((int32_t)((int32_t)((int32_t)L_8&1))) == ((int32_t)1)))
		{
			G_B10_0 = G_B3_0;
			goto IL_0059;
		}
	}

IL_002e:
	{
		int32_t L_9 = ___0_mixedMode;
		G_B5_0 = G_B4_0;
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			G_B6_0 = G_B4_0;
			goto IL_0041;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_10;
		L_10 = SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054(NULL);
		NullCheck(L_10);
		int32_t L_11;
		L_11 = SupportedRenderingFeatures_get_mixedLightingModes_m929C0CE80A4990993EBCAB8B46C1E273A0829137_inline(L_10, NULL);
		G_B6_0 = G_B5_0;
		if ((((int32_t)((int32_t)((int32_t)L_11&2))) == ((int32_t)2)))
		{
			G_B10_0 = G_B5_0;
			goto IL_0059;
		}
	}

IL_0041:
	{
		int32_t L_12 = ___0_mixedMode;
		G_B7_0 = G_B6_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)2))))
		{
			G_B8_0 = G_B6_0;
			goto IL_0056;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_13;
		L_13 = SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054(NULL);
		NullCheck(L_13);
		int32_t L_14;
		L_14 = SupportedRenderingFeatures_get_mixedLightingModes_m929C0CE80A4990993EBCAB8B46C1E273A0829137_inline(L_13, NULL);
		G_B9_0 = ((((int32_t)((int32_t)((int32_t)L_14&4))) == ((int32_t)4))? 1 : 0);
		G_B9_1 = G_B7_0;
		goto IL_0057;
	}

IL_0056:
	{
		G_B9_0 = 0;
		G_B9_1 = G_B8_0;
	}

IL_0057:
	{
		G_B11_0 = G_B9_0;
		G_B11_1 = G_B9_1;
		goto IL_005a;
	}

IL_0059:
	{
		G_B11_0 = 1;
		G_B11_1 = G_B10_0;
	}

IL_005a:
	{
		*((int8_t*)G_B11_1) = (int8_t)G_B11_0;
	}

IL_005b:
	{
		return;
	}
}
// System.Boolean UnityEngine.Rendering.SupportedRenderingFeatures::IsLightmapBakeTypeSupported(UnityEngine.LightmapBakeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_IsLightmapBakeTypeSupported_mE8EE2ACBE267FDAEFA6229CD67298C9D3A16C691 (int32_t ___0_bakeType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		int32_t L_0 = ___0_bakeType;
		intptr_t L_1;
		memset((&L_1), 0, sizeof(L_1));
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&L_1), (void*)((uintptr_t)(&V_0)), /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_IsLightmapBakeTypeSupportedByRef_mABE7E2BC06CA25519079DF4EEC89667EB51B8460(L_0, L_1, NULL);
		bool L_2 = V_0;
		V_1 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		bool L_3 = V_1;
		return L_3;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::IsLightmapBakeTypeSupportedByRef(UnityEngine.LightmapBakeType,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_IsLightmapBakeTypeSupportedByRef_mABE7E2BC06CA25519079DF4EEC89667EB51B8460 (int32_t ___0_bakeType, intptr_t ___1_isSupportedPtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B10_0 = 0;
	{
		intptr_t L_0 = ___1_isSupportedPtr;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		V_0 = (bool*)L_1;
		int32_t L_2 = ___0_bakeType;
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)1))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = SupportedRenderingFeatures_IsLightmapBakeTypeSupported_mE8EE2ACBE267FDAEFA6229CD67298C9D3A16C691(2, NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_002a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_6;
		L_6 = SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054(NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = SupportedRenderingFeatures_get_mixedLightingModes_m929C0CE80A4990993EBCAB8B46C1E273A0829137_inline(L_6, NULL);
		G_B4_0 = ((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		goto IL_002b;
	}

IL_002a:
	{
		G_B4_0 = 1;
	}

IL_002b:
	{
		V_3 = (bool)G_B4_0;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0035;
		}
	}
	{
		bool* L_9 = V_0;
		*((int8_t*)L_9) = (int8_t)0;
		goto IL_0064;
	}

IL_0035:
	{
	}

IL_0036:
	{
		bool* L_10 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_11;
		L_11 = SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054(NULL);
		NullCheck(L_11);
		int32_t L_12;
		L_12 = SupportedRenderingFeatures_get_lightmapBakeTypes_m1311A5AD5BE1A6BA3251238C893D7D340358C156_inline(L_11, NULL);
		int32_t L_13 = ___0_bakeType;
		int32_t L_14 = ___0_bakeType;
		*((int8_t*)L_10) = (int8_t)((((int32_t)((int32_t)((int32_t)L_12&(int32_t)L_13))) == ((int32_t)L_14))? 1 : 0);
		int32_t L_15 = ___0_bakeType;
		if ((!(((uint32_t)L_15) == ((uint32_t)4))))
		{
			goto IL_005a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_16;
		L_16 = SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054(NULL);
		NullCheck(L_16);
		bool L_17;
		L_17 = SupportedRenderingFeatures_get_enlighten_m6F973FEB7CCF0BB1B7A2F25317EADC5F6FD95ED6_inline(L_16, NULL);
		G_B10_0 = ((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
		goto IL_005b;
	}

IL_005a:
	{
		G_B10_0 = 0;
	}

IL_005b:
	{
		V_4 = (bool)G_B10_0;
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_0064;
		}
	}
	{
		bool* L_19 = V_0;
		*((int8_t*)L_19) = (int8_t)0;
	}

IL_0064:
	{
		return;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::IsLightmapsModeSupportedByRef(UnityEngine.LightmapsMode,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_IsLightmapsModeSupportedByRef_m99BF1104DDA5C0EB37E529F76670E7F10E6319E8 (int32_t ___0_mode, intptr_t ___1_isSupportedPtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool* V_0 = NULL;
	{
		intptr_t L_0 = ___1_isSupportedPtr;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		V_0 = (bool*)L_1;
		bool* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_3;
		L_3 = SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054(NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SupportedRenderingFeatures_get_lightmapsModes_m925D670110EF7109A26BE1B228066E1201FAAE38_inline(L_3, NULL);
		int32_t L_5 = ___0_mode;
		int32_t L_6 = ___0_mode;
		*((int8_t*)L_2) = (int8_t)((((int32_t)((int32_t)((int32_t)L_4&(int32_t)L_5))) == ((int32_t)L_6))? 1 : 0);
		return;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::IsLightmapperSupportedByRef(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_IsLightmapperSupportedByRef_m891045E2F4FF9AC667E6FC75F6119D5AB546FBDB (int32_t ___0_lightmapper, intptr_t ___1_isSupportedPtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool* V_0 = NULL;
	bool* G_B2_0 = NULL;
	bool* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	bool* G_B3_1 = NULL;
	{
		intptr_t L_0 = ___1_isSupportedPtr;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		V_0 = (bool*)L_1;
		bool* L_2 = V_0;
		int32_t L_3 = ___0_lightmapper;
		G_B1_0 = L_2;
		if (L_3)
		{
			G_B2_0 = L_2;
			goto IL_0018;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_4;
		L_4 = SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054(NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = SupportedRenderingFeatures_get_enlightenLightmapper_mF7C756BBD4E605DD047BD502DFF8569C4CEE8F27_inline(L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		G_B3_1 = G_B1_0;
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0019:
	{
		*((int8_t*)G_B3_1) = (int8_t)G_B3_0;
		return;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::IsUIOverlayRenderedBySRP(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_IsUIOverlayRenderedBySRP_m15CF763E502A362DC677DEBBEC12A9B45CEEB458 (intptr_t ___0_isSupportedPtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool* V_0 = NULL;
	{
		intptr_t L_0 = ___0_isSupportedPtr;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		V_0 = (bool*)L_1;
		bool* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_3;
		L_3 = SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054(NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = SupportedRenderingFeatures_get_rendersUIOverlay_m657FFFC5B360F7BCE9964EF50E7449779224AEFC_inline(L_3, NULL);
		*((int8_t*)L_2) = (int8_t)L_4;
		return;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::IsAutoAmbientProbeBakingSupported(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_IsAutoAmbientProbeBakingSupported_mBC9E03F60617335C1E8D4DE88FD57F591CDA6C50 (intptr_t ___0_isSupportedPtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool* V_0 = NULL;
	{
		intptr_t L_0 = ___0_isSupportedPtr;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		V_0 = (bool*)L_1;
		bool* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_3;
		L_3 = SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054(NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = SupportedRenderingFeatures_get_autoAmbientProbeBaking_m42E98E922511B1CF790FC414C9A85D70DFACA2C8_inline(L_3, NULL);
		*((int8_t*)L_2) = (int8_t)L_4;
		return;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::IsAutoDefaultReflectionProbeBakingSupported(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_IsAutoDefaultReflectionProbeBakingSupported_mD59A4D48FC5A6095035739F187C9BCF4D0DC67C5 (intptr_t ___0_isSupportedPtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool* V_0 = NULL;
	{
		intptr_t L_0 = ___0_isSupportedPtr;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		V_0 = (bool*)L_1;
		bool* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_3;
		L_3 = SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054(NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = SupportedRenderingFeatures_get_autoDefaultReflectionProbeBaking_mFDB934E6645FA5CA95E1F0BEF4A12345A1025207_inline(L_3, NULL);
		*((int8_t*)L_2) = (int8_t)L_4;
		return;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::FallbackLightmapperByRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_FallbackLightmapperByRef_mBA3E826098F185845769A99830E50C43294304FF (intptr_t ___0_lightmapperPtr, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	{
		intptr_t L_0 = ___0_lightmapperPtr;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		V_0 = (int32_t*)L_1;
		int32_t* L_2 = V_0;
		*((int32_t*)L_2) = (int32_t)1;
		return;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures__ctor_mF7728980F81142B7BD45FBB25AB001B17A4BF0ED (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CreflectionProbeModesU3Ek__BackingField_1 = 0;
		__this->___U3CdefaultMixedLightingModesU3Ek__BackingField_2 = 0;
		__this->___U3CmixedLightingModesU3Ek__BackingField_3 = 7;
		__this->___U3ClightmapBakeTypesU3Ek__BackingField_4 = 7;
		__this->___U3ClightmapsModesU3Ek__BackingField_5 = 1;
		__this->___U3CenlightenLightmapperU3Ek__BackingField_6 = (bool)1;
		__this->___U3CenlightenU3Ek__BackingField_7 = (bool)1;
		__this->___U3ClightProbeProxyVolumesU3Ek__BackingField_8 = (bool)1;
		__this->___U3CmotionVectorsU3Ek__BackingField_9 = (bool)1;
		__this->___U3CreceiveShadowsU3Ek__BackingField_10 = (bool)1;
		__this->___U3CreflectionProbesU3Ek__BackingField_11 = (bool)1;
		__this->___U3CreflectionProbesBlendDistanceU3Ek__BackingField_12 = (bool)1;
		__this->___U3CrendererPriorityU3Ek__BackingField_13 = (bool)0;
		__this->___U3CoverridesEnvironmentLightingU3Ek__BackingField_15 = (bool)0;
		__this->___U3CoverridesFogU3Ek__BackingField_16 = (bool)0;
		__this->___U3CoverridesRealtimeReflectionProbesU3Ek__BackingField_17 = (bool)0;
		__this->___U3CoverridesOtherLightingSettingsU3Ek__BackingField_18 = (bool)0;
		__this->___U3CeditableMaterialRenderQueueU3Ek__BackingField_19 = (bool)1;
		__this->___U3CoverridesLODBiasU3Ek__BackingField_20 = (bool)0;
		__this->___U3CoverridesMaximumLODLevelU3Ek__BackingField_21 = (bool)0;
		__this->___U3CrendererProbesU3Ek__BackingField_22 = (bool)1;
		__this->___U3CparticleSystemInstancingU3Ek__BackingField_23 = (bool)1;
		__this->___U3CautoAmbientProbeBakingU3Ek__BackingField_24 = (bool)1;
		__this->___U3CautoDefaultReflectionProbeBakingU3Ek__BackingField_25 = (bool)1;
		__this->___U3CoverridesShadowmaskU3Ek__BackingField_26 = (bool)0;
		__this->___U3CoverrideShadowmaskMessageU3Ek__BackingField_27 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CoverrideShadowmaskMessageU3Ek__BackingField_27), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.Rendering.SupportedRenderingFeatures::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures__cctor_mD97BB2123C1AC4DAEF2B5D8D1DC8219C31968416 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_0 = (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6*)il2cpp_codegen_object_new(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SupportedRenderingFeatures__ctor_mF7728980F81142B7BD45FBB25AB001B17A4BF0ED(L_0, NULL);
		((SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_StaticFields*)il2cpp_codegen_static_fields_for(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var))->___s_Active_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_StaticFields*)il2cpp_codegen_static_fields_for(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var))->___s_Active_0), (void*)L_0);
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
// System.Int32 UnityEngine.Rendering.SortingGroup::get_invalidSortingGroupID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SortingGroup_get_invalidSortingGroupID_mEA453186185B225FA2410988959180BAEC604310 (const RuntimeMethod* method) 
{
	typedef int32_t (*SortingGroup_get_invalidSortingGroupID_mEA453186185B225FA2410988959180BAEC604310_ftn) ();
	static SortingGroup_get_invalidSortingGroupID_mEA453186185B225FA2410988959180BAEC604310_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SortingGroup_get_invalidSortingGroupID_mEA453186185B225FA2410988959180BAEC604310_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.SortingGroup::get_invalidSortingGroupID()");
	int32_t icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// UnityEngine.Rendering.SortingGroup UnityEngine.Rendering.SortingGroup::GetSortingGroupByIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortingGroup_tA8DA95BF22F76688DAF54122EB3EEA35C70E9759* SortingGroup_GetSortingGroupByIndex_mC4CFB06D8C4B0EA27FC4BDC60AA05F4E0B28426B (int32_t ___0_index, const RuntimeMethod* method) 
{
	typedef SortingGroup_tA8DA95BF22F76688DAF54122EB3EEA35C70E9759* (*SortingGroup_GetSortingGroupByIndex_mC4CFB06D8C4B0EA27FC4BDC60AA05F4E0B28426B_ftn) (int32_t);
	static SortingGroup_GetSortingGroupByIndex_mC4CFB06D8C4B0EA27FC4BDC60AA05F4E0B28426B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SortingGroup_GetSortingGroupByIndex_mC4CFB06D8C4B0EA27FC4BDC60AA05F4E0B28426B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.SortingGroup::GetSortingGroupByIndex(System.Int32)");
	SortingGroup_tA8DA95BF22F76688DAF54122EB3EEA35C70E9759* icallRetVal = _il2cpp_icall_func(___0_index);
	return icallRetVal;
}
// System.Int32 UnityEngine.Rendering.SortingGroup::get_sortingLayerID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SortingGroup_get_sortingLayerID_m37C70CEA78DA6E28F405C67EDE95D5C2191F0055 (SortingGroup_tA8DA95BF22F76688DAF54122EB3EEA35C70E9759* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*SortingGroup_get_sortingLayerID_m37C70CEA78DA6E28F405C67EDE95D5C2191F0055_ftn) (SortingGroup_tA8DA95BF22F76688DAF54122EB3EEA35C70E9759*);
	static SortingGroup_get_sortingLayerID_m37C70CEA78DA6E28F405C67EDE95D5C2191F0055_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SortingGroup_get_sortingLayerID_m37C70CEA78DA6E28F405C67EDE95D5C2191F0055_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.SortingGroup::get_sortingLayerID()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Int32 UnityEngine.Rendering.SortingGroup::get_sortingOrder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SortingGroup_get_sortingOrder_mC80606E6BB9A6D5E3AB61A0451C48203A0C1AB6A (SortingGroup_tA8DA95BF22F76688DAF54122EB3EEA35C70E9759* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*SortingGroup_get_sortingOrder_mC80606E6BB9A6D5E3AB61A0451C48203A0C1AB6A_ftn) (SortingGroup_tA8DA95BF22F76688DAF54122EB3EEA35C70E9759*);
	static SortingGroup_get_sortingOrder_mC80606E6BB9A6D5E3AB61A0451C48203A0C1AB6A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SortingGroup_get_sortingOrder_mC80606E6BB9A6D5E3AB61A0451C48203A0C1AB6A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.SortingGroup::get_sortingOrder()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Rendering.SortingGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortingGroup__ctor_m0F2104D49BFE2551466B75F1A75E20EFBD0E350B (SortingGroup_tA8DA95BF22F76688DAF54122EB3EEA35C70E9759* __this, const RuntimeMethod* method) 
{
	{
		Behaviour__ctor_m00422B6EFEA829BCB116D715E74F1EAD2CB6F4F8(__this, NULL);
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
// System.Boolean UnityEngine.Playables.FrameData::HasFlags(UnityEngine.Playables.FrameData/Flags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FrameData_HasFlags_m268F3C0E03481E2F7217CEB6153C072AB0A68C1C (FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314* __this, int32_t ___0_flag, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->___m_Flags_7;
		int32_t L_1 = ___0_flag;
		int32_t L_2 = ___0_flag;
		V_0 = (bool)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)L_1))) == ((int32_t)L_2))? 1 : 0);
		goto IL_000f;
	}

IL_000f:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool FrameData_HasFlags_m268F3C0E03481E2F7217CEB6153C072AB0A68C1C_AdjustorThunk (RuntimeObject* __this, int32_t ___0_flag, const RuntimeMethod* method)
{
	FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314*>(__this + _offset);
	bool _returnValue;
	_returnValue = FrameData_HasFlags_m268F3C0E03481E2F7217CEB6153C072AB0A68C1C(_thisAdjusted, ___0_flag, method);
	return _returnValue;
}
// System.Single UnityEngine.Playables.FrameData::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FrameData_get_deltaTime_m522E00CB1B4DA759A5121778A7688DA07735C1F8 (FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		double L_0 = __this->___m_DeltaTime_1;
		V_0 = ((float)L_0);
		goto IL_000b;
	}

IL_000b:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float FrameData_get_deltaTime_m522E00CB1B4DA759A5121778A7688DA07735C1F8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314*>(__this + _offset);
	float _returnValue;
	_returnValue = FrameData_get_deltaTime_m522E00CB1B4DA759A5121778A7688DA07735C1F8(_thisAdjusted, method);
	return _returnValue;
}
// System.Single UnityEngine.Playables.FrameData::get_effectiveSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FrameData_get_effectiveSpeed_m49D7C9FB90C9B640B64D701B026DC26540BC25B9 (FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_EffectiveSpeed_6;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float FrameData_get_effectiveSpeed_m49D7C9FB90C9B640B64D701B026DC26540BC25B9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314*>(__this + _offset);
	float _returnValue;
	_returnValue = FrameData_get_effectiveSpeed_m49D7C9FB90C9B640B64D701B026DC26540BC25B9(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Playables.FrameData/EvaluationType UnityEngine.Playables.FrameData::get_evaluationType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FrameData_get_evaluationType_m0212C6B9A3C3AD09BA24DD4291A9FB528BFD0842 (FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		bool L_0;
		L_0 = FrameData_HasFlags_m268F3C0E03481E2F7217CEB6153C072AB0A68C1C(__this, 1, NULL);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_000e;
	}

IL_000d:
	{
		G_B3_0 = 0;
	}

IL_000e:
	{
		V_0 = G_B3_0;
		goto IL_0011;
	}

IL_0011:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t FrameData_get_evaluationType_m0212C6B9A3C3AD09BA24DD4291A9FB528BFD0842_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = FrameData_get_evaluationType_m0212C6B9A3C3AD09BA24DD4291A9FB528BFD0842(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.FrameData::get_seekOccurred()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FrameData_get_seekOccurred_mC8325617A69EA31B70169D921E258AC60B2750D2 (FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0;
		L_0 = FrameData_HasFlags_m268F3C0E03481E2F7217CEB6153C072AB0A68C1C(__this, 2, NULL);
		V_0 = L_0;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool FrameData_get_seekOccurred_mC8325617A69EA31B70169D921E258AC60B2750D2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314*>(__this + _offset);
	bool _returnValue;
	_returnValue = FrameData_get_seekOccurred_mC8325617A69EA31B70169D921E258AC60B2750D2(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.FrameData::get_timeLooped()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FrameData_get_timeLooped_m88F002C13ED791E65D9F5705AAD05C19C505918B (FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0;
		L_0 = FrameData_HasFlags_m268F3C0E03481E2F7217CEB6153C072AB0A68C1C(__this, 4, NULL);
		V_0 = L_0;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool FrameData_get_timeLooped_m88F002C13ED791E65D9F5705AAD05C19C505918B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314*>(__this + _offset);
	bool _returnValue;
	_returnValue = FrameData_get_timeLooped_m88F002C13ED791E65D9F5705AAD05C19C505918B(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.FrameData::get_timeHeld()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FrameData_get_timeHeld_m1213876DD47660CEA565831282ACA4477BC6644F (FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0;
		L_0 = FrameData_HasFlags_m268F3C0E03481E2F7217CEB6153C072AB0A68C1C(__this, 8, NULL);
		V_0 = L_0;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool FrameData_get_timeHeld_m1213876DD47660CEA565831282ACA4477BC6644F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314*>(__this + _offset);
	bool _returnValue;
	_returnValue = FrameData_get_timeHeld_m1213876DD47660CEA565831282ACA4477BC6644F(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Playables.PlayableOutput UnityEngine.Playables.FrameData::get_output()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 FrameData_get_output_mB5B10130E39676C78F53E6194390B01B87D54FBF (FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314* __this, const RuntimeMethod* method) 
{
	PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 L_0 = __this->___m_Output_8;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 FrameData_get_output_mB5B10130E39676C78F53E6194390B01B87D54FBF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314*>(__this + _offset);
	PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 _returnValue;
	_returnValue = FrameData_get_output_mB5B10130E39676C78F53E6194390B01B87D54FBF(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Playables.PlayState UnityEngine.Playables.FrameData::get_effectivePlayState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FrameData_get_effectivePlayState_m58201D8BB3B3489399055AC4D1264007552F2BAB (FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		bool L_0;
		L_0 = FrameData_HasFlags_m268F3C0E03481E2F7217CEB6153C072AB0A68C1C(__this, ((int32_t)16), NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		V_1 = 2;
		goto IL_0025;
	}

IL_0011:
	{
		bool L_2;
		L_2 = FrameData_HasFlags_m268F3C0E03481E2F7217CEB6153C072AB0A68C1C(__this, ((int32_t)32), NULL);
		V_2 = L_2;
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		V_1 = 1;
		goto IL_0025;
	}

IL_0021:
	{
		V_1 = 0;
		goto IL_0025;
	}

IL_0025:
	{
		int32_t L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t FrameData_get_effectivePlayState_m58201D8BB3B3489399055AC4D1264007552F2BAB_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = FrameData_get_effectivePlayState_m58201D8BB3B3489399055AC4D1264007552F2BAB(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.Playables.FrameRate::get_dropFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FrameRate_get_dropFrame_mC8BFEB9E9E33328497040C4D02EAF1F0DC84AFF4 (FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Rate_8;
		return (bool)((((int32_t)L_0) < ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool FrameRate_get_dropFrame_mC8BFEB9E9E33328497040C4D02EAF1F0DC84AFF4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E*>(__this + _offset);
	bool _returnValue;
	_returnValue = FrameRate_get_dropFrame_mC8BFEB9E9E33328497040C4D02EAF1F0DC84AFF4(_thisAdjusted, method);
	return _returnValue;
}
// System.Double UnityEngine.Playables.FrameRate::get_rate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double FrameRate_get_rate_mF21BC02932E30CCC1832FE1B3C08FE6679F95406 (FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E* __this, const RuntimeMethod* method) 
{
	double G_B3_0 = 0.0;
	{
		bool L_0;
		L_0 = FrameRate_get_dropFrame_mC8BFEB9E9E33328497040C4D02EAF1F0DC84AFF4(__this, NULL);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = __this->___m_Rate_8;
		G_B3_0 = ((double)L_1);
		goto IL_0023;
	}

IL_0011:
	{
		int32_t L_2 = __this->___m_Rate_8;
		G_B3_0 = ((double)il2cpp_codegen_multiply(((double)((-L_2))), (0.99900099900099903)));
	}

IL_0023:
	{
		return G_B3_0;
	}
}
IL2CPP_EXTERN_C  double FrameRate_get_rate_mF21BC02932E30CCC1832FE1B3C08FE6679F95406_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E*>(__this + _offset);
	double _returnValue;
	_returnValue = FrameRate_get_rate_mF21BC02932E30CCC1832FE1B3C08FE6679F95406(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Playables.FrameRate::.ctor(System.UInt32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameRate__ctor_m9DF0B1521A85AE2CD542C19C1C253301B389CA71 (FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E* __this, uint32_t ___0_frameRate, bool ___1_drop, const RuntimeMethod* method) 
{
	FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E* G_B2_0 = NULL;
	FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E* G_B3_1 = NULL;
	{
		bool L_0 = ___1_drop;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0008;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		goto IL_0009;
	}

IL_0008:
	{
		G_B3_0 = (-1);
		G_B3_1 = G_B2_0;
	}

IL_0009:
	{
		uint32_t L_1 = ___0_frameRate;
		G_B3_1->___m_Rate_8 = ((int32_t)il2cpp_codegen_multiply(G_B3_0, (int32_t)L_1));
		return;
	}
}
IL2CPP_EXTERN_C  void FrameRate__ctor_m9DF0B1521A85AE2CD542C19C1C253301B389CA71_AdjustorThunk (RuntimeObject* __this, uint32_t ___0_frameRate, bool ___1_drop, const RuntimeMethod* method)
{
	FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E*>(__this + _offset);
	FrameRate__ctor_m9DF0B1521A85AE2CD542C19C1C253301B389CA71(_thisAdjusted, ___0_frameRate, ___1_drop, method);
}
// System.Boolean UnityEngine.Playables.FrameRate::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FrameRate_IsValid_m8F983C71BC91E1AEF857517C4D344D9FCEAE2851 (FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->___m_Rate_8;
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool FrameRate_IsValid_m8F983C71BC91E1AEF857517C4D344D9FCEAE2851_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E*>(__this + _offset);
	bool _returnValue;
	_returnValue = FrameRate_IsValid_m8F983C71BC91E1AEF857517C4D344D9FCEAE2851(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.FrameRate::Equals(UnityEngine.Playables.FrameRate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FrameRate_Equals_m71B1BAAEDC9E1096965764135FF45A1C464639E6 (FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E* __this, FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->___m_Rate_8;
		FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E L_1 = ___0_other;
		int32_t L_2 = L_1.___m_Rate_8;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_2))? 1 : 0);
		goto IL_0012;
	}

IL_0012:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool FrameRate_Equals_m71B1BAAEDC9E1096965764135FF45A1C464639E6_AdjustorThunk (RuntimeObject* __this, FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E ___0_other, const RuntimeMethod* method)
{
	FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E*>(__this + _offset);
	bool _returnValue;
	_returnValue = FrameRate_Equals_m71B1BAAEDC9E1096965764135FF45A1C464639E6(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.FrameRate::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FrameRate_Equals_m318AFC57E72479688AFA71ECFCB8F2113BC0044C (FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		bool L_2;
		L_2 = FrameRate_Equals_m71B1BAAEDC9E1096965764135FF45A1C464639E6(__this, ((*(FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E*)((FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E*)(FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E*)UnBox(L_1, FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E_il2cpp_TypeInfo_var)))), NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
	}

IL_0018:
	{
		V_0 = (bool)G_B3_0;
		goto IL_001b;
	}

IL_001b:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool FrameRate_Equals_m318AFC57E72479688AFA71ECFCB8F2113BC0044C_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E*>(__this + _offset);
	bool _returnValue;
	_returnValue = FrameRate_Equals_m318AFC57E72479688AFA71ECFCB8F2113BC0044C(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.FrameRate::op_Equality(UnityEngine.Playables.FrameRate,UnityEngine.Playables.FrameRate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FrameRate_op_Equality_mFC28000215C0BAC70A245ADBB8B023B5B2811E68 (FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E ___0_a, FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E ___1_b, const RuntimeMethod* method) 
{
	{
		FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E L_0 = ___1_b;
		bool L_1;
		L_1 = FrameRate_Equals_m71B1BAAEDC9E1096965764135FF45A1C464639E6((&___0_a), L_0, NULL);
		return L_1;
	}
}
// System.Int32 UnityEngine.Playables.FrameRate::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FrameRate_GetHashCode_mD760D080786680B77E3E8F059950F48EAAF6A819 (FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Rate_8;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t FrameRate_GetHashCode_mD760D080786680B77E3E8F059950F48EAAF6A819_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = FrameRate_GetHashCode_mD760D080786680B77E3E8F059950F48EAAF6A819(_thisAdjusted, method);
	return _returnValue;
}
// System.String UnityEngine.Playables.FrameRate::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FrameRate_ToString_m899E2A85E7CE55B74522F23706508BD4AF18934F (FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0;
		L_0 = FrameRate_ToString_m72358F5840A02CA9E1B5F326575596E2B094BB56(__this, (String_t*)NULL, (RuntimeObject*)NULL, NULL);
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* FrameRate_ToString_m899E2A85E7CE55B74522F23706508BD4AF18934F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = FrameRate_ToString_m899E2A85E7CE55B74522F23706508BD4AF18934F(_thisAdjusted, method);
	return _returnValue;
}
// System.String UnityEngine.Playables.FrameRate::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FrameRate_ToString_m72358F5840A02CA9E1B5F326575596E2B094BB56 (FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E* __this, String_t* ___0_format, RuntimeObject* ___1_formatProvider, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE31982B42DCCF887A2B3F373397E4946E200724);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	double V_2 = 0.0;
	String_t* V_3 = NULL;
	String_t* G_B4_0 = NULL;
	{
		String_t* L_0 = ___0_format;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		bool L_3;
		L_3 = FrameRate_get_dropFrame_mC8BFEB9E9E33328497040C4D02EAF1F0DC84AFF4(__this, NULL);
		if (L_3)
		{
			goto IL_001a;
		}
	}
	{
		G_B4_0 = _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6;
		goto IL_001f;
	}

IL_001a:
	{
		G_B4_0 = _stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748;
	}

IL_001f:
	{
		___0_format = G_B4_0;
	}

IL_0021:
	{
		RuntimeObject* L_4 = ___1_formatProvider;
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0035;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_6;
		L_6 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		NullCheck(L_6);
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_7;
		L_7 = VirtualFuncInvoker0< NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* >::Invoke(14 /* System.Globalization.NumberFormatInfo System.Globalization.CultureInfo::get_NumberFormat() */, L_6);
		___1_formatProvider = L_7;
	}

IL_0035:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_8;
		double L_10;
		L_10 = FrameRate_get_rate_mF21BC02932E30CCC1832FE1B3C08FE6679F95406(__this, NULL);
		V_2 = L_10;
		String_t* L_11 = ___0_format;
		RuntimeObject* L_12 = ___1_formatProvider;
		String_t* L_13;
		L_13 = Double_ToString_m7E3930DDFB35B1919FE538A246A59C3FC62AF789((&V_2), L_11, L_12, NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_13);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_13);
		String_t* L_14;
		L_14 = UnityString_Format_m98A0629641086A1BE20BBF7F4EADDE3FE3877D85(_stringLiteralEE31982B42DCCF887A2B3F373397E4946E200724, L_9, NULL);
		V_3 = L_14;
		goto IL_005b;
	}

IL_005b:
	{
		String_t* L_15 = V_3;
		return L_15;
	}
}
IL2CPP_EXTERN_C  String_t* FrameRate_ToString_m72358F5840A02CA9E1B5F326575596E2B094BB56_AdjustorThunk (RuntimeObject* __this, String_t* ___0_format, RuntimeObject* ___1_formatProvider, const RuntimeMethod* method)
{
	FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = FrameRate_ToString_m72358F5840A02CA9E1B5F326575596E2B094BB56(_thisAdjusted, ___0_format, ___1_formatProvider, method);
	return _returnValue;
}
// UnityEngine.Playables.FrameRate UnityEngine.Playables.FrameRate::DoubleToFrameRate(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E FrameRate_DoubleToFrameRate_m2CD79B2DC6847611757BA15C29826EBEFC0F7AB0 (double ___0_framerate, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	{
		double L_0 = ___0_framerate;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = ceil(L_0);
		V_0 = il2cpp_codegen_cast_floating_point<uint32_t, int32_t, double>(L_1);
		uint32_t L_2 = V_0;
		V_2 = (bool)((((int32_t)((!(((uint32_t)L_2) <= ((uint32_t)0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E L_4;
		memset((&L_4), 0, sizeof(L_4));
		FrameRate__ctor_m9DF0B1521A85AE2CD542C19C1C253301B389CA71((&L_4), 1, (bool)0, /*hidden argument*/NULL);
		V_3 = L_4;
		goto IL_0055;
	}

IL_001e:
	{
		uint32_t L_5 = V_0;
		FrameRate__ctor_m9DF0B1521A85AE2CD542C19C1C253301B389CA71((&V_1), L_5, (bool)1, NULL);
		double L_6 = ___0_framerate;
		double L_7;
		L_7 = FrameRate_get_rate_mF21BC02932E30CCC1832FE1B3C08FE6679F95406((&V_1), NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_8;
		L_8 = fabs(((double)il2cpp_codegen_subtract(L_6, L_7)));
		double L_9 = ___0_framerate;
		uint32_t L_10 = V_0;
		double L_11;
		L_11 = fabs(((double)il2cpp_codegen_subtract(L_9, ((double)((double)(uint32_t)L_10)))));
		V_4 = (bool)((((double)L_8) < ((double)L_11))? 1 : 0);
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_004b;
		}
	}
	{
		FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E L_13 = V_1;
		V_3 = L_13;
		goto IL_0055;
	}

IL_004b:
	{
		uint32_t L_14 = V_0;
		FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E L_15;
		memset((&L_15), 0, sizeof(L_15));
		FrameRate__ctor_m9DF0B1521A85AE2CD542C19C1C253301B389CA71((&L_15), L_14, (bool)0, /*hidden argument*/NULL);
		V_3 = L_15;
		goto IL_0055;
	}

IL_0055:
	{
		FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E L_16 = V_3;
		return L_16;
	}
}
// System.Void UnityEngine.Playables.FrameRate::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameRate__cctor_m99F52A40B3F0C53861154B93ADCE7DCE4C5D859F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E L_0;
		memset((&L_0), 0, sizeof(L_0));
		FrameRate__ctor_m9DF0B1521A85AE2CD542C19C1C253301B389CA71((&L_0), ((int32_t)24), (bool)0, /*hidden argument*/NULL);
		((FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E_StaticFields*)il2cpp_codegen_static_fields_for(FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E_il2cpp_TypeInfo_var))->___k_24Fps_0 = L_0;
		FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E L_1;
		memset((&L_1), 0, sizeof(L_1));
		FrameRate__ctor_m9DF0B1521A85AE2CD542C19C1C253301B389CA71((&L_1), ((int32_t)24), (bool)1, /*hidden argument*/NULL);
		((FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E_StaticFields*)il2cpp_codegen_static_fields_for(FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E_il2cpp_TypeInfo_var))->___k_23_976Fps_1 = L_1;
		FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E L_2;
		memset((&L_2), 0, sizeof(L_2));
		FrameRate__ctor_m9DF0B1521A85AE2CD542C19C1C253301B389CA71((&L_2), ((int32_t)25), (bool)0, /*hidden argument*/NULL);
		((FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E_StaticFields*)il2cpp_codegen_static_fields_for(FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E_il2cpp_TypeInfo_var))->___k_25Fps_2 = L_2;
		FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E L_3;
		memset((&L_3), 0, sizeof(L_3));
		FrameRate__ctor_m9DF0B1521A85AE2CD542C19C1C253301B389CA71((&L_3), ((int32_t)30), (bool)0, /*hidden argument*/NULL);
		((FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E_StaticFields*)il2cpp_codegen_static_fields_for(FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E_il2cpp_TypeInfo_var))->___k_30Fps_3 = L_3;
		FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E L_4;
		memset((&L_4), 0, sizeof(L_4));
		FrameRate__ctor_m9DF0B1521A85AE2CD542C19C1C253301B389CA71((&L_4), ((int32_t)30), (bool)1, /*hidden argument*/NULL);
		((FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E_StaticFields*)il2cpp_codegen_static_fields_for(FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E_il2cpp_TypeInfo_var))->___k_29_97Fps_4 = L_4;
		FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E L_5;
		memset((&L_5), 0, sizeof(L_5));
		FrameRate__ctor_m9DF0B1521A85AE2CD542C19C1C253301B389CA71((&L_5), ((int32_t)50), (bool)0, /*hidden argument*/NULL);
		((FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E_StaticFields*)il2cpp_codegen_static_fields_for(FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E_il2cpp_TypeInfo_var))->___k_50Fps_5 = L_5;
		FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E L_6;
		memset((&L_6), 0, sizeof(L_6));
		FrameRate__ctor_m9DF0B1521A85AE2CD542C19C1C253301B389CA71((&L_6), ((int32_t)60), (bool)0, /*hidden argument*/NULL);
		((FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E_StaticFields*)il2cpp_codegen_static_fields_for(FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E_il2cpp_TypeInfo_var))->___k_60Fps_6 = L_6;
		FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E L_7;
		memset((&L_7), 0, sizeof(L_7));
		FrameRate__ctor_m9DF0B1521A85AE2CD542C19C1C253301B389CA71((&L_7), ((int32_t)60), (bool)1, /*hidden argument*/NULL);
		((FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E_StaticFields*)il2cpp_codegen_static_fields_for(FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E_il2cpp_TypeInfo_var))->___k_59_94Fps_7 = L_7;
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
// UnityEngine.Playables.Playable UnityEngine.Playables.Playable::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F Playable_get_Null_m0D0BB32BC23983C490A363AD6AAC47D8B72864F2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_il2cpp_TypeInfo_var);
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_0 = ((Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_StaticFields*)il2cpp_codegen_static_fields_for(Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_il2cpp_TypeInfo_var))->___m_NullPlayable_1;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Playables.Playable UnityEngine.Playables.Playable::Create(UnityEngine.Playables.PlayableGraph,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F Playable_Create_m1F8E29376A38990D4D63ED0E88333876B60A1725 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___0_graph, int32_t ___1_inputCount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableExtensions_SetInputCount_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m83E88C6D9DB5E178A5CD37203DBAE1C4009F39AD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F V_0;
	memset((&V_0), 0, sizeof(V_0));
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = PlayableGraph_CreatePlayableHandle_mF90D606A614FB603DBFFE4E87C325F8CC59BED67((&___0_graph), NULL);
		Playable__ctor_mD2EB35E024816AEED68795D0124EAB30E05BF6C4((&V_0), L_0, NULL);
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_1 = V_0;
		int32_t L_2 = ___1_inputCount;
		PlayableExtensions_SetInputCount_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m83E88C6D9DB5E178A5CD37203DBAE1C4009F39AD(L_1, L_2, PlayableExtensions_SetInputCount_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m83E88C6D9DB5E178A5CD37203DBAE1C4009F39AD_RuntimeMethod_var);
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_3 = V_0;
		V_1 = L_3;
		goto IL_001b;
	}

IL_001b:
	{
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_4 = V_1;
		return L_4;
	}
}
// System.Void UnityEngine.Playables.Playable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Playable__ctor_mD2EB35E024816AEED68795D0124EAB30E05BF6C4 (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) 
{
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = ___0_handle;
		__this->___m_Handle_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Playable__ctor_mD2EB35E024816AEED68795D0124EAB30E05BF6C4_AdjustorThunk (RuntimeObject* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method)
{
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F*>(__this + _offset);
	Playable__ctor_mD2EB35E024816AEED68795D0124EAB30E05BF6C4(_thisAdjusted, ___0_handle, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.Playable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 Playable_GetHandle_m39356D23E849DC5428B262092657662C064E04F8 (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 Playable_GetHandle_m39356D23E849DC5428B262092657662C064E04F8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = Playable_GetHandle_m39356D23E849DC5428B262092657662C064E04F8(_thisAdjusted, method);
	return _returnValue;
}
// System.Type UnityEngine.Playables.Playable::GetPlayableType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Playable_GetPlayableType_mF7103BE376DCD61F54669681AE7BB7D6963D6D43 (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Type_t* V_1 = NULL;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = Playable_GetHandle_m39356D23E849DC5428B262092657662C064E04F8(__this, NULL);
		V_0 = L_0;
		Type_t* L_1;
		L_1 = PlayableHandle_GetPlayableType_mD9750F1B85DF086F52641D6AB85789601486B686((&V_0), NULL);
		V_1 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		Type_t* L_2 = V_1;
		return L_2;
	}
}
IL2CPP_EXTERN_C  Type_t* Playable_GetPlayableType_mF7103BE376DCD61F54669681AE7BB7D6963D6D43_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F*>(__this + _offset);
	Type_t* _returnValue;
	_returnValue = Playable_GetPlayableType_mF7103BE376DCD61F54669681AE7BB7D6963D6D43(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.Playable::Equals(UnityEngine.Playables.Playable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Playable_Equals_mD72D3DB892B8867A0E7BAC032A16C08616EEFF86 (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = Playable_GetHandle_m39356D23E849DC5428B262092657662C064E04F8(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = Playable_GetHandle_m39356D23E849DC5428B262092657662C064E04F8((&___0_other), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool Playable_Equals_mD72D3DB892B8867A0E7BAC032A16C08616EEFF86_AdjustorThunk (RuntimeObject* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___0_other, const RuntimeMethod* method)
{
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F*>(__this + _offset);
	bool _returnValue;
	_returnValue = Playable_Equals_mD72D3DB892B8867A0E7BAC032A16C08616EEFF86(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Void UnityEngine.Playables.Playable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Playable__cctor_m079282CFC9FB3C8D02C0F6F9FF45C167DF583459 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_1;
		memset((&L_1), 0, sizeof(L_1));
		Playable__ctor_mD2EB35E024816AEED68795D0124EAB30E05BF6C4((&L_1), L_0, /*hidden argument*/NULL);
		((Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_StaticFields*)il2cpp_codegen_static_fields_for(Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_il2cpp_TypeInfo_var))->___m_NullPlayable_1 = L_1;
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
// System.Double UnityEngine.Playables.PlayableAsset::get_duration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double PlayableAsset_get_duration_m4668A767DDB780565E6506E63B4797B820405CFE (PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_il2cpp_TypeInfo_var);
		double L_0 = ((PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_StaticFields*)il2cpp_codegen_static_fields_for(PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_il2cpp_TypeInfo_var))->___DefaultDuration_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		double L_1 = V_0;
		return L_1;
	}
}
// System.Collections.Generic.IEnumerable`1<UnityEngine.Playables.PlayableBinding> UnityEngine.Playables.PlayableAsset::get_outputs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayableAsset_get_outputs_m5760B1B5EE08B0327FA7D90AE92C94227B1C993C (PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_il2cpp_TypeInfo_var);
		PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD* L_0 = ((PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_StaticFields*)il2cpp_codegen_static_fields_for(PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_il2cpp_TypeInfo_var))->___None_4;
		V_0 = (RuntimeObject*)L_0;
		goto IL_0009;
	}

IL_0009:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Playables.PlayableAsset::Internal_CreatePlayable(UnityEngine.Playables.PlayableAsset,UnityEngine.Playables.PlayableGraph,UnityEngine.GameObject,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableAsset_Internal_CreatePlayable_m8D90055AAB62B51D1F73B58F30715C4512100714 (PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E* ___0_asset, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___1_graph, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___2_go, intptr_t ___3_ptr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F V_0;
	memset((&V_0), 0, sizeof(V_0));
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* V_1 = NULL;
	bool V_2 = false;
	{
		PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E* L_0 = ___0_asset;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_2 = L_1;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_il2cpp_TypeInfo_var);
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_3;
		L_3 = Playable_get_Null_m0D0BB32BC23983C490A363AD6AAC47D8B72864F2(NULL);
		V_0 = L_3;
		goto IL_001d;
	}

IL_0014:
	{
		PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E* L_4 = ___0_asset;
		PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E L_5 = ___1_graph;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = ___2_go;
		NullCheck(L_4);
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_7;
		L_7 = VirtualFuncInvoker2< Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(6 /* UnityEngine.Playables.Playable UnityEngine.Playables.PlayableAsset::CreatePlayable(UnityEngine.Playables.PlayableGraph,UnityEngine.GameObject) */, L_4, L_5, L_6);
		V_0 = L_7;
	}

IL_001d:
	{
		void* L_8;
		L_8 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&___3_ptr), NULL);
		V_1 = (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F*)L_8;
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* L_9 = V_1;
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_10 = V_0;
		*(Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F*)L_9 = L_10;
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableAsset::Internal_GetPlayableAssetDuration(UnityEngine.Playables.PlayableAsset,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableAsset_Internal_GetPlayableAssetDuration_mD80D4032B1E5DECC8710CB63A49E815F21EFDBDA (PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E* ___0_asset, intptr_t ___1_ptrToDouble, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	double* V_1 = NULL;
	{
		PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E* L_0 = ___0_asset;
		NullCheck(L_0);
		double L_1;
		L_1 = VirtualFuncInvoker0< double >::Invoke(7 /* System.Double UnityEngine.Playables.PlayableAsset::get_duration() */, L_0);
		V_0 = L_1;
		void* L_2;
		L_2 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&___1_ptrToDouble), NULL);
		V_1 = (double*)L_2;
		double* L_3 = V_1;
		double L_4 = V_0;
		*((double*)L_3) = (double)L_4;
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableAsset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableAsset__ctor_m36B842356F02DF323B356BAAF6E3DC59BA9E1AB8 (PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E* __this, const RuntimeMethod* method) 
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
// System.Void UnityEngine.Playables.PlayableBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableBehaviour__ctor_mA6202DCD846F0DDFC5963764A404EE8AFABEA23A (PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableBehaviour::OnGraphStart(UnityEngine.Playables.Playable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableBehaviour_OnGraphStart_mB5944807796239EFB530022539674C4E4D185D65 (PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___0_playable, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableBehaviour::OnGraphStop(UnityEngine.Playables.Playable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableBehaviour_OnGraphStop_mF80DFC8A3C2D2CA9299011D9E871ED6A8A9586CA (PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___0_playable, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableBehaviour::OnPlayableCreate(UnityEngine.Playables.Playable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableBehaviour_OnPlayableCreate_m22B0F0051A677A523C5702AABC6B1C9D358E90B8 (PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___0_playable, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableBehaviour::OnPlayableDestroy(UnityEngine.Playables.Playable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableBehaviour_OnPlayableDestroy_m3DB0AF7BD9689DA1BCCBBFD19BDD544143027C3C (PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___0_playable, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableBehaviour::OnBehaviourPlay(UnityEngine.Playables.Playable,UnityEngine.Playables.FrameData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableBehaviour_OnBehaviourPlay_m05F6FCCBC6E8FB4BA0BE2690045AF28BF95C6FE2 (PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___0_playable, FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314 ___1_info, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableBehaviour::OnBehaviourPause(UnityEngine.Playables.Playable,UnityEngine.Playables.FrameData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableBehaviour_OnBehaviourPause_m431A7BD2EE99C1862563FEA37E20C365B753930B (PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___0_playable, FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314 ___1_info, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableBehaviour::PrepareFrame(UnityEngine.Playables.Playable,UnityEngine.Playables.FrameData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableBehaviour_PrepareFrame_m33FED1E870D350D8276712A2CD75118FEFAA86BD (PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___0_playable, FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314 ___1_info, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableBehaviour::ProcessFrame(UnityEngine.Playables.Playable,UnityEngine.Playables.FrameData,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableBehaviour_ProcessFrame_mB80DDB2AB5D7EC0D3B9A466D37BE8556F6BBD2A0 (PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___0_playable, FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314 ___1_info, RuntimeObject* ___2_playerData, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Object UnityEngine.Playables.PlayableBehaviour::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayableBehaviour_Clone_m6A5B052F4ECA2ADED5937A4843777F52CCD33EE8 (PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = Object_MemberwiseClone_m0676AEE25C3CF7C09F15ECF9EC5CC407863617B3(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = V_0;
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


// Conversion methods for marshalling of: UnityEngine.Playables.PlayableBinding
IL2CPP_EXTERN_C void PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshal_pinvoke(const PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4& unmarshaled, PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_SourceBindingType_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_SourceBindingType' of type 'PlayableBinding': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_SourceBindingType_2Exception, NULL);
}
IL2CPP_EXTERN_C void PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshal_pinvoke_back(const PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshaled_pinvoke& marshaled, PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4& unmarshaled)
{
	Exception_t* ___m_SourceBindingType_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_SourceBindingType' of type 'PlayableBinding': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_SourceBindingType_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Playables.PlayableBinding
IL2CPP_EXTERN_C void PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshal_pinvoke_cleanup(PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: UnityEngine.Playables.PlayableBinding
IL2CPP_EXTERN_C void PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshal_com(const PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4& unmarshaled, PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshaled_com& marshaled)
{
	Exception_t* ___m_SourceBindingType_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_SourceBindingType' of type 'PlayableBinding': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_SourceBindingType_2Exception, NULL);
}
IL2CPP_EXTERN_C void PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshal_com_back(const PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshaled_com& marshaled, PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4& unmarshaled)
{
	Exception_t* ___m_SourceBindingType_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_SourceBindingType' of type 'PlayableBinding': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_SourceBindingType_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Playables.PlayableBinding
IL2CPP_EXTERN_C void PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshal_com_cleanup(PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshaled_com& marshaled)
{
}
// UnityEngine.Object UnityEngine.Playables.PlayableBinding::get_sourceObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* PlayableBinding_get_sourceObject_m195E6C4C3DF88BD89A2DE3923646B9A013310C09 (PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4* __this, const RuntimeMethod* method) 
{
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = __this->___m_SourceObject_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* PlayableBinding_get_sourceObject_m195E6C4C3DF88BD89A2DE3923646B9A013310C09_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4*>(__this + _offset);
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* _returnValue;
	_returnValue = PlayableBinding_get_sourceObject_m195E6C4C3DF88BD89A2DE3923646B9A013310C09(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Playables.PlayableOutput UnityEngine.Playables.PlayableBinding::CreateOutput(UnityEngine.Playables.PlayableGraph)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 PlayableBinding_CreateOutput_mE29B8B4AE0857C038D6DCA6824A307C60E2DD7C6 (PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4* __this, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___0_graph, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* L_0 = __this->___m_CreateOutputMethod_3;
		V_0 = (bool)((!(((RuntimeObject*)(CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* L_2 = __this->___m_CreateOutputMethod_3;
		PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E L_3 = ___0_graph;
		String_t* L_4 = __this->___m_StreamName_0;
		NullCheck(L_2);
		PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 L_5;
		L_5 = CreateOutputMethod_Invoke_mEC7DC5D9A9325BFFB17C248AE9738637704B89CC_inline(L_2, L_3, L_4, NULL);
		V_1 = L_5;
		goto IL_002b;
	}

IL_0023:
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680_il2cpp_TypeInfo_var);
		PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 L_6;
		L_6 = PlayableOutput_get_Null_mF602832968A37CB4E1971E2DD8EB95D760332E6E(NULL);
		V_1 = L_6;
		goto IL_002b;
	}

IL_002b:
	{
		PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C  PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 PlayableBinding_CreateOutput_mE29B8B4AE0857C038D6DCA6824A307C60E2DD7C6_AdjustorThunk (RuntimeObject* __this, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___0_graph, const RuntimeMethod* method)
{
	PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4*>(__this + _offset);
	PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 _returnValue;
	_returnValue = PlayableBinding_CreateOutput_mE29B8B4AE0857C038D6DCA6824A307C60E2DD7C6(_thisAdjusted, ___0_graph, method);
	return _returnValue;
}
// UnityEngine.Playables.PlayableBinding UnityEngine.Playables.PlayableBinding::CreateInternal(System.String,UnityEngine.Object,System.Type,UnityEngine.Playables.PlayableBinding/CreateOutputMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 PlayableBinding_CreateInternal_m63C8C98E659B52725E0373019ECFCEC22167A47A (String_t* ___0_name, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_sourceObject, Type_t* ___2_sourceType, CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* ___3_createFunction, const RuntimeMethod* method) 
{
	PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4));
		String_t* L_0 = ___0_name;
		(&V_0)->___m_StreamName_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___m_StreamName_0), (void*)L_0);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_1 = ___1_sourceObject;
		(&V_0)->___m_SourceObject_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___m_SourceObject_1), (void*)L_1);
		Type_t* L_2 = ___2_sourceType;
		(&V_0)->___m_SourceBindingType_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___m_SourceBindingType_2), (void*)L_2);
		CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* L_3 = ___3_createFunction;
		(&V_0)->___m_CreateOutputMethod_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___m_CreateOutputMethod_3), (void*)L_3);
		PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 L_4 = V_0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 L_5 = V_1;
		return L_5;
	}
}
// System.Void UnityEngine.Playables.PlayableBinding::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableBinding__cctor_m3055AFB9F43633F1353C40FC9E1B2A4492732AF1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD* L_0 = (PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD*)(PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD*)SZArrayNew(PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD_il2cpp_TypeInfo_var, (uint32_t)0);
		((PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_StaticFields*)il2cpp_codegen_static_fields_for(PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_il2cpp_TypeInfo_var))->___None_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_StaticFields*)il2cpp_codegen_static_fields_for(PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_il2cpp_TypeInfo_var))->___None_4), (void*)L_0);
		((PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_StaticFields*)il2cpp_codegen_static_fields_for(PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_il2cpp_TypeInfo_var))->___DefaultDuration_5 = (std::numeric_limits<double>::infinity());
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
PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 CreateOutputMethod_Invoke_mEC7DC5D9A9325BFFB17C248AE9738637704B89CC_Multicast(CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* __this, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___0_graph, String_t* ___1_name, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* currentDelegate = reinterpret_cast<CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509*>(delegatesToInvoke[i]);
		typedef PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 (*FunctionPointerType) (RuntimeObject*, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E, String_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_graph, ___1_name, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 CreateOutputMethod_Invoke_mEC7DC5D9A9325BFFB17C248AE9738637704B89CC_OpenInst(CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* __this, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___0_graph, String_t* ___1_name, const RuntimeMethod* method)
{
	typedef PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 (*FunctionPointerType) (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E, String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_graph, ___1_name, method);
}
PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 CreateOutputMethod_Invoke_mEC7DC5D9A9325BFFB17C248AE9738637704B89CC_OpenStatic(CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* __this, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___0_graph, String_t* ___1_name, const RuntimeMethod* method)
{
	typedef PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 (*FunctionPointerType) (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E, String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_graph, ___1_name, method);
}
PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 CreateOutputMethod_Invoke_mEC7DC5D9A9325BFFB17C248AE9738637704B89CC_OpenStaticInvoker(CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* __this, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___0_graph, String_t* ___1_name, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E, String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_graph, ___1_name);
}
PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 CreateOutputMethod_Invoke_mEC7DC5D9A9325BFFB17C248AE9738637704B89CC_ClosedStaticInvoker(CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* __this, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___0_graph, String_t* ___1_name, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680, RuntimeObject*, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E, String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_graph, ___1_name);
}
IL2CPP_EXTERN_C  PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 DelegatePInvokeWrapper_CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509 (CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* __this, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___0_graph, String_t* ___1_name, const RuntimeMethod* method)
{
	typedef PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 (DEFAULT_CALL *PInvokeFunc)(PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___1_name' to native representation
	char* ____1_name_marshaled = NULL;
	____1_name_marshaled = il2cpp_codegen_marshal_string(___1_name);

	// Native function invocation
	PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 returnValue = il2cppPInvokeFunc(___0_graph, ____1_name_marshaled);

	// Marshaling cleanup of parameter '___1_name' native representation
	il2cpp_codegen_marshal_free(____1_name_marshaled);
	____1_name_marshaled = NULL;

	return returnValue;
}
// System.Void UnityEngine.Playables.PlayableBinding/CreateOutputMethod::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateOutputMethod__ctor_m5A339017CD8ECB0140EB936FD2A5B589B20166B4 (CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CreateOutputMethod_Invoke_mEC7DC5D9A9325BFFB17C248AE9738637704B89CC_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&CreateOutputMethod_Invoke_mEC7DC5D9A9325BFFB17C248AE9738637704B89CC_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CreateOutputMethod_Invoke_mEC7DC5D9A9325BFFB17C248AE9738637704B89CC_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&CreateOutputMethod_Invoke_mEC7DC5D9A9325BFFB17C248AE9738637704B89CC_Multicast;
}
// UnityEngine.Playables.PlayableOutput UnityEngine.Playables.PlayableBinding/CreateOutputMethod::Invoke(UnityEngine.Playables.PlayableGraph,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 CreateOutputMethod_Invoke_mEC7DC5D9A9325BFFB17C248AE9738637704B89CC (CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* __this, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___0_graph, String_t* ___1_name, const RuntimeMethod* method) 
{
	typedef PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 (*FunctionPointerType) (RuntimeObject*, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E, String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_graph, ___1_name, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
// UnityEngine.Playables.Playable UnityEngine.Playables.PlayableGraph::GetRootPlayable(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F PlayableGraph_GetRootPlayable_m3BA0011AD6B13FCE5D58EA3E9BB17BE84319B53C (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ___0_index;
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = PlayableGraph_GetRootPlayableInternal_mB01EE3DE1FED4EB160B5EA367448521ED0F36165(__this, L_0, NULL);
		V_0 = L_1;
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_2 = V_0;
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_3;
		memset((&L_3), 0, sizeof(L_3));
		Playable__ctor_mD2EB35E024816AEED68795D0124EAB30E05BF6C4((&L_3), L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_0012;
	}

IL_0012:
	{
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F PlayableGraph_GetRootPlayable_m3BA0011AD6B13FCE5D58EA3E9BB17BE84319B53C_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E*>(__this + _offset);
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F _returnValue;
	_returnValue = PlayableGraph_GetRootPlayable_m3BA0011AD6B13FCE5D58EA3E9BB17BE84319B53C(_thisAdjusted, ___0_index, method);
	return _returnValue;
}
// System.Void UnityEngine.Playables.PlayableGraph::Evaluate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableGraph_Evaluate_m5E8756A5AB34EB7F9FC7682932D4BD6BE418352A (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* __this, const RuntimeMethod* method) 
{
	{
		PlayableGraph_Evaluate_m56DAAF530D0A6079FCBCFE86EF5E3E33374A22A7(__this, (0.0f), NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void PlayableGraph_Evaluate_m5E8756A5AB34EB7F9FC7682932D4BD6BE418352A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E*>(__this + _offset);
	PlayableGraph_Evaluate_m5E8756A5AB34EB7F9FC7682932D4BD6BE418352A(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Playables.PlayableGraph::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableGraph_IsValid_mB608FD2CEDAA27C31C34DF4639CF98199ECDC3CA (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = PlayableGraph_IsValid_Injected_mFFF3A7CB0D151BB47517B179E6D896896EABEB59(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool PlayableGraph_IsValid_mB608FD2CEDAA27C31C34DF4639CF98199ECDC3CA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableGraph_IsValid_mB608FD2CEDAA27C31C34DF4639CF98199ECDC3CA(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableGraph::IsPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableGraph_IsPlaying_m9289A7D3CBD3A73051568C20F384C1D4FBBA89E0 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = PlayableGraph_IsPlaying_Injected_m468BBBE757D50B44C92E779DF415E1DAE1347D15(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool PlayableGraph_IsPlaying_m9289A7D3CBD3A73051568C20F384C1D4FBBA89E0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableGraph_IsPlaying_m9289A7D3CBD3A73051568C20F384C1D4FBBA89E0(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Playables.PlayableGraph::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableGraph_Evaluate_m56DAAF530D0A6079FCBCFE86EF5E3E33374A22A7 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* __this, float ___0_deltaTime, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_deltaTime;
		PlayableGraph_Evaluate_Injected_mE269438DB1E95213E3D0FDFE4F4812FB46E497D2(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void PlayableGraph_Evaluate_m56DAAF530D0A6079FCBCFE86EF5E3E33374A22A7_AdjustorThunk (RuntimeObject* __this, float ___0_deltaTime, const RuntimeMethod* method)
{
	PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E*>(__this + _offset);
	PlayableGraph_Evaluate_m56DAAF530D0A6079FCBCFE86EF5E3E33374A22A7(_thisAdjusted, ___0_deltaTime, method);
}
// UnityEngine.IExposedPropertyTable UnityEngine.Playables.PlayableGraph::GetResolver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayableGraph_GetResolver_m7869599485E96C9D09E0680FA25099E9B2789A47 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = PlayableGraph_GetResolver_Injected_m9AFBA9449AE07F7EAFA9584F94C982AB8EA86884(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* PlayableGraph_GetResolver_m7869599485E96C9D09E0680FA25099E9B2789A47_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = PlayableGraph_GetResolver_m7869599485E96C9D09E0680FA25099E9B2789A47(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.Playables.PlayableGraph::GetPlayableCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableGraph_GetPlayableCount_m69E1448E840367C9A1D05BE0FB1908BD0C04B809 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = PlayableGraph_GetPlayableCount_Injected_mFD310C816E60BC671AAD0F28BBA6F56AF7A8BECC(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t PlayableGraph_GetPlayableCount_m69E1448E840367C9A1D05BE0FB1908BD0C04B809_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = PlayableGraph_GetPlayableCount_m69E1448E840367C9A1D05BE0FB1908BD0C04B809(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.Playables.PlayableGraph::GetRootPlayableCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableGraph_GetRootPlayableCount_mAD4CB33AEDB21181CAE1312C3D23CA14E52FFA45 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = PlayableGraph_GetRootPlayableCount_Injected_m68B5BA1E3A03E7A5648C88DC1F468B32EFE0F806(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t PlayableGraph_GetRootPlayableCount_mAD4CB33AEDB21181CAE1312C3D23CA14E52FFA45_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = PlayableGraph_GetRootPlayableCount_mAD4CB33AEDB21181CAE1312C3D23CA14E52FFA45(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Playables.PlayableGraph::SynchronizeEvaluation(UnityEngine.Playables.PlayableGraph)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableGraph_SynchronizeEvaluation_m9911E65EE4FE46BAE375EF11C884136C840760C0 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* __this, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___0_playable, const RuntimeMethod* method) 
{
	{
		PlayableGraph_SynchronizeEvaluation_Injected_m96FF3DC943BCDDEF96FA72BD38A7825D906FBE73(__this, (&___0_playable), NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void PlayableGraph_SynchronizeEvaluation_m9911E65EE4FE46BAE375EF11C884136C840760C0_AdjustorThunk (RuntimeObject* __this, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___0_playable, const RuntimeMethod* method)
{
	PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E*>(__this + _offset);
	PlayableGraph_SynchronizeEvaluation_m9911E65EE4FE46BAE375EF11C884136C840760C0(_thisAdjusted, ___0_playable, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableGraph::CreatePlayableHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 PlayableGraph_CreatePlayableHandle_mF90D606A614FB603DBFFE4E87C325F8CC59BED67 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableGraph_CreatePlayableHandle_Injected_m5E12AF54EFA209FDDCAE4F01A568A671386B5939(__this, (&V_0), NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = V_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 PlayableGraph_CreatePlayableHandle_mF90D606A614FB603DBFFE4E87C325F8CC59BED67_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = PlayableGraph_CreatePlayableHandle_mF90D606A614FB603DBFFE4E87C325F8CC59BED67(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableGraph::CreateScriptOutputInternal(System.String,UnityEngine.Playables.PlayableOutputHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableGraph_CreateScriptOutputInternal_m7B8A726419E5A7E5C07436BC168CE28B2D970393 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* __this, String_t* ___0_name, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___1_handle, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_name;
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* L_1 = ___1_handle;
		bool L_2;
		L_2 = PlayableGraph_CreateScriptOutputInternal_Injected_mA0A211C35D348D53BF00CB6AC1B288A8913917B5(__this, L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool PlayableGraph_CreateScriptOutputInternal_m7B8A726419E5A7E5C07436BC168CE28B2D970393_AdjustorThunk (RuntimeObject* __this, String_t* ___0_name, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___1_handle, const RuntimeMethod* method)
{
	PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableGraph_CreateScriptOutputInternal_m7B8A726419E5A7E5C07436BC168CE28B2D970393(_thisAdjusted, ___0_name, ___1_handle, method);
	return _returnValue;
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableGraph::GetRootPlayableInternal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 PlayableGraph_GetRootPlayableInternal_mB01EE3DE1FED4EB160B5EA367448521ED0F36165 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		PlayableGraph_GetRootPlayableInternal_Injected_m2497977732B8062F0C9C91563DB70E0AFA8533BB(__this, L_0, (&V_0), NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 PlayableGraph_GetRootPlayableInternal_mB01EE3DE1FED4EB160B5EA367448521ED0F36165_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = PlayableGraph_GetRootPlayableInternal_mB01EE3DE1FED4EB160B5EA367448521ED0F36165(_thisAdjusted, ___0_index, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableGraph::IsMatchFrameRateEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableGraph_IsMatchFrameRateEnabled_mC6D005B2F581E49DEA0037C8811CEA771C3CE1C3 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = PlayableGraph_IsMatchFrameRateEnabled_Injected_m4E5F1D55E7FE7F40E86E6125519B99E1C42E9352(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool PlayableGraph_IsMatchFrameRateEnabled_mC6D005B2F581E49DEA0037C8811CEA771C3CE1C3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableGraph_IsMatchFrameRateEnabled_mC6D005B2F581E49DEA0037C8811CEA771C3CE1C3(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Playables.FrameRate UnityEngine.Playables.PlayableGraph::GetFrameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E PlayableGraph_GetFrameRate_m81DF8FC361E09CC2A2FE2350E48FF2B1E4AFA990 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* __this, const RuntimeMethod* method) 
{
	FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableGraph_GetFrameRate_Injected_m6E6FDD47EE02D67D6ACD8078FF92CBBA4CD5D321(__this, (&V_0), NULL);
		FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E L_0 = V_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E PlayableGraph_GetFrameRate_m81DF8FC361E09CC2A2FE2350E48FF2B1E4AFA990_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E*>(__this + _offset);
	FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E _returnValue;
	_returnValue = PlayableGraph_GetFrameRate_m81DF8FC361E09CC2A2FE2350E48FF2B1E4AFA990(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableGraph::ConnectInternal(UnityEngine.Playables.PlayableHandle,System.Int32,UnityEngine.Playables.PlayableHandle,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableGraph_ConnectInternal_m86DBDCCD0D8D5B1734EA7E90268F057A6E52525A (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_source, int32_t ___1_sourceOutputPort, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___2_destination, int32_t ___3_destinationInputPort, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_sourceOutputPort;
		int32_t L_1 = ___3_destinationInputPort;
		bool L_2;
		L_2 = PlayableGraph_ConnectInternal_Injected_m1691F7ABEC3D3236450A775DD809AE46E9FC395D(__this, (&___0_source), L_0, (&___2_destination), L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool PlayableGraph_ConnectInternal_m86DBDCCD0D8D5B1734EA7E90268F057A6E52525A_AdjustorThunk (RuntimeObject* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_source, int32_t ___1_sourceOutputPort, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___2_destination, int32_t ___3_destinationInputPort, const RuntimeMethod* method)
{
	PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableGraph_ConnectInternal_m86DBDCCD0D8D5B1734EA7E90268F057A6E52525A(_thisAdjusted, ___0_source, ___1_sourceOutputPort, ___2_destination, ___3_destinationInputPort, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableGraph::IsValid_Injected(UnityEngine.Playables.PlayableGraph&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableGraph_IsValid_Injected_mFFF3A7CB0D151BB47517B179E6D896896EABEB59 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___0__unity_self, const RuntimeMethod* method) 
{
	typedef bool (*PlayableGraph_IsValid_Injected_mFFF3A7CB0D151BB47517B179E6D896896EABEB59_ftn) (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E*);
	static PlayableGraph_IsValid_Injected_mFFF3A7CB0D151BB47517B179E6D896896EABEB59_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayableGraph_IsValid_Injected_mFFF3A7CB0D151BB47517B179E6D896896EABEB59_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Playables.PlayableGraph::IsValid_Injected(UnityEngine.Playables.PlayableGraph&)");
	bool icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// System.Boolean UnityEngine.Playables.PlayableGraph::IsPlaying_Injected(UnityEngine.Playables.PlayableGraph&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableGraph_IsPlaying_Injected_m468BBBE757D50B44C92E779DF415E1DAE1347D15 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___0__unity_self, const RuntimeMethod* method) 
{
	typedef bool (*PlayableGraph_IsPlaying_Injected_m468BBBE757D50B44C92E779DF415E1DAE1347D15_ftn) (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E*);
	static PlayableGraph_IsPlaying_Injected_m468BBBE757D50B44C92E779DF415E1DAE1347D15_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayableGraph_IsPlaying_Injected_m468BBBE757D50B44C92E779DF415E1DAE1347D15_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Playables.PlayableGraph::IsPlaying_Injected(UnityEngine.Playables.PlayableGraph&)");
	bool icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// System.Void UnityEngine.Playables.PlayableGraph::Evaluate_Injected(UnityEngine.Playables.PlayableGraph&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableGraph_Evaluate_Injected_mE269438DB1E95213E3D0FDFE4F4812FB46E497D2 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___0__unity_self, float ___1_deltaTime, const RuntimeMethod* method) 
{
	typedef void (*PlayableGraph_Evaluate_Injected_mE269438DB1E95213E3D0FDFE4F4812FB46E497D2_ftn) (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E*, float);
	static PlayableGraph_Evaluate_Injected_mE269438DB1E95213E3D0FDFE4F4812FB46E497D2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayableGraph_Evaluate_Injected_mE269438DB1E95213E3D0FDFE4F4812FB46E497D2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Playables.PlayableGraph::Evaluate_Injected(UnityEngine.Playables.PlayableGraph&,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_deltaTime);
}
// UnityEngine.IExposedPropertyTable UnityEngine.Playables.PlayableGraph::GetResolver_Injected(UnityEngine.Playables.PlayableGraph&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayableGraph_GetResolver_Injected_m9AFBA9449AE07F7EAFA9584F94C982AB8EA86884 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___0__unity_self, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*PlayableGraph_GetResolver_Injected_m9AFBA9449AE07F7EAFA9584F94C982AB8EA86884_ftn) (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E*);
	static PlayableGraph_GetResolver_Injected_m9AFBA9449AE07F7EAFA9584F94C982AB8EA86884_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayableGraph_GetResolver_Injected_m9AFBA9449AE07F7EAFA9584F94C982AB8EA86884_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Playables.PlayableGraph::GetResolver_Injected(UnityEngine.Playables.PlayableGraph&)");
	RuntimeObject* icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// System.Int32 UnityEngine.Playables.PlayableGraph::GetPlayableCount_Injected(UnityEngine.Playables.PlayableGraph&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableGraph_GetPlayableCount_Injected_mFD310C816E60BC671AAD0F28BBA6F56AF7A8BECC (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___0__unity_self, const RuntimeMethod* method) 
{
	typedef int32_t (*PlayableGraph_GetPlayableCount_Injected_mFD310C816E60BC671AAD0F28BBA6F56AF7A8BECC_ftn) (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E*);
	static PlayableGraph_GetPlayableCount_Injected_mFD310C816E60BC671AAD0F28BBA6F56AF7A8BECC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayableGraph_GetPlayableCount_Injected_mFD310C816E60BC671AAD0F28BBA6F56AF7A8BECC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Playables.PlayableGraph::GetPlayableCount_Injected(UnityEngine.Playables.PlayableGraph&)");
	int32_t icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// System.Int32 UnityEngine.Playables.PlayableGraph::GetRootPlayableCount_Injected(UnityEngine.Playables.PlayableGraph&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableGraph_GetRootPlayableCount_Injected_m68B5BA1E3A03E7A5648C88DC1F468B32EFE0F806 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___0__unity_self, const RuntimeMethod* method) 
{
	typedef int32_t (*PlayableGraph_GetRootPlayableCount_Injected_m68B5BA1E3A03E7A5648C88DC1F468B32EFE0F806_ftn) (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E*);
	static PlayableGraph_GetRootPlayableCount_Injected_m68B5BA1E3A03E7A5648C88DC1F468B32EFE0F806_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayableGraph_GetRootPlayableCount_Injected_m68B5BA1E3A03E7A5648C88DC1F468B32EFE0F806_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Playables.PlayableGraph::GetRootPlayableCount_Injected(UnityEngine.Playables.PlayableGraph&)");
	int32_t icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// System.Void UnityEngine.Playables.PlayableGraph::SynchronizeEvaluation_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Playables.PlayableGraph&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableGraph_SynchronizeEvaluation_Injected_m96FF3DC943BCDDEF96FA72BD38A7825D906FBE73 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___0__unity_self, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___1_playable, const RuntimeMethod* method) 
{
	typedef void (*PlayableGraph_SynchronizeEvaluation_Injected_m96FF3DC943BCDDEF96FA72BD38A7825D906FBE73_ftn) (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E*, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E*);
	static PlayableGraph_SynchronizeEvaluation_Injected_m96FF3DC943BCDDEF96FA72BD38A7825D906FBE73_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayableGraph_SynchronizeEvaluation_Injected_m96FF3DC943BCDDEF96FA72BD38A7825D906FBE73_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Playables.PlayableGraph::SynchronizeEvaluation_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Playables.PlayableGraph&)");
	_il2cpp_icall_func(___0__unity_self, ___1_playable);
}
// System.Void UnityEngine.Playables.PlayableGraph::CreatePlayableHandle_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableGraph_CreatePlayableHandle_Injected_m5E12AF54EFA209FDDCAE4F01A568A671386B5939 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___0__unity_self, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___1_ret, const RuntimeMethod* method) 
{
	typedef void (*PlayableGraph_CreatePlayableHandle_Injected_m5E12AF54EFA209FDDCAE4F01A568A671386B5939_ftn) (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E*, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*);
	static PlayableGraph_CreatePlayableHandle_Injected_m5E12AF54EFA209FDDCAE4F01A568A671386B5939_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayableGraph_CreatePlayableHandle_Injected_m5E12AF54EFA209FDDCAE4F01A568A671386B5939_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Playables.PlayableGraph::CreatePlayableHandle_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Playables.PlayableHandle&)");
	_il2cpp_icall_func(___0__unity_self, ___1_ret);
}
// System.Boolean UnityEngine.Playables.PlayableGraph::CreateScriptOutputInternal_Injected(UnityEngine.Playables.PlayableGraph&,System.String,UnityEngine.Playables.PlayableOutputHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableGraph_CreateScriptOutputInternal_Injected_mA0A211C35D348D53BF00CB6AC1B288A8913917B5 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___0__unity_self, String_t* ___1_name, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___2_handle, const RuntimeMethod* method) 
{
	typedef bool (*PlayableGraph_CreateScriptOutputInternal_Injected_mA0A211C35D348D53BF00CB6AC1B288A8913917B5_ftn) (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E*, String_t*, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*);
	static PlayableGraph_CreateScriptOutputInternal_Injected_mA0A211C35D348D53BF00CB6AC1B288A8913917B5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayableGraph_CreateScriptOutputInternal_Injected_mA0A211C35D348D53BF00CB6AC1B288A8913917B5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Playables.PlayableGraph::CreateScriptOutputInternal_Injected(UnityEngine.Playables.PlayableGraph&,System.String,UnityEngine.Playables.PlayableOutputHandle&)");
	bool icallRetVal = _il2cpp_icall_func(___0__unity_self, ___1_name, ___2_handle);
	return icallRetVal;
}
// System.Void UnityEngine.Playables.PlayableGraph::GetRootPlayableInternal_Injected(UnityEngine.Playables.PlayableGraph&,System.Int32,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableGraph_GetRootPlayableInternal_Injected_m2497977732B8062F0C9C91563DB70E0AFA8533BB (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___0__unity_self, int32_t ___1_index, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___2_ret, const RuntimeMethod* method) 
{
	typedef void (*PlayableGraph_GetRootPlayableInternal_Injected_m2497977732B8062F0C9C91563DB70E0AFA8533BB_ftn) (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E*, int32_t, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*);
	static PlayableGraph_GetRootPlayableInternal_Injected_m2497977732B8062F0C9C91563DB70E0AFA8533BB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayableGraph_GetRootPlayableInternal_Injected_m2497977732B8062F0C9C91563DB70E0AFA8533BB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Playables.PlayableGraph::GetRootPlayableInternal_Injected(UnityEngine.Playables.PlayableGraph&,System.Int32,UnityEngine.Playables.PlayableHandle&)");
	_il2cpp_icall_func(___0__unity_self, ___1_index, ___2_ret);
}
// System.Boolean UnityEngine.Playables.PlayableGraph::IsMatchFrameRateEnabled_Injected(UnityEngine.Playables.PlayableGraph&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableGraph_IsMatchFrameRateEnabled_Injected_m4E5F1D55E7FE7F40E86E6125519B99E1C42E9352 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___0__unity_self, const RuntimeMethod* method) 
{
	typedef bool (*PlayableGraph_IsMatchFrameRateEnabled_Injected_m4E5F1D55E7FE7F40E86E6125519B99E1C42E9352_ftn) (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E*);
	static PlayableGraph_IsMatchFrameRateEnabled_Injected_m4E5F1D55E7FE7F40E86E6125519B99E1C42E9352_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayableGraph_IsMatchFrameRateEnabled_Injected_m4E5F1D55E7FE7F40E86E6125519B99E1C42E9352_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Playables.PlayableGraph::IsMatchFrameRateEnabled_Injected(UnityEngine.Playables.PlayableGraph&)");
	bool icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// System.Void UnityEngine.Playables.PlayableGraph::GetFrameRate_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Playables.FrameRate&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableGraph_GetFrameRate_Injected_m6E6FDD47EE02D67D6ACD8078FF92CBBA4CD5D321 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___0__unity_self, FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E* ___1_ret, const RuntimeMethod* method) 
{
	typedef void (*PlayableGraph_GetFrameRate_Injected_m6E6FDD47EE02D67D6ACD8078FF92CBBA4CD5D321_ftn) (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E*, FrameRate_t57F62C304A9ED1D60D64D5B7D4B7D4F0FC30964E*);
	static PlayableGraph_GetFrameRate_Injected_m6E6FDD47EE02D67D6ACD8078FF92CBBA4CD5D321_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayableGraph_GetFrameRate_Injected_m6E6FDD47EE02D67D6ACD8078FF92CBBA4CD5D321_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Playables.PlayableGraph::GetFrameRate_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Playables.FrameRate&)");
	_il2cpp_icall_func(___0__unity_self, ___1_ret);
}
// System.Boolean UnityEngine.Playables.PlayableGraph::ConnectInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Playables.PlayableHandle&,System.Int32,UnityEngine.Playables.PlayableHandle&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableGraph_ConnectInternal_Injected_m1691F7ABEC3D3236450A775DD809AE46E9FC395D (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___0__unity_self, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___1_source, int32_t ___2_sourceOutputPort, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___3_destination, int32_t ___4_destinationInputPort, const RuntimeMethod* method) 
{
	typedef bool (*PlayableGraph_ConnectInternal_Injected_m1691F7ABEC3D3236450A775DD809AE46E9FC395D_ftn) (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E*, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, int32_t, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, int32_t);
	static PlayableGraph_ConnectInternal_Injected_m1691F7ABEC3D3236450A775DD809AE46E9FC395D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayableGraph_ConnectInternal_Injected_m1691F7ABEC3D3236450A775DD809AE46E9FC395D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Playables.PlayableGraph::ConnectInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Playables.PlayableHandle&,System.Int32,UnityEngine.Playables.PlayableHandle&,System.Int32)");
	bool icallRetVal = _il2cpp_icall_func(___0__unity_self, ___1_source, ___2_sourceOutputPort, ___3_destination, ___4_destinationInputPort);
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
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = ((PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_StaticFields*)il2cpp_codegen_static_fields_for(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var))->___m_Null_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Playables.Playable UnityEngine.Playables.PlayableHandle::GetInput(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F PlayableHandle_GetInput_m3F42E2CF0D7DFA2396295133D02622C1BE3A8633 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, int32_t ___0_inputPort, const RuntimeMethod* method) 
{
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_inputPort;
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = PlayableHandle_GetInputHandle_mB9DAEF700C72515D7CA640F71C51A09C08DAD380(__this, L_0, NULL);
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_2;
		memset((&L_2), 0, sizeof(L_2));
		Playable__ctor_mD2EB35E024816AEED68795D0124EAB30E05BF6C4((&L_2), L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F PlayableHandle_GetInput_m3F42E2CF0D7DFA2396295133D02622C1BE3A8633_AdjustorThunk (RuntimeObject* __this, int32_t ___0_inputPort, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*>(__this + _offset);
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F _returnValue;
	_returnValue = PlayableHandle_GetInput_m3F42E2CF0D7DFA2396295133D02622C1BE3A8633(_thisAdjusted, ___0_inputPort, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableHandle::SetInputWeight(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_SetInputWeight_m8647C2593A24870E429A0832FC26EE2241CC302E (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, int32_t ___0_inputIndex, float ___1_weight, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		int32_t L_0 = ___0_inputIndex;
		bool L_1;
		L_1 = PlayableHandle_CheckInputBounds_m5A5D02E53EF84B63F75DBB414906923677EED1E3(__this, L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = ___0_inputIndex;
		float L_4 = ___1_weight;
		PlayableHandle_SetInputWeightFromIndex_mF56AA0C0055C18FF46EF8E315331FDF45D832752(__this, L_3, L_4, NULL);
		V_1 = (bool)1;
		goto IL_001e;
	}

IL_001a:
	{
		V_1 = (bool)0;
		goto IL_001e;
	}

IL_001e:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_SetInputWeight_m8647C2593A24870E429A0832FC26EE2241CC302E_AdjustorThunk (RuntimeObject* __this, int32_t ___0_inputIndex, float ___1_weight, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableHandle_SetInputWeight_m8647C2593A24870E429A0832FC26EE2241CC302E(_thisAdjusted, ___0_inputIndex, ___1_weight, method);
	return _returnValue;
}
// System.Single UnityEngine.Playables.PlayableHandle::GetInputWeight(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayableHandle_GetInputWeight_m0C5D7A870D6DDE9F1A5193907ADCA0335DC6207A (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, int32_t ___0_inputIndex, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		int32_t L_0 = ___0_inputIndex;
		bool L_1;
		L_1 = PlayableHandle_CheckInputBounds_m5A5D02E53EF84B63F75DBB414906923677EED1E3(__this, L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = ___0_inputIndex;
		float L_4;
		L_4 = PlayableHandle_GetInputWeightFromIndex_mF50333BE4F3BD48CCF6A431BC6B99D4CBF131CD6(__this, L_3, NULL);
		V_1 = L_4;
		goto IL_001f;
	}

IL_0017:
	{
		V_1 = (0.0f);
		goto IL_001f;
	}

IL_001f:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_EXTERN_C  float PlayableHandle_GetInputWeight_m0C5D7A870D6DDE9F1A5193907ADCA0335DC6207A_AdjustorThunk (RuntimeObject* __this, int32_t ___0_inputIndex, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*>(__this + _offset);
	float _returnValue;
	_returnValue = PlayableHandle_GetInputWeight_m0C5D7A870D6DDE9F1A5193907ADCA0335DC6207A(_thisAdjusted, ___0_inputIndex, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableHandle::op_Equality(UnityEngine.Playables.PlayableHandle,UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_x, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___1_y, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = ___0_x;
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = ___1_y;
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_CompareVersion_m228CA864DC2BCAA0E03B4C74EC9F2A7B529526D9(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.Playables.PlayableHandle::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_Equals_m60AD76B7D38CA989AE84501B2E9F9ED5CB5F9670 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, RuntimeObject* ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		RuntimeObject* L_0 = ___0_p;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = ___0_p;
		bool L_2;
		L_2 = PlayableHandle_Equals_m81BA0E127133DFF3E45DA61D185FDF48E16BCF45(__this, ((*(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*)((PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*)(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*)UnBox(L_1, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var)))), NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
	}

IL_0018:
	{
		V_0 = (bool)G_B3_0;
		goto IL_001b;
	}

IL_001b:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_Equals_m60AD76B7D38CA989AE84501B2E9F9ED5CB5F9670_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_p, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableHandle_Equals_m60AD76B7D38CA989AE84501B2E9F9ED5CB5F9670(_thisAdjusted, ___0_p, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableHandle::Equals(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_Equals_m81BA0E127133DFF3E45DA61D185FDF48E16BCF45 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = (*(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*)__this);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = ___0_other;
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_CompareVersion_m228CA864DC2BCAA0E03B4C74EC9F2A7B529526D9(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_Equals_m81BA0E127133DFF3E45DA61D185FDF48E16BCF45_AdjustorThunk (RuntimeObject* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_other, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableHandle_Equals_m81BA0E127133DFF3E45DA61D185FDF48E16BCF45(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Int32 UnityEngine.Playables.PlayableHandle::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableHandle_GetHashCode_m10FB32ECDC0B9D7BDAEA9E3B76BDDF4614F4EF4F (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Handle_0);
		int32_t L_1;
		L_1 = IntPtr_GetHashCode_m669B16AD7483C1C396E48F41D9CAC4B719E38F3D(L_0, NULL);
		uint32_t* L_2 = (uint32_t*)(&__this->___m_Version_1);
		int32_t L_3;
		L_3 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC(L_2, NULL);
		V_0 = ((int32_t)(L_1^L_3));
		goto IL_001b;
	}

IL_001b:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t PlayableHandle_GetHashCode_m10FB32ECDC0B9D7BDAEA9E3B76BDDF4614F4EF4F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = PlayableHandle_GetHashCode_m10FB32ECDC0B9D7BDAEA9E3B76BDDF4614F4EF4F(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableHandle::CompareVersion(UnityEngine.Playables.PlayableHandle,UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_CompareVersion_m228CA864DC2BCAA0E03B4C74EC9F2A7B529526D9 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_lhs, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___1_rhs, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = ___0_lhs;
		intptr_t L_1 = L_0.___m_Handle_0;
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_2 = ___1_rhs;
		intptr_t L_3 = L_2.___m_Handle_0;
		bool L_4;
		L_4 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_5 = ___0_lhs;
		uint32_t L_6 = L_5.___m_Version_1;
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_7 = ___1_rhs;
		uint32_t L_8 = L_7.___m_Version_1;
		G_B3_0 = ((((int32_t)L_6) == ((int32_t)L_8))? 1 : 0);
		goto IL_0025;
	}

IL_0024:
	{
		G_B3_0 = 0;
	}

IL_0025:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0028;
	}

IL_0028:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
// System.Boolean UnityEngine.Playables.PlayableHandle::CheckInputBounds(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_CheckInputBounds_m5A5D02E53EF84B63F75DBB414906923677EED1E3 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, int32_t ___0_inputIndex, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = ___0_inputIndex;
		bool L_1;
		L_1 = PlayableHandle_CheckInputBounds_mEA09337758C333586D6B7B4A5D1E10852ECFC1D8(__this, L_0, (bool)0, NULL);
		V_0 = L_1;
		goto IL_000c;
	}

IL_000c:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_CheckInputBounds_m5A5D02E53EF84B63F75DBB414906923677EED1E3_AdjustorThunk (RuntimeObject* __this, int32_t ___0_inputIndex, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableHandle_CheckInputBounds_m5A5D02E53EF84B63F75DBB414906923677EED1E3(_thisAdjusted, ___0_inputIndex, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableHandle::CheckInputBounds(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_CheckInputBounds_mEA09337758C333586D6B7B4A5D1E10852ECFC1D8 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, int32_t ___0_inputIndex, bool ___1_acceptAny, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	{
		int32_t L_0 = ___0_inputIndex;
		bool L_1 = ___1_acceptAny;
		V_0 = (bool)((int32_t)(((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0)&(int32_t)L_1));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		V_1 = (bool)1;
		goto IL_007d;
	}

IL_000f:
	{
		int32_t L_3 = ___0_inputIndex;
		V_2 = (bool)((((int32_t)L_3) < ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_5 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE2F79FB192876E4E1E171924672DA41A76D4BECA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PlayableHandle_CheckInputBounds_mEA09337758C333586D6B7B4A5D1E10852ECFC1D8_RuntimeMethod_var)));
	}

IL_0023:
	{
		int32_t L_6;
		L_6 = PlayableHandle_GetInputCount_m7FE60883E4B7C9AF7D39F28A044924ADBD5E5121(__this, NULL);
		int32_t L_7 = ___0_inputIndex;
		V_3 = (bool)((((int32_t)((((int32_t)L_6) > ((int32_t)L_7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0079;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var)), (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral489645AAD8BA859BA3C92176D1FC5FD57829EF03)));
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral489645AAD8BA859BA3C92176D1FC5FD57829EF03)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		String_t* L_12;
		L_12 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___0_inputIndex), NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_12);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_11;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral29C142AE3A55685A1D7CC7DC727CB3C94CC89323)));
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral29C142AE3A55685A1D7CC7DC727CB3C94CC89323)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		int32_t L_15;
		L_15 = PlayableHandle_GetInputCount_m7FE60883E4B7C9AF7D39F28A044924ADBD5E5121(__this, NULL);
		V_4 = L_15;
		String_t* L_16;
		L_16 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_4), NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_16);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_14;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466)));
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466)));
		String_t* L_18;
		L_18 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_17, NULL);
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_19 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		NullCheck(L_19);
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_19, L_18, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PlayableHandle_CheckInputBounds_mEA09337758C333586D6B7B4A5D1E10852ECFC1D8_RuntimeMethod_var)));
	}

IL_0079:
	{
		V_1 = (bool)1;
		goto IL_007d;
	}

IL_007d:
	{
		bool L_20 = V_1;
		return L_20;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_CheckInputBounds_mEA09337758C333586D6B7B4A5D1E10852ECFC1D8_AdjustorThunk (RuntimeObject* __this, int32_t ___0_inputIndex, bool ___1_acceptAny, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableHandle_CheckInputBounds_mEA09337758C333586D6B7B4A5D1E10852ECFC1D8(_thisAdjusted, ___0_inputIndex, ___1_acceptAny, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = PlayableHandle_IsValid_Injected_m9D662778C1A39FD8AEC18AEF053AE5C3DBD7B4B9(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098(_thisAdjusted, method);
	return _returnValue;
}
// System.Type UnityEngine.Playables.PlayableHandle::GetPlayableType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* PlayableHandle_GetPlayableType_mD9750F1B85DF086F52641D6AB85789601486B686 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		Type_t* L_0;
		L_0 = PlayableHandle_GetPlayableType_Injected_mD71007C85AACC8A18E2A5296B88FD8EA47349A9D(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t* PlayableHandle_GetPlayableType_mD9750F1B85DF086F52641D6AB85789601486B686_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*>(__this + _offset);
	Type_t* _returnValue;
	_returnValue = PlayableHandle_GetPlayableType_mD9750F1B85DF086F52641D6AB85789601486B686(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Playables.PlayableHandle::SetScriptInstance(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetScriptInstance_m479F7C03A25E77284BE1949CF5EABE903B9B26EE (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, RuntimeObject* ___0_scriptInstance, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_scriptInstance;
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_SetScriptInstance_Injected_m0857A5E5961A9F0C85AF6FBC8BDCA81040B472A9(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void PlayableHandle_SetScriptInstance_m479F7C03A25E77284BE1949CF5EABE903B9B26EE_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_scriptInstance, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*>(__this + _offset);
	PlayableHandle_SetScriptInstance_m479F7C03A25E77284BE1949CF5EABE903B9B26EE(_thisAdjusted, ___0_scriptInstance, method);
}
// UnityEngine.Playables.PlayState UnityEngine.Playables.PlayableHandle::GetPlayState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableHandle_GetPlayState_m14547B804BB9B9B9E2B20B3F0975334CC99E778F (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = PlayableHandle_GetPlayState_Injected_m13EB10AE657A2CA4DCDD017BBB6128FE5C5D262A(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t PlayableHandle_GetPlayState_m14547B804BB9B9B9E2B20B3F0975334CC99E778F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = PlayableHandle_GetPlayState_m14547B804BB9B9B9E2B20B3F0975334CC99E778F(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Playables.PlayableHandle::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_Play_m1EF8E1105EB6A4A9B0D6638A57CDCBCEEDC6FB2D (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_Play_Injected_m8F34984563F1A8BF53D393C9893D4F2C05B18838(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void PlayableHandle_Play_m1EF8E1105EB6A4A9B0D6638A57CDCBCEEDC6FB2D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*>(__this + _offset);
	PlayableHandle_Play_m1EF8E1105EB6A4A9B0D6638A57CDCBCEEDC6FB2D(_thisAdjusted, method);
}
// System.Void UnityEngine.Playables.PlayableHandle::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_Pause_m75833A31BA17AC8900736C6F5AC778D033001B32 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_Pause_Injected_m03C53A86591E68B96874119A8B1B56B22E7A2F71(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void PlayableHandle_Pause_m75833A31BA17AC8900736C6F5AC778D033001B32_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*>(__this + _offset);
	PlayableHandle_Pause_m75833A31BA17AC8900736C6F5AC778D033001B32(_thisAdjusted, method);
}
// System.Void UnityEngine.Playables.PlayableHandle::SetSpeed(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetSpeed_m39D426AE0DF93F876C2C1EDF9417C11B97A305E9 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, double ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_SetSpeed_Injected_mC55D3E342BBB56C6BA115537ADA3B2CAE82E26C0(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void PlayableHandle_SetSpeed_m39D426AE0DF93F876C2C1EDF9417C11B97A305E9_AdjustorThunk (RuntimeObject* __this, double ___0_value, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*>(__this + _offset);
	PlayableHandle_SetSpeed_m39D426AE0DF93F876C2C1EDF9417C11B97A305E9(_thisAdjusted, ___0_value, method);
}
// System.Double UnityEngine.Playables.PlayableHandle::GetTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double PlayableHandle_GetTime_m27CB24B86EF0E6A4BD2C53907A677059B5D2BD5D (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		double L_0;
		L_0 = PlayableHandle_GetTime_Injected_m1D4833ED2DB4BD71082BDD577AEAF293028EB654(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  double PlayableHandle_GetTime_m27CB24B86EF0E6A4BD2C53907A677059B5D2BD5D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*>(__this + _offset);
	double _returnValue;
	_returnValue = PlayableHandle_GetTime_m27CB24B86EF0E6A4BD2C53907A677059B5D2BD5D(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Playables.PlayableHandle::SetTime(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetTime_m6D255AB6779F3DC278813F1C016FE4EBC9F4B1E4 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, double ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_SetTime_Injected_m8449B7E24321BFA6894EAC1834E79C5A5DC45E77(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void PlayableHandle_SetTime_m6D255AB6779F3DC278813F1C016FE4EBC9F4B1E4_AdjustorThunk (RuntimeObject* __this, double ___0_value, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*>(__this + _offset);
	PlayableHandle_SetTime_m6D255AB6779F3DC278813F1C016FE4EBC9F4B1E4(_thisAdjusted, ___0_value, method);
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsDone_mF5DAB54F941BC13799577396526E3901CF639DE6 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = PlayableHandle_IsDone_Injected_mF38535A24976C4976BA572A806A08AC7796CD85C(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_IsDone_mF5DAB54F941BC13799577396526E3901CF639DE6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableHandle_IsDone_mF5DAB54F941BC13799577396526E3901CF639DE6(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Playables.PlayableHandle::SetDone(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetDone_mE04197A8D1657035DC6C70AF7291715557A9FB49 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_SetDone_Injected_m2D0CC96C8CF9B9F6921C242FF1685A219E9AF740(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void PlayableHandle_SetDone_mE04197A8D1657035DC6C70AF7291715557A9FB49_AdjustorThunk (RuntimeObject* __this, bool ___0_value, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*>(__this + _offset);
	PlayableHandle_SetDone_mE04197A8D1657035DC6C70AF7291715557A9FB49(_thisAdjusted, ___0_value, method);
}
// System.Double UnityEngine.Playables.PlayableHandle::GetDuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double PlayableHandle_GetDuration_mE3CF9C12CA5A186288A7F1981A92F043100E02A7 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		double L_0;
		L_0 = PlayableHandle_GetDuration_Injected_mB0942C618219679840CE56270EEAE8A61D7183F3(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  double PlayableHandle_GetDuration_mE3CF9C12CA5A186288A7F1981A92F043100E02A7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*>(__this + _offset);
	double _returnValue;
	_returnValue = PlayableHandle_GetDuration_mE3CF9C12CA5A186288A7F1981A92F043100E02A7(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Playables.PlayableHandle::SetDuration(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetDuration_m4E07F9F3A90B2F3CE10325D9F405993F03CCA08B (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, double ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_SetDuration_Injected_m427D8F5EC8D7A4AF48274B7A12E197667B1392B4(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void PlayableHandle_SetDuration_m4E07F9F3A90B2F3CE10325D9F405993F03CCA08B_AdjustorThunk (RuntimeObject* __this, double ___0_value, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*>(__this + _offset);
	PlayableHandle_SetDuration_m4E07F9F3A90B2F3CE10325D9F405993F03CCA08B(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.Playables.PlayableHandle::SetPropagateSetTime(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetPropagateSetTime_mD1458DFF49EF07D73884A9BBAC31358579C8931B (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_SetPropagateSetTime_Injected_mA7ADF0169F58568C4B880F7D0A32B5489D59A7DD(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void PlayableHandle_SetPropagateSetTime_mD1458DFF49EF07D73884A9BBAC31358579C8931B_AdjustorThunk (RuntimeObject* __this, bool ___0_value, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*>(__this + _offset);
	PlayableHandle_SetPropagateSetTime_mD1458DFF49EF07D73884A9BBAC31358579C8931B(_thisAdjusted, ___0_value, method);
}
// UnityEngine.Playables.PlayableGraph UnityEngine.Playables.PlayableHandle::GetGraph()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E PlayableHandle_GetGraph_m03AFC9F0B66AC13A120EC37F6964200C9973CE24 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_GetGraph_Injected_m07C513A9056C9A67230EFA8692EE76C6BD02DA3B(__this, (&V_0), NULL);
		PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E L_0 = V_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E PlayableHandle_GetGraph_m03AFC9F0B66AC13A120EC37F6964200C9973CE24_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*>(__this + _offset);
	PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E _returnValue;
	_returnValue = PlayableHandle_GetGraph_m03AFC9F0B66AC13A120EC37F6964200C9973CE24(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.Playables.PlayableHandle::GetInputCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableHandle_GetInputCount_m7FE60883E4B7C9AF7D39F28A044924ADBD5E5121 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = PlayableHandle_GetInputCount_Injected_m802EC16FCA791F8E54ED29F090D5D16A931FFA9C(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t PlayableHandle_GetInputCount_m7FE60883E4B7C9AF7D39F28A044924ADBD5E5121_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = PlayableHandle_GetInputCount_m7FE60883E4B7C9AF7D39F28A044924ADBD5E5121(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Playables.PlayableHandle::SetInputCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetInputCount_m6067CD3616C428F777903FCBFD789060A2185DEE (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_SetInputCount_Injected_mD0EF7227FFAE50E134562BA1EC1BF3C2D02BDF77(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void PlayableHandle_SetInputCount_m6067CD3616C428F777903FCBFD789060A2185DEE_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*>(__this + _offset);
	PlayableHandle_SetInputCount_m6067CD3616C428F777903FCBFD789060A2185DEE(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.Playables.PlayableHandle::SetInputWeight(UnityEngine.Playables.PlayableHandle,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetInputWeight_mCC570E6D826D79987CC4E021DA9E7C0B700C0AC1 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_input, float ___1_weight, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___1_weight;
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_SetInputWeight_Injected_mF5F691D651C7807A5C3426083FD0296EDA97ABDB(__this, (&___0_input), L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void PlayableHandle_SetInputWeight_mCC570E6D826D79987CC4E021DA9E7C0B700C0AC1_AdjustorThunk (RuntimeObject* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_input, float ___1_weight, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*>(__this + _offset);
	PlayableHandle_SetInputWeight_mCC570E6D826D79987CC4E021DA9E7C0B700C0AC1(_thisAdjusted, ___0_input, ___1_weight, method);
}
// System.Double UnityEngine.Playables.PlayableHandle::GetPreviousTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double PlayableHandle_GetPreviousTime_m0C6881E900DF5FE7281699876DFE48BA64DEC1BF (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		double L_0;
		L_0 = PlayableHandle_GetPreviousTime_Injected_m3B00E2845E777DF6860D65CE352C21100AB2D958(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  double PlayableHandle_GetPreviousTime_m0C6881E900DF5FE7281699876DFE48BA64DEC1BF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*>(__this + _offset);
	double _returnValue;
	_returnValue = PlayableHandle_GetPreviousTime_m0C6881E900DF5FE7281699876DFE48BA64DEC1BF(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Playables.PlayableHandle::SetTraversalMode(UnityEngine.Playables.PlayableTraversalMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetTraversalMode_m5302D6FC1935F2EF97E25DF58B402CC8700DE03D (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, int32_t ___0_mode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_mode;
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_SetTraversalMode_Injected_mC412F9CD172B11A45E1F68441F1C9905C2D7B315(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void PlayableHandle_SetTraversalMode_m5302D6FC1935F2EF97E25DF58B402CC8700DE03D_AdjustorThunk (RuntimeObject* __this, int32_t ___0_mode, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*>(__this + _offset);
	PlayableHandle_SetTraversalMode_m5302D6FC1935F2EF97E25DF58B402CC8700DE03D(_thisAdjusted, ___0_mode, method);
}
// UnityEngine.Playables.DirectorWrapMode UnityEngine.Playables.PlayableHandle::GetTimeWrapMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableHandle_GetTimeWrapMode_m3C4CF421B7470E04537C45092DA9A1D242A5D1B4 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = PlayableHandle_GetTimeWrapMode_Injected_m48C83527FF7BBD9B7F100ED2490E50A5BE327415(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t PlayableHandle_GetTimeWrapMode_m3C4CF421B7470E04537C45092DA9A1D242A5D1B4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = PlayableHandle_GetTimeWrapMode_m3C4CF421B7470E04537C45092DA9A1D242A5D1B4(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Playables.PlayableHandle::SetTimeWrapMode(UnityEngine.Playables.DirectorWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetTimeWrapMode_m88B50CE0AABE0183BBF12ACEC5E84CBEDAB76C2F (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, int32_t ___0_mode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_mode;
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_SetTimeWrapMode_Injected_mADEF8F2E92C329006CC97E7B179AC8DEB945F84B(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void PlayableHandle_SetTimeWrapMode_m88B50CE0AABE0183BBF12ACEC5E84CBEDAB76C2F_AdjustorThunk (RuntimeObject* __this, int32_t ___0_mode, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*>(__this + _offset);
	PlayableHandle_SetTimeWrapMode_m88B50CE0AABE0183BBF12ACEC5E84CBEDAB76C2F(_thisAdjusted, ___0_mode, method);
}
// System.Object UnityEngine.Playables.PlayableHandle::GetScriptInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayableHandle_GetScriptInstance_m14D182ED7BEB2AAE1ADD86189A687FF0F86FA925 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = PlayableHandle_GetScriptInstance_Injected_mEA519D092C0AEECAB6B22178D837CB0F6F9FCF21(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* PlayableHandle_GetScriptInstance_m14D182ED7BEB2AAE1ADD86189A687FF0F86FA925_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = PlayableHandle_GetScriptInstance_m14D182ED7BEB2AAE1ADD86189A687FF0F86FA925(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::GetInputHandle(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 PlayableHandle_GetInputHandle_mB9DAEF700C72515D7CA640F71C51A09C08DAD380 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_GetInputHandle_Injected_mE1DBCCE1A34C8C3E8B8939A7232EB6B69976ADBF(__this, L_0, (&V_0), NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 PlayableHandle_GetInputHandle_mB9DAEF700C72515D7CA640F71C51A09C08DAD380_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = PlayableHandle_GetInputHandle_mB9DAEF700C72515D7CA640F71C51A09C08DAD380(_thisAdjusted, ___0_index, method);
	return _returnValue;
}
// System.Void UnityEngine.Playables.PlayableHandle::SetInputWeightFromIndex(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetInputWeightFromIndex_mF56AA0C0055C18FF46EF8E315331FDF45D832752 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, int32_t ___0_index, float ___1_weight, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_index;
		float L_1 = ___1_weight;
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_SetInputWeightFromIndex_Injected_m1B209DBD186EA35CA4B32A5DB2616F882250E7E9(__this, L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void PlayableHandle_SetInputWeightFromIndex_mF56AA0C0055C18FF46EF8E315331FDF45D832752_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, float ___1_weight, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*>(__this + _offset);
	PlayableHandle_SetInputWeightFromIndex_mF56AA0C0055C18FF46EF8E315331FDF45D832752(_thisAdjusted, ___0_index, ___1_weight, method);
}
// System.Single UnityEngine.Playables.PlayableHandle::GetInputWeightFromIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayableHandle_GetInputWeightFromIndex_mF50333BE4F3BD48CCF6A431BC6B99D4CBF131CD6 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_index;
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = PlayableHandle_GetInputWeightFromIndex_Injected_mBD7D1FBCD09D2AAE5F9D86D9F06A897DCD40493A(__this, L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  float PlayableHandle_GetInputWeightFromIndex_mF50333BE4F3BD48CCF6A431BC6B99D4CBF131CD6_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*>(__this + _offset);
	float _returnValue;
	_returnValue = PlayableHandle_GetInputWeightFromIndex_mF50333BE4F3BD48CCF6A431BC6B99D4CBF131CD6(_thisAdjusted, ___0_index, method);
	return _returnValue;
}
// System.Void UnityEngine.Playables.PlayableHandle::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle__cctor_mE31857278AA27F9CF449BD99AC79EC5E295A5278 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_initobj((&((PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_StaticFields*)il2cpp_codegen_static_fields_for(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var))->___m_Null_2), sizeof(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4));
		return;
	}
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsValid_Injected(UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsValid_Injected_m9D662778C1A39FD8AEC18AEF053AE5C3DBD7B4B9 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0__unity_self, const RuntimeMethod* method) 
{
	typedef bool (*PlayableHandle_IsValid_Injected_m9D662778C1A39FD8AEC18AEF053AE5C3DBD7B4B9_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*);
	static PlayableHandle_IsValid_Injected_m9D662778C1A39FD8AEC18AEF053AE5C3DBD7B4B9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayableHandle_IsValid_Injected_m9D662778C1A39FD8AEC18AEF053AE5C3DBD7B4B9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Playables.PlayableHandle::IsValid_Injected(UnityEngine.Playables.PlayableHandle&)");
	bool icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// System.Type UnityEngine.Playables.PlayableHandle::GetPlayableType_Injected(UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* PlayableHandle_GetPlayableType_Injected_mD71007C85AACC8A18E2A5296B88FD8EA47349A9D (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0__unity_self, const RuntimeMethod* method) 
{
	typedef Type_t* (*PlayableHandle_GetPlayableType_Injected_mD71007C85AACC8A18E2A5296B88FD8EA47349A9D_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*);
	static PlayableHandle_GetPlayableType_Injected_mD71007C85AACC8A18E2A5296B88FD8EA47349A9D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayableHandle_GetPlayableType_Injected_mD71007C85AACC8A18E2A5296B88FD8EA47349A9D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Playables.PlayableHandle::GetPlayableType_Injected(UnityEngine.Playables.PlayableHandle&)");
	Type_t* icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// System.Void UnityEngine.Playables.PlayableHandle::SetScriptInstance_Injected(UnityEngine.Playables.PlayableHandle&,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetScriptInstance_Injected_m0857A5E5961A9F0C85AF6FBC8BDCA81040B472A9 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0__unity_self, RuntimeObject* ___1_scriptInstance, const RuntimeMethod* method) 
{
	typedef void (*PlayableHandle_SetScriptInstance_Injected_m0857A5E5961A9F0C85AF6FBC8BDCA81040B472A9_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, RuntimeObject*);
	static PlayableHandle_SetScriptInstance_Injected_m0857A5E5961A9F0C85AF6FBC8BDCA81040B472A9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayableHandle_SetScriptInstance_Injected_m0857A5E5961A9F0C85AF6FBC8BDCA81040B472A9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Playables.PlayableHandle::SetScriptInstance_Injected(UnityEngine.Playables.PlayableHandle&,System.Object)");
	_il2cpp_icall_func(___0__unity_self, ___1_scriptInstance);
}
// UnityEngine.Playables.PlayState UnityEngine.Playables.PlayableHandle::GetPlayState_Injected(UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableHandle_GetPlayState_Injected_m13EB10AE657A2CA4DCDD017BBB6128FE5C5D262A (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0__unity_self, const RuntimeMethod* method) 
{
	typedef int32_t (*PlayableHandle_GetPlayState_Injected_m13EB10AE657A2CA4DCDD017BBB6128FE5C5D262A_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*);
	static PlayableHandle_GetPlayState_Injected_m13EB10AE657A2CA4DCDD017BBB6128FE5C5D262A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayableHandle_GetPlayState_Injected_m13EB10AE657A2CA4DCDD017BBB6128FE5C5D262A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Playables.PlayableHandle::GetPlayState_Injected(UnityEngine.Playables.PlayableHandle&)");
	int32_t icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// System.Void UnityEngine.Playables.PlayableHandle::Play_Injected(UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_Play_Injected_m8F34984563F1A8BF53D393C9893D4F2C05B18838 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0__unity_self, const RuntimeMethod* method) 
{
	typedef void (*PlayableHandle_Play_Injected_m8F34984563F1A8BF53D393C9893D4F2C05B18838_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*);
	static PlayableHandle_Play_Injected_m8F34984563F1A8BF53D393C9893D4F2C05B18838_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayableHandle_Play_Injected_m8F34984563F1A8BF53D393C9893D4F2C05B18838_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Playables.PlayableHandle::Play_Injected(UnityEngine.Playables.PlayableHandle&)");
	_il2cpp_icall_func(___0__unity_self);
}
// System.Void UnityEngine.Playables.PlayableHandle::Pause_Injected(UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_Pause_Injected_m03C53A86591E68B96874119A8B1B56B22E7A2F71 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0__unity_self, const RuntimeMethod* method) 
{
	typedef void (*PlayableHandle_Pause_Injected_m03C53A86591E68B96874119A8B1B56B22E7A2F71_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*);
	static PlayableHandle_Pause_Injected_m03C53A86591E68B96874119A8B1B56B22E7A2F71_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayableHandle_Pause_Injected_m03C53A86591E68B96874119A8B1B56B22E7A2F71_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Playables.PlayableHandle::Pause_Injected(UnityEngine.Playables.PlayableHandle&)");
	_il2cpp_icall_func(___0__unity_self);
}
// System.Void UnityEngine.Playables.PlayableHandle::SetSpeed_Injected(UnityEngine.Playables.PlayableHandle&,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetSpeed_Injected_mC55D3E342BBB56C6BA115537ADA3B2CAE82E26C0 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0__unity_self, double ___1_value, const RuntimeMethod* method) 
{
	typedef void (*PlayableHandle_SetSpeed_Injected_mC55D3E342BBB56C6BA115537ADA3B2CAE82E26C0_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, double);
	static PlayableHandle_SetSpeed_Injected_mC55D3E342BBB56C6BA115537ADA3B2CAE82E26C0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayableHandle_SetSpeed_Injected_mC55D3E342BBB56C6BA115537ADA3B2CAE82E26C0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Playables.PlayableHandle::SetSpeed_Injected(UnityEngine.Playables.PlayableHandle&,System.Double)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
// System.Double UnityEngine.Playables.PlayableHandle::GetTime_Injected(UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double PlayableHandle_GetTime_Injected_m1D4833ED2DB4BD71082BDD577AEAF293028EB654 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0__unity_self, const RuntimeMethod* method) 
{
	typedef double (*PlayableHandle_GetTime_Injected_m1D4833ED2DB4BD71082BDD577AEAF293028EB654_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*);
	static PlayableHandle_GetTime_Injected_m1D4833ED2DB4BD71082BDD577AEAF293028EB654_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayableHandle_GetTime_Injected_m1D4833ED2DB4BD71082BDD577AEAF293028EB654_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Playables.PlayableHandle::GetTime_Injected(UnityEngine.Playables.PlayableHandle&)");
	double icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// System.Void UnityEngine.Playables.PlayableHandle::SetTime_Injected(UnityEngine.Playables.PlayableHandle&,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetTime_Injected_m8449B7E24321BFA6894EAC1834E79C5A5DC45E77 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0__unity_self, double ___1_value, const RuntimeMethod* method) 
{
	typedef void (*PlayableHandle_SetTime_Injected_m8449B7E24321BFA6894EAC1834E79C5A5DC45E77_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, double);
	static PlayableHandle_SetTime_Injected_m8449B7E24321BFA6894EAC1834E79C5A5DC45E77_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayableHandle_SetTime_Injected_m8449B7E24321BFA6894EAC1834E79C5A5DC45E77_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Playables.PlayableHandle::SetTime_Injected(UnityEngine.Playables.PlayableHandle&,System.Double)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsDone_Injected(UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsDone_Injected_mF38535A24976C4976BA572A806A08AC7796CD85C (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0__unity_self, const RuntimeMethod* method) 
{
	typedef bool (*PlayableHandle_IsDone_Injected_mF38535A24976C4976BA572A806A08AC7796CD85C_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*);
	static PlayableHandle_IsDone_Injected_mF38535A24976C4976BA572A806A08AC7796CD85C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayableHandle_IsDone_Injected_mF38535A24976C4976BA572A806A08AC7796CD85C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Playables.PlayableHandle::IsDone_Injected(UnityEngine.Playables.PlayableHandle&)");
	bool icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// System.Void UnityEngine.Playables.PlayableHandle::SetDone_Injected(UnityEngine.Playables.PlayableHandle&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetDone_Injected_m2D0CC96C8CF9B9F6921C242FF1685A219E9AF740 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0__unity_self, bool ___1_value, const RuntimeMethod* method) 
{
	typedef void (*PlayableHandle_SetDone_Injected_m2D0CC96C8CF9B9F6921C242FF1685A219E9AF740_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, bool);
	static PlayableHandle_SetDone_Injected_m2D0CC96C8CF9B9F6921C242FF1685A219E9AF740_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayableHandle_SetDone_Injected_m2D0CC96C8CF9B9F6921C242FF1685A219E9AF740_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Playables.PlayableHandle::SetDone_Injected(UnityEngine.Playables.PlayableHandle&,System.Boolean)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
// System.Double UnityEngine.Playables.PlayableHandle::GetDuration_Injected(UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double PlayableHandle_GetDuration_Injected_mB0942C618219679840CE56270EEAE8A61D7183F3 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0__unity_self, const RuntimeMethod* method) 
{
	typedef double (*PlayableHandle_GetDuration_Injected_mB0942C618219679840CE56270EEAE8A61D7183F3_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*);
	static PlayableHandle_GetDuration_Injected_mB0942C618219679840CE56270EEAE8A61D7183F3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayableHandle_GetDuration_Injected_mB0942C618219679840CE56270EEAE8A61D7183F3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Playables.PlayableHandle::GetDuration_Injected(UnityEngine.Playables.PlayableHandle&)");
	double icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// System.Void UnityEngine.Playables.PlayableHandle::SetDuration_Injected(UnityEngine.Playables.PlayableHandle&,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetDuration_Injected_m427D8F5EC8D7A4AF48274B7A12E197667B1392B4 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0__unity_self, double ___1_value, const RuntimeMethod* method) 
{
	typedef void (*PlayableHandle_SetDuration_Injected_m427D8F5EC8D7A4AF48274B7A12E197667B1392B4_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, double);
	static PlayableHandle_SetDuration_Injected_m427D8F5EC8D7A4AF48274B7A12E197667B1392B4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayableHandle_SetDuration_Injected_m427D8F5EC8D7A4AF48274B7A12E197667B1392B4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Playables.PlayableHandle::SetDuration_Injected(UnityEngine.Playables.PlayableHandle&,System.Double)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
// System.Void UnityEngine.Playables.PlayableHandle::SetPropagateSetTime_Injected(UnityEngine.Playables.PlayableHandle&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetPropagateSetTime_Injected_mA7ADF0169F58568C4B880F7D0A32B5489D59A7DD (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0__unity_self, bool ___1_value, const RuntimeMethod* method) 
{
	typedef void (*PlayableHandle_SetPropagateSetTime_Injected_mA7ADF0169F58568C4B880F7D0A32B5489D59A7DD_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, bool);
	static PlayableHandle_SetPropagateSetTime_Injected_mA7ADF0169F58568C4B880F7D0A32B5489D59A7DD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayableHandle_SetPropagateSetTime_Injected_mA7ADF0169F58568C4B880F7D0A32B5489D59A7DD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Playables.PlayableHandle::SetPropagateSetTime_Injected(UnityEngine.Playables.PlayableHandle&,System.Boolean)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
// System.Void UnityEngine.Playables.PlayableHandle::GetGraph_Injected(UnityEngine.Playables.PlayableHandle&,UnityEngine.Playables.PlayableGraph&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_GetGraph_Injected_m07C513A9056C9A67230EFA8692EE76C6BD02DA3B (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0__unity_self, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___1_ret, const RuntimeMethod* method) 
{
	typedef void (*PlayableHandle_GetGraph_Injected_m07C513A9056C9A67230EFA8692EE76C6BD02DA3B_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E*);
	static PlayableHandle_GetGraph_Injected_m07C513A9056C9A67230EFA8692EE76C6BD02DA3B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayableHandle_GetGraph_Injected_m07C513A9056C9A67230EFA8692EE76C6BD02DA3B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Playables.PlayableHandle::GetGraph_Injected(UnityEngine.Playables.PlayableHandle&,UnityEngine.Playables.PlayableGraph&)");
	_il2cpp_icall_func(___0__unity_self, ___1_ret);
}
// System.Int32 UnityEngine.Playables.PlayableHandle::GetInputCount_Injected(UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableHandle_GetInputCount_Injected_m802EC16FCA791F8E54ED29F090D5D16A931FFA9C (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0__unity_self, const RuntimeMethod* method) 
{
	typedef int32_t (*PlayableHandle_GetInputCount_Injected_m802EC16FCA791F8E54ED29F090D5D16A931FFA9C_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*);
	static PlayableHandle_GetInputCount_Injected_m802EC16FCA791F8E54ED29F090D5D16A931FFA9C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayableHandle_GetInputCount_Injected_m802EC16FCA791F8E54ED29F090D5D16A931FFA9C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Playables.PlayableHandle::GetInputCount_Injected(UnityEngine.Playables.PlayableHandle&)");
	int32_t icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// System.Void UnityEngine.Playables.PlayableHandle::SetInputCount_Injected(UnityEngine.Playables.PlayableHandle&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetInputCount_Injected_mD0EF7227FFAE50E134562BA1EC1BF3C2D02BDF77 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0__unity_self, int32_t ___1_value, const RuntimeMethod* method) 
{
	typedef void (*PlayableHandle_SetInputCount_Injected_mD0EF7227FFAE50E134562BA1EC1BF3C2D02BDF77_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, int32_t);
	static PlayableHandle_SetInputCount_Injected_mD0EF7227FFAE50E134562BA1EC1BF3C2D02BDF77_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayableHandle_SetInputCount_Injected_mD0EF7227FFAE50E134562BA1EC1BF3C2D02BDF77_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Playables.PlayableHandle::SetInputCount_Injected(UnityEngine.Playables.PlayableHandle&,System.Int32)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
// System.Void UnityEngine.Playables.PlayableHandle::SetInputWeight_Injected(UnityEngine.Playables.PlayableHandle&,UnityEngine.Playables.PlayableHandle&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetInputWeight_Injected_mF5F691D651C7807A5C3426083FD0296EDA97ABDB (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0__unity_self, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___1_input, float ___2_weight, const RuntimeMethod* method) 
{
	typedef void (*PlayableHandle_SetInputWeight_Injected_mF5F691D651C7807A5C3426083FD0296EDA97ABDB_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, float);
	static PlayableHandle_SetInputWeight_Injected_mF5F691D651C7807A5C3426083FD0296EDA97ABDB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayableHandle_SetInputWeight_Injected_mF5F691D651C7807A5C3426083FD0296EDA97ABDB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Playables.PlayableHandle::SetInputWeight_Injected(UnityEngine.Playables.PlayableHandle&,UnityEngine.Playables.PlayableHandle&,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_input, ___2_weight);
}
// System.Double UnityEngine.Playables.PlayableHandle::GetPreviousTime_Injected(UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double PlayableHandle_GetPreviousTime_Injected_m3B00E2845E777DF6860D65CE352C21100AB2D958 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0__unity_self, const RuntimeMethod* method) 
{
	typedef double (*PlayableHandle_GetPreviousTime_Injected_m3B00E2845E777DF6860D65CE352C21100AB2D958_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*);
	static PlayableHandle_GetPreviousTime_Injected_m3B00E2845E777DF6860D65CE352C21100AB2D958_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayableHandle_GetPreviousTime_Injected_m3B00E2845E777DF6860D65CE352C21100AB2D958_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Playables.PlayableHandle::GetPreviousTime_Injected(UnityEngine.Playables.PlayableHandle&)");
	double icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// System.Void UnityEngine.Playables.PlayableHandle::SetTraversalMode_Injected(UnityEngine.Playables.PlayableHandle&,UnityEngine.Playables.PlayableTraversalMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetTraversalMode_Injected_mC412F9CD172B11A45E1F68441F1C9905C2D7B315 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0__unity_self, int32_t ___1_mode, const RuntimeMethod* method) 
{
	typedef void (*PlayableHandle_SetTraversalMode_Injected_mC412F9CD172B11A45E1F68441F1C9905C2D7B315_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, int32_t);
	static PlayableHandle_SetTraversalMode_Injected_mC412F9CD172B11A45E1F68441F1C9905C2D7B315_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayableHandle_SetTraversalMode_Injected_mC412F9CD172B11A45E1F68441F1C9905C2D7B315_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Playables.PlayableHandle::SetTraversalMode_Injected(UnityEngine.Playables.PlayableHandle&,UnityEngine.Playables.PlayableTraversalMode)");
	_il2cpp_icall_func(___0__unity_self, ___1_mode);
}
// UnityEngine.Playables.DirectorWrapMode UnityEngine.Playables.PlayableHandle::GetTimeWrapMode_Injected(UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableHandle_GetTimeWrapMode_Injected_m48C83527FF7BBD9B7F100ED2490E50A5BE327415 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0__unity_self, const RuntimeMethod* method) 
{
	typedef int32_t (*PlayableHandle_GetTimeWrapMode_Injected_m48C83527FF7BBD9B7F100ED2490E50A5BE327415_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*);
	static PlayableHandle_GetTimeWrapMode_Injected_m48C83527FF7BBD9B7F100ED2490E50A5BE327415_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayableHandle_GetTimeWrapMode_Injected_m48C83527FF7BBD9B7F100ED2490E50A5BE327415_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Playables.PlayableHandle::GetTimeWrapMode_Injected(UnityEngine.Playables.PlayableHandle&)");
	int32_t icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// System.Void UnityEngine.Playables.PlayableHandle::SetTimeWrapMode_Injected(UnityEngine.Playables.PlayableHandle&,UnityEngine.Playables.DirectorWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetTimeWrapMode_Injected_mADEF8F2E92C329006CC97E7B179AC8DEB945F84B (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0__unity_self, int32_t ___1_mode, const RuntimeMethod* method) 
{
	typedef void (*PlayableHandle_SetTimeWrapMode_Injected_mADEF8F2E92C329006CC97E7B179AC8DEB945F84B_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, int32_t);
	static PlayableHandle_SetTimeWrapMode_Injected_mADEF8F2E92C329006CC97E7B179AC8DEB945F84B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayableHandle_SetTimeWrapMode_Injected_mADEF8F2E92C329006CC97E7B179AC8DEB945F84B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Playables.PlayableHandle::SetTimeWrapMode_Injected(UnityEngine.Playables.PlayableHandle&,UnityEngine.Playables.DirectorWrapMode)");
	_il2cpp_icall_func(___0__unity_self, ___1_mode);
}
// System.Object UnityEngine.Playables.PlayableHandle::GetScriptInstance_Injected(UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayableHandle_GetScriptInstance_Injected_mEA519D092C0AEECAB6B22178D837CB0F6F9FCF21 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0__unity_self, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*PlayableHandle_GetScriptInstance_Injected_mEA519D092C0AEECAB6B22178D837CB0F6F9FCF21_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*);
	static PlayableHandle_GetScriptInstance_Injected_mEA519D092C0AEECAB6B22178D837CB0F6F9FCF21_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayableHandle_GetScriptInstance_Injected_mEA519D092C0AEECAB6B22178D837CB0F6F9FCF21_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Playables.PlayableHandle::GetScriptInstance_Injected(UnityEngine.Playables.PlayableHandle&)");
	RuntimeObject* icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// System.Void UnityEngine.Playables.PlayableHandle::GetInputHandle_Injected(UnityEngine.Playables.PlayableHandle&,System.Int32,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_GetInputHandle_Injected_mE1DBCCE1A34C8C3E8B8939A7232EB6B69976ADBF (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0__unity_self, int32_t ___1_index, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___2_ret, const RuntimeMethod* method) 
{
	typedef void (*PlayableHandle_GetInputHandle_Injected_mE1DBCCE1A34C8C3E8B8939A7232EB6B69976ADBF_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, int32_t, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*);
	static PlayableHandle_GetInputHandle_Injected_mE1DBCCE1A34C8C3E8B8939A7232EB6B69976ADBF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayableHandle_GetInputHandle_Injected_mE1DBCCE1A34C8C3E8B8939A7232EB6B69976ADBF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Playables.PlayableHandle::GetInputHandle_Injected(UnityEngine.Playables.PlayableHandle&,System.Int32,UnityEngine.Playables.PlayableHandle&)");
	_il2cpp_icall_func(___0__unity_self, ___1_index, ___2_ret);
}
// System.Void UnityEngine.Playables.PlayableHandle::SetInputWeightFromIndex_Injected(UnityEngine.Playables.PlayableHandle&,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetInputWeightFromIndex_Injected_m1B209DBD186EA35CA4B32A5DB2616F882250E7E9 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0__unity_self, int32_t ___1_index, float ___2_weight, const RuntimeMethod* method) 
{
	typedef void (*PlayableHandle_SetInputWeightFromIndex_Injected_m1B209DBD186EA35CA4B32A5DB2616F882250E7E9_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, int32_t, float);
	static PlayableHandle_SetInputWeightFromIndex_Injected_m1B209DBD186EA35CA4B32A5DB2616F882250E7E9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayableHandle_SetInputWeightFromIndex_Injected_m1B209DBD186EA35CA4B32A5DB2616F882250E7E9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Playables.PlayableHandle::SetInputWeightFromIndex_Injected(UnityEngine.Playables.PlayableHandle&,System.Int32,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_index, ___2_weight);
}
// System.Single UnityEngine.Playables.PlayableHandle::GetInputWeightFromIndex_Injected(UnityEngine.Playables.PlayableHandle&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayableHandle_GetInputWeightFromIndex_Injected_mBD7D1FBCD09D2AAE5F9D86D9F06A897DCD40493A (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0__unity_self, int32_t ___1_index, const RuntimeMethod* method) 
{
	typedef float (*PlayableHandle_GetInputWeightFromIndex_Injected_mBD7D1FBCD09D2AAE5F9D86D9F06A897DCD40493A_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, int32_t);
	static PlayableHandle_GetInputWeightFromIndex_Injected_mBD7D1FBCD09D2AAE5F9D86D9F06A897DCD40493A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayableHandle_GetInputWeightFromIndex_Injected_mBD7D1FBCD09D2AAE5F9D86D9F06A897DCD40493A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Playables.PlayableHandle::GetInputWeightFromIndex_Injected(UnityEngine.Playables.PlayableHandle&,System.Int32)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self, ___1_index);
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
// UnityEngine.Playables.PlayableOutput UnityEngine.Playables.PlayableOutput::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 PlayableOutput_get_Null_mF602832968A37CB4E1971E2DD8EB95D760332E6E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680_il2cpp_TypeInfo_var);
		PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 L_0 = ((PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680_StaticFields*)il2cpp_codegen_static_fields_for(PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680_il2cpp_TypeInfo_var))->___m_NullPlayableOutput_1;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Playables.PlayableOutput::.ctor(UnityEngine.Playables.PlayableOutputHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableOutput__ctor_m55FBB20EC479F67641835EA48D84A1AB3DF39747 (PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680* __this, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___0_handle, const RuntimeMethod* method) 
{
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0 = ___0_handle;
		__this->___m_Handle_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void PlayableOutput__ctor_m55FBB20EC479F67641835EA48D84A1AB3DF39747_AdjustorThunk (RuntimeObject* __this, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___0_handle, const RuntimeMethod* method)
{
	PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680*>(__this + _offset);
	PlayableOutput__ctor_m55FBB20EC479F67641835EA48D84A1AB3DF39747(_thisAdjusted, ___0_handle, method);
}
// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutput::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 PlayableOutput_GetHandle_m12FF2889D15884CBEB92A6CB376827EBA5A607BF (PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680* __this, const RuntimeMethod* method) 
{
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 PlayableOutput_GetHandle_m12FF2889D15884CBEB92A6CB376827EBA5A607BF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680*>(__this + _offset);
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 _returnValue;
	_returnValue = PlayableOutput_GetHandle_m12FF2889D15884CBEB92A6CB376827EBA5A607BF(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableOutput::Equals(UnityEngine.Playables.PlayableOutput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutput_Equals_m4CC730818751114DC5643600B5FE20243F4B7121 (PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680* __this, PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0;
		L_0 = PlayableOutput_GetHandle_m12FF2889D15884CBEB92A6CB376827EBA5A607BF(__this, NULL);
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_1;
		L_1 = PlayableOutput_GetHandle_m12FF2889D15884CBEB92A6CB376827EBA5A607BF((&___0_other), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableOutputHandle_op_Equality_m116A314100562913DD28474B8D7DA5FBFCA9CD3C(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableOutput_Equals_m4CC730818751114DC5643600B5FE20243F4B7121_AdjustorThunk (RuntimeObject* __this, PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 ___0_other, const RuntimeMethod* method)
{
	PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableOutput_Equals_m4CC730818751114DC5643600B5FE20243F4B7121(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Void UnityEngine.Playables.PlayableOutput::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableOutput__cctor_m02CBFEB6C9DB324655B9D354B32C268EED13749A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0;
		L_0 = PlayableOutputHandle_get_Null_m656E8D2549FA031DA8A2EA5B39CE3B33D75B69F8(NULL);
		PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 L_1;
		memset((&L_1), 0, sizeof(L_1));
		PlayableOutput__ctor_m55FBB20EC479F67641835EA48D84A1AB3DF39747((&L_1), L_0, /*hidden argument*/NULL);
		((PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680_StaticFields*)il2cpp_codegen_static_fields_for(PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680_il2cpp_TypeInfo_var))->___m_NullPlayableOutput_1 = L_1;
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
// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutputHandle::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 PlayableOutputHandle_get_Null_m656E8D2549FA031DA8A2EA5B39CE3B33D75B69F8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0 = ((PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_StaticFields*)il2cpp_codegen_static_fields_for(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var))->___m_Null_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.Playables.PlayableOutputHandle::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableOutputHandle_GetHashCode_mC2FAF756D71026E3AF4492157EDAE7186429B079 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Handle_0);
		int32_t L_1;
		L_1 = IntPtr_GetHashCode_m669B16AD7483C1C396E48F41D9CAC4B719E38F3D(L_0, NULL);
		uint32_t* L_2 = (uint32_t*)(&__this->___m_Version_1);
		int32_t L_3;
		L_3 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC(L_2, NULL);
		V_0 = ((int32_t)(L_1^L_3));
		goto IL_001b;
	}

IL_001b:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t PlayableOutputHandle_GetHashCode_mC2FAF756D71026E3AF4492157EDAE7186429B079_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = PlayableOutputHandle_GetHashCode_mC2FAF756D71026E3AF4492157EDAE7186429B079(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::op_Equality(UnityEngine.Playables.PlayableOutputHandle,UnityEngine.Playables.PlayableOutputHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_op_Equality_m116A314100562913DD28474B8D7DA5FBFCA9CD3C (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___0_lhs, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___1_rhs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0 = ___0_lhs;
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_1 = ___1_rhs;
		il2cpp_codegen_runtime_class_init_inline(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableOutputHandle_CompareVersion_mAB102578900E20BB3B4273F94D1A6AFDB6E20FFD(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_Equals_mB9106CB9333E0BF4C893E43AD7A23B64471CC21A (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, RuntimeObject* ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		RuntimeObject* L_0 = ___0_p;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = ___0_p;
		bool L_2;
		L_2 = PlayableOutputHandle_Equals_mF5C23882B2A007186F00EB3D23E9BD6664E8DAE6(__this, ((*(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*)((PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*)(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*)UnBox(L_1, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var)))), NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
	}

IL_0018:
	{
		V_0 = (bool)G_B3_0;
		goto IL_001b;
	}

IL_001b:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableOutputHandle_Equals_mB9106CB9333E0BF4C893E43AD7A23B64471CC21A_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_p, const RuntimeMethod* method)
{
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableOutputHandle_Equals_mB9106CB9333E0BF4C893E43AD7A23B64471CC21A(_thisAdjusted, ___0_p, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::Equals(UnityEngine.Playables.PlayableOutputHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_Equals_mF5C23882B2A007186F00EB3D23E9BD6664E8DAE6 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0 = (*(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*)__this);
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_1 = ___0_other;
		il2cpp_codegen_runtime_class_init_inline(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableOutputHandle_CompareVersion_mAB102578900E20BB3B4273F94D1A6AFDB6E20FFD(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableOutputHandle_Equals_mF5C23882B2A007186F00EB3D23E9BD6664E8DAE6_AdjustorThunk (RuntimeObject* __this, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___0_other, const RuntimeMethod* method)
{
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableOutputHandle_Equals_mF5C23882B2A007186F00EB3D23E9BD6664E8DAE6(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::CompareVersion(UnityEngine.Playables.PlayableOutputHandle,UnityEngine.Playables.PlayableOutputHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_CompareVersion_mAB102578900E20BB3B4273F94D1A6AFDB6E20FFD (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___0_lhs, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___1_rhs, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0 = ___0_lhs;
		intptr_t L_1 = L_0.___m_Handle_0;
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_2 = ___1_rhs;
		intptr_t L_3 = L_2.___m_Handle_0;
		bool L_4;
		L_4 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_5 = ___0_lhs;
		uint32_t L_6 = L_5.___m_Version_1;
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_7 = ___1_rhs;
		uint32_t L_8 = L_7.___m_Version_1;
		G_B3_0 = ((((int32_t)L_6) == ((int32_t)L_8))? 1 : 0);
		goto IL_0025;
	}

IL_0024:
	{
		G_B3_0 = 0;
	}

IL_0025:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0028;
	}

IL_0028:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_IsValid_mA94C343D72B72C3B1C7636C93A8DB5EA71691312 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = PlayableOutputHandle_IsValid_Injected_m212EF9786C2C73A1147E5D4CD087DAB16092C35A(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool PlayableOutputHandle_IsValid_mA94C343D72B72C3B1C7636C93A8DB5EA71691312_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableOutputHandle_IsValid_mA94C343D72B72C3B1C7636C93A8DB5EA71691312(_thisAdjusted, method);
	return _returnValue;
}
// System.Type UnityEngine.Playables.PlayableOutputHandle::GetPlayableOutputType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* PlayableOutputHandle_GetPlayableOutputType_m5FA19BC37FD64EC6C2174B6DA6CB202F5451C108 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		Type_t* L_0;
		L_0 = PlayableOutputHandle_GetPlayableOutputType_Injected_m207177D14DFF7F2CAA293A22F57DBCF69C07106A(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t* PlayableOutputHandle_GetPlayableOutputType_m5FA19BC37FD64EC6C2174B6DA6CB202F5451C108_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*>(__this + _offset);
	Type_t* _returnValue;
	_returnValue = PlayableOutputHandle_GetPlayableOutputType_m5FA19BC37FD64EC6C2174B6DA6CB202F5451C108(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Playables.PlayableOutputHandle::SetReferenceObject(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableOutputHandle_SetReferenceObject_m898B8810539BBD3B4B4382CD436FE84EC60AF77F (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = ___0_target;
		il2cpp_codegen_runtime_class_init_inline(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		PlayableOutputHandle_SetReferenceObject_Injected_m13864271BC7D984E3194F1A7FBE6613FC325B9B4(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void PlayableOutputHandle_SetReferenceObject_m898B8810539BBD3B4B4382CD436FE84EC60AF77F_AdjustorThunk (RuntimeObject* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method)
{
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*>(__this + _offset);
	PlayableOutputHandle_SetReferenceObject_m898B8810539BBD3B4B4382CD436FE84EC60AF77F(_thisAdjusted, ___0_target, method);
}
// System.Void UnityEngine.Playables.PlayableOutputHandle::SetUserData(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableOutputHandle_SetUserData_m23E8BB63D93E67DD981C9045D610C6B2289F435B (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = ___0_target;
		il2cpp_codegen_runtime_class_init_inline(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		PlayableOutputHandle_SetUserData_Injected_m0C738940D2F7F2AD282D14249DE7AC3C439015BB(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void PlayableOutputHandle_SetUserData_m23E8BB63D93E67DD981C9045D610C6B2289F435B_AdjustorThunk (RuntimeObject* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method)
{
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*>(__this + _offset);
	PlayableOutputHandle_SetUserData_m23E8BB63D93E67DD981C9045D610C6B2289F435B(_thisAdjusted, ___0_target, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableOutputHandle::GetSourcePlayable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 PlayableOutputHandle_GetSourcePlayable_m6D142AAB19E92AAD5D7C4F96087F27B0F8185627 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		PlayableOutputHandle_GetSourcePlayable_Injected_m348438D1C77465405BAEE6258DEE4E2ABF896297(__this, (&V_0), NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = V_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 PlayableOutputHandle_GetSourcePlayable_m6D142AAB19E92AAD5D7C4F96087F27B0F8185627_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = PlayableOutputHandle_GetSourcePlayable_m6D142AAB19E92AAD5D7C4F96087F27B0F8185627(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Playables.PlayableOutputHandle::SetSourcePlayable(UnityEngine.Playables.PlayableHandle,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableOutputHandle_SetSourcePlayable_mBC96BBEB1838444B937337B985FFD9A6084A6A8D (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_target, int32_t ___1_port, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___1_port;
		il2cpp_codegen_runtime_class_init_inline(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		PlayableOutputHandle_SetSourcePlayable_Injected_mEF960B22FFBF6C40F1E325EAD178AF7FE1E7754A(__this, (&___0_target), L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void PlayableOutputHandle_SetSourcePlayable_mBC96BBEB1838444B937337B985FFD9A6084A6A8D_AdjustorThunk (RuntimeObject* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_target, int32_t ___1_port, const RuntimeMethod* method)
{
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*>(__this + _offset);
	PlayableOutputHandle_SetSourcePlayable_mBC96BBEB1838444B937337B985FFD9A6084A6A8D(_thisAdjusted, ___0_target, ___1_port, method);
}
// System.Int32 UnityEngine.Playables.PlayableOutputHandle::GetSourceOutputPort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableOutputHandle_GetSourceOutputPort_m9E9AA2A0E62DFBA3570DC262AFECD08FF0E71D1F (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = PlayableOutputHandle_GetSourceOutputPort_Injected_m2B5CBD4B03237A502578DA147BFC96A59D32ACF0(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t PlayableOutputHandle_GetSourceOutputPort_m9E9AA2A0E62DFBA3570DC262AFECD08FF0E71D1F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = PlayableOutputHandle_GetSourceOutputPort_m9E9AA2A0E62DFBA3570DC262AFECD08FF0E71D1F(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Playables.PlayableOutputHandle::SetWeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableOutputHandle_SetWeight_m6A8B44B22EFA5628A90A87085FD86D478913093F (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, float ___0_weight, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___0_weight;
		il2cpp_codegen_runtime_class_init_inline(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		PlayableOutputHandle_SetWeight_Injected_m3B1326E82C9C8B4F8BDB063C1ECB1FD55AFC08AA(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void PlayableOutputHandle_SetWeight_m6A8B44B22EFA5628A90A87085FD86D478913093F_AdjustorThunk (RuntimeObject* __this, float ___0_weight, const RuntimeMethod* method)
{
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*>(__this + _offset);
	PlayableOutputHandle_SetWeight_m6A8B44B22EFA5628A90A87085FD86D478913093F(_thisAdjusted, ___0_weight, method);
}
// System.Void UnityEngine.Playables.PlayableOutputHandle::PushNotification(UnityEngine.Playables.PlayableHandle,UnityEngine.Playables.INotification,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableOutputHandle_PushNotification_m97131909E6A9A76742074B4023CA6C94A2A95610 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_origin, RuntimeObject* ___1_notification, RuntimeObject* ___2_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___1_notification;
		RuntimeObject* L_1 = ___2_context;
		il2cpp_codegen_runtime_class_init_inline(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		PlayableOutputHandle_PushNotification_Injected_mE72024374037D33096E5C815D513B51819D2809C(__this, (&___0_origin), L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void PlayableOutputHandle_PushNotification_m97131909E6A9A76742074B4023CA6C94A2A95610_AdjustorThunk (RuntimeObject* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_origin, RuntimeObject* ___1_notification, RuntimeObject* ___2_context, const RuntimeMethod* method)
{
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*>(__this + _offset);
	PlayableOutputHandle_PushNotification_m97131909E6A9A76742074B4023CA6C94A2A95610(_thisAdjusted, ___0_origin, ___1_notification, ___2_context, method);
}
// System.Void UnityEngine.Playables.PlayableOutputHandle::AddNotificationReceiver(UnityEngine.Playables.INotificationReceiver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableOutputHandle_AddNotificationReceiver_m2E93B0DB0A7A98AECFDAEB02D610B45617FC357C (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, RuntimeObject* ___0_receiver, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_receiver;
		il2cpp_codegen_runtime_class_init_inline(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		PlayableOutputHandle_AddNotificationReceiver_Injected_m2963627A22A1E4C118F0DEB876A460A16C1497BC(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void PlayableOutputHandle_AddNotificationReceiver_m2E93B0DB0A7A98AECFDAEB02D610B45617FC357C_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_receiver, const RuntimeMethod* method)
{
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*>(__this + _offset);
	PlayableOutputHandle_AddNotificationReceiver_m2E93B0DB0A7A98AECFDAEB02D610B45617FC357C(_thisAdjusted, ___0_receiver, method);
}
// System.Void UnityEngine.Playables.PlayableOutputHandle::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableOutputHandle__cctor_mBA610D820061BDA36802735EEC57A83B0985CFC2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_initobj((&((PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_StaticFields*)il2cpp_codegen_static_fields_for(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var))->___m_Null_2), sizeof(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883));
		return;
	}
}
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::IsValid_Injected(UnityEngine.Playables.PlayableOutputHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_IsValid_Injected_m212EF9786C2C73A1147E5D4CD087DAB16092C35A (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___0__unity_self, const RuntimeMethod* method) 
{
	typedef bool (*PlayableOutputHandle_IsValid_Injected_m212EF9786C2C73A1147E5D4CD087DAB16092C35A_ftn) (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*);
	static PlayableOutputHandle_IsValid_Injected_m212EF9786C2C73A1147E5D4CD087DAB16092C35A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayableOutputHandle_IsValid_Injected_m212EF9786C2C73A1147E5D4CD087DAB16092C35A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Playables.PlayableOutputHandle::IsValid_Injected(UnityEngine.Playables.PlayableOutputHandle&)");
	bool icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// System.Type UnityEngine.Playables.PlayableOutputHandle::GetPlayableOutputType_Injected(UnityEngine.Playables.PlayableOutputHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* PlayableOutputHandle_GetPlayableOutputType_Injected_m207177D14DFF7F2CAA293A22F57DBCF69C07106A (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___0__unity_self, const RuntimeMethod* method) 
{
	typedef Type_t* (*PlayableOutputHandle_GetPlayableOutputType_Injected_m207177D14DFF7F2CAA293A22F57DBCF69C07106A_ftn) (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*);
	static PlayableOutputHandle_GetPlayableOutputType_Injected_m207177D14DFF7F2CAA293A22F57DBCF69C07106A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayableOutputHandle_GetPlayableOutputType_Injected_m207177D14DFF7F2CAA293A22F57DBCF69C07106A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Playables.PlayableOutputHandle::GetPlayableOutputType_Injected(UnityEngine.Playables.PlayableOutputHandle&)");
	Type_t* icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// System.Void UnityEngine.Playables.PlayableOutputHandle::SetReferenceObject_Injected(UnityEngine.Playables.PlayableOutputHandle&,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableOutputHandle_SetReferenceObject_Injected_m13864271BC7D984E3194F1A7FBE6613FC325B9B4 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___0__unity_self, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_target, const RuntimeMethod* method) 
{
	typedef void (*PlayableOutputHandle_SetReferenceObject_Injected_m13864271BC7D984E3194F1A7FBE6613FC325B9B4_ftn) (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*);
	static PlayableOutputHandle_SetReferenceObject_Injected_m13864271BC7D984E3194F1A7FBE6613FC325B9B4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayableOutputHandle_SetReferenceObject_Injected_m13864271BC7D984E3194F1A7FBE6613FC325B9B4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Playables.PlayableOutputHandle::SetReferenceObject_Injected(UnityEngine.Playables.PlayableOutputHandle&,UnityEngine.Object)");
	_il2cpp_icall_func(___0__unity_self, ___1_target);
}
// System.Void UnityEngine.Playables.PlayableOutputHandle::SetUserData_Injected(UnityEngine.Playables.PlayableOutputHandle&,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableOutputHandle_SetUserData_Injected_m0C738940D2F7F2AD282D14249DE7AC3C439015BB (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___0__unity_self, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_target, const RuntimeMethod* method) 
{
	typedef void (*PlayableOutputHandle_SetUserData_Injected_m0C738940D2F7F2AD282D14249DE7AC3C439015BB_ftn) (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*);
	static PlayableOutputHandle_SetUserData_Injected_m0C738940D2F7F2AD282D14249DE7AC3C439015BB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayableOutputHandle_SetUserData_Injected_m0C738940D2F7F2AD282D14249DE7AC3C439015BB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Playables.PlayableOutputHandle::SetUserData_Injected(UnityEngine.Playables.PlayableOutputHandle&,UnityEngine.Object)");
	_il2cpp_icall_func(___0__unity_self, ___1_target);
}
// System.Void UnityEngine.Playables.PlayableOutputHandle::GetSourcePlayable_Injected(UnityEngine.Playables.PlayableOutputHandle&,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableOutputHandle_GetSourcePlayable_Injected_m348438D1C77465405BAEE6258DEE4E2ABF896297 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___0__unity_self, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___1_ret, const RuntimeMethod* method) 
{
	typedef void (*PlayableOutputHandle_GetSourcePlayable_Injected_m348438D1C77465405BAEE6258DEE4E2ABF896297_ftn) (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*);
	static PlayableOutputHandle_GetSourcePlayable_Injected_m348438D1C77465405BAEE6258DEE4E2ABF896297_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayableOutputHandle_GetSourcePlayable_Injected_m348438D1C77465405BAEE6258DEE4E2ABF896297_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Playables.PlayableOutputHandle::GetSourcePlayable_Injected(UnityEngine.Playables.PlayableOutputHandle&,UnityEngine.Playables.PlayableHandle&)");
	_il2cpp_icall_func(___0__unity_self, ___1_ret);
}
// System.Void UnityEngine.Playables.PlayableOutputHandle::SetSourcePlayable_Injected(UnityEngine.Playables.PlayableOutputHandle&,UnityEngine.Playables.PlayableHandle&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableOutputHandle_SetSourcePlayable_Injected_mEF960B22FFBF6C40F1E325EAD178AF7FE1E7754A (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___0__unity_self, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___1_target, int32_t ___2_port, const RuntimeMethod* method) 
{
	typedef void (*PlayableOutputHandle_SetSourcePlayable_Injected_mEF960B22FFBF6C40F1E325EAD178AF7FE1E7754A_ftn) (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, int32_t);
	static PlayableOutputHandle_SetSourcePlayable_Injected_mEF960B22FFBF6C40F1E325EAD178AF7FE1E7754A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayableOutputHandle_SetSourcePlayable_Injected_mEF960B22FFBF6C40F1E325EAD178AF7FE1E7754A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Playables.PlayableOutputHandle::SetSourcePlayable_Injected(UnityEngine.Playables.PlayableOutputHandle&,UnityEngine.Playables.PlayableHandle&,System.Int32)");
	_il2cpp_icall_func(___0__unity_self, ___1_target, ___2_port);
}
// System.Int32 UnityEngine.Playables.PlayableOutputHandle::GetSourceOutputPort_Injected(UnityEngine.Playables.PlayableOutputHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableOutputHandle_GetSourceOutputPort_Injected_m2B5CBD4B03237A502578DA147BFC96A59D32ACF0 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___0__unity_self, const RuntimeMethod* method) 
{
	typedef int32_t (*PlayableOutputHandle_GetSourceOutputPort_Injected_m2B5CBD4B03237A502578DA147BFC96A59D32ACF0_ftn) (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*);
	static PlayableOutputHandle_GetSourceOutputPort_Injected_m2B5CBD4B03237A502578DA147BFC96A59D32ACF0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayableOutputHandle_GetSourceOutputPort_Injected_m2B5CBD4B03237A502578DA147BFC96A59D32ACF0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Playables.PlayableOutputHandle::GetSourceOutputPort_Injected(UnityEngine.Playables.PlayableOutputHandle&)");
	int32_t icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// System.Void UnityEngine.Playables.PlayableOutputHandle::SetWeight_Injected(UnityEngine.Playables.PlayableOutputHandle&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableOutputHandle_SetWeight_Injected_m3B1326E82C9C8B4F8BDB063C1ECB1FD55AFC08AA (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___0__unity_self, float ___1_weight, const RuntimeMethod* method) 
{
	typedef void (*PlayableOutputHandle_SetWeight_Injected_m3B1326E82C9C8B4F8BDB063C1ECB1FD55AFC08AA_ftn) (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*, float);
	static PlayableOutputHandle_SetWeight_Injected_m3B1326E82C9C8B4F8BDB063C1ECB1FD55AFC08AA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayableOutputHandle_SetWeight_Injected_m3B1326E82C9C8B4F8BDB063C1ECB1FD55AFC08AA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Playables.PlayableOutputHandle::SetWeight_Injected(UnityEngine.Playables.PlayableOutputHandle&,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_weight);
}
// System.Void UnityEngine.Playables.PlayableOutputHandle::PushNotification_Injected(UnityEngine.Playables.PlayableOutputHandle&,UnityEngine.Playables.PlayableHandle&,UnityEngine.Playables.INotification,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableOutputHandle_PushNotification_Injected_mE72024374037D33096E5C815D513B51819D2809C (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___0__unity_self, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___1_origin, RuntimeObject* ___2_notification, RuntimeObject* ___3_context, const RuntimeMethod* method) 
{
	typedef void (*PlayableOutputHandle_PushNotification_Injected_mE72024374037D33096E5C815D513B51819D2809C_ftn) (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, RuntimeObject*, RuntimeObject*);
	static PlayableOutputHandle_PushNotification_Injected_mE72024374037D33096E5C815D513B51819D2809C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayableOutputHandle_PushNotification_Injected_mE72024374037D33096E5C815D513B51819D2809C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Playables.PlayableOutputHandle::PushNotification_Injected(UnityEngine.Playables.PlayableOutputHandle&,UnityEngine.Playables.PlayableHandle&,UnityEngine.Playables.INotification,System.Object)");
	_il2cpp_icall_func(___0__unity_self, ___1_origin, ___2_notification, ___3_context);
}
// System.Void UnityEngine.Playables.PlayableOutputHandle::AddNotificationReceiver_Injected(UnityEngine.Playables.PlayableOutputHandle&,UnityEngine.Playables.INotificationReceiver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableOutputHandle_AddNotificationReceiver_Injected_m2963627A22A1E4C118F0DEB876A460A16C1497BC (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___0__unity_self, RuntimeObject* ___1_receiver, const RuntimeMethod* method) 
{
	typedef void (*PlayableOutputHandle_AddNotificationReceiver_Injected_m2963627A22A1E4C118F0DEB876A460A16C1497BC_ftn) (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*, RuntimeObject*);
	static PlayableOutputHandle_AddNotificationReceiver_Injected_m2963627A22A1E4C118F0DEB876A460A16C1497BC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayableOutputHandle_AddNotificationReceiver_Injected_m2963627A22A1E4C118F0DEB876A460A16C1497BC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Playables.PlayableOutputHandle::AddNotificationReceiver_Injected(UnityEngine.Playables.PlayableOutputHandle&,UnityEngine.Playables.INotificationReceiver)");
	_il2cpp_icall_func(___0__unity_self, ___1_receiver);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Playables.PlayableBinding UnityEngine.Playables.ScriptPlayableBinding::Create(System.String,UnityEngine.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 ScriptPlayableBinding_Create_m63417E63F4A3DD0070451203084BA9B54EB5AD98 (String_t* ___0_name, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_key, Type_t* ___2_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptPlayableBinding_CreateScriptOutput_m10A702F636DE80EE7452267EECB90E23A20DCD5A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = ___0_name;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_1 = ___1_key;
		Type_t* L_2 = ___2_type;
		CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* L_3 = (CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509*)il2cpp_codegen_object_new(CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		CreateOutputMethod__ctor_m5A339017CD8ECB0140EB936FD2A5B589B20166B4(L_3, NULL, (intptr_t)((void*)ScriptPlayableBinding_CreateScriptOutput_m10A702F636DE80EE7452267EECB90E23A20DCD5A_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_il2cpp_TypeInfo_var);
		PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 L_4;
		L_4 = PlayableBinding_CreateInternal_m63C8C98E659B52725E0373019ECFCEC22167A47A(L_0, L_1, L_2, L_3, NULL);
		V_0 = L_4;
		goto IL_0018;
	}

IL_0018:
	{
		PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 L_5 = V_0;
		return L_5;
	}
}
// UnityEngine.Playables.PlayableOutput UnityEngine.Playables.ScriptPlayableBinding::CreateScriptOutput(UnityEngine.Playables.PlayableGraph,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 ScriptPlayableBinding_CreateScriptOutput_m10A702F636DE80EE7452267EECB90E23A20DCD5A (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___0_graph, String_t* ___1_name, const RuntimeMethod* method) 
{
	PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E L_0 = ___0_graph;
		String_t* L_1 = ___1_name;
		ScriptPlayableOutput_t70DA4CCE83BAE5C0EE7D3BC19E3216DC8B6DCB1F L_2;
		L_2 = ScriptPlayableOutput_Create_m458B29D78C5B8AD04B7F4A1D59319C46FED9C01A(L_0, L_1, NULL);
		PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 L_3;
		L_3 = ScriptPlayableOutput_op_Implicit_m5F36380C097556574DD030DB93C7D9927CEB03A5(L_2, NULL);
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 L_4 = V_0;
		return L_4;
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
// UnityEngine.Playables.ScriptPlayableOutput UnityEngine.Playables.ScriptPlayableOutput::Create(UnityEngine.Playables.PlayableGraph,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptPlayableOutput_t70DA4CCE83BAE5C0EE7D3BC19E3216DC8B6DCB1F ScriptPlayableOutput_Create_m458B29D78C5B8AD04B7F4A1D59319C46FED9C01A (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___0_graph, String_t* ___1_name, const RuntimeMethod* method) 
{
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	ScriptPlayableOutput_t70DA4CCE83BAE5C0EE7D3BC19E3216DC8B6DCB1F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		String_t* L_0 = ___1_name;
		bool L_1;
		L_1 = PlayableGraph_CreateScriptOutputInternal_m7B8A726419E5A7E5C07436BC168CE28B2D970393((&___0_graph), L_0, (&V_0), NULL);
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		ScriptPlayableOutput_t70DA4CCE83BAE5C0EE7D3BC19E3216DC8B6DCB1F L_3;
		L_3 = ScriptPlayableOutput_get_Null_mEBA48EE25E0B02135A062DE97F5DA7017DB05E98(NULL);
		V_2 = L_3;
		goto IL_0023;
	}

IL_001a:
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_4 = V_0;
		ScriptPlayableOutput_t70DA4CCE83BAE5C0EE7D3BC19E3216DC8B6DCB1F L_5;
		memset((&L_5), 0, sizeof(L_5));
		ScriptPlayableOutput__ctor_m867BA54A9DCDFCA187EA927F75A6903D0F8FF2C4((&L_5), L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		goto IL_0023;
	}

IL_0023:
	{
		ScriptPlayableOutput_t70DA4CCE83BAE5C0EE7D3BC19E3216DC8B6DCB1F L_6 = V_2;
		return L_6;
	}
}
// System.Void UnityEngine.Playables.ScriptPlayableOutput::.ctor(UnityEngine.Playables.PlayableOutputHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptPlayableOutput__ctor_m867BA54A9DCDFCA187EA927F75A6903D0F8FF2C4 (ScriptPlayableOutput_t70DA4CCE83BAE5C0EE7D3BC19E3216DC8B6DCB1F* __this, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___0_handle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutputHandle_IsPlayableOutputOfType_TisScriptPlayableOutput_t70DA4CCE83BAE5C0EE7D3BC19E3216DC8B6DCB1F_mD58D2B238CA80FB346C3D2F58C36173C475F477B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = PlayableOutputHandle_IsValid_mA94C343D72B72C3B1C7636C93A8DB5EA71691312((&___0_handle), NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2;
		L_2 = PlayableOutputHandle_IsPlayableOutputOfType_TisScriptPlayableOutput_t70DA4CCE83BAE5C0EE7D3BC19E3216DC8B6DCB1F_mD58D2B238CA80FB346C3D2F58C36173C475F477B((&___0_handle), PlayableOutputHandle_IsPlayableOutputOfType_TisScriptPlayableOutput_t70DA4CCE83BAE5C0EE7D3BC19E3216DC8B6DCB1F_mD58D2B238CA80FB346C3D2F58C36173C475F477B_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_4 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8AD7FBC702E767C92DE68E9B5D81D24ED183C29)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ScriptPlayableOutput__ctor_m867BA54A9DCDFCA187EA927F75A6903D0F8FF2C4_RuntimeMethod_var)));
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_5 = ___0_handle;
		__this->___m_Handle_0 = L_5;
		return;
	}
}
IL2CPP_EXTERN_C  void ScriptPlayableOutput__ctor_m867BA54A9DCDFCA187EA927F75A6903D0F8FF2C4_AdjustorThunk (RuntimeObject* __this, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___0_handle, const RuntimeMethod* method)
{
	ScriptPlayableOutput_t70DA4CCE83BAE5C0EE7D3BC19E3216DC8B6DCB1F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScriptPlayableOutput_t70DA4CCE83BAE5C0EE7D3BC19E3216DC8B6DCB1F*>(__this + _offset);
	ScriptPlayableOutput__ctor_m867BA54A9DCDFCA187EA927F75A6903D0F8FF2C4(_thisAdjusted, ___0_handle, method);
}
// UnityEngine.Playables.ScriptPlayableOutput UnityEngine.Playables.ScriptPlayableOutput::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptPlayableOutput_t70DA4CCE83BAE5C0EE7D3BC19E3216DC8B6DCB1F ScriptPlayableOutput_get_Null_mEBA48EE25E0B02135A062DE97F5DA7017DB05E98 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ScriptPlayableOutput_t70DA4CCE83BAE5C0EE7D3BC19E3216DC8B6DCB1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0;
		L_0 = PlayableOutputHandle_get_Null_m656E8D2549FA031DA8A2EA5B39CE3B33D75B69F8(NULL);
		ScriptPlayableOutput_t70DA4CCE83BAE5C0EE7D3BC19E3216DC8B6DCB1F L_1;
		memset((&L_1), 0, sizeof(L_1));
		ScriptPlayableOutput__ctor_m867BA54A9DCDFCA187EA927F75A6903D0F8FF2C4((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		ScriptPlayableOutput_t70DA4CCE83BAE5C0EE7D3BC19E3216DC8B6DCB1F L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.ScriptPlayableOutput::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ScriptPlayableOutput_GetHandle_m21A3E97125928298D6942D0EDE58ADAD018E4E93 (ScriptPlayableOutput_t70DA4CCE83BAE5C0EE7D3BC19E3216DC8B6DCB1F* __this, const RuntimeMethod* method) 
{
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ScriptPlayableOutput_GetHandle_m21A3E97125928298D6942D0EDE58ADAD018E4E93_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ScriptPlayableOutput_t70DA4CCE83BAE5C0EE7D3BC19E3216DC8B6DCB1F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScriptPlayableOutput_t70DA4CCE83BAE5C0EE7D3BC19E3216DC8B6DCB1F*>(__this + _offset);
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 _returnValue;
	_returnValue = ScriptPlayableOutput_GetHandle_m21A3E97125928298D6942D0EDE58ADAD018E4E93(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Playables.PlayableOutput UnityEngine.Playables.ScriptPlayableOutput::op_Implicit(UnityEngine.Playables.ScriptPlayableOutput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 ScriptPlayableOutput_op_Implicit_m5F36380C097556574DD030DB93C7D9927CEB03A5 (ScriptPlayableOutput_t70DA4CCE83BAE5C0EE7D3BC19E3216DC8B6DCB1F ___0_output, const RuntimeMethod* method) 
{
	PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0;
		L_0 = ScriptPlayableOutput_GetHandle_m21A3E97125928298D6942D0EDE58ADAD018E4E93((&___0_output), NULL);
		PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 L_1;
		memset((&L_1), 0, sizeof(L_1));
		PlayableOutput__ctor_m55FBB20EC479F67641835EA48D84A1AB3DF39747((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 L_2 = V_0;
		return L_2;
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
// Conversion methods for marshalling of: UnityEngine.Experimental.U2D.SpriteRendererGroup
IL2CPP_EXTERN_C void SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshal_pinvoke(const SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C& unmarshaled, SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshal_pinvoke_back(const SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshaled_pinvoke& marshaled, SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.U2D.SpriteRendererGroup
IL2CPP_EXTERN_C void SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshal_pinvoke_cleanup(SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Experimental.U2D.SpriteRendererGroup
IL2CPP_EXTERN_C void SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshal_com(const SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C& unmarshaled, SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshaled_com& marshaled)
{
}
IL2CPP_EXTERN_C void SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshal_com_back(const SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshaled_com& marshaled, SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.U2D.SpriteRendererGroup
IL2CPP_EXTERN_C void SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshal_com_cleanup(SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::get_red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LinearColor_get_red_m376617B8E3156420835055189BB28D953FE46A2A (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_red_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float LinearColor_get_red_m376617B8E3156420835055189BB28D953FE46A2A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7*>(__this + _offset);
	float _returnValue;
	_returnValue = LinearColor_get_red_m376617B8E3156420835055189BB28D953FE46A2A(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LinearColor::set_red(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinearColor_set_red_m0ACFCEDDD205A6F235BE95936816E92898B01B52 (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		float L_0 = ___0_value;
		if ((((float)L_0) < ((float)(0.0f))))
		{
			goto IL_0013;
		}
	}
	{
		float L_1 = ___0_value;
		G_B3_0 = ((((float)L_1) > ((float)(1.0f)))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		String_t* L_3;
		L_3 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&___0_value), NULL);
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral05ED6AEC94875AE42F2118950FFBA1D613C05C37)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA1EF620F523327123017878A2862AB13B665F4E)), NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LinearColor_set_red_m0ACFCEDDD205A6F235BE95936816E92898B01B52_RuntimeMethod_var)));
	}

IL_0034:
	{
		float L_6 = ___0_value;
		__this->___m_red_0 = L_6;
		return;
	}
}
IL2CPP_EXTERN_C  void LinearColor_set_red_m0ACFCEDDD205A6F235BE95936816E92898B01B52_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7*>(__this + _offset);
	LinearColor_set_red_m0ACFCEDDD205A6F235BE95936816E92898B01B52(_thisAdjusted, ___0_value, method);
}
// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::get_green()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LinearColor_get_green_mCCE90A662234EE3605368F3AEC14E51572665AE5 (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_green_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float LinearColor_get_green_mCCE90A662234EE3605368F3AEC14E51572665AE5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7*>(__this + _offset);
	float _returnValue;
	_returnValue = LinearColor_get_green_mCCE90A662234EE3605368F3AEC14E51572665AE5(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LinearColor::set_green(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinearColor_set_green_mBD9C7EA6415DC54B3F6B643C3CD02B71565F0694 (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		float L_0 = ___0_value;
		if ((((float)L_0) < ((float)(0.0f))))
		{
			goto IL_0013;
		}
	}
	{
		float L_1 = ___0_value;
		G_B3_0 = ((((float)L_1) > ((float)(1.0f)))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		String_t* L_3;
		L_3 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&___0_value), NULL);
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral188E04405D8D43DAB34FCE46235E3F3B9E939794)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA1EF620F523327123017878A2862AB13B665F4E)), NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LinearColor_set_green_mBD9C7EA6415DC54B3F6B643C3CD02B71565F0694_RuntimeMethod_var)));
	}

IL_0034:
	{
		float L_6 = ___0_value;
		__this->___m_green_1 = L_6;
		return;
	}
}
IL2CPP_EXTERN_C  void LinearColor_set_green_mBD9C7EA6415DC54B3F6B643C3CD02B71565F0694_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7*>(__this + _offset);
	LinearColor_set_green_mBD9C7EA6415DC54B3F6B643C3CD02B71565F0694(_thisAdjusted, ___0_value, method);
}
// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::get_blue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LinearColor_get_blue_mAFAEA5D5590DD14CFC48BC18DF4BFEBBDCB0A99A (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_blue_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float LinearColor_get_blue_mAFAEA5D5590DD14CFC48BC18DF4BFEBBDCB0A99A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7*>(__this + _offset);
	float _returnValue;
	_returnValue = LinearColor_get_blue_mAFAEA5D5590DD14CFC48BC18DF4BFEBBDCB0A99A(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LinearColor::set_blue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinearColor_set_blue_m3FEEAF946772BB177733B67D9DA4B72D84874375 (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		float L_0 = ___0_value;
		if ((((float)L_0) < ((float)(0.0f))))
		{
			goto IL_0013;
		}
	}
	{
		float L_1 = ___0_value;
		G_B3_0 = ((((float)L_1) > ((float)(1.0f)))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		String_t* L_3;
		L_3 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&___0_value), NULL);
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral424B3C6544FA8C37056D18AD8DE5AD44F6874458)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA1EF620F523327123017878A2862AB13B665F4E)), NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LinearColor_set_blue_m3FEEAF946772BB177733B67D9DA4B72D84874375_RuntimeMethod_var)));
	}

IL_0034:
	{
		float L_6 = ___0_value;
		__this->___m_blue_2 = L_6;
		return;
	}
}
IL2CPP_EXTERN_C  void LinearColor_set_blue_m3FEEAF946772BB177733B67D9DA4B72D84874375_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7*>(__this + _offset);
	LinearColor_set_blue_m3FEEAF946772BB177733B67D9DA4B72D84874375(_thisAdjusted, ___0_value, method);
}
// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LinearColor::Convert(UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 LinearColor_Convert_m0E220E18AC54A8040BAD7FFEB0D81538639F9BBA (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, float ___1_intensity, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	bool V_6 = false;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	int32_t G_B7_0 = 0;
	{
		bool L_0;
		L_0 = GraphicsSettings_get_lightsUseLinearIntensity_m74D1A18837CB7E9D3A9BF20D44212F94DD1F67B9(NULL);
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		float L_1 = ___1_intensity;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = Color_RGBMultiplied_m4B3BAE4310EA98451D608E0300331012AFFF1B01_inline((&___0_color), L_1, NULL);
		V_4 = L_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_get_linear_m76EB88E15DA4E00D615DF33D1CEE51092683117C_inline((&V_4), NULL);
		G_B3_0 = L_3;
		goto IL_002c;
	}

IL_001b:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Color_get_linear_m76EB88E15DA4E00D615DF33D1CEE51092683117C_inline((&___0_color), NULL);
		V_4 = L_4;
		float L_5 = ___1_intensity;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Color_RGBMultiplied_m4B3BAE4310EA98451D608E0300331012AFFF1B01_inline((&V_4), L_5, NULL);
		G_B3_0 = L_6;
	}

IL_002c:
	{
		V_0 = G_B3_0;
		float L_7;
		L_7 = Color_get_maxColorComponent_m97D2940D48767ACC21D76F8CCEAD6898B722529C_inline((&V_0), NULL);
		V_1 = L_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = V_0;
		float L_9 = L_8.___r_0;
		if ((((float)L_9) < ((float)(0.0f))))
		{
			goto IL_005e;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = V_0;
		float L_11 = L_10.___g_1;
		if ((((float)L_11) < ((float)(0.0f))))
		{
			goto IL_005e;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = V_0;
		float L_13 = L_12.___b_2;
		G_B7_0 = ((((float)L_13) < ((float)(0.0f)))? 1 : 0);
		goto IL_005f;
	}

IL_005e:
	{
		G_B7_0 = 1;
	}

IL_005f:
	{
		V_5 = (bool)G_B7_0;
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_00c3;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var)), (uint32_t)7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral25231130FE0C70CC2141B3D6AF214C0E2CB6C4CC)));
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral25231130FE0C70CC2141B3D6AF214C0E2CB6C4CC)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_16;
		float* L_18 = (float*)(&(&V_0)->___r_0);
		String_t* L_19;
		L_19 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_18, NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_19);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_17;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDAC507E92A1A38ED15DB6692E1968942985D4237)));
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDAC507E92A1A38ED15DB6692E1968942985D4237)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_20;
		float* L_22 = (float*)(&(&V_0)->___g_1);
		String_t* L_23;
		L_23 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_22, NULL);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_23);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_23);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = L_21;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral008638F66804CEA9D15A6D4279FA7DA7FCC6B35D)));
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral008638F66804CEA9D15A6D4279FA7DA7FCC6B35D)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = L_24;
		float* L_26 = (float*)(&(&V_0)->___b_2);
		String_t* L_27;
		L_27 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_26, NULL);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_27);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_27);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = L_25;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466)));
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466)));
		String_t* L_29;
		L_29 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_28, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_30 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_30);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_30, L_29, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_30, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LinearColor_Convert_m0E220E18AC54A8040BAD7FFEB0D81538639F9BBA_RuntimeMethod_var)));
	}

IL_00c3:
	{
		float L_31 = V_1;
		V_6 = (bool)((((int32_t)((!(((float)L_31) <= ((float)(9.99999968E-21f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_32 = V_6;
		if (!L_32)
		{
			goto IL_00dd;
		}
	}
	{
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_33;
		L_33 = LinearColor_Black_mF5AEFA40487500C1683D14FFA58554BF4D7B1A42(NULL);
		V_7 = L_33;
		goto IL_0125;
	}

IL_00dd:
	{
		float L_34;
		L_34 = Color_get_maxColorComponent_m97D2940D48767ACC21D76F8CCEAD6898B722529C_inline((&V_0), NULL);
		V_2 = ((float)((1.0f)/L_34));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35 = V_0;
		float L_36 = L_35.___r_0;
		float L_37 = V_2;
		(&V_3)->___m_red_0 = ((float)il2cpp_codegen_multiply(L_36, L_37));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38 = V_0;
		float L_39 = L_38.___g_1;
		float L_40 = V_2;
		(&V_3)->___m_green_1 = ((float)il2cpp_codegen_multiply(L_39, L_40));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41 = V_0;
		float L_42 = L_41.___b_2;
		float L_43 = V_2;
		(&V_3)->___m_blue_2 = ((float)il2cpp_codegen_multiply(L_42, L_43));
		float L_44 = V_1;
		(&V_3)->___m_intensity_3 = L_44;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_45 = V_3;
		V_7 = L_45;
		goto IL_0125;
	}

IL_0125:
	{
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_46 = V_7;
		return L_46;
	}
}
// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LinearColor::Black()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 LinearColor_Black_mF5AEFA40487500C1683D14FFA58554BF4D7B1A42 (const RuntimeMethod* method) 
{
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		float L_0 = (0.0f);
		V_1 = L_0;
		(&V_0)->___m_intensity_3 = L_0;
		float L_1 = V_1;
		float L_2 = L_1;
		V_1 = L_2;
		(&V_0)->___m_blue_2 = L_2;
		float L_3 = V_1;
		float L_4 = L_3;
		V_1 = L_4;
		(&V_0)->___m_green_1 = L_4;
		float L_5 = V_1;
		(&V_0)->___m_red_0 = L_5;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_6 = V_0;
		V_2 = L_6;
		goto IL_002f;
	}

IL_002f:
	{
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_7 = V_2;
		return L_7;
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
// Conversion methods for marshalling of: UnityEngine.Experimental.GlobalIllumination.DirectionalLight
IL2CPP_EXTERN_C void DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshal_pinvoke(const DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB& unmarshaled, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshaled_pinvoke& marshaled)
{
	marshaled.___instanceID_0 = unmarshaled.___instanceID_0;
	marshaled.___shadow_1 = static_cast<int32_t>(unmarshaled.___shadow_1);
	marshaled.___mode_2 = unmarshaled.___mode_2;
	marshaled.___position_3 = unmarshaled.___position_3;
	marshaled.___orientation_4 = unmarshaled.___orientation_4;
	marshaled.___color_5 = unmarshaled.___color_5;
	marshaled.___indirectColor_6 = unmarshaled.___indirectColor_6;
	marshaled.___penumbraWidthRadian_7 = unmarshaled.___penumbraWidthRadian_7;
	marshaled.___direction_8 = unmarshaled.___direction_8;
}
IL2CPP_EXTERN_C void DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshal_pinvoke_back(const DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshaled_pinvoke& marshaled, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB& unmarshaled)
{
	int32_t unmarshaledinstanceID_temp_0 = 0;
	unmarshaledinstanceID_temp_0 = marshaled.___instanceID_0;
	unmarshaled.___instanceID_0 = unmarshaledinstanceID_temp_0;
	bool unmarshaledshadow_temp_1 = false;
	unmarshaledshadow_temp_1 = static_cast<bool>(marshaled.___shadow_1);
	unmarshaled.___shadow_1 = unmarshaledshadow_temp_1;
	uint8_t unmarshaledmode_temp_2 = 0;
	unmarshaledmode_temp_2 = marshaled.___mode_2;
	unmarshaled.___mode_2 = unmarshaledmode_temp_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_3;
	memset((&unmarshaledposition_temp_3), 0, sizeof(unmarshaledposition_temp_3));
	unmarshaledposition_temp_3 = marshaled.___position_3;
	unmarshaled.___position_3 = unmarshaledposition_temp_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledorientation_temp_4;
	memset((&unmarshaledorientation_temp_4), 0, sizeof(unmarshaledorientation_temp_4));
	unmarshaledorientation_temp_4 = marshaled.___orientation_4;
	unmarshaled.___orientation_4 = unmarshaledorientation_temp_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledcolor_temp_5;
	memset((&unmarshaledcolor_temp_5), 0, sizeof(unmarshaledcolor_temp_5));
	unmarshaledcolor_temp_5 = marshaled.___color_5;
	unmarshaled.___color_5 = unmarshaledcolor_temp_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledindirectColor_temp_6;
	memset((&unmarshaledindirectColor_temp_6), 0, sizeof(unmarshaledindirectColor_temp_6));
	unmarshaledindirectColor_temp_6 = marshaled.___indirectColor_6;
	unmarshaled.___indirectColor_6 = unmarshaledindirectColor_temp_6;
	float unmarshaledpenumbraWidthRadian_temp_7 = 0.0f;
	unmarshaledpenumbraWidthRadian_temp_7 = marshaled.___penumbraWidthRadian_7;
	unmarshaled.___penumbraWidthRadian_7 = unmarshaledpenumbraWidthRadian_temp_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaleddirection_temp_8;
	memset((&unmarshaleddirection_temp_8), 0, sizeof(unmarshaleddirection_temp_8));
	unmarshaleddirection_temp_8 = marshaled.___direction_8;
	unmarshaled.___direction_8 = unmarshaleddirection_temp_8;
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.GlobalIllumination.DirectionalLight
IL2CPP_EXTERN_C void DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshal_pinvoke_cleanup(DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Experimental.GlobalIllumination.DirectionalLight
IL2CPP_EXTERN_C void DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshal_com(const DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB& unmarshaled, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshaled_com& marshaled)
{
	marshaled.___instanceID_0 = unmarshaled.___instanceID_0;
	marshaled.___shadow_1 = static_cast<int32_t>(unmarshaled.___shadow_1);
	marshaled.___mode_2 = unmarshaled.___mode_2;
	marshaled.___position_3 = unmarshaled.___position_3;
	marshaled.___orientation_4 = unmarshaled.___orientation_4;
	marshaled.___color_5 = unmarshaled.___color_5;
	marshaled.___indirectColor_6 = unmarshaled.___indirectColor_6;
	marshaled.___penumbraWidthRadian_7 = unmarshaled.___penumbraWidthRadian_7;
	marshaled.___direction_8 = unmarshaled.___direction_8;
}
IL2CPP_EXTERN_C void DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshal_com_back(const DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshaled_com& marshaled, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB& unmarshaled)
{
	int32_t unmarshaledinstanceID_temp_0 = 0;
	unmarshaledinstanceID_temp_0 = marshaled.___instanceID_0;
	unmarshaled.___instanceID_0 = unmarshaledinstanceID_temp_0;
	bool unmarshaledshadow_temp_1 = false;
	unmarshaledshadow_temp_1 = static_cast<bool>(marshaled.___shadow_1);
	unmarshaled.___shadow_1 = unmarshaledshadow_temp_1;
	uint8_t unmarshaledmode_temp_2 = 0;
	unmarshaledmode_temp_2 = marshaled.___mode_2;
	unmarshaled.___mode_2 = unmarshaledmode_temp_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_3;
	memset((&unmarshaledposition_temp_3), 0, sizeof(unmarshaledposition_temp_3));
	unmarshaledposition_temp_3 = marshaled.___position_3;
	unmarshaled.___position_3 = unmarshaledposition_temp_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledorientation_temp_4;
	memset((&unmarshaledorientation_temp_4), 0, sizeof(unmarshaledorientation_temp_4));
	unmarshaledorientation_temp_4 = marshaled.___orientation_4;
	unmarshaled.___orientation_4 = unmarshaledorientation_temp_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledcolor_temp_5;
	memset((&unmarshaledcolor_temp_5), 0, sizeof(unmarshaledcolor_temp_5));
	unmarshaledcolor_temp_5 = marshaled.___color_5;
	unmarshaled.___color_5 = unmarshaledcolor_temp_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledindirectColor_temp_6;
	memset((&unmarshaledindirectColor_temp_6), 0, sizeof(unmarshaledindirectColor_temp_6));
	unmarshaledindirectColor_temp_6 = marshaled.___indirectColor_6;
	unmarshaled.___indirectColor_6 = unmarshaledindirectColor_temp_6;
	float unmarshaledpenumbraWidthRadian_temp_7 = 0.0f;
	unmarshaledpenumbraWidthRadian_temp_7 = marshaled.___penumbraWidthRadian_7;
	unmarshaled.___penumbraWidthRadian_7 = unmarshaledpenumbraWidthRadian_temp_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaleddirection_temp_8;
	memset((&unmarshaleddirection_temp_8), 0, sizeof(unmarshaleddirection_temp_8));
	unmarshaleddirection_temp_8 = marshaled.___direction_8;
	unmarshaled.___direction_8 = unmarshaleddirection_temp_8;
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.GlobalIllumination.DirectionalLight
IL2CPP_EXTERN_C void DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshal_com_cleanup(DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Experimental.GlobalIllumination.PointLight
IL2CPP_EXTERN_C void PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshal_pinvoke(const PointLight_tD01A1428DC1015D98A527136034187F732433EA7& unmarshaled, PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshaled_pinvoke& marshaled)
{
	marshaled.___instanceID_0 = unmarshaled.___instanceID_0;
	marshaled.___shadow_1 = static_cast<int32_t>(unmarshaled.___shadow_1);
	marshaled.___mode_2 = unmarshaled.___mode_2;
	marshaled.___position_3 = unmarshaled.___position_3;
	marshaled.___orientation_4 = unmarshaled.___orientation_4;
	marshaled.___color_5 = unmarshaled.___color_5;
	marshaled.___indirectColor_6 = unmarshaled.___indirectColor_6;
	marshaled.___range_7 = unmarshaled.___range_7;
	marshaled.___sphereRadius_8 = unmarshaled.___sphereRadius_8;
	marshaled.___falloff_9 = unmarshaled.___falloff_9;
}
IL2CPP_EXTERN_C void PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshal_pinvoke_back(const PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshaled_pinvoke& marshaled, PointLight_tD01A1428DC1015D98A527136034187F732433EA7& unmarshaled)
{
	int32_t unmarshaledinstanceID_temp_0 = 0;
	unmarshaledinstanceID_temp_0 = marshaled.___instanceID_0;
	unmarshaled.___instanceID_0 = unmarshaledinstanceID_temp_0;
	bool unmarshaledshadow_temp_1 = false;
	unmarshaledshadow_temp_1 = static_cast<bool>(marshaled.___shadow_1);
	unmarshaled.___shadow_1 = unmarshaledshadow_temp_1;
	uint8_t unmarshaledmode_temp_2 = 0;
	unmarshaledmode_temp_2 = marshaled.___mode_2;
	unmarshaled.___mode_2 = unmarshaledmode_temp_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_3;
	memset((&unmarshaledposition_temp_3), 0, sizeof(unmarshaledposition_temp_3));
	unmarshaledposition_temp_3 = marshaled.___position_3;
	unmarshaled.___position_3 = unmarshaledposition_temp_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledorientation_temp_4;
	memset((&unmarshaledorientation_temp_4), 0, sizeof(unmarshaledorientation_temp_4));
	unmarshaledorientation_temp_4 = marshaled.___orientation_4;
	unmarshaled.___orientation_4 = unmarshaledorientation_temp_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledcolor_temp_5;
	memset((&unmarshaledcolor_temp_5), 0, sizeof(unmarshaledcolor_temp_5));
	unmarshaledcolor_temp_5 = marshaled.___color_5;
	unmarshaled.___color_5 = unmarshaledcolor_temp_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledindirectColor_temp_6;
	memset((&unmarshaledindirectColor_temp_6), 0, sizeof(unmarshaledindirectColor_temp_6));
	unmarshaledindirectColor_temp_6 = marshaled.___indirectColor_6;
	unmarshaled.___indirectColor_6 = unmarshaledindirectColor_temp_6;
	float unmarshaledrange_temp_7 = 0.0f;
	unmarshaledrange_temp_7 = marshaled.___range_7;
	unmarshaled.___range_7 = unmarshaledrange_temp_7;
	float unmarshaledsphereRadius_temp_8 = 0.0f;
	unmarshaledsphereRadius_temp_8 = marshaled.___sphereRadius_8;
	unmarshaled.___sphereRadius_8 = unmarshaledsphereRadius_temp_8;
	uint8_t unmarshaledfalloff_temp_9 = 0;
	unmarshaledfalloff_temp_9 = marshaled.___falloff_9;
	unmarshaled.___falloff_9 = unmarshaledfalloff_temp_9;
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.GlobalIllumination.PointLight
IL2CPP_EXTERN_C void PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshal_pinvoke_cleanup(PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Experimental.GlobalIllumination.PointLight
IL2CPP_EXTERN_C void PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshal_com(const PointLight_tD01A1428DC1015D98A527136034187F732433EA7& unmarshaled, PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshaled_com& marshaled)
{
	marshaled.___instanceID_0 = unmarshaled.___instanceID_0;
	marshaled.___shadow_1 = static_cast<int32_t>(unmarshaled.___shadow_1);
	marshaled.___mode_2 = unmarshaled.___mode_2;
	marshaled.___position_3 = unmarshaled.___position_3;
	marshaled.___orientation_4 = unmarshaled.___orientation_4;
	marshaled.___color_5 = unmarshaled.___color_5;
	marshaled.___indirectColor_6 = unmarshaled.___indirectColor_6;
	marshaled.___range_7 = unmarshaled.___range_7;
	marshaled.___sphereRadius_8 = unmarshaled.___sphereRadius_8;
	marshaled.___falloff_9 = unmarshaled.___falloff_9;
}
IL2CPP_EXTERN_C void PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshal_com_back(const PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshaled_com& marshaled, PointLight_tD01A1428DC1015D98A527136034187F732433EA7& unmarshaled)
{
	int32_t unmarshaledinstanceID_temp_0 = 0;
	unmarshaledinstanceID_temp_0 = marshaled.___instanceID_0;
	unmarshaled.___instanceID_0 = unmarshaledinstanceID_temp_0;
	bool unmarshaledshadow_temp_1 = false;
	unmarshaledshadow_temp_1 = static_cast<bool>(marshaled.___shadow_1);
	unmarshaled.___shadow_1 = unmarshaledshadow_temp_1;
	uint8_t unmarshaledmode_temp_2 = 0;
	unmarshaledmode_temp_2 = marshaled.___mode_2;
	unmarshaled.___mode_2 = unmarshaledmode_temp_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_3;
	memset((&unmarshaledposition_temp_3), 0, sizeof(unmarshaledposition_temp_3));
	unmarshaledposition_temp_3 = marshaled.___position_3;
	unmarshaled.___position_3 = unmarshaledposition_temp_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledorientation_temp_4;
	memset((&unmarshaledorientation_temp_4), 0, sizeof(unmarshaledorientation_temp_4));
	unmarshaledorientation_temp_4 = marshaled.___orientation_4;
	unmarshaled.___orientation_4 = unmarshaledorientation_temp_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledcolor_temp_5;
	memset((&unmarshaledcolor_temp_5), 0, sizeof(unmarshaledcolor_temp_5));
	unmarshaledcolor_temp_5 = marshaled.___color_5;
	unmarshaled.___color_5 = unmarshaledcolor_temp_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledindirectColor_temp_6;
	memset((&unmarshaledindirectColor_temp_6), 0, sizeof(unmarshaledindirectColor_temp_6));
	unmarshaledindirectColor_temp_6 = marshaled.___indirectColor_6;
	unmarshaled.___indirectColor_6 = unmarshaledindirectColor_temp_6;
	float unmarshaledrange_temp_7 = 0.0f;
	unmarshaledrange_temp_7 = marshaled.___range_7;
	unmarshaled.___range_7 = unmarshaledrange_temp_7;
	float unmarshaledsphereRadius_temp_8 = 0.0f;
	unmarshaledsphereRadius_temp_8 = marshaled.___sphereRadius_8;
	unmarshaled.___sphereRadius_8 = unmarshaledsphereRadius_temp_8;
	uint8_t unmarshaledfalloff_temp_9 = 0;
	unmarshaledfalloff_temp_9 = marshaled.___falloff_9;
	unmarshaled.___falloff_9 = unmarshaledfalloff_temp_9;
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.GlobalIllumination.PointLight
IL2CPP_EXTERN_C void PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshal_com_cleanup(PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Experimental.GlobalIllumination.SpotLight
IL2CPP_EXTERN_C void SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshal_pinvoke(const SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869& unmarshaled, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshaled_pinvoke& marshaled)
{
	marshaled.___instanceID_0 = unmarshaled.___instanceID_0;
	marshaled.___shadow_1 = static_cast<int32_t>(unmarshaled.___shadow_1);
	marshaled.___mode_2 = unmarshaled.___mode_2;
	marshaled.___position_3 = unmarshaled.___position_3;
	marshaled.___orientation_4 = unmarshaled.___orientation_4;
	marshaled.___color_5 = unmarshaled.___color_5;
	marshaled.___indirectColor_6 = unmarshaled.___indirectColor_6;
	marshaled.___range_7 = unmarshaled.___range_7;
	marshaled.___sphereRadius_8 = unmarshaled.___sphereRadius_8;
	marshaled.___coneAngle_9 = unmarshaled.___coneAngle_9;
	marshaled.___innerConeAngle_10 = unmarshaled.___innerConeAngle_10;
	marshaled.___falloff_11 = unmarshaled.___falloff_11;
	marshaled.___angularFalloff_12 = unmarshaled.___angularFalloff_12;
}
IL2CPP_EXTERN_C void SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshal_pinvoke_back(const SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshaled_pinvoke& marshaled, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869& unmarshaled)
{
	int32_t unmarshaledinstanceID_temp_0 = 0;
	unmarshaledinstanceID_temp_0 = marshaled.___instanceID_0;
	unmarshaled.___instanceID_0 = unmarshaledinstanceID_temp_0;
	bool unmarshaledshadow_temp_1 = false;
	unmarshaledshadow_temp_1 = static_cast<bool>(marshaled.___shadow_1);
	unmarshaled.___shadow_1 = unmarshaledshadow_temp_1;
	uint8_t unmarshaledmode_temp_2 = 0;
	unmarshaledmode_temp_2 = marshaled.___mode_2;
	unmarshaled.___mode_2 = unmarshaledmode_temp_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_3;
	memset((&unmarshaledposition_temp_3), 0, sizeof(unmarshaledposition_temp_3));
	unmarshaledposition_temp_3 = marshaled.___position_3;
	unmarshaled.___position_3 = unmarshaledposition_temp_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledorientation_temp_4;
	memset((&unmarshaledorientation_temp_4), 0, sizeof(unmarshaledorientation_temp_4));
	unmarshaledorientation_temp_4 = marshaled.___orientation_4;
	unmarshaled.___orientation_4 = unmarshaledorientation_temp_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledcolor_temp_5;
	memset((&unmarshaledcolor_temp_5), 0, sizeof(unmarshaledcolor_temp_5));
	unmarshaledcolor_temp_5 = marshaled.___color_5;
	unmarshaled.___color_5 = unmarshaledcolor_temp_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledindirectColor_temp_6;
	memset((&unmarshaledindirectColor_temp_6), 0, sizeof(unmarshaledindirectColor_temp_6));
	unmarshaledindirectColor_temp_6 = marshaled.___indirectColor_6;
	unmarshaled.___indirectColor_6 = unmarshaledindirectColor_temp_6;
	float unmarshaledrange_temp_7 = 0.0f;
	unmarshaledrange_temp_7 = marshaled.___range_7;
	unmarshaled.___range_7 = unmarshaledrange_temp_7;
	float unmarshaledsphereRadius_temp_8 = 0.0f;
	unmarshaledsphereRadius_temp_8 = marshaled.___sphereRadius_8;
	unmarshaled.___sphereRadius_8 = unmarshaledsphereRadius_temp_8;
	float unmarshaledconeAngle_temp_9 = 0.0f;
	unmarshaledconeAngle_temp_9 = marshaled.___coneAngle_9;
	unmarshaled.___coneAngle_9 = unmarshaledconeAngle_temp_9;
	float unmarshaledinnerConeAngle_temp_10 = 0.0f;
	unmarshaledinnerConeAngle_temp_10 = marshaled.___innerConeAngle_10;
	unmarshaled.___innerConeAngle_10 = unmarshaledinnerConeAngle_temp_10;
	uint8_t unmarshaledfalloff_temp_11 = 0;
	unmarshaledfalloff_temp_11 = marshaled.___falloff_11;
	unmarshaled.___falloff_11 = unmarshaledfalloff_temp_11;
	uint8_t unmarshaledangularFalloff_temp_12 = 0;
	unmarshaledangularFalloff_temp_12 = marshaled.___angularFalloff_12;
	unmarshaled.___angularFalloff_12 = unmarshaledangularFalloff_temp_12;
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.GlobalIllumination.SpotLight
IL2CPP_EXTERN_C void SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshal_pinvoke_cleanup(SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Experimental.GlobalIllumination.SpotLight
IL2CPP_EXTERN_C void SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshal_com(const SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869& unmarshaled, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshaled_com& marshaled)
{
	marshaled.___instanceID_0 = unmarshaled.___instanceID_0;
	marshaled.___shadow_1 = static_cast<int32_t>(unmarshaled.___shadow_1);
	marshaled.___mode_2 = unmarshaled.___mode_2;
	marshaled.___position_3 = unmarshaled.___position_3;
	marshaled.___orientation_4 = unmarshaled.___orientation_4;
	marshaled.___color_5 = unmarshaled.___color_5;
	marshaled.___indirectColor_6 = unmarshaled.___indirectColor_6;
	marshaled.___range_7 = unmarshaled.___range_7;
	marshaled.___sphereRadius_8 = unmarshaled.___sphereRadius_8;
	marshaled.___coneAngle_9 = unmarshaled.___coneAngle_9;
	marshaled.___innerConeAngle_10 = unmarshaled.___innerConeAngle_10;
	marshaled.___falloff_11 = unmarshaled.___falloff_11;
	marshaled.___angularFalloff_12 = unmarshaled.___angularFalloff_12;
}
IL2CPP_EXTERN_C void SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshal_com_back(const SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshaled_com& marshaled, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869& unmarshaled)
{
	int32_t unmarshaledinstanceID_temp_0 = 0;
	unmarshaledinstanceID_temp_0 = marshaled.___instanceID_0;
	unmarshaled.___instanceID_0 = unmarshaledinstanceID_temp_0;
	bool unmarshaledshadow_temp_1 = false;
	unmarshaledshadow_temp_1 = static_cast<bool>(marshaled.___shadow_1);
	unmarshaled.___shadow_1 = unmarshaledshadow_temp_1;
	uint8_t unmarshaledmode_temp_2 = 0;
	unmarshaledmode_temp_2 = marshaled.___mode_2;
	unmarshaled.___mode_2 = unmarshaledmode_temp_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_3;
	memset((&unmarshaledposition_temp_3), 0, sizeof(unmarshaledposition_temp_3));
	unmarshaledposition_temp_3 = marshaled.___position_3;
	unmarshaled.___position_3 = unmarshaledposition_temp_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledorientation_temp_4;
	memset((&unmarshaledorientation_temp_4), 0, sizeof(unmarshaledorientation_temp_4));
	unmarshaledorientation_temp_4 = marshaled.___orientation_4;
	unmarshaled.___orientation_4 = unmarshaledorientation_temp_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledcolor_temp_5;
	memset((&unmarshaledcolor_temp_5), 0, sizeof(unmarshaledcolor_temp_5));
	unmarshaledcolor_temp_5 = marshaled.___color_5;
	unmarshaled.___color_5 = unmarshaledcolor_temp_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledindirectColor_temp_6;
	memset((&unmarshaledindirectColor_temp_6), 0, sizeof(unmarshaledindirectColor_temp_6));
	unmarshaledindirectColor_temp_6 = marshaled.___indirectColor_6;
	unmarshaled.___indirectColor_6 = unmarshaledindirectColor_temp_6;
	float unmarshaledrange_temp_7 = 0.0f;
	unmarshaledrange_temp_7 = marshaled.___range_7;
	unmarshaled.___range_7 = unmarshaledrange_temp_7;
	float unmarshaledsphereRadius_temp_8 = 0.0f;
	unmarshaledsphereRadius_temp_8 = marshaled.___sphereRadius_8;
	unmarshaled.___sphereRadius_8 = unmarshaledsphereRadius_temp_8;
	float unmarshaledconeAngle_temp_9 = 0.0f;
	unmarshaledconeAngle_temp_9 = marshaled.___coneAngle_9;
	unmarshaled.___coneAngle_9 = unmarshaledconeAngle_temp_9;
	float unmarshaledinnerConeAngle_temp_10 = 0.0f;
	unmarshaledinnerConeAngle_temp_10 = marshaled.___innerConeAngle_10;
	unmarshaled.___innerConeAngle_10 = unmarshaledinnerConeAngle_temp_10;
	uint8_t unmarshaledfalloff_temp_11 = 0;
	unmarshaledfalloff_temp_11 = marshaled.___falloff_11;
	unmarshaled.___falloff_11 = unmarshaledfalloff_temp_11;
	uint8_t unmarshaledangularFalloff_temp_12 = 0;
	unmarshaledangularFalloff_temp_12 = marshaled.___angularFalloff_12;
	unmarshaled.___angularFalloff_12 = unmarshaledangularFalloff_temp_12;
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.GlobalIllumination.SpotLight
IL2CPP_EXTERN_C void SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshal_com_cleanup(SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Experimental.GlobalIllumination.RectangleLight
IL2CPP_EXTERN_C void RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshal_pinvoke(const RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698& unmarshaled, RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshaled_pinvoke& marshaled)
{
	marshaled.___instanceID_0 = unmarshaled.___instanceID_0;
	marshaled.___shadow_1 = static_cast<int32_t>(unmarshaled.___shadow_1);
	marshaled.___mode_2 = unmarshaled.___mode_2;
	marshaled.___position_3 = unmarshaled.___position_3;
	marshaled.___orientation_4 = unmarshaled.___orientation_4;
	marshaled.___color_5 = unmarshaled.___color_5;
	marshaled.___indirectColor_6 = unmarshaled.___indirectColor_6;
	marshaled.___range_7 = unmarshaled.___range_7;
	marshaled.___width_8 = unmarshaled.___width_8;
	marshaled.___height_9 = unmarshaled.___height_9;
	marshaled.___falloff_10 = unmarshaled.___falloff_10;
}
IL2CPP_EXTERN_C void RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshal_pinvoke_back(const RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshaled_pinvoke& marshaled, RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698& unmarshaled)
{
	int32_t unmarshaledinstanceID_temp_0 = 0;
	unmarshaledinstanceID_temp_0 = marshaled.___instanceID_0;
	unmarshaled.___instanceID_0 = unmarshaledinstanceID_temp_0;
	bool unmarshaledshadow_temp_1 = false;
	unmarshaledshadow_temp_1 = static_cast<bool>(marshaled.___shadow_1);
	unmarshaled.___shadow_1 = unmarshaledshadow_temp_1;
	uint8_t unmarshaledmode_temp_2 = 0;
	unmarshaledmode_temp_2 = marshaled.___mode_2;
	unmarshaled.___mode_2 = unmarshaledmode_temp_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_3;
	memset((&unmarshaledposition_temp_3), 0, sizeof(unmarshaledposition_temp_3));
	unmarshaledposition_temp_3 = marshaled.___position_3;
	unmarshaled.___position_3 = unmarshaledposition_temp_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledorientation_temp_4;
	memset((&unmarshaledorientation_temp_4), 0, sizeof(unmarshaledorientation_temp_4));
	unmarshaledorientation_temp_4 = marshaled.___orientation_4;
	unmarshaled.___orientation_4 = unmarshaledorientation_temp_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledcolor_temp_5;
	memset((&unmarshaledcolor_temp_5), 0, sizeof(unmarshaledcolor_temp_5));
	unmarshaledcolor_temp_5 = marshaled.___color_5;
	unmarshaled.___color_5 = unmarshaledcolor_temp_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledindirectColor_temp_6;
	memset((&unmarshaledindirectColor_temp_6), 0, sizeof(unmarshaledindirectColor_temp_6));
	unmarshaledindirectColor_temp_6 = marshaled.___indirectColor_6;
	unmarshaled.___indirectColor_6 = unmarshaledindirectColor_temp_6;
	float unmarshaledrange_temp_7 = 0.0f;
	unmarshaledrange_temp_7 = marshaled.___range_7;
	unmarshaled.___range_7 = unmarshaledrange_temp_7;
	float unmarshaledwidth_temp_8 = 0.0f;
	unmarshaledwidth_temp_8 = marshaled.___width_8;
	unmarshaled.___width_8 = unmarshaledwidth_temp_8;
	float unmarshaledheight_temp_9 = 0.0f;
	unmarshaledheight_temp_9 = marshaled.___height_9;
	unmarshaled.___height_9 = unmarshaledheight_temp_9;
	uint8_t unmarshaledfalloff_temp_10 = 0;
	unmarshaledfalloff_temp_10 = marshaled.___falloff_10;
	unmarshaled.___falloff_10 = unmarshaledfalloff_temp_10;
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.GlobalIllumination.RectangleLight
IL2CPP_EXTERN_C void RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshal_pinvoke_cleanup(RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Experimental.GlobalIllumination.RectangleLight
IL2CPP_EXTERN_C void RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshal_com(const RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698& unmarshaled, RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshaled_com& marshaled)
{
	marshaled.___instanceID_0 = unmarshaled.___instanceID_0;
	marshaled.___shadow_1 = static_cast<int32_t>(unmarshaled.___shadow_1);
	marshaled.___mode_2 = unmarshaled.___mode_2;
	marshaled.___position_3 = unmarshaled.___position_3;
	marshaled.___orientation_4 = unmarshaled.___orientation_4;
	marshaled.___color_5 = unmarshaled.___color_5;
	marshaled.___indirectColor_6 = unmarshaled.___indirectColor_6;
	marshaled.___range_7 = unmarshaled.___range_7;
	marshaled.___width_8 = unmarshaled.___width_8;
	marshaled.___height_9 = unmarshaled.___height_9;
	marshaled.___falloff_10 = unmarshaled.___falloff_10;
}
IL2CPP_EXTERN_C void RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshal_com_back(const RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshaled_com& marshaled, RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698& unmarshaled)
{
	int32_t unmarshaledinstanceID_temp_0 = 0;
	unmarshaledinstanceID_temp_0 = marshaled.___instanceID_0;
	unmarshaled.___instanceID_0 = unmarshaledinstanceID_temp_0;
	bool unmarshaledshadow_temp_1 = false;
	unmarshaledshadow_temp_1 = static_cast<bool>(marshaled.___shadow_1);
	unmarshaled.___shadow_1 = unmarshaledshadow_temp_1;
	uint8_t unmarshaledmode_temp_2 = 0;
	unmarshaledmode_temp_2 = marshaled.___mode_2;
	unmarshaled.___mode_2 = unmarshaledmode_temp_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_3;
	memset((&unmarshaledposition_temp_3), 0, sizeof(unmarshaledposition_temp_3));
	unmarshaledposition_temp_3 = marshaled.___position_3;
	unmarshaled.___position_3 = unmarshaledposition_temp_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledorientation_temp_4;
	memset((&unmarshaledorientation_temp_4), 0, sizeof(unmarshaledorientation_temp_4));
	unmarshaledorientation_temp_4 = marshaled.___orientation_4;
	unmarshaled.___orientation_4 = unmarshaledorientation_temp_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledcolor_temp_5;
	memset((&unmarshaledcolor_temp_5), 0, sizeof(unmarshaledcolor_temp_5));
	unmarshaledcolor_temp_5 = marshaled.___color_5;
	unmarshaled.___color_5 = unmarshaledcolor_temp_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledindirectColor_temp_6;
	memset((&unmarshaledindirectColor_temp_6), 0, sizeof(unmarshaledindirectColor_temp_6));
	unmarshaledindirectColor_temp_6 = marshaled.___indirectColor_6;
	unmarshaled.___indirectColor_6 = unmarshaledindirectColor_temp_6;
	float unmarshaledrange_temp_7 = 0.0f;
	unmarshaledrange_temp_7 = marshaled.___range_7;
	unmarshaled.___range_7 = unmarshaledrange_temp_7;
	float unmarshaledwidth_temp_8 = 0.0f;
	unmarshaledwidth_temp_8 = marshaled.___width_8;
	unmarshaled.___width_8 = unmarshaledwidth_temp_8;
	float unmarshaledheight_temp_9 = 0.0f;
	unmarshaledheight_temp_9 = marshaled.___height_9;
	unmarshaled.___height_9 = unmarshaledheight_temp_9;
	uint8_t unmarshaledfalloff_temp_10 = 0;
	unmarshaledfalloff_temp_10 = marshaled.___falloff_10;
	unmarshaled.___falloff_10 = unmarshaledfalloff_temp_10;
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.GlobalIllumination.RectangleLight
IL2CPP_EXTERN_C void RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshal_com_cleanup(RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Experimental.GlobalIllumination.DiscLight
IL2CPP_EXTERN_C void DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshal_pinvoke(const DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E& unmarshaled, DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshaled_pinvoke& marshaled)
{
	marshaled.___instanceID_0 = unmarshaled.___instanceID_0;
	marshaled.___shadow_1 = static_cast<int32_t>(unmarshaled.___shadow_1);
	marshaled.___mode_2 = unmarshaled.___mode_2;
	marshaled.___position_3 = unmarshaled.___position_3;
	marshaled.___orientation_4 = unmarshaled.___orientation_4;
	marshaled.___color_5 = unmarshaled.___color_5;
	marshaled.___indirectColor_6 = unmarshaled.___indirectColor_6;
	marshaled.___range_7 = unmarshaled.___range_7;
	marshaled.___radius_8 = unmarshaled.___radius_8;
	marshaled.___falloff_9 = unmarshaled.___falloff_9;
}
IL2CPP_EXTERN_C void DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshal_pinvoke_back(const DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshaled_pinvoke& marshaled, DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E& unmarshaled)
{
	int32_t unmarshaledinstanceID_temp_0 = 0;
	unmarshaledinstanceID_temp_0 = marshaled.___instanceID_0;
	unmarshaled.___instanceID_0 = unmarshaledinstanceID_temp_0;
	bool unmarshaledshadow_temp_1 = false;
	unmarshaledshadow_temp_1 = static_cast<bool>(marshaled.___shadow_1);
	unmarshaled.___shadow_1 = unmarshaledshadow_temp_1;
	uint8_t unmarshaledmode_temp_2 = 0;
	unmarshaledmode_temp_2 = marshaled.___mode_2;
	unmarshaled.___mode_2 = unmarshaledmode_temp_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_3;
	memset((&unmarshaledposition_temp_3), 0, sizeof(unmarshaledposition_temp_3));
	unmarshaledposition_temp_3 = marshaled.___position_3;
	unmarshaled.___position_3 = unmarshaledposition_temp_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledorientation_temp_4;
	memset((&unmarshaledorientation_temp_4), 0, sizeof(unmarshaledorientation_temp_4));
	unmarshaledorientation_temp_4 = marshaled.___orientation_4;
	unmarshaled.___orientation_4 = unmarshaledorientation_temp_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledcolor_temp_5;
	memset((&unmarshaledcolor_temp_5), 0, sizeof(unmarshaledcolor_temp_5));
	unmarshaledcolor_temp_5 = marshaled.___color_5;
	unmarshaled.___color_5 = unmarshaledcolor_temp_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledindirectColor_temp_6;
	memset((&unmarshaledindirectColor_temp_6), 0, sizeof(unmarshaledindirectColor_temp_6));
	unmarshaledindirectColor_temp_6 = marshaled.___indirectColor_6;
	unmarshaled.___indirectColor_6 = unmarshaledindirectColor_temp_6;
	float unmarshaledrange_temp_7 = 0.0f;
	unmarshaledrange_temp_7 = marshaled.___range_7;
	unmarshaled.___range_7 = unmarshaledrange_temp_7;
	float unmarshaledradius_temp_8 = 0.0f;
	unmarshaledradius_temp_8 = marshaled.___radius_8;
	unmarshaled.___radius_8 = unmarshaledradius_temp_8;
	uint8_t unmarshaledfalloff_temp_9 = 0;
	unmarshaledfalloff_temp_9 = marshaled.___falloff_9;
	unmarshaled.___falloff_9 = unmarshaledfalloff_temp_9;
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.GlobalIllumination.DiscLight
IL2CPP_EXTERN_C void DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshal_pinvoke_cleanup(DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Experimental.GlobalIllumination.DiscLight
IL2CPP_EXTERN_C void DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshal_com(const DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E& unmarshaled, DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshaled_com& marshaled)
{
	marshaled.___instanceID_0 = unmarshaled.___instanceID_0;
	marshaled.___shadow_1 = static_cast<int32_t>(unmarshaled.___shadow_1);
	marshaled.___mode_2 = unmarshaled.___mode_2;
	marshaled.___position_3 = unmarshaled.___position_3;
	marshaled.___orientation_4 = unmarshaled.___orientation_4;
	marshaled.___color_5 = unmarshaled.___color_5;
	marshaled.___indirectColor_6 = unmarshaled.___indirectColor_6;
	marshaled.___range_7 = unmarshaled.___range_7;
	marshaled.___radius_8 = unmarshaled.___radius_8;
	marshaled.___falloff_9 = unmarshaled.___falloff_9;
}
IL2CPP_EXTERN_C void DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshal_com_back(const DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshaled_com& marshaled, DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E& unmarshaled)
{
	int32_t unmarshaledinstanceID_temp_0 = 0;
	unmarshaledinstanceID_temp_0 = marshaled.___instanceID_0;
	unmarshaled.___instanceID_0 = unmarshaledinstanceID_temp_0;
	bool unmarshaledshadow_temp_1 = false;
	unmarshaledshadow_temp_1 = static_cast<bool>(marshaled.___shadow_1);
	unmarshaled.___shadow_1 = unmarshaledshadow_temp_1;
	uint8_t unmarshaledmode_temp_2 = 0;
	unmarshaledmode_temp_2 = marshaled.___mode_2;
	unmarshaled.___mode_2 = unmarshaledmode_temp_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_3;
	memset((&unmarshaledposition_temp_3), 0, sizeof(unmarshaledposition_temp_3));
	unmarshaledposition_temp_3 = marshaled.___position_3;
	unmarshaled.___position_3 = unmarshaledposition_temp_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledorientation_temp_4;
	memset((&unmarshaledorientation_temp_4), 0, sizeof(unmarshaledorientation_temp_4));
	unmarshaledorientation_temp_4 = marshaled.___orientation_4;
	unmarshaled.___orientation_4 = unmarshaledorientation_temp_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledcolor_temp_5;
	memset((&unmarshaledcolor_temp_5), 0, sizeof(unmarshaledcolor_temp_5));
	unmarshaledcolor_temp_5 = marshaled.___color_5;
	unmarshaled.___color_5 = unmarshaledcolor_temp_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledindirectColor_temp_6;
	memset((&unmarshaledindirectColor_temp_6), 0, sizeof(unmarshaledindirectColor_temp_6));
	unmarshaledindirectColor_temp_6 = marshaled.___indirectColor_6;
	unmarshaled.___indirectColor_6 = unmarshaledindirectColor_temp_6;
	float unmarshaledrange_temp_7 = 0.0f;
	unmarshaledrange_temp_7 = marshaled.___range_7;
	unmarshaled.___range_7 = unmarshaledrange_temp_7;
	float unmarshaledradius_temp_8 = 0.0f;
	unmarshaledradius_temp_8 = marshaled.___radius_8;
	unmarshaled.___radius_8 = unmarshaledradius_temp_8;
	uint8_t unmarshaledfalloff_temp_9 = 0;
	unmarshaledfalloff_temp_9 = marshaled.___falloff_9;
	unmarshaled.___falloff_9 = unmarshaledfalloff_temp_9;
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.GlobalIllumination.DiscLight
IL2CPP_EXTERN_C void DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshal_com_cleanup(DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshaled_com& marshaled)
{
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
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.DirectionalLight&,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_m112DEBB76EC57AC52E6384C97A3E8B2EAA867207 (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* ___0_light, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method) 
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B2_0 = NULL;
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B3_1 = NULL;
	{
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_0 = ___0_light;
		int32_t L_1 = L_0->___instanceID_0;
		__this->___instanceID_0 = L_1;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_2 = ___1_cookie;
		int32_t L_3 = L_2->___instanceID_0;
		__this->___cookieID_1 = L_3;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_4 = ___1_cookie;
		float L_5 = L_4->___scale_1;
		__this->___cookieScale_2 = L_5;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_6 = ___0_light;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_7 = L_6->___color_5;
		__this->___color_3 = L_7;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_8 = ___0_light;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_9 = L_8->___indirectColor_6;
		__this->___indirectColor_4 = L_9;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_10 = ___0_light;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = L_10->___orientation_4;
		__this->___orientation_5 = L_11;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_12 = ___0_light;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = L_12->___position_3;
		__this->___position_6 = L_13;
		__this->___range_7 = (0.0f);
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_14 = ___1_cookie;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_15 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&L_14->___sizes_2);
		float L_16 = L_15->___x_0;
		__this->___coneAngle_8 = L_16;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_17 = ___1_cookie;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_18 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&L_17->___sizes_2);
		float L_19 = L_18->___y_1;
		__this->___innerConeAngle_9 = L_19;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_20 = ___0_light;
		float L_21 = L_20->___penumbraWidthRadian_7;
		__this->___shape0_10 = L_21;
		__this->___shape1_11 = (0.0f);
		__this->___type_12 = 0;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_22 = ___0_light;
		uint8_t L_23 = L_22->___mode_2;
		__this->___mode_13 = L_23;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_24 = ___0_light;
		bool L_25 = L_24->___shadow_1;
		G_B1_0 = __this;
		if (L_25)
		{
			G_B2_0 = __this;
			goto IL_00b8;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_00b9;
	}

IL_00b8:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_00b9:
	{
		G_B3_1->___shadow_14 = (uint8_t)((int32_t)(uint8_t)G_B3_0);
		__this->___falloff_15 = 4;
		return;
	}
}
IL2CPP_EXTERN_C  void LightDataGI_Init_m112DEBB76EC57AC52E6384C97A3E8B2EAA867207_AdjustorThunk (RuntimeObject* __this, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* ___0_light, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method)
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21*>(__this + _offset);
	LightDataGI_Init_m112DEBB76EC57AC52E6384C97A3E8B2EAA867207(_thisAdjusted, ___0_light, ___1_cookie, method);
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.PointLight&,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_mACE06E00CC639CA89F3847E9DB55FD0F00812A7A (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, PointLight_tD01A1428DC1015D98A527136034187F732433EA7* ___0_light, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method) 
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B2_0 = NULL;
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B3_1 = NULL;
	{
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_0 = ___0_light;
		int32_t L_1 = L_0->___instanceID_0;
		__this->___instanceID_0 = L_1;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_2 = ___1_cookie;
		int32_t L_3 = L_2->___instanceID_0;
		__this->___cookieID_1 = L_3;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_4 = ___1_cookie;
		float L_5 = L_4->___scale_1;
		__this->___cookieScale_2 = L_5;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_6 = ___0_light;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_7 = L_6->___color_5;
		__this->___color_3 = L_7;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_8 = ___0_light;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_9 = L_8->___indirectColor_6;
		__this->___indirectColor_4 = L_9;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_10 = ___0_light;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = L_10->___orientation_4;
		__this->___orientation_5 = L_11;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_12 = ___0_light;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = L_12->___position_3;
		__this->___position_6 = L_13;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_14 = ___0_light;
		float L_15 = L_14->___range_7;
		__this->___range_7 = L_15;
		__this->___coneAngle_8 = (0.0f);
		__this->___innerConeAngle_9 = (0.0f);
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_16 = ___0_light;
		float L_17 = L_16->___sphereRadius_8;
		__this->___shape0_10 = L_17;
		__this->___shape1_11 = (0.0f);
		__this->___type_12 = 1;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_18 = ___0_light;
		uint8_t L_19 = L_18->___mode_2;
		__this->___mode_13 = L_19;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_20 = ___0_light;
		bool L_21 = L_20->___shadow_1;
		G_B1_0 = __this;
		if (L_21)
		{
			G_B2_0 = __this;
			goto IL_00ad;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_00ae;
	}

IL_00ad:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_00ae:
	{
		G_B3_1->___shadow_14 = (uint8_t)((int32_t)(uint8_t)G_B3_0);
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_22 = ___0_light;
		uint8_t L_23 = L_22->___falloff_9;
		__this->___falloff_15 = L_23;
		return;
	}
}
IL2CPP_EXTERN_C  void LightDataGI_Init_mACE06E00CC639CA89F3847E9DB55FD0F00812A7A_AdjustorThunk (RuntimeObject* __this, PointLight_tD01A1428DC1015D98A527136034187F732433EA7* ___0_light, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method)
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21*>(__this + _offset);
	LightDataGI_Init_mACE06E00CC639CA89F3847E9DB55FD0F00812A7A(_thisAdjusted, ___0_light, ___1_cookie, method);
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.SpotLight&,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_m0A999D118CDCBDA99B9E24231ED057D943C9C67B (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* ___0_light, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method) 
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B2_0 = NULL;
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B3_1 = NULL;
	{
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_0 = ___0_light;
		int32_t L_1 = L_0->___instanceID_0;
		__this->___instanceID_0 = L_1;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_2 = ___1_cookie;
		int32_t L_3 = L_2->___instanceID_0;
		__this->___cookieID_1 = L_3;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_4 = ___1_cookie;
		float L_5 = L_4->___scale_1;
		__this->___cookieScale_2 = L_5;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_6 = ___0_light;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_7 = L_6->___color_5;
		__this->___color_3 = L_7;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_8 = ___0_light;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_9 = L_8->___indirectColor_6;
		__this->___indirectColor_4 = L_9;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_10 = ___0_light;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = L_10->___orientation_4;
		__this->___orientation_5 = L_11;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_12 = ___0_light;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = L_12->___position_3;
		__this->___position_6 = L_13;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_14 = ___0_light;
		float L_15 = L_14->___range_7;
		__this->___range_7 = L_15;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_16 = ___0_light;
		float L_17 = L_16->___coneAngle_9;
		__this->___coneAngle_8 = L_17;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_18 = ___0_light;
		float L_19 = L_18->___innerConeAngle_10;
		__this->___innerConeAngle_9 = L_19;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_20 = ___0_light;
		float L_21 = L_20->___sphereRadius_8;
		__this->___shape0_10 = L_21;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_22 = ___0_light;
		uint8_t L_23 = L_22->___angularFalloff_12;
		__this->___shape1_11 = ((float)L_23);
		__this->___type_12 = 2;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_24 = ___0_light;
		uint8_t L_25 = L_24->___mode_2;
		__this->___mode_13 = L_25;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_26 = ___0_light;
		bool L_27 = L_26->___shadow_1;
		G_B1_0 = __this;
		if (L_27)
		{
			G_B2_0 = __this;
			goto IL_00b1;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_00b2;
	}

IL_00b1:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_00b2:
	{
		G_B3_1->___shadow_14 = (uint8_t)((int32_t)(uint8_t)G_B3_0);
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_28 = ___0_light;
		uint8_t L_29 = L_28->___falloff_11;
		__this->___falloff_15 = L_29;
		return;
	}
}
IL2CPP_EXTERN_C  void LightDataGI_Init_m0A999D118CDCBDA99B9E24231ED057D943C9C67B_AdjustorThunk (RuntimeObject* __this, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* ___0_light, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method)
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21*>(__this + _offset);
	LightDataGI_Init_m0A999D118CDCBDA99B9E24231ED057D943C9C67B(_thisAdjusted, ___0_light, ___1_cookie, method);
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.RectangleLight&,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_mDC887CA8191C6CADE1DB585D7FEB46B080B25038 (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* ___0_light, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method) 
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B2_0 = NULL;
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B3_1 = NULL;
	{
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_0 = ___0_light;
		int32_t L_1 = L_0->___instanceID_0;
		__this->___instanceID_0 = L_1;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_2 = ___1_cookie;
		int32_t L_3 = L_2->___instanceID_0;
		__this->___cookieID_1 = L_3;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_4 = ___1_cookie;
		float L_5 = L_4->___scale_1;
		__this->___cookieScale_2 = L_5;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_6 = ___0_light;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_7 = L_6->___color_5;
		__this->___color_3 = L_7;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_8 = ___0_light;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_9 = L_8->___indirectColor_6;
		__this->___indirectColor_4 = L_9;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_10 = ___0_light;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = L_10->___orientation_4;
		__this->___orientation_5 = L_11;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_12 = ___0_light;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = L_12->___position_3;
		__this->___position_6 = L_13;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_14 = ___0_light;
		float L_15 = L_14->___range_7;
		__this->___range_7 = L_15;
		__this->___coneAngle_8 = (0.0f);
		__this->___innerConeAngle_9 = (0.0f);
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_16 = ___0_light;
		float L_17 = L_16->___width_8;
		__this->___shape0_10 = L_17;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_18 = ___0_light;
		float L_19 = L_18->___height_9;
		__this->___shape1_11 = L_19;
		__this->___type_12 = 3;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_20 = ___0_light;
		uint8_t L_21 = L_20->___mode_2;
		__this->___mode_13 = L_21;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_22 = ___0_light;
		bool L_23 = L_22->___shadow_1;
		G_B1_0 = __this;
		if (L_23)
		{
			G_B2_0 = __this;
			goto IL_00ae;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_00af;
	}

IL_00ae:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_00af:
	{
		G_B3_1->___shadow_14 = (uint8_t)((int32_t)(uint8_t)G_B3_0);
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_24 = ___0_light;
		uint8_t L_25 = L_24->___falloff_10;
		__this->___falloff_15 = L_25;
		return;
	}
}
IL2CPP_EXTERN_C  void LightDataGI_Init_mDC887CA8191C6CADE1DB585D7FEB46B080B25038_AdjustorThunk (RuntimeObject* __this, RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* ___0_light, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method)
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21*>(__this + _offset);
	LightDataGI_Init_mDC887CA8191C6CADE1DB585D7FEB46B080B25038(_thisAdjusted, ___0_light, ___1_cookie, method);
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.DiscLight&,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_mB2D1C73EDFEA6815E39A0FE3ED2F7BF9A7117632 (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* ___0_light, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method) 
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B2_0 = NULL;
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B3_1 = NULL;
	{
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_0 = ___0_light;
		int32_t L_1 = L_0->___instanceID_0;
		__this->___instanceID_0 = L_1;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_2 = ___1_cookie;
		int32_t L_3 = L_2->___instanceID_0;
		__this->___cookieID_1 = L_3;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_4 = ___1_cookie;
		float L_5 = L_4->___scale_1;
		__this->___cookieScale_2 = L_5;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_6 = ___0_light;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_7 = L_6->___color_5;
		__this->___color_3 = L_7;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_8 = ___0_light;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_9 = L_8->___indirectColor_6;
		__this->___indirectColor_4 = L_9;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_10 = ___0_light;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = L_10->___orientation_4;
		__this->___orientation_5 = L_11;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_12 = ___0_light;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = L_12->___position_3;
		__this->___position_6 = L_13;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_14 = ___0_light;
		float L_15 = L_14->___range_7;
		__this->___range_7 = L_15;
		__this->___coneAngle_8 = (0.0f);
		__this->___innerConeAngle_9 = (0.0f);
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_16 = ___0_light;
		float L_17 = L_16->___radius_8;
		__this->___shape0_10 = L_17;
		__this->___shape1_11 = (0.0f);
		__this->___type_12 = 4;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_18 = ___0_light;
		uint8_t L_19 = L_18->___mode_2;
		__this->___mode_13 = L_19;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_20 = ___0_light;
		bool L_21 = L_20->___shadow_1;
		G_B1_0 = __this;
		if (L_21)
		{
			G_B2_0 = __this;
			goto IL_00ad;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_00ae;
	}

IL_00ad:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_00ae:
	{
		G_B3_1->___shadow_14 = (uint8_t)((int32_t)(uint8_t)G_B3_0);
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_22 = ___0_light;
		uint8_t L_23 = L_22->___falloff_9;
		__this->___falloff_15 = L_23;
		return;
	}
}
IL2CPP_EXTERN_C  void LightDataGI_Init_mB2D1C73EDFEA6815E39A0FE3ED2F7BF9A7117632_AdjustorThunk (RuntimeObject* __this, DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* ___0_light, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method)
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21*>(__this + _offset);
	LightDataGI_Init_mB2D1C73EDFEA6815E39A0FE3ED2F7BF9A7117632(_thisAdjusted, ___0_light, ___1_cookie, method);
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::InitNoBake(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_InitNoBake_mBDF2EFB22D4BEE63B6F25F4EE9F1522D2866ED43 (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, int32_t ___0_lightInstanceID, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_lightInstanceID;
		__this->___instanceID_0 = L_0;
		__this->___mode_13 = 3;
		return;
	}
}
IL2CPP_EXTERN_C  void LightDataGI_InitNoBake_mBDF2EFB22D4BEE63B6F25F4EE9F1522D2866ED43_AdjustorThunk (RuntimeObject* __this, int32_t ___0_lightInstanceID, const RuntimeMethod* method)
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21*>(__this + _offset);
	LightDataGI_InitNoBake_mBDF2EFB22D4BEE63B6F25F4EE9F1522D2866ED43(_thisAdjusted, ___0_lightInstanceID, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.LightmapBakeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t LightmapperUtils_Extract_m936FF4E20F593777EABF072404B37D0C1EB3AF5D (int32_t ___0_baketype, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		int32_t L_0 = ___0_baketype;
		if ((((int32_t)L_0) == ((int32_t)4)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = ___0_baketype;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_000c;
		}
	}
	{
		G_B4_0 = 2;
		goto IL_000d;
	}

IL_000c:
	{
		G_B4_0 = 1;
	}

IL_000d:
	{
		G_B6_0 = G_B4_0;
		goto IL_0010;
	}

IL_000f:
	{
		G_B6_0 = 0;
	}

IL_0010:
	{
		V_0 = G_B6_0;
		goto IL_0013;
	}

IL_0013:
	{
		uint8_t L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::ExtractIndirect(UnityEngine.Light)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 LightmapperUtils_ExtractIndirect_m5776341FC44CD3BBB634828E668732C2A490BB78 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, const RuntimeMethod* method) 
{
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_0 = ___0_l;
		NullCheck(L_0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Light_get_color_mE7EB8F11BF394877B50A2F335627441889ADE536(L_0, NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_2 = ___0_l;
		NullCheck(L_2);
		float L_3;
		L_3 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_2, NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = ___0_l;
		NullCheck(L_4);
		float L_5;
		L_5 = Light_get_bounceIntensity_m535008F539A0EF22BBB831113EC34F20D6331FAE(L_4, NULL);
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_6;
		L_6 = LinearColor_Convert_m0E220E18AC54A8040BAD7FFEB0D81538639F9BBA(L_1, ((float)il2cpp_codegen_multiply(L_3, L_5)), NULL);
		V_0 = L_6;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_7 = V_0;
		V_1 = L_7;
		goto IL_001e;
	}

IL_001e:
	{
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_8 = V_1;
		return L_8;
	}
}
// System.Single UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::ExtractInnerCone(UnityEngine.Light)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LightmapperUtils_ExtractInnerCone_m8B2B838A7D49A49D64813232503D5C3CA8957C5E (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_0 = ___0_l;
		NullCheck(L_0);
		float L_1;
		L_1 = Light_get_spotAngle_m28B2CD7ADE25422693E7B1FA23E8615E9D7098FC(L_0, NULL);
		float L_2;
		L_2 = tanf(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_1, (0.5f))), (0.0174532924f))));
		float L_3;
		L_3 = atanf(((float)(((float)il2cpp_codegen_multiply(L_2, (46.0f)))/(64.0f))));
		V_0 = ((float)il2cpp_codegen_multiply((2.0f), L_3));
		goto IL_0032;
	}

IL_0032:
	{
		float L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Color UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::ExtractColorTemperature(UnityEngine.Light)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F LightmapperUtils_ExtractColorTemperature_mEA79654385184193BC807A191696BE14B04ABEAA (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t G_B3_0 = 0;
	{
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&V_0), (1.0f), (1.0f), (1.0f), NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_0 = ___0_l;
		NullCheck(L_0);
		bool L_1;
		L_1 = Light_get_useColorTemperature_mD76967684F904F6068B58EE78BD65001D8AFF3EF(L_0, NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		bool L_2;
		L_2 = GraphicsSettings_get_lightsUseLinearIntensity_m74D1A18837CB7E9D3A9BF20D44212F94DD1F67B9(NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0027;
	}

IL_0026:
	{
		G_B3_0 = 0;
	}

IL_0027:
	{
		V_1 = (bool)G_B3_0;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = ___0_l;
		NullCheck(L_4);
		float L_5;
		L_5 = Light_get_colorTemperature_mA5B7C9A5B315B27625764B8CE7EF5ADC06060B08(L_4, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Mathf_CorrelatedColorTemperatureToRGB_m595A3D1E887CD42FE21CD2893D8E377B3F44153C(L_5, NULL);
		V_0 = L_6;
	}

IL_0037:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = V_0;
		V_2 = L_7;
		goto IL_003b;
	}

IL_003b:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = V_2;
		return L_8;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::ApplyColorTemperature(UnityEngine.Color,UnityEngine.Experimental.GlobalIllumination.LinearColor&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_ApplyColorTemperature_m5286438BDED2F10292887505A26B1E33C714C325 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_cct, LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* ___1_lightColor, const RuntimeMethod* method) 
{
	{
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* L_0 = ___1_lightColor;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* L_1 = L_0;
		float L_2;
		L_2 = LinearColor_get_red_m376617B8E3156420835055189BB28D953FE46A2A(L_1, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___0_cct;
		float L_4 = L_3.___r_0;
		LinearColor_set_red_m0ACFCEDDD205A6F235BE95936816E92898B01B52(L_1, ((float)il2cpp_codegen_multiply(L_2, L_4)), NULL);
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* L_5 = ___1_lightColor;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* L_6 = L_5;
		float L_7;
		L_7 = LinearColor_get_green_mCCE90A662234EE3605368F3AEC14E51572665AE5(L_6, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___0_cct;
		float L_9 = L_8.___g_1;
		LinearColor_set_green_mBD9C7EA6415DC54B3F6B643C3CD02B71565F0694(L_6, ((float)il2cpp_codegen_multiply(L_7, L_9)), NULL);
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* L_10 = ___1_lightColor;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* L_11 = L_10;
		float L_12;
		L_12 = LinearColor_get_blue_mAFAEA5D5590DD14CFC48BC18DF4BFEBBDCB0A99A(L_11, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = ___0_cct;
		float L_14 = L_13.___b_2;
		LinearColor_set_blue_m3FEEAF946772BB177733B67D9DA4B72D84874375(L_11, ((float)il2cpp_codegen_multiply(L_12, L_14)), NULL);
		return;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.DirectionalLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_m44511C1C63663F51CD77ABF24CC4B34B9A826F0F (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* ___1_dir, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_0 = ___1_dir;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_1 = ___0_l;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_1, NULL);
		L_0->___instanceID_0 = L_2;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_3 = ___1_dir;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = ___0_l;
		NullCheck(L_4);
		LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90 L_5;
		L_5 = Light_get_bakingOutput_mF383DB97CFD32D65DA468329E18DD2DD61521CED(L_4, NULL);
		int32_t L_6 = L_5.___lightmapBakeType_2;
		uint8_t L_7;
		L_7 = LightmapperUtils_Extract_m936FF4E20F593777EABF072404B37D0C1EB3AF5D(L_6, NULL);
		L_3->___mode_2 = L_7;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_8 = ___1_dir;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_9 = ___0_l;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Light_get_shadows_m1A11721F202C27838A7A8ED72455E6A727CEE6C5(L_9, NULL);
		L_8->___shadow_1 = (bool)((!(((uint32_t)L_10) <= ((uint32_t)0)))? 1 : 0);
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_11 = ___1_dir;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_12 = ___0_l;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		L_11->___position_3 = L_14;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_15 = ___1_dir;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_16 = ___0_l;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		NullCheck(L_17);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_17, NULL);
		L_15->___orientation_4 = L_18;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_19 = ___0_l;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20;
		L_20 = LightmapperUtils_ExtractColorTemperature_mEA79654385184193BC807A191696BE14B04ABEAA(L_19, NULL);
		V_0 = L_20;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_21 = ___0_l;
		NullCheck(L_21);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22;
		L_22 = Light_get_color_mE7EB8F11BF394877B50A2F335627441889ADE536(L_21, NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_23 = ___0_l;
		NullCheck(L_23);
		float L_24;
		L_24 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_23, NULL);
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_25;
		L_25 = LinearColor_Convert_m0E220E18AC54A8040BAD7FFEB0D81538639F9BBA(L_22, L_24, NULL);
		V_1 = L_25;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_26 = ___0_l;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_27;
		L_27 = LightmapperUtils_ExtractIndirect_m5776341FC44CD3BBB634828E668732C2A490BB78(L_26, NULL);
		V_2 = L_27;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28 = V_0;
		LightmapperUtils_ApplyColorTemperature_m5286438BDED2F10292887505A26B1E33C714C325(L_28, (&V_1), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = V_0;
		LightmapperUtils_ApplyColorTemperature_m5286438BDED2F10292887505A26B1E33C714C325(L_29, (&V_2), NULL);
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_30 = ___1_dir;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_31 = V_1;
		L_30->___color_5 = L_31;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_32 = ___1_dir;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_33 = V_2;
		L_32->___indirectColor_6 = L_33;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_34 = ___1_dir;
		L_34->___penumbraWidthRadian_7 = (0.0f);
		return;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.PointLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_m47570BBE32168BBEA4C823D83C8A94A4CBF03AE2 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, PointLight_tD01A1428DC1015D98A527136034187F732433EA7* ___1_point, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_0 = ___1_point;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_1 = ___0_l;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_1, NULL);
		L_0->___instanceID_0 = L_2;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_3 = ___1_point;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = ___0_l;
		NullCheck(L_4);
		LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90 L_5;
		L_5 = Light_get_bakingOutput_mF383DB97CFD32D65DA468329E18DD2DD61521CED(L_4, NULL);
		int32_t L_6 = L_5.___lightmapBakeType_2;
		uint8_t L_7;
		L_7 = LightmapperUtils_Extract_m936FF4E20F593777EABF072404B37D0C1EB3AF5D(L_6, NULL);
		L_3->___mode_2 = L_7;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_8 = ___1_point;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_9 = ___0_l;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Light_get_shadows_m1A11721F202C27838A7A8ED72455E6A727CEE6C5(L_9, NULL);
		L_8->___shadow_1 = (bool)((!(((uint32_t)L_10) <= ((uint32_t)0)))? 1 : 0);
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_11 = ___1_point;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_12 = ___0_l;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		L_11->___position_3 = L_14;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_15 = ___1_point;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_16 = ___0_l;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		NullCheck(L_17);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_17, NULL);
		L_15->___orientation_4 = L_18;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_19 = ___0_l;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20;
		L_20 = LightmapperUtils_ExtractColorTemperature_mEA79654385184193BC807A191696BE14B04ABEAA(L_19, NULL);
		V_0 = L_20;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_21 = ___0_l;
		NullCheck(L_21);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22;
		L_22 = Light_get_color_mE7EB8F11BF394877B50A2F335627441889ADE536(L_21, NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_23 = ___0_l;
		NullCheck(L_23);
		float L_24;
		L_24 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_23, NULL);
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_25;
		L_25 = LinearColor_Convert_m0E220E18AC54A8040BAD7FFEB0D81538639F9BBA(L_22, L_24, NULL);
		V_1 = L_25;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_26 = ___0_l;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_27;
		L_27 = LightmapperUtils_ExtractIndirect_m5776341FC44CD3BBB634828E668732C2A490BB78(L_26, NULL);
		V_2 = L_27;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28 = V_0;
		LightmapperUtils_ApplyColorTemperature_m5286438BDED2F10292887505A26B1E33C714C325(L_28, (&V_1), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = V_0;
		LightmapperUtils_ApplyColorTemperature_m5286438BDED2F10292887505A26B1E33C714C325(L_29, (&V_2), NULL);
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_30 = ___1_point;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_31 = V_1;
		L_30->___color_5 = L_31;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_32 = ___1_point;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_33 = V_2;
		L_32->___indirectColor_6 = L_33;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_34 = ___1_point;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_35 = ___0_l;
		NullCheck(L_35);
		float L_36;
		L_36 = Light_get_range_m4156F07BA6CD289DA47080B590D632721D975A22(L_35, NULL);
		L_34->___range_7 = L_36;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_37 = ___1_point;
		L_37->___sphereRadius_8 = (0.0f);
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_38 = ___1_point;
		L_38->___falloff_9 = 3;
		return;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.SpotLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_m9F0C60CB137D268694B8CB324C73E799E1CE73F9 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* ___1_spot, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_0 = ___1_spot;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_1 = ___0_l;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_1, NULL);
		L_0->___instanceID_0 = L_2;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_3 = ___1_spot;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = ___0_l;
		NullCheck(L_4);
		LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90 L_5;
		L_5 = Light_get_bakingOutput_mF383DB97CFD32D65DA468329E18DD2DD61521CED(L_4, NULL);
		int32_t L_6 = L_5.___lightmapBakeType_2;
		uint8_t L_7;
		L_7 = LightmapperUtils_Extract_m936FF4E20F593777EABF072404B37D0C1EB3AF5D(L_6, NULL);
		L_3->___mode_2 = L_7;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_8 = ___1_spot;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_9 = ___0_l;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Light_get_shadows_m1A11721F202C27838A7A8ED72455E6A727CEE6C5(L_9, NULL);
		L_8->___shadow_1 = (bool)((!(((uint32_t)L_10) <= ((uint32_t)0)))? 1 : 0);
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_11 = ___1_spot;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_12 = ___0_l;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		L_11->___position_3 = L_14;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_15 = ___1_spot;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_16 = ___0_l;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		NullCheck(L_17);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_17, NULL);
		L_15->___orientation_4 = L_18;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_19 = ___0_l;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20;
		L_20 = LightmapperUtils_ExtractColorTemperature_mEA79654385184193BC807A191696BE14B04ABEAA(L_19, NULL);
		V_0 = L_20;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_21 = ___0_l;
		NullCheck(L_21);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22;
		L_22 = Light_get_color_mE7EB8F11BF394877B50A2F335627441889ADE536(L_21, NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_23 = ___0_l;
		NullCheck(L_23);
		float L_24;
		L_24 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_23, NULL);
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_25;
		L_25 = LinearColor_Convert_m0E220E18AC54A8040BAD7FFEB0D81538639F9BBA(L_22, L_24, NULL);
		V_1 = L_25;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_26 = ___0_l;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_27;
		L_27 = LightmapperUtils_ExtractIndirect_m5776341FC44CD3BBB634828E668732C2A490BB78(L_26, NULL);
		V_2 = L_27;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28 = V_0;
		LightmapperUtils_ApplyColorTemperature_m5286438BDED2F10292887505A26B1E33C714C325(L_28, (&V_1), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = V_0;
		LightmapperUtils_ApplyColorTemperature_m5286438BDED2F10292887505A26B1E33C714C325(L_29, (&V_2), NULL);
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_30 = ___1_spot;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_31 = V_1;
		L_30->___color_5 = L_31;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_32 = ___1_spot;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_33 = V_2;
		L_32->___indirectColor_6 = L_33;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_34 = ___1_spot;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_35 = ___0_l;
		NullCheck(L_35);
		float L_36;
		L_36 = Light_get_range_m4156F07BA6CD289DA47080B590D632721D975A22(L_35, NULL);
		L_34->___range_7 = L_36;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_37 = ___1_spot;
		L_37->___sphereRadius_8 = (0.0f);
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_38 = ___1_spot;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_39 = ___0_l;
		NullCheck(L_39);
		float L_40;
		L_40 = Light_get_spotAngle_m28B2CD7ADE25422693E7B1FA23E8615E9D7098FC(L_39, NULL);
		L_38->___coneAngle_9 = ((float)il2cpp_codegen_multiply(L_40, (0.0174532924f)));
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_41 = ___1_spot;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_42 = ___0_l;
		float L_43;
		L_43 = LightmapperUtils_ExtractInnerCone_m8B2B838A7D49A49D64813232503D5C3CA8957C5E(L_42, NULL);
		L_41->___innerConeAngle_10 = L_43;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_44 = ___1_spot;
		L_44->___falloff_11 = 3;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_45 = ___1_spot;
		L_45->___angularFalloff_12 = 0;
		return;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.RectangleLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_m3B3FFE050376D624857D5D67413BD532518949F1 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* ___1_rect, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_0 = ___1_rect;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_1 = ___0_l;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_1, NULL);
		L_0->___instanceID_0 = L_2;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_3 = ___1_rect;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = ___0_l;
		NullCheck(L_4);
		LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90 L_5;
		L_5 = Light_get_bakingOutput_mF383DB97CFD32D65DA468329E18DD2DD61521CED(L_4, NULL);
		int32_t L_6 = L_5.___lightmapBakeType_2;
		uint8_t L_7;
		L_7 = LightmapperUtils_Extract_m936FF4E20F593777EABF072404B37D0C1EB3AF5D(L_6, NULL);
		L_3->___mode_2 = L_7;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_8 = ___1_rect;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_9 = ___0_l;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Light_get_shadows_m1A11721F202C27838A7A8ED72455E6A727CEE6C5(L_9, NULL);
		L_8->___shadow_1 = (bool)((!(((uint32_t)L_10) <= ((uint32_t)0)))? 1 : 0);
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_11 = ___1_rect;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_12 = ___0_l;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		L_11->___position_3 = L_14;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_15 = ___1_rect;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_16 = ___0_l;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		NullCheck(L_17);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_17, NULL);
		L_15->___orientation_4 = L_18;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_19 = ___0_l;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20;
		L_20 = LightmapperUtils_ExtractColorTemperature_mEA79654385184193BC807A191696BE14B04ABEAA(L_19, NULL);
		V_0 = L_20;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_21 = ___0_l;
		NullCheck(L_21);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22;
		L_22 = Light_get_color_mE7EB8F11BF394877B50A2F335627441889ADE536(L_21, NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_23 = ___0_l;
		NullCheck(L_23);
		float L_24;
		L_24 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_23, NULL);
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_25;
		L_25 = LinearColor_Convert_m0E220E18AC54A8040BAD7FFEB0D81538639F9BBA(L_22, L_24, NULL);
		V_1 = L_25;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_26 = ___0_l;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_27;
		L_27 = LightmapperUtils_ExtractIndirect_m5776341FC44CD3BBB634828E668732C2A490BB78(L_26, NULL);
		V_2 = L_27;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28 = V_0;
		LightmapperUtils_ApplyColorTemperature_m5286438BDED2F10292887505A26B1E33C714C325(L_28, (&V_1), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = V_0;
		LightmapperUtils_ApplyColorTemperature_m5286438BDED2F10292887505A26B1E33C714C325(L_29, (&V_2), NULL);
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_30 = ___1_rect;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_31 = V_1;
		L_30->___color_5 = L_31;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_32 = ___1_rect;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_33 = V_2;
		L_32->___indirectColor_6 = L_33;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_34 = ___1_rect;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_35 = ___0_l;
		NullCheck(L_35);
		float L_36;
		L_36 = Light_get_range_m4156F07BA6CD289DA47080B590D632721D975A22(L_35, NULL);
		L_34->___range_7 = L_36;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_37 = ___1_rect;
		L_37->___width_8 = (0.0f);
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_38 = ___1_rect;
		L_38->___height_9 = (0.0f);
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_39 = ___1_rect;
		L_39->___falloff_10 = 3;
		return;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.DiscLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_mA319A386DA025BF5F0B7D9C398ACD3BE3AF65ABB (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* ___1_disc, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_0 = ___1_disc;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_1 = ___0_l;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_1, NULL);
		L_0->___instanceID_0 = L_2;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_3 = ___1_disc;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = ___0_l;
		NullCheck(L_4);
		LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90 L_5;
		L_5 = Light_get_bakingOutput_mF383DB97CFD32D65DA468329E18DD2DD61521CED(L_4, NULL);
		int32_t L_6 = L_5.___lightmapBakeType_2;
		uint8_t L_7;
		L_7 = LightmapperUtils_Extract_m936FF4E20F593777EABF072404B37D0C1EB3AF5D(L_6, NULL);
		L_3->___mode_2 = L_7;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_8 = ___1_disc;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_9 = ___0_l;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Light_get_shadows_m1A11721F202C27838A7A8ED72455E6A727CEE6C5(L_9, NULL);
		L_8->___shadow_1 = (bool)((!(((uint32_t)L_10) <= ((uint32_t)0)))? 1 : 0);
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_11 = ___1_disc;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_12 = ___0_l;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		L_11->___position_3 = L_14;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_15 = ___1_disc;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_16 = ___0_l;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		NullCheck(L_17);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_17, NULL);
		L_15->___orientation_4 = L_18;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_19 = ___0_l;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20;
		L_20 = LightmapperUtils_ExtractColorTemperature_mEA79654385184193BC807A191696BE14B04ABEAA(L_19, NULL);
		V_0 = L_20;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_21 = ___0_l;
		NullCheck(L_21);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22;
		L_22 = Light_get_color_mE7EB8F11BF394877B50A2F335627441889ADE536(L_21, NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_23 = ___0_l;
		NullCheck(L_23);
		float L_24;
		L_24 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_23, NULL);
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_25;
		L_25 = LinearColor_Convert_m0E220E18AC54A8040BAD7FFEB0D81538639F9BBA(L_22, L_24, NULL);
		V_1 = L_25;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_26 = ___0_l;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_27;
		L_27 = LightmapperUtils_ExtractIndirect_m5776341FC44CD3BBB634828E668732C2A490BB78(L_26, NULL);
		V_2 = L_27;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28 = V_0;
		LightmapperUtils_ApplyColorTemperature_m5286438BDED2F10292887505A26B1E33C714C325(L_28, (&V_1), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = V_0;
		LightmapperUtils_ApplyColorTemperature_m5286438BDED2F10292887505A26B1E33C714C325(L_29, (&V_2), NULL);
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_30 = ___1_disc;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_31 = V_1;
		L_30->___color_5 = L_31;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_32 = ___1_disc;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_33 = V_2;
		L_32->___indirectColor_6 = L_33;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_34 = ___1_disc;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_35 = ___0_l;
		NullCheck(L_35);
		float L_36;
		L_36 = Light_get_range_m4156F07BA6CD289DA47080B590D632721D975A22(L_35, NULL);
		L_34->___range_7 = L_36;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_37 = ___1_disc;
		L_37->___radius_8 = (0.0f);
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_38 = ___1_disc;
		L_38->___falloff_9 = 3;
		return;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_mF6521637E4DD97C8BBD71696B5A61C7B7B8C83D4 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* G_B2_0 = NULL;
	Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* G_B3_1 = NULL;
	Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* G_B5_0 = NULL;
	Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* G_B4_0 = NULL;
	Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* G_B6_0 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B7_0;
	memset((&G_B7_0), 0, sizeof(G_B7_0));
	Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* G_B7_1 = NULL;
	{
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_0 = ___1_cookie;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_1 = ___0_l;
		NullCheck(L_1);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_2;
		L_2 = Light_get_cookie_m44A0C4B92F6CD6F2F8536A91C51B77FEEF59715E(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		G_B1_0 = L_0;
		if (L_3)
		{
			G_B2_0 = L_0;
			goto IL_0012;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_001d;
	}

IL_0012:
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = ___0_l;
		NullCheck(L_4);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_5;
		L_5 = Light_get_cookie_m44A0C4B92F6CD6F2F8536A91C51B77FEEF59715E(L_4, NULL);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_5, NULL);
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
	}

IL_001d:
	{
		G_B3_1->___instanceID_0 = G_B3_0;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_7 = ___1_cookie;
		L_7->___scale_1 = (1.0f);
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_8 = ___1_cookie;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_9 = ___0_l;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Light_get_type_m0D12CD1E54E010DC401F7371731D593DEF62D1C7(L_9, NULL);
		G_B4_0 = L_8;
		if ((!(((uint32_t)L_10) == ((uint32_t)1))))
		{
			G_B5_0 = L_8;
			goto IL_0044;
		}
	}
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_11 = ___0_l;
		NullCheck(L_11);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_12;
		L_12 = Light_get_cookie_m44A0C4B92F6CD6F2F8536A91C51B77FEEF59715E(L_11, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_12, NULL);
		G_B5_0 = G_B4_0;
		if (L_13)
		{
			G_B6_0 = G_B4_0;
			goto IL_0055;
		}
	}

IL_0044:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_14), (1.0f), (1.0f), /*hidden argument*/NULL);
		G_B7_0 = L_14;
		G_B7_1 = G_B5_0;
		goto IL_0066;
	}

IL_0055:
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_15 = ___0_l;
		NullCheck(L_15);
		float L_16;
		L_16 = Light_get_cookieSize_m1BB417985207915659198F63CF825A23A8ED30B0(L_15, NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_17 = ___0_l;
		NullCheck(L_17);
		float L_18;
		L_18 = Light_get_cookieSize_m1BB417985207915659198F63CF825A23A8ED30B0(L_17, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_19), L_16, L_18, /*hidden argument*/NULL);
		G_B7_0 = L_19;
		G_B7_1 = G_B6_0;
	}

IL_0066:
	{
		G_B7_1->___sizes_2 = G_B7_0;
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
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping::SetDelegate(UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lightmapping_SetDelegate_m8BEF0FE5035180FF94119860CD15BBE2BE90129D (RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* ___0_del, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* G_B3_0 = NULL;
	{
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* L_0 = ___0_del;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* L_1 = ((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_DefaultDelegate_0;
		G_B3_0 = L_1;
		goto IL_000c;
	}

IL_000b:
	{
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* L_2 = ___0_del;
		G_B3_0 = L_2;
	}

IL_000c:
	{
		il2cpp_codegen_runtime_class_init_inline(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_RequestLightsDelegate_1 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_RequestLightsDelegate_1), (void*)G_B3_0);
		return;
	}
}
// UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate UnityEngine.Experimental.GlobalIllumination.Lightmapping::GetDelegate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* Lightmapping_GetDelegate_m073E4FFA73169C20833F77984024BD328003258A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* L_0 = ((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_RequestLightsDelegate_1;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping::ResetDelegate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lightmapping_ResetDelegate_m8D4AAF4F08C8697953B3CB110DD4E6CD130371D9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* L_0 = ((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_DefaultDelegate_0;
		((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_RequestLightsDelegate_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_RequestLightsDelegate_1), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping::RequestLights(UnityEngine.Light[],System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lightmapping_RequestLights_m1967533AFFB328B3386E7E0D1EC414105E509B80 (LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___0_lights, intptr_t ___1_outLightsPtr, int32_t ___2_outLightsCount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mC82DECEB698D4AABF41EE9DF0E1FC00C8803BD3A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___1_outLightsPtr;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		int32_t L_2 = ___2_outLightsCount;
		NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D L_3;
		L_3 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mC82DECEB698D4AABF41EE9DF0E1FC00C8803BD3A(L_1, L_2, 1, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mC82DECEB698D4AABF41EE9DF0E1FC00C8803BD3A_RuntimeMethod_var);
		V_0 = L_3;
		il2cpp_codegen_runtime_class_init_inline(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* L_4 = ((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_RequestLightsDelegate_1;
		LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* L_5 = ___0_lights;
		NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D L_6 = V_0;
		NullCheck(L_4);
		RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_inline(L_4, L_5, L_6, NULL);
		return;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lightmapping__cctor_m6AEDE40A651280EC1A7944E9CFD161AFB78802B3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__7_0_m3DE1C9F0E58017EDCEAFA5FEC90132A153B492F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_il2cpp_TypeInfo_var);
		U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4* L_0 = ((U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* L_1 = (RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB*)il2cpp_codegen_object_new(RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		RequestLightsDelegate__ctor_mFFCE8681C67A169A04BEA2201C393E1FC84CAB7D(L_1, L_0, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__7_0_m3DE1C9F0E58017EDCEAFA5FEC90132A153B492F6_RuntimeMethod_var), NULL);
		((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_DefaultDelegate_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_DefaultDelegate_0), (void*)L_1);
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* L_2 = ((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_DefaultDelegate_0;
		((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_RequestLightsDelegate_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_RequestLightsDelegate_1), (void*)L_2);
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
void RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_Multicast(RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* __this, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___0_requests, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D ___1_lightsOutput, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* currentDelegate = reinterpret_cast<RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990*, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_requests, ___1_lightsOutput, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_OpenInst(RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* __this, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___0_requests, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D ___1_lightsOutput, const RuntimeMethod* method)
{
	NullCheck(___0_requests);
	typedef void (*FunctionPointerType) (LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990*, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_requests, ___1_lightsOutput, method);
}
void RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_OpenStatic(RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* __this, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___0_requests, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D ___1_lightsOutput, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990*, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_requests, ___1_lightsOutput, method);
}
void RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_OpenStaticInvoker(RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* __this, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___0_requests, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D ___1_lightsOutput, const RuntimeMethod* method)
{
	InvokerActionInvoker2< LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990*, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_requests, ___1_lightsOutput);
}
void RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_ClosedStaticInvoker(RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* __this, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___0_requests, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D ___1_lightsOutput, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990*, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_requests, ___1_lightsOutput);
}
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestLightsDelegate__ctor_mFFCE8681C67A169A04BEA2201C393E1FC84CAB7D (RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_Multicast;
}
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate::Invoke(UnityEngine.Light[],Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E (RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* __this, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___0_requests, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D ___1_lightsOutput, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990*, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_requests, ___1_lightsOutput, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m766681161796D9912477BF60542C4DD1EB0D2096 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4* L_0 = (U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4*)il2cpp_codegen_object_new(U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m3FBD26AEC83F79DACB13A7EF6FE5F539A71F0902(L_0, NULL);
		((U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3FBD26AEC83F79DACB13A7EF6FE5F539A71F0902 (U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c::<.cctor>b__7_0(UnityEngine.Light[],Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__7_0_m3DE1C9F0E58017EDCEAFA5FEC90132A153B492F6 (U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4* __this, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___0_requests, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D ___1_lightsOutput, const RuntimeMethod* method) 
{
	DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB V_0;
	memset((&V_0), 0, sizeof(V_0));
	PointLight_tD01A1428DC1015D98A527136034187F732433EA7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698 V_3;
	memset((&V_3), 0, sizeof(V_3));
	DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E V_4;
	memset((&V_4), 0, sizeof(V_4));
	Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0 V_5;
	memset((&V_5), 0, sizeof(V_5));
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	bool V_11 = false;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB));
		il2cpp_codegen_initobj((&V_1), sizeof(PointLight_tD01A1428DC1015D98A527136034187F732433EA7));
		il2cpp_codegen_initobj((&V_2), sizeof(SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869));
		il2cpp_codegen_initobj((&V_3), sizeof(RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698));
		il2cpp_codegen_initobj((&V_4), sizeof(DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E));
		il2cpp_codegen_initobj((&V_5), sizeof(Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0));
		il2cpp_codegen_initobj((&V_6), sizeof(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21));
		V_7 = 0;
		goto IL_0146;
	}

IL_0041:
	{
		LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* L_0 = ___0_requests;
		int32_t L_1 = V_7;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_8 = L_3;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = V_8;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Light_get_type_m0D12CD1E54E010DC401F7371731D593DEF62D1C7(L_4, NULL);
		V_10 = L_5;
		int32_t L_6 = V_10;
		V_9 = L_6;
		int32_t L_7 = V_9;
		switch (L_7)
		{
			case 0:
			{
				goto IL_00bc;
			}
			case 1:
			{
				goto IL_0075;
			}
			case 2:
			{
				goto IL_009a;
			}
			case 3:
			{
				goto IL_00de;
			}
			case 4:
			{
				goto IL_0100;
			}
		}
	}
	{
		goto IL_0122;
	}

IL_0075:
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_8 = V_8;
		LightmapperUtils_Extract_m44511C1C63663F51CD77ABF24CC4B34B9A826F0F(L_8, (&V_0), NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_9 = V_8;
		LightmapperUtils_Extract_mF6521637E4DD97C8BBD71696B5A61C7B7B8C83D4(L_9, (&V_5), NULL);
		LightDataGI_Init_m112DEBB76EC57AC52E6384C97A3E8B2EAA867207((&V_6), (&V_0), (&V_5), NULL);
		goto IL_0133;
	}

IL_009a:
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_10 = V_8;
		LightmapperUtils_Extract_m47570BBE32168BBEA4C823D83C8A94A4CBF03AE2(L_10, (&V_1), NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_11 = V_8;
		LightmapperUtils_Extract_mF6521637E4DD97C8BBD71696B5A61C7B7B8C83D4(L_11, (&V_5), NULL);
		LightDataGI_Init_mACE06E00CC639CA89F3847E9DB55FD0F00812A7A((&V_6), (&V_1), (&V_5), NULL);
		goto IL_0133;
	}

IL_00bc:
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_12 = V_8;
		LightmapperUtils_Extract_m9F0C60CB137D268694B8CB324C73E799E1CE73F9(L_12, (&V_2), NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_13 = V_8;
		LightmapperUtils_Extract_mF6521637E4DD97C8BBD71696B5A61C7B7B8C83D4(L_13, (&V_5), NULL);
		LightDataGI_Init_m0A999D118CDCBDA99B9E24231ED057D943C9C67B((&V_6), (&V_2), (&V_5), NULL);
		goto IL_0133;
	}

IL_00de:
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_14 = V_8;
		LightmapperUtils_Extract_m3B3FFE050376D624857D5D67413BD532518949F1(L_14, (&V_3), NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_15 = V_8;
		LightmapperUtils_Extract_mF6521637E4DD97C8BBD71696B5A61C7B7B8C83D4(L_15, (&V_5), NULL);
		LightDataGI_Init_mDC887CA8191C6CADE1DB585D7FEB46B080B25038((&V_6), (&V_3), (&V_5), NULL);
		goto IL_0133;
	}

IL_0100:
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_16 = V_8;
		LightmapperUtils_Extract_mA319A386DA025BF5F0B7D9C398ACD3BE3AF65ABB(L_16, (&V_4), NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_17 = V_8;
		LightmapperUtils_Extract_mF6521637E4DD97C8BBD71696B5A61C7B7B8C83D4(L_17, (&V_5), NULL);
		LightDataGI_Init_mB2D1C73EDFEA6815E39A0FE3ED2F7BF9A7117632((&V_6), (&V_4), (&V_5), NULL);
		goto IL_0133;
	}

IL_0122:
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_18 = V_8;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_18, NULL);
		LightDataGI_InitNoBake_mBDF2EFB22D4BEE63B6F25F4EE9F1522D2866ED43((&V_6), L_19, NULL);
		goto IL_0133;
	}

IL_0133:
	{
		int32_t L_20 = V_7;
		LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 L_21 = V_6;
		IL2CPP_NATIVEARRAY_SET_ITEM(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21, ((&___1_lightsOutput))->___m_Buffer_0, L_20, (L_21));
		int32_t L_22 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0146:
	{
		int32_t L_23 = V_7;
		LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* L_24 = ___0_requests;
		NullCheck(L_24);
		V_11 = (bool)((((int32_t)L_23) < ((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length))))? 1 : 0);
		bool L_25 = V_11;
		if (L_25)
		{
			goto IL_0041;
		}
	}
	{
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
// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Playables.CameraPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 CameraPlayable_GetHandle_mA04469CA50B43AF6219F9967B8AEB310CB5455BD (CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 CameraPlayable_GetHandle_mA04469CA50B43AF6219F9967B8AEB310CB5455BD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = CameraPlayable_GetHandle_mA04469CA50B43AF6219F9967B8AEB310CB5455BD(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Experimental.Playables.CameraPlayable::Equals(UnityEngine.Experimental.Playables.CameraPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraPlayable_Equals_mD0FA195F3EA6511043E8F0AA1680CEB7E0E2E2CF (CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1* __this, CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1 ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = CameraPlayable_GetHandle_mA04469CA50B43AF6219F9967B8AEB310CB5455BD(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = CameraPlayable_GetHandle_mA04469CA50B43AF6219F9967B8AEB310CB5455BD((&___0_other), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool CameraPlayable_Equals_mD0FA195F3EA6511043E8F0AA1680CEB7E0E2E2CF_AdjustorThunk (RuntimeObject* __this, CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1 ___0_other, const RuntimeMethod* method)
{
	CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1*>(__this + _offset);
	bool _returnValue;
	_returnValue = CameraPlayable_Equals_mD0FA195F3EA6511043E8F0AA1680CEB7E0E2E2CF(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Playables.MaterialEffectPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 MaterialEffectPlayable_GetHandle_m748319E116317E9ADD1EA36A4EDA488338471058 (MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 MaterialEffectPlayable_GetHandle_m748319E116317E9ADD1EA36A4EDA488338471058_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = MaterialEffectPlayable_GetHandle_m748319E116317E9ADD1EA36A4EDA488338471058(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Experimental.Playables.MaterialEffectPlayable::Equals(UnityEngine.Experimental.Playables.MaterialEffectPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MaterialEffectPlayable_Equals_mC55640B5D29F90360F9743549FABD43C5AA320EC (MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504* __this, MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504 ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = MaterialEffectPlayable_GetHandle_m748319E116317E9ADD1EA36A4EDA488338471058(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = MaterialEffectPlayable_GetHandle_m748319E116317E9ADD1EA36A4EDA488338471058((&___0_other), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool MaterialEffectPlayable_Equals_mC55640B5D29F90360F9743549FABD43C5AA320EC_AdjustorThunk (RuntimeObject* __this, MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504 ___0_other, const RuntimeMethod* method)
{
	MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504*>(__this + _offset);
	bool _returnValue;
	_returnValue = MaterialEffectPlayable_Equals_mC55640B5D29F90360F9743549FABD43C5AA320EC(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Playables.TextureMixerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 TextureMixerPlayable_GetHandle_mB75CF651C6BDDF347ED6938D0F1DE4BED92BB7CD (TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 TextureMixerPlayable_GetHandle_mB75CF651C6BDDF347ED6938D0F1DE4BED92BB7CD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = TextureMixerPlayable_GetHandle_mB75CF651C6BDDF347ED6938D0F1DE4BED92BB7CD(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Experimental.Playables.TextureMixerPlayable::Equals(UnityEngine.Experimental.Playables.TextureMixerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextureMixerPlayable_Equals_m6838329B39779020FC3309B7406B8A0418F44FE7 (TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445* __this, TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445 ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = TextureMixerPlayable_GetHandle_mB75CF651C6BDDF347ED6938D0F1DE4BED92BB7CD(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = TextureMixerPlayable_GetHandle_mB75CF651C6BDDF347ED6938D0F1DE4BED92BB7CD((&___0_other), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool TextureMixerPlayable_Equals_m6838329B39779020FC3309B7406B8A0418F44FE7_AdjustorThunk (RuntimeObject* __this, TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445 ___0_other, const RuntimeMethod* method)
{
	TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445*>(__this + _offset);
	bool _returnValue;
	_returnValue = TextureMixerPlayable_Equals_m6838329B39779020FC3309B7406B8A0418F44FE7(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Experimental.Playables.TexturePlayableOutput::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 TexturePlayableOutput_GetHandle_m482C2E6F3FB849142FA7936B1B6A0B9B072A1899 (TexturePlayableOutput_t289BEACD45B8E5183E91E8021EBD353110F5BC4B* __this, const RuntimeMethod* method) 
{
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 TexturePlayableOutput_GetHandle_m482C2E6F3FB849142FA7936B1B6A0B9B072A1899_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TexturePlayableOutput_t289BEACD45B8E5183E91E8021EBD353110F5BC4B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TexturePlayableOutput_t289BEACD45B8E5183E91E8021EBD353110F5BC4B*>(__this + _offset);
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 _returnValue;
	_returnValue = TexturePlayableOutput_GetHandle_m482C2E6F3FB849142FA7936B1B6A0B9B072A1899(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem::TickRealtimeProbes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BuiltinRuntimeReflectionSystem_TickRealtimeProbes_m0CD6423541B0FCB022D55498C348A013E06E5F39 (BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0;
		L_0 = BuiltinRuntimeReflectionSystem_BuiltinUpdate_m833B3EB0E69D46FDAB5A890FECB417C4D9D5D941(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuiltinRuntimeReflectionSystem_Dispose_m2CDBD30196F65463B8E86AC97DA2370A4D68762D (BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE* __this, const RuntimeMethod* method) 
{
	{
		BuiltinRuntimeReflectionSystem_Dispose_m6B57B7E11B7A095063597FBCB0C6EE7036003F6B(__this, (bool)1, NULL);
		return;
	}
}
// System.Void UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuiltinRuntimeReflectionSystem_Dispose_m6B57B7E11B7A095063597FBCB0C6EE7036003F6B (BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem::BuiltinUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BuiltinRuntimeReflectionSystem_BuiltinUpdate_m833B3EB0E69D46FDAB5A890FECB417C4D9D5D941 (const RuntimeMethod* method) 
{
	typedef bool (*BuiltinRuntimeReflectionSystem_BuiltinUpdate_m833B3EB0E69D46FDAB5A890FECB417C4D9D5D941_ftn) ();
	static BuiltinRuntimeReflectionSystem_BuiltinUpdate_m833B3EB0E69D46FDAB5A890FECB417C4D9D5D941_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (BuiltinRuntimeReflectionSystem_BuiltinUpdate_m833B3EB0E69D46FDAB5A890FECB417C4D9D5D941_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem::BuiltinUpdate()");
	bool icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem::Internal_BuiltinRuntimeReflectionSystem_New()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE* BuiltinRuntimeReflectionSystem_Internal_BuiltinRuntimeReflectionSystem_New_mA100197AC7CA73600AAD55A67E43039EEF8D2C27 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE* V_0 = NULL;
	{
		BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE* L_0 = (BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE*)il2cpp_codegen_object_new(BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BuiltinRuntimeReflectionSystem__ctor_mC85D8357332DEC8325E27837409E463208ACE0E5(L_0, NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuiltinRuntimeReflectionSystem__ctor_mC85D8357332DEC8325E27837409E463208ACE0E5 (BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings::set_Internal_ScriptableRuntimeReflectionSystemSettings_system(UnityEngine.Experimental.Rendering.IScriptableRuntimeReflectionSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRuntimeReflectionSystemSettings_set_Internal_ScriptableRuntimeReflectionSystemSettings_system_mA216659518CF27854FB65C184B10197AB74AFBF7 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var);
		ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* L_0 = ((ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_StaticFields*)il2cpp_codegen_static_fields_for(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var))->___s_Instance_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ScriptableRuntimeReflectionSystemWrapper_get_implementation_m1AFA781CCFEFE334D758AC43A9FAB9E0FB0F5C40_inline(L_0, NULL);
		RuntimeObject* L_2 = ___0_value;
		V_0 = (bool)((((int32_t)((((RuntimeObject*)(RuntimeObject*)L_1) == ((RuntimeObject*)(RuntimeObject*)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var);
		ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* L_4 = ((ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_StaticFields*)il2cpp_codegen_static_fields_for(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var))->___s_Instance_0;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = ScriptableRuntimeReflectionSystemWrapper_get_implementation_m1AFA781CCFEFE334D758AC43A9FAB9E0FB0F5C40_inline(L_4, NULL);
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_5) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var);
		ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* L_7 = ((ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_StaticFields*)il2cpp_codegen_static_fields_for(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var))->___s_Instance_0;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = ScriptableRuntimeReflectionSystemWrapper_get_implementation_m1AFA781CCFEFE334D758AC43A9FAB9E0FB0F5C40_inline(L_7, NULL);
		NullCheck(L_8);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
	}

IL_0037:
	{
	}

IL_0038:
	{
		il2cpp_codegen_runtime_class_init_inline(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var);
		ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* L_9 = ((ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_StaticFields*)il2cpp_codegen_static_fields_for(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var))->___s_Instance_0;
		RuntimeObject* L_10 = ___0_value;
		NullCheck(L_9);
		ScriptableRuntimeReflectionSystemWrapper_set_implementation_mF1552E093F0F437DF191D7CBB0CF7981C36744D8_inline(L_9, L_10, NULL);
		return;
	}
}
// UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings::get_Internal_ScriptableRuntimeReflectionSystemSettings_instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* ScriptableRuntimeReflectionSystemSettings_get_Internal_ScriptableRuntimeReflectionSystemSettings_instance_mED3776EB64E9E6BF61705125F20F6893C2098E03 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var);
		ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* L_0 = ((ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_StaticFields*)il2cpp_codegen_static_fields_for(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var))->___s_Instance_0;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings::ScriptingDirtyReflectionSystemInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRuntimeReflectionSystemSettings_ScriptingDirtyReflectionSystemInstance_mCDA2744C4AD02637B40F84222084C18F0FC369EB (const RuntimeMethod* method) 
{
	typedef void (*ScriptableRuntimeReflectionSystemSettings_ScriptingDirtyReflectionSystemInstance_mCDA2744C4AD02637B40F84222084C18F0FC369EB_ftn) ();
	static ScriptableRuntimeReflectionSystemSettings_ScriptingDirtyReflectionSystemInstance_mCDA2744C4AD02637B40F84222084C18F0FC369EB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ScriptableRuntimeReflectionSystemSettings_ScriptingDirtyReflectionSystemInstance_mCDA2744C4AD02637B40F84222084C18F0FC369EB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings::ScriptingDirtyReflectionSystemInstance()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRuntimeReflectionSystemSettings__cctor_m8225B0B8673C3B8B4529F9BFDAC91D417F1DB083 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* L_0 = (ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924*)il2cpp_codegen_object_new(ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ScriptableRuntimeReflectionSystemWrapper__ctor_mCF4DB3AC3AEB1FC08CB03DD0C1733E9BDED4DF8D(L_0, NULL);
		((ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_StaticFields*)il2cpp_codegen_static_fields_for(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var))->___s_Instance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_StaticFields*)il2cpp_codegen_static_fields_for(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var))->___s_Instance_0), (void*)L_0);
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
// UnityEngine.Experimental.Rendering.IScriptableRuntimeReflectionSystem UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper::get_implementation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ScriptableRuntimeReflectionSystemWrapper_get_implementation_m1AFA781CCFEFE334D758AC43A9FAB9E0FB0F5C40 (ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CimplementationU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper::set_implementation(UnityEngine.Experimental.Rendering.IScriptableRuntimeReflectionSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRuntimeReflectionSystemWrapper_set_implementation_mF1552E093F0F437DF191D7CBB0CF7981C36744D8 (ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CimplementationU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CimplementationU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper::Internal_ScriptableRuntimeReflectionSystemWrapper_TickRealtimeProbes(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRuntimeReflectionSystemWrapper_Internal_ScriptableRuntimeReflectionSystemWrapper_TickRealtimeProbes_mDC08C9639CAF2D13623E82B3A9C51689D2FED2B3 (ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* __this, bool* ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IScriptableRuntimeReflectionSystem_t0E6ED00D872A0EFCF87A494C5C893AE9FBE560AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool* G_B2_0 = NULL;
	bool* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	bool* G_B3_1 = NULL;
	{
		bool* L_0 = ___0_result;
		RuntimeObject* L_1;
		L_1 = ScriptableRuntimeReflectionSystemWrapper_get_implementation_m1AFA781CCFEFE334D758AC43A9FAB9E0FB0F5C40_inline(__this, NULL);
		G_B1_0 = L_0;
		if (!L_1)
		{
			G_B2_0 = L_0;
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_2;
		L_2 = ScriptableRuntimeReflectionSystemWrapper_get_implementation_m1AFA781CCFEFE334D758AC43A9FAB9E0FB0F5C40_inline(__this, NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean UnityEngine.Experimental.Rendering.IScriptableRuntimeReflectionSystem::TickRealtimeProbes() */, IScriptableRuntimeReflectionSystem_t0E6ED00D872A0EFCF87A494C5C893AE9FBE560AD_il2cpp_TypeInfo_var, L_2);
		G_B3_0 = ((int32_t)(L_3));
		G_B3_1 = G_B1_0;
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_0018:
	{
		*((int8_t*)G_B3_1) = (int8_t)G_B3_0;
		return;
	}
}
// System.Void UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRuntimeReflectionSystemWrapper__ctor_mCF4DB3AC3AEB1FC08CB03DD0C1733E9BDED4DF8D (ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* __this, const RuntimeMethod* method) 
{
	{
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
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat(UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetGraphicsFormat_mE38154E9B9C810EDAF2FAD3E1F1CD856FFC13F3C (int32_t ___0_format, bool ___1_isSRGB, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_format;
		bool L_1 = ___1_isSRGB;
		il2cpp_codegen_runtime_class_init_inline(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = GraphicsFormatUtility_GetGraphicsFormat_Native_TextureFormat_m4A193B562F6F81CE2C1C755B26B67564C2F65319(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat_Native_TextureFormat(UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetGraphicsFormat_Native_TextureFormat_m4A193B562F6F81CE2C1C755B26B67564C2F65319 (int32_t ___0_format, bool ___1_isSRGB, const RuntimeMethod* method) 
{
	typedef int32_t (*GraphicsFormatUtility_GetGraphicsFormat_Native_TextureFormat_m4A193B562F6F81CE2C1C755B26B67564C2F65319_ftn) (int32_t, bool);
	static GraphicsFormatUtility_GetGraphicsFormat_Native_TextureFormat_m4A193B562F6F81CE2C1C755B26B67564C2F65319_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_GetGraphicsFormat_Native_TextureFormat_m4A193B562F6F81CE2C1C755B26B67564C2F65319_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat_Native_TextureFormat(UnityEngine.TextureFormat,System.Boolean)");
	int32_t icallRetVal = _il2cpp_icall_func(___0_format, ___1_isSRGB);
	return icallRetVal;
}
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat(UnityEngine.RenderTextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetGraphicsFormat_mB9E291EB1EC96594074112E54A7B9CAC20FC7BFA (int32_t ___0_format, bool ___1_isSRGB, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_format;
		bool L_1 = ___1_isSRGB;
		il2cpp_codegen_runtime_class_init_inline(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = GraphicsFormatUtility_GetGraphicsFormat_Native_RenderTextureFormat_m27057B9C12BF2ADFF0C8A39BD7D03A9615304942(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat_Native_RenderTextureFormat(UnityEngine.RenderTextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetGraphicsFormat_Native_RenderTextureFormat_m27057B9C12BF2ADFF0C8A39BD7D03A9615304942 (int32_t ___0_format, bool ___1_isSRGB, const RuntimeMethod* method) 
{
	typedef int32_t (*GraphicsFormatUtility_GetGraphicsFormat_Native_RenderTextureFormat_m27057B9C12BF2ADFF0C8A39BD7D03A9615304942_ftn) (int32_t, bool);
	static GraphicsFormatUtility_GetGraphicsFormat_Native_RenderTextureFormat_m27057B9C12BF2ADFF0C8A39BD7D03A9615304942_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_GetGraphicsFormat_Native_RenderTextureFormat_m27057B9C12BF2ADFF0C8A39BD7D03A9615304942_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat_Native_RenderTextureFormat(UnityEngine.RenderTextureFormat,System.Boolean)");
	int32_t icallRetVal = _il2cpp_icall_func(___0_format, ___1_isSRGB);
	return icallRetVal;
}
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat(UnityEngine.RenderTextureFormat,UnityEngine.RenderTextureReadWrite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetGraphicsFormat_m3DD7EAFBC4F60FA47453B93DAA7B392AEC818BD5 (int32_t ___0_format, int32_t ___1_readWrite, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0;
		L_0 = QualitySettings_get_activeColorSpace_m4F47784E7B0FE0A5497C8BAB9CA86BD576FB92F9(NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		int32_t L_1 = ___1_readWrite;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = ___1_readWrite;
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)2))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		bool L_3 = V_0;
		G_B3_0 = ((int32_t)(L_3));
	}

IL_0014:
	{
		V_1 = (bool)G_B3_0;
		int32_t L_4 = ___0_format;
		bool L_5 = V_1;
		il2cpp_codegen_runtime_class_init_inline(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = GraphicsFormatUtility_GetGraphicsFormat_mB9E291EB1EC96594074112E54A7B9CAC20FC7BFA(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_001f;
	}

IL_001f:
	{
		int32_t L_7 = V_2;
		return L_7;
	}
}
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetDepthStencilFormatFromBitsLegacy_Native(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetDepthStencilFormatFromBitsLegacy_Native_m6C8C3D62D09CAA5333599E53ED45700AEE76E06B (int32_t ___0_minimumDepthBits, const RuntimeMethod* method) 
{
	typedef int32_t (*GraphicsFormatUtility_GetDepthStencilFormatFromBitsLegacy_Native_m6C8C3D62D09CAA5333599E53ED45700AEE76E06B_ftn) (int32_t);
	static GraphicsFormatUtility_GetDepthStencilFormatFromBitsLegacy_Native_m6C8C3D62D09CAA5333599E53ED45700AEE76E06B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_GetDepthStencilFormatFromBitsLegacy_Native_m6C8C3D62D09CAA5333599E53ED45700AEE76E06B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetDepthStencilFormatFromBitsLegacy_Native(System.Int32)");
	int32_t icallRetVal = _il2cpp_icall_func(___0_minimumDepthBits);
	return icallRetVal;
}
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetDepthStencilFormat(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetDepthStencilFormat_m76EEE7255F874FD3AC8E149830EE48F345DF8425 (int32_t ___0_minimumDepthBits, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_minimumDepthBits;
		il2cpp_codegen_runtime_class_init_inline(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = GraphicsFormatUtility_GetDepthStencilFormatFromBitsLegacy_Native_m6C8C3D62D09CAA5333599E53ED45700AEE76E06B(L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetDepthBits(UnityEngine.Experimental.Rendering.GraphicsFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetDepthBits_mA3ED2245DC3C1C593668C2F152A0DA42052CEE94 (int32_t ___0_format, const RuntimeMethod* method) 
{
	typedef int32_t (*GraphicsFormatUtility_GetDepthBits_mA3ED2245DC3C1C593668C2F152A0DA42052CEE94_ftn) (int32_t);
	static GraphicsFormatUtility_GetDepthBits_mA3ED2245DC3C1C593668C2F152A0DA42052CEE94_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_GetDepthBits_mA3ED2245DC3C1C593668C2F152A0DA42052CEE94_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetDepthBits(UnityEngine.Experimental.Rendering.GraphicsFormat)");
	int32_t icallRetVal = _il2cpp_icall_func(___0_format);
	return icallRetVal;
}
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetDepthStencilFormat(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetDepthStencilFormat_m963D66601AD1C71D4E90483076BCDB175F958321 (int32_t ___0_minimumDepthBits, int32_t ___1_minimumStencilBits, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	bool V_12 = false;
	bool V_13 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* G_B24_0 = NULL;
	{
		int32_t L_0 = ___0_minimumDepthBits;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		int32_t L_1 = ___1_minimumStencilBits;
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_000b;
	}

IL_000a:
	{
		G_B3_0 = 0;
	}

IL_000b:
	{
		V_2 = (bool)G_B3_0;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		V_3 = 0;
		goto IL_00fe;
	}

IL_0016:
	{
		int32_t L_3 = ___0_minimumDepthBits;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_4 = ___1_minimumStencilBits;
		G_B8_0 = ((((int32_t)L_4) < ((int32_t)0))? 1 : 0);
		goto IL_0021;
	}

IL_0020:
	{
		G_B8_0 = 1;
	}

IL_0021:
	{
		V_4 = (bool)G_B8_0;
		bool L_5 = V_4;
		if (!L_5)
		{
			goto IL_0032;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral132E80EAA09197CF3EE157E8CAFE6EC4A4EE7426)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GraphicsFormatUtility_GetDepthStencilFormat_m963D66601AD1C71D4E90483076BCDB175F958321_RuntimeMethod_var)));
	}

IL_0032:
	{
		int32_t L_7 = ___0_minimumDepthBits;
		V_5 = (bool)((((int32_t)L_7) > ((int32_t)((int32_t)32)))? 1 : 0);
		bool L_8 = V_5;
		if (!L_8)
		{
			goto IL_0048;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFB7177E6394CDB63713D04A0A8E4B643EB7A825D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GraphicsFormatUtility_GetDepthStencilFormat_m963D66601AD1C71D4E90483076BCDB175F958321_RuntimeMethod_var)));
	}

IL_0048:
	{
		int32_t L_10 = ___1_minimumStencilBits;
		V_6 = (bool)((((int32_t)L_10) > ((int32_t)8))? 1 : 0);
		bool L_11 = V_6;
		if (!L_11)
		{
			goto IL_005d;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_12 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1D3707F2DB6891EF40E60A4CFB5A9CBEB40B55F2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GraphicsFormatUtility_GetDepthStencilFormat_m963D66601AD1C71D4E90483076BCDB175F958321_RuntimeMethod_var)));
	}

IL_005d:
	{
		int32_t L_13 = ___0_minimumDepthBits;
		V_7 = (bool)((((int32_t)((((int32_t)L_13) > ((int32_t)((int32_t)16)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_0073;
		}
	}
	{
		___0_minimumDepthBits = ((int32_t)16);
		goto IL_008f;
	}

IL_0073:
	{
		int32_t L_15 = ___0_minimumDepthBits;
		V_8 = (bool)((((int32_t)((((int32_t)L_15) > ((int32_t)((int32_t)24)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_8;
		if (!L_16)
		{
			goto IL_0089;
		}
	}
	{
		___0_minimumDepthBits = ((int32_t)24);
		goto IL_008f;
	}

IL_0089:
	{
		___0_minimumDepthBits = ((int32_t)32);
	}

IL_008f:
	{
		int32_t L_17 = ___1_minimumStencilBits;
		V_9 = (bool)((!(((uint32_t)L_17) <= ((uint32_t)0)))? 1 : 0);
		bool L_18 = V_9;
		if (!L_18)
		{
			goto IL_009c;
		}
	}
	{
		___1_minimumStencilBits = 8;
	}

IL_009c:
	{
		il2cpp_codegen_runtime_class_init_inline(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_19 = ((GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_StaticFields*)il2cpp_codegen_static_fields_for(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var))->___tableNoStencil_0;
		NullCheck(L_19);
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_20 = ((GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_StaticFields*)il2cpp_codegen_static_fields_for(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var))->___tableStencil_1;
		NullCheck(L_20);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)((((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))) == ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length))))? 1 : 0), NULL);
		int32_t L_21 = ___1_minimumStencilBits;
		if ((((int32_t)L_21) > ((int32_t)0)))
		{
			goto IL_00bd;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_22 = ((GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_StaticFields*)il2cpp_codegen_static_fields_for(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var))->___tableNoStencil_0;
		G_B24_0 = L_22;
		goto IL_00c2;
	}

IL_00bd:
	{
		il2cpp_codegen_runtime_class_init_inline(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_23 = ((GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_StaticFields*)il2cpp_codegen_static_fields_for(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var))->___tableStencil_1;
		G_B24_0 = L_23;
	}

IL_00c2:
	{
		V_0 = G_B24_0;
		int32_t L_24 = ___0_minimumDepthBits;
		V_1 = ((int32_t)(L_24/8));
		int32_t L_25 = V_1;
		V_10 = L_25;
		goto IL_00ed;
	}

IL_00cc:
	{
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_26 = V_0;
		int32_t L_27 = V_10;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		int32_t L_29 = (int32_t)(L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_11 = L_29;
		int32_t L_30 = V_11;
		bool L_31;
		L_31 = SystemInfo_IsFormatSupported_m412D2A8B391BDBCD1EDB5C17ADAB724CDB123499(L_30, 4, NULL);
		V_12 = L_31;
		bool L_32 = V_12;
		if (!L_32)
		{
			goto IL_00e6;
		}
	}
	{
		int32_t L_33 = V_11;
		V_3 = L_33;
		goto IL_00fe;
	}

IL_00e6:
	{
		int32_t L_34 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00ed:
	{
		int32_t L_35 = V_10;
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_36 = V_0;
		NullCheck(L_36);
		V_13 = (bool)((((int32_t)L_35) < ((int32_t)((int32_t)(((RuntimeArray*)L_36)->max_length))))? 1 : 0);
		bool L_37 = V_13;
		if (L_37)
		{
			goto IL_00cc;
		}
	}
	{
		V_3 = 0;
		goto IL_00fe;
	}

IL_00fe:
	{
		int32_t L_38 = V_3;
		return L_38;
	}
}
// System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsSRGBFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphicsFormatUtility_IsSRGBFormat_mF3A393D43D68789A16087FF64CA2C050A8485C53 (int32_t ___0_format, const RuntimeMethod* method) 
{
	typedef bool (*GraphicsFormatUtility_IsSRGBFormat_mF3A393D43D68789A16087FF64CA2C050A8485C53_ftn) (int32_t);
	static GraphicsFormatUtility_IsSRGBFormat_mF3A393D43D68789A16087FF64CA2C050A8485C53_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_IsSRGBFormat_mF3A393D43D68789A16087FF64CA2C050A8485C53_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsSRGBFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)");
	bool icallRetVal = _il2cpp_icall_func(___0_format);
	return icallRetVal;
}
// System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsCompressedTextureFormat(UnityEngine.TextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphicsFormatUtility_IsCompressedTextureFormat_m3CA06D90308B58BD0ADAA34115B5103F04FB2F56 (int32_t ___0_format, const RuntimeMethod* method) 
{
	typedef bool (*GraphicsFormatUtility_IsCompressedTextureFormat_m3CA06D90308B58BD0ADAA34115B5103F04FB2F56_ftn) (int32_t);
	static GraphicsFormatUtility_IsCompressedTextureFormat_m3CA06D90308B58BD0ADAA34115B5103F04FB2F56_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_IsCompressedTextureFormat_m3CA06D90308B58BD0ADAA34115B5103F04FB2F56_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsCompressedTextureFormat(UnityEngine.TextureFormat)");
	bool icallRetVal = _il2cpp_icall_func(___0_format);
	return icallRetVal;
}
// System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::CanDecompressFormat(UnityEngine.Experimental.Rendering.GraphicsFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphicsFormatUtility_CanDecompressFormat_mDC3A7D8AC07ABAC875EACD11F48C5B571E22CEC6 (int32_t ___0_format, bool ___1_wholeImage, const RuntimeMethod* method) 
{
	typedef bool (*GraphicsFormatUtility_CanDecompressFormat_mDC3A7D8AC07ABAC875EACD11F48C5B571E22CEC6_ftn) (int32_t, bool);
	static GraphicsFormatUtility_CanDecompressFormat_mDC3A7D8AC07ABAC875EACD11F48C5B571E22CEC6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_CanDecompressFormat_mDC3A7D8AC07ABAC875EACD11F48C5B571E22CEC6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::CanDecompressFormat(UnityEngine.Experimental.Rendering.GraphicsFormat,System.Boolean)");
	bool icallRetVal = _il2cpp_icall_func(___0_format, ___1_wholeImage);
	return icallRetVal;
}
// System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::CanDecompressFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphicsFormatUtility_CanDecompressFormat_m443675E54409D934EE0DC0FDA5CF6D56DE9C4282 (int32_t ___0_format, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		int32_t L_0 = ___0_format;
		il2cpp_codegen_runtime_class_init_inline(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = GraphicsFormatUtility_CanDecompressFormat_mDC3A7D8AC07ABAC875EACD11F48C5B571E22CEC6(L_0, (bool)1, NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsDepthFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphicsFormatUtility_IsDepthFormat_m3CCCC9CE8DD7DAD9814D03E252D7B0F1C89A1452 (int32_t ___0_format, const RuntimeMethod* method) 
{
	typedef bool (*GraphicsFormatUtility_IsDepthFormat_m3CCCC9CE8DD7DAD9814D03E252D7B0F1C89A1452_ftn) (int32_t);
	static GraphicsFormatUtility_IsDepthFormat_m3CCCC9CE8DD7DAD9814D03E252D7B0F1C89A1452_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_IsDepthFormat_m3CCCC9CE8DD7DAD9814D03E252D7B0F1C89A1452_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsDepthFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)");
	bool icallRetVal = _il2cpp_icall_func(___0_format);
	return icallRetVal;
}
// System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsStencilFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphicsFormatUtility_IsStencilFormat_mA27F1DCFF7738B3BAEF225A131F80849BB177BCC (int32_t ___0_format, const RuntimeMethod* method) 
{
	typedef bool (*GraphicsFormatUtility_IsStencilFormat_mA27F1DCFF7738B3BAEF225A131F80849BB177BCC_ftn) (int32_t);
	static GraphicsFormatUtility_IsStencilFormat_mA27F1DCFF7738B3BAEF225A131F80849BB177BCC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_IsStencilFormat_mA27F1DCFF7738B3BAEF225A131F80849BB177BCC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsStencilFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)");
	bool icallRetVal = _il2cpp_icall_func(___0_format);
	return icallRetVal;
}
// System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsPVRTCFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphicsFormatUtility_IsPVRTCFormat_m7B1CF5EAD3BAEF83A7B5B198C16F54FC9C081D13 (int32_t ___0_format, const RuntimeMethod* method) 
{
	typedef bool (*GraphicsFormatUtility_IsPVRTCFormat_m7B1CF5EAD3BAEF83A7B5B198C16F54FC9C081D13_ftn) (int32_t);
	static GraphicsFormatUtility_IsPVRTCFormat_m7B1CF5EAD3BAEF83A7B5B198C16F54FC9C081D13_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_IsPVRTCFormat_m7B1CF5EAD3BAEF83A7B5B198C16F54FC9C081D13_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsPVRTCFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)");
	bool icallRetVal = _il2cpp_icall_func(___0_format);
	return icallRetVal;
}
// System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsCrunchFormat(UnityEngine.TextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphicsFormatUtility_IsCrunchFormat_mEEE165E8F2D82A469181DA2C4A5C227CCF585DAB (int32_t ___0_format, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___0_format;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)28))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_1 = ___0_format;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)29))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_2 = ___0_format;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)64))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = ___0_format;
		G_B5_0 = ((((int32_t)L_3) == ((int32_t)((int32_t)65)))? 1 : 0);
		goto IL_0018;
	}

IL_0017:
	{
		G_B5_0 = 1;
	}

IL_0018:
	{
		V_0 = (bool)G_B5_0;
		goto IL_001b;
	}

IL_001b:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Void UnityEngine.Experimental.Rendering.GraphicsFormatUtility::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphicsFormatUtility__cctor_mA72A657D7B9FB8670567D2CB6B6FA3A1419980D1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_0 = (GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5*)(GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5*)SZArrayNew(GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5_il2cpp_TypeInfo_var, (uint32_t)5);
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)90));
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)((int32_t)90));
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_3 = L_2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(3), (int32_t)((int32_t)91));
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_4 = L_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(4), (int32_t)((int32_t)93));
		((GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_StaticFields*)il2cpp_codegen_static_fields_for(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var))->___tableNoStencil_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_StaticFields*)il2cpp_codegen_static_fields_for(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var))->___tableNoStencil_0), (void*)L_4);
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_5 = (GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5*)(GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5*)SZArrayNew(GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5_il2cpp_TypeInfo_var, (uint32_t)5);
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_6 = L_5;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)92));
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_7 = L_6;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)((int32_t)92));
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_8 = L_7;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (int32_t)((int32_t)92));
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_9 = L_8;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (int32_t)((int32_t)94));
		((GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_StaticFields*)il2cpp_codegen_static_fields_for(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var))->___tableStencil_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_StaticFields*)il2cpp_codegen_static_fields_for(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var))->___tableStencil_1), (void*)L_9);
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
// System.Void UnityEngine.Assertions.Assert::Fail(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_Fail_mCC76351EF5EAA85F4012330D498CB802861B41BA (String_t* ___0_message, String_t* ___1_userMessage, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral136D6CCF1AA96D28737A6F5823378564A17A07B1);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		bool L_0 = ((Assert_tDC16963451AC4364803739B73A4477ADCB365863_StaticFields*)il2cpp_codegen_static_fields_for(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var))->___raiseExceptions_0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003c;
		}
	}
	{
		String_t* L_2 = ___0_message;
		V_1 = (bool)((((RuntimeObject*)(String_t*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		___0_message = _stringLiteral136D6CCF1AA96D28737A6F5823378564A17A07B1;
	}

IL_001d:
	{
		String_t* L_4 = ___1_userMessage;
		V_2 = (bool)((!(((RuntimeObject*)(String_t*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		String_t* L_6 = ___1_userMessage;
		String_t* L_7 = ___0_message;
		String_t* L_8;
		L_8 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_6, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, L_7, NULL);
		___0_message = L_8;
	}

IL_0033:
	{
		String_t* L_9 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogAssertion_m71A412A496EAB476FFF6253618C706B2F1E4AFF0(L_9, NULL);
		goto IL_0044;
	}

IL_003c:
	{
		String_t* L_10 = ___0_message;
		String_t* L_11 = ___1_userMessage;
		AssertionException_t13955C5225033D3A79D633A04E4D86E8FD0CC372* L_12 = (AssertionException_t13955C5225033D3A79D633A04E4D86E8FD0CC372*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AssertionException_t13955C5225033D3A79D633A04E4D86E8FD0CC372_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		AssertionException__ctor_m01CD9ADC1B0067C20CDC2A0697BBF3969E67FEB6(L_12, L_10, L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Assert_Fail_mCC76351EF5EAA85F4012330D498CB802861B41BA_RuntimeMethod_var)));
	}

IL_0044:
	{
		return;
	}
}
// System.Void UnityEngine.Assertions.Assert::IsTrue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663 (bool ___0_condition, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0 = ___0_condition;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		bool L_2 = ___0_condition;
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsTrue_m390B3F48332F46CE76AB45491A60ACDCCF521AAE(L_2, (String_t*)NULL, NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Void UnityEngine.Assertions.Assert::IsTrue(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsTrue_m390B3F48332F46CE76AB45491A60ACDCCF521AAE (bool ___0_condition, String_t* ___1_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0 = ___0_condition;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		String_t* L_2;
		L_2 = AssertionMessageUtil_BooleanFailureMessage_m1390F2418023DC1717341A836F0F40FBC5801FB4((bool)1, NULL);
		String_t* L_3 = ___1_message;
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_Fail_mCC76351EF5EAA85F4012330D498CB802861B41BA(L_2, L_3, NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Void UnityEngine.Assertions.Assert::IsFalse(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsFalse_mC11212C418E6B5009F6474AE90FFB24734482E56 (bool ___0_condition, String_t* ___1_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0 = ___0_condition;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		String_t* L_2;
		L_2 = AssertionMessageUtil_BooleanFailureMessage_m1390F2418023DC1717341A836F0F40FBC5801FB4((bool)0, NULL);
		String_t* L_3 = ___1_message;
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_Fail_mCC76351EF5EAA85F4012330D498CB802861B41BA(L_2, L_3, NULL);
	}

IL_0013:
	{
		return;
	}
}
// System.Void UnityEngine.Assertions.Assert::AreEqual(UnityEngine.Object,UnityEngine.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_AreEqual_mA4CD725133015119B0219ABAA6337650814B803B (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_expected, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_actual, String_t* ___2_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = ___1_actual;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_1 = ___0_expected;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_4 = ___1_actual;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_5 = ___0_expected;
		String_t* L_6;
		L_6 = AssertionMessageUtil_GetEqualityMessage_m64D77BB9CA4284DD9561C238BB1F97B566830DBB(L_4, L_5, (bool)1, NULL);
		String_t* L_7 = ___2_message;
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_Fail_mCC76351EF5EAA85F4012330D498CB802861B41BA(L_6, L_7, NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Void UnityEngine.Assertions.Assert::AreNotEqual(UnityEngine.Object,UnityEngine.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_AreNotEqual_m4E953971244A0BEACD42190612093ACC87C1A26F (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_expected, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_actual, String_t* ___2_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = ___1_actual;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_1 = ___0_expected;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_4 = ___1_actual;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_5 = ___0_expected;
		String_t* L_6;
		L_6 = AssertionMessageUtil_GetEqualityMessage_m64D77BB9CA4284DD9561C238BB1F97B566830DBB(L_4, L_5, (bool)0, NULL);
		String_t* L_7 = ___2_message;
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_Fail_mCC76351EF5EAA85F4012330D498CB802861B41BA(L_6, L_7, NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Void UnityEngine.Assertions.Assert::IsNull(UnityEngine.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsNull_mB7DAD5AA378E4A36BC1D27B88CFADD31023530BB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_value, String_t* ___1_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_3 = ___0_value;
		String_t* L_4;
		L_4 = AssertionMessageUtil_NullFailureMessage_mECBDB36C0C5433898BC4D3CF0AE55CEFBBCC9A50(L_3, (bool)1, NULL);
		String_t* L_5 = ___1_message;
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_Fail_mCC76351EF5EAA85F4012330D498CB802861B41BA(L_4, L_5, NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void UnityEngine.Assertions.Assert::IsNotNull(UnityEngine.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsNotNull_mB889D13B7935F20A9CE32629C00434099E30D931 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_value, String_t* ___1_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_3 = ___0_value;
		String_t* L_4;
		L_4 = AssertionMessageUtil_NullFailureMessage_mECBDB36C0C5433898BC4D3CF0AE55CEFBBCC9A50(L_3, (bool)0, NULL);
		String_t* L_5 = ___1_message;
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_Fail_mCC76351EF5EAA85F4012330D498CB802861B41BA(L_4, L_5, NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void UnityEngine.Assertions.Assert::AreEqual(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_AreEqual_m718BB4BD31FA3176A3A236F96BC5405EB750D6CF (int32_t ___0_expected, int32_t ___1_actual, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_AreEqual_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1C7D690BD2B4127279886CDD4F1201F22D1BB81E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		int32_t L_0 = ___0_expected;
		int32_t L_1 = ___1_actual;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = ___0_expected;
		int32_t L_4 = ___1_actual;
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_AreEqual_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1C7D690BD2B4127279886CDD4F1201F22D1BB81E(L_3, L_4, (String_t*)NULL, Assert_AreEqual_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1C7D690BD2B4127279886CDD4F1201F22D1BB81E_RuntimeMethod_var);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.Assertions.Assert::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert__cctor_mC2C4583746B3D6E98224F4692EAE5EF17B5F9CC8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Assert_tDC16963451AC4364803739B73A4477ADCB365863_StaticFields*)il2cpp_codegen_static_fields_for(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var))->___raiseExceptions_0 = (bool)1;
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
// System.Void UnityEngine.Assertions.AssertionException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssertionException__ctor_m01CD9ADC1B0067C20CDC2A0697BBF3969E67FEB6 (AssertionException_t13955C5225033D3A79D633A04E4D86E8FD0CC372* __this, String_t* ___0_message, String_t* ___1_userMessage, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
		String_t* L_1 = ___1_userMessage;
		__this->___m_UserMessage_18 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UserMessage_18), (void*)L_1);
		return;
	}
}
// System.String UnityEngine.Assertions.AssertionException::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AssertionException_get_Message_m4320D1607BDF97D451569837340C8E4A04461089 (AssertionException_t13955C5225033D3A79D633A04E4D86E8FD0CC372* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		String_t* L_0;
		L_0 = Exception_get_Message_mCFE0D38FDF9001405299AAE43BBE2A9AD806C441(__this, NULL);
		V_0 = L_0;
		String_t* L_1 = __this->___m_UserMessage_18;
		V_1 = (bool)((!(((RuntimeObject*)(String_t*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_3 = __this->___m_UserMessage_18;
		String_t* L_4 = V_0;
		String_t* L_5;
		L_5 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_3, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, L_4, NULL);
		V_0 = L_5;
	}

IL_0027:
	{
		String_t* L_6 = V_0;
		V_2 = L_6;
		goto IL_002b;
	}

IL_002b:
	{
		String_t* L_7 = V_2;
		return L_7;
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
// System.String UnityEngine.Assertions.AssertionMessageUtil::GetMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AssertionMessageUtil_GetMessage_m5AD26DAEC5DCCEB15C198EF6B70FED9E32BF299C (String_t* ___0_failureMessage, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D6A316D6057DA4AE1BFCD029CC6003AD94EBB0F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E752B76D455A50FE476984D4B09A7CDBF2A753E);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral7D6A316D6057DA4AE1BFCD029CC6003AD94EBB0F);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral7D6A316D6057DA4AE1BFCD029CC6003AD94EBB0F);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_failureMessage;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_3);
		String_t* L_4;
		L_4 = UnityString_Format_m98A0629641086A1BE20BBF7F4EADDE3FE3877D85(_stringLiteral8E752B76D455A50FE476984D4B09A7CDBF2A753E, L_2, NULL);
		V_0 = L_4;
		goto IL_0020;
	}

IL_0020:
	{
		String_t* L_5 = V_0;
		return L_5;
	}
}
// System.String UnityEngine.Assertions.AssertionMessageUtil::GetMessage(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AssertionMessageUtil_GetMessage_m0785AB2BEBDA81CFE63F87428268C91D63685EB3 (String_t* ___0_failureMessage, String_t* ___1_expected, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22EBAF9990823EA0B061F556D70C5786C35B8988);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC6606055C46DC44B34F9C145AAC175DD3FA7E44);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		String_t* L_2 = ___0_failureMessage;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_1;
		String_t* L_4;
		L_4 = Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF(NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_3;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralCC6606055C46DC44B34F9C145AAC175DD3FA7E44);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)_stringLiteralCC6606055C46DC44B34F9C145AAC175DD3FA7E44);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_5;
		String_t* L_7 = ___1_expected;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_7);
		String_t* L_8;
		L_8 = UnityString_Format_m98A0629641086A1BE20BBF7F4EADDE3FE3877D85(_stringLiteral22EBAF9990823EA0B061F556D70C5786C35B8988, L_6, NULL);
		String_t* L_9;
		L_9 = AssertionMessageUtil_GetMessage_m5AD26DAEC5DCCEB15C198EF6B70FED9E32BF299C(L_8, NULL);
		V_0 = L_9;
		goto IL_0031;
	}

IL_0031:
	{
		String_t* L_10 = V_0;
		return L_10;
	}
}
// System.String UnityEngine.Assertions.AssertionMessageUtil::GetEqualityMessage(System.Object,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AssertionMessageUtil_GetEqualityMessage_m64D77BB9CA4284DD9561C238BB1F97B566830DBB (RuntimeObject* ___0_actual, RuntimeObject* ___1_expected, bool ___2_expectEqual, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15688BC513A63346074978C5D893B01207733A34);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7EF1829A378D66B1DD70A767729127A0DC5EDCAE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAADB85DA7FB62DC073513239D42C3A0A59E8EB0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB23B6E4115134649FD594B1C398564BF3814F76);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDAAB9944D2BDD67EF768F807537202334A02D27);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B2_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B1_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B3_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B5_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B5_2 = NULL;
	String_t* G_B5_3 = NULL;
	String_t* G_B5_4 = NULL;
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B4_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B4_2 = NULL;
	String_t* G_B4_3 = NULL;
	String_t* G_B4_4 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B6_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B6_3 = NULL;
	String_t* G_B6_4 = NULL;
	String_t* G_B6_5 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		bool L_2 = ___2_expectEqual;
		G_B1_0 = 0;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		G_B1_3 = _stringLiteral15688BC513A63346074978C5D893B01207733A34;
		if (L_2)
		{
			G_B2_0 = 0;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			G_B2_3 = _stringLiteral15688BC513A63346074978C5D893B01207733A34;
			goto IL_0018;
		}
	}
	{
		G_B3_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_001d;
	}

IL_0018:
	{
		G_B3_0 = _stringLiteralBB23B6E4115134649FD594B1C398564BF3814F76;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_001d:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (RuntimeObject*)G_B3_0);
		String_t* L_3;
		L_3 = UnityString_Format_m98A0629641086A1BE20BBF7F4EADDE3FE3877D85(G_B3_4, G_B3_3, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		RuntimeObject* L_6 = ___0_actual;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		RuntimeObject* L_8 = ___1_expected;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_7;
		bool L_10 = ___2_expectEqual;
		G_B4_0 = 2;
		G_B4_1 = L_9;
		G_B4_2 = L_9;
		G_B4_3 = _stringLiteralAADB85DA7FB62DC073513239D42C3A0A59E8EB0E;
		G_B4_4 = L_3;
		if (L_10)
		{
			G_B5_0 = 2;
			G_B5_1 = L_9;
			G_B5_2 = L_9;
			G_B5_3 = _stringLiteralAADB85DA7FB62DC073513239D42C3A0A59E8EB0E;
			G_B5_4 = L_3;
			goto IL_0042;
		}
	}
	{
		G_B6_0 = _stringLiteralFDAAB9944D2BDD67EF768F807537202334A02D27;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		G_B6_5 = G_B4_4;
		goto IL_0047;
	}

IL_0042:
	{
		G_B6_0 = _stringLiteral7EF1829A378D66B1DD70A767729127A0DC5EDCAE;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
		G_B6_5 = G_B5_4;
	}

IL_0047:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (RuntimeObject*)G_B6_0);
		String_t* L_11;
		L_11 = UnityString_Format_m98A0629641086A1BE20BBF7F4EADDE3FE3877D85(G_B6_4, G_B6_3, NULL);
		String_t* L_12;
		L_12 = AssertionMessageUtil_GetMessage_m0785AB2BEBDA81CFE63F87428268C91D63685EB3(G_B6_5, L_11, NULL);
		V_0 = L_12;
		goto IL_0055;
	}

IL_0055:
	{
		String_t* L_13 = V_0;
		return L_13;
	}
}
// System.String UnityEngine.Assertions.AssertionMessageUtil::NullFailureMessage(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AssertionMessageUtil_NullFailureMessage_mECBDB36C0C5433898BC4D3CF0AE55CEFBBCC9A50 (RuntimeObject* ___0_value, bool ___1_expectNull, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FF2D5DA17EE1782E8A80B6907AA0B4B5F811249);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB23B6E4115134649FD594B1C398564BF3814F76);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B2_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B1_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B3_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B5_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B5_2 = NULL;
	String_t* G_B5_3 = NULL;
	String_t* G_B5_4 = NULL;
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B4_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B4_2 = NULL;
	String_t* G_B4_3 = NULL;
	String_t* G_B4_4 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B6_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B6_3 = NULL;
	String_t* G_B6_4 = NULL;
	String_t* G_B6_5 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		bool L_2 = ___1_expectNull;
		G_B1_0 = 0;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		G_B1_3 = _stringLiteral1FF2D5DA17EE1782E8A80B6907AA0B4B5F811249;
		if (L_2)
		{
			G_B2_0 = 0;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			G_B2_3 = _stringLiteral1FF2D5DA17EE1782E8A80B6907AA0B4B5F811249;
			goto IL_0018;
		}
	}
	{
		G_B3_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_001d;
	}

IL_0018:
	{
		G_B3_0 = _stringLiteralBB23B6E4115134649FD594B1C398564BF3814F76;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_001d:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (RuntimeObject*)G_B3_0);
		String_t* L_3;
		L_3 = UnityString_Format_m98A0629641086A1BE20BBF7F4EADDE3FE3877D85(G_B3_4, G_B3_3, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		bool L_6 = ___1_expectNull;
		G_B4_0 = 0;
		G_B4_1 = L_5;
		G_B4_2 = L_5;
		G_B4_3 = _stringLiteral1FF2D5DA17EE1782E8A80B6907AA0B4B5F811249;
		G_B4_4 = L_3;
		if (L_6)
		{
			G_B5_0 = 0;
			G_B5_1 = L_5;
			G_B5_2 = L_5;
			G_B5_3 = _stringLiteral1FF2D5DA17EE1782E8A80B6907AA0B4B5F811249;
			G_B5_4 = L_3;
			goto IL_003a;
		}
	}
	{
		G_B6_0 = _stringLiteralBB23B6E4115134649FD594B1C398564BF3814F76;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		G_B6_5 = G_B4_4;
		goto IL_003f;
	}

IL_003a:
	{
		G_B6_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
		G_B6_5 = G_B5_4;
	}

IL_003f:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (RuntimeObject*)G_B6_0);
		String_t* L_7;
		L_7 = UnityString_Format_m98A0629641086A1BE20BBF7F4EADDE3FE3877D85(G_B6_4, G_B6_3, NULL);
		String_t* L_8;
		L_8 = AssertionMessageUtil_GetMessage_m0785AB2BEBDA81CFE63F87428268C91D63685EB3(G_B6_5, L_7, NULL);
		V_0 = L_8;
		goto IL_004d;
	}

IL_004d:
	{
		String_t* L_9 = V_0;
		return L_9;
	}
}
// System.String UnityEngine.Assertions.AssertionMessageUtil::BooleanFailureMessage(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AssertionMessageUtil_BooleanFailureMessage_m1390F2418023DC1717341A836F0F40FBC5801FB4 (bool ___0_expected, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF67141A2C63171C3D363B9A795E9AA3F25DA98CB);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	{
		bool L_0 = ___0_expected;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		String_t* L_1;
		L_1 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_0), NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralF67141A2C63171C3D363B9A795E9AA3F25DA98CB, L_1, NULL);
		String_t* L_3;
		L_3 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&___0_expected), NULL);
		String_t* L_4;
		L_4 = AssertionMessageUtil_GetMessage_m0785AB2BEBDA81CFE63F87428268C91D63685EB3(L_2, L_3, NULL);
		V_1 = L_4;
		goto IL_0026;
	}

IL_0026:
	{
		String_t* L_5 = V_1;
		return L_5;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool RenderPipeline_get_disposed_mF0D4B88DF44249E0FC2371697B913DD5A81B3850_inline (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CdisposedU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderPipeline_set_disposed_mB7EC4BD04C80015CBCC0B92A65A6DE615F2828A8_inline (RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CdisposedU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* RenderPipelineManager_get_currentPipeline_m270A15A23593BAD8D6A20CE2E328210FF9AA692D_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69* L_0 = ((RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var))->___s_currentPipeline_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_defaultMixedLightingModes_m7F9FDF9012EC41E36466613C8A9103D74666CBC4_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CdefaultMixedLightingModesU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_mixedLightingModes_m929C0CE80A4990993EBCAB8B46C1E273A0829137_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CmixedLightingModesU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline (intptr_t* __this, void* ___0_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_value;
		*__this = ((intptr_t)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_lightmapBakeTypes_m1311A5AD5BE1A6BA3251238C893D7D340358C156_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3ClightmapBakeTypesU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_enlighten_m6F973FEB7CCF0BB1B7A2F25317EADC5F6FD95ED6_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CenlightenU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_lightmapsModes_m925D670110EF7109A26BE1B228066E1201FAAE38_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3ClightmapsModesU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_enlightenLightmapper_mF7C756BBD4E605DD047BD502DFF8569C4CEE8F27_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CenlightenLightmapperU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_rendersUIOverlay_m657FFFC5B360F7BCE9964EF50E7449779224AEFC_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CrendersUIOverlayU3Ek__BackingField_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_autoAmbientProbeBaking_m42E98E922511B1CF790FC414C9A85D70DFACA2C8_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CautoAmbientProbeBakingU3Ek__BackingField_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_autoDefaultReflectionProbeBaking_mFDB934E6645FA5CA95E1F0BEF4A12345A1025207_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CautoDefaultReflectionProbeBakingU3Ek__BackingField_25;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = *__this;
		return (void*)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 CreateOutputMethod_Invoke_mEC7DC5D9A9325BFFB17C248AE9738637704B89CC_inline (CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* __this, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___0_graph, String_t* ___1_name, const RuntimeMethod* method) 
{
	typedef PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 (*FunctionPointerType) (RuntimeObject*, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E, String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_graph, ___1_name, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_RGBMultiplied_m4B3BAE4310EA98451D608E0300331012AFFF1B01_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_multiplier, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = __this->___r_0;
		float L_1 = ___0_multiplier;
		float L_2 = __this->___g_1;
		float L_3 = ___0_multiplier;
		float L_4 = __this->___b_2;
		float L_5 = ___0_multiplier;
		float L_6 = __this->___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		memset((&L_7), 0, sizeof(L_7));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_7), ((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)), ((float)il2cpp_codegen_multiply(L_4, L_5)), L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		goto IL_0027;
	}

IL_0027:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = V_0;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_linear_m76EB88E15DA4E00D615DF33D1CEE51092683117C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = __this->___r_0;
		float L_1;
		L_1 = Mathf_GammaToLinearSpace_mEF9E26BAD322E55448B286ABDCDF4A2CC236547F(L_0, NULL);
		float L_2 = __this->___g_1;
		float L_3;
		L_3 = Mathf_GammaToLinearSpace_mEF9E26BAD322E55448B286ABDCDF4A2CC236547F(L_2, NULL);
		float L_4 = __this->___b_2;
		float L_5;
		L_5 = Mathf_GammaToLinearSpace_mEF9E26BAD322E55448B286ABDCDF4A2CC236547F(L_4, NULL);
		float L_6 = __this->___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		memset((&L_7), 0, sizeof(L_7));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_7), L_1, L_3, L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		goto IL_0030;
	}

IL_0030:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = V_0;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Color_get_maxColorComponent_m97D2940D48767ACC21D76F8CCEAD6898B722529C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___r_0;
		float L_1 = __this->___g_1;
		float L_2;
		L_2 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_0, L_1, NULL);
		float L_3 = __this->___b_2;
		float L_4;
		L_4 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_2, L_3, NULL);
		V_0 = L_4;
		goto IL_0020;
	}

IL_0020:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		__this->___a_3 = (1.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_inline (RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* __this, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___0_requests, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D ___1_lightsOutput, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990*, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_requests, ___1_lightsOutput, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ScriptableRuntimeReflectionSystemWrapper_get_implementation_m1AFA781CCFEFE334D758AC43A9FAB9E0FB0F5C40_inline (ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CimplementationU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScriptableRuntimeReflectionSystemWrapper_set_implementation_mF1552E093F0F437DF191D7CBB0CF7981C36744D8_inline (ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CimplementationU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CimplementationU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = __this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___0_a;
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
