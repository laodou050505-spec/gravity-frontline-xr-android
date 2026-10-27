#include "pch-cpp.hpp"





template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*,T1,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*,T1,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3* p3)
	{
		void* params[3] = { &p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5<R, T1*, T2, T3, T4*, T5*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4* p4, T5* p5)
	{
		R ret;
		void* params[5] = { p1, &p2, &p3, p4, p5 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct ActiveLifecycleScopeWithContext_1_tD3998CF55244EF4B194F8B1E059746B5D9A85F79;
struct ArraySortHelper_1_tEC109463DA70EE9C9096D4971D34412677570D28;
struct ArraySortHelper_1_t3533F5404321426857F56650163B6A6729E7158D;
struct ArraySortHelper_1_t7737E5D659C96F9001D7F147BCD524DC66D0D4DD;
struct ArraySortHelper_1_t333E7CEAC391412941D21F2FCAFBEC610B5324AA;
struct ArraySortHelper_1_tA6EE6D66AFBD4037261CC901C43D4945B05C117E;
struct ArraySortHelper_1_t113B40406DB1AFB29A002792A3DE4DE156C3C51D;
struct ArraySortHelper_1_tFC3766CE9CF4C077AB50CBC92CD58E2F2E2AEC4D;
struct ArraySortHelper_1_t9D5988695D0E27FC2C660482823CD24E7867C57E;
struct ArraySortHelper_1_t1C05FD7083D194EB20ECE9BF364EE61BA5DFE1B1;
struct ArraySortHelper_1_t3161D1D2810FDADCBA98BC302546D9CF98CFA41F;
struct ArraySortHelper_1_tCF4AD90F61645344CEE07FF96E146A134CF88716;
struct ArraySortHelper_1_t9AC8E0CAF25D5AA0127EDCAF3968B41697DFDDDE;
struct ArraySortHelper_1_t999CC4B5DBE0626519030FE7B005516753FB7335;
struct Data_tBBAC62CD211FDD01BE331E13953455EC5AD3E38F;
struct Data_t91EFD39F1A5E53405108E488D434DB7452B22E8A;
struct Data_tD43A0A802BBF284FB327878A445148A56180D7DA;
struct Dictionary_2_t54C1839F4EE32A546D24F6AD598F3A048EE2AB9A;
struct Dictionary_2_tD1D7C3C9439A06F868D4705EB293B45335991F83;
struct Dictionary_2_tE7CDB026141A092A986D0DA3CB2DFCE6BB552069;
struct Dictionary_2_t29FB78C9E5DF443E2A5880E4E9B7C86E516670E0;
struct Dictionary_2_t6682243BDABA638FCBE4F1D9875B5B1455A7686E;
struct Func_3_t0787D839A577CB564A3192D4164941D5F3DCFBB5;
struct GPUBuffer_1_tB27A42EE52EA38FD7117C4EC0B1E42703FFE4C36;
struct GPUBuffer_1_tA6A8BA754BA691383F7FA4302803FC11DA7373F3;
struct IComparer_1_tF8C7AEFAE0CBF98861929681D75DB2435790296B;
struct IComparer_1_tAD81CDA8DBDED9A01882793DAB3FE458FBC7E63E;
struct IComparer_1_tC0AEEB7CBD1D16FC1813F8AB92E665B025CF5353;
struct IComparer_1_t911DFCCFDD6E0941039D87B13C592494A8775310;
struct IComparer_1_tB15958965A0B3C759B9531E2B07F4EC59622F297;
struct IComparer_1_tC2BF8979C8F59A8051B189DA2C64A542ED75007B;
struct IComparer_1_t2389469D2AC7407B7CF518815E55058D38D1B4CC;
struct IComparer_1_t0CCA4457F07876897FDF7798C077A3F8BDEBD43E;
struct IComparer_1_tCB62226FF65E7C836D79C643C9043E5EA15AB685;
struct IComparer_1_t7056DE2557FBAA4AF1EAAEC67C53580083EA6988;
struct IComparer_1_tFB0FD319B9E8EF0EC1FC77A9ED2E0259361E126E;
struct IComparer_1_t3FA52899D0A91FBF89D2AA6B7ED4862C158AE928;
struct IComparer_1_t5CD2EA70F165FCB6FC40194D89CF91B3CA8950AF;
struct IComparer_1_t7E870201BF4F9A2658830A9FA35ED97BC476A8B4;
struct IComparer_1_tCA720E7837F12C38065A4AB632B5FAAD19EC30AA;
struct IComparer_1_t01B466D62BD708A8A8BBAB6085E75DCF7678A908;
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
struct IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8;
struct IEqualityComparer_1_tC153F65F278AE0C32BA0CC809B12AA724AF65F85;
struct IList_1_t09217E1EDF7CCAED72B667F406AAC92AB64B8790;
struct IList_1_t1E95A05AFA88C09BA96A40B431F7D5867BD0D622;
struct IList_1_t7DC7A22F42EEFA1E8D796516A9F22282DF4EB5FA;
struct IList_1_t8AC59FFD0F90EC2DAD4C3FA39B2A5851F9D2987A;
struct KeyCollection_t59AB6D7A56AAB8B527E4EEBED39397629A9430E0;
struct KeyCollection_t5E448F9EF31B8C6F2D80CA7C7858AB780AB912A9;
struct LifecycleScopeWithContext_1_t35373E7691E4D4045644241660D92D3E94032599;
struct List_1_t9CDC351A1FD4D84CA6FE8FF3EAD218C909593E14;
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
struct List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E;
struct List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A;
struct Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF;
struct Queue_1_t0213AA1BB5D12D3BCD5727E71F92BE13870D391A;
struct ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050;
struct ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513;
struct ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263;
struct ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8;
struct ScopeTransitionRequestWithContext_1_t7D86FB5BB8860C08CD532994E81CE06405D87992;
struct ValueCollection_tB7C740A97431C55C62CC43DA7712B5896DBED97F;
struct ValueCollection_t7F798658A969389BB4AAA8E1ECC40A4682EF43A9;
struct CopyInfoU5BU5D_t99CD8AF5B14252370B2B7C05032486DF882AF466;
struct CopyInfoU5BU5D_tC5EFD432382597328F5463CE3F49D3DA0CB4FCF6;
struct DeferredArrayU5BU5D_t2B402FF2AC2B32AA6CC9A5004046806319D243DC;
struct DeferredArrayU5BU5D_tB4ED071664EA73A4D56895411476AB8A983CBCF1;
struct EntryU5BU5D_tAABC49AF86D770891D85331C61A2CF1F7BCB6899;
struct ItemU5BU5D_tB2AB30F4C7952C4FA867468576E1493A8858A165;
struct KeyValuePair_2U5BU5D_t59BE3E2793BE8FC78C2EE42EAEC58E864348B40C;
struct KeyValuePair_2U5BU5D_t8E7451B50D849638463A256F730434F5AC214B52;
struct KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA;
struct KeyValuePair_2U5BU5D_t899E6C9DD89ED99CCF993FA90A368CCB9286EC61;
struct NativeArray_1U5BU5D_t75698E5C2142DD4A324DD38EE484D69C8FD2CFD3;
struct NativeArray_1U5BU5D_t48F28BC4076C1A1608AA864367077AD64E04C11D;
struct NativeArray_1U5BU5D_t07FE0FFB798A14A16B56C709EBB100AA9D986CA4;
struct NativeArray_1U5BU5D_tB9179B8E492F9CEBC40651BF1C66A50255128C61;
struct ActiveLifecycleScopeBaseU5BU5D_t838742F7550A7877BD0F3E2C6EB34055C35B57B2;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct CustomAttributeNamedArgumentU5BU5D_tC0A39D9401E28662213F5958EFF5D26D0681B440;
struct CustomAttributeTypedArgumentU5BU5D_t6CAA09EC6AACBED57FC8B02C587D50BF6B738C6B;
struct ImplicitLifecycleScopeU5BU5D_t1C10C825AEAC8ACF7250C9F8748855C85884D38D;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PxrSemanticLabelU5BU5D_tCEE1274FD9248B90C2D06C3BFF1800AA713EF698;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct ScopeTransitionRequestBaseU5BU5D_t607E74D78847B27124900B6FFF0ED216E09E95C7;
struct SortNodeU5BU5D_t93BC9DAFE9D4796A15C2DAEEAA4799B6D0A6179B;
struct ActiveLifecycleScopeBase_t0F0C7F8D06A577773F8D661F8CCE4F9FA9999A8C;
struct ActiveLifecycleScopesTracker_t21B0C18F9AC8D5A5832FC8DAD92E8759C6E6A8E7;
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct Assembly_t;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct Exception_t;
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct INativeCallbackProvider_t9C3AAA36B250E1A3DD05DF6F0A4C236CA6DD6DFF;
struct ImplicitLifecycleScope_tB1D07078E6300A31DA61E2FFAB8D8A56AD296E38;
struct LifecycleMethodRegistry_t683994E033865F86C96A14E5F2674E6AD8B97EA8;
struct LifecycleScope_tEA98D004E7CFF981DC51524B020E4CBD58D964CB;
struct LifecycleScopeBase_t7CC30D9721A69BA0A9E955EAED505A32007C0755;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MemberInfo_t;
struct MissingMethodException_t3D861B41F6520C32A7994A884343802925703155;
struct MonoTypeInfo_t90D5999A69AC524474FDEAC50F55B6CE868AB501;
struct RuntimeConstructorInfo_tB41E49C7CFA74A03CCC986E78ABB0C0BD331A5AE;
struct RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct ScopeTransitionHelper_t069C5DE337C0C8F615857F4D731C5CBE3B0F4347;
struct StackOrderedAssemblyList_t57E870538D7E4DC7B2168FFB75368CE0C906AF97;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct ScopeTransitionRequestBase_t9E5F91D84A64F389496153A6DA14A6686E4E3C16;

IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DebugLifecycle_tDEBE1FE9649A80BE545B4DD634205A3880487E11_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t9CDC351A1FD4D84CA6FE8FF3EAD218C909593E14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MissingMethodException_t3D861B41F6520C32A7994A884343802925703155_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B9D6CD2F31410E688E8B500A17CB53A5159DC7;
IL2CPP_EXTERN_C String_t* _stringLiteral07AFEE37B4EEA247E58EACE22E28DEF694A4927A;
IL2CPP_EXTERN_C String_t* _stringLiteral085E2DF95CBA541D8E08411BA60759DB8E782A9E;
IL2CPP_EXTERN_C String_t* _stringLiteral13E8ABAF4FCA9340FD639F44DC79CC73FDE724C1;
IL2CPP_EXTERN_C String_t* _stringLiteral190A3A7EF1BCDD282CB0B05FB99BEDDD2405B809;
IL2CPP_EXTERN_C String_t* _stringLiteral1D86DE1FC0445C55F712ED0F6D3E32FED0A1E724;
IL2CPP_EXTERN_C String_t* _stringLiteral24A0D1C954F6F30A64E2AB214561ABB5C363D424;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral45BE536C9F5116AD2AF9F35AA7EF84EC0980CA92;
IL2CPP_EXTERN_C String_t* _stringLiteral498035C56F75E7FF9C33113E1B85A874BEC20548;
IL2CPP_EXTERN_C String_t* _stringLiteral50E02893F5B6939534A49C535241D6B7BAFCF599;
IL2CPP_EXTERN_C String_t* _stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8;
IL2CPP_EXTERN_C String_t* _stringLiteral84DED65F0B23E6F91065E5F2EFCC5631A498E3E4;
IL2CPP_EXTERN_C String_t* _stringLiteral9C503A4CDCF098739894D1E4B88AEFF08E94B305;
IL2CPP_EXTERN_C String_t* _stringLiteralA4EC0E533020275EA02CC859DA22C7578B5C0119;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E;
IL2CPP_EXTERN_C String_t* _stringLiteralC5C3A106612C3457D1A199E43E729AE62EDAD988;
IL2CPP_EXTERN_C String_t* _stringLiteralCC59788671EF0B981BF46F9F140D4B1454A1146D;
IL2CPP_EXTERN_C String_t* _stringLiteralD06FDE4FC2CBD6E5FAFE1400B04AC8E4F3001D0C;
IL2CPP_EXTERN_C String_t* _stringLiteralD366696EA5EEAAB15A9EA73824AEE06907DE5A63;
IL2CPP_EXTERN_C String_t* _stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D;
IL2CPP_EXTERN_C String_t* _stringLiteralDC955F06F1DA8A3B06C4755211822B06D698CF11;
IL2CPP_EXTERN_C String_t* _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB;
IL2CPP_EXTERN_C String_t* _stringLiteralF0C0210C1550DE6C68F93F6E0EEC8AD3FE4F23F3;
IL2CPP_EXTERN_C String_t* _stringLiteralF3DA7FC2B4DFDE9895E6947FA318629E591432E0;
IL2CPP_EXTERN_C String_t* _stringLiteralFF3F5572DC5BB6A7D025C792614F24AE73C2D8FC;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mA42C372CA350E01B08326C78A32C2D4331199A3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m43D6ABEDBE5F0A936823EEB675589E5EAFD43281_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mAE2ECC0F5BDAA58524500656449EA1A387079726_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m23A14CBF4DD0FFE6985742AB5960E012A3D29D89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_m9CB10267CF4FC83CDDD3FDC4B898C73488C93FB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_m79563C16853F891CCBBC22B07DC63DA063874A49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m5560B98567B989C4754E5C182136BE4AC88848CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m6E582A0ECA46CE69AFD14D67DE233D2B4E1069BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m80B75619D3D43280CFC1D0556BBFE923F8643835_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mD343B871CBC9CC3590A9CB7326BB5E263AD03BE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m4CA597288EC15016493B62A210A4A63E27177117_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mC8DD05ED5A94E9D71568B93F1FBC1A03B3A4E385_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mD85ED63385062F8013FBC6C57320F2B23C975EFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mFEAE796204BD77488174AB22E0DE4C2721159335_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m132E4E286C55B63A011879B1F62299A7E6CF8DE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m21C7125C1D35261357C56A874C207249FC3E4F4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m2E4C1612FFBB402B6CF496C40499B9B84734E878_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m422894DCBE54CC53F8C3729BEE72B601B02C8686_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyCollection_GetEnumerator_mB40FC79A8A11DB8F002E9192693045C2F194E3E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m3A7E9AECB2ED791F09FADAD0BC7B826FB62A85A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mAC5B95A51ACDF83BD8AF7C84815956F1571EBDA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m8EC63B0A917684D71B0938CD239EF153D6D5AC92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_mEC947B45B7F992351EFE2AD95F9D29AB3165DA96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_GetEnumerator_m311A1E04C52E396219D02261B478965B9C97BD3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_mBDB81B637CD62D30A1C0B03D246CE38660A6FB1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_GetEnumerator_m1B01F115659146468CB5EE9025E45905AB1279DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* LifecycleScope_tEA98D004E7CFF981DC51524B020E4CBD58D964CB_0_0_0_var;
struct Assembly_t_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2;

struct CopyInfoU5BU5D_t99CD8AF5B14252370B2B7C05032486DF882AF466;
struct CopyInfoU5BU5D_tC5EFD432382597328F5463CE3F49D3DA0CB4FCF6;
struct DeferredArrayU5BU5D_t2B402FF2AC2B32AA6CC9A5004046806319D243DC;
struct DeferredArrayU5BU5D_tB4ED071664EA73A4D56895411476AB8A983CBCF1;
struct ItemU5BU5D_tB2AB30F4C7952C4FA867468576E1493A8858A165;
struct KeyValuePair_2U5BU5D_t59BE3E2793BE8FC78C2EE42EAEC58E864348B40C;
struct KeyValuePair_2U5BU5D_t8E7451B50D849638463A256F730434F5AC214B52;
struct KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA;
struct KeyValuePair_2U5BU5D_t899E6C9DD89ED99CCF993FA90A368CCB9286EC61;
struct NativeArray_1U5BU5D_t75698E5C2142DD4A324DD38EE484D69C8FD2CFD3;
struct NativeArray_1U5BU5D_t48F28BC4076C1A1608AA864367077AD64E04C11D;
struct NativeArray_1U5BU5D_t07FE0FFB798A14A16B56C709EBB100AA9D986CA4;
struct NativeArray_1U5BU5D_tB9179B8E492F9CEBC40651BF1C66A50255128C61;
struct CustomAttributeNamedArgumentU5BU5D_tC0A39D9401E28662213F5958EFF5D26D0681B440;
struct CustomAttributeTypedArgumentU5BU5D_t6CAA09EC6AACBED57FC8B02C587D50BF6B738C6B;
struct ImplicitLifecycleScopeU5BU5D_t1C10C825AEAC8ACF7250C9F8748855C85884D38D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct SortNodeU5BU5D_t93BC9DAFE9D4796A15C2DAEEAA4799B6D0A6179B;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct ArraySortHelper_1_tEC109463DA70EE9C9096D4971D34412677570D28  : public RuntimeObject
{
};
struct ArraySortHelper_1_t3533F5404321426857F56650163B6A6729E7158D  : public RuntimeObject
{
};
struct ArraySortHelper_1_t7737E5D659C96F9001D7F147BCD524DC66D0D4DD  : public RuntimeObject
{
};
struct ArraySortHelper_1_t333E7CEAC391412941D21F2FCAFBEC610B5324AA  : public RuntimeObject
{
};
struct ArraySortHelper_1_tA6EE6D66AFBD4037261CC901C43D4945B05C117E  : public RuntimeObject
{
};
struct ArraySortHelper_1_t113B40406DB1AFB29A002792A3DE4DE156C3C51D  : public RuntimeObject
{
};
struct ArraySortHelper_1_tFC3766CE9CF4C077AB50CBC92CD58E2F2E2AEC4D  : public RuntimeObject
{
};
struct ArraySortHelper_1_t9D5988695D0E27FC2C660482823CD24E7867C57E  : public RuntimeObject
{
};
struct ArraySortHelper_1_t1C05FD7083D194EB20ECE9BF364EE61BA5DFE1B1  : public RuntimeObject
{
};
struct ArraySortHelper_1_t3161D1D2810FDADCBA98BC302546D9CF98CFA41F  : public RuntimeObject
{
};
struct ArraySortHelper_1_tCF4AD90F61645344CEE07FF96E146A134CF88716  : public RuntimeObject
{
};
struct ArraySortHelper_1_t9AC8E0CAF25D5AA0127EDCAF3968B41697DFDDDE  : public RuntimeObject
{
};
struct ArraySortHelper_1_t999CC4B5DBE0626519030FE7B005516753FB7335  : public RuntimeObject
{
};
struct Dictionary_2_tD1D7C3C9439A06F868D4705EB293B45335991F83  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tAABC49AF86D770891D85331C61A2CF1F7BCB6899* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t59AB6D7A56AAB8B527E4EEBED39397629A9430E0* ____keys;
	ValueCollection_tB7C740A97431C55C62CC43DA7712B5896DBED97F* ____values;
	RuntimeObject* ____syncRoot;
};
struct KeyCollection_t59AB6D7A56AAB8B527E4EEBED39397629A9430E0  : public RuntimeObject
{
	Dictionary_2_tD1D7C3C9439A06F868D4705EB293B45335991F83* ____dictionary;
};
struct List_1_t9CDC351A1FD4D84CA6FE8FF3EAD218C909593E14  : public RuntimeObject
{
	ActiveLifecycleScopeBaseU5BU5D_t838742F7550A7877BD0F3E2C6EB34055C35B57B2* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E  : public RuntimeObject
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF  : public RuntimeObject
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t0213AA1BB5D12D3BCD5727E71F92BE13870D391A  : public RuntimeObject
{
	ScopeTransitionRequestBaseU5BU5D_t607E74D78847B27124900B6FFF0ED216E09E95C7* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ValueCollection_tB7C740A97431C55C62CC43DA7712B5896DBED97F  : public RuntimeObject
{
	Dictionary_2_tD1D7C3C9439A06F868D4705EB293B45335991F83* ____dictionary;
};
struct Activator_tB31D4E2D282C5AA90D61D6EB0A297A5D3D41DA24  : public RuntimeObject
{
};
struct ActiveLifecycleScopeBase_t0F0C7F8D06A577773F8D661F8CCE4F9FA9999A8C  : public RuntimeObject
{
	LifecycleScopeBase_t7CC30D9721A69BA0A9E955EAED505A32007C0755* ___U3CScopeU3Ek__BackingField;
};
struct ActiveLifecycleScopesTracker_t21B0C18F9AC8D5A5832FC8DAD92E8759C6E6A8E7  : public RuntimeObject
{
	Dictionary_2_tD1D7C3C9439A06F868D4705EB293B45335991F83* ____activeScopes;
	ScopeTransitionHelper_t069C5DE337C0C8F615857F4D731C5CBE3B0F4347* ____scopeTransitionHelper;
	Queue_1_t0213AA1BB5D12D3BCD5727E71F92BE13870D391A* ____transitionRequestQueue;
	Dictionary_2_t54C1839F4EE32A546D24F6AD598F3A048EE2AB9A* ____autoCleanups;
	RuntimeObject* ____autoCleanupsLock;
};
struct AndroidJNI_t531BC9A6383F7C0F76A1270297952462F52308EE  : public RuntimeObject
{
};
struct AndroidJNIHelper_t2C1AB9F6B2295C20B24108936A003F65F02D71DD  : public RuntimeObject
{
};
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject;
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass;
};
struct Assembly_t  : public RuntimeObject
{
};
struct Assembly_t_marshaled_pinvoke
{
};
struct Assembly_t_marshaled_com
{
};
struct LifecycleScopeBase_t7CC30D9721A69BA0A9E955EAED505A32007C0755  : public RuntimeObject
{
	String_t* ___U3CNameU3Ek__BackingField;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CExplicitRequiredOuterScopesU3Ek__BackingField;
	bool ___U3CAllowNestedTransitionsU3Ek__BackingField;
	ImplicitLifecycleScopeU5BU5D_t1C10C825AEAC8ACF7250C9F8748855C85884D38D* ___U3CImplicitOuterScopesU3Ek__BackingField;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct ScopeTransitionHelper_t069C5DE337C0C8F615857F4D731C5CBE3B0F4347  : public RuntimeObject
{
	StackOrderedAssemblyList_t57E870538D7E4DC7B2168FFB75368CE0C906AF97* ____assemblyList;
	LifecycleMethodRegistry_t683994E033865F86C96A14E5F2674E6AD8B97EA8* ____lifecycleMethodRegistry;
	RuntimeObject* ___U3CNativeCallbackProviderU3Ek__BackingField;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct Enumerator_t01FAC2D987248212FF45463152AFF3B57F39A352 
{
	List_1_t9CDC351A1FD4D84CA6FE8FF3EAD218C909593E14* ____list;
	int32_t ____index;
	int32_t ____version;
	ActiveLifecycleScopeBase_t0F0C7F8D06A577773F8D661F8CCE4F9FA9999A8C* ____current;
};
struct Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9 
{
	List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* ____list;
	int32_t ____index;
	int32_t ____version;
	Il2CppSharedGenericObject* ____current;
};
struct Enumerator_t539AC62A1BE9934C67FD41CBB84103B4E3E98AC1 
{
	Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* ____q;
	int32_t ____version;
	int32_t ____index;
	Il2CppSharedGenericObject* ____currentElement;
};
struct Enumerator_t6E1C3DAF9D5E130F31F921E6BBBA1D4E27891201 
{
	Queue_1_t0213AA1BB5D12D3BCD5727E71F92BE13870D391A* ____q;
	int32_t ____version;
	int32_t ____index;
	ScopeTransitionRequestBase_t9E5F91D84A64F389496153A6DA14A6686E4E3C16* ____currentElement;
};
struct Enumerator_t624742B8D885649511A5739F11184E2221942252 
{
	Dictionary_2_tD1D7C3C9439A06F868D4705EB293B45335991F83* ____dictionary;
	int32_t ____index;
	int32_t ____version;
	ActiveLifecycleScopeBase_t0F0C7F8D06A577773F8D661F8CCE4F9FA9999A8C* ____currentValue;
};
struct Enumerator_tADBE53A4D403A692FEE79405C385A6A1DC739F7D 
{
	Dictionary_2_tE7CDB026141A092A986D0DA3CB2DFCE6BB552069* ____dictionary;
	int32_t ____index;
	int32_t ____version;
	Il2CppSharedGenericObject* ____currentValue;
};
struct Item_t7E1C074BAD45111B502C4559B0ECF73B3F52774E 
{
	Il2CppSharedGenericObject* ___Key;
	bool ___Value;
};
struct KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 
{
	Il2CppSharedGenericObject* ___key;
	Il2CppSharedGenericObject* ___value;
};
struct LifecycleScopeWithContext_1_t35373E7691E4D4045644241660D92D3E94032599  : public LifecycleScopeBase_t7CC30D9721A69BA0A9E955EAED505A32007C0755
{
	Il2CppSharedGenericObject* ___U3CContextU3Ek__BackingField;
};
struct NativeSlice_1_t135E2A23AA4EBDBCA846942F90F29A5004E8ACB5 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct UnmanagedRefCountedList_1_t87F605E6E2A53C987FAD9F7FE66842141F83ED97 
{
	union
	{
		struct
		{
			Data_tBBAC62CD211FDD01BE331E13953455EC5AD3E38F* ___m_Data;
		};
		uint8_t UnmanagedRefCountedList_1_t422A4815A59948FB5060BB10CB6D6DC9F24D2948__padding[8];
	};
};
struct UnmanagedRefCountedList_1_tBAFC6325EE6254F71867CBB35AC9CEFBA926FDEA 
{
	union
	{
		struct
		{
			Data_t91EFD39F1A5E53405108E488D434DB7452B22E8A* ___m_Data;
		};
		uint8_t UnmanagedRefCountedList_1_t422A4815A59948FB5060BB10CB6D6DC9F24D2948__padding[8];
	};
};
struct UnmanagedRefCountedList_1_t99A5F9010AF1EFC3F764B1EA44D4AEF7EC93E8EE 
{
	union
	{
		struct
		{
			Data_tD43A0A802BBF284FB327878A445148A56180D7DA* ___m_Data;
		};
		uint8_t UnmanagedRefCountedList_1_t422A4815A59948FB5060BB10CB6D6DC9F24D2948__padding[8];
	};
};
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F 
{
	Type_t* ___U3CArgumentTypeU3Ek__BackingField;
	RuntimeObject* ___U3CValueU3Ek__BackingField;
};
struct CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_marshaled_pinvoke
{
	Type_t* ___U3CArgumentTypeU3Ek__BackingField;
	Il2CppIUnknown* ___U3CValueU3Ek__BackingField;
};
struct CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_marshaled_com
{
	Type_t* ___U3CArgumentTypeU3Ek__BackingField;
	Il2CppIUnknown* ___U3CValueU3Ek__BackingField;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 
{
	union
	{
		struct
		{
			uint64_t ___m_rawData;
		};
		uint8_t EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8__padding[8];
	};
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Guid_t 
{
	int32_t ____a;
	int16_t ____b;
	int16_t ____c;
	uint8_t ____d;
	uint8_t ____e;
	uint8_t ____f;
	uint8_t ____g;
	uint8_t ____h;
	uint8_t ____i;
	uint8_t ____j;
	uint8_t ____k;
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct LifecycleScope_tEA98D004E7CFF981DC51524B020E4CBD58D964CB  : public LifecycleScopeBase_t7CC30D9721A69BA0A9E955EAED505A32007C0755
{
};
struct LifecycleScopeKey_t786C4635697BF09DC1C3BA0331E34017B8BA961D 
{
	Type_t* ____scopeType;
	RuntimeObject* ____context;
};
struct LifecycleScopeKey_t786C4635697BF09DC1C3BA0331E34017B8BA961D_marshaled_pinvoke
{
	Type_t* ____scopeType;
	Il2CppIUnknown* ____context;
};
struct LifecycleScopeKey_t786C4635697BF09DC1C3BA0331E34017B8BA961D_marshaled_com
{
	Type_t* ____scopeType;
	Il2CppIUnknown* ____context;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	int8_t ___m_value;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct Substring_t2E16755269E6716C22074D6BC0A9099915E67849 
{
	String_t* ___m_String;
	int32_t ___m_Index;
	int32_t ___m_Length;
};
struct Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_pinvoke
{
	char* ___m_String;
	int32_t ___m_Index;
	int32_t ___m_Length;
};
struct Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_com
{
	Il2CppChar* ___m_String;
	int32_t ___m_Index;
	int32_t ___m_Length;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	int32_t ___m_X;
	int32_t ___m_Y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 
{
	int32_t ___m_X;
	int32_t ___m_Y;
	int32_t ___m_Z;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
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
struct XrExtent2Df_t37D49873E6B8F4C890C1156AF2D0A54B3735C242 
{
	float ___width;
	float ___height;
};
struct MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D 
{
	union
	{
		struct
		{
		};
		uint8_t MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D__padding[1];
	};
};
struct MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00 
{
	union
	{
		struct
		{
		};
		uint8_t MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00__padding[1];
	};
};
struct MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23 
{
	union
	{
		struct
		{
		};
		uint8_t MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23__padding[1];
	};
};
struct SortNode_t6A06A977B925BF3F2ECC51B7C74B7A9AE8CE5C53 
{
	String_t* ___AssemblyName;
	Assembly_t* ___Assembly;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___Dependencies;
};
struct SortNode_t6A06A977B925BF3F2ECC51B7C74B7A9AE8CE5C53_marshaled_pinvoke
{
	char* ___AssemblyName;
	Assembly_t_marshaled_pinvoke ___Assembly;
	Il2CppSafeArray* ___Dependencies;
};
struct SortNode_t6A06A977B925BF3F2ECC51B7C74B7A9AE8CE5C53_marshaled_com
{
	Il2CppChar* ___AssemblyName;
	Assembly_t_marshaled_com* ___Assembly;
	Il2CppSafeArray* ___Dependencies;
};
struct ActiveLifecycleScopeWithContext_1_tD3998CF55244EF4B194F8B1E059746B5D9A85F79  : public ActiveLifecycleScopeBase_t0F0C7F8D06A577773F8D661F8CCE4F9FA9999A8C
{
	LifecycleScopeKey_t786C4635697BF09DC1C3BA0331E34017B8BA961D ___U3CScopeKeyU3Ek__BackingField;
};
struct ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC 
{
	intptr_t ____value;
};
struct CopyInfo_tB2613726E308EEDC2AE910784FA68BBB0A771565 
{
	void* ___srcCpuBuffer;
	GPUBuffer_1_tB27A42EE52EA38FD7117C4EC0B1E42703FFE4C36* ___dstGpuBuffer;
	NativeSlice_1_t135E2A23AA4EBDBCA846942F90F29A5004E8ACB5 ___pendingGpuCopies;
};
struct CopyInfo_tD052D128BF5295669FA0728D8E0336E9557CE744 
{
	void* ___srcCpuBuffer;
	GPUBuffer_1_tA6A8BA754BA691383F7FA4302803FC11DA7373F3* ___dstGpuBuffer;
	NativeSlice_1_t135E2A23AA4EBDBCA846942F90F29A5004E8ACB5 ___pendingGpuCopies;
};
struct Enumerator_t1D172B50FF172AB824E07EA102C607D9282D3CAE 
{
	Dictionary_2_tD1D7C3C9439A06F868D4705EB293B45335991F83* ____dictionary;
	int32_t ____index;
	int32_t ____version;
	LifecycleScopeKey_t786C4635697BF09DC1C3BA0331E34017B8BA961D ____currentKey;
};
struct Enumerator_t1A261715170E73393537C60CCC568DE6296C8F99 
{
	Dictionary_2_tE7CDB026141A092A986D0DA3CB2DFCE6BB552069* ____dictionary;
	int32_t ____index;
	int32_t ____version;
	LifecycleScopeKey_t786C4635697BF09DC1C3BA0331E34017B8BA961D ____currentKey;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D  : public RuntimeObject
{
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___javaInterface;
	intptr_t ___proxyObject;
};
struct BackgroundPositionKeyword_tE680A05B983D256AADC8E2CF1CA169D004B8641B 
{
	int32_t ___value__;
};
struct BackgroundSizeType_tD194B20FF5086D494ABF8D799124D2FC4FFCC674 
{
	int32_t ___value__;
};
struct CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 
{
	CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F ___U3CTypedValueU3Ek__BackingField;
	bool ___U3CIsFieldU3Ek__BackingField;
	String_t* ___U3CMemberNameU3Ek__BackingField;
	Type_t* ____attributeType;
	MemberInfo_t* ____lazyMemberInfo;
};
struct CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_marshaled_pinvoke
{
	CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_marshaled_pinvoke ___U3CTypedValueU3Ek__BackingField;
	int32_t ___U3CIsFieldU3Ek__BackingField;
	char* ___U3CMemberNameU3Ek__BackingField;
	Type_t* ____attributeType;
	MemberInfo_t* ____lazyMemberInfo;
};
struct CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_marshaled_com
{
	CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_marshaled_com ___U3CTypedValueU3Ek__BackingField;
	int32_t ___U3CIsFieldU3Ek__BackingField;
	Il2CppChar* ___U3CMemberNameU3Ek__BackingField;
	Type_t* ____attributeType;
	MemberInfo_t* ____lazyMemberInfo;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8  : public RuntimeObject
{
	bool ___m_disposed;
	intptr_t ___m_jobject;
};
struct ImplicitLifecycleScope_tB1D07078E6300A31DA61E2FFAB8D8A56AD296E38  : public LifecycleScope_tEA98D004E7CFF981DC51524B020E4CBD58D964CB
{
};
struct LayoutUnit_tF18EC17FE8588A01C72784546410EA0D9B1D2F22 
{
	int32_t ___value__;
};
struct MeshChangeState_t4CCBA82867A78CD1241B037198571A5365D7910C 
{
	int32_t ___value__;
};
struct PxrPlaneOrientation_t661254737FDB9A4204FCF7385AC28A6AB6BD0986 
{
	int32_t ___value__;
};
struct PxrSceneBox2D_t897B41ADAEF45A51EC9A052C65CB61AF061B37F8 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___offset;
	XrExtent2Df_t37D49873E6B8F4C890C1156AF2D0A54B3735C242 ___extent;
};
struct PxrSemanticLabel_tE8A1B61191A6B8C4A300A7FF4BF1508EC1FACC7B 
{
	int32_t ___value__;
};
struct Repeat_tC0330B75B12D24B063BA5151AF3BB73B85D8B840 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Scale;
	bool ___m_IsNone;
};
struct Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Scale;
	int32_t ___m_IsNone;
};
struct Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Scale;
	int32_t ___m_IsNone;
};
struct StackCrawlMark_t95CDBA5EE7D71D392741A5533D7EB93341DFC730 
{
	int32_t ___value__;
};
struct StyleKeyword_t2812E72266C15CBA8927586972DC2FD27B10E705 
{
	int32_t ___value__;
};
struct TextAutoSizeMode_t10C0C54209C97D8A231AF021AE2F9DFFD26EE2C9 
{
	int32_t ___value__;
};
struct TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___offset;
	float ___blurRadius;
};
struct TimeUnit_t56A79CDB672E98A4EE28002BD23B6D5E0BAA2649 
{
	int32_t ___value__;
};
struct TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321 
{
	union
	{
		struct
		{
			UnmanagedRefCountedList_1_t99A5F9010AF1EFC3F764B1EA44D4AEF7EC93E8EE ___transitionDelay;
			UnmanagedRefCountedList_1_t99A5F9010AF1EFC3F764B1EA44D4AEF7EC93E8EE ___transitionDuration;
			UnmanagedRefCountedList_1_tBAFC6325EE6254F71867CBB35AC9CEFBA926FDEA ___transitionProperty;
			UnmanagedRefCountedList_1_t87F605E6E2A53C987FAD9F7FE66842141F83ED97 ___transitionTimingFunction;
		};
		uint8_t TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321__padding[32];
	};
};
struct jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			bool ___z;
		};
		#pragma pack(pop, tp)
		struct
		{
			bool ___z_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			Il2CppChar ___c;
		};
		#pragma pack(pop, tp)
		struct
		{
			Il2CppChar ___c_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_forAlignmentOnly;
		};
	};
};
struct jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___z;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___z_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___c;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___c_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_forAlignmentOnly;
		};
	};
};
struct jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___z;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___z_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___c;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___c_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_forAlignmentOnly;
		};
	};
};
struct ScopeTransitionType_t6E07CFC7F104E66937274EA67AF2704D03670F82 
{
	int32_t ___value__;
};
struct Unit_t21DCD5C095F7DC1A0B9A47CAF8CAD3E7776CD3DB 
{
	int32_t ___value__;
};
struct JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB 
{
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___text;
	bool ___hasEscapes;
};
struct JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB_marshaled_pinvoke
{
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_pinvoke ___text;
	int32_t ___hasEscapes;
};
struct JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB_marshaled_com
{
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_com ___text;
	int32_t ___hasEscapes;
};
struct JsonValueType_t36BA339F107E5E9C0966C45F896E27F3BCC5A2AB 
{
	int32_t ___value__;
};
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t76F16C71E23AB5F30821F9564775BA0C510012AA 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tB946AB7C39022A3069BADCA1BFB2EB857A84AAD9 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 
{
	ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC ____pointer;
	int32_t ____length;
};
struct Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC 
{
	float ___m_Value;
	int32_t ___m_Unit;
};
struct BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F 
{
	int32_t ___x;
	int32_t ___y;
};
struct Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 
{
	float ___m_Value;
	int32_t ___m_Unit;
};
struct PxrPlaneData_tAFDE1DF6F2D34BF1964024F27AE6B2D3A0206268 
{
	Guid_t ___uuid;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation;
	int32_t ___label;
	PxrSceneBox2D_t897B41ADAEF45A51EC9A052C65CB61AF061B37F8 ___box2D;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___indices;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___vertices;
	int32_t ___state;
	int32_t ___orientationMode;
};
struct PxrPlaneData_tAFDE1DF6F2D34BF1964024F27AE6B2D3A0206268_marshaled_pinvoke
{
	Guid_t ___uuid;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation;
	int32_t ___label;
	PxrSceneBox2D_t897B41ADAEF45A51EC9A052C65CB61AF061B37F8 ___box2D;
	Il2CppSafeArray* ___indices;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___vertices;
	int32_t ___state;
	int32_t ___orientationMode;
};
struct PxrPlaneData_tAFDE1DF6F2D34BF1964024F27AE6B2D3A0206268_marshaled_com
{
	Guid_t ___uuid;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation;
	int32_t ___label;
	PxrSceneBox2D_t897B41ADAEF45A51EC9A052C65CB61AF061B37F8 ___box2D;
	Il2CppSafeArray* ___indices;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___vertices;
	int32_t ___state;
	int32_t ___orientationMode;
};
struct PxrSpatialMeshInfo_tEDA6A6881BC7E467F33041929F90AC71D5D4238A 
{
	Guid_t ___uuid;
	int32_t ___state;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___indices;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___vertices;
	PxrSemanticLabelU5BU5D_tCEE1274FD9248B90C2D06C3BFF1800AA713EF698* ___labels;
};
struct PxrSpatialMeshInfo_tEDA6A6881BC7E467F33041929F90AC71D5D4238A_marshaled_pinvoke
{
	Guid_t ___uuid;
	int32_t ___state;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation;
	Il2CppSafeArray* ___indices;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___vertices;
	int32_t* ___labels;
};
struct PxrSpatialMeshInfo_tEDA6A6881BC7E467F33041929F90AC71D5D4238A_marshaled_com
{
	Guid_t ___uuid;
	int32_t ___state;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation;
	Il2CppSafeArray* ___indices;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___vertices;
	int32_t* ___labels;
};
struct StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC 
{
	Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_marshaled_pinvoke
{
	Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshaled_pinvoke ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_marshaled_com
{
	Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshaled_com ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 
{
	int32_t ___m_Keyword;
	TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 ___m_Value;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E 
{
	float ___m_Value;
	int32_t ___m_Unit;
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct ScopeTransitionRequestBase_t9E5F91D84A64F389496153A6DA14A6686E4E3C16  : public RuntimeObject
{
	LifecycleScopeBase_t7CC30D9721A69BA0A9E955EAED505A32007C0755* ___U3CScopeU3Ek__BackingField;
	int32_t ___U3CTransitionTypeU3Ek__BackingField;
	bool ___U3CAlsoExitNestedScopesU3Ek__BackingField;
};
struct JsonValue_t01DB320267C848E729A400EF2345979978F851D2 
{
	int32_t ___type;
	bool ___boolValue;
	double ___realValue;
	int64_t ___integerValue;
	JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB ___stringValue;
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___arrayValue;
	Dictionary_2_t6682243BDABA638FCBE4F1D9875B5B1455A7686E* ___objectValue;
	RuntimeObject* ___anyValue;
};
struct JsonValue_t01DB320267C848E729A400EF2345979978F851D2_marshaled_pinvoke
{
	int32_t ___type;
	int32_t ___boolValue;
	double ___realValue;
	int64_t ___integerValue;
	JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB_marshaled_pinvoke ___stringValue;
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___arrayValue;
	Dictionary_2_t6682243BDABA638FCBE4F1D9875B5B1455A7686E* ___objectValue;
	Il2CppIUnknown* ___anyValue;
};
struct JsonValue_t01DB320267C848E729A400EF2345979978F851D2_marshaled_com
{
	int32_t ___type;
	int32_t ___boolValue;
	double ___realValue;
	int64_t ___integerValue;
	JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB_marshaled_com ___stringValue;
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___arrayValue;
	Dictionary_2_t6682243BDABA638FCBE4F1D9875B5B1455A7686E* ___objectValue;
	Il2CppIUnknown* ___anyValue;
};
struct DeferredArray_tB1EEA722CAEFADCA5DB101F288131BDB91341699 
{
	NativeArray_1_t76F16C71E23AB5F30821F9564775BA0C510012AA ___array;
	int32_t ___framesRemaining;
};
struct DeferredArray_t550A0C1FE3282F51201CDCB03B920FD2C8F8A819 
{
	NativeArray_1_tB946AB7C39022A3069BADCA1BFB2EB857A84AAD9 ___array;
	int32_t ___framesRemaining;
};
struct KeyValuePair_2_t0BA7B6CDC5145C72EF97C07CD31755E3D104DAC5 
{
	Guid_t ___key;
	PxrPlaneData_tAFDE1DF6F2D34BF1964024F27AE6B2D3A0206268 ___value;
};
struct KeyValuePair_2_tCAFDA02F578F9C36A2A1F8B598E89B9F0D5D1365 
{
	Guid_t ___key;
	PxrSpatialMeshInfo_tEDA6A6881BC7E467F33041929F90AC71D5D4238A ___value;
};
struct KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764 
{
	Il2CppSharedGenericObject* ___key;
	JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___value;
};
struct ScopeTransitionRequestWithContext_1_t7D86FB5BB8860C08CD532994E81CE06405D87992  : public ScopeTransitionRequestBase_t9E5F91D84A64F389496153A6DA14A6686E4E3C16
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 
{
	int32_t ___keyword;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___offset;
};
struct BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 
{
	int32_t ___m_SizeType;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
};
struct MemberAccessException_t4BB9AF02B906BB4818600FC8988DECA4D37F2EFC  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 
{
	Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC ___m_Angle;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Axis;
	bool ___m_IsNone;
};
struct Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshaled_pinvoke
{
	Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC ___m_Angle;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Axis;
	int32_t ___m_IsNone;
};
struct Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshaled_com
{
	Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC ___m_Angle;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Axis;
	int32_t ___m_IsNone;
};
struct TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A 
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_MinSize;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_MaxSize;
	int32_t ___m_Mode;
};
struct TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
};
struct Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E 
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
	bool ___m_isNone;
};
struct Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_pinvoke
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
	int32_t ___m_isNone;
};
struct Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_com
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
	int32_t ___m_isNone;
};
struct TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D  : public Type_t
{
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct MissingMemberException_tB9D7B25FF06EEBB52D036DA8B1BE67F67619D211  : public MemberAccessException_t4BB9AF02B906BB4818600FC8988DECA4D37F2EFC
{
	String_t* ___ClassName;
	String_t* ___MemberName;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Signature;
};
struct RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1  : public TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D
{
	MonoTypeInfo_t90D5999A69AC524474FDEAC50F55B6CE868AB501* ___type_info;
	RuntimeObject* ___GenericCache;
	RuntimeConstructorInfo_tB41E49C7CFA74A03CCC986E78ABB0C0BD331A5AE* ___m_serializationCtor;
};
struct StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B 
{
	Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_marshaled_pinvoke
{
	Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshaled_pinvoke ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_marshaled_com
{
	Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshaled_com ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A 
{
	int32_t ___m_Keyword;
	TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A ___m_Value;
};
struct StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 
{
	TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 
{
	Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_marshaled_pinvoke
{
	Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_pinvoke ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_marshaled_com
{
	Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_com ___m_Value;
	int32_t ___m_Keyword;
};
struct TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808 
{
	union
	{
		struct
		{
			Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 ___scale;
			Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 ___rotate;
			Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E ___translate;
			TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 ___transformOrigin;
			int32_t _____dummy;
		};
		uint8_t TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808__padding[88];
	};
};
struct TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808_marshaled_pinvoke
{
	union
	{
		struct
		{
			Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshaled_pinvoke ___scale;
			Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshaled_pinvoke ___rotate;
			Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_pinvoke ___translate;
			TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 ___transformOrigin;
			int32_t _____dummy;
		};
		uint8_t TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808__padding[88];
	};
};
struct TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808_marshaled_com
{
	union
	{
		struct
		{
			Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshaled_com ___scale;
			Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshaled_com ___rotate;
			Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_com ___translate;
			TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 ___transformOrigin;
			int32_t _____dummy;
		};
		uint8_t TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808__padding[88];
	};
};
struct VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B 
{
	union
	{
		struct
		{
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor;
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___borderBottomColor;
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___borderLeftColor;
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___borderRightColor;
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___borderTopColor;
			EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___backgroundImage;
			BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F ___backgroundRepeat;
			Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___borderBottomLeftRadius;
			Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___borderBottomRightRadius;
			Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___borderTopLeftRadius;
			Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___borderTopRightRadius;
			BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 ___backgroundPositionX;
			BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 ___backgroundPositionY;
			BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 ___backgroundSize;
			float ___opacity;
		};
		uint8_t VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B__padding[176];
	};
};
struct MissingMethodException_t3D861B41F6520C32A7994A884343802925703155  : public MissingMemberException_tB9D7B25FF06EEBB52D036DA8B1BE67F67619D211
{
};
struct ArraySortHelper_1_tEC109463DA70EE9C9096D4971D34412677570D28_StaticFields
{
	ArraySortHelper_1_tEC109463DA70EE9C9096D4971D34412677570D28* ___s_defaultArraySortHelper;
};
struct ArraySortHelper_1_t3533F5404321426857F56650163B6A6729E7158D_StaticFields
{
	ArraySortHelper_1_t3533F5404321426857F56650163B6A6729E7158D* ___s_defaultArraySortHelper;
};
struct ArraySortHelper_1_t7737E5D659C96F9001D7F147BCD524DC66D0D4DD_StaticFields
{
	ArraySortHelper_1_t7737E5D659C96F9001D7F147BCD524DC66D0D4DD* ___s_defaultArraySortHelper;
};
struct ArraySortHelper_1_t333E7CEAC391412941D21F2FCAFBEC610B5324AA_StaticFields
{
	ArraySortHelper_1_t333E7CEAC391412941D21F2FCAFBEC610B5324AA* ___s_defaultArraySortHelper;
};
struct ArraySortHelper_1_tA6EE6D66AFBD4037261CC901C43D4945B05C117E_StaticFields
{
	ArraySortHelper_1_tA6EE6D66AFBD4037261CC901C43D4945B05C117E* ___s_defaultArraySortHelper;
};
struct ArraySortHelper_1_t113B40406DB1AFB29A002792A3DE4DE156C3C51D_StaticFields
{
	ArraySortHelper_1_t113B40406DB1AFB29A002792A3DE4DE156C3C51D* ___s_defaultArraySortHelper;
};
struct ArraySortHelper_1_tFC3766CE9CF4C077AB50CBC92CD58E2F2E2AEC4D_StaticFields
{
	ArraySortHelper_1_tFC3766CE9CF4C077AB50CBC92CD58E2F2E2AEC4D* ___s_defaultArraySortHelper;
};
struct ArraySortHelper_1_t9D5988695D0E27FC2C660482823CD24E7867C57E_StaticFields
{
	ArraySortHelper_1_t9D5988695D0E27FC2C660482823CD24E7867C57E* ___s_defaultArraySortHelper;
};
struct ArraySortHelper_1_t1C05FD7083D194EB20ECE9BF364EE61BA5DFE1B1_StaticFields
{
	ArraySortHelper_1_t1C05FD7083D194EB20ECE9BF364EE61BA5DFE1B1* ___s_defaultArraySortHelper;
};
struct ArraySortHelper_1_t3161D1D2810FDADCBA98BC302546D9CF98CFA41F_StaticFields
{
	ArraySortHelper_1_t3161D1D2810FDADCBA98BC302546D9CF98CFA41F* ___s_defaultArraySortHelper;
};
struct ArraySortHelper_1_tCF4AD90F61645344CEE07FF96E146A134CF88716_StaticFields
{
	ArraySortHelper_1_tCF4AD90F61645344CEE07FF96E146A134CF88716* ___s_defaultArraySortHelper;
};
struct ArraySortHelper_1_t9AC8E0CAF25D5AA0127EDCAF3968B41697DFDDDE_StaticFields
{
	ArraySortHelper_1_t9AC8E0CAF25D5AA0127EDCAF3968B41697DFDDDE* ___s_defaultArraySortHelper;
};
struct ArraySortHelper_1_t999CC4B5DBE0626519030FE7B005516753FB7335_StaticFields
{
	ArraySortHelper_1_t999CC4B5DBE0626519030FE7B005516753FB7335* ___s_defaultArraySortHelper;
};
struct List_1_t9CDC351A1FD4D84CA6FE8FF3EAD218C909593E14_StaticFields
{
	ActiveLifecycleScopeBaseU5BU5D_t838742F7550A7877BD0F3E2C6EB34055C35B57B2* ___s_emptyArray;
};
struct List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E_StaticFields
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___s_emptyArray;
};
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	bool ___enableDebugPrints;
};
struct ScopeTransitionHelper_t069C5DE337C0C8F615857F4D731C5CBE3B0F4347_StaticFields
{
	String_t* ___k_ProfilerMarkerPrefix;
	String_t* ___k_DetailedInvokeMarkerPrefix;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector;
};
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_StaticFields
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Zero;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_One;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Up;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Down;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Left;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Right;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Forward;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Back;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector;
};
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_StaticFields
{
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___s_JavaLangSystemClass;
	intptr_t ___s_HashCodeMethodID;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
struct RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_StaticFields
{
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___ValueType;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___EnumType;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___ObjectType;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___StringType;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___DelegateType;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___s_SICtorParamTypes;
	Func_3_t0787D839A577CB564A3192D4164941D5F3DCFBB5* ___MakeTypeBuilderInstantiation;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___s_typedRef;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
struct ImplicitLifecycleScopeU5BU5D_t1C10C825AEAC8ACF7250C9F8748855C85884D38D  : public RuntimeArray
{
	ALIGN_FIELD (8) ImplicitLifecycleScope_tB1D07078E6300A31DA61E2FFAB8D8A56AD296E38* m_Items[1];

	inline ImplicitLifecycleScope_tB1D07078E6300A31DA61E2FFAB8D8A56AD296E38* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ImplicitLifecycleScope_tB1D07078E6300A31DA61E2FFAB8D8A56AD296E38** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ImplicitLifecycleScope_tB1D07078E6300A31DA61E2FFAB8D8A56AD296E38* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ImplicitLifecycleScope_tB1D07078E6300A31DA61E2FFAB8D8A56AD296E38* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ImplicitLifecycleScope_tB1D07078E6300A31DA61E2FFAB8D8A56AD296E38** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ImplicitLifecycleScope_tB1D07078E6300A31DA61E2FFAB8D8A56AD296E38* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct CustomAttributeNamedArgumentU5BU5D_tC0A39D9401E28662213F5958EFF5D26D0681B440  : public RuntimeArray
{
	ALIGN_FIELD (8) CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 m_Items[1];

	inline CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CTypedValueU3Ek__BackingField))->___U3CArgumentTypeU3Ek__BackingField), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CTypedValueU3Ek__BackingField))->___U3CValueU3Ek__BackingField), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CMemberNameU3Ek__BackingField), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____attributeType), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____lazyMemberInfo), (void*)NULL);
		#endif
	}
	inline CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CTypedValueU3Ek__BackingField))->___U3CArgumentTypeU3Ek__BackingField), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CTypedValueU3Ek__BackingField))->___U3CValueU3Ek__BackingField), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CMemberNameU3Ek__BackingField), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____attributeType), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____lazyMemberInfo), (void*)NULL);
		#endif
	}
};
struct CustomAttributeTypedArgumentU5BU5D_t6CAA09EC6AACBED57FC8B02C587D50BF6B738C6B  : public RuntimeArray
{
	ALIGN_FIELD (8) CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F m_Items[1];

	inline CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CArgumentTypeU3Ek__BackingField), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CValueU3Ek__BackingField), (void*)NULL);
		#endif
	}
	inline CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CArgumentTypeU3Ek__BackingField), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CValueU3Ek__BackingField), (void*)NULL);
		#endif
	}
};
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppSharedGenericObject* m_Items[1];

	inline Il2CppSharedGenericObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppSharedGenericObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppSharedGenericObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Il2CppSharedGenericObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppSharedGenericObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppSharedGenericObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299  : public RuntimeArray
{
	ALIGN_FIELD (8) uint64_t m_Items[1];

	inline uint64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint64_t value)
	{
		m_Items[index] = value;
	}
};
struct SortNodeU5BU5D_t93BC9DAFE9D4796A15C2DAEEAA4799B6D0A6179B  : public RuntimeArray
{
	ALIGN_FIELD (8) SortNode_t6A06A977B925BF3F2ECC51B7C74B7A9AE8CE5C53 m_Items[1];

	inline SortNode_t6A06A977B925BF3F2ECC51B7C74B7A9AE8CE5C53 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SortNode_t6A06A977B925BF3F2ECC51B7C74B7A9AE8CE5C53* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SortNode_t6A06A977B925BF3F2ECC51B7C74B7A9AE8CE5C53 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___AssemblyName), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Assembly), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Dependencies), (void*)NULL);
		#endif
	}
	inline SortNode_t6A06A977B925BF3F2ECC51B7C74B7A9AE8CE5C53 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SortNode_t6A06A977B925BF3F2ECC51B7C74B7A9AE8CE5C53* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SortNode_t6A06A977B925BF3F2ECC51B7C74B7A9AE8CE5C53 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___AssemblyName), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Assembly), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Dependencies), (void*)NULL);
		#endif
	}
};
struct CopyInfoU5BU5D_t99CD8AF5B14252370B2B7C05032486DF882AF466  : public RuntimeArray
{
	ALIGN_FIELD (8) CopyInfo_tB2613726E308EEDC2AE910784FA68BBB0A771565 m_Items[1];

	inline CopyInfo_tB2613726E308EEDC2AE910784FA68BBB0A771565 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CopyInfo_tB2613726E308EEDC2AE910784FA68BBB0A771565* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CopyInfo_tB2613726E308EEDC2AE910784FA68BBB0A771565 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___dstGpuBuffer), (void*)NULL);
	}
	inline CopyInfo_tB2613726E308EEDC2AE910784FA68BBB0A771565 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CopyInfo_tB2613726E308EEDC2AE910784FA68BBB0A771565* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CopyInfo_tB2613726E308EEDC2AE910784FA68BBB0A771565 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___dstGpuBuffer), (void*)NULL);
	}
};
struct CopyInfoU5BU5D_tC5EFD432382597328F5463CE3F49D3DA0CB4FCF6  : public RuntimeArray
{
	ALIGN_FIELD (8) CopyInfo_tD052D128BF5295669FA0728D8E0336E9557CE744 m_Items[1];

	inline CopyInfo_tD052D128BF5295669FA0728D8E0336E9557CE744 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CopyInfo_tD052D128BF5295669FA0728D8E0336E9557CE744* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CopyInfo_tD052D128BF5295669FA0728D8E0336E9557CE744 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___dstGpuBuffer), (void*)NULL);
	}
	inline CopyInfo_tD052D128BF5295669FA0728D8E0336E9557CE744 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CopyInfo_tD052D128BF5295669FA0728D8E0336E9557CE744* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CopyInfo_tD052D128BF5295669FA0728D8E0336E9557CE744 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___dstGpuBuffer), (void*)NULL);
	}
};
struct DeferredArrayU5BU5D_t2B402FF2AC2B32AA6CC9A5004046806319D243DC  : public RuntimeArray
{
	ALIGN_FIELD (8) DeferredArray_tB1EEA722CAEFADCA5DB101F288131BDB91341699 m_Items[1];

	inline DeferredArray_tB1EEA722CAEFADCA5DB101F288131BDB91341699 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DeferredArray_tB1EEA722CAEFADCA5DB101F288131BDB91341699* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DeferredArray_tB1EEA722CAEFADCA5DB101F288131BDB91341699 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline DeferredArray_tB1EEA722CAEFADCA5DB101F288131BDB91341699 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DeferredArray_tB1EEA722CAEFADCA5DB101F288131BDB91341699* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DeferredArray_tB1EEA722CAEFADCA5DB101F288131BDB91341699 value)
	{
		m_Items[index] = value;
	}
};
struct DeferredArrayU5BU5D_tB4ED071664EA73A4D56895411476AB8A983CBCF1  : public RuntimeArray
{
	ALIGN_FIELD (8) DeferredArray_t550A0C1FE3282F51201CDCB03B920FD2C8F8A819 m_Items[1];

	inline DeferredArray_t550A0C1FE3282F51201CDCB03B920FD2C8F8A819 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DeferredArray_t550A0C1FE3282F51201CDCB03B920FD2C8F8A819* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DeferredArray_t550A0C1FE3282F51201CDCB03B920FD2C8F8A819 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline DeferredArray_t550A0C1FE3282F51201CDCB03B920FD2C8F8A819 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DeferredArray_t550A0C1FE3282F51201CDCB03B920FD2C8F8A819* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DeferredArray_t550A0C1FE3282F51201CDCB03B920FD2C8F8A819 value)
	{
		m_Items[index] = value;
	}
};
struct ItemU5BU5D_tB2AB30F4C7952C4FA867468576E1493A8858A165  : public RuntimeArray
{
	ALIGN_FIELD (8) Item_t7E1C074BAD45111B502C4559B0ECF73B3F52774E m_Items[1];

	inline Item_t7E1C074BAD45111B502C4559B0ECF73B3F52774E GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Item_t7E1C074BAD45111B502C4559B0ECF73B3F52774E* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Item_t7E1C074BAD45111B502C4559B0ECF73B3F52774E value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Key), (void*)NULL);
	}
	inline Item_t7E1C074BAD45111B502C4559B0ECF73B3F52774E GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Item_t7E1C074BAD45111B502C4559B0ECF73B3F52774E* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Item_t7E1C074BAD45111B502C4559B0ECF73B3F52774E value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Key), (void*)NULL);
	}
};
struct KeyValuePair_2U5BU5D_t59BE3E2793BE8FC78C2EE42EAEC58E864348B40C  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t0BA7B6CDC5145C72EF97C07CD31755E3D104DAC5 m_Items[1];

	inline KeyValuePair_2_t0BA7B6CDC5145C72EF97C07CD31755E3D104DAC5 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t0BA7B6CDC5145C72EF97C07CD31755E3D104DAC5* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t0BA7B6CDC5145C72EF97C07CD31755E3D104DAC5 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___indices), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___vertices), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_t0BA7B6CDC5145C72EF97C07CD31755E3D104DAC5 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t0BA7B6CDC5145C72EF97C07CD31755E3D104DAC5* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t0BA7B6CDC5145C72EF97C07CD31755E3D104DAC5 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___indices), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___vertices), (void*)NULL);
		#endif
	}
};
struct KeyValuePair_2U5BU5D_t8E7451B50D849638463A256F730434F5AC214B52  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tCAFDA02F578F9C36A2A1F8B598E89B9F0D5D1365 m_Items[1];

	inline KeyValuePair_2_tCAFDA02F578F9C36A2A1F8B598E89B9F0D5D1365 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tCAFDA02F578F9C36A2A1F8B598E89B9F0D5D1365* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tCAFDA02F578F9C36A2A1F8B598E89B9F0D5D1365 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___indices), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___vertices), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___labels), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_tCAFDA02F578F9C36A2A1F8B598E89B9F0D5D1365 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tCAFDA02F578F9C36A2A1F8B598E89B9F0D5D1365* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tCAFDA02F578F9C36A2A1F8B598E89B9F0D5D1365 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___indices), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___vertices), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___labels), (void*)NULL);
		#endif
	}
};
struct KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 m_Items[1];

	inline KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
};
struct KeyValuePair_2U5BU5D_t899E6C9DD89ED99CCF993FA90A368CCB9286EC61  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764 m_Items[1];

	inline KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&((m_Items + index)->___value))->___stringValue))->___text))->___m_String), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___arrayValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___objectValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___anyValue), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&((m_Items + index)->___value))->___stringValue))->___text))->___m_String), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___arrayValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___objectValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___anyValue), (void*)NULL);
		#endif
	}
};
struct NativeArray_1U5BU5D_t75698E5C2142DD4A324DD38EE484D69C8FD2CFD3  : public RuntimeArray
{
	ALIGN_FIELD (8) NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 m_Items[1];

	inline NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 value)
	{
		m_Items[index] = value;
	}
};
struct NativeArray_1U5BU5D_t48F28BC4076C1A1608AA864367077AD64E04C11D  : public RuntimeArray
{
	ALIGN_FIELD (8) NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD m_Items[1];

	inline NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD value)
	{
		m_Items[index] = value;
	}
};
struct NativeArray_1U5BU5D_t07FE0FFB798A14A16B56C709EBB100AA9D986CA4  : public RuntimeArray
{
	ALIGN_FIELD (8) NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149 m_Items[1];

	inline NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149 value)
	{
		m_Items[index] = value;
	}
};
struct NativeArray_1U5BU5D_tB9179B8E492F9CEBC40651BF1C66A50255128C61  : public RuntimeArray
{
	ALIGN_FIELD (8) NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 m_Items[1];

	inline NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 value)
	{
		m_Items[index] = value;
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScopeTransitionRequestWithContext_1__ctor_m7A1A1AC74D13C0C6C043707C1E237708A5B7B9B9_gshared (ScopeTransitionRequestWithContext_1_t7D86FB5BB8860C08CD532994E81CE06405D87992* __this, LifecycleScopeWithContext_1_t35373E7691E4D4045644241660D92D3E94032599* ___0_scope, int32_t ___1_scopeTransitionType, bool ___2_alsoExitNestedScopes, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m02DF2B39305B32F97D425178F5054CE9830BFB10_gshared_inline (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* LifecycleScopeWithContext_1_get_Context_m71715E88B71B9A07D4F70E53A5142B8F5383AC27_gshared_inline (LifecycleScopeWithContext_1_t35373E7691E4D4045644241660D92D3E94032599* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m16F75E528EE6527E8B9E76AE7D7E455D5476C606_gshared (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4FE70573C5E0F31040F3B0DE433DF7996E83A5B3_gshared (Dictionary_2_tE7CDB026141A092A986D0DA3CB2DFCE6BB552069* __this, LifecycleScopeKey_t786C4635697BF09DC1C3BA0331E34017B8BA961D ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t5E448F9EF31B8C6F2D80CA7C7858AB780AB912A9* Dictionary_2_get_Keys_m3EE74149DC6731CDFEE5F22F0CA2058B59A8D2D9_gshared (Dictionary_2_tE7CDB026141A092A986D0DA3CB2DFCE6BB552069* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t1A261715170E73393537C60CCC568DE6296C8F99 KeyCollection_GetEnumerator_m563049CEC0F536822CF486D50D493664B71E875E_gshared (KeyCollection_t5E448F9EF31B8C6F2D80CA7C7858AB780AB912A9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFC9F10A3522A6F23AD402A6ADA759BB480B996E0_gshared (Enumerator_t1A261715170E73393537C60CCC568DE6296C8F99* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LifecycleScopeKey_t786C4635697BF09DC1C3BA0331E34017B8BA961D Enumerator_get_Current_m9C78D88F0F2E50F8F748978518338E28736E4522_gshared_inline (Enumerator_t1A261715170E73393537C60CCC568DE6296C8F99* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m519DFDF4A50759F18C329CF995A277BDCD05D5A4_gshared (Enumerator_t1A261715170E73393537C60CCC568DE6296C8F99* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ActiveLifecycleScopesTracker_IsInsideScopeWithActivationContext_TisIl2CppSharedGenericObject_TisIl2CppSharedGenericObject_m5267E4C686C348E337CB4A9ED51372D608957B0F_gshared (ActiveLifecycleScopesTracker_t21B0C18F9AC8D5A5832FC8DAD92E8759C6E6A8E7* __this, Il2CppSharedGenericObject* ___0_scopeContext, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t539AC62A1BE9934C67FD41CBB84103B4E3E98AC1 Queue_1_GetEnumerator_m931CF5C152723DE6DD0786DF3D5606A59C1BB1BF_gshared (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m30F4DD6AE424AEA73D1DA1D37B83EFC74AC44BDF_gshared (Enumerator_t539AC62A1BE9934C67FD41CBB84103B4E3E98AC1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Enumerator_get_Current_m818AA47F6124D3EC9A3CA48178D60E2D11D9C075_gshared (Enumerator_t539AC62A1BE9934C67FD41CBB84103B4E3E98AC1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mDDBE6898D653A86324F3FDF8B4F6EC84E9812EEC_gshared (Enumerator_t539AC62A1BE9934C67FD41CBB84103B4E3E98AC1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ActiveLifecycleScopesTracker_IsInsideScopeWithActivationContext_TisIl2CppSharedGenericObject_m65AF7C880B3A8B7B6F7C6F59C699EA3FC8FC1BEE_gshared (ActiveLifecycleScopesTracker_t21B0C18F9AC8D5A5832FC8DAD92E8759C6E6A8E7* __this, LifecycleScopeWithContext_1_t35373E7691E4D4045644241660D92D3E94032599* ___0_scopeWithContext, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7378BA5FBCA1E88080985FB810820B3F47DAD54C_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t7F798658A969389BB4AAA8E1ECC40A4682EF43A9* Dictionary_2_get_Values_mEC10CAC4B24A0C0E57AE9BF73D0378DA6D2C852A_gshared (Dictionary_2_tE7CDB026141A092A986D0DA3CB2DFCE6BB552069* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tADBE53A4D403A692FEE79405C385A6A1DC739F7D ValueCollection_GetEnumerator_mB5FEF01E8979132319CCEE6B77862DC944001B00_gshared (ValueCollection_t7F798658A969389BB4AAA8E1ECC40A4682EF43A9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m626C730AA6A4F537BA5966F2A087599D8EA2004C_gshared (Enumerator_tADBE53A4D403A692FEE79405C385A6A1DC739F7D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Enumerator_get_Current_mFB92CF0C22891AA06481368B806933878E96848C_gshared_inline (Enumerator_tADBE53A4D403A692FEE79405C385A6A1DC739F7D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mEB114AA8470C0E221193BA19C62E0D16284971C0_gshared (Enumerator_tADBE53A4D403A692FEE79405C385A6A1DC739F7D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m9832942FE310479E64D9D0D23F29C65305BE1622_gshared_inline (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9 List_1_GetEnumerator_mD48177D95D4B5D6A9D8E84E2477668C2850DD5D9_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD5CB9146005B12D9E7D7390E961933AB12147A62_gshared (Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Enumerator_get_Current_mA50CED82C4671CC4E1D82333FAC2587F700565D0_gshared_inline (Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2B096A69E95EF2C7A223BA853D66AEC59C4A5C25_gshared (Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m9B8C23C73DCE5610BAD4E4506C7260A603E3BD82_gshared (Dictionary_2_tE7CDB026141A092A986D0DA3CB2DFCE6BB552069* __this, LifecycleScopeKey_t786C4635697BF09DC1C3BA0331E34017B8BA961D ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActiveLifecycleScopesTracker_CreateScopeTransitionRequest_TisIl2CppSharedGenericObject_m781DD3D4A86DAE2D7A3F31DD07A1A4B6C4ACFFB7_gshared (ActiveLifecycleScopesTracker_t21B0C18F9AC8D5A5832FC8DAD92E8759C6E6A8E7* __this, LifecycleScopeWithContext_1_t35373E7691E4D4045644241660D92D3E94032599* ___0_lifecycleScope, int32_t ___1_scopeTransitionType, bool ___2_alsoExitNestedScopes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ActiveLifecycleScopesTracker_PrepareTryEnterScopeWithContext_TisIl2CppSharedGenericObject_m3D8B69D9E50547113449972B07933BE902744D59_gshared (ActiveLifecycleScopesTracker_t21B0C18F9AC8D5A5832FC8DAD92E8759C6E6A8E7* __this, LifecycleScopeWithContext_1_t35373E7691E4D4045644241660D92D3E94032599* ___0_lifecycleScope, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActiveLifecycleScopeWithContext_1__ctor_mDD6FD21DC68167495A10EE8C4AB04C783A8A809C_gshared (ActiveLifecycleScopeWithContext_1_tD3998CF55244EF4B194F8B1E059746B5D9A85F79* __this, LifecycleScopeWithContext_1_t35373E7691E4D4045644241660D92D3E94032599* ___0_scope, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LifecycleScopeKey_t786C4635697BF09DC1C3BA0331E34017B8BA961D LifecycleScopeKey_CreateFromScope_TisIl2CppSharedGenericObject_m613ECBEDFFC63C9393C625204DC116D94C244FBB_gshared (LifecycleScopeWithContext_1_t35373E7691E4D4045644241660D92D3E94032599* ___0_scope, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m0C37ECCAD4CA418B95EEE2AFCAEDCA430B3D6C6D_gshared (Dictionary_2_tE7CDB026141A092A986D0DA3CB2DFCE6BB552069* __this, LifecycleScopeKey_t786C4635697BF09DC1C3BA0331E34017B8BA961D ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ActiveLifecycleScopesTracker_PrepareTryExitScope_TisIl2CppSharedGenericObject_mB20E9E3D9D7A9E4B5F58A5783EB2EBB2733EF4E7_gshared (ActiveLifecycleScopesTracker_t21B0C18F9AC8D5A5832FC8DAD92E8759C6E6A8E7* __this, LifecycleScopeWithContext_1_t35373E7691E4D4045644241660D92D3E94032599* ___0_lifecycleScope, Il2CppSharedGenericObject* ___1_activationContext, bool ___2_alsoExitNestedScopes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* ActiveLifecycleScopeWithContext_1_get_Context_m45FFE4CAC1E3D5639C3DEE4433FAE9E204851CC0_gshared (ActiveLifecycleScopeWithContext_1_tD3998CF55244EF4B194F8B1E059746B5D9A85F79* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mA238034AD68BB6D92BDE20B1C8BED7498E6A28A8_gshared (Dictionary_2_tE7CDB026141A092A986D0DA3CB2DFCE6BB552069* __this, LifecycleScopeKey_t786C4635697BF09DC1C3BA0331E34017B8BA961D ___0_key, Il2CppSharedGenericObject** ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m181D7F12EB826B7D6B73742BFD85A667D533BABA_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mD9D29EE5CE27F4BFD0168818BF064EC5B3672F39_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081_gshared_inline (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_gshared_inline (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_mF1154ABCB79F43B3A71BFA8DCB85ACBDFA2838D5_gshared_inline (NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mCD832837FF5CE235B506272835BA049D56968E2F_gshared_inline (NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190 ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _AndroidJNIHelper_ConvertFromJNIArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mBF1AB84DE0B50E7C206BAD3C170D1F5AD2D9E343_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar _AndroidJNIHelper_ConvertFromJNIArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m9ECB51B699AB7B96368F39CC9F7C481340DD0BBC_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double _AndroidJNIHelper_ConvertFromJNIArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m1F7F249CC7CDA2D6E136C627D983569B3674EA73_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t _AndroidJNIHelper_ConvertFromJNIArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m901F767E3189385BB47B5B021C40507AAF67D477_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _AndroidJNIHelper_ConvertFromJNIArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m37A94A4CA9F6456009CABE27D4AA2ED7B8365168_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t _AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mBE697F1C4D60A7F2BB06784B5CB0C540B7FBF664_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t _AndroidJNIHelper_ConvertFromJNIArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m01777984AFB915C1167148BC6056336EB200B151_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float _AndroidJNIHelper_ConvertFromJNIArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6634501B2BC58937A4D852F6F2D8D55A9DFB6F64_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* _AndroidJNIHelper_ConvertFromJNIArray_TisIl2CppSharedGenericObject_mAD2432704589B67F3F93D55DF8B948DCBEBA4444_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetFieldID_TisIl2CppSharedGenericObject_mC4E70171E726BFD2EDF128963FAD90873B0289C5_gshared (intptr_t ___0_jclass, String_t* ___1_fieldName, bool ___2_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5C5661781E8C49E962C2556FC75101FD0E862AFD_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m465627642B00BC71088A5883058BB86DDBADABE0_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mA32D3320555971B585058A28FC5F5EC84DC10A34_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF0D2DB5B885B01587820A9F88C6CAD67C8DC1512_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB340108BAAC2DA25B45971B719093FDF9B13E745_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mF114D8205E13517DE4F8DB9772E9C40C7C43BD85_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m362BBB1CC3B8834A056A8F709649BD182E24E9BD_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m86B190CF71EDCB08177B90F98C76A9545AF09FCB_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisIl2CppSharedGenericObject_mFEAB91A44B644CE56BB6182931D1065B679E0B3A_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject__Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m72E1F5D2CE435E45651E8B970A73B9F5E3E03815_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJavaObject__Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m22710813CDD982DC5F88C2A4067FBFE1D57A3065_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJavaObject__Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m946CEC22A94586DE93BE0725E5F25E04589F69DE_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJavaObject__Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m08A0CE3C4BDDA756095A0A816C659587814F649E_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject__Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1BFF486C91846170C07AAF27EF84971FF0596B90_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJavaObject__Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mC6DBECDD44973120E0A56068ABE886D9A7016F5C_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJavaObject__Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mAE2F0D59E0CE54D36BB86C53218704FA72DC0350_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJavaObject__Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m71549B5031FEE0FBB78A9CE02EDADD14DBFFB56D_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* AndroidJavaObject__Call_TisIl2CppSharedGenericObject_m39A1E2B88CD5364F83417EFB65F1C296656D2F62_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject__CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m41529A6A47CC3B57286AC8F9C6388E54918DF450_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject__CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEE64E87A5A2BC0F38910643A9B91032AF38D882C_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJavaObject__CallStatic_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mB6A9E09630C485412DA1C0F2E04C67EEBE05E340_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* AndroidJavaObject__CallStatic_TisIl2CppSharedGenericObject_m8E1513A9554AAA1822CA51D0A816DCF16775AA37_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNIHelper_ConvertFromJNIArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0207DDD0AB7EE1136083B85289D4F16FD9A64ECC_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNIHelper_ConvertFromJNIArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m51DC292506277213F541434A51F81430E11E7226_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNIHelper_ConvertFromJNIArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF6AF89E7365D44A201C5A2C86C49EF49E2D6ADAD_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNIHelper_ConvertFromJNIArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF6FCB78A4CF7C2FB0375E88C31C70458F55F422C_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNIHelper_ConvertFromJNIArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m02707C23958FF03FA0345C2A17F66EE379A1468C_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m0CADE835010213386C1C07E63F70E55498142C20_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNIHelper_ConvertFromJNIArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m2BD2E924FBD117B44A2D5E741144FD7B1FCE918E_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNIHelper_ConvertFromJNIArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m93BCF3156F5C823F8C2B005523A618966B0A6DBB_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* AndroidJNIHelper_ConvertFromJNIArray_TisIl2CppSharedGenericObject_m6F1CD10E4BE61A7211FB87DA1D7D92C7FE85F8E4_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* AndroidJavaObject__GetStatic_TisIl2CppSharedGenericObject_m177F1A057E8F5EF05D9158BA272E890C6210044B_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_gshared_inline (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_gshared_inline (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_FromJavaArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mA1CB7EC9473B0674763C89AC566EC664159108E9_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE3914411BE312CBBA869835158E535A06CD3EEB4_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject__Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m73D49A76D8F24AD1815CF94E87F1EF4683A38EA6_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJavaObject_FromJavaArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m18459EC016E866EF307EC4D9442CD86FD9BC28B4_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m791647AA6EAD3B88467418F51CF53F5755AB38BA_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJavaObject__Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m8B3C7C06394410B77DB9953832CB9F8C29C28E89_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJavaObject_FromJavaArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m3CAD187DEBCBD88D94604015E86A37B8944847BC_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m44C60AAE64EE97BFD5D9D302E7BE5BE20E6862B3_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJavaObject__Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m0BA90472306DF5C3A1491FC3EB052DD58FA468C3_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJavaObject_FromJavaArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m62441E1DA5798B8F585F5EF18386C4FB739BFFC8_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3B57915B048BD436E00741CD146D62AC775E7BA3_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJavaObject__Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mA616697346ABF4A696B8F63B5F85AA92777EA400_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_FromJavaArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC1390BDE8BF42FAA78215DFE076A25F7AEA674D7_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF87CC238DDBB3C90C35846E626548847CC7E319D_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject__Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0D60BAB951F2C313123D62CAB81EEA263F2F0750_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJavaObject_FromJavaArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m6A8E0C87ADD6FC1CA3F936C0CC0AC4AB379A8422_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m9665934CC08FD80EB16882C4EA6FDBC5D9C3A175_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJavaObject__Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m4B925872A7B673BC9981AB72E3A229BBE0E1119E_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJavaObject_FromJavaArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mB474FE99696A6DEB269E0F1C3C7DA32CD8854410_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEF6ACD1C6C5237E0446DB9DBDAC40BA2660849BB_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJavaObject__Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA3300F1D8CC0B110426EAE23F5FB7F27FD8AE76B_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJavaObject_FromJavaArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mD5A794B10305822230E288BE2D72329A6EE0C8A4_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA3FFDC6948922BEFC787A297D5483BA277EEFF0C_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJavaObject__Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8EDEAF89FE2C5B65277B0FC57FAD4FA9253E1140_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* AndroidJavaObject_FromJavaArray_TisIl2CppSharedGenericObject_m22D9898503E929D77563392822CD11A056613AFF_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisIl2CppSharedGenericObject_m95122CB55DFAF463B14CBBA51C2B0811790DB90B_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* AndroidJavaObject__Call_TisIl2CppSharedGenericObject_m34A45129A0AA339AC2E31492EF928112EDECC197_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject__CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9EDC162A865064239ADA4058CD2A81B1A2CF6D0F_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject__CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4F31B91D2F03C3068A4BE95DB368B6DF715CE316_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJavaObject__CallStatic_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mBE3DBCB8C5A089C1FFCAB9FF46D177C2DEF4FAEC_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* AndroidJavaObject__CallStatic_TisIl2CppSharedGenericObject_mF9D318147E29742DAA4B5C033BFC68D29CC1123B_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisIl2CppSharedGenericObject_mB1CEFE624E92B82D234C1982AA2A7DF6AC5FD284_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetFieldID_TisIl2CppSharedGenericObject_mDFF491584A820BE0629A47ED3B790A199050D589_gshared (intptr_t ___0_jclass, String_t* ___1_fieldName, bool ___2_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* AndroidJavaObject__GetStatic_TisIl2CppSharedGenericObject_mF12B3A136CBDB98DF0876DF1FC47EA4A14D98A17_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1__ctor_m010AA1E4CD3820BCC07B77A482D6A17D5C7F14C2_gshared (ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050* __this, RuntimeObject* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1__ctor_mE22404DEC336AFE9817BF78FF9F7F90E07EE4F7A_gshared (ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513* __this, RuntimeObject* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1__ctor_mC1890FAC00703F47A655C35CBCB613C74A811580_gshared (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* __this, RuntimeObject* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m0AA0BC859F6008F37B680B00508C065B098C7D9A_gshared (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_array, int32_t ___1_index, int32_t ___2_length, uint64_t ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisSortNode_t6A06A977B925BF3F2ECC51B7C74B7A9AE8CE5C53_m8F7822162DB61B62B083C2CD23E5F632B85BF601_gshared (SortNodeU5BU5D_t93BC9DAFE9D4796A15C2DAEEAA4799B6D0A6179B* ___0_array, int32_t ___1_index, int32_t ___2_length, SortNode_t6A06A977B925BF3F2ECC51B7C74B7A9AE8CE5C53 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_tEC109463DA70EE9C9096D4971D34412677570D28* ArraySortHelper_1_get_Default_m9357CBDC001EFB2BA8D065940A5C9FEFED3CC036_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_BinarySearch_m65877F6FF5C5E15405D3326440C99808F156B993_gshared (ArraySortHelper_1_tEC109463DA70EE9C9096D4971D34412677570D28* __this, CopyInfoU5BU5D_t99CD8AF5B14252370B2B7C05032486DF882AF466* ___0_array, int32_t ___1_index, int32_t ___2_length, CopyInfo_tB2613726E308EEDC2AE910784FA68BBB0A771565 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t3533F5404321426857F56650163B6A6729E7158D* ArraySortHelper_1_get_Default_mDEB3C8BCE73E4F1B555F5E570D0FEC50F21918AD_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_BinarySearch_m222B9857B789411237EBD6571FD5A595DCF350CF_gshared (ArraySortHelper_1_t3533F5404321426857F56650163B6A6729E7158D* __this, CopyInfoU5BU5D_tC5EFD432382597328F5463CE3F49D3DA0CB4FCF6* ___0_array, int32_t ___1_index, int32_t ___2_length, CopyInfo_tD052D128BF5295669FA0728D8E0336E9557CE744 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t7737E5D659C96F9001D7F147BCD524DC66D0D4DD* ArraySortHelper_1_get_Default_m4C980850260F2DD83C4793EF022AA5C44DC609FC_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_BinarySearch_m362ED51C5A63CBBB451AB79931C58F32B92827C0_gshared (ArraySortHelper_1_t7737E5D659C96F9001D7F147BCD524DC66D0D4DD* __this, DeferredArrayU5BU5D_t2B402FF2AC2B32AA6CC9A5004046806319D243DC* ___0_array, int32_t ___1_index, int32_t ___2_length, DeferredArray_tB1EEA722CAEFADCA5DB101F288131BDB91341699 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t333E7CEAC391412941D21F2FCAFBEC610B5324AA* ArraySortHelper_1_get_Default_m431D2BBDE6BA5D8061FE8B743A0C610A257B15AB_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_BinarySearch_m36EBD5D8B892F422D92B26CA38A1713A3215AFB0_gshared (ArraySortHelper_1_t333E7CEAC391412941D21F2FCAFBEC610B5324AA* __this, DeferredArrayU5BU5D_tB4ED071664EA73A4D56895411476AB8A983CBCF1* ___0_array, int32_t ___1_index, int32_t ___2_length, DeferredArray_t550A0C1FE3282F51201CDCB03B920FD2C8F8A819 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_tA6EE6D66AFBD4037261CC901C43D4945B05C117E* ArraySortHelper_1_get_Default_m4A2EA7195ED54D741C8FD211DDCA870F60C73CDB_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_BinarySearch_m362907D4BA915295014FAD517FC1306D05BAF152_gshared (ArraySortHelper_1_tA6EE6D66AFBD4037261CC901C43D4945B05C117E* __this, ItemU5BU5D_tB2AB30F4C7952C4FA867468576E1493A8858A165* ___0_array, int32_t ___1_index, int32_t ___2_length, Item_t7E1C074BAD45111B502C4559B0ECF73B3F52774E ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t113B40406DB1AFB29A002792A3DE4DE156C3C51D* ArraySortHelper_1_get_Default_m208E22631B89CC4C1D927C646D297284FC6D5030_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_BinarySearch_m92474D14D4B19C0B147D01F985CA7BE684D905AC_gshared (ArraySortHelper_1_t113B40406DB1AFB29A002792A3DE4DE156C3C51D* __this, KeyValuePair_2U5BU5D_t59BE3E2793BE8FC78C2EE42EAEC58E864348B40C* ___0_array, int32_t ___1_index, int32_t ___2_length, KeyValuePair_2_t0BA7B6CDC5145C72EF97C07CD31755E3D104DAC5 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_tFC3766CE9CF4C077AB50CBC92CD58E2F2E2AEC4D* ArraySortHelper_1_get_Default_mE68E7227734761975FE7EC9B590144FE6B28CFDC_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_BinarySearch_m62BD450E4769532AB7A49E149E8B4BE9DE8E905F_gshared (ArraySortHelper_1_tFC3766CE9CF4C077AB50CBC92CD58E2F2E2AEC4D* __this, KeyValuePair_2U5BU5D_t8E7451B50D849638463A256F730434F5AC214B52* ___0_array, int32_t ___1_index, int32_t ___2_length, KeyValuePair_2_tCAFDA02F578F9C36A2A1F8B598E89B9F0D5D1365 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t9D5988695D0E27FC2C660482823CD24E7867C57E* ArraySortHelper_1_get_Default_m8E3181F1B97294ACC3B83B9CED5928D0AAED8641_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_BinarySearch_mEA1A097DCE40F4262DA8843DC8C07ABB5DCD8079_gshared (ArraySortHelper_1_t9D5988695D0E27FC2C660482823CD24E7867C57E* __this, KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* ___0_array, int32_t ___1_index, int32_t ___2_length, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t1C05FD7083D194EB20ECE9BF364EE61BA5DFE1B1* ArraySortHelper_1_get_Default_mF58F40BA487C82790A3D15624F0C4722003CF30E_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_BinarySearch_m96779DEA625B1D6BD53C5A746A1A68B6CD551364_gshared (ArraySortHelper_1_t1C05FD7083D194EB20ECE9BF364EE61BA5DFE1B1* __this, KeyValuePair_2U5BU5D_t899E6C9DD89ED99CCF993FA90A368CCB9286EC61* ___0_array, int32_t ___1_index, int32_t ___2_length, KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t3161D1D2810FDADCBA98BC302546D9CF98CFA41F* ArraySortHelper_1_get_Default_mFF5E22B327C79CD5A9B2FC7D57F5DD2CFC795A15_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_BinarySearch_m6420104B9EA78106E4AAD6BB080600B434F014DC_gshared (ArraySortHelper_1_t3161D1D2810FDADCBA98BC302546D9CF98CFA41F* __this, NativeArray_1U5BU5D_t75698E5C2142DD4A324DD38EE484D69C8FD2CFD3* ___0_array, int32_t ___1_index, int32_t ___2_length, NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_tCF4AD90F61645344CEE07FF96E146A134CF88716* ArraySortHelper_1_get_Default_m3A24E760984C85C32CE96D3EBD6D9F5FC399D2C5_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_BinarySearch_m7EE2CF0D558E356F924D56602143DE9DD5ED3B64_gshared (ArraySortHelper_1_tCF4AD90F61645344CEE07FF96E146A134CF88716* __this, NativeArray_1U5BU5D_t48F28BC4076C1A1608AA864367077AD64E04C11D* ___0_array, int32_t ___1_index, int32_t ___2_length, NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t9AC8E0CAF25D5AA0127EDCAF3968B41697DFDDDE* ArraySortHelper_1_get_Default_m1803D8B61C090CD23F49C4B6730024AD91F23510_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_BinarySearch_m0BCE6EC3BE95132C034E9626C43F2A2FAED04D3B_gshared (ArraySortHelper_1_t9AC8E0CAF25D5AA0127EDCAF3968B41697DFDDDE* __this, NativeArray_1U5BU5D_t07FE0FFB798A14A16B56C709EBB100AA9D986CA4* ___0_array, int32_t ___1_index, int32_t ___2_length, NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t999CC4B5DBE0626519030FE7B005516753FB7335* ArraySortHelper_1_get_Default_m3BB42B2BA14872290CDCAD41EAF53ABA1AA9543C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_BinarySearch_m78AF5BD7F40C034FEB26A89F2D70FAB9F2331819_gshared (ArraySortHelper_1_t999CC4B5DBE0626519030FE7B005516753FB7335* __this, NativeArray_1U5BU5D_tB9179B8E492F9CEBC40651BF1C66A50255128C61* ___0_array, int32_t ___1_index, int32_t ___2_length, NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_HasElementType_m44F9601E586D2EEA2EDB93FB81D1D80521C264EE (Type_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058 (String_t* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissingMethodException__ctor_mAA7B921D386638F5F7B7E427EC5881150258C838 (MissingMethodException_t3D861B41F6520C32A7994A884343802925703155* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RuntimeType_CreateInstanceDefaultCtor_m049DF408DA0C9B09F8964B90B62456E3A1F135C6 (RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* __this, bool ___0_publicOnly, bool ___1_skipCheckThis, bool ___2_fillCache, bool ___3_wrapExceptions, int32_t* ___4_stackMark, const RuntimeMethod* method) ;
inline void ScopeTransitionRequestWithContext_1__ctor_m7A1A1AC74D13C0C6C043707C1E237708A5B7B9B9 (ScopeTransitionRequestWithContext_1_t7D86FB5BB8860C08CD532994E81CE06405D87992* __this, LifecycleScopeWithContext_1_t35373E7691E4D4045644241660D92D3E94032599* ___0_scope, int32_t ___1_scopeTransitionType, bool ___2_alsoExitNestedScopes, const RuntimeMethod* method)
{
	((  void (*) (ScopeTransitionRequestWithContext_1_t7D86FB5BB8860C08CD532994E81CE06405D87992*, LifecycleScopeWithContext_1_t35373E7691E4D4045644241660D92D3E94032599*, int32_t, bool, const RuntimeMethod*))ScopeTransitionRequestWithContext_1__ctor_m7A1A1AC74D13C0C6C043707C1E237708A5B7B9B9_gshared)(__this, ___0_scope, ___1_scopeTransitionType, ___2_alsoExitNestedScopes, method);
}
inline int32_t Queue_1_get_Count_mBDB81B637CD62D30A1C0B03D246CE38660A6FB1C_inline (Queue_1_t0213AA1BB5D12D3BCD5727E71F92BE13870D391A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t0213AA1BB5D12D3BCD5727E71F92BE13870D391A*, const RuntimeMethod*))Queue_1_get_Count_m02DF2B39305B32F97D425178F5054CE9830BFB10_gshared_inline)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool LifecycleScopeBase_get_AllowNestedTransitions_mEF03BE23B67C81955948C2C709D01AB9B71F0345_inline (LifecycleScopeBase_t7CC30D9721A69BA0A9E955EAED505A32007C0755* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LifecycleScopeBase_t7CC30D9721A69BA0A9E955EAED505A32007C0755* ScopeTransitionRequestBase_get_Scope_mEB7F256D6FF4393EB627213D2E7343BD35BDCB50_inline (ScopeTransitionRequestBase_t9E5F91D84A64F389496153A6DA14A6686E4E3C16* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LifecycleScopeBase_get_Name_m9A358255FEBBEA5F94FCB82DC2B1AF1F8AB288BB_inline (LifecycleScopeBase_t7CC30D9721A69BA0A9E955EAED505A32007C0755* __this, const RuntimeMethod* method) ;
inline Il2CppSharedGenericObject* LifecycleScopeWithContext_1_get_Context_m71715E88B71B9A07D4F70E53A5142B8F5383AC27_inline (LifecycleScopeWithContext_1_t35373E7691E4D4045644241660D92D3E94032599* __this, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (LifecycleScopeWithContext_1_t35373E7691E4D4045644241660D92D3E94032599*, const RuntimeMethod*))LifecycleScopeWithContext_1_get_Context_m71715E88B71B9A07D4F70E53A5142B8F5383AC27_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugLifecycle_ReportError_mDAF7BB6F8AD0C44C843238B5340CBB0F0A76F1B3 (String_t* ___0_message, bool ___1_criticalError, const RuntimeMethod* method) ;
inline void Queue_1_Enqueue_mEC947B45B7F992351EFE2AD95F9D29AB3165DA96 (Queue_1_t0213AA1BB5D12D3BCD5727E71F92BE13870D391A* __this, ScopeTransitionRequestBase_t9E5F91D84A64F389496153A6DA14A6686E4E3C16* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t0213AA1BB5D12D3BCD5727E71F92BE13870D391A*, ScopeTransitionRequestBase_t9E5F91D84A64F389496153A6DA14A6686E4E3C16*, const RuntimeMethod*))Queue_1_Enqueue_m16F75E528EE6527E8B9E76AE7D7E455D5476C606_gshared)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugLifecycle_Log_mF5AF374C4A49186C856B489B40F56163BE723BBB (String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActiveLifecycleScopesTracker_ExecuteTransitions_m5EFD022DEA5213ACB1E9DF082B376BB6C43FE2D0 (ActiveLifecycleScopesTracker_t21B0C18F9AC8D5A5832FC8DAD92E8759C6E6A8E7* __this, bool ___0_executeAndPop, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LifecycleScopeKey__ctor_m7DCCBE2ED25A7746808F3555AB845EE71FEB6A71 (LifecycleScopeKey_t786C4635697BF09DC1C3BA0331E34017B8BA961D* __this, Type_t* ___0_scopeType, const RuntimeMethod* method) ;
inline bool Dictionary_2_ContainsKey_m43D6ABEDBE5F0A936823EEB675589E5EAFD43281 (Dictionary_2_tD1D7C3C9439A06F868D4705EB293B45335991F83* __this, LifecycleScopeKey_t786C4635697BF09DC1C3BA0331E34017B8BA961D ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tD1D7C3C9439A06F868D4705EB293B45335991F83*, LifecycleScopeKey_t786C4635697BF09DC1C3BA0331E34017B8BA961D, const RuntimeMethod*))Dictionary_2_ContainsKey_m4FE70573C5E0F31040F3B0DE433DF7996E83A5B3_gshared)(__this, ___0_key, method);
}
inline KeyCollection_t59AB6D7A56AAB8B527E4EEBED39397629A9430E0* Dictionary_2_get_Keys_m9CB10267CF4FC83CDDD3FDC4B898C73488C93FB8 (Dictionary_2_tD1D7C3C9439A06F868D4705EB293B45335991F83* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t59AB6D7A56AAB8B527E4EEBED39397629A9430E0* (*) (Dictionary_2_tD1D7C3C9439A06F868D4705EB293B45335991F83*, const RuntimeMethod*))Dictionary_2_get_Keys_m3EE74149DC6731CDFEE5F22F0CA2058B59A8D2D9_gshared)(__this, method);
}
inline Enumerator_t1D172B50FF172AB824E07EA102C607D9282D3CAE KeyCollection_GetEnumerator_mB40FC79A8A11DB8F002E9192693045C2F194E3E7 (KeyCollection_t59AB6D7A56AAB8B527E4EEBED39397629A9430E0* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t1D172B50FF172AB824E07EA102C607D9282D3CAE (*) (KeyCollection_t59AB6D7A56AAB8B527E4EEBED39397629A9430E0*, const RuntimeMethod*))KeyCollection_GetEnumerator_m563049CEC0F536822CF486D50D493664B71E875E_gshared)(__this, method);
}
inline void Enumerator_Dispose_mD343B871CBC9CC3590A9CB7326BB5E263AD03BE1 (Enumerator_t1D172B50FF172AB824E07EA102C607D9282D3CAE* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t1D172B50FF172AB824E07EA102C607D9282D3CAE*, const RuntimeMethod*))Enumerator_Dispose_mFC9F10A3522A6F23AD402A6ADA759BB480B996E0_gshared)(__this, method);
}
inline LifecycleScopeKey_t786C4635697BF09DC1C3BA0331E34017B8BA961D Enumerator_get_Current_m21C7125C1D35261357C56A874C207249FC3E4F4A_inline (Enumerator_t1D172B50FF172AB824E07EA102C607D9282D3CAE* __this, const RuntimeMethod* method)
{
	return ((  LifecycleScopeKey_t786C4635697BF09DC1C3BA0331E34017B8BA961D (*) (Enumerator_t1D172B50FF172AB824E07EA102C607D9282D3CAE*, const RuntimeMethod*))Enumerator_get_Current_m9C78D88F0F2E50F8F748978518338E28736E4522_gshared_inline)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* LifecycleScopeKey_get_Type_mEC585239B2BC794EDFDE68B89A6533971E12C752_inline (LifecycleScopeKey_t786C4635697BF09DC1C3BA0331E34017B8BA961D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
inline bool Enumerator_MoveNext_mFEAE796204BD77488174AB22E0DE4C2721159335 (Enumerator_t1D172B50FF172AB824E07EA102C607D9282D3CAE* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t1D172B50FF172AB824E07EA102C607D9282D3CAE*, const RuntimeMethod*))Enumerator_MoveNext_m519DFDF4A50759F18C329CF995A277BDCD05D5A4_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LifecycleScopeKey__ctor_m3BFDFB377FD3F489668C9B18AF174EF462838E6C (LifecycleScopeKey_t786C4635697BF09DC1C3BA0331E34017B8BA961D* __this, Type_t* ___0_scopeType, RuntimeObject* ___1_context, const RuntimeMethod* method) ;
inline bool ActiveLifecycleScopesTracker_IsInsideScopeWithActivationContext_TisIl2CppSharedGenericObject_TisIl2CppSharedGenericObject_m5267E4C686C348E337CB4A9ED51372D608957B0F (ActiveLifecycleScopesTracker_t21B0C18F9AC8D5A5832FC8DAD92E8759C6E6A8E7* __this, Il2CppSharedGenericObject* ___0_scopeContext, const RuntimeMethod* method)
{
	return ((  bool (*) (ActiveLifecycleScopesTracker_t21B0C18F9AC8D5A5832FC8DAD92E8759C6E6A8E7*, Il2CppSharedGenericObject*, const RuntimeMethod*))ActiveLifecycleScopesTracker_IsInsideScopeWithActivationContext_TisIl2CppSharedGenericObject_TisIl2CppSharedGenericObject_m5267E4C686C348E337CB4A9ED51372D608957B0F_gshared)(__this, ___0_scopeContext, method);
}
inline Enumerator_t6E1C3DAF9D5E130F31F921E6BBBA1D4E27891201 Queue_1_GetEnumerator_m311A1E04C52E396219D02261B478965B9C97BD3D (Queue_1_t0213AA1BB5D12D3BCD5727E71F92BE13870D391A* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t6E1C3DAF9D5E130F31F921E6BBBA1D4E27891201 (*) (Queue_1_t0213AA1BB5D12D3BCD5727E71F92BE13870D391A*, const RuntimeMethod*))Queue_1_GetEnumerator_m931CF5C152723DE6DD0786DF3D5606A59C1BB1BF_gshared)(__this, method);
}
inline void Enumerator_Dispose_m5560B98567B989C4754E5C182136BE4AC88848CB (Enumerator_t6E1C3DAF9D5E130F31F921E6BBBA1D4E27891201* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t6E1C3DAF9D5E130F31F921E6BBBA1D4E27891201*, const RuntimeMethod*))Enumerator_Dispose_m30F4DD6AE424AEA73D1DA1D37B83EFC74AC44BDF_gshared)(__this, method);
}
inline ScopeTransitionRequestBase_t9E5F91D84A64F389496153A6DA14A6686E4E3C16* Enumerator_get_Current_m132E4E286C55B63A011879B1F62299A7E6CF8DE2 (Enumerator_t6E1C3DAF9D5E130F31F921E6BBBA1D4E27891201* __this, const RuntimeMethod* method)
{
	return ((  ScopeTransitionRequestBase_t9E5F91D84A64F389496153A6DA14A6686E4E3C16* (*) (Enumerator_t6E1C3DAF9D5E130F31F921E6BBBA1D4E27891201*, const RuntimeMethod*))Enumerator_get_Current_m818AA47F6124D3EC9A3CA48178D60E2D11D9C075_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ScopeTransitionRequestBase_get_TransitionType_m64E9CBFD2036C2727F62B4276B07594B1AD0244B_inline (ScopeTransitionRequestBase_t9E5F91D84A64F389496153A6DA14A6686E4E3C16* __this, const RuntimeMethod* method) ;
inline bool Enumerator_MoveNext_m4CA597288EC15016493B62A210A4A63E27177117 (Enumerator_t6E1C3DAF9D5E130F31F921E6BBBA1D4E27891201* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t6E1C3DAF9D5E130F31F921E6BBBA1D4E27891201*, const RuntimeMethod*))Enumerator_MoveNext_mDDBE6898D653A86324F3FDF8B4F6EC84E9812EEC_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LifecycleScopeBase_get_RequiredOuterScopes_mE1B35D619BCE1A19CF63F53E917F8D86731225B7 (LifecycleScopeBase_t7CC30D9721A69BA0A9E955EAED505A32007C0755* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ActiveLifecycleScopesTracker_IsInsideScope_m326DF0210C805B6FEFF0848D0A1C1891D1AD8ABE (ActiveLifecycleScopesTracker_t21B0C18F9AC8D5A5832FC8DAD92E8759C6E6A8E7* __this, String_t* ___0_scopeName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ActiveLifecycleScopesTracker_IsInsideScope_m6A9229A85BC7290BB7CABC0F5726CF29CE197886 (ActiveLifecycleScopesTracker_t21B0C18F9AC8D5A5832FC8DAD92E8759C6E6A8E7* __this, LifecycleScope_tEA98D004E7CFF981DC51524B020E4CBD58D964CB* ___0_scope, const RuntimeMethod* method) ;
inline bool ActiveLifecycleScopesTracker_IsInsideScopeWithActivationContext_TisIl2CppSharedGenericObject_m65AF7C880B3A8B7B6F7C6F59C699EA3FC8FC1BEE (ActiveLifecycleScopesTracker_t21B0C18F9AC8D5A5832FC8DAD92E8759C6E6A8E7* __this, LifecycleScopeWithContext_1_t35373E7691E4D4045644241660D92D3E94032599* ___0_scopeWithContext, const RuntimeMethod* method)
{
	return ((  bool (*) (ActiveLifecycleScopesTracker_t21B0C18F9AC8D5A5832FC8DAD92E8759C6E6A8E7*, LifecycleScopeWithContext_1_t35373E7691E4D4045644241660D92D3E94032599*, const RuntimeMethod*))ActiveLifecycleScopesTracker_IsInsideScopeWithActivationContext_TisIl2CppSharedGenericObject_m65AF7C880B3A8B7B6F7C6F59C699EA3FC8FC1BEE_gshared)(__this, ___0_scopeWithContext, method);
}
inline void List_1__ctor_mAC5B95A51ACDF83BD8AF7C84815956F1571EBDA1 (List_1_t9CDC351A1FD4D84CA6FE8FF3EAD218C909593E14* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9CDC351A1FD4D84CA6FE8FF3EAD218C909593E14*, const RuntimeMethod*))List_1__ctor_m7378BA5FBCA1E88080985FB810820B3F47DAD54C_gshared)(__this, method);
}
inline ValueCollection_tB7C740A97431C55C62CC43DA7712B5896DBED97F* Dictionary_2_get_Values_m79563C16853F891CCBBC22B07DC63DA063874A49 (Dictionary_2_tD1D7C3C9439A06F868D4705EB293B45335991F83* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_tB7C740A97431C55C62CC43DA7712B5896DBED97F* (*) (Dictionary_2_tD1D7C3C9439A06F868D4705EB293B45335991F83*, const RuntimeMethod*))Dictionary_2_get_Values_mEC10CAC4B24A0C0E57AE9BF73D0378DA6D2C852A_gshared)(__this, method);
}
inline Enumerator_t624742B8D885649511A5739F11184E2221942252 ValueCollection_GetEnumerator_m1B01F115659146468CB5EE9025E45905AB1279DE (ValueCollection_tB7C740A97431C55C62CC43DA7712B5896DBED97F* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t624742B8D885649511A5739F11184E2221942252 (*) (ValueCollection_tB7C740A97431C55C62CC43DA7712B5896DBED97F*, const RuntimeMethod*))ValueCollection_GetEnumerator_mB5FEF01E8979132319CCEE6B77862DC944001B00_gshared)(__this, method);
}
inline void Enumerator_Dispose_m6E582A0ECA46CE69AFD14D67DE233D2B4E1069BE (Enumerator_t624742B8D885649511A5739F11184E2221942252* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t624742B8D885649511A5739F11184E2221942252*, const RuntimeMethod*))Enumerator_Dispose_m626C730AA6A4F537BA5966F2A087599D8EA2004C_gshared)(__this, method);
}
inline ActiveLifecycleScopeBase_t0F0C7F8D06A577773F8D661F8CCE4F9FA9999A8C* Enumerator_get_Current_m2E4C1612FFBB402B6CF496C40499B9B84734E878_inline (Enumerator_t624742B8D885649511A5739F11184E2221942252* __this, const RuntimeMethod* method)
{
	return ((  ActiveLifecycleScopeBase_t0F0C7F8D06A577773F8D661F8CCE4F9FA9999A8C* (*) (Enumerator_t624742B8D885649511A5739F11184E2221942252*, const RuntimeMethod*))Enumerator_get_Current_mFB92CF0C22891AA06481368B806933878E96848C_gshared_inline)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LifecycleScopeBase_t7CC30D9721A69BA0A9E955EAED505A32007C0755* ActiveLifecycleScopeBase_get_Scope_m711F6C219BF9AED00688EB5C251A74C6780E0780_inline (ActiveLifecycleScopeBase_t0F0C7F8D06A577773F8D661F8CCE4F9FA9999A8C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
inline bool Enumerator_MoveNext_mC8DD05ED5A94E9D71568B93F1FBC1A03B3A4E385 (Enumerator_t624742B8D885649511A5739F11184E2221942252* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t624742B8D885649511A5739F11184E2221942252*, const RuntimeMethod*))Enumerator_MoveNext_mEB114AA8470C0E221193BA19C62E0D16284971C0_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActiveLifecycleScopesTracker_CollectNestedScopesToExit_m42316DA19AAD010107302A5CE7B1758B5D3E629A (ActiveLifecycleScopesTracker_t21B0C18F9AC8D5A5832FC8DAD92E8759C6E6A8E7* __this, String_t* ___0_scopeName, List_1_t9CDC351A1FD4D84CA6FE8FF3EAD218C909593E14* ___1_nestedActiveScopesInOrder, const RuntimeMethod* method) ;
inline int32_t List_1_get_Count_m8EC63B0A917684D71B0938CD239EF153D6D5AC92_inline (List_1_t9CDC351A1FD4D84CA6FE8FF3EAD218C909593E14* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t9CDC351A1FD4D84CA6FE8FF3EAD218C909593E14*, const RuntimeMethod*))List_1_get_Count_m9832942FE310479E64D9D0D23F29C65305BE1622_gshared_inline)(__this, method);
}
inline Enumerator_t01FAC2D987248212FF45463152AFF3B57F39A352 List_1_GetEnumerator_m3A7E9AECB2ED791F09FADAD0BC7B826FB62A85A4 (List_1_t9CDC351A1FD4D84CA6FE8FF3EAD218C909593E14* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t01FAC2D987248212FF45463152AFF3B57F39A352 (*) (List_1_t9CDC351A1FD4D84CA6FE8FF3EAD218C909593E14*, const RuntimeMethod*))List_1_GetEnumerator_mD48177D95D4B5D6A9D8E84E2477668C2850DD5D9_gshared)(__this, method);
}
inline void Enumerator_Dispose_m80B75619D3D43280CFC1D0556BBFE923F8643835 (Enumerator_t01FAC2D987248212FF45463152AFF3B57F39A352* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t01FAC2D987248212FF45463152AFF3B57F39A352*, const RuntimeMethod*))Enumerator_Dispose_mD5CB9146005B12D9E7D7390E961933AB12147A62_gshared)(__this, method);
}
inline ActiveLifecycleScopeBase_t0F0C7F8D06A577773F8D661F8CCE4F9FA9999A8C* Enumerator_get_Current_m422894DCBE54CC53F8C3729BEE72B601B02C8686_inline (Enumerator_t01FAC2D987248212FF45463152AFF3B57F39A352* __this, const RuntimeMethod* method)
{
	return ((  ActiveLifecycleScopeBase_t0F0C7F8D06A577773F8D661F8CCE4F9FA9999A8C* (*) (Enumerator_t01FAC2D987248212FF45463152AFF3B57F39A352*, const RuntimeMethod*))Enumerator_get_Current_mA50CED82C4671CC4E1D82333FAC2587F700565D0_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_mD85ED63385062F8013FBC6C57320F2B23C975EFE (Enumerator_t01FAC2D987248212FF45463152AFF3B57F39A352* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t01FAC2D987248212FF45463152AFF3B57F39A352*, const RuntimeMethod*))Enumerator_MoveNext_m2B096A69E95EF2C7A223BA853D66AEC59C4A5C25_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActiveLifecycleScopesTracker_RaiseAutoCleanups_m5620B257E893397698E4CA9CBD38E695BADBA8ED (ActiveLifecycleScopesTracker_t21B0C18F9AC8D5A5832FC8DAD92E8759C6E6A8E7* __this, Type_t* ___0_lifecycleScopeType, int32_t ___1_scopeTransitionType, const RuntimeMethod* method) ;
inline bool Dictionary_2_Remove_mAE2ECC0F5BDAA58524500656449EA1A387079726 (Dictionary_2_tD1D7C3C9439A06F868D4705EB293B45335991F83* __this, LifecycleScopeKey_t786C4635697BF09DC1C3BA0331E34017B8BA961D ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tD1D7C3C9439A06F868D4705EB293B45335991F83*, LifecycleScopeKey_t786C4635697BF09DC1C3BA0331E34017B8BA961D, const RuntimeMethod*))Dictionary_2_Remove_m9B8C23C73DCE5610BAD4E4506C7260A603E3BD82_gshared)(__this, ___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActiveLifecycleScopesTracker_CreateScopeTransitionRequest_m9994ACEAA4926C9C17BB51EEA3411DA150DB15D9 (ActiveLifecycleScopesTracker_t21B0C18F9AC8D5A5832FC8DAD92E8759C6E6A8E7* __this, LifecycleScope_tEA98D004E7CFF981DC51524B020E4CBD58D964CB* ___0_lifecycleScope, int32_t ___1_scopeTransitionType, bool ___2_alsoExitNestedScopes, const RuntimeMethod* method) ;
inline void ActiveLifecycleScopesTracker_CreateScopeTransitionRequest_TisIl2CppSharedGenericObject_m781DD3D4A86DAE2D7A3F31DD07A1A4B6C4ACFFB7 (ActiveLifecycleScopesTracker_t21B0C18F9AC8D5A5832FC8DAD92E8759C6E6A8E7* __this, LifecycleScopeWithContext_1_t35373E7691E4D4045644241660D92D3E94032599* ___0_lifecycleScope, int32_t ___1_scopeTransitionType, bool ___2_alsoExitNestedScopes, const RuntimeMethod* method)
{
	((  void (*) (ActiveLifecycleScopesTracker_t21B0C18F9AC8D5A5832FC8DAD92E8759C6E6A8E7*, LifecycleScopeWithContext_1_t35373E7691E4D4045644241660D92D3E94032599*, int32_t, bool, const RuntimeMethod*))ActiveLifecycleScopesTracker_CreateScopeTransitionRequest_TisIl2CppSharedGenericObject_m781DD3D4A86DAE2D7A3F31DD07A1A4B6C4ACFFB7_gshared)(__this, ___0_lifecycleScope, ___1_scopeTransitionType, ___2_alsoExitNestedScopes, method);
}
inline bool ActiveLifecycleScopesTracker_PrepareTryEnterScopeWithContext_TisIl2CppSharedGenericObject_m3D8B69D9E50547113449972B07933BE902744D59 (ActiveLifecycleScopesTracker_t21B0C18F9AC8D5A5832FC8DAD92E8759C6E6A8E7* __this, LifecycleScopeWithContext_1_t35373E7691E4D4045644241660D92D3E94032599* ___0_lifecycleScope, const RuntimeMethod* method)
{
	return ((  bool (*) (ActiveLifecycleScopesTracker_t21B0C18F9AC8D5A5832FC8DAD92E8759C6E6A8E7*, LifecycleScopeWithContext_1_t35373E7691E4D4045644241660D92D3E94032599*, const RuntimeMethod*))ActiveLifecycleScopesTracker_PrepareTryEnterScopeWithContext_TisIl2CppSharedGenericObject_m3D8B69D9E50547113449972B07933BE902744D59_gshared)(__this, ___0_lifecycleScope, method);
}
inline void ActiveLifecycleScopeWithContext_1__ctor_mDD6FD21DC68167495A10EE8C4AB04C783A8A809C (ActiveLifecycleScopeWithContext_1_tD3998CF55244EF4B194F8B1E059746B5D9A85F79* __this, LifecycleScopeWithContext_1_t35373E7691E4D4045644241660D92D3E94032599* ___0_scope, const RuntimeMethod* method)
{
	((  void (*) (ActiveLifecycleScopeWithContext_1_tD3998CF55244EF4B194F8B1E059746B5D9A85F79*, LifecycleScopeWithContext_1_t35373E7691E4D4045644241660D92D3E94032599*, const RuntimeMethod*))ActiveLifecycleScopeWithContext_1__ctor_mDD6FD21DC68167495A10EE8C4AB04C783A8A809C_gshared)(__this, ___0_scope, method);
}
inline LifecycleScopeKey_t786C4635697BF09DC1C3BA0331E34017B8BA961D LifecycleScopeKey_CreateFromScope_TisIl2CppSharedGenericObject_m613ECBEDFFC63C9393C625204DC116D94C244FBB (LifecycleScopeWithContext_1_t35373E7691E4D4045644241660D92D3E94032599* ___0_scope, const RuntimeMethod* method)
{
	return ((  LifecycleScopeKey_t786C4635697BF09DC1C3BA0331E34017B8BA961D (*) (LifecycleScopeWithContext_1_t35373E7691E4D4045644241660D92D3E94032599*, const RuntimeMethod*))LifecycleScopeKey_CreateFromScope_TisIl2CppSharedGenericObject_m613ECBEDFFC63C9393C625204DC116D94C244FBB_gshared)(___0_scope, method);
}
inline void Dictionary_2_Add_mA42C372CA350E01B08326C78A32C2D4331199A3D (Dictionary_2_tD1D7C3C9439A06F868D4705EB293B45335991F83* __this, LifecycleScopeKey_t786C4635697BF09DC1C3BA0331E34017B8BA961D ___0_key, ActiveLifecycleScopeBase_t0F0C7F8D06A577773F8D661F8CCE4F9FA9999A8C* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD1D7C3C9439A06F868D4705EB293B45335991F83*, LifecycleScopeKey_t786C4635697BF09DC1C3BA0331E34017B8BA961D, ActiveLifecycleScopeBase_t0F0C7F8D06A577773F8D661F8CCE4F9FA9999A8C*, const RuntimeMethod*))Dictionary_2_Add_m0C37ECCAD4CA418B95EEE2AFCAEDCA430B3D6C6D_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool ActiveLifecycleScopesTracker_PrepareTryExitScope_TisIl2CppSharedGenericObject_mB20E9E3D9D7A9E4B5F58A5783EB2EBB2733EF4E7 (ActiveLifecycleScopesTracker_t21B0C18F9AC8D5A5832FC8DAD92E8759C6E6A8E7* __this, LifecycleScopeWithContext_1_t35373E7691E4D4045644241660D92D3E94032599* ___0_lifecycleScope, Il2CppSharedGenericObject* ___1_activationContext, bool ___2_alsoExitNestedScopes, const RuntimeMethod* method)
{
	return ((  bool (*) (ActiveLifecycleScopesTracker_t21B0C18F9AC8D5A5832FC8DAD92E8759C6E6A8E7*, LifecycleScopeWithContext_1_t35373E7691E4D4045644241660D92D3E94032599*, Il2CppSharedGenericObject*, bool, const RuntimeMethod*))ActiveLifecycleScopesTracker_PrepareTryExitScope_TisIl2CppSharedGenericObject_mB20E9E3D9D7A9E4B5F58A5783EB2EBB2733EF4E7_gshared)(__this, ___0_lifecycleScope, ___1_activationContext, ___2_alsoExitNestedScopes, method);
}
inline Il2CppSharedGenericObject* ActiveLifecycleScopeWithContext_1_get_Context_m45FFE4CAC1E3D5639C3DEE4433FAE9E204851CC0 (ActiveLifecycleScopeWithContext_1_tD3998CF55244EF4B194F8B1E059746B5D9A85F79* __this, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (ActiveLifecycleScopeWithContext_1_tD3998CF55244EF4B194F8B1E059746B5D9A85F79*, const RuntimeMethod*))ActiveLifecycleScopeWithContext_1_get_Context_m45FFE4CAC1E3D5639C3DEE4433FAE9E204851CC0_gshared)(__this, method);
}
inline bool Dictionary_2_TryGetValue_m23A14CBF4DD0FFE6985742AB5960E012A3D29D89 (Dictionary_2_tD1D7C3C9439A06F868D4705EB293B45335991F83* __this, LifecycleScopeKey_t786C4635697BF09DC1C3BA0331E34017B8BA961D ___0_key, ActiveLifecycleScopeBase_t0F0C7F8D06A577773F8D661F8CCE4F9FA9999A8C** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tD1D7C3C9439A06F868D4705EB293B45335991F83*, LifecycleScopeKey_t786C4635697BF09DC1C3BA0331E34017B8BA961D, ActiveLifecycleScopeBase_t0F0C7F8D06A577773F8D661F8CCE4F9FA9999A8C**, const RuntimeMethod*))Dictionary_2_TryGetValue_mA238034AD68BB6D92BDE20B1C8BED7498E6A28A8_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t* AndroidJNI_GetDirectBufferAddress_m0E0B127BFEB7AAF065829DC6AE11163D5616EBE8 (intptr_t ___0_buffer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNI_GetDirectBufferCapacity_mCAC8D9C8E45481BE59FB17406E1E16D4F9628183 (intptr_t ___0_buffer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m181D7F12EB826B7D6B73742BFD85A667D533BABA (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m181D7F12EB826B7D6B73742BFD85A667D533BABA_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mD9D29EE5CE27F4BFD0168818BF064EC5B3672F39 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mD9D29EE5CE27F4BFD0168818BF064EC5B3672F39_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline bool NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081_inline (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF*, const RuntimeMethod*))NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081_gshared_inline)(__this, method);
}
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_inline (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_gshared_inline)(___0_nativeArray, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewDirectByteBuffer_m17389ED6D98CC0364180BAB43F2747B48FFDB107 (uint8_t* ___0_buffer, int64_t ___1_capacity, const RuntimeMethod* method) ;
inline bool NativeArray_1_get_IsCreated_mF1154ABCB79F43B3A71BFA8DCB85ACBDFA2838D5_inline (NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190*, const RuntimeMethod*))NativeArray_1_get_IsCreated_mF1154ABCB79F43B3A71BFA8DCB85ACBDFA2838D5_gshared_inline)(__this, method);
}
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mCD832837FF5CE235B506272835BA049D56968E2F_inline (NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mCD832837FF5CE235B506272835BA049D56968E2F_gshared_inline)(___0_nativeArray, method);
}
inline bool _AndroidJNIHelper_ConvertFromJNIArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mBF1AB84DE0B50E7C206BAD3C170D1F5AD2D9E343 (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  bool (*) (intptr_t, const RuntimeMethod*))_AndroidJNIHelper_ConvertFromJNIArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mBF1AB84DE0B50E7C206BAD3C170D1F5AD2D9E343_gshared)(___0_array, method);
}
inline Il2CppChar _AndroidJNIHelper_ConvertFromJNIArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m9ECB51B699AB7B96368F39CC9F7C481340DD0BBC (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  Il2CppChar (*) (intptr_t, const RuntimeMethod*))_AndroidJNIHelper_ConvertFromJNIArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m9ECB51B699AB7B96368F39CC9F7C481340DD0BBC_gshared)(___0_array, method);
}
inline double _AndroidJNIHelper_ConvertFromJNIArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m1F7F249CC7CDA2D6E136C627D983569B3674EA73 (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  double (*) (intptr_t, const RuntimeMethod*))_AndroidJNIHelper_ConvertFromJNIArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m1F7F249CC7CDA2D6E136C627D983569B3674EA73_gshared)(___0_array, method);
}
inline int16_t _AndroidJNIHelper_ConvertFromJNIArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m901F767E3189385BB47B5B021C40507AAF67D477 (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  int16_t (*) (intptr_t, const RuntimeMethod*))_AndroidJNIHelper_ConvertFromJNIArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m901F767E3189385BB47B5B021C40507AAF67D477_gshared)(___0_array, method);
}
inline int32_t _AndroidJNIHelper_ConvertFromJNIArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m37A94A4CA9F6456009CABE27D4AA2ED7B8365168 (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  int32_t (*) (intptr_t, const RuntimeMethod*))_AndroidJNIHelper_ConvertFromJNIArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m37A94A4CA9F6456009CABE27D4AA2ED7B8365168_gshared)(___0_array, method);
}
inline int64_t _AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mBE697F1C4D60A7F2BB06784B5CB0C540B7FBF664 (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  int64_t (*) (intptr_t, const RuntimeMethod*))_AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mBE697F1C4D60A7F2BB06784B5CB0C540B7FBF664_gshared)(___0_array, method);
}
inline int8_t _AndroidJNIHelper_ConvertFromJNIArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m01777984AFB915C1167148BC6056336EB200B151 (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  int8_t (*) (intptr_t, const RuntimeMethod*))_AndroidJNIHelper_ConvertFromJNIArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m01777984AFB915C1167148BC6056336EB200B151_gshared)(___0_array, method);
}
inline float _AndroidJNIHelper_ConvertFromJNIArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6634501B2BC58937A4D852F6F2D8D55A9DFB6F64 (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  float (*) (intptr_t, const RuntimeMethod*))_AndroidJNIHelper_ConvertFromJNIArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6634501B2BC58937A4D852F6F2D8D55A9DFB6F64_gshared)(___0_array, method);
}
inline Il2CppSharedGenericObject* _AndroidJNIHelper_ConvertFromJNIArray_TisIl2CppSharedGenericObject_mAD2432704589B67F3F93D55DF8B948DCBEBA4444 (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (intptr_t, const RuntimeMethod*))_AndroidJNIHelper_ConvertFromJNIArray_TisIl2CppSharedGenericObject_mAD2432704589B67F3F93D55DF8B948DCBEBA4444_gshared)(___0_array, method);
}
inline intptr_t _AndroidJNIHelper_GetFieldID_TisIl2CppSharedGenericObject_mC4E70171E726BFD2EDF128963FAD90873B0289C5 (intptr_t ___0_jclass, String_t* ___1_fieldName, bool ___2_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, bool, const RuntimeMethod*))_AndroidJNIHelper_GetFieldID_TisIl2CppSharedGenericObject_mC4E70171E726BFD2EDF128963FAD90873B0289C5_gshared)(___0_jclass, ___1_fieldName, ___2_isStatic, method);
}
inline intptr_t _AndroidJNIHelper_GetMethodID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5C5661781E8C49E962C2556FC75101FD0E862AFD (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))_AndroidJNIHelper_GetMethodID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5C5661781E8C49E962C2556FC75101FD0E862AFD_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline intptr_t _AndroidJNIHelper_GetMethodID_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m465627642B00BC71088A5883058BB86DDBADABE0 (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))_AndroidJNIHelper_GetMethodID_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m465627642B00BC71088A5883058BB86DDBADABE0_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline intptr_t _AndroidJNIHelper_GetMethodID_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mA32D3320555971B585058A28FC5F5EC84DC10A34 (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))_AndroidJNIHelper_GetMethodID_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mA32D3320555971B585058A28FC5F5EC84DC10A34_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline intptr_t _AndroidJNIHelper_GetMethodID_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF0D2DB5B885B01587820A9F88C6CAD67C8DC1512 (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))_AndroidJNIHelper_GetMethodID_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF0D2DB5B885B01587820A9F88C6CAD67C8DC1512_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline intptr_t _AndroidJNIHelper_GetMethodID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB340108BAAC2DA25B45971B719093FDF9B13E745 (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))_AndroidJNIHelper_GetMethodID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB340108BAAC2DA25B45971B719093FDF9B13E745_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline intptr_t _AndroidJNIHelper_GetMethodID_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mF114D8205E13517DE4F8DB9772E9C40C7C43BD85 (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))_AndroidJNIHelper_GetMethodID_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mF114D8205E13517DE4F8DB9772E9C40C7C43BD85_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline intptr_t _AndroidJNIHelper_GetMethodID_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m362BBB1CC3B8834A056A8F709649BD182E24E9BD (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))_AndroidJNIHelper_GetMethodID_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m362BBB1CC3B8834A056A8F709649BD182E24E9BD_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline intptr_t _AndroidJNIHelper_GetMethodID_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m86B190CF71EDCB08177B90F98C76A9545AF09FCB (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))_AndroidJNIHelper_GetMethodID_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m86B190CF71EDCB08177B90F98C76A9545AF09FCB_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline intptr_t _AndroidJNIHelper_GetMethodID_TisIl2CppSharedGenericObject_mFEAB91A44B644CE56BB6182931D1065B679E0B3A (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))_AndroidJNIHelper_GetMethodID_TisIl2CppSharedGenericObject_mFEAB91A44B644CE56BB6182931D1065B679E0B3A_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline bool AndroidJavaObject__Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m72E1F5D2CE435E45651E8B970A73B9F5E3E03815 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m72E1F5D2CE435E45651E8B970A73B9F5E3E03815_gshared)(__this, ___0_methodName, ___1_args, method);
}
inline Il2CppChar AndroidJavaObject__Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m22710813CDD982DC5F88C2A4067FBFE1D57A3065 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  Il2CppChar (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m22710813CDD982DC5F88C2A4067FBFE1D57A3065_gshared)(__this, ___0_methodName, ___1_args, method);
}
inline double AndroidJavaObject__Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m946CEC22A94586DE93BE0725E5F25E04589F69DE (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  double (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m946CEC22A94586DE93BE0725E5F25E04589F69DE_gshared)(__this, ___0_methodName, ___1_args, method);
}
inline int16_t AndroidJavaObject__Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m08A0CE3C4BDDA756095A0A816C659587814F649E (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  int16_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m08A0CE3C4BDDA756095A0A816C659587814F649E_gshared)(__this, ___0_methodName, ___1_args, method);
}
inline int32_t AndroidJavaObject__Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1BFF486C91846170C07AAF27EF84971FF0596B90 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1BFF486C91846170C07AAF27EF84971FF0596B90_gshared)(__this, ___0_methodName, ___1_args, method);
}
inline int64_t AndroidJavaObject__Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mC6DBECDD44973120E0A56068ABE886D9A7016F5C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  int64_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mC6DBECDD44973120E0A56068ABE886D9A7016F5C_gshared)(__this, ___0_methodName, ___1_args, method);
}
inline int8_t AndroidJavaObject__Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mAE2F0D59E0CE54D36BB86C53218704FA72DC0350 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  int8_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mAE2F0D59E0CE54D36BB86C53218704FA72DC0350_gshared)(__this, ___0_methodName, ___1_args, method);
}
inline float AndroidJavaObject__Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m71549B5031FEE0FBB78A9CE02EDADD14DBFFB56D (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  float (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m71549B5031FEE0FBB78A9CE02EDADD14DBFFB56D_gshared)(__this, ___0_methodName, ___1_args, method);
}
inline Il2CppSharedGenericObject* AndroidJavaObject__Call_TisIl2CppSharedGenericObject_m39A1E2B88CD5364F83417EFB65F1C296656D2F62 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisIl2CppSharedGenericObject_m39A1E2B88CD5364F83417EFB65F1C296656D2F62_gshared)(__this, ___0_methodName, ___1_args, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__Call_m2126160FB635069207535BD0E700C3605FDB3308 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__Call_m4C4D7D7287030773175BDF47681EA018DFA4DF1A (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
inline bool AndroidJavaObject__CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m41529A6A47CC3B57286AC8F9C6388E54918DF450 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m41529A6A47CC3B57286AC8F9C6388E54918DF450_gshared)(__this, ___0_methodName, ___1_args, method);
}
inline int32_t AndroidJavaObject__CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEE64E87A5A2BC0F38910643A9B91032AF38D882C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEE64E87A5A2BC0F38910643A9B91032AF38D882C_gshared)(__this, ___0_methodName, ___1_args, method);
}
inline int64_t AndroidJavaObject__CallStatic_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mB6A9E09630C485412DA1C0F2E04C67EEBE05E340 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  int64_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__CallStatic_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mB6A9E09630C485412DA1C0F2E04C67EEBE05E340_gshared)(__this, ___0_methodName, ___1_args, method);
}
inline Il2CppSharedGenericObject* AndroidJavaObject__CallStatic_TisIl2CppSharedGenericObject_m8E1513A9554AAA1822CA51D0A816DCF16775AA37 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__CallStatic_TisIl2CppSharedGenericObject_m8E1513A9554AAA1822CA51D0A816DCF16775AA37_gshared)(__this, ___0_methodName, ___1_args, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__CallStatic_mE917E474DB9801610FB7ABE5BE749DF84CEFD48A (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__CallStatic_mD63902D30CD5626DAEAD1D6484AF7A9ACA85590E (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
inline bool AndroidJNIHelper_ConvertFromJNIArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0207DDD0AB7EE1136083B85289D4F16FD9A64ECC (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  bool (*) (intptr_t, const RuntimeMethod*))AndroidJNIHelper_ConvertFromJNIArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0207DDD0AB7EE1136083B85289D4F16FD9A64ECC_gshared)(___0_array, method);
}
inline Il2CppChar AndroidJNIHelper_ConvertFromJNIArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m51DC292506277213F541434A51F81430E11E7226 (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  Il2CppChar (*) (intptr_t, const RuntimeMethod*))AndroidJNIHelper_ConvertFromJNIArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m51DC292506277213F541434A51F81430E11E7226_gshared)(___0_array, method);
}
inline double AndroidJNIHelper_ConvertFromJNIArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF6AF89E7365D44A201C5A2C86C49EF49E2D6ADAD (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  double (*) (intptr_t, const RuntimeMethod*))AndroidJNIHelper_ConvertFromJNIArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF6AF89E7365D44A201C5A2C86C49EF49E2D6ADAD_gshared)(___0_array, method);
}
inline int16_t AndroidJNIHelper_ConvertFromJNIArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF6FCB78A4CF7C2FB0375E88C31C70458F55F422C (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  int16_t (*) (intptr_t, const RuntimeMethod*))AndroidJNIHelper_ConvertFromJNIArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF6FCB78A4CF7C2FB0375E88C31C70458F55F422C_gshared)(___0_array, method);
}
inline int32_t AndroidJNIHelper_ConvertFromJNIArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m02707C23958FF03FA0345C2A17F66EE379A1468C (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  int32_t (*) (intptr_t, const RuntimeMethod*))AndroidJNIHelper_ConvertFromJNIArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m02707C23958FF03FA0345C2A17F66EE379A1468C_gshared)(___0_array, method);
}
inline int64_t AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m0CADE835010213386C1C07E63F70E55498142C20 (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  int64_t (*) (intptr_t, const RuntimeMethod*))AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m0CADE835010213386C1C07E63F70E55498142C20_gshared)(___0_array, method);
}
inline int8_t AndroidJNIHelper_ConvertFromJNIArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m2BD2E924FBD117B44A2D5E741144FD7B1FCE918E (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  int8_t (*) (intptr_t, const RuntimeMethod*))AndroidJNIHelper_ConvertFromJNIArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m2BD2E924FBD117B44A2D5E741144FD7B1FCE918E_gshared)(___0_array, method);
}
inline float AndroidJNIHelper_ConvertFromJNIArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m93BCF3156F5C823F8C2B005523A618966B0A6DBB (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  float (*) (intptr_t, const RuntimeMethod*))AndroidJNIHelper_ConvertFromJNIArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m93BCF3156F5C823F8C2B005523A618966B0A6DBB_gshared)(___0_array, method);
}
inline Il2CppSharedGenericObject* AndroidJNIHelper_ConvertFromJNIArray_TisIl2CppSharedGenericObject_m6F1CD10E4BE61A7211FB87DA1D7D92C7FE85F8E4 (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (intptr_t, const RuntimeMethod*))AndroidJNIHelper_ConvertFromJNIArray_TisIl2CppSharedGenericObject_m6F1CD10E4BE61A7211FB87DA1D7D92C7FE85F8E4_gshared)(___0_array, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094 (intptr_t ___0_localref, const RuntimeMethod* method) ;
inline Il2CppSharedGenericObject* AndroidJavaObject__GetStatic_TisIl2CppSharedGenericObject_m177F1A057E8F5EF05D9158BA272E890C6210044B (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject__GetStatic_TisIl2CppSharedGenericObject_m177F1A057E8F5EF05D9158BA272E890C6210044B_gshared)(__this, ___0_fieldName, method);
}
inline void Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_inline (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7*, void*, int32_t, const RuntimeMethod*))Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline int32_t Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_inline (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7*, const RuntimeMethod*))Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNI_PushLocalFrame_m2D8050A3799AEBB4A7E506E6790839EB66932E10 (int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNIHelper_CreateJNIArgArray_mD8E0CA2404E31F155EDE1A028EC686C17B17730F (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___1_jniArgs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609 (intptr_t ___0_ptr, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25 (Type_t* ___0_t, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNISafe_CallIntMethod_m60318205A7EAD0C5CC0643106A7044F1563DCC0E (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNISafe_CallBooleanMethod_m2F5824C9EA5D1586C7E555F9F8DE01D84757D972 (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7 (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNISafe_CallShortMethod_m7C82D811B75161D4567651B0D85E5F7A2ED83A97 (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNISafe_CallLongMethod_mD04CC840004334A567747BD526F88A813CB833B6 (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNISafe_CallFloatMethod_m7437E60E0985885D721F1592E4DACF8246F69BBE (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNISafe_CallDoubleMethod_m01B318F7CA4F90C54D689CF0CD84DF312E68CB5E (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNISafe_CallCharMethod_mB777FAF5E9D1BFF480B7EDD5AA5352F30797E1DD (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNISafe_CallStringMethod_m4E40DA54A224C0C10A8C600CAC1C2C838B69264C (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB206D3CB990755BD56E308F61CD43BB9EA4421D0 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, intptr_t ___0_jclass, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_jobject, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6 (Type_t* ___0_t, Type_t* ___1_from, const RuntimeMethod* method) ;
inline bool AndroidJavaObject_FromJavaArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mA1CB7EC9473B0674763C89AC566EC664159108E9 (intptr_t ___0_jobject, const RuntimeMethod* method)
{
	return ((  bool (*) (intptr_t, const RuntimeMethod*))AndroidJavaObject_FromJavaArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mA1CB7EC9473B0674763C89AC566EC664159108E9_gshared)(___0_jobject, method);
}
inline intptr_t AndroidJNIHelper_GetMethodID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE3914411BE312CBBA869835158E535A06CD3EEB4 (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))AndroidJNIHelper_GetMethodID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE3914411BE312CBBA869835158E535A06CD3EEB4_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline bool AndroidJavaObject__Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m73D49A76D8F24AD1815CF94E87F1EF4683A38EA6 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m73D49A76D8F24AD1815CF94E87F1EF4683A38EA6_gshared)(__this, ___0_methodID, ___1_args, method);
}
inline Il2CppChar AndroidJavaObject_FromJavaArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m18459EC016E866EF307EC4D9442CD86FD9BC28B4 (intptr_t ___0_jobject, const RuntimeMethod* method)
{
	return ((  Il2CppChar (*) (intptr_t, const RuntimeMethod*))AndroidJavaObject_FromJavaArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m18459EC016E866EF307EC4D9442CD86FD9BC28B4_gshared)(___0_jobject, method);
}
inline intptr_t AndroidJNIHelper_GetMethodID_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m791647AA6EAD3B88467418F51CF53F5755AB38BA (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))AndroidJNIHelper_GetMethodID_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m791647AA6EAD3B88467418F51CF53F5755AB38BA_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline Il2CppChar AndroidJavaObject__Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m8B3C7C06394410B77DB9953832CB9F8C29C28E89 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  Il2CppChar (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m8B3C7C06394410B77DB9953832CB9F8C29C28E89_gshared)(__this, ___0_methodID, ___1_args, method);
}
inline double AndroidJavaObject_FromJavaArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m3CAD187DEBCBD88D94604015E86A37B8944847BC (intptr_t ___0_jobject, const RuntimeMethod* method)
{
	return ((  double (*) (intptr_t, const RuntimeMethod*))AndroidJavaObject_FromJavaArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m3CAD187DEBCBD88D94604015E86A37B8944847BC_gshared)(___0_jobject, method);
}
inline intptr_t AndroidJNIHelper_GetMethodID_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m44C60AAE64EE97BFD5D9D302E7BE5BE20E6862B3 (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))AndroidJNIHelper_GetMethodID_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m44C60AAE64EE97BFD5D9D302E7BE5BE20E6862B3_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline double AndroidJavaObject__Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m0BA90472306DF5C3A1491FC3EB052DD58FA468C3 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  double (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m0BA90472306DF5C3A1491FC3EB052DD58FA468C3_gshared)(__this, ___0_methodID, ___1_args, method);
}
inline int16_t AndroidJavaObject_FromJavaArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m62441E1DA5798B8F585F5EF18386C4FB739BFFC8 (intptr_t ___0_jobject, const RuntimeMethod* method)
{
	return ((  int16_t (*) (intptr_t, const RuntimeMethod*))AndroidJavaObject_FromJavaArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m62441E1DA5798B8F585F5EF18386C4FB739BFFC8_gshared)(___0_jobject, method);
}
inline intptr_t AndroidJNIHelper_GetMethodID_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3B57915B048BD436E00741CD146D62AC775E7BA3 (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))AndroidJNIHelper_GetMethodID_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3B57915B048BD436E00741CD146D62AC775E7BA3_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline int16_t AndroidJavaObject__Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mA616697346ABF4A696B8F63B5F85AA92777EA400 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  int16_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mA616697346ABF4A696B8F63B5F85AA92777EA400_gshared)(__this, ___0_methodID, ___1_args, method);
}
inline int32_t AndroidJavaObject_FromJavaArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC1390BDE8BF42FAA78215DFE076A25F7AEA674D7 (intptr_t ___0_jobject, const RuntimeMethod* method)
{
	return ((  int32_t (*) (intptr_t, const RuntimeMethod*))AndroidJavaObject_FromJavaArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC1390BDE8BF42FAA78215DFE076A25F7AEA674D7_gshared)(___0_jobject, method);
}
inline intptr_t AndroidJNIHelper_GetMethodID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF87CC238DDBB3C90C35846E626548847CC7E319D (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))AndroidJNIHelper_GetMethodID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF87CC238DDBB3C90C35846E626548847CC7E319D_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline int32_t AndroidJavaObject__Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0D60BAB951F2C313123D62CAB81EEA263F2F0750 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0D60BAB951F2C313123D62CAB81EEA263F2F0750_gshared)(__this, ___0_methodID, ___1_args, method);
}
inline int64_t AndroidJavaObject_FromJavaArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m6A8E0C87ADD6FC1CA3F936C0CC0AC4AB379A8422 (intptr_t ___0_jobject, const RuntimeMethod* method)
{
	return ((  int64_t (*) (intptr_t, const RuntimeMethod*))AndroidJavaObject_FromJavaArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m6A8E0C87ADD6FC1CA3F936C0CC0AC4AB379A8422_gshared)(___0_jobject, method);
}
inline intptr_t AndroidJNIHelper_GetMethodID_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m9665934CC08FD80EB16882C4EA6FDBC5D9C3A175 (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))AndroidJNIHelper_GetMethodID_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m9665934CC08FD80EB16882C4EA6FDBC5D9C3A175_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline int64_t AndroidJavaObject__Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m4B925872A7B673BC9981AB72E3A229BBE0E1119E (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  int64_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m4B925872A7B673BC9981AB72E3A229BBE0E1119E_gshared)(__this, ___0_methodID, ___1_args, method);
}
inline int8_t AndroidJavaObject_FromJavaArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mB474FE99696A6DEB269E0F1C3C7DA32CD8854410 (intptr_t ___0_jobject, const RuntimeMethod* method)
{
	return ((  int8_t (*) (intptr_t, const RuntimeMethod*))AndroidJavaObject_FromJavaArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mB474FE99696A6DEB269E0F1C3C7DA32CD8854410_gshared)(___0_jobject, method);
}
inline intptr_t AndroidJNIHelper_GetMethodID_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEF6ACD1C6C5237E0446DB9DBDAC40BA2660849BB (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))AndroidJNIHelper_GetMethodID_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEF6ACD1C6C5237E0446DB9DBDAC40BA2660849BB_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline int8_t AndroidJavaObject__Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA3300F1D8CC0B110426EAE23F5FB7F27FD8AE76B (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  int8_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA3300F1D8CC0B110426EAE23F5FB7F27FD8AE76B_gshared)(__this, ___0_methodID, ___1_args, method);
}
inline float AndroidJavaObject_FromJavaArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mD5A794B10305822230E288BE2D72329A6EE0C8A4 (intptr_t ___0_jobject, const RuntimeMethod* method)
{
	return ((  float (*) (intptr_t, const RuntimeMethod*))AndroidJavaObject_FromJavaArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mD5A794B10305822230E288BE2D72329A6EE0C8A4_gshared)(___0_jobject, method);
}
inline intptr_t AndroidJNIHelper_GetMethodID_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA3FFDC6948922BEFC787A297D5483BA277EEFF0C (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))AndroidJNIHelper_GetMethodID_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA3FFDC6948922BEFC787A297D5483BA277EEFF0C_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline float AndroidJavaObject__Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8EDEAF89FE2C5B65277B0FC57FAD4FA9253E1140 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  float (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8EDEAF89FE2C5B65277B0FC57FAD4FA9253E1140_gshared)(__this, ___0_methodID, ___1_args, method);
}
inline Il2CppSharedGenericObject* AndroidJavaObject_FromJavaArray_TisIl2CppSharedGenericObject_m22D9898503E929D77563392822CD11A056613AFF (intptr_t ___0_jobject, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (intptr_t, const RuntimeMethod*))AndroidJavaObject_FromJavaArray_TisIl2CppSharedGenericObject_m22D9898503E929D77563392822CD11A056613AFF_gshared)(___0_jobject, method);
}
inline intptr_t AndroidJNIHelper_GetMethodID_TisIl2CppSharedGenericObject_m95122CB55DFAF463B14CBBA51C2B0811790DB90B (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))AndroidJNIHelper_GetMethodID_TisIl2CppSharedGenericObject_m95122CB55DFAF463B14CBBA51C2B0811790DB90B_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline Il2CppSharedGenericObject* AndroidJavaObject__Call_TisIl2CppSharedGenericObject_m34A45129A0AA339AC2E31492EF928112EDECC197 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisIl2CppSharedGenericObject_m34A45129A0AA339AC2E31492EF928112EDECC197_gshared)(__this, ___0_methodID, ___1_args, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNISafe_CallStaticIntMethod_m915549FA8FD7FB93B57A9708AD759488EA64418C (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNISafe_CallStaticBooleanMethod_m652685AC18F590965249C0F9B107C00C142595BB (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNISafe_CallStaticSByteMethod_m3E1F75978A2D686BC32DBF5A2F1F70F0D746C2B7 (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNISafe_CallStaticShortMethod_m8330383670ECCD7E24CDD68C419745E486FA6426 (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNISafe_CallStaticLongMethod_mDDE01239BEFCF007ECE05E51A249B3EB5BB61234 (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNISafe_CallStaticFloatMethod_m3F5419A10B9DF599352938B2BAD8866F8F112364 (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNISafe_CallStaticDoubleMethod_m73F1D51601D6849EE480389B4E43AED68C42B2B5 (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNISafe_CallStaticCharMethod_mC4B40190CE095728E823AB8B724ECDC8F4B36155 (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNISafe_CallStaticStringMethod_m4E150E34CC6DBF27A955F8DAEE5941D6E10879C0 (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_CallStaticObjectMethod_m3171BFAEF780EEF400AD592B6F040E7BE87C2387 (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
inline bool AndroidJavaObject__CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9EDC162A865064239ADA4058CD2A81B1A2CF6D0F (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9EDC162A865064239ADA4058CD2A81B1A2CF6D0F_gshared)(__this, ___0_methodID, ___1_args, method);
}
inline int32_t AndroidJavaObject__CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4F31B91D2F03C3068A4BE95DB368B6DF715CE316 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4F31B91D2F03C3068A4BE95DB368B6DF715CE316_gshared)(__this, ___0_methodID, ___1_args, method);
}
inline int64_t AndroidJavaObject__CallStatic_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mBE3DBCB8C5A089C1FFCAB9FF46D177C2DEF4FAEC (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  int64_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__CallStatic_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mBE3DBCB8C5A089C1FFCAB9FF46D177C2DEF4FAEC_gshared)(__this, ___0_methodID, ___1_args, method);
}
inline Il2CppSharedGenericObject* AndroidJavaObject__CallStatic_TisIl2CppSharedGenericObject_mF9D318147E29742DAA4B5C033BFC68D29CC1123B (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__CallStatic_TisIl2CppSharedGenericObject_mF9D318147E29742DAA4B5C033BFC68D29CC1123B_gshared)(__this, ___0_methodID, ___1_args, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNISafe_GetIntField_mBD983688B73063DE5C55D320F60F266443FAC97C (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNISafe_GetBooleanField_m34F37B560A6AEC81B9061FB3B72698C84720435D (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNISafe_GetSByteField_mAD3B08AA8A97F77CAE17DD25B0F389AFAC2023B1 (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNISafe_GetShortField_m5D21E87061C1DAC89DF58671C53432D0361F0C6E (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNISafe_GetLongField_m7DD751358D10BB276D8A95D413B9DFB1E8EE81D8 (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNISafe_GetFloatField_m1EAA1ED33002BBA28CA2B630521D6BF1B7D3A2E7 (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNISafe_GetDoubleField_mBCBD5E80223EDECC06FA783F34149E3625219074 (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNISafe_GetCharField_m8301FA96B40E27C032590FE3F8E84A777A4739C3 (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNISafe_GetStringField_mADFCA05D6DE790600B57E90B20F2E75AFC036B0F (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_GetObjectField_mCF3BB1C38718D6F55081126BC7F6C286B382B275 (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* AndroidJavaObject_AndroidJavaClassDeleteLocalRef_m56C84D7516BCB51A84E8AFDB3FCA46BAF494548F (intptr_t ___0_jclass, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_m2ECEEAF6389ABB9D6B963B8A98568ECD9413DF3C (intptr_t ___0_jobject, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNISafe_GetStaticStringField_mB3D1325B08A38C7DAF1FA3E6CB52F6D8E0A2CB47 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_GetStaticObjectField_mB6B9A9EB2619DFDF1DA56300BF9FEC19BF883867 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
inline Il2CppSharedGenericObject* AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisIl2CppSharedGenericObject_mB1CEFE624E92B82D234C1982AA2A7DF6AC5FD284 (intptr_t ___0_jobject, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (intptr_t, const RuntimeMethod*))AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisIl2CppSharedGenericObject_mB1CEFE624E92B82D234C1982AA2A7DF6AC5FD284_gshared)(___0_jobject, method);
}
inline intptr_t AndroidJNIHelper_GetFieldID_TisIl2CppSharedGenericObject_mDFF491584A820BE0629A47ED3B790A199050D589 (intptr_t ___0_jclass, String_t* ___1_fieldName, bool ___2_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, bool, const RuntimeMethod*))AndroidJNIHelper_GetFieldID_TisIl2CppSharedGenericObject_mDFF491584A820BE0629A47ED3B790A199050D589_gshared)(___0_jclass, ___1_fieldName, ___2_isStatic, method);
}
inline Il2CppSharedGenericObject* AndroidJavaObject__GetStatic_TisIl2CppSharedGenericObject_mF12B3A136CBDB98DF0876DF1FC47EA4A14D98A17 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, intptr_t, const RuntimeMethod*))AndroidJavaObject__GetStatic_TisIl2CppSharedGenericObject_mF12B3A136CBDB98DF0876DF1FC47EA4A14D98A17_gshared)(__this, ___0_fieldID, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNISafe_GetStaticIntField_m0698D50C44E490A009E8388C7321630DED5973BD (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNISafe_GetStaticBooleanField_m172BEAA3F0AB6754EA5F1AD30C36DAA0D3D7C666 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNISafe_GetStaticSByteField_m77596E5B1AE58DAFF39268AC954CAD53974A688D (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNISafe_GetStaticShortField_m83716D4D85B30F26803F866AC47D5C04AAB5D320 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNISafe_GetStaticLongField_mABC2B933CEB757E3FAF1FD6C60AA0C4D38E9C49D (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNISafe_GetStaticFloatField_mD1456B729026959309A839C2647279C0B6541356 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNISafe_GetStaticDoubleField_mEB86F2CE1F3879AAA9DEDA4B496F882C0E1DCBC2 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNISafe_GetStaticCharField_mF70F6D197261364AF2A9E875D84DDDA35BD0ED96 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetIntField_mD238DA37BA1B3D7693484237951A6EFEA9C62120 (intptr_t ___0_obj, intptr_t ___1_fieldID, int32_t ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetBooleanField_m5279EA41B214699E79733DC6C93259CC9DCA1D9E (intptr_t ___0_obj, intptr_t ___1_fieldID, bool ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetSByteField_mB021168746571E7CAA8C0EAD7AA7F02C18B5EE33 (intptr_t ___0_obj, intptr_t ___1_fieldID, int8_t ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetShortField_mF95E569C142DEDD604CE8BA7617328B3EDDD2F0D (intptr_t ___0_obj, intptr_t ___1_fieldID, int16_t ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetLongField_m13905547F5CDC7E01AB0D8C787BF98DC2870EC35 (intptr_t ___0_obj, intptr_t ___1_fieldID, int64_t ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetFloatField_m589CA6B8DD2BFD4515C5AEAE3772782B293F02C3 (intptr_t ___0_obj, intptr_t ___1_fieldID, float ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetDoubleField_mE93D0C5EC2019A1B657BD32970FE6EFC9B005A58 (intptr_t ___0_obj, intptr_t ___1_fieldID, double ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetCharField_m69D09A6A2CEA55D84B240FE32D90300AAB1334F9 (intptr_t ___0_obj, intptr_t ___1_fieldID, Il2CppChar ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetStringField_m649363D4E87763D6A9760359EAFB29802E90B409 (intptr_t ___0_obj, intptr_t ___1_fieldID, String_t* ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetObjectField_mFE500926F9C963FF106E8AA30A16F4C671BAA8CA (intptr_t ___0_obj, intptr_t ___1_fieldID, intptr_t ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaProxy_GetRawProxy_m685E066A4D378B596CD88385B954AE90CBF328A9 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_ConvertToJNIArray_mBEAE4605FF297D19AFB8CE4E8443C9C0F87E9A13 (RuntimeArray* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetStaticIntField_m1E20F6C72260CAFBF73207DCEC1816B2816EEBE1 (intptr_t ___0_clazz, intptr_t ___1_fieldID, int32_t ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetStaticBooleanField_mBE4E40DA1B07A29D356AEEE6CB9519F2B3621AC9 (intptr_t ___0_clazz, intptr_t ___1_fieldID, bool ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetStaticSByteField_m242120982A9227E1E8344FFE9F06FD74986D15E9 (intptr_t ___0_clazz, intptr_t ___1_fieldID, int8_t ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetStaticShortField_m92534AAA86D7E1055E12936C8A7BD6B865B7DB81 (intptr_t ___0_clazz, intptr_t ___1_fieldID, int16_t ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetStaticLongField_m299AAC2DE8B6747B0B5E109BABB2F3A4FC1F486E (intptr_t ___0_clazz, intptr_t ___1_fieldID, int64_t ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetStaticFloatField_mB2EDDE632AB2088CD12F1FD12174FB86990BCBEE (intptr_t ___0_clazz, intptr_t ___1_fieldID, float ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetStaticDoubleField_mA0253927D476917D2158A9CE29F1BF535485B956 (intptr_t ___0_clazz, intptr_t ___1_fieldID, double ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetStaticCharField_m2B8245275C36525798C869B7B1088B25BA663613 (intptr_t ___0_clazz, intptr_t ___1_fieldID, Il2CppChar ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetStaticStringField_m445D977B2374056C6E4607FAEDB7E99A1353E2EE (intptr_t ___0_clazz, intptr_t ___1_fieldID, String_t* ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetStaticObjectField_m7757F7E30F8122DAF89F138A8AE727CB896BC721 (intptr_t ___0_clazz, intptr_t ___1_fieldID, intptr_t ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
inline void ReadOnlyCollection_1__ctor_m010AA1E4CD3820BCC07B77A482D6A17D5C7F14C2 (ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050* __this, RuntimeObject* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050*, RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1__ctor_m010AA1E4CD3820BCC07B77A482D6A17D5C7F14C2_gshared)(__this, ___0_list, method);
}
inline void ReadOnlyCollection_1__ctor_mE22404DEC336AFE9817BF78FF9F7F90E07EE4F7A (ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513* __this, RuntimeObject* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513*, RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1__ctor_mE22404DEC336AFE9817BF78FF9F7F90E07EE4F7A_gshared)(__this, ___0_list, method);
}
inline void ReadOnlyCollection_1__ctor_mC1890FAC00703F47A655C35CBCB613C74A811580 (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* __this, RuntimeObject* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263*, RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1__ctor_mC1890FAC00703F47A655C35CBCB613C74A811580_gshared)(__this, ___0_list, method);
}
inline int32_t Array_BinarySearch_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m0AA0BC859F6008F37B680B00508C065B098C7D9A (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_array, int32_t ___1_index, int32_t ___2_length, uint64_t ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*, int32_t, int32_t, uint64_t, RuntimeObject*, const RuntimeMethod*))Array_BinarySearch_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m0AA0BC859F6008F37B680B00508C065B098C7D9A_gshared)(___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline int32_t Array_BinarySearch_TisSortNode_t6A06A977B925BF3F2ECC51B7C74B7A9AE8CE5C53_m8F7822162DB61B62B083C2CD23E5F632B85BF601 (SortNodeU5BU5D_t93BC9DAFE9D4796A15C2DAEEAA4799B6D0A6179B* ___0_array, int32_t ___1_index, int32_t ___2_length, SortNode_t6A06A977B925BF3F2ECC51B7C74B7A9AE8CE5C53 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (SortNodeU5BU5D_t93BC9DAFE9D4796A15C2DAEEAA4799B6D0A6179B*, int32_t, int32_t, SortNode_t6A06A977B925BF3F2ECC51B7C74B7A9AE8CE5C53, RuntimeObject*, const RuntimeMethod*))Array_BinarySearch_TisSortNode_t6A06A977B925BF3F2ECC51B7C74B7A9AE8CE5C53_m8F7822162DB61B62B083C2CD23E5F632B85BF601_gshared)(___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, String_t* ___1_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline ArraySortHelper_1_tEC109463DA70EE9C9096D4971D34412677570D28* ArraySortHelper_1_get_Default_m9357CBDC001EFB2BA8D065940A5C9FEFED3CC036_inline (const RuntimeMethod* method)
{
	return ((  ArraySortHelper_1_tEC109463DA70EE9C9096D4971D34412677570D28* (*) (const RuntimeMethod*))ArraySortHelper_1_get_Default_m9357CBDC001EFB2BA8D065940A5C9FEFED3CC036_gshared_inline)(method);
}
inline int32_t ArraySortHelper_1_BinarySearch_m65877F6FF5C5E15405D3326440C99808F156B993 (ArraySortHelper_1_tEC109463DA70EE9C9096D4971D34412677570D28* __this, CopyInfoU5BU5D_t99CD8AF5B14252370B2B7C05032486DF882AF466* ___0_array, int32_t ___1_index, int32_t ___2_length, CopyInfo_tB2613726E308EEDC2AE910784FA68BBB0A771565 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySortHelper_1_tEC109463DA70EE9C9096D4971D34412677570D28*, CopyInfoU5BU5D_t99CD8AF5B14252370B2B7C05032486DF882AF466*, int32_t, int32_t, CopyInfo_tB2613726E308EEDC2AE910784FA68BBB0A771565, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_1_BinarySearch_m65877F6FF5C5E15405D3326440C99808F156B993_gshared)(__this, ___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline ArraySortHelper_1_t3533F5404321426857F56650163B6A6729E7158D* ArraySortHelper_1_get_Default_mDEB3C8BCE73E4F1B555F5E570D0FEC50F21918AD_inline (const RuntimeMethod* method)
{
	return ((  ArraySortHelper_1_t3533F5404321426857F56650163B6A6729E7158D* (*) (const RuntimeMethod*))ArraySortHelper_1_get_Default_mDEB3C8BCE73E4F1B555F5E570D0FEC50F21918AD_gshared_inline)(method);
}
inline int32_t ArraySortHelper_1_BinarySearch_m222B9857B789411237EBD6571FD5A595DCF350CF (ArraySortHelper_1_t3533F5404321426857F56650163B6A6729E7158D* __this, CopyInfoU5BU5D_tC5EFD432382597328F5463CE3F49D3DA0CB4FCF6* ___0_array, int32_t ___1_index, int32_t ___2_length, CopyInfo_tD052D128BF5295669FA0728D8E0336E9557CE744 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySortHelper_1_t3533F5404321426857F56650163B6A6729E7158D*, CopyInfoU5BU5D_tC5EFD432382597328F5463CE3F49D3DA0CB4FCF6*, int32_t, int32_t, CopyInfo_tD052D128BF5295669FA0728D8E0336E9557CE744, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_1_BinarySearch_m222B9857B789411237EBD6571FD5A595DCF350CF_gshared)(__this, ___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline ArraySortHelper_1_t7737E5D659C96F9001D7F147BCD524DC66D0D4DD* ArraySortHelper_1_get_Default_m4C980850260F2DD83C4793EF022AA5C44DC609FC_inline (const RuntimeMethod* method)
{
	return ((  ArraySortHelper_1_t7737E5D659C96F9001D7F147BCD524DC66D0D4DD* (*) (const RuntimeMethod*))ArraySortHelper_1_get_Default_m4C980850260F2DD83C4793EF022AA5C44DC609FC_gshared_inline)(method);
}
inline int32_t ArraySortHelper_1_BinarySearch_m362ED51C5A63CBBB451AB79931C58F32B92827C0 (ArraySortHelper_1_t7737E5D659C96F9001D7F147BCD524DC66D0D4DD* __this, DeferredArrayU5BU5D_t2B402FF2AC2B32AA6CC9A5004046806319D243DC* ___0_array, int32_t ___1_index, int32_t ___2_length, DeferredArray_tB1EEA722CAEFADCA5DB101F288131BDB91341699 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySortHelper_1_t7737E5D659C96F9001D7F147BCD524DC66D0D4DD*, DeferredArrayU5BU5D_t2B402FF2AC2B32AA6CC9A5004046806319D243DC*, int32_t, int32_t, DeferredArray_tB1EEA722CAEFADCA5DB101F288131BDB91341699, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_1_BinarySearch_m362ED51C5A63CBBB451AB79931C58F32B92827C0_gshared)(__this, ___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline ArraySortHelper_1_t333E7CEAC391412941D21F2FCAFBEC610B5324AA* ArraySortHelper_1_get_Default_m431D2BBDE6BA5D8061FE8B743A0C610A257B15AB_inline (const RuntimeMethod* method)
{
	return ((  ArraySortHelper_1_t333E7CEAC391412941D21F2FCAFBEC610B5324AA* (*) (const RuntimeMethod*))ArraySortHelper_1_get_Default_m431D2BBDE6BA5D8061FE8B743A0C610A257B15AB_gshared_inline)(method);
}
inline int32_t ArraySortHelper_1_BinarySearch_m36EBD5D8B892F422D92B26CA38A1713A3215AFB0 (ArraySortHelper_1_t333E7CEAC391412941D21F2FCAFBEC610B5324AA* __this, DeferredArrayU5BU5D_tB4ED071664EA73A4D56895411476AB8A983CBCF1* ___0_array, int32_t ___1_index, int32_t ___2_length, DeferredArray_t550A0C1FE3282F51201CDCB03B920FD2C8F8A819 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySortHelper_1_t333E7CEAC391412941D21F2FCAFBEC610B5324AA*, DeferredArrayU5BU5D_tB4ED071664EA73A4D56895411476AB8A983CBCF1*, int32_t, int32_t, DeferredArray_t550A0C1FE3282F51201CDCB03B920FD2C8F8A819, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_1_BinarySearch_m36EBD5D8B892F422D92B26CA38A1713A3215AFB0_gshared)(__this, ___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline ArraySortHelper_1_tA6EE6D66AFBD4037261CC901C43D4945B05C117E* ArraySortHelper_1_get_Default_m4A2EA7195ED54D741C8FD211DDCA870F60C73CDB_inline (const RuntimeMethod* method)
{
	return ((  ArraySortHelper_1_tA6EE6D66AFBD4037261CC901C43D4945B05C117E* (*) (const RuntimeMethod*))ArraySortHelper_1_get_Default_m4A2EA7195ED54D741C8FD211DDCA870F60C73CDB_gshared_inline)(method);
}
inline int32_t ArraySortHelper_1_BinarySearch_m362907D4BA915295014FAD517FC1306D05BAF152 (ArraySortHelper_1_tA6EE6D66AFBD4037261CC901C43D4945B05C117E* __this, ItemU5BU5D_tB2AB30F4C7952C4FA867468576E1493A8858A165* ___0_array, int32_t ___1_index, int32_t ___2_length, Item_t7E1C074BAD45111B502C4559B0ECF73B3F52774E ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySortHelper_1_tA6EE6D66AFBD4037261CC901C43D4945B05C117E*, ItemU5BU5D_tB2AB30F4C7952C4FA867468576E1493A8858A165*, int32_t, int32_t, Item_t7E1C074BAD45111B502C4559B0ECF73B3F52774E, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_1_BinarySearch_m362907D4BA915295014FAD517FC1306D05BAF152_gshared)(__this, ___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline ArraySortHelper_1_t113B40406DB1AFB29A002792A3DE4DE156C3C51D* ArraySortHelper_1_get_Default_m208E22631B89CC4C1D927C646D297284FC6D5030_inline (const RuntimeMethod* method)
{
	return ((  ArraySortHelper_1_t113B40406DB1AFB29A002792A3DE4DE156C3C51D* (*) (const RuntimeMethod*))ArraySortHelper_1_get_Default_m208E22631B89CC4C1D927C646D297284FC6D5030_gshared_inline)(method);
}
inline int32_t ArraySortHelper_1_BinarySearch_m92474D14D4B19C0B147D01F985CA7BE684D905AC (ArraySortHelper_1_t113B40406DB1AFB29A002792A3DE4DE156C3C51D* __this, KeyValuePair_2U5BU5D_t59BE3E2793BE8FC78C2EE42EAEC58E864348B40C* ___0_array, int32_t ___1_index, int32_t ___2_length, KeyValuePair_2_t0BA7B6CDC5145C72EF97C07CD31755E3D104DAC5 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySortHelper_1_t113B40406DB1AFB29A002792A3DE4DE156C3C51D*, KeyValuePair_2U5BU5D_t59BE3E2793BE8FC78C2EE42EAEC58E864348B40C*, int32_t, int32_t, KeyValuePair_2_t0BA7B6CDC5145C72EF97C07CD31755E3D104DAC5, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_1_BinarySearch_m92474D14D4B19C0B147D01F985CA7BE684D905AC_gshared)(__this, ___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline ArraySortHelper_1_tFC3766CE9CF4C077AB50CBC92CD58E2F2E2AEC4D* ArraySortHelper_1_get_Default_mE68E7227734761975FE7EC9B590144FE6B28CFDC_inline (const RuntimeMethod* method)
{
	return ((  ArraySortHelper_1_tFC3766CE9CF4C077AB50CBC92CD58E2F2E2AEC4D* (*) (const RuntimeMethod*))ArraySortHelper_1_get_Default_mE68E7227734761975FE7EC9B590144FE6B28CFDC_gshared_inline)(method);
}
inline int32_t ArraySortHelper_1_BinarySearch_m62BD450E4769532AB7A49E149E8B4BE9DE8E905F (ArraySortHelper_1_tFC3766CE9CF4C077AB50CBC92CD58E2F2E2AEC4D* __this, KeyValuePair_2U5BU5D_t8E7451B50D849638463A256F730434F5AC214B52* ___0_array, int32_t ___1_index, int32_t ___2_length, KeyValuePair_2_tCAFDA02F578F9C36A2A1F8B598E89B9F0D5D1365 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySortHelper_1_tFC3766CE9CF4C077AB50CBC92CD58E2F2E2AEC4D*, KeyValuePair_2U5BU5D_t8E7451B50D849638463A256F730434F5AC214B52*, int32_t, int32_t, KeyValuePair_2_tCAFDA02F578F9C36A2A1F8B598E89B9F0D5D1365, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_1_BinarySearch_m62BD450E4769532AB7A49E149E8B4BE9DE8E905F_gshared)(__this, ___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline ArraySortHelper_1_t9D5988695D0E27FC2C660482823CD24E7867C57E* ArraySortHelper_1_get_Default_m8E3181F1B97294ACC3B83B9CED5928D0AAED8641_inline (const RuntimeMethod* method)
{
	return ((  ArraySortHelper_1_t9D5988695D0E27FC2C660482823CD24E7867C57E* (*) (const RuntimeMethod*))ArraySortHelper_1_get_Default_m8E3181F1B97294ACC3B83B9CED5928D0AAED8641_gshared_inline)(method);
}
inline int32_t ArraySortHelper_1_BinarySearch_mEA1A097DCE40F4262DA8843DC8C07ABB5DCD8079 (ArraySortHelper_1_t9D5988695D0E27FC2C660482823CD24E7867C57E* __this, KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* ___0_array, int32_t ___1_index, int32_t ___2_length, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySortHelper_1_t9D5988695D0E27FC2C660482823CD24E7867C57E*, KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA*, int32_t, int32_t, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_1_BinarySearch_mEA1A097DCE40F4262DA8843DC8C07ABB5DCD8079_gshared)(__this, ___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline ArraySortHelper_1_t1C05FD7083D194EB20ECE9BF364EE61BA5DFE1B1* ArraySortHelper_1_get_Default_mF58F40BA487C82790A3D15624F0C4722003CF30E_inline (const RuntimeMethod* method)
{
	return ((  ArraySortHelper_1_t1C05FD7083D194EB20ECE9BF364EE61BA5DFE1B1* (*) (const RuntimeMethod*))ArraySortHelper_1_get_Default_mF58F40BA487C82790A3D15624F0C4722003CF30E_gshared_inline)(method);
}
inline int32_t ArraySortHelper_1_BinarySearch_m96779DEA625B1D6BD53C5A746A1A68B6CD551364 (ArraySortHelper_1_t1C05FD7083D194EB20ECE9BF364EE61BA5DFE1B1* __this, KeyValuePair_2U5BU5D_t899E6C9DD89ED99CCF993FA90A368CCB9286EC61* ___0_array, int32_t ___1_index, int32_t ___2_length, KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySortHelper_1_t1C05FD7083D194EB20ECE9BF364EE61BA5DFE1B1*, KeyValuePair_2U5BU5D_t899E6C9DD89ED99CCF993FA90A368CCB9286EC61*, int32_t, int32_t, KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_1_BinarySearch_m96779DEA625B1D6BD53C5A746A1A68B6CD551364_gshared)(__this, ___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline ArraySortHelper_1_t3161D1D2810FDADCBA98BC302546D9CF98CFA41F* ArraySortHelper_1_get_Default_mFF5E22B327C79CD5A9B2FC7D57F5DD2CFC795A15_inline (const RuntimeMethod* method)
{
	return ((  ArraySortHelper_1_t3161D1D2810FDADCBA98BC302546D9CF98CFA41F* (*) (const RuntimeMethod*))ArraySortHelper_1_get_Default_mFF5E22B327C79CD5A9B2FC7D57F5DD2CFC795A15_gshared_inline)(method);
}
inline int32_t ArraySortHelper_1_BinarySearch_m6420104B9EA78106E4AAD6BB080600B434F014DC (ArraySortHelper_1_t3161D1D2810FDADCBA98BC302546D9CF98CFA41F* __this, NativeArray_1U5BU5D_t75698E5C2142DD4A324DD38EE484D69C8FD2CFD3* ___0_array, int32_t ___1_index, int32_t ___2_length, NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySortHelper_1_t3161D1D2810FDADCBA98BC302546D9CF98CFA41F*, NativeArray_1U5BU5D_t75698E5C2142DD4A324DD38EE484D69C8FD2CFD3*, int32_t, int32_t, NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_1_BinarySearch_m6420104B9EA78106E4AAD6BB080600B434F014DC_gshared)(__this, ___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline ArraySortHelper_1_tCF4AD90F61645344CEE07FF96E146A134CF88716* ArraySortHelper_1_get_Default_m3A24E760984C85C32CE96D3EBD6D9F5FC399D2C5_inline (const RuntimeMethod* method)
{
	return ((  ArraySortHelper_1_tCF4AD90F61645344CEE07FF96E146A134CF88716* (*) (const RuntimeMethod*))ArraySortHelper_1_get_Default_m3A24E760984C85C32CE96D3EBD6D9F5FC399D2C5_gshared_inline)(method);
}
inline int32_t ArraySortHelper_1_BinarySearch_m7EE2CF0D558E356F924D56602143DE9DD5ED3B64 (ArraySortHelper_1_tCF4AD90F61645344CEE07FF96E146A134CF88716* __this, NativeArray_1U5BU5D_t48F28BC4076C1A1608AA864367077AD64E04C11D* ___0_array, int32_t ___1_index, int32_t ___2_length, NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySortHelper_1_tCF4AD90F61645344CEE07FF96E146A134CF88716*, NativeArray_1U5BU5D_t48F28BC4076C1A1608AA864367077AD64E04C11D*, int32_t, int32_t, NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_1_BinarySearch_m7EE2CF0D558E356F924D56602143DE9DD5ED3B64_gshared)(__this, ___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline ArraySortHelper_1_t9AC8E0CAF25D5AA0127EDCAF3968B41697DFDDDE* ArraySortHelper_1_get_Default_m1803D8B61C090CD23F49C4B6730024AD91F23510_inline (const RuntimeMethod* method)
{
	return ((  ArraySortHelper_1_t9AC8E0CAF25D5AA0127EDCAF3968B41697DFDDDE* (*) (const RuntimeMethod*))ArraySortHelper_1_get_Default_m1803D8B61C090CD23F49C4B6730024AD91F23510_gshared_inline)(method);
}
inline int32_t ArraySortHelper_1_BinarySearch_m0BCE6EC3BE95132C034E9626C43F2A2FAED04D3B (ArraySortHelper_1_t9AC8E0CAF25D5AA0127EDCAF3968B41697DFDDDE* __this, NativeArray_1U5BU5D_t07FE0FFB798A14A16B56C709EBB100AA9D986CA4* ___0_array, int32_t ___1_index, int32_t ___2_length, NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySortHelper_1_t9AC8E0CAF25D5AA0127EDCAF3968B41697DFDDDE*, NativeArray_1U5BU5D_t07FE0FFB798A14A16B56C709EBB100AA9D986CA4*, int32_t, int32_t, NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_1_BinarySearch_m0BCE6EC3BE95132C034E9626C43F2A2FAED04D3B_gshared)(__this, ___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline ArraySortHelper_1_t999CC4B5DBE0626519030FE7B005516753FB7335* ArraySortHelper_1_get_Default_m3BB42B2BA14872290CDCAD41EAF53ABA1AA9543C_inline (const RuntimeMethod* method)
{
	return ((  ArraySortHelper_1_t999CC4B5DBE0626519030FE7B005516753FB7335* (*) (const RuntimeMethod*))ArraySortHelper_1_get_Default_m3BB42B2BA14872290CDCAD41EAF53ABA1AA9543C_gshared_inline)(method);
}
inline int32_t ArraySortHelper_1_BinarySearch_m78AF5BD7F40C034FEB26A89F2D70FAB9F2331819 (ArraySortHelper_1_t999CC4B5DBE0626519030FE7B005516753FB7335* __this, NativeArray_1U5BU5D_tB9179B8E492F9CEBC40651BF1C66A50255128C61* ___0_array, int32_t ___1_index, int32_t ___2_length, NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySortHelper_1_t999CC4B5DBE0626519030FE7B005516753FB7335*, NativeArray_1U5BU5D_tB9179B8E492F9CEBC40651BF1C66A50255128C61*, int32_t, int32_t, NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_1_BinarySearch_m78AF5BD7F40C034FEB26A89F2D70FAB9F2331819_gshared)(__this, ___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B Activator_CreateInstance_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_mB8D8D0B40473AABE2BDE2450564F761271C339F5_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* G_B2_0 = NULL;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* G_B1_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* L_2 = ((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_1, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var));
		NullCheck((Type_t*)L_2);
		bool L_3;
		L_3 = Type_get_HasElementType_m44F9601E586D2EEA2EDB93FB81D1D80521C264EE((Type_t*)L_2, NULL);
		if (!L_3)
		{
			G_B2_0 = L_2;
			goto IL_0027;
		}
		G_B1_0 = L_2;
	}
	{
		String_t* L_4;
		L_4 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD06FDE4FC2CBD6E5FAFE1400B04AC8E4F3001D0C)), NULL);
		MissingMethodException_t3D861B41F6520C32A7994A884343802925703155* L_5 = (MissingMethodException_t3D861B41F6520C32A7994A884343802925703155*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingMethodException_t3D861B41F6520C32A7994A884343802925703155_il2cpp_TypeInfo_var)));
		MissingMethodException__ctor_mAA7B921D386638F5F7B7E427EC5881150258C838(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0027:
	{
		V_0 = (int32_t)1;
		NullCheck(G_B2_0);
		RuntimeObject* L_6;
		L_6 = RuntimeType_CreateInstanceDefaultCtor_m049DF408DA0C9B09F8964B90B62456E3A1F135C6(G_B2_0, (bool)1, (bool)1, (bool)1, (bool)1, (&V_0), NULL);
		return ((*(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*)UnBox(L_6, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC Activator_CreateInstance_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_mB582E0DBDC7D7DAA16DB630281779C2AE79286C4_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* G_B2_0 = NULL;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* G_B1_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* L_2 = ((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_1, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var));
		NullCheck((Type_t*)L_2);
		bool L_3;
		L_3 = Type_get_HasElementType_m44F9601E586D2EEA2EDB93FB81D1D80521C264EE((Type_t*)L_2, NULL);
		if (!L_3)
		{
			G_B2_0 = L_2;
			goto IL_0027;
		}
		G_B1_0 = L_2;
	}
	{
		String_t* L_4;
		L_4 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD06FDE4FC2CBD6E5FAFE1400B04AC8E4F3001D0C)), NULL);
		MissingMethodException_t3D861B41F6520C32A7994A884343802925703155* L_5 = (MissingMethodException_t3D861B41F6520C32A7994A884343802925703155*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingMethodException_t3D861B41F6520C32A7994A884343802925703155_il2cpp_TypeInfo_var)));
		MissingMethodException__ctor_mAA7B921D386638F5F7B7E427EC5881150258C838(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0027:
	{
		V_0 = (int32_t)1;
		NullCheck(G_B2_0);
		RuntimeObject* L_6;
		L_6 = RuntimeType_CreateInstanceDefaultCtor_m049DF408DA0C9B09F8964B90B62456E3A1F135C6(G_B2_0, (bool)1, (bool)1, (bool)1, (bool)1, (&V_0), NULL);
		return ((*(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*)UnBox(L_6, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A Activator_CreateInstance_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_mB29B56B7F4BC55797D664F39C1F4E5C96A1647ED_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* G_B2_0 = NULL;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* G_B1_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* L_2 = ((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_1, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var));
		NullCheck((Type_t*)L_2);
		bool L_3;
		L_3 = Type_get_HasElementType_m44F9601E586D2EEA2EDB93FB81D1D80521C264EE((Type_t*)L_2, NULL);
		if (!L_3)
		{
			G_B2_0 = L_2;
			goto IL_0027;
		}
		G_B1_0 = L_2;
	}
	{
		String_t* L_4;
		L_4 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD06FDE4FC2CBD6E5FAFE1400B04AC8E4F3001D0C)), NULL);
		MissingMethodException_t3D861B41F6520C32A7994A884343802925703155* L_5 = (MissingMethodException_t3D861B41F6520C32A7994A884343802925703155*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingMethodException_t3D861B41F6520C32A7994A884343802925703155_il2cpp_TypeInfo_var)));
		MissingMethodException__ctor_mAA7B921D386638F5F7B7E427EC5881150258C838(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0027:
	{
		V_0 = (int32_t)1;
		NullCheck(G_B2_0);
		RuntimeObject* L_6;
		L_6 = RuntimeType_CreateInstanceDefaultCtor_m049DF408DA0C9B09F8964B90B62456E3A1F135C6(G_B2_0, (bool)1, (bool)1, (bool)1, (bool)1, (&V_0), NULL);
		return ((*(StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A*)UnBox(L_6, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 Activator_CreateInstance_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_mD1A13D031C1A854D51761093FB082D1D45DE6D69_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* G_B2_0 = NULL;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* G_B1_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* L_2 = ((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_1, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var));
		NullCheck((Type_t*)L_2);
		bool L_3;
		L_3 = Type_get_HasElementType_m44F9601E586D2EEA2EDB93FB81D1D80521C264EE((Type_t*)L_2, NULL);
		if (!L_3)
		{
			G_B2_0 = L_2;
			goto IL_0027;
		}
		G_B1_0 = L_2;
	}
	{
		String_t* L_4;
		L_4 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD06FDE4FC2CBD6E5FAFE1400B04AC8E4F3001D0C)), NULL);
		MissingMethodException_t3D861B41F6520C32A7994A884343802925703155* L_5 = (MissingMethodException_t3D861B41F6520C32A7994A884343802925703155*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingMethodException_t3D861B41F6520C32A7994A884343802925703155_il2cpp_TypeInfo_var)));
		MissingMethodException__ctor_mAA7B921D386638F5F7B7E427EC5881150258C838(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0027:
	{
		V_0 = (int32_t)1;
		NullCheck(G_B2_0);
		RuntimeObject* L_6;
		L_6 = RuntimeType_CreateInstanceDefaultCtor_m049DF408DA0C9B09F8964B90B62456E3A1F135C6(G_B2_0, (bool)1, (bool)1, (bool)1, (bool)1, (&V_0), NULL);
		return ((*(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*)UnBox(L_6, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 Activator_CreateInstance_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_mEAF86494300C8C3DE4F2A16B8BB1672882DEE4CE_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* G_B2_0 = NULL;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* G_B1_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* L_2 = ((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_1, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var));
		NullCheck((Type_t*)L_2);
		bool L_3;
		L_3 = Type_get_HasElementType_m44F9601E586D2EEA2EDB93FB81D1D80521C264EE((Type_t*)L_2, NULL);
		if (!L_3)
		{
			G_B2_0 = L_2;
			goto IL_0027;
		}
		G_B1_0 = L_2;
	}
	{
		String_t* L_4;
		L_4 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD06FDE4FC2CBD6E5FAFE1400B04AC8E4F3001D0C)), NULL);
		MissingMethodException_t3D861B41F6520C32A7994A884343802925703155* L_5 = (MissingMethodException_t3D861B41F6520C32A7994A884343802925703155*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingMethodException_t3D861B41F6520C32A7994A884343802925703155_il2cpp_TypeInfo_var)));
		MissingMethodException__ctor_mAA7B921D386638F5F7B7E427EC5881150258C838(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0027:
	{
		V_0 = (int32_t)1;
		NullCheck(G_B2_0);
		RuntimeObject* L_6;
		L_6 = RuntimeType_CreateInstanceDefaultCtor_m049DF408DA0C9B09F8964B90B62456E3A1F135C6(G_B2_0, (bool)1, (bool)1, (bool)1, (bool)1, (&V_0), NULL);
		return ((*(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*)UnBox(L_6, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 Activator_CreateInstance_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_m34A5A0137066F20D59657468876C38CA5FE523CC_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* G_B2_0 = NULL;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* G_B1_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* L_2 = ((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_1, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var));
		NullCheck((Type_t*)L_2);
		bool L_3;
		L_3 = Type_get_HasElementType_m44F9601E586D2EEA2EDB93FB81D1D80521C264EE((Type_t*)L_2, NULL);
		if (!L_3)
		{
			G_B2_0 = L_2;
			goto IL_0027;
		}
		G_B1_0 = L_2;
	}
	{
		String_t* L_4;
		L_4 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD06FDE4FC2CBD6E5FAFE1400B04AC8E4F3001D0C)), NULL);
		MissingMethodException_t3D861B41F6520C32A7994A884343802925703155* L_5 = (MissingMethodException_t3D861B41F6520C32A7994A884343802925703155*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingMethodException_t3D861B41F6520C32A7994A884343802925703155_il2cpp_TypeInfo_var)));
		MissingMethodException__ctor_mAA7B921D386638F5F7B7E427EC5881150258C838(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0027:
	{
		V_0 = (int32_t)1;
		NullCheck(G_B2_0);
		RuntimeObject* L_6;
		L_6 = RuntimeType_CreateInstanceDefaultCtor_m049DF408DA0C9B09F8964B90B62456E3A1F135C6(G_B2_0, (bool)1, (bool)1, (bool)1, (bool)1, (&V_0), NULL);
		return ((*(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*)UnBox(L_6, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A Activator_CreateInstance_TisTextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A_mC2C9597880C4AAB8AF41B4258DE05161D9A36681_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* G_B2_0 = NULL;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* G_B1_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* L_2 = ((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_1, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var));
		NullCheck((Type_t*)L_2);
		bool L_3;
		L_3 = Type_get_HasElementType_m44F9601E586D2EEA2EDB93FB81D1D80521C264EE((Type_t*)L_2, NULL);
		if (!L_3)
		{
			G_B2_0 = L_2;
			goto IL_0027;
		}
		G_B1_0 = L_2;
	}
	{
		String_t* L_4;
		L_4 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD06FDE4FC2CBD6E5FAFE1400B04AC8E4F3001D0C)), NULL);
		MissingMethodException_t3D861B41F6520C32A7994A884343802925703155* L_5 = (MissingMethodException_t3D861B41F6520C32A7994A884343802925703155*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingMethodException_t3D861B41F6520C32A7994A884343802925703155_il2cpp_TypeInfo_var)));
		MissingMethodException__ctor_mAA7B921D386638F5F7B7E427EC5881150258C838(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0027:
	{
		V_0 = (int32_t)1;
		NullCheck(G_B2_0);
		RuntimeObject* L_6;
		L_6 = RuntimeType_CreateInstanceDefaultCtor_m049DF408DA0C9B09F8964B90B62456E3A1F135C6(G_B2_0, (bool)1, (bool)1, (bool)1, (bool)1, (&V_0), NULL);
		return ((*(TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A*)UnBox(L_6, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 Activator_CreateInstance_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_m51BC6E9A4C7031AFA9519194E815281214F3C71B_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* G_B2_0 = NULL;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* G_B1_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* L_2 = ((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_1, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var));
		NullCheck((Type_t*)L_2);
		bool L_3;
		L_3 = Type_get_HasElementType_m44F9601E586D2EEA2EDB93FB81D1D80521C264EE((Type_t*)L_2, NULL);
		if (!L_3)
		{
			G_B2_0 = L_2;
			goto IL_0027;
		}
		G_B1_0 = L_2;
	}
	{
		String_t* L_4;
		L_4 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD06FDE4FC2CBD6E5FAFE1400B04AC8E4F3001D0C)), NULL);
		MissingMethodException_t3D861B41F6520C32A7994A884343802925703155* L_5 = (MissingMethodException_t3D861B41F6520C32A7994A884343802925703155*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingMethodException_t3D861B41F6520C32A7994A884343802925703155_il2cpp_TypeInfo_var)));
		MissingMethodException__ctor_mAA7B921D386638F5F7B7E427EC5881150258C838(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0027:
	{
		V_0 = (int32_t)1;
		NullCheck(G_B2_0);
		RuntimeObject* L_6;
		L_6 = RuntimeType_CreateInstanceDefaultCtor_m049DF408DA0C9B09F8964B90B62456E3A1F135C6(G_B2_0, (bool)1, (bool)1, (bool)1, (bool)1, (&V_0), NULL);
		return ((*(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*)UnBox(L_6, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E Activator_CreateInstance_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_mFBAF3A9BCEEB82998EE10694A16655640250A491_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* G_B2_0 = NULL;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* G_B1_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* L_2 = ((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_1, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var));
		NullCheck((Type_t*)L_2);
		bool L_3;
		L_3 = Type_get_HasElementType_m44F9601E586D2EEA2EDB93FB81D1D80521C264EE((Type_t*)L_2, NULL);
		if (!L_3)
		{
			G_B2_0 = L_2;
			goto IL_0027;
		}
		G_B1_0 = L_2;
	}
	{
		String_t* L_4;
		L_4 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD06FDE4FC2CBD6E5FAFE1400B04AC8E4F3001D0C)), NULL);
		MissingMethodException_t3D861B41F6520C32A7994A884343802925703155* L_5 = (MissingMethodException_t3D861B41F6520C32A7994A884343802925703155*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingMethodException_t3D861B41F6520C32A7994A884343802925703155_il2cpp_TypeInfo_var)));
		MissingMethodException__ctor_mAA7B921D386638F5F7B7E427EC5881150258C838(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0027:
	{
		V_0 = (int32_t)1;
		NullCheck(G_B2_0);
		RuntimeObject* L_6;
		L_6 = RuntimeType_CreateInstanceDefaultCtor_m049DF408DA0C9B09F8964B90B62456E3A1F135C6(G_B2_0, (bool)1, (bool)1, (bool)1, (bool)1, (&V_0), NULL);
		return ((*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)UnBox(L_6, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808 Activator_CreateInstance_TisTransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808_mB1551F7E82376CAD3EFFEDEC58920BD0AB3AF3B2_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* G_B2_0 = NULL;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* G_B1_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* L_2 = ((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_1, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var));
		NullCheck((Type_t*)L_2);
		bool L_3;
		L_3 = Type_get_HasElementType_m44F9601E586D2EEA2EDB93FB81D1D80521C264EE((Type_t*)L_2, NULL);
		if (!L_3)
		{
			G_B2_0 = L_2;
			goto IL_0027;
		}
		G_B1_0 = L_2;
	}
	{
		String_t* L_4;
		L_4 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD06FDE4FC2CBD6E5FAFE1400B04AC8E4F3001D0C)), NULL);
		MissingMethodException_t3D861B41F6520C32A7994A884343802925703155* L_5 = (MissingMethodException_t3D861B41F6520C32A7994A884343802925703155*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingMethodException_t3D861B41F6520C32A7994A884343802925703155_il2cpp_TypeInfo_var)));
		MissingMethodException__ctor_mAA7B921D386638F5F7B7E427EC5881150258C838(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0027:
	{
		V_0 = (int32_t)1;
		NullCheck(G_B2_0);
		RuntimeObject* L_6;
		L_6 = RuntimeType_CreateInstanceDefaultCtor_m049DF408DA0C9B09F8964B90B62456E3A1F135C6(G_B2_0, (bool)1, (bool)1, (bool)1, (bool)1, (&V_0), NULL);
		return ((*(TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808*)UnBox(L_6, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 Activator_CreateInstance_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_mC287133E168AD4F8E95D1A7EC07A8AE4B2E47835_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* G_B2_0 = NULL;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* G_B1_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* L_2 = ((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_1, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var));
		NullCheck((Type_t*)L_2);
		bool L_3;
		L_3 = Type_get_HasElementType_m44F9601E586D2EEA2EDB93FB81D1D80521C264EE((Type_t*)L_2, NULL);
		if (!L_3)
		{
			G_B2_0 = L_2;
			goto IL_0027;
		}
		G_B1_0 = L_2;
	}
	{
		String_t* L_4;
		L_4 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD06FDE4FC2CBD6E5FAFE1400B04AC8E4F3001D0C)), NULL);
		MissingMethodException_t3D861B41F6520C32A7994A884343802925703155* L_5 = (MissingMethodException_t3D861B41F6520C32A7994A884343802925703155*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingMethodException_t3D861B41F6520C32A7994A884343802925703155_il2cpp_TypeInfo_var)));
		MissingMethodException__ctor_mAA7B921D386638F5F7B7E427EC5881150258C838(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0027:
	{
		V_0 = (int32_t)1;
		NullCheck(G_B2_0);
		RuntimeObject* L_6;
		L_6 = RuntimeType_CreateInstanceDefaultCtor_m049DF408DA0C9B09F8964B90B62456E3A1F135C6(G_B2_0, (bool)1, (bool)1, (bool)1, (bool)1, (&V_0), NULL);
		return ((*(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)UnBox(L_6, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321 Activator_CreateInstance_TisTransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321_m3A8E35301BDC2B6BEAA8686313357CE1AAB75742_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* G_B2_0 = NULL;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* G_B1_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* L_2 = ((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_1, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var));
		NullCheck((Type_t*)L_2);
		bool L_3;
		L_3 = Type_get_HasElementType_m44F9601E586D2EEA2EDB93FB81D1D80521C264EE((Type_t*)L_2, NULL);
		if (!L_3)
		{
			G_B2_0 = L_2;
			goto IL_0027;
		}
		G_B1_0 = L_2;
	}
	{
		String_t* L_4;
		L_4 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD06FDE4FC2CBD6E5FAFE1400B04AC8E4F3001D0C)), NULL);
		MissingMethodException_t3D861B41F6520C32A7994A884343802925703155* L_5 = (MissingMethodException_t3D861B41F6520C32A7994A884343802925703155*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingMethodException_t3D861B41F6520C32A7994A884343802925703155_il2cpp_TypeInfo_var)));
		MissingMethodException__ctor_mAA7B921D386638F5F7B7E427EC5881150258C838(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0027:
	{
		V_0 = (int32_t)1;
		NullCheck(G_B2_0);
		RuntimeObject* L_6;
		L_6 = RuntimeType_CreateInstanceDefaultCtor_m049DF408DA0C9B09F8964B90B62456E3A1F135C6(G_B2_0, (bool)1, (bool)1, (bool)1, (bool)1, (&V_0), NULL);
		return ((*(TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321*)UnBox(L_6, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E Activator_CreateInstance_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m15B360430D15439E3BF8A298E6B5CCC838FBD30D_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* G_B2_0 = NULL;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* G_B1_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* L_2 = ((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_1, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var));
		NullCheck((Type_t*)L_2);
		bool L_3;
		L_3 = Type_get_HasElementType_m44F9601E586D2EEA2EDB93FB81D1D80521C264EE((Type_t*)L_2, NULL);
		if (!L_3)
		{
			G_B2_0 = L_2;
			goto IL_0027;
		}
		G_B1_0 = L_2;
	}
	{
		String_t* L_4;
		L_4 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD06FDE4FC2CBD6E5FAFE1400B04AC8E4F3001D0C)), NULL);
		MissingMethodException_t3D861B41F6520C32A7994A884343802925703155* L_5 = (MissingMethodException_t3D861B41F6520C32A7994A884343802925703155*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingMethodException_t3D861B41F6520C32A7994A884343802925703155_il2cpp_TypeInfo_var)));
		MissingMethodException__ctor_mAA7B921D386638F5F7B7E427EC5881150258C838(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0027:
	{
		V_0 = (int32_t)1;
		NullCheck(G_B2_0);
		RuntimeObject* L_6;
		L_6 = RuntimeType_CreateInstanceDefaultCtor_m049DF408DA0C9B09F8964B90B62456E3A1F135C6(G_B2_0, (bool)1, (bool)1, (bool)1, (bool)1, (&V_0), NULL);
		return ((*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)UnBox(L_6, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Activator_CreateInstance_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m2BACE7A800D707FD2BBBADCAA1E55904A26C17DA_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* G_B2_0 = NULL;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* G_B1_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* L_2 = ((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_1, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var));
		NullCheck((Type_t*)L_2);
		bool L_3;
		L_3 = Type_get_HasElementType_m44F9601E586D2EEA2EDB93FB81D1D80521C264EE((Type_t*)L_2, NULL);
		if (!L_3)
		{
			G_B2_0 = L_2;
			goto IL_0027;
		}
		G_B1_0 = L_2;
	}
	{
		String_t* L_4;
		L_4 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD06FDE4FC2CBD6E5FAFE1400B04AC8E4F3001D0C)), NULL);
		MissingMethodException_t3D861B41F6520C32A7994A884343802925703155* L_5 = (MissingMethodException_t3D861B41F6520C32A7994A884343802925703155*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingMethodException_t3D861B41F6520C32A7994A884343802925703155_il2cpp_TypeInfo_var)));
		MissingMethodException__ctor_mAA7B921D386638F5F7B7E427EC5881150258C838(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0027:
	{
		V_0 = (int32_t)1;
		NullCheck(G_B2_0);
		RuntimeObject* L_6;
		L_6 = RuntimeType_CreateInstanceDefaultCtor_m049DF408DA0C9B09F8964B90B62456E3A1F135C6(G_B2_0, (bool)1, (bool)1, (bool)1, (bool)1, (&V_0), NULL);
		return ((*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)UnBox(L_6, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A Activator_CreateInstance_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_m67E46B50370FA772FAE4C99AC66AE279C0493AB8_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* G_B2_0 = NULL;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* G_B1_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* L_2 = ((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_1, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var));
		NullCheck((Type_t*)L_2);
		bool L_3;
		L_3 = Type_get_HasElementType_m44F9601E586D2EEA2EDB93FB81D1D80521C264EE((Type_t*)L_2, NULL);
		if (!L_3)
		{
			G_B2_0 = L_2;
			goto IL_0027;
		}
		G_B1_0 = L_2;
	}
	{
		String_t* L_4;
		L_4 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD06FDE4FC2CBD6E5FAFE1400B04AC8E4F3001D0C)), NULL);
		MissingMethodException_t3D861B41F6520C32A7994A884343802925703155* L_5 = (MissingMethodException_t3D861B41F6520C32A7994A884343802925703155*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingMethodException_t3D861B41F6520C32A7994A884343802925703155_il2cpp_TypeInfo_var)));
		MissingMethodException__ctor_mAA7B921D386638F5F7B7E427EC5881150258C838(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0027:
	{
		V_0 = (int32_t)1;
		NullCheck(G_B2_0);
		RuntimeObject* L_6;
		L_6 = RuntimeType_CreateInstanceDefaultCtor_m049DF408DA0C9B09F8964B90B62456E3A1F135C6(G_B2_0, (bool)1, (bool)1, (bool)1, (bool)1, (&V_0), NULL);
		return ((*(Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*)UnBox(L_6, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Activator_CreateInstance_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m33055D88EE5D2E76F61DE1594F4CE52CF58C2F5A_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* G_B2_0 = NULL;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* G_B1_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* L_2 = ((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_1, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var));
		NullCheck((Type_t*)L_2);
		bool L_3;
		L_3 = Type_get_HasElementType_m44F9601E586D2EEA2EDB93FB81D1D80521C264EE((Type_t*)L_2, NULL);
		if (!L_3)
		{
			G_B2_0 = L_2;
			goto IL_0027;
		}
		G_B1_0 = L_2;
	}
	{
		String_t* L_4;
		L_4 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD06FDE4FC2CBD6E5FAFE1400B04AC8E4F3001D0C)), NULL);
		MissingMethodException_t3D861B41F6520C32A7994A884343802925703155* L_5 = (MissingMethodException_t3D861B41F6520C32A7994A884343802925703155*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingMethodException_t3D861B41F6520C32A7994A884343802925703155_il2cpp_TypeInfo_var)));
		MissingMethodException__ctor_mAA7B921D386638F5F7B7E427EC5881150258C838(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0027:
	{
		V_0 = (int32_t)1;
		NullCheck(G_B2_0);
		RuntimeObject* L_6;
		L_6 = RuntimeType_CreateInstanceDefaultCtor_m049DF408DA0C9B09F8964B90B62456E3A1F135C6(G_B2_0, (bool)1, (bool)1, (bool)1, (bool)1, (&V_0), NULL);
		return ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_6, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 Activator_CreateInstance_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m04E889365CD335CC118F243F1F309FC9646222BB_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* G_B2_0 = NULL;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* G_B1_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* L_2 = ((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_1, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var));
		NullCheck((Type_t*)L_2);
		bool L_3;
		L_3 = Type_get_HasElementType_m44F9601E586D2EEA2EDB93FB81D1D80521C264EE((Type_t*)L_2, NULL);
		if (!L_3)
		{
			G_B2_0 = L_2;
			goto IL_0027;
		}
		G_B1_0 = L_2;
	}
	{
		String_t* L_4;
		L_4 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD06FDE4FC2CBD6E5FAFE1400B04AC8E4F3001D0C)), NULL);
		MissingMethodException_t3D861B41F6520C32A7994A884343802925703155* L_5 = (MissingMethodException_t3D861B41F6520C32A7994A884343802925703155*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingMethodException_t3D861B41F6520C32A7994A884343802925703155_il2cpp_TypeInfo_var)));
		MissingMethodException__ctor_mAA7B921D386638F5F7B7E427EC5881150258C838(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0027:
	{
		V_0 = (int32_t)1;
		NullCheck(G_B2_0);
		RuntimeObject* L_6;
		L_6 = RuntimeType_CreateInstanceDefaultCtor_m049DF408DA0C9B09F8964B90B62456E3A1F135C6(G_B2_0, (bool)1, (bool)1, (bool)1, (bool)1, (&V_0), NULL);
		return ((*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)UnBox(L_6, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Activator_CreateInstance_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mD1EE911F90F2E795C5EAC458633B1A050CD4074A_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* G_B2_0 = NULL;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* G_B1_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* L_2 = ((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_1, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var));
		NullCheck((Type_t*)L_2);
		bool L_3;
		L_3 = Type_get_HasElementType_m44F9601E586D2EEA2EDB93FB81D1D80521C264EE((Type_t*)L_2, NULL);
		if (!L_3)
		{
			G_B2_0 = L_2;
			goto IL_0027;
		}
		G_B1_0 = L_2;
	}
	{
		String_t* L_4;
		L_4 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD06FDE4FC2CBD6E5FAFE1400B04AC8E4F3001D0C)), NULL);
		MissingMethodException_t3D861B41F6520C32A7994A884343802925703155* L_5 = (MissingMethodException_t3D861B41F6520C32A7994A884343802925703155*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingMethodException_t3D861B41F6520C32A7994A884343802925703155_il2cpp_TypeInfo_var)));
		MissingMethodException__ctor_mAA7B921D386638F5F7B7E427EC5881150258C838(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0027:
	{
		V_0 = (int32_t)1;
		NullCheck(G_B2_0);
		RuntimeObject* L_6;
		L_6 = RuntimeType_CreateInstanceDefaultCtor_m049DF408DA0C9B09F8964B90B62456E3A1F135C6(G_B2_0, (bool)1, (bool)1, (bool)1, (bool)1, (&V_0), NULL);
		return ((*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)UnBox(L_6, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B Activator_CreateInstance_TisVisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B_mAF4C9D2A71E1EE8F1E36323BAD2D70734E53DB9B_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* G_B2_0 = NULL;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* G_B1_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* L_2 = ((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_1, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var));
		NullCheck((Type_t*)L_2);
		bool L_3;
		L_3 = Type_get_HasElementType_m44F9601E586D2EEA2EDB93FB81D1D80521C264EE((Type_t*)L_2, NULL);
		if (!L_3)
		{
			G_B2_0 = L_2;
			goto IL_0027;
		}
		G_B1_0 = L_2;
	}
	{
		String_t* L_4;
		L_4 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD06FDE4FC2CBD6E5FAFE1400B04AC8E4F3001D0C)), NULL);
		MissingMethodException_t3D861B41F6520C32A7994A884343802925703155* L_5 = (MissingMethodException_t3D861B41F6520C32A7994A884343802925703155*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingMethodException_t3D861B41F6520C32A7994A884343802925703155_il2cpp_TypeInfo_var)));
		MissingMethodException__ctor_mAA7B921D386638F5F7B7E427EC5881150258C838(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0027:
	{
		V_0 = (int32_t)1;
		NullCheck(G_B2_0);
		RuntimeObject* L_6;
		L_6 = RuntimeType_CreateInstanceDefaultCtor_m049DF408DA0C9B09F8964B90B62456E3A1F135C6(G_B2_0, (bool)1, (bool)1, (bool)1, (bool)1, (&V_0), NULL);
		return ((*(VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B*)UnBox(L_6, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Activator_CreateInstance_TisIl2CppSharedGenericObject_m4C74D3D65600820EB977E87AD08D24AF782C97C3_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* G_B2_0 = NULL;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* G_B1_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* L_2 = ((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_1, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var));
		NullCheck((Type_t*)L_2);
		bool L_3;
		L_3 = Type_get_HasElementType_m44F9601E586D2EEA2EDB93FB81D1D80521C264EE((Type_t*)L_2, NULL);
		if (!L_3)
		{
			G_B2_0 = L_2;
			goto IL_0027;
		}
		G_B1_0 = L_2;
	}
	{
		String_t* L_4;
		L_4 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD06FDE4FC2CBD6E5FAFE1400B04AC8E4F3001D0C)), NULL);
		MissingMethodException_t3D861B41F6520C32A7994A884343802925703155* L_5 = (MissingMethodException_t3D861B41F6520C32A7994A884343802925703155*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingMethodException_t3D861B41F6520C32A7994A884343802925703155_il2cpp_TypeInfo_var)));
		MissingMethodException__ctor_mAA7B921D386638F5F7B7E427EC5881150258C838(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0027:
	{
		V_0 = (int32_t)1;
		NullCheck(G_B2_0);
		RuntimeObject* L_6;
		L_6 = RuntimeType_CreateInstanceDefaultCtor_m049DF408DA0C9B09F8964B90B62456E3A1F135C6(G_B2_0, (bool)1, (bool)1, (bool)1, (bool)1, (&V_0), NULL);
		return ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Activator_CreateInstance_TisIl2CppFullySharedGenericAny_m68F3B5F53DBB1741E028DA541BE07A3D2382138D_gshared (Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t7DFA7E7752C6CB82AD96769CC7307709CB5ACD3B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T_t7DFA7E7752C6CB82AD96769CC7307709CB5ACD3B);
	int32_t V_0 = 0;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* G_B2_0 = NULL;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* G_B1_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* L_2 = ((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_1, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var));
		NullCheck((Type_t*)L_2);
		bool L_3;
		L_3 = Type_get_HasElementType_m44F9601E586D2EEA2EDB93FB81D1D80521C264EE((Type_t*)L_2, NULL);
		if (!L_3)
		{
			G_B2_0 = L_2;
			goto IL_0027;
		}
		G_B1_0 = L_2;
	}
	{
		String_t* L_4;
		L_4 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD06FDE4FC2CBD6E5FAFE1400B04AC8E4F3001D0C)), NULL);
		MissingMethodException_t3D861B41F6520C32A7994A884343802925703155* L_5 = (MissingMethodException_t3D861B41F6520C32A7994A884343802925703155*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingMethodException_t3D861B41F6520C32A7994A884343802925703155_il2cpp_TypeInfo_var)));
		MissingMethodException__ctor_mAA7B921D386638F5F7B7E427EC5881150258C838(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0027:
	{
		V_0 = (int32_t)1;
		NullCheck(G_B2_0);
		RuntimeObject* L_6;
		L_6 = RuntimeType_CreateInstanceDefaultCtor_m049DF408DA0C9B09F8964B90B62456E3A1F135C6(G_B2_0, (bool)1, (bool)1, (bool)1, (bool)1, (&V_0), NULL);
		void* L_8 = UnBox_Any(L_6, il2cpp_rgctx_data(method->rgctx_data, 1), L_7);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_8)), SizeOf_T_t7DFA7E7752C6CB82AD96769CC7307709CB5ACD3B);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D Activator_CreateInstance_TisMapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D_mDDB72B881D9083CE61CCBBC4F51622F81BAF59CA_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* G_B2_0 = NULL;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* G_B1_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* L_2 = ((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_1, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var));
		NullCheck((Type_t*)L_2);
		bool L_3;
		L_3 = Type_get_HasElementType_m44F9601E586D2EEA2EDB93FB81D1D80521C264EE((Type_t*)L_2, NULL);
		if (!L_3)
		{
			G_B2_0 = L_2;
			goto IL_0027;
		}
		G_B1_0 = L_2;
	}
	{
		String_t* L_4;
		L_4 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD06FDE4FC2CBD6E5FAFE1400B04AC8E4F3001D0C)), NULL);
		MissingMethodException_t3D861B41F6520C32A7994A884343802925703155* L_5 = (MissingMethodException_t3D861B41F6520C32A7994A884343802925703155*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingMethodException_t3D861B41F6520C32A7994A884343802925703155_il2cpp_TypeInfo_var)));
		MissingMethodException__ctor_mAA7B921D386638F5F7B7E427EC5881150258C838(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0027:
	{
		V_0 = (int32_t)1;
		NullCheck(G_B2_0);
		RuntimeObject* L_6;
		L_6 = RuntimeType_CreateInstanceDefaultCtor_m049DF408DA0C9B09F8964B90B62456E3A1F135C6(G_B2_0, (bool)1, (bool)1, (bool)1, (bool)1, (&V_0), NULL);
		return ((*(MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D*)UnBox(L_6, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00 Activator_CreateInstance_TisMapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00_m2ADA20C7F1012FE6063150326CFA10CAFEFECADC_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* G_B2_0 = NULL;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* G_B1_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* L_2 = ((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_1, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var));
		NullCheck((Type_t*)L_2);
		bool L_3;
		L_3 = Type_get_HasElementType_m44F9601E586D2EEA2EDB93FB81D1D80521C264EE((Type_t*)L_2, NULL);
		if (!L_3)
		{
			G_B2_0 = L_2;
			goto IL_0027;
		}
		G_B1_0 = L_2;
	}
	{
		String_t* L_4;
		L_4 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD06FDE4FC2CBD6E5FAFE1400B04AC8E4F3001D0C)), NULL);
		MissingMethodException_t3D861B41F6520C32A7994A884343802925703155* L_5 = (MissingMethodException_t3D861B41F6520C32A7994A884343802925703155*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingMethodException_t3D861B41F6520C32A7994A884343802925703155_il2cpp_TypeInfo_var)));
		MissingMethodException__ctor_mAA7B921D386638F5F7B7E427EC5881150258C838(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0027:
	{
		V_0 = (int32_t)1;
		NullCheck(G_B2_0);
		RuntimeObject* L_6;
		L_6 = RuntimeType_CreateInstanceDefaultCtor_m049DF408DA0C9B09F8964B90B62456E3A1F135C6(G_B2_0, (bool)1, (bool)1, (bool)1, (bool)1, (&V_0), NULL);
		return ((*(MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00*)UnBox(L_6, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23 Activator_CreateInstance_TisMapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23_m5BA87C6846B6B711C193D173BF005F47CBCBEACE_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* G_B2_0 = NULL;
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* G_B1_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* L_2 = ((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_1, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var));
		NullCheck((Type_t*)L_2);
		bool L_3;
		L_3 = Type_get_HasElementType_m44F9601E586D2EEA2EDB93FB81D1D80521C264EE((Type_t*)L_2, NULL);
		if (!L_3)
		{
			G_B2_0 = L_2;
			goto IL_0027;
		}
		G_B1_0 = L_2;
	}
	{
		String_t* L_4;
		L_4 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD06FDE4FC2CBD6E5FAFE1400B04AC8E4F3001D0C)), NULL);
		MissingMethodException_t3D861B41F6520C32A7994A884343802925703155* L_5 = (MissingMethodException_t3D861B41F6520C32A7994A884343802925703155*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingMethodException_t3D861B41F6520C32A7994A884343802925703155_il2cpp_TypeInfo_var)));
		MissingMethodException__ctor_mAA7B921D386638F5F7B7E427EC5881150258C838(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0027:
	{
		V_0 = (int32_t)1;
		NullCheck(G_B2_0);
		RuntimeObject* L_6;
		L_6 = RuntimeType_CreateInstanceDefaultCtor_m049DF408DA0C9B09F8964B90B62456E3A1F135C6(G_B2_0, (bool)1, (bool)1, (bool)1, (bool)1, (&V_0), NULL);
		return ((*(MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23*)UnBox(L_6, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActiveLifecycleScopesTracker_CreateScopeTransitionRequest_TisIl2CppSharedGenericObject_m781DD3D4A86DAE2D7A3F31DD07A1A4B6C4ACFFB7_gshared (ActiveLifecycleScopesTracker_t21B0C18F9AC8D5A5832FC8DAD92E8759C6E6A8E7* __this, LifecycleScopeWithContext_1_t35373E7691E4D4045644241660D92D3E94032599* ___0_lifecycleScope, int32_t ___1_scopeTransitionType, bool ___2_alsoExitNestedScopes, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebugLifecycle_tDEBE1FE9649A80BE545B4DD634205A3880487E11_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mEC947B45B7F992351EFE2AD95F9D29AB3165DA96_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mBDB81B637CD62D30A1C0B03D246CE38660A6FB1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07AFEE37B4EEA247E58EACE22E28DEF694A4927A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF3F5572DC5BB6A7D025C792614F24AE73C2D8FC);
		il2cpp_rgctx_method_init(method);
	}
	ScopeTransitionRequestWithContext_1_t7D86FB5BB8860C08CD532994E81CE06405D87992* V_0 = NULL;
	bool V_1 = false;
	ActiveLifecycleScopesTracker_t21B0C18F9AC8D5A5832FC8DAD92E8759C6E6A8E7* G_B7_0 = NULL;
	ActiveLifecycleScopesTracker_t21B0C18F9AC8D5A5832FC8DAD92E8759C6E6A8E7* G_B6_0 = NULL;
	int32_t G_B8_0 = 0;
	ActiveLifecycleScopesTracker_t21B0C18F9AC8D5A5832FC8DAD92E8759C6E6A8E7* G_B8_1 = NULL;
	{
		LifecycleScopeWithContext_1_t35373E7691E4D4045644241660D92D3E94032599* L_0 = ___0_lifecycleScope;
		int32_t L_1 = ___1_scopeTransitionType;
		bool L_2 = ___2_alsoExitNestedScopes;
		ScopeTransitionRequestWithContext_1_t7D86FB5BB8860C08CD532994E81CE06405D87992* L_3 = (ScopeTransitionRequestWithContext_1_t7D86FB5BB8860C08CD532994E81CE06405D87992*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		ScopeTransitionRequestWithContext_1__ctor_m7A1A1AC74D13C0C6C043707C1E237708A5B7B9B9(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_3;
		Queue_1_t0213AA1BB5D12D3BCD5727E71F92BE13870D391A* L_4 = __this->____transitionRequestQueue;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Queue_1_get_Count_mBDB81B637CD62D30A1C0B03D246CE38660A6FB1C_inline(L_4, Queue_1_get_Count_mBDB81B637CD62D30A1C0B03D246CE38660A6FB1C_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (L_6)
		{
			goto IL_004a;
		}
	}
	{
		LifecycleScopeWithContext_1_t35373E7691E4D4045644241660D92D3E94032599* L_7 = ___0_lifecycleScope;
		NullCheck((LifecycleScopeBase_t7CC30D9721A69BA0A9E955EAED505A32007C0755*)L_7);
		bool L_8;
		L_8 = LifecycleScopeBase_get_AllowNestedTransitions_mEF03BE23B67C81955948C2C709D01AB9B71F0345_inline((LifecycleScopeBase_t7CC30D9721A69BA0A9E955EAED505A32007C0755*)L_7, NULL);
		if (!L_8)
		{
			goto IL_004a;
		}
	}
	{
		ScopeTransitionRequestWithContext_1_t7D86FB5BB8860C08CD532994E81CE06405D87992* L_9 = V_0;
		NullCheck((ScopeTransitionRequestBase_t9E5F91D84A64F389496153A6DA14A6686E4E3C16*)L_9);
		LifecycleScopeBase_t7CC30D9721A69BA0A9E955EAED505A32007C0755* L_10;
		L_10 = ScopeTransitionRequestBase_get_Scope_mEB7F256D6FF4393EB627213D2E7343BD35BDCB50_inline((ScopeTransitionRequestBase_t9E5F91D84A64F389496153A6DA14A6686E4E3C16*)L_9, NULL);
		NullCheck(L_10);
		String_t* L_11;
		L_11 = LifecycleScopeBase_get_Name_m9A358255FEBBEA5F94FCB82DC2B1AF1F8AB288BB_inline(L_10, NULL);
		LifecycleScopeWithContext_1_t35373E7691E4D4045644241660D92D3E94032599* L_12 = ___0_lifecycleScope;
		NullCheck(L_12);
		Il2CppSharedGenericObject* L_13;
		L_13 = LifecycleScopeWithContext_1_get_Context_m71715E88B71B9A07D4F70E53A5142B8F5383AC27_inline(L_12, il2cpp_rgctx_method(method->rgctx_data, 3));
		String_t* L_14;
		L_14 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral07AFEE37B4EEA247E58EACE22E28DEF694A4927A, (RuntimeObject*)L_11, (RuntimeObject*)L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(DebugLifecycle_tDEBE1FE9649A80BE545B4DD634205A3880487E11_il2cpp_TypeInfo_var);
		DebugLifecycle_ReportError_mDAF7BB6F8AD0C44C843238B5340CBB0F0A76F1B3(L_14, (bool)1, NULL);
		return;
	}

IL_004a:
	{
		Queue_1_t0213AA1BB5D12D3BCD5727E71F92BE13870D391A* L_15 = __this->____transitionRequestQueue;
		ScopeTransitionRequestWithContext_1_t7D86FB5BB8860C08CD532994E81CE06405D87992* L_16 = V_0;
		NullCheck(L_15);
		Queue_1_Enqueue_mEC947B45B7F992351EFE2AD95F9D29AB3165DA96(L_15, (ScopeTransitionRequestBase_t9E5F91D84A64F389496153A6DA14A6686E4E3C16*)L_16, Queue_1_Enqueue_mEC947B45B7F992351EFE2AD95F9D29AB3165DA96_RuntimeMethod_var);
		bool L_17 = V_1;
		if (L_17)
		{
			goto IL_0079;
		}
	}
	{
		ScopeTransitionRequestWithContext_1_t7D86FB5BB8860C08CD532994E81CE06405D87992* L_18 = V_0;
		NullCheck((ScopeTransitionRequestBase_t9E5F91D84A64F389496153A6DA14A6686E4E3C16*)L_18);
		LifecycleScopeBase_t7CC30D9721A69BA0A9E955EAED505A32007C0755* L_19;
		L_19 = ScopeTransitionRequestBase_get_Scope_mEB7F256D6FF4393EB627213D2E7343BD35BDCB50_inline((ScopeTransitionRequestBase_t9E5F91D84A64F389496153A6DA14A6686E4E3C16*)L_18, NULL);
		NullCheck(L_19);
		String_t* L_20;
		L_20 = LifecycleScopeBase_get_Name_m9A358255FEBBEA5F94FCB82DC2B1AF1F8AB288BB_inline(L_19, NULL);
		String_t* L_21;
		L_21 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralFF3F5572DC5BB6A7D025C792614F24AE73C2D8FC, L_20, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D, NULL);
		il2cpp_codegen_runtime_class_init_inline(DebugLifecycle_tDEBE1FE9649A80BE545B4DD634205A3880487E11_il2cpp_TypeInfo_var);
		DebugLifecycle_Log_mF5AF374C4A49186C856B489B40F56163BE723BBB(L_21, NULL);
		return;
	}

IL_0079:
	{
		bool L_22 = V_1;
		if (!L_22)
		{
			G_B7_0 = __this;
			goto IL_0085;
		}
		G_B6_0 = __this;
	}
	{
		LifecycleScopeWithContext_1_t35373E7691E4D4045644241660D92D3E94032599* L_23 = ___0_lifecycleScope;
		NullCheck((LifecycleScopeBase_t7CC30D9721A69BA0A9E955EAED505A32007C0755*)L_23);
		bool L_24;
		L_24 = LifecycleScopeBase_get_AllowNestedTransitions_mEF03BE23B67C81955948C2C709D01AB9B71F0345_inline((LifecycleScopeBase_t7CC30D9721A69BA0A9E955EAED505A32007C0755*)L_23, NULL);
		G_B8_0 = ((int32_t)(L_24));
		G_B8_1 = G_B6_0;
		goto IL_0086;
	}

IL_0085:
	{
		G_B8_0 = 0;
		G_B8_1 = G_B7_0;
	}

IL_0086:
	{
		NullCheck(G_B8_1);
		ActiveLifecycleScopesTracker_ExecuteTransitions_m5EFD022DEA5213ACB1E9DF082B376BB6C43FE2D0(G_B8_1, (bool)G_B8_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ActiveLifecycleScopesTracker_IsInsideScope_TisIl2CppSharedGenericObject_m24EFB513F5A18B9400EB5F08E463BF44AF9EA8CE_gshared (ActiveLifecycleScopesTracker_t21B0C18F9AC8D5A5832FC8DAD92E8759C6E6A8E7* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m43D6ABEDBE5F0A936823EEB675589E5EAFD43281_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_m9CB10267CF4FC83CDDD3FDC4B898C73488C93FB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD343B871CBC9CC3590A9CB7326BB5E263AD03BE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mFEAE796204BD77488174AB22E0DE4C2721159335_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m21C7125C1D35261357C56A874C207249FC3E4F4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_GetEnumerator_mB40FC79A8A11DB8F002E9192693045C2F194E3E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LifecycleScope_tEA98D004E7CFF981DC51524B020E4CBD58D964CB_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	LifecycleScopeKey_t786C4635697BF09DC1C3BA0331E34017B8BA961D V_0;
	memset((&V_0), 0, sizeof(V_0));
	Enumerator_t1D172B50FF172AB824E07EA102C607D9282D3CAE V_1;
	memset((&V_1), 0, sizeof(V_1));
	LifecycleScopeKey_t786C4635697BF09DC1C3BA0331E34017B8BA961D V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (LifecycleScope_tEA98D004E7CFF981DC51524B020E4CBD58D964CB_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(21, L_1, L_3);
		if (!L_4)
		{
			goto IL_0039;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		LifecycleScopeKey__ctor_m7DCCBE2ED25A7746808F3555AB845EE71FEB6A71((&V_0), L_6, NULL);
		Dictionary_2_tD1D7C3C9439A06F868D4705EB293B45335991F83* L_7 = __this->____activeScopes;
		LifecycleScopeKey_t786C4635697BF09DC1C3BA0331E34017B8BA961D L_8 = V_0;
		NullCheck(L_7);
		bool L_9;
		L_9 = Dictionary_2_ContainsKey_m43D6ABEDBE5F0A936823EEB675589E5EAFD43281(L_7, L_8, Dictionary_2_ContainsKey_m43D6ABEDBE5F0A936823EEB675589E5EAFD43281_RuntimeMethod_var);
		return L_9;
	}

IL_0039:
	{
		Dictionary_2_tD1D7C3C9439A06F868D4705EB293B45335991F83* L_10 = __this->____activeScopes;
		NullCheck(L_10);
		KeyCollection_t59AB6D7A56AAB8B527E4EEBED39397629A9430E0* L_11;
		L_11 = Dictionary_2_get_Keys_m9CB10267CF4FC83CDDD3FDC4B898C73488C93FB8(L_10, Dictionary_2_get_Keys_m9CB10267CF4FC83CDDD3FDC4B898C73488C93FB8_RuntimeMethod_var);
		NullCheck(L_11);
		Enumerator_t1D172B50FF172AB824E07EA102C607D9282D3CAE L_12;
		L_12 = KeyCollection_GetEnumerator_mB40FC79A8A11DB8F002E9192693045C2F194E3E7(L_11, KeyCollection_GetEnumerator_mB40FC79A8A11DB8F002E9192693045C2F194E3E7_RuntimeMethod_var);
		V_1 = L_12;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007b:
			{
				Enumerator_Dispose_mD343B871CBC9CC3590A9CB7326BB5E263AD03BE1((&V_1), Enumerator_Dispose_mD343B871CBC9CC3590A9CB7326BB5E263AD03BE1_RuntimeMethod_var);
				return;
			}
		});
		try
		{
			{
				goto IL_0070_1;
			}

IL_004c_1:
			{
				LifecycleScopeKey_t786C4635697BF09DC1C3BA0331E34017B8BA961D L_13;
				L_13 = Enumerator_get_Current_m21C7125C1D35261357C56A874C207249FC3E4F4A_inline((&V_1), Enumerator_get_Current_m21C7125C1D35261357C56A874C207249FC3E4F4A_RuntimeMethod_var);
				V_2 = L_13;
				Type_t* L_14;
				L_14 = LifecycleScopeKey_get_Type_mEC585239B2BC794EDFDE68B89A6533971E12C752_inline((&V_2), NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_16;
				L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
				bool L_17;
				L_17 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_14, L_16, NULL);
				if (!L_17)
				{
					goto IL_0070_1;
				}
			}
			{
				V_3 = (bool)1;
				goto IL_008b;
			}

IL_0070_1:
			{
				bool L_18;
				L_18 = Enumerator_MoveNext_mFEAE796204BD77488174AB22E0DE4C2721159335((&V_1), Enumerator_MoveNext_mFEAE796204BD77488174AB22E0DE4C2721159335_RuntimeMethod_var);
				if (L_18)
				{
					goto IL_004c_1;
				}
			}
			{
				goto IL_0089;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0089:
	{
		return (bool)0;
	}

IL_008b:
	{
		bool L_19 = V_3;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ActiveLifecycleScopesTracker_IsInsideScopeWithActivationContext_TisIl2CppSharedGenericObject_m65AF7C880B3A8B7B6F7C6F59C699EA3FC8FC1BEE_gshared (ActiveLifecycleScopesTracker_t21B0C18F9AC8D5A5832FC8DAD92E8759C6E6A8E7* __this, LifecycleScopeWithContext_1_t35373E7691E4D4045644241660D92D3E94032599* ___0_scopeWithContext, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m43D6ABEDBE5F0A936823EEB675589E5EAFD43281_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	LifecycleScopeKey_t786C4635697BF09DC1C3BA0331E34017B8BA961D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		LifecycleScopeWithContext_1_t35373E7691E4D4045644241660D92D3E94032599* L_0 = ___0_scopeWithContext;
		NullCheck((RuntimeObject*)L_0);
		Type_t* L_1;
		L_1 = il2cpp_codegen_object_get_type((RuntimeObject*)L_0);
		LifecycleScopeWithContext_1_t35373E7691E4D4045644241660D92D3E94032599* L_2 = ___0_scopeWithContext;
		NullCheck(L_2);
		Il2CppSharedGenericObject* L_3;
		L_3 = LifecycleScopeWithContext_1_get_Context_m71715E88B71B9A07D4F70E53A5142B8F5383AC27_inline(L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		LifecycleScopeKey__ctor_m3BFDFB377FD3F489668C9B18AF174EF462838E6C((&V_0), L_1, (RuntimeObject*)L_3, NULL);
		Dictionary_2_tD1D7C3C9439A06F868D4705EB293B45335991F83* L_4 = __this->____activeScopes;
		LifecycleScopeKey_t786C4635697BF09DC1C3BA0331E34017B8BA961D L_5 = V_0;
		NullCheck(L_4);
		bool L_6;
		L_6 = Dictionary_2_ContainsKey_m43D6ABEDBE5F0A936823EEB675589E5EAFD43281(L_4, L_5, Dictionary_2_ContainsKey_m43D6ABEDBE5F0A936823EEB675589E5EAFD43281_RuntimeMethod_var);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ActiveLifecycleScopesTracker_IsInsideScopeWithActivationContext_TisIl2CppSharedGenericObject_TisIl2CppSharedGenericObject_m5267E4C686C348E337CB4A9ED51372D608957B0F_gshared (ActiveLifecycleScopesTracker_t21B0C18F9AC8D5A5832FC8DAD92E8759C6E6A8E7* __this, Il2CppSharedGenericObject* ___0_scopeContext, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m43D6ABEDBE5F0A936823EEB675589E5EAFD43281_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	LifecycleScopeKey_t786C4635697BF09DC1C3BA0331E34017B8BA961D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		Il2CppSharedGenericObject* L_2 = ___0_scopeContext;
		LifecycleScopeKey__ctor_m3BFDFB377FD3F489668C9B18AF174EF462838E6C((&V_0), L_1, (RuntimeObject*)L_2, NULL);
		Dictionary_2_tD1D7C3C9439A06F868D4705EB293B45335991F83* L_3 = __this->____activeScopes;
		LifecycleScopeKey_t786C4635697BF09DC1C3BA0331E34017B8BA961D L_4 = V_0;
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_ContainsKey_m43D6ABEDBE5F0A936823EEB675589E5EAFD43281(L_3, L_4, Dictionary_2_ContainsKey_m43D6ABEDBE5F0A936823EEB675589E5EAFD43281_RuntimeMethod_var);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ActiveLifecycleScopesTracker_IsOrWillBeInsideScopeWithActivationContext_TisIl2CppSharedGenericObject_TisIl2CppSharedGenericObject_m419B96676C8763DBFC6F67EFD3F1F972EBBC03B0_gshared (ActiveLifecycleScopesTracker_t21B0C18F9AC8D5A5832FC8DAD92E8759C6E6A8E7* __this, Il2CppSharedGenericObject* ___0_activationContext, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m5560B98567B989C4754E5C182136BE4AC88848CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m4CA597288EC15016493B62A210A4A63E27177117_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m132E4E286C55B63A011879B1F62299A7E6CF8DE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_GetEnumerator_m311A1E04C52E396219D02261B478965B9C97BD3D_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	Enumerator_t6E1C3DAF9D5E130F31F921E6BBBA1D4E27891201 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ScopeTransitionRequestBase_t9E5F91D84A64F389496153A6DA14A6686E4E3C16* V_2 = NULL;
	Il2CppSharedGenericObject* V_3 = NULL;
	bool V_4 = false;
	int32_t V_5 = 0;
	{
		Il2CppSharedGenericObject* L_0 = ___0_activationContext;
		bool L_1;
		L_1 = ActiveLifecycleScopesTracker_IsInsideScopeWithActivationContext_TisIl2CppSharedGenericObject_TisIl2CppSharedGenericObject_m5267E4C686C348E337CB4A9ED51372D608957B0F(__this, L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		Queue_1_t0213AA1BB5D12D3BCD5727E71F92BE13870D391A* L_2 = __this->____transitionRequestQueue;
		NullCheck(L_2);
		Enumerator_t6E1C3DAF9D5E130F31F921E6BBBA1D4E27891201 L_3;
		L_3 = Queue_1_GetEnumerator_m311A1E04C52E396219D02261B478965B9C97BD3D(L_2, Queue_1_GetEnumerator_m311A1E04C52E396219D02261B478965B9C97BD3D_RuntimeMethod_var);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007d:
			{
				Enumerator_Dispose_m5560B98567B989C4754E5C182136BE4AC88848CB((&V_1), Enumerator_Dispose_m5560B98567B989C4754E5C182136BE4AC88848CB_RuntimeMethod_var);
				return;
			}
		});
		try
		{
			{
				goto IL_0072_1;
			}

IL_0016_1:
			{
				ScopeTransitionRequestBase_t9E5F91D84A64F389496153A6DA14A6686E4E3C16* L_4;
				L_4 = Enumerator_get_Current_m132E4E286C55B63A011879B1F62299A7E6CF8DE2((&V_1), Enumerator_get_Current_m132E4E286C55B63A011879B1F62299A7E6CF8DE2_RuntimeMethod_var);
				V_2 = L_4;
				ScopeTransitionRequestBase_t9E5F91D84A64F389496153A6DA14A6686E4E3C16* L_5 = V_2;
				NullCheck(L_5);
				LifecycleScopeBase_t7CC30D9721A69BA0A9E955EAED505A32007C0755* L_6;
				L_6 = ScopeTransitionRequestBase_get_Scope_mEB7F256D6FF4393EB627213D2E7343BD35BDCB50_inline(L_5, NULL);
				V_3 = ((Il2CppSharedGenericObject*)IsInst((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2)));
				Il2CppSharedGenericObject* L_7 = V_3;
				if (!L_7)
				{
					goto IL_0072_1;
				}
			}
			{
				Il2CppSharedGenericObject* L_8 = V_3;
				NullCheck((LifecycleScopeWithContext_1_t35373E7691E4D4045644241660D92D3E94032599*)L_8);
				Il2CppSharedGenericObject* L_9;
				L_9 = LifecycleScopeWithContext_1_get_Context_m71715E88B71B9A07D4F70E53A5142B8F5383AC27_inline((LifecycleScopeWithContext_1_t35373E7691E4D4045644241660D92D3E94032599*)L_8, il2cpp_rgctx_method(method->rgctx_data, 4));
				Il2CppSharedGenericObject* L_10 = ___0_activationContext;
				if ((!(((RuntimeObject*)(Il2CppSharedGenericObject*)L_9) == ((RuntimeObject*)(Il2CppSharedGenericObject*)L_10))))
				{
					goto IL_0072_1;
				}
			}
			{
				ScopeTransitionRequestBase_t9E5F91D84A64F389496153A6DA14A6686E4E3C16* L_11 = V_2;
				NullCheck(L_11);
				int32_t L_12;
				L_12 = ScopeTransitionRequestBase_get_TransitionType_m64E9CBFD2036C2727F62B4276B07594B1AD0244B_inline(L_11, NULL);
				V_5 = L_12;
				int32_t L_13 = V_5;
				if (!L_13)
				{
					goto IL_0062_1;
				}
			}
			{
				int32_t L_14 = V_5;
				if ((((int32_t)L_14) == ((int32_t)1)))
				{
					goto IL_0067_1;
				}
			}
			{
				goto IL_006c_1;
			}

IL_0062_1:
			{
				V_4 = (bool)1;
				goto IL_006f_1;
			}

IL_0067_1:
			{
				V_4 = (bool)0;
				goto IL_006f_1;
			}

IL_006c_1:
			{
				bool L_15 = V_0;
				V_4 = L_15;
			}

IL_006f_1:
			{
				bool L_16 = V_4;
				V_0 = L_16;
			}

IL_0072_1:
			{
				bool L_17;
				L_17 = Enumerator_MoveNext_m4CA597288EC15016493B62A210A4A63E27177117((&V_1), Enumerator_MoveNext_m4CA597288EC15016493B62A210A4A63E27177117_RuntimeMethod_var);
				if (L_17)
				{
					goto IL_0016_1;
				}
			}
			{
				goto IL_008b;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008b:
	{
		bool L_18 = V_0;
		return L_18;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ActiveLifecycleScopesTracker_PrepareTryEnterScope_TisIl2CppSharedGenericObject_m1169BAF322245C6864C2461777208938DEC47599_gshared (ActiveLifecycleScopesTracker_t21B0C18F9AC8D5A5832FC8DAD92E8759C6E6A8E7* __this, Il2CppSharedGenericObject* ___0_lifecycleScope, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebugLifecycle_tDEBE1FE9649A80BE545B4DD634205A3880487E11_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13E8ABAF4FCA9340FD639F44DC79CC73FDE724C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84DED65F0B23E6F91065E5F2EFCC5631A498E3E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5C3A106612C3457D1A199E43E729AE62EDAD988);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC59788671EF0B981BF46F9F140D4B1454A1146D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0C0210C1550DE6C68F93F6E0EEC8AD3FE4F23F3);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	bool V_3 = false;
	{
		Il2CppSharedGenericObject* L_0 = ___0_lifecycleScope;
		NullCheck((LifecycleScopeBase_t7CC30D9721A69BA0A9E955EAED505A32007C0755*)L_0);
		RuntimeObject* L_1;
		L_1 = LifecycleScopeBase_get_RequiredOuterScopes_mE1B35D619BCE1A19CF63F53E917F8D86731225B7((LifecycleScopeBase_t7CC30D9721A69BA0A9E955EAED505A32007C0755*)L_0, NULL);
		V_0 = (bool)1;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44_il2cpp_TypeInfo_var, L_1);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0070:
			{
				{
					RuntimeObject* L_3 = V_1;
					if (!L_3)
					{
						goto IL_0079;
					}
				}
				{
					RuntimeObject* L_4 = V_1;
					NullCheck((RuntimeObject*)L_4);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_0079:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0066_1;
			}

IL_0015_1:
			{
				RuntimeObject* L_5 = V_1;
				NullCheck(L_5);
				String_t* L_6;
				L_6 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8_il2cpp_TypeInfo_var, L_5);
				V_2 = L_6;
				String_t* L_7 = V_2;
				bool L_8;
				L_8 = ActiveLifecycleScopesTracker_IsInsideScope_m326DF0210C805B6FEFF0848D0A1C1891D1AD8ABE(__this, L_7, NULL);
				if (L_8)
				{
					goto IL_0066_1;
				}
			}
			{
				V_0 = (bool)0;
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
				NullCheck(L_10);
				(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralF0C0210C1550DE6C68F93F6E0EEC8AD3FE4F23F3);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
				Il2CppSharedGenericObject* L_12 = ___0_lifecycleScope;
				NullCheck((LifecycleScopeBase_t7CC30D9721A69BA0A9E955EAED505A32007C0755*)L_12);
				String_t* L_13;
				L_13 = LifecycleScopeBase_get_Name_m9A358255FEBBEA5F94FCB82DC2B1AF1F8AB288BB_inline((LifecycleScopeBase_t7CC30D9721A69BA0A9E955EAED505A32007C0755*)L_12, NULL);
				NullCheck(L_11);
				(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_13);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_11;
				NullCheck(L_14);
				(L_14)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralC5C3A106612C3457D1A199E43E729AE62EDAD988);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14;
				String_t* L_16 = V_2;
				NullCheck(L_15);
				(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_16);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_15;
				NullCheck(L_17);
				(L_17)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral13E8ABAF4FCA9340FD639F44DC79CC73FDE724C1);
				String_t* L_18;
				L_18 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_17, NULL);
				il2cpp_codegen_runtime_class_init_inline(DebugLifecycle_tDEBE1FE9649A80BE545B4DD634205A3880487E11_il2cpp_TypeInfo_var);
				DebugLifecycle_ReportError_mDAF7BB6F8AD0C44C843238B5340CBB0F0A76F1B3(L_18, (bool)1, NULL);
				V_3 = (bool)0;
				goto IL_00d1;
			}

IL_0066_1:
			{
				RuntimeObject* L_19 = V_1;
				NullCheck((RuntimeObject*)L_19);
				bool L_20;
				L_20 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_19);
				if (L_20)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_007a;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007a:
	{
		bool L_21 = V_0;
		if (L_21)
		{
			goto IL_009f;
		}
	}
	{
		Il2CppSharedGenericObject* L_22 = ___0_lifecycleScope;
		NullCheck((LifecycleScopeBase_t7CC30D9721A69BA0A9E955EAED505A32007C0755*)L_22);
		String_t* L_23;
		L_23 = LifecycleScopeBase_get_Name_m9A358255FEBBEA5F94FCB82DC2B1AF1F8AB288BB_inline((LifecycleScopeBase_t7CC30D9721A69BA0A9E955EAED505A32007C0755*)L_22, NULL);
		String_t* L_24;
		L_24 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralF0C0210C1550DE6C68F93F6E0EEC8AD3FE4F23F3, L_23, _stringLiteral84DED65F0B23E6F91065E5F2EFCC5631A498E3E4, NULL);
		il2cpp_codegen_runtime_class_init_inline(DebugLifecycle_tDEBE1FE9649A80BE545B4DD634205A3880487E11_il2cpp_TypeInfo_var);
		DebugLifecycle_ReportError_mDAF7BB6F8AD0C44C843238B5340CBB0F0A76F1B3(L_24, (bool)1, NULL);
		return (bool)0;
	}

IL_009f:
	{
		Il2CppSharedGenericObject* L_25 = ___0_lifecycleScope;
		bool L_26;
		L_26 = ActiveLifecycleScopesTracker_IsInsideScope_m6A9229A85BC7290BB7CABC0F5726CF29CE197886(__this, (LifecycleScope_tEA98D004E7CFF981DC51524B020E4CBD58D964CB*)L_25, NULL);
		if (!L_26)
		{
			goto IL_00cf;
		}
	}
	{
		Il2CppSharedGenericObject* L_27 = ___0_lifecycleScope;
		NullCheck((LifecycleScopeBase_t7CC30D9721A69BA0A9E955EAED505A32007C0755*)L_27);
		String_t* L_28;
		L_28 = LifecycleScopeBase_get_Name_m9A358255FEBBEA5F94FCB82DC2B1AF1F8AB288BB_inline((LifecycleScopeBase_t7CC30D9721A69BA0A9E955EAED505A32007C0755*)L_27, NULL);
		String_t* L_29;
		L_29 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralF0C0210C1550DE6C68F93F6E0EEC8AD3FE4F23F3, L_28, _stringLiteralCC59788671EF0B981BF46F9F140D4B1454A1146D, NULL);
		il2cpp_codegen_runtime_class_init_inline(DebugLifecycle_tDEBE1FE9649A80BE545B4DD634205A3880487E11_il2cpp_TypeInfo_var);
		DebugLifecycle_ReportError_mDAF7BB6F8AD0C44C843238B5340CBB0F0A76F1B3(L_29, (bool)1, NULL);
		return (bool)0;
	}

IL_00cf:
	{
		return (bool)1;
	}

IL_00d1:
	{
		bool L_30 = V_3;
		return L_30;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ActiveLifecycleScopesTracker_PrepareTryEnterScopeWithContext_TisIl2CppSharedGenericObject_m3D8B69D9E50547113449972B07933BE902744D59_gshared (ActiveLifecycleScopesTracker_t21B0C18F9AC8D5A5832FC8DAD92E8759C6E6A8E7* __this, LifecycleScopeWithContext_1_t35373E7691E4D4045644241660D92D3E94032599* ___0_lifecycleScope, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebugLifecycle_tDEBE1FE9649A80BE545B4DD634205A3880487E11_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13E8ABAF4FCA9340FD639F44DC79CC73FDE724C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84DED65F0B23E6F91065E5F2EFCC5631A498E3E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5C3A106612C3457D1A199E43E729AE62EDAD988);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0C0210C1550DE6C68F93F6E0EEC8AD3FE4F23F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3DA7FC2B4DFDE9895E6947FA318629E591432E0);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	bool V_3 = false;
	{
		LifecycleScopeWithContext_1_t35373E7691E4D4045644241660D92D3E94032599* L_0 = ___0_lifecycleScope;
		NullCheck((LifecycleScopeBase_t7CC30D9721A69BA0A9E955EAED505A32007C0755*)L_0);
		RuntimeObject* L_1;
		L_1 = LifecycleScopeBase_get_RequiredOuterScopes_mE1B35D619BCE1A19CF63F53E917F8D86731225B7((LifecycleScopeBase_t7CC30D9721A69BA0A9E955EAED505A32007C0755*)L_0, NULL);
		V_0 = (bool)1;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44_il2cpp_TypeInfo_var, L_1);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0066:
			{
				{
					RuntimeObject* L_3 = V_1;
					if (!L_3)
					{
						goto IL_006f;
					}
				}
				{
					RuntimeObject* L_4 = V_1;
					NullCheck((RuntimeObject*)L_4);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_006f:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_005c_1;
			}

IL_0010_1:
			{
				RuntimeObject* L_5 = V_1;
				NullCheck(L_5);
				String_t* L_6;
				L_6 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8_il2cpp_TypeInfo_var, L_5);
				V_2 = L_6;
				String_t* L_7 = V_2;
				bool L_8;
				L_8 = ActiveLifecycleScopesTracker_IsInsideScope_m326DF0210C805B6FEFF0848D0A1C1891D1AD8ABE(__this, L_7, NULL);
				if (L_8)
				{
					goto IL_005c_1;
				}
			}
			{
				V_0 = (bool)0;
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
				NullCheck(L_10);
				(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralF0C0210C1550DE6C68F93F6E0EEC8AD3FE4F23F3);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
				LifecycleScopeWithContext_1_t35373E7691E4D4045644241660D92D3E94032599* L_12 = ___0_lifecycleScope;
				NullCheck((LifecycleScopeBase_t7CC30D9721A69BA0A9E955EAED505A32007C0755*)L_12);
				String_t* L_13;
				L_13 = LifecycleScopeBase_get_Name_m9A358255FEBBEA5F94FCB82DC2B1AF1F8AB288BB_inline((LifecycleScopeBase_t7CC30D9721A69BA0A9E955EAED505A32007C0755*)L_12, NULL);
				NullCheck(L_11);
				(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_13);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_11;
				NullCheck(L_14);
				(L_14)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralC5C3A106612C3457D1A199E43E729AE62EDAD988);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14;
				String_t* L_16 = V_2;
				NullCheck(L_15);
				(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_16);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_15;
				NullCheck(L_17);
				(L_17)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral13E8ABAF4FCA9340FD639F44DC79CC73FDE724C1);
				String_t* L_18;
				L_18 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_17, NULL);
				il2cpp_codegen_runtime_class_init_inline(DebugLifecycle_tDEBE1FE9649A80BE545B4DD634205A3880487E11_il2cpp_TypeInfo_var);
				DebugLifecycle_ReportError_mDAF7BB6F8AD0C44C843238B5340CBB0F0A76F1B3(L_18, (bool)1, NULL);
				V_3 = (bool)0;
				goto IL_00b8;
			}

IL_005c_1:
			{
				RuntimeObject* L_19 = V_1;
				NullCheck((RuntimeObject*)L_19);
				bool L_20;
				L_20 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_19);
				if (L_20)
				{
					goto IL_0010_1;
				}
			}
			{
				goto IL_0070;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0070:
	{
		bool L_21 = V_0;
		if (L_21)
		{
			goto IL_0090;
		}
	}
	{
		LifecycleScopeWithContext_1_t35373E7691E4D4045644241660D92D3E94032599* L_22 = ___0_lifecycleScope;
		NullCheck((LifecycleScopeBase_t7CC30D9721A69BA0A9E955EAED505A32007C0755*)L_22);
		String_t* L_23;
		L_23 = LifecycleScopeBase_get_Name_m9A358255FEBBEA5F94FCB82DC2B1AF1F8AB288BB_inline((LifecycleScopeBase_t7CC30D9721A69BA0A9E955EAED505A32007C0755*)L_22, NULL);
		String_t* L_24;
		L_24 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralF0C0210C1550DE6C68F93F6E0EEC8AD3FE4F23F3, L_23, _stringLiteral84DED65F0B23E6F91065E5F2EFCC5631A498E3E4, NULL);
		il2cpp_codegen_runtime_class_init_inline(DebugLifecycle_tDEBE1FE9649A80BE545B4DD634205A3880487E11_il2cpp_TypeInfo_var);
		DebugLifecycle_ReportError_mDAF7BB6F8AD0C44C843238B5340CBB0F0A76F1B3(L_24, (bool)1, NULL);
		return (bool)0;
	}

IL_0090:
	{
		LifecycleScopeWithContext_1_t35373E7691E4D4045644241660D92D3E94032599* L_25 = ___0_lifecycleScope;
		bool L_26;
		L_26 = ActiveLifecycleScopesTracker_IsInsideScopeWithActivationContext_TisIl2CppSharedGenericObject_m65AF7C880B3A8B7B6F7C6F59C699EA3FC8FC1BEE(__this, L_25, il2cpp_rgctx_method(method->rgctx_data, 1));
		if (!L_26)
		{
			goto IL_00b6;
		}
	}
	{
		LifecycleScopeWithContext_1_t35373E7691E4D4045644241660D92D3E94032599* L_27 = ___0_lifecycleScope;
		NullCheck((LifecycleScopeBase_t7CC30D9721A69BA0A9E955EAED505A32007C0755*)L_27);
		String_t* L_28;
		L_28 = LifecycleScopeBase_get_Name_m9A358255FEBBEA5F94FCB82DC2B1AF1F8AB288BB_inline((LifecycleScopeBase_t7CC30D9721A69BA0A9E955EAED505A32007C0755*)L_27, NULL);
		String_t* L_29;
		L_29 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralF0C0210C1550DE6C68F93F6E0EEC8AD3FE4F23F3, L_28, _stringLiteralF3DA7FC2B4DFDE9895E6947FA318629E591432E0, NULL);
		il2cpp_codegen_runtime_class_init_inline(DebugLifecycle_tDEBE1FE9649A80BE545B4DD634205A3880487E11_il2cpp_TypeInfo_var);
		DebugLifecycle_ReportError_mDAF7BB6F8AD0C44C843238B5340CBB0F0A76F1B3(L_29, (bool)1, NULL);
		return (bool)0;
	}

IL_00b6:
	{
		return (bool)1;
	}

IL_00b8:
	{
		bool L_30 = V_3;
		return L_30;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ActiveLifecycleScopesTracker_PrepareTryExitScope_TisIl2CppSharedGenericObject_mB20E9E3D9D7A9E4B5F58A5783EB2EBB2733EF4E7_gshared (ActiveLifecycleScopesTracker_t21B0C18F9AC8D5A5832FC8DAD92E8759C6E6A8E7* __this, LifecycleScopeWithContext_1_t35373E7691E4D4045644241660D92D3E94032599* ___0_lifecycleScope, Il2CppSharedGenericObject* ___1_activationContext, bool ___2_alsoExitNestedScopes, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebugLifecycle_tDEBE1FE9649A80BE545B4DD634205A3880487E11_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mAE2ECC0F5BDAA58524500656449EA1A387079726_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m79563C16853F891CCBBC22B07DC63DA063874A49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m6E582A0ECA46CE69AFD14D67DE233D2B4E1069BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m80B75619D3D43280CFC1D0556BBFE923F8643835_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mC8DD05ED5A94E9D71568B93F1FBC1A03B3A4E385_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mD85ED63385062F8013FBC6C57320F2B23C975EFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m2E4C1612FFBB402B6CF496C40499B9B84734E878_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m422894DCBE54CC53F8C3729BEE72B601B02C8686_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m3A7E9AECB2ED791F09FADAD0BC7B826FB62A85A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mAC5B95A51ACDF83BD8AF7C84815956F1571EBDA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m8EC63B0A917684D71B0938CD239EF153D6D5AC92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t9CDC351A1FD4D84CA6FE8FF3EAD218C909593E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_m1B01F115659146468CB5EE9025E45905AB1279DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B9D6CD2F31410E688E8B500A17CB53A5159DC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral085E2DF95CBA541D8E08411BA60759DB8E782A9E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral190A3A7EF1BCDD282CB0B05FB99BEDDD2405B809);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24A0D1C954F6F30A64E2AB214561ABB5C363D424);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral498035C56F75E7FF9C33113E1B85A874BEC20548);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C503A4CDCF098739894D1E4B88AEFF08E94B305);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA4EC0E533020275EA02CC859DA22C7578B5C0119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD366696EA5EEAAB15A9EA73824AEE06907DE5A63);
		il2cpp_rgctx_method_init(method);
	}
	List_1_t9CDC351A1FD4D84CA6FE8FF3EAD218C909593E14* V_0 = NULL;
	int32_t V_1 = 0;
	Enumerator_t624742B8D885649511A5739F11184E2221942252 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Enumerator_t01FAC2D987248212FF45463152AFF3B57F39A352 V_3;
	memset((&V_3), 0, sizeof(V_3));
	ActiveLifecycleScopeBase_t0F0C7F8D06A577773F8D661F8CCE4F9FA9999A8C* V_4 = NULL;
	ActiveLifecycleScopeBase_t0F0C7F8D06A577773F8D661F8CCE4F9FA9999A8C* V_5 = NULL;
	{
		LifecycleScopeWithContext_1_t35373E7691E4D4045644241660D92D3E94032599* L_0 = ___0_lifecycleScope;
		bool L_1;
		L_1 = ActiveLifecycleScopesTracker_IsInsideScopeWithActivationContext_TisIl2CppSharedGenericObject_m65AF7C880B3A8B7B6F7C6F59C699EA3FC8FC1BEE(__this, L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		if (L_1)
		{
			goto IL_0026;
		}
	}
	{
		LifecycleScopeWithContext_1_t35373E7691E4D4045644241660D92D3E94032599* L_2 = ___0_lifecycleScope;
		NullCheck((LifecycleScopeBase_t7CC30D9721A69BA0A9E955EAED505A32007C0755*)L_2);
		String_t* L_3;
		L_3 = LifecycleScopeBase_get_Name_m9A358255FEBBEA5F94FCB82DC2B1AF1F8AB288BB_inline((LifecycleScopeBase_t7CC30D9721A69BA0A9E955EAED505A32007C0755*)L_2, NULL);
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralD366696EA5EEAAB15A9EA73824AEE06907DE5A63, L_3, _stringLiteral498035C56F75E7FF9C33113E1B85A874BEC20548, NULL);
		il2cpp_codegen_runtime_class_init_inline(DebugLifecycle_tDEBE1FE9649A80BE545B4DD634205A3880487E11_il2cpp_TypeInfo_var);
		DebugLifecycle_ReportError_mDAF7BB6F8AD0C44C843238B5340CBB0F0A76F1B3(L_4, (bool)1, NULL);
		return (bool)0;
	}

IL_0026:
	{
		List_1_t9CDC351A1FD4D84CA6FE8FF3EAD218C909593E14* L_5 = (List_1_t9CDC351A1FD4D84CA6FE8FF3EAD218C909593E14*)il2cpp_codegen_object_new(List_1_t9CDC351A1FD4D84CA6FE8FF3EAD218C909593E14_il2cpp_TypeInfo_var);
		List_1__ctor_mAC5B95A51ACDF83BD8AF7C84815956F1571EBDA1(L_5, List_1__ctor_mAC5B95A51ACDF83BD8AF7C84815956F1571EBDA1_RuntimeMethod_var);
		V_0 = L_5;
		V_1 = 0;
		Dictionary_2_tD1D7C3C9439A06F868D4705EB293B45335991F83* L_6 = __this->____activeScopes;
		NullCheck(L_6);
		ValueCollection_tB7C740A97431C55C62CC43DA7712B5896DBED97F* L_7;
		L_7 = Dictionary_2_get_Values_m79563C16853F891CCBBC22B07DC63DA063874A49(L_6, Dictionary_2_get_Values_m79563C16853F891CCBBC22B07DC63DA063874A49_RuntimeMethod_var);
		NullCheck(L_7);
		Enumerator_t624742B8D885649511A5739F11184E2221942252 L_8;
		L_8 = ValueCollection_GetEnumerator_m1B01F115659146468CB5EE9025E45905AB1279DE(L_7, ValueCollection_GetEnumerator_m1B01F115659146468CB5EE9025E45905AB1279DE_RuntimeMethod_var);
		V_2 = L_8;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006e:
			{
				Enumerator_Dispose_m6E582A0ECA46CE69AFD14D67DE233D2B4E1069BE((&V_2), Enumerator_Dispose_m6E582A0ECA46CE69AFD14D67DE233D2B4E1069BE_RuntimeMethod_var);
				return;
			}
		});
		try
		{
			{
				goto IL_0063_1;
			}

IL_0041_1:
			{
				ActiveLifecycleScopeBase_t0F0C7F8D06A577773F8D661F8CCE4F9FA9999A8C* L_9;
				L_9 = Enumerator_get_Current_m2E4C1612FFBB402B6CF496C40499B9B84734E878_inline((&V_2), Enumerator_get_Current_m2E4C1612FFBB402B6CF496C40499B9B84734E878_RuntimeMethod_var);
				NullCheck(L_9);
				LifecycleScopeBase_t7CC30D9721A69BA0A9E955EAED505A32007C0755* L_10;
				L_10 = ActiveLifecycleScopeBase_get_Scope_m711F6C219BF9AED00688EB5C251A74C6780E0780_inline(L_9, NULL);
				NullCheck(L_10);
				String_t* L_11;
				L_11 = LifecycleScopeBase_get_Name_m9A358255FEBBEA5F94FCB82DC2B1AF1F8AB288BB_inline(L_10, NULL);
				LifecycleScopeWithContext_1_t35373E7691E4D4045644241660D92D3E94032599* L_12 = ___0_lifecycleScope;
				NullCheck((LifecycleScopeBase_t7CC30D9721A69BA0A9E955EAED505A32007C0755*)L_12);
				String_t* L_13;
				L_13 = LifecycleScopeBase_get_Name_m9A358255FEBBEA5F94FCB82DC2B1AF1F8AB288BB_inline((LifecycleScopeBase_t7CC30D9721A69BA0A9E955EAED505A32007C0755*)L_12, NULL);
				bool L_14;
				L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, L_13, NULL);
				if (!L_14)
				{
					goto IL_0063_1;
				}
			}
			{
				int32_t L_15 = V_1;
				V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
			}

IL_0063_1:
			{
				bool L_16;
				L_16 = Enumerator_MoveNext_mC8DD05ED5A94E9D71568B93F1FBC1A03B3A4E385((&V_2), Enumerator_MoveNext_mC8DD05ED5A94E9D71568B93F1FBC1A03B3A4E385_RuntimeMethod_var);
				if (L_16)
				{
					goto IL_0041_1;
				}
			}
			{
				goto IL_007c;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007c:
	{
		int32_t L_17 = V_1;
		if ((!(((uint32_t)L_17) == ((uint32_t)1))))
		{
			goto IL_008d;
		}
	}
	{
		LifecycleScopeWithContext_1_t35373E7691E4D4045644241660D92D3E94032599* L_18 = ___0_lifecycleScope;
		NullCheck((LifecycleScopeBase_t7CC30D9721A69BA0A9E955EAED505A32007C0755*)L_18);
		String_t* L_19;
		L_19 = LifecycleScopeBase_get_Name_m9A358255FEBBEA5F94FCB82DC2B1AF1F8AB288BB_inline((LifecycleScopeBase_t7CC30D9721A69BA0A9E955EAED505A32007C0755*)L_18, NULL);
		List_1_t9CDC351A1FD4D84CA6FE8FF3EAD218C909593E14* L_20 = V_0;
		ActiveLifecycleScopesTracker_CollectNestedScopesToExit_m42316DA19AAD010107302A5CE7B1758B5D3E629A(__this, L_19, L_20, NULL);
	}

IL_008d:
	{
		List_1_t9CDC351A1FD4D84CA6FE8FF3EAD218C909593E14* L_21 = V_0;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = List_1_get_Count_m8EC63B0A917684D71B0938CD239EF153D6D5AC92_inline(L_21, List_1_get_Count_m8EC63B0A917684D71B0938CD239EF153D6D5AC92_RuntimeMethod_var);
		if ((((int32_t)L_22) <= ((int32_t)0)))
		{
			goto IL_01c9;
		}
	}
	{
		bool L_23 = ___2_alsoExitNestedScopes;
		if (L_23)
		{
			goto IL_0128;
		}
	}
	{
		List_1_t9CDC351A1FD4D84CA6FE8FF3EAD218C909593E14* L_24 = V_0;
		NullCheck(L_24);
		Enumerator_t01FAC2D987248212FF45463152AFF3B57F39A352 L_25;
		L_25 = List_1_GetEnumerator_m3A7E9AECB2ED791F09FADAD0BC7B826FB62A85A4(L_24, List_1_GetEnumerator_m3A7E9AECB2ED791F09FADAD0BC7B826FB62A85A4_RuntimeMethod_var);
		V_3 = L_25;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00fd:
			{
				Enumerator_Dispose_m80B75619D3D43280CFC1D0556BBFE923F8643835((&V_3), Enumerator_Dispose_m80B75619D3D43280CFC1D0556BBFE923F8643835_RuntimeMethod_var);
				return;
			}
		});
		try
		{
			{
				goto IL_00f2_1;
			}

IL_00a8_1:
			{
				ActiveLifecycleScopeBase_t0F0C7F8D06A577773F8D661F8CCE4F9FA9999A8C* L_26;
				L_26 = Enumerator_get_Current_m422894DCBE54CC53F8C3729BEE72B601B02C8686_inline((&V_3), Enumerator_get_Current_m422894DCBE54CC53F8C3729BEE72B601B02C8686_RuntimeMethod_var);
				V_4 = L_26;
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = L_27;
				NullCheck(L_28);
				(L_28)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral24A0D1C954F6F30A64E2AB214561ABB5C363D424);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29 = L_28;
				LifecycleScopeWithContext_1_t35373E7691E4D4045644241660D92D3E94032599* L_30 = ___0_lifecycleScope;
				NullCheck((LifecycleScopeBase_t7CC30D9721A69BA0A9E955EAED505A32007C0755*)L_30);
				String_t* L_31;
				L_31 = LifecycleScopeBase_get_Name_m9A358255FEBBEA5F94FCB82DC2B1AF1F8AB288BB_inline((LifecycleScopeBase_t7CC30D9721A69BA0A9E955EAED505A32007C0755*)L_30, NULL);
				NullCheck(L_29);
				(L_29)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_31);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_32 = L_29;
				NullCheck(L_32);
				(L_32)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral085E2DF95CBA541D8E08411BA60759DB8E782A9E);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = L_32;
				ActiveLifecycleScopeBase_t0F0C7F8D06A577773F8D661F8CCE4F9FA9999A8C* L_34 = V_4;
				NullCheck(L_34);
				LifecycleScopeBase_t7CC30D9721A69BA0A9E955EAED505A32007C0755* L_35;
				L_35 = ActiveLifecycleScopeBase_get_Scope_m711F6C219BF9AED00688EB5C251A74C6780E0780_inline(L_34, NULL);
				NullCheck(L_35);
				String_t* L_36;
				L_36 = LifecycleScopeBase_get_Name_m9A358255FEBBEA5F94FCB82DC2B1AF1F8AB288BB_inline(L_35, NULL);
				NullCheck(L_33);
				(L_33)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_36);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = L_33;
				NullCheck(L_37);
				(L_37)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
				String_t* L_38;
				L_38 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_37, NULL);
				il2cpp_codegen_runtime_class_init_inline(DebugLifecycle_tDEBE1FE9649A80BE545B4DD634205A3880487E11_il2cpp_TypeInfo_var);
				DebugLifecycle_ReportError_mDAF7BB6F8AD0C44C843238B5340CBB0F0A76F1B3(L_38, (bool)0, NULL);
			}

IL_00f2_1:
			{
				bool L_39;
				L_39 = Enumerator_MoveNext_mD85ED63385062F8013FBC6C57320F2B23C975EFE((&V_3), Enumerator_MoveNext_mD85ED63385062F8013FBC6C57320F2B23C975EFE_RuntimeMethod_var);
				if (L_39)
				{
					goto IL_00a8_1;
				}
			}
			{
				goto IL_010b;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_010b:
	{
		LifecycleScopeWithContext_1_t35373E7691E4D4045644241660D92D3E94032599* L_40 = ___0_lifecycleScope;
		NullCheck((LifecycleScopeBase_t7CC30D9721A69BA0A9E955EAED505A32007C0755*)L_40);
		String_t* L_41;
		L_41 = LifecycleScopeBase_get_Name_m9A358255FEBBEA5F94FCB82DC2B1AF1F8AB288BB_inline((LifecycleScopeBase_t7CC30D9721A69BA0A9E955EAED505A32007C0755*)L_40, NULL);
		String_t* L_42;
		L_42 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral00B9D6CD2F31410E688E8B500A17CB53A5159DC7, L_41, _stringLiteral9C503A4CDCF098739894D1E4B88AEFF08E94B305, NULL);
		il2cpp_codegen_runtime_class_init_inline(DebugLifecycle_tDEBE1FE9649A80BE545B4DD634205A3880487E11_il2cpp_TypeInfo_var);
		DebugLifecycle_ReportError_mDAF7BB6F8AD0C44C843238B5340CBB0F0A76F1B3(L_42, (bool)1, NULL);
		return (bool)0;
	}

IL_0128:
	{
		List_1_t9CDC351A1FD4D84CA6FE8FF3EAD218C909593E14* L_43 = V_0;
		NullCheck(L_43);
		Enumerator_t01FAC2D987248212FF45463152AFF3B57F39A352 L_44;
		L_44 = List_1_GetEnumerator_m3A7E9AECB2ED791F09FADAD0BC7B826FB62A85A4(L_43, List_1_GetEnumerator_m3A7E9AECB2ED791F09FADAD0BC7B826FB62A85A4_RuntimeMethod_var);
		V_3 = L_44;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01bb:
			{
				Enumerator_Dispose_m80B75619D3D43280CFC1D0556BBFE923F8643835((&V_3), Enumerator_Dispose_m80B75619D3D43280CFC1D0556BBFE923F8643835_RuntimeMethod_var);
				return;
			}
		});
		try
		{
			{
				goto IL_01ad_1;
			}

IL_0131_1:
			{
				ActiveLifecycleScopeBase_t0F0C7F8D06A577773F8D661F8CCE4F9FA9999A8C* L_45;
				L_45 = Enumerator_get_Current_m422894DCBE54CC53F8C3729BEE72B601B02C8686_inline((&V_3), Enumerator_get_Current_m422894DCBE54CC53F8C3729BEE72B601B02C8686_RuntimeMethod_var);
				V_5 = L_45;
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_47 = L_46;
				NullCheck(L_47);
				(L_47)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA4EC0E533020275EA02CC859DA22C7578B5C0119);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_48 = L_47;
				ActiveLifecycleScopeBase_t0F0C7F8D06A577773F8D661F8CCE4F9FA9999A8C* L_49 = V_5;
				NullCheck(L_49);
				LifecycleScopeBase_t7CC30D9721A69BA0A9E955EAED505A32007C0755* L_50;
				L_50 = ActiveLifecycleScopeBase_get_Scope_m711F6C219BF9AED00688EB5C251A74C6780E0780_inline(L_49, NULL);
				NullCheck(L_50);
				String_t* L_51;
				L_51 = LifecycleScopeBase_get_Name_m9A358255FEBBEA5F94FCB82DC2B1AF1F8AB288BB_inline(L_50, NULL);
				NullCheck(L_48);
				(L_48)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_51);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_52 = L_48;
				NullCheck(L_52);
				(L_52)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral190A3A7EF1BCDD282CB0B05FB99BEDDD2405B809);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_53 = L_52;
				LifecycleScopeWithContext_1_t35373E7691E4D4045644241660D92D3E94032599* L_54 = ___0_lifecycleScope;
				NullCheck((LifecycleScopeBase_t7CC30D9721A69BA0A9E955EAED505A32007C0755*)L_54);
				String_t* L_55;
				L_55 = LifecycleScopeBase_get_Name_m9A358255FEBBEA5F94FCB82DC2B1AF1F8AB288BB_inline((LifecycleScopeBase_t7CC30D9721A69BA0A9E955EAED505A32007C0755*)L_54, NULL);
				NullCheck(L_53);
				(L_53)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_55);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_56 = L_53;
				NullCheck(L_56);
				(L_56)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
				String_t* L_57;
				L_57 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_56, NULL);
				il2cpp_codegen_runtime_class_init_inline(DebugLifecycle_tDEBE1FE9649A80BE545B4DD634205A3880487E11_il2cpp_TypeInfo_var);
				DebugLifecycle_Log_mF5AF374C4A49186C856B489B40F56163BE723BBB(L_57, NULL);
				ActiveLifecycleScopeBase_t0F0C7F8D06A577773F8D661F8CCE4F9FA9999A8C* L_58 = V_5;
				ScopeTransitionHelper_t069C5DE337C0C8F615857F4D731C5CBE3B0F4347* L_59 = __this->____scopeTransitionHelper;
				NullCheck(L_58);
				VirtualActionInvoker1< ScopeTransitionHelper_t069C5DE337C0C8F615857F4D731C5CBE3B0F4347* >::Invoke(6, L_58, L_59);
				ActiveLifecycleScopeBase_t0F0C7F8D06A577773F8D661F8CCE4F9FA9999A8C* L_60 = V_5;
				NullCheck(L_60);
				LifecycleScopeBase_t7CC30D9721A69BA0A9E955EAED505A32007C0755* L_61;
				L_61 = ActiveLifecycleScopeBase_get_Scope_m711F6C219BF9AED00688EB5C251A74C6780E0780_inline(L_60, NULL);
				NullCheck((RuntimeObject*)L_61);
				Type_t* L_62;
				L_62 = il2cpp_codegen_object_get_type((RuntimeObject*)L_61);
				ActiveLifecycleScopesTracker_RaiseAutoCleanups_m5620B257E893397698E4CA9CBD38E695BADBA8ED(__this, L_62, (int32_t)1, NULL);
				Dictionary_2_tD1D7C3C9439A06F868D4705EB293B45335991F83* L_63 = __this->____activeScopes;
				ActiveLifecycleScopeBase_t0F0C7F8D06A577773F8D661F8CCE4F9FA9999A8C* L_64 = V_5;
				NullCheck(L_64);
				LifecycleScopeKey_t786C4635697BF09DC1C3BA0331E34017B8BA961D L_65;
				L_65 = VirtualFuncInvoker0< LifecycleScopeKey_t786C4635697BF09DC1C3BA0331E34017B8BA961D >::Invoke(4, L_64);
				NullCheck(L_63);
				bool L_66;
				L_66 = Dictionary_2_Remove_mAE2ECC0F5BDAA58524500656449EA1A387079726(L_63, L_65, Dictionary_2_Remove_mAE2ECC0F5BDAA58524500656449EA1A387079726_RuntimeMethod_var);
			}

IL_01ad_1:
			{
				bool L_67;
				L_67 = Enumerator_MoveNext_mD85ED63385062F8013FBC6C57320F2B23C975EFE((&V_3), Enumerator_MoveNext_mD85ED63385062F8013FBC6C57320F2B23C975EFE_RuntimeMethod_var);
				if (L_67)
				{
					goto IL_0131_1;
				}
			}
			{
				goto IL_01c9;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01c9:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActiveLifecycleScopesTracker_RequestEnterScope_TisIl2CppSharedGenericObject_mED5FE3A313CDEC3F9FB3AAEDC4E753519B30D42E_gshared (ActiveLifecycleScopesTracker_t21B0C18F9AC8D5A5832FC8DAD92E8759C6E6A8E7* __this, LifecycleScopeWithContext_1_t35373E7691E4D4045644241660D92D3E94032599* ___0_lifecycleScope, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ImplicitLifecycleScopeU5BU5D_t1C10C825AEAC8ACF7250C9F8748855C85884D38D* V_0 = NULL;
	int32_t V_1 = 0;
	ImplicitLifecycleScope_tB1D07078E6300A31DA61E2FFAB8D8A56AD296E38* V_2 = NULL;
	{
		LifecycleScopeWithContext_1_t35373E7691E4D4045644241660D92D3E94032599* L_0 = ___0_lifecycleScope;
		NullCheck((LifecycleScopeBase_t7CC30D9721A69BA0A9E955EAED505A32007C0755*)L_0);
		ImplicitLifecycleScopeU5BU5D_t1C10C825AEAC8ACF7250C9F8748855C85884D38D* L_1;
		L_1 = VirtualFuncInvoker0< ImplicitLifecycleScopeU5BU5D_t1C10C825AEAC8ACF7250C9F8748855C85884D38D* >::Invoke(4, (LifecycleScopeBase_t7CC30D9721A69BA0A9E955EAED505A32007C0755*)L_0);
		V_0 = L_1;
		V_1 = 0;
		goto IL_001c;
	}

IL_000b:
	{
		ImplicitLifecycleScopeU5BU5D_t1C10C825AEAC8ACF7250C9F8748855C85884D38D* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		ImplicitLifecycleScope_tB1D07078E6300A31DA61E2FFAB8D8A56AD296E38* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		ImplicitLifecycleScope_tB1D07078E6300A31DA61E2FFAB8D8A56AD296E38* L_6 = V_2;
		ActiveLifecycleScopesTracker_CreateScopeTransitionRequest_m9994ACEAA4926C9C17BB51EEA3411DA150DB15D9(__this, (LifecycleScope_tEA98D004E7CFF981DC51524B020E4CBD58D964CB*)L_6, (int32_t)0, (bool)0, NULL);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_001c:
	{
		int32_t L_8 = V_1;
		ImplicitLifecycleScopeU5BU5D_t1C10C825AEAC8ACF7250C9F8748855C85884D38D* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_9)->max_length),NULL));
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_000b;
		}
	}
	{
		LifecycleScopeWithContext_1_t35373E7691E4D4045644241660D92D3E94032599* L_11 = ___0_lifecycleScope;
		ActiveLifecycleScopesTracker_CreateScopeTransitionRequest_TisIl2CppSharedGenericObject_m781DD3D4A86DAE2D7A3F31DD07A1A4B6C4ACFFB7(__this, L_11, (int32_t)0, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActiveLifecycleScopesTracker_RequestExitScope_TisIl2CppSharedGenericObject_m4EB341898A21003EFE763B5E5C78B4A74F0C495D_gshared (ActiveLifecycleScopesTracker_t21B0C18F9AC8D5A5832FC8DAD92E8759C6E6A8E7* __this, LifecycleScopeWithContext_1_t35373E7691E4D4045644241660D92D3E94032599* ___0_lifecycleScope, bool ___1_alsoExitNestedScopes, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ImplicitLifecycleScopeU5BU5D_t1C10C825AEAC8ACF7250C9F8748855C85884D38D* V_0 = NULL;
	int32_t V_1 = 0;
	{
		LifecycleScopeWithContext_1_t35373E7691E4D4045644241660D92D3E94032599* L_0 = ___0_lifecycleScope;
		bool L_1 = ___1_alsoExitNestedScopes;
		ActiveLifecycleScopesTracker_CreateScopeTransitionRequest_TisIl2CppSharedGenericObject_m781DD3D4A86DAE2D7A3F31DD07A1A4B6C4ACFFB7(__this, L_0, (int32_t)1, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		LifecycleScopeWithContext_1_t35373E7691E4D4045644241660D92D3E94032599* L_2 = ___0_lifecycleScope;
		NullCheck((LifecycleScopeBase_t7CC30D9721A69BA0A9E955EAED505A32007C0755*)L_2);
		ImplicitLifecycleScopeU5BU5D_t1C10C825AEAC8ACF7250C9F8748855C85884D38D* L_3;
		L_3 = VirtualFuncInvoker0< ImplicitLifecycleScopeU5BU5D_t1C10C825AEAC8ACF7250C9F8748855C85884D38D* >::Invoke(4, (LifecycleScopeBase_t7CC30D9721A69BA0A9E955EAED505A32007C0755*)L_2);
		V_0 = L_3;
		ImplicitLifecycleScopeU5BU5D_t1C10C825AEAC8ACF7250C9F8748855C85884D38D* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		goto IL_0027;
	}

IL_0018:
	{
		ImplicitLifecycleScopeU5BU5D_t1C10C825AEAC8ACF7250C9F8748855C85884D38D* L_6 = V_0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		ImplicitLifecycleScope_tB1D07078E6300A31DA61E2FFAB8D8A56AD296E38* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		ActiveLifecycleScopesTracker_CreateScopeTransitionRequest_m9994ACEAA4926C9C17BB51EEA3411DA150DB15D9(__this, (LifecycleScope_tEA98D004E7CFF981DC51524B020E4CBD58D964CB*)L_9, (int32_t)1, (bool)0, NULL);
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
	}

IL_0027:
	{
		int32_t L_11 = V_1;
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActiveLifecycleScopesTracker_TryEnterScope_TisIl2CppSharedGenericObject_m21425F19F5B67EE7574D33E6C2EB5F06DBE9E93A_gshared (ActiveLifecycleScopesTracker_t21B0C18F9AC8D5A5832FC8DAD92E8759C6E6A8E7* __this, LifecycleScopeWithContext_1_t35373E7691E4D4045644241660D92D3E94032599* ___0_lifecycleScope, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mA42C372CA350E01B08326C78A32C2D4331199A3D_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ActiveLifecycleScopeWithContext_1_tD3998CF55244EF4B194F8B1E059746B5D9A85F79* V_0 = NULL;
	{
		LifecycleScopeWithContext_1_t35373E7691E4D4045644241660D92D3E94032599* L_0 = ___0_lifecycleScope;
		bool L_1;
		L_1 = ActiveLifecycleScopesTracker_PrepareTryEnterScopeWithContext_TisIl2CppSharedGenericObject_m3D8B69D9E50547113449972B07933BE902744D59(__this, L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		LifecycleScopeWithContext_1_t35373E7691E4D4045644241660D92D3E94032599* L_2 = ___0_lifecycleScope;
		ActiveLifecycleScopeWithContext_1_tD3998CF55244EF4B194F8B1E059746B5D9A85F79* L_3 = (ActiveLifecycleScopeWithContext_1_tD3998CF55244EF4B194F8B1E059746B5D9A85F79*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		ActiveLifecycleScopeWithContext_1__ctor_mDD6FD21DC68167495A10EE8C4AB04C783A8A809C(L_3, L_2, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_0 = L_3;
		Dictionary_2_tD1D7C3C9439A06F868D4705EB293B45335991F83* L_4 = __this->____activeScopes;
		LifecycleScopeWithContext_1_t35373E7691E4D4045644241660D92D3E94032599* L_5 = ___0_lifecycleScope;
		LifecycleScopeKey_t786C4635697BF09DC1C3BA0331E34017B8BA961D L_6;
		L_6 = LifecycleScopeKey_CreateFromScope_TisIl2CppSharedGenericObject_m613ECBEDFFC63C9393C625204DC116D94C244FBB(L_5, il2cpp_rgctx_method(method->rgctx_data, 4));
		ActiveLifecycleScopeWithContext_1_tD3998CF55244EF4B194F8B1E059746B5D9A85F79* L_7 = V_0;
		NullCheck(L_4);
		Dictionary_2_Add_mA42C372CA350E01B08326C78A32C2D4331199A3D(L_4, L_6, (ActiveLifecycleScopeBase_t0F0C7F8D06A577773F8D661F8CCE4F9FA9999A8C*)L_7, Dictionary_2_Add_mA42C372CA350E01B08326C78A32C2D4331199A3D_RuntimeMethod_var);
		LifecycleScopeWithContext_1_t35373E7691E4D4045644241660D92D3E94032599* L_8 = ___0_lifecycleScope;
		NullCheck((RuntimeObject*)L_8);
		Type_t* L_9;
		L_9 = il2cpp_codegen_object_get_type((RuntimeObject*)L_8);
		ActiveLifecycleScopesTracker_RaiseAutoCleanups_m5620B257E893397698E4CA9CBD38E695BADBA8ED(__this, L_9, (int32_t)0, NULL);
		ActiveLifecycleScopeWithContext_1_tD3998CF55244EF4B194F8B1E059746B5D9A85F79* L_10 = V_0;
		ScopeTransitionHelper_t069C5DE337C0C8F615857F4D731C5CBE3B0F4347* L_11 = __this->____scopeTransitionHelper;
		NullCheck((ActiveLifecycleScopeBase_t0F0C7F8D06A577773F8D661F8CCE4F9FA9999A8C*)L_10);
		VirtualActionInvoker1< ScopeTransitionHelper_t069C5DE337C0C8F615857F4D731C5CBE3B0F4347* >::Invoke(5, (ActiveLifecycleScopeBase_t0F0C7F8D06A577773F8D661F8CCE4F9FA9999A8C*)L_10, L_11);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActiveLifecycleScopesTracker_TryExitScope_TisIl2CppSharedGenericObject_m486A3BADE7D0AA96A07075C46B4AFF3C3DE51A66_gshared (ActiveLifecycleScopesTracker_t21B0C18F9AC8D5A5832FC8DAD92E8759C6E6A8E7* __this, LifecycleScopeWithContext_1_t35373E7691E4D4045644241660D92D3E94032599* ___0_lifecycleScope, Il2CppSharedGenericObject* ___1_activationContext, bool ___2_alsoExitNestedScopes, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mAE2ECC0F5BDAA58524500656449EA1A387079726_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m79563C16853F891CCBBC22B07DC63DA063874A49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m6E582A0ECA46CE69AFD14D67DE233D2B4E1069BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mC8DD05ED5A94E9D71568B93F1FBC1A03B3A4E385_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m2E4C1612FFBB402B6CF496C40499B9B84734E878_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_m1B01F115659146468CB5EE9025E45905AB1279DE_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	Enumerator_t624742B8D885649511A5739F11184E2221942252 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ActiveLifecycleScopeBase_t0F0C7F8D06A577773F8D661F8CCE4F9FA9999A8C* V_1 = NULL;
	ActiveLifecycleScopeWithContext_1_tD3998CF55244EF4B194F8B1E059746B5D9A85F79* V_2 = NULL;
	{
		LifecycleScopeWithContext_1_t35373E7691E4D4045644241660D92D3E94032599* L_0 = ___0_lifecycleScope;
		Il2CppSharedGenericObject* L_1 = ___1_activationContext;
		bool L_2 = ___2_alsoExitNestedScopes;
		bool L_3;
		L_3 = ActiveLifecycleScopesTracker_PrepareTryExitScope_TisIl2CppSharedGenericObject_mB20E9E3D9D7A9E4B5F58A5783EB2EBB2733EF4E7(__this, L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_3)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		Dictionary_2_tD1D7C3C9439A06F868D4705EB293B45335991F83* L_4 = __this->____activeScopes;
		NullCheck(L_4);
		ValueCollection_tB7C740A97431C55C62CC43DA7712B5896DBED97F* L_5;
		L_5 = Dictionary_2_get_Values_m79563C16853F891CCBBC22B07DC63DA063874A49(L_4, Dictionary_2_get_Values_m79563C16853F891CCBBC22B07DC63DA063874A49_RuntimeMethod_var);
		NullCheck(L_5);
		Enumerator_t624742B8D885649511A5739F11184E2221942252 L_6;
		L_6 = ValueCollection_GetEnumerator_m1B01F115659146468CB5EE9025E45905AB1279DE(L_5, ValueCollection_GetEnumerator_m1B01F115659146468CB5EE9025E45905AB1279DE_RuntimeMethod_var);
		V_0 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0099:
			{
				Enumerator_Dispose_m6E582A0ECA46CE69AFD14D67DE233D2B4E1069BE((&V_0), Enumerator_Dispose_m6E582A0ECA46CE69AFD14D67DE233D2B4E1069BE_RuntimeMethod_var);
				return;
			}
		});
		try
		{
			{
				goto IL_008e_1;
			}

IL_001f_1:
			{
				ActiveLifecycleScopeBase_t0F0C7F8D06A577773F8D661F8CCE4F9FA9999A8C* L_7;
				L_7 = Enumerator_get_Current_m2E4C1612FFBB402B6CF496C40499B9B84734E878_inline((&V_0), Enumerator_get_Current_m2E4C1612FFBB402B6CF496C40499B9B84734E878_RuntimeMethod_var);
				V_1 = L_7;
				ActiveLifecycleScopeBase_t0F0C7F8D06A577773F8D661F8CCE4F9FA9999A8C* L_8 = V_1;
				NullCheck(L_8);
				LifecycleScopeBase_t7CC30D9721A69BA0A9E955EAED505A32007C0755* L_9;
				L_9 = ActiveLifecycleScopeBase_get_Scope_m711F6C219BF9AED00688EB5C251A74C6780E0780_inline(L_8, NULL);
				NullCheck(L_9);
				String_t* L_10;
				L_10 = LifecycleScopeBase_get_Name_m9A358255FEBBEA5F94FCB82DC2B1AF1F8AB288BB_inline(L_9, NULL);
				LifecycleScopeWithContext_1_t35373E7691E4D4045644241660D92D3E94032599* L_11 = ___0_lifecycleScope;
				NullCheck((LifecycleScopeBase_t7CC30D9721A69BA0A9E955EAED505A32007C0755*)L_11);
				String_t* L_12;
				L_12 = LifecycleScopeBase_get_Name_m9A358255FEBBEA5F94FCB82DC2B1AF1F8AB288BB_inline((LifecycleScopeBase_t7CC30D9721A69BA0A9E955EAED505A32007C0755*)L_11, NULL);
				bool L_13;
				L_13 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_10, L_12, NULL);
				if (!L_13)
				{
					goto IL_008e_1;
				}
			}
			{
				ActiveLifecycleScopeBase_t0F0C7F8D06A577773F8D661F8CCE4F9FA9999A8C* L_14 = V_1;
				V_2 = ((ActiveLifecycleScopeWithContext_1_tD3998CF55244EF4B194F8B1E059746B5D9A85F79*)IsInstClass((RuntimeObject*)L_14, il2cpp_rgctx_data(method->rgctx_data, 3)));
				ActiveLifecycleScopeWithContext_1_tD3998CF55244EF4B194F8B1E059746B5D9A85F79* L_15 = V_2;
				if (!L_15)
				{
					goto IL_008e_1;
				}
			}
			{
				ActiveLifecycleScopeWithContext_1_tD3998CF55244EF4B194F8B1E059746B5D9A85F79* L_16 = V_2;
				NullCheck(L_16);
				Il2CppSharedGenericObject* L_17;
				L_17 = ActiveLifecycleScopeWithContext_1_get_Context_m45FFE4CAC1E3D5639C3DEE4433FAE9E204851CC0(L_16, il2cpp_rgctx_method(method->rgctx_data, 4));
				Il2CppSharedGenericObject* L_18 = ___1_activationContext;
				if ((!(((RuntimeObject*)(Il2CppSharedGenericObject*)L_17) == ((RuntimeObject*)(Il2CppSharedGenericObject*)L_18))))
				{
					goto IL_008e_1;
				}
			}
			{
				ActiveLifecycleScopeBase_t0F0C7F8D06A577773F8D661F8CCE4F9FA9999A8C* L_19 = V_1;
				ScopeTransitionHelper_t069C5DE337C0C8F615857F4D731C5CBE3B0F4347* L_20 = __this->____scopeTransitionHelper;
				NullCheck(L_19);
				VirtualActionInvoker1< ScopeTransitionHelper_t069C5DE337C0C8F615857F4D731C5CBE3B0F4347* >::Invoke(6, L_19, L_20);
				ActiveLifecycleScopeBase_t0F0C7F8D06A577773F8D661F8CCE4F9FA9999A8C* L_21 = V_1;
				NullCheck(L_21);
				LifecycleScopeBase_t7CC30D9721A69BA0A9E955EAED505A32007C0755* L_22;
				L_22 = ActiveLifecycleScopeBase_get_Scope_m711F6C219BF9AED00688EB5C251A74C6780E0780_inline(L_21, NULL);
				NullCheck((RuntimeObject*)L_22);
				Type_t* L_23;
				L_23 = il2cpp_codegen_object_get_type((RuntimeObject*)L_22);
				ActiveLifecycleScopesTracker_RaiseAutoCleanups_m5620B257E893397698E4CA9CBD38E695BADBA8ED(__this, L_23, (int32_t)1, NULL);
				Dictionary_2_tD1D7C3C9439A06F868D4705EB293B45335991F83* L_24 = __this->____activeScopes;
				ActiveLifecycleScopeBase_t0F0C7F8D06A577773F8D661F8CCE4F9FA9999A8C* L_25 = V_1;
				NullCheck(L_25);
				LifecycleScopeKey_t786C4635697BF09DC1C3BA0331E34017B8BA961D L_26;
				L_26 = VirtualFuncInvoker0< LifecycleScopeKey_t786C4635697BF09DC1C3BA0331E34017B8BA961D >::Invoke(4, L_25);
				NullCheck(L_24);
				bool L_27;
				L_27 = Dictionary_2_Remove_mAE2ECC0F5BDAA58524500656449EA1A387079726(L_24, L_26, Dictionary_2_Remove_mAE2ECC0F5BDAA58524500656449EA1A387079726_RuntimeMethod_var);
				goto IL_00a7;
			}

IL_008e_1:
			{
				bool L_28;
				L_28 = Enumerator_MoveNext_mC8DD05ED5A94E9D71568B93F1FBC1A03B3A4E385((&V_0), Enumerator_MoveNext_mC8DD05ED5A94E9D71568B93F1FBC1A03B3A4E385_RuntimeMethod_var);
				if (L_28)
				{
					goto IL_001f_1;
				}
			}
			{
				goto IL_00a7;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a7:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ActiveLifecycleScopesTracker_TryGetActiveScope_TisIl2CppSharedGenericObject_mD4C10B4553156820DC083CB6E542984B5DF90F55_gshared (ActiveLifecycleScopesTracker_t21B0C18F9AC8D5A5832FC8DAD92E8759C6E6A8E7* __this, Il2CppSharedGenericObject** ___0_scope, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m23A14CBF4DD0FFE6985742AB5960E012A3D29D89_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	LifecycleScopeKey_t786C4635697BF09DC1C3BA0331E34017B8BA961D V_0;
	memset((&V_0), 0, sizeof(V_0));
	ActiveLifecycleScopeBase_t0F0C7F8D06A577773F8D661F8CCE4F9FA9999A8C* V_1 = NULL;
	Il2CppSharedGenericObject* V_2 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		LifecycleScopeKey__ctor_m7DCCBE2ED25A7746808F3555AB845EE71FEB6A71((&V_0), L_1, NULL);
		Dictionary_2_tD1D7C3C9439A06F868D4705EB293B45335991F83* L_2 = __this->____activeScopes;
		LifecycleScopeKey_t786C4635697BF09DC1C3BA0331E34017B8BA961D L_3 = V_0;
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_TryGetValue_m23A14CBF4DD0FFE6985742AB5960E012A3D29D89(L_2, L_3, (&V_1), Dictionary_2_TryGetValue_m23A14CBF4DD0FFE6985742AB5960E012A3D29D89_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0043;
		}
	}
	{
		ActiveLifecycleScopeBase_t0F0C7F8D06A577773F8D661F8CCE4F9FA9999A8C* L_5 = V_1;
		NullCheck(L_5);
		LifecycleScopeBase_t7CC30D9721A69BA0A9E955EAED505A32007C0755* L_6;
		L_6 = ActiveLifecycleScopeBase_get_Scope_m711F6C219BF9AED00688EB5C251A74C6780E0780_inline(L_5, NULL);
		V_2 = ((Il2CppSharedGenericObject*)IsInst((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 1)));
		Il2CppSharedGenericObject* L_7 = V_2;
		if (!L_7)
		{
			goto IL_0043;
		}
	}
	{
		Il2CppSharedGenericObject** L_8 = ___0_scope;
		Il2CppSharedGenericObject* L_9 = V_2;
		*(Il2CppSharedGenericObject**)L_8 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_8, (void*)L_9);
		return (bool)1;
	}

IL_0043:
	{
		Il2CppSharedGenericObject** L_10 = ___0_scope;
		il2cpp_codegen_initobj(L_10, sizeof(Il2CppSharedGenericObject*));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ActiveLifecycleScopesTracker_TryGetActiveScope_TisIl2CppSharedGenericObject_TisIl2CppSharedGenericObject_m8BE6AF6B2FBB31FDC0A8C52C68EBA36AA80545E0_gshared (ActiveLifecycleScopesTracker_t21B0C18F9AC8D5A5832FC8DAD92E8759C6E6A8E7* __this, Il2CppSharedGenericObject* ___0_context, Il2CppSharedGenericObject** ___1_scope, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m23A14CBF4DD0FFE6985742AB5960E012A3D29D89_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	LifecycleScopeKey_t786C4635697BF09DC1C3BA0331E34017B8BA961D V_0;
	memset((&V_0), 0, sizeof(V_0));
	ActiveLifecycleScopeBase_t0F0C7F8D06A577773F8D661F8CCE4F9FA9999A8C* V_1 = NULL;
	Il2CppSharedGenericObject* V_2 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		Il2CppSharedGenericObject* L_2 = ___0_context;
		LifecycleScopeKey__ctor_m3BFDFB377FD3F489668C9B18AF174EF462838E6C((&V_0), L_1, (RuntimeObject*)L_2, NULL);
		Dictionary_2_tD1D7C3C9439A06F868D4705EB293B45335991F83* L_3 = __this->____activeScopes;
		LifecycleScopeKey_t786C4635697BF09DC1C3BA0331E34017B8BA961D L_4 = V_0;
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_TryGetValue_m23A14CBF4DD0FFE6985742AB5960E012A3D29D89(L_3, L_4, (&V_1), Dictionary_2_TryGetValue_m23A14CBF4DD0FFE6985742AB5960E012A3D29D89_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		ActiveLifecycleScopeBase_t0F0C7F8D06A577773F8D661F8CCE4F9FA9999A8C* L_6 = V_1;
		NullCheck(L_6);
		LifecycleScopeBase_t7CC30D9721A69BA0A9E955EAED505A32007C0755* L_7;
		L_7 = ActiveLifecycleScopeBase_get_Scope_m711F6C219BF9AED00688EB5C251A74C6780E0780_inline(L_6, NULL);
		V_2 = ((Il2CppSharedGenericObject*)IsInst((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 1)));
		Il2CppSharedGenericObject* L_8 = V_2;
		if (!L_8)
		{
			goto IL_0049;
		}
	}
	{
		Il2CppSharedGenericObject** L_9 = ___1_scope;
		Il2CppSharedGenericObject* L_10 = V_2;
		*(Il2CppSharedGenericObject**)L_9 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_9, (void*)L_10);
		return (bool)1;
	}

IL_0049:
	{
		Il2CppSharedGenericObject** L_11 = ___1_scope;
		il2cpp_codegen_initobj(L_11, sizeof(Il2CppSharedGenericObject*));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF AndroidJNI_GetDirectBuffer_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m971CFD6732DCF55F07C2820EA7F2D685FED934CD_gshared (intptr_t ___0_buffer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int8_t* V_0 = NULL;
	int64_t V_1 = 0;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		intptr_t L_0 = ___0_buffer;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_0, 0, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_initobj((&V_2), sizeof(NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF));
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_2 = V_2;
		return L_2;
	}

IL_0017:
	{
		intptr_t L_3 = ___0_buffer;
		int8_t* L_4;
		L_4 = AndroidJNI_GetDirectBufferAddress_m0E0B127BFEB7AAF065829DC6AE11163D5616EBE8(L_3, NULL);
		V_0 = L_4;
		int8_t* L_5 = V_0;
		uintptr_t L_6 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		if ((!(((uintptr_t)L_5) == ((uintptr_t)L_6))))
		{
			goto IL_002d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_2), sizeof(NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF));
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_7 = V_2;
		return L_7;
	}

IL_002d:
	{
		intptr_t L_8 = ___0_buffer;
		int64_t L_9;
		L_9 = AndroidJNI_GetDirectBufferCapacity_mCAC8D9C8E45481BE59FB17406E1E16D4F9628183(L_8, NULL);
		V_1 = L_9;
		int64_t L_10 = V_1;
		int64_t L_11 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)2147483647LL),NULL));
		if ((((int64_t)L_10) <= ((int64_t)L_11)))
		{
			goto IL_005d;
		}
	}
	{
		int64_t L_12 = V_1;
		int64_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_defaults.int64_class, &L_13);
		int32_t L_15 = ((int32_t)2147483647LL);
		RuntimeObject* L_16 = Box(il2cpp_defaults.int32_class, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDC955F06F1DA8A3B06C4755211822B06D698CF11)), L_14, L_16, NULL);
		Exception_t* L_18 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_18, L_17, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, method);
	}

IL_005d:
	{
		int8_t* L_19 = V_0;
		int64_t L_20 = V_1;
		int32_t L_21 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(L_20,NULL));
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_22;
		L_22 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m181D7F12EB826B7D6B73742BFD85A667D533BABA((void*)L_19, L_21, (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_22;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190 AndroidJNI_GetDirectBuffer_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mD58C4C3DF41E0AFB0378C0FF602335B30319D382_gshared (intptr_t ___0_buffer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int8_t* V_0 = NULL;
	int64_t V_1 = 0;
	NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		intptr_t L_0 = ___0_buffer;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_0, 0, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_initobj((&V_2), sizeof(NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190));
		NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190 L_2 = V_2;
		return L_2;
	}

IL_0017:
	{
		intptr_t L_3 = ___0_buffer;
		int8_t* L_4;
		L_4 = AndroidJNI_GetDirectBufferAddress_m0E0B127BFEB7AAF065829DC6AE11163D5616EBE8(L_3, NULL);
		V_0 = L_4;
		int8_t* L_5 = V_0;
		uintptr_t L_6 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		if ((!(((uintptr_t)L_5) == ((uintptr_t)L_6))))
		{
			goto IL_002d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_2), sizeof(NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190));
		NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190 L_7 = V_2;
		return L_7;
	}

IL_002d:
	{
		intptr_t L_8 = ___0_buffer;
		int64_t L_9;
		L_9 = AndroidJNI_GetDirectBufferCapacity_mCAC8D9C8E45481BE59FB17406E1E16D4F9628183(L_8, NULL);
		V_1 = L_9;
		int64_t L_10 = V_1;
		int64_t L_11 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)2147483647LL),NULL));
		if ((((int64_t)L_10) <= ((int64_t)L_11)))
		{
			goto IL_005d;
		}
	}
	{
		int64_t L_12 = V_1;
		int64_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_defaults.int64_class, &L_13);
		int32_t L_15 = ((int32_t)2147483647LL);
		RuntimeObject* L_16 = Box(il2cpp_defaults.int32_class, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDC955F06F1DA8A3B06C4755211822B06D698CF11)), L_14, L_16, NULL);
		Exception_t* L_18 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_18, L_17, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, method);
	}

IL_005d:
	{
		int8_t* L_19 = V_0;
		int64_t L_20 = V_1;
		int32_t L_21 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(L_20,NULL));
		NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190 L_22;
		L_22 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mD9D29EE5CE27F4BFD0168818BF064EC5B3672F39((void*)L_19, L_21, (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_22;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 AndroidJNI_GetDirectBuffer_TisIl2CppFullySharedGenericStruct_mA240D97969B6DC457DEC6F6EB97FDE5D94F28C29_gshared (intptr_t ___0_buffer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int8_t* V_0 = NULL;
	int64_t V_1 = 0;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		intptr_t L_0 = ___0_buffer;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_0, 0, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_initobj((&V_2), sizeof(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_2 = V_2;
		return L_2;
	}

IL_0017:
	{
		intptr_t L_3 = ___0_buffer;
		int8_t* L_4;
		L_4 = AndroidJNI_GetDirectBufferAddress_m0E0B127BFEB7AAF065829DC6AE11163D5616EBE8(L_3, NULL);
		V_0 = L_4;
		int8_t* L_5 = V_0;
		uintptr_t L_6 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		if ((!(((uintptr_t)L_5) == ((uintptr_t)L_6))))
		{
			goto IL_002d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_2), sizeof(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_7 = V_2;
		return L_7;
	}

IL_002d:
	{
		intptr_t L_8 = ___0_buffer;
		int64_t L_9;
		L_9 = AndroidJNI_GetDirectBufferCapacity_mCAC8D9C8E45481BE59FB17406E1E16D4F9628183(L_8, NULL);
		V_1 = L_9;
		int64_t L_10 = V_1;
		int64_t L_11 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)2147483647LL),NULL));
		if ((((int64_t)L_10) <= ((int64_t)L_11)))
		{
			goto IL_005d;
		}
	}
	{
		int64_t L_12 = V_1;
		int64_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_defaults.int64_class, &L_13);
		int32_t L_15 = ((int32_t)2147483647LL);
		RuntimeObject* L_16 = Box(il2cpp_defaults.int32_class, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDC955F06F1DA8A3B06C4755211822B06D698CF11)), L_14, L_16, NULL);
		Exception_t* L_18 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_18, L_17, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, method);
	}

IL_005d:
	{
		int8_t* L_19 = V_0;
		int64_t L_20 = V_1;
		int32_t L_21 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(L_20,NULL));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_22;
		L_22 = ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((void*)L_19, L_21, (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_22;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewDirectByteBufferFromNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5CA9D512889E4FD11E06BC83A1E6FE316CD1BC0F_gshared (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___0_buffer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		bool L_0;
		L_0 = NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081_inline((&___0_buffer), il2cpp_rgctx_method(method->rgctx_data, 1));
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1;
		L_1 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_buffer))->___m_Length);
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_0019;
		}
	}

IL_0013:
	{
		return 0;
	}

IL_0019:
	{
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_2 = ___0_buffer;
		void* L_3;
		L_3 = NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_inline(L_2, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_buffer))->___m_Length);
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_4,NULL));
		intptr_t L_6;
		L_6 = AndroidJNI_NewDirectByteBuffer_m17389ED6D98CC0364180BAB43F2747B48FFDB107((uint8_t*)L_3, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewDirectByteBufferFromNativeArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mB9A49EBBCCE6CE5AF7544594285D5F56E7EF279C_gshared (NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190 ___0_buffer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		bool L_0;
		L_0 = NativeArray_1_get_IsCreated_mF1154ABCB79F43B3A71BFA8DCB85ACBDFA2838D5_inline((&___0_buffer), il2cpp_rgctx_method(method->rgctx_data, 1));
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1;
		L_1 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_buffer))->___m_Length);
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_0019;
		}
	}

IL_0013:
	{
		return 0;
	}

IL_0019:
	{
		NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190 L_2 = ___0_buffer;
		void* L_3;
		L_3 = NativeArrayUnsafeUtility_GetUnsafePtr_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mCD832837FF5CE235B506272835BA049D56968E2F_inline(L_2, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_buffer))->___m_Length);
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_4,NULL));
		intptr_t L_6;
		L_6 = AndroidJNI_NewDirectByteBuffer_m17389ED6D98CC0364180BAB43F2747B48FFDB107((uint8_t*)L_3, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewDirectByteBufferFromNativeArray_TisIl2CppFullySharedGenericStruct_mBA315BD28FAF24143A02065102FEC37584F134D1_gshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_buffer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		bool L_0;
		L_0 = ((  bool (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((&___0_buffer), il2cpp_rgctx_method(method->rgctx_data, 1));
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1;
		L_1 = ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))((&___0_buffer), il2cpp_rgctx_method(method->rgctx_data, 3));
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_0019;
		}
	}

IL_0013:
	{
		return 0;
	}

IL_0019:
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_2 = ___0_buffer;
		void* L_3;
		L_3 = ((  void* (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_4;
		L_4 = ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))((&___0_buffer), il2cpp_rgctx_method(method->rgctx_data, 3));
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_4,NULL));
		intptr_t L_6;
		L_6 = AndroidJNI_NewDirectByteBuffer_m17389ED6D98CC0364180BAB43F2747B48FFDB107((uint8_t*)L_3, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNIHelper_ConvertFromJNIArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0207DDD0AB7EE1136083B85289D4F16FD9A64ECC_gshared (intptr_t ___0_array, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		intptr_t L_0 = ___0_array;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = _AndroidJNIHelper_ConvertFromJNIArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mBF1AB84DE0B50E7C206BAD3C170D1F5AD2D9E343(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNIHelper_ConvertFromJNIArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m51DC292506277213F541434A51F81430E11E7226_gshared (intptr_t ___0_array, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		intptr_t L_0 = ___0_array;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		Il2CppChar L_1;
		L_1 = _AndroidJNIHelper_ConvertFromJNIArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m9ECB51B699AB7B96368F39CC9F7C481340DD0BBC(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNIHelper_ConvertFromJNIArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF6AF89E7365D44A201C5A2C86C49EF49E2D6ADAD_gshared (intptr_t ___0_array, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		intptr_t L_0 = ___0_array;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = _AndroidJNIHelper_ConvertFromJNIArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m1F7F249CC7CDA2D6E136C627D983569B3674EA73(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNIHelper_ConvertFromJNIArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF6FCB78A4CF7C2FB0375E88C31C70458F55F422C_gshared (intptr_t ___0_array, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		intptr_t L_0 = ___0_array;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		int16_t L_1;
		L_1 = _AndroidJNIHelper_ConvertFromJNIArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m901F767E3189385BB47B5B021C40507AAF67D477(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNIHelper_ConvertFromJNIArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m02707C23958FF03FA0345C2A17F66EE379A1468C_gshared (intptr_t ___0_array, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		intptr_t L_0 = ___0_array;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = _AndroidJNIHelper_ConvertFromJNIArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m37A94A4CA9F6456009CABE27D4AA2ED7B8365168(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m0CADE835010213386C1C07E63F70E55498142C20_gshared (intptr_t ___0_array, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		intptr_t L_0 = ___0_array;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		int64_t L_1;
		L_1 = _AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mBE697F1C4D60A7F2BB06784B5CB0C540B7FBF664(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNIHelper_ConvertFromJNIArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m2BD2E924FBD117B44A2D5E741144FD7B1FCE918E_gshared (intptr_t ___0_array, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		intptr_t L_0 = ___0_array;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		int8_t L_1;
		L_1 = _AndroidJNIHelper_ConvertFromJNIArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m01777984AFB915C1167148BC6056336EB200B151(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNIHelper_ConvertFromJNIArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m93BCF3156F5C823F8C2B005523A618966B0A6DBB_gshared (intptr_t ___0_array, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		intptr_t L_0 = ___0_array;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = _AndroidJNIHelper_ConvertFromJNIArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6634501B2BC58937A4D852F6F2D8D55A9DFB6F64(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* AndroidJNIHelper_ConvertFromJNIArray_TisIl2CppSharedGenericObject_m6F1CD10E4BE61A7211FB87DA1D7D92C7FE85F8E4_gshared (intptr_t ___0_array, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		intptr_t L_0 = ___0_array;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		Il2CppSharedGenericObject* L_1;
		L_1 = _AndroidJNIHelper_ConvertFromJNIArray_TisIl2CppSharedGenericObject_mAD2432704589B67F3F93D55DF8B948DCBEBA4444(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNIHelper_ConvertFromJNIArray_TisIl2CppFullySharedGenericAny_mE2FE04F1AE05E31AFCB6C62A0D8015274310BBE7_gshared (intptr_t ___0_array, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_ArrayType_t33FA9A7F66F041B4E2878FF619DA2A8FCDD39085 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_ArrayType_t33FA9A7F66F041B4E2878FF619DA2A8FCDD39085);
	{
		intptr_t L_0 = ___0_array;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		InvokerActionInvoker2< intptr_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_0, (Il2CppFullySharedGenericAny*)L_1);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_ArrayType_t33FA9A7F66F041B4E2878FF619DA2A8FCDD39085);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetFieldID_TisIl2CppSharedGenericObject_mDFF491584A820BE0629A47ED3B790A199050D589_gshared (intptr_t ___0_jclass, String_t* ___1_fieldName, bool ___2_isStatic, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_fieldName;
		bool L_2 = ___2_isStatic;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = _AndroidJNIHelper_GetFieldID_TisIl2CppSharedGenericObject_mC4E70171E726BFD2EDF128963FAD90873B0289C5(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetFieldID_TisIl2CppFullySharedGenericAny_mD4DFA0128576804E9AE4FF17BD3D1398F2196069_gshared (intptr_t ___0_jclass, String_t* ___1_fieldName, bool ___2_isStatic, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_fieldName;
		bool L_2 = ___2_isStatic;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = ((  intptr_t (*) (intptr_t, String_t*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE3914411BE312CBBA869835158E535A06CD3EEB4_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		bool L_3 = ___3_isStatic;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		intptr_t L_4;
		L_4 = _AndroidJNIHelper_GetMethodID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5C5661781E8C49E962C2556FC75101FD0E862AFD(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m791647AA6EAD3B88467418F51CF53F5755AB38BA_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		bool L_3 = ___3_isStatic;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		intptr_t L_4;
		L_4 = _AndroidJNIHelper_GetMethodID_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m465627642B00BC71088A5883058BB86DDBADABE0(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m44C60AAE64EE97BFD5D9D302E7BE5BE20E6862B3_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		bool L_3 = ___3_isStatic;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		intptr_t L_4;
		L_4 = _AndroidJNIHelper_GetMethodID_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mA32D3320555971B585058A28FC5F5EC84DC10A34(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3B57915B048BD436E00741CD146D62AC775E7BA3_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		bool L_3 = ___3_isStatic;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		intptr_t L_4;
		L_4 = _AndroidJNIHelper_GetMethodID_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF0D2DB5B885B01587820A9F88C6CAD67C8DC1512(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF87CC238DDBB3C90C35846E626548847CC7E319D_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		bool L_3 = ___3_isStatic;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		intptr_t L_4;
		L_4 = _AndroidJNIHelper_GetMethodID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB340108BAAC2DA25B45971B719093FDF9B13E745(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m9665934CC08FD80EB16882C4EA6FDBC5D9C3A175_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		bool L_3 = ___3_isStatic;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		intptr_t L_4;
		L_4 = _AndroidJNIHelper_GetMethodID_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mF114D8205E13517DE4F8DB9772E9C40C7C43BD85(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEF6ACD1C6C5237E0446DB9DBDAC40BA2660849BB_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		bool L_3 = ___3_isStatic;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		intptr_t L_4;
		L_4 = _AndroidJNIHelper_GetMethodID_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m362BBB1CC3B8834A056A8F709649BD182E24E9BD(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA3FFDC6948922BEFC787A297D5483BA277EEFF0C_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		bool L_3 = ___3_isStatic;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		intptr_t L_4;
		L_4 = _AndroidJNIHelper_GetMethodID_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m86B190CF71EDCB08177B90F98C76A9545AF09FCB(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisIl2CppSharedGenericObject_m95122CB55DFAF463B14CBBA51C2B0811790DB90B_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		bool L_3 = ___3_isStatic;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		intptr_t L_4;
		L_4 = _AndroidJNIHelper_GetMethodID_TisIl2CppSharedGenericObject_mFEAB91A44B644CE56BB6182931D1065B679E0B3A(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisIl2CppFullySharedGenericAny_mEB124826B537513D20B0E11A265E04D0612E1CE8_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		bool L_3 = ___3_isStatic;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		intptr_t L_4;
		L_4 = ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNIHelper_GetSignature_TisIl2CppFullySharedGenericAny_m4D04F21DE5CB13BC4E2A08505DA57AC729F3BA70_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_args;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		bool L_2;
		L_2 = AndroidJavaObject__Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m72E1F5D2CE435E45651E8B970A73B9F5E3E03815(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJavaObject_Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE43BB2CCE4BEBFBF19C2E7C22F4E07A52002E80C_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		Il2CppChar L_2;
		L_2 = AndroidJavaObject__Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m22710813CDD982DC5F88C2A4067FBFE1D57A3065(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		double L_2;
		L_2 = AndroidJavaObject__Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m946CEC22A94586DE93BE0725E5F25E04589F69DE(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJavaObject_Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE0567B52AC481152BD742506C5AB912185B2C345_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		int16_t L_2;
		L_2 = AndroidJavaObject__Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m08A0CE3C4BDDA756095A0A816C659587814F649E(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		int32_t L_2;
		L_2 = AndroidJavaObject__Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1BFF486C91846170C07AAF27EF84971FF0596B90(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJavaObject_Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m63E24F733CDC205FED0CF4659E49DB4AE06ADBB9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		int64_t L_2;
		L_2 = AndroidJavaObject__Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mC6DBECDD44973120E0A56068ABE886D9A7016F5C(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJavaObject_Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m517389999DF08FDB831BB7337DE4FA8D8158AF7B_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		int8_t L_2;
		L_2 = AndroidJavaObject__Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mAE2F0D59E0CE54D36BB86C53218704FA72DC0350(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJavaObject_Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC6CF02CBA2C4A23EF8CD0BF612F5759B8C26DFF1_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		float L_2;
		L_2 = AndroidJavaObject__Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m71549B5031FEE0FBB78A9CE02EDADD14DBFFB56D(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* AndroidJavaObject_Call_TisIl2CppSharedGenericObject_m8DEE2A0D06B4978C5E5000815E66E6484606D138_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		Il2CppSharedGenericObject* L_2;
		L_2 = AndroidJavaObject__Call_TisIl2CppSharedGenericObject_m39A1E2B88CD5364F83417EFB65F1C296656D2F62(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_TisIl2CppFullySharedGenericAny_mC798093D4EE507666B4D04C1237E82DFBBACE706_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_ReturnType_t7ECE3320BEFB3505409302EC3AA6B828AE7E1DB5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_ReturnType_t7ECE3320BEFB3505409302EC3AA6B828AE7E1DB5);
	{
		intptr_t L_0 = ___0_methodID;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		InvokerActionInvoker3< intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), __this, L_0, L_1, (Il2CppFullySharedGenericAny*)L_2);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_ReturnType_t7ECE3320BEFB3505409302EC3AA6B828AE7E1DB5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_TisIl2CppFullySharedGenericAny_mCA7EED8FFBB862858FF426BD7D6B191F9C24234B_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_ReturnType_t7C9CEFF53F7F785E3B0A2AA52BF0599DB9E4C7A7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_ReturnType_t7C9CEFF53F7F785E3B0A2AA52BF0599DB9E4C7A7);
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		InvokerActionInvoker3< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), __this, L_0, L_1, (Il2CppFullySharedGenericAny*)L_2);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_ReturnType_t7C9CEFF53F7F785E3B0A2AA52BF0599DB9E4C7A7);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_TisIl2CppFullySharedGenericAny_mDA393DFB3EA03B230F3982EC0F62EED04C1B755E_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___0_methodID;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___1_args;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		AndroidJavaObject__Call_m2126160FB635069207535BD0E700C3605FDB3308(__this, L_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_TisIl2CppFullySharedGenericAny_mF7CDE80510F82B3C335324838828B788E1F0FAD4_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___1_args;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		AndroidJavaObject__Call_m4C4D7D7287030773175BDF47681EA018DFA4DF1A(__this, L_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mE94FE031A180D9514AA8E28338270133654A7412_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_args, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_ReturnType_tE77199CFC11B9237A747C8E23BCDA97324CD4769 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_ReturnType_tE77199CFC11B9237A747C8E23BCDA97324CD4769);
	{
		intptr_t L_0 = ___0_methodID;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___1_args;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		InvokerActionInvoker3< intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_0, L_2, (Il2CppFullySharedGenericAny*)L_4);
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_ReturnType_tE77199CFC11B9237A747C8E23BCDA97324CD4769);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m584BD08D664D1371FF995E37EDD37FD6AA861406_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_args, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_ReturnType_t6A981EFC55AACA8DB2914A6B9C24AF2C1F0D86E3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_ReturnType_t6A981EFC55AACA8DB2914A6B9C24AF2C1F0D86E3);
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___1_args;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		InvokerActionInvoker3< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_0, L_2, (Il2CppFullySharedGenericAny*)L_4);
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_ReturnType_t6A981EFC55AACA8DB2914A6B9C24AF2C1F0D86E3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		bool L_2;
		L_2 = AndroidJavaObject__CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m41529A6A47CC3B57286AC8F9C6388E54918DF450(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		int32_t L_2;
		L_2 = AndroidJavaObject__CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEE64E87A5A2BC0F38910643A9B91032AF38D882C(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJavaObject_CallStatic_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m2FC8ACAFE956D789EAA03558DC9E281FA48D6243_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		int64_t L_2;
		L_2 = AndroidJavaObject__CallStatic_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mB6A9E09630C485412DA1C0F2E04C67EEBE05E340(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* AndroidJavaObject_CallStatic_TisIl2CppSharedGenericObject_mF6EA4A6FC668EA46C5309B3E3A5ABB83600F50F6_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		Il2CppSharedGenericObject* L_2;
		L_2 = AndroidJavaObject__CallStatic_TisIl2CppSharedGenericObject_m8E1513A9554AAA1822CA51D0A816DCF16775AA37(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_TisIl2CppFullySharedGenericAny_m98714A38A15645388BE9EE530213C7EDB49C34AF_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_ReturnType_t955BFF9AB851C80203957B433FC00E2046696241 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_ReturnType_t955BFF9AB851C80203957B433FC00E2046696241);
	{
		intptr_t L_0 = ___0_methodID;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		InvokerActionInvoker3< intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), __this, L_0, L_1, (Il2CppFullySharedGenericAny*)L_2);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_ReturnType_t955BFF9AB851C80203957B433FC00E2046696241);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_TisIl2CppFullySharedGenericAny_m7843D14A0537A1190C739261EF49C05B1FF2ED90_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_ReturnType_t94E13999E45FF70AA5DA5E427955FC4E439412B2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_ReturnType_t94E13999E45FF70AA5DA5E427955FC4E439412B2);
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		InvokerActionInvoker3< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), __this, L_0, L_1, (Il2CppFullySharedGenericAny*)L_2);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_ReturnType_t94E13999E45FF70AA5DA5E427955FC4E439412B2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_TisIl2CppFullySharedGenericAny_m9E915D63BD1F4FB05B49296EEFE25B86C30EA692_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___0_methodID;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___1_args;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		AndroidJavaObject__CallStatic_mE917E474DB9801610FB7ABE5BE749DF84CEFD48A(__this, L_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_TisIl2CppFullySharedGenericAny_mB35C0A4F3C829AF99001B27BC0E99CD64736EE1A_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___1_args;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		AndroidJavaObject__CallStatic_mD63902D30CD5626DAEAD1D6484AF7A9ACA85590E(__this, L_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m4C097E550C3D8A103BE65545A8CB9E688DCE341E_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_args, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_ReturnType_t3F35C7C5E6E91ECEB1E553CA45292DBBEC6E5501 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_ReturnType_t3F35C7C5E6E91ECEB1E553CA45292DBBEC6E5501);
	{
		intptr_t L_0 = ___0_methodID;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___1_args;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		InvokerActionInvoker3< intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_0, L_2, (Il2CppFullySharedGenericAny*)L_4);
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_ReturnType_t3F35C7C5E6E91ECEB1E553CA45292DBBEC6E5501);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m9E8D43F22F21BB581F9478C8CF9B3A8059B3B8CD_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_args, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_ReturnType_t41223B870DEBD9DC66C7F3F6FDDF2CF6D061E4EB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_ReturnType_t41223B870DEBD9DC66C7F3F6FDDF2CF6D061E4EB);
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___1_args;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		InvokerActionInvoker3< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_0, L_2, (Il2CppFullySharedGenericAny*)L_4);
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_ReturnType_t41223B870DEBD9DC66C7F3F6FDDF2CF6D061E4EB);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_FromJavaArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mA1CB7EC9473B0674763C89AC566EC664159108E9_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	{
		intptr_t L_0 = ___0_jobject;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_0, 0, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		bool L_2 = V_0;
		return L_2;
	}

IL_0017:
	{
		intptr_t L_3 = ___0_jobject;
		bool L_4;
		L_4 = AndroidJNIHelper_ConvertFromJNIArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0207DDD0AB7EE1136083B85289D4F16FD9A64ECC(L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJavaObject_FromJavaArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m18459EC016E866EF307EC4D9442CD86FD9BC28B4_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	Il2CppChar V_0 = 0x0;
	{
		intptr_t L_0 = ___0_jobject;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_0, 0, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Il2CppChar));
		Il2CppChar L_2 = V_0;
		return L_2;
	}

IL_0017:
	{
		intptr_t L_3 = ___0_jobject;
		Il2CppChar L_4;
		L_4 = AndroidJNIHelper_ConvertFromJNIArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m51DC292506277213F541434A51F81430E11E7226(L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJavaObject_FromJavaArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m3CAD187DEBCBD88D94604015E86A37B8944847BC_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	double V_0 = 0.0;
	{
		intptr_t L_0 = ___0_jobject;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_0, 0, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(double));
		double L_2 = V_0;
		return L_2;
	}

IL_0017:
	{
		intptr_t L_3 = ___0_jobject;
		double L_4;
		L_4 = AndroidJNIHelper_ConvertFromJNIArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF6AF89E7365D44A201C5A2C86C49EF49E2D6ADAD(L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJavaObject_FromJavaArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m62441E1DA5798B8F585F5EF18386C4FB739BFFC8_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int16_t V_0 = 0;
	{
		intptr_t L_0 = ___0_jobject;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_0, 0, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int16_t));
		int16_t L_2 = V_0;
		return L_2;
	}

IL_0017:
	{
		intptr_t L_3 = ___0_jobject;
		int16_t L_4;
		L_4 = AndroidJNIHelper_ConvertFromJNIArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF6FCB78A4CF7C2FB0375E88C31C70458F55F422C(L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_FromJavaArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC1390BDE8BF42FAA78215DFE076A25F7AEA674D7_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		intptr_t L_0 = ___0_jobject;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_0, 0, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_2 = V_0;
		return L_2;
	}

IL_0017:
	{
		intptr_t L_3 = ___0_jobject;
		int32_t L_4;
		L_4 = AndroidJNIHelper_ConvertFromJNIArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m02707C23958FF03FA0345C2A17F66EE379A1468C(L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJavaObject_FromJavaArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m6A8E0C87ADD6FC1CA3F936C0CC0AC4AB379A8422_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		intptr_t L_0 = ___0_jobject;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_0, 0, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int64_t));
		int64_t L_2 = V_0;
		return L_2;
	}

IL_0017:
	{
		intptr_t L_3 = ___0_jobject;
		int64_t L_4;
		L_4 = AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m0CADE835010213386C1C07E63F70E55498142C20(L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJavaObject_FromJavaArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mB474FE99696A6DEB269E0F1C3C7DA32CD8854410_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int8_t V_0 = 0x0;
	{
		intptr_t L_0 = ___0_jobject;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_0, 0, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int8_t));
		int8_t L_2 = V_0;
		return L_2;
	}

IL_0017:
	{
		intptr_t L_3 = ___0_jobject;
		int8_t L_4;
		L_4 = AndroidJNIHelper_ConvertFromJNIArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m2BD2E924FBD117B44A2D5E741144FD7B1FCE918E(L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJavaObject_FromJavaArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mD5A794B10305822230E288BE2D72329A6EE0C8A4_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	float V_0 = 0.0f;
	{
		intptr_t L_0 = ___0_jobject;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_0, 0, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(float));
		float L_2 = V_0;
		return L_2;
	}

IL_0017:
	{
		intptr_t L_3 = ___0_jobject;
		float L_4;
		L_4 = AndroidJNIHelper_ConvertFromJNIArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m93BCF3156F5C823F8C2B005523A618966B0A6DBB(L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* AndroidJavaObject_FromJavaArray_TisIl2CppSharedGenericObject_m22D9898503E929D77563392822CD11A056613AFF_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	Il2CppSharedGenericObject* V_0 = NULL;
	{
		intptr_t L_0 = ___0_jobject;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_0, 0, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_2 = V_0;
		return L_2;
	}

IL_0017:
	{
		intptr_t L_3 = ___0_jobject;
		Il2CppSharedGenericObject* L_4;
		L_4 = AndroidJNIHelper_ConvertFromJNIArray_TisIl2CppSharedGenericObject_m6F1CD10E4BE61A7211FB87DA1D7D92C7FE85F8E4(L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_FromJavaArray_TisIl2CppFullySharedGenericAny_m4D8E7ACD1BBB7E3FEC7BA69AF6C620E70D8BBC3E_gshared (intptr_t ___0_jobject, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_ReturnType_t2602EED81B2B6E4946933FD7A1734F95B3DD02CC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_ReturnType_t2602EED81B2B6E4946933FD7A1734F95B3DD02CC);
	const Il2CppFullySharedGenericAny L_4 = L_2;
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_ReturnType_t2602EED81B2B6E4946933FD7A1734F95B3DD02CC);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_ReturnType_t2602EED81B2B6E4946933FD7A1734F95B3DD02CC);
	memset(V_0, 0, SizeOf_ReturnType_t2602EED81B2B6E4946933FD7A1734F95B3DD02CC);
	{
		intptr_t L_0 = ___0_jobject;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_0, 0, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_ReturnType_t2602EED81B2B6E4946933FD7A1734F95B3DD02CC);
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_ReturnType_t2602EED81B2B6E4946933FD7A1734F95B3DD02CC);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_ReturnType_t2602EED81B2B6E4946933FD7A1734F95B3DD02CC);
		return;
	}

IL_0017:
	{
		intptr_t L_3 = ___0_jobject;
		InvokerActionInvoker2< intptr_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_3, (Il2CppFullySharedGenericAny*)L_4);
		il2cpp_codegen_box_unbox(L_4, L_5, SizeOf_ReturnType_t2602EED81B2B6E4946933FD7A1734F95B3DD02CC, il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_data(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(il2cppRetVal, L_5, SizeOf_ReturnType_t2602EED81B2B6E4946933FD7A1734F95B3DD02CC);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisIl2CppSharedGenericObject_mB1CEFE624E92B82D234C1982AA2A7DF6AC5FD284_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	Il2CppSharedGenericObject* V_0 = NULL;
	{
		intptr_t L_0 = ___0_jobject;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_0, 0, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_2 = V_0;
		return L_2;
	}

IL_0017:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002b:
			{
				intptr_t L_3 = ___0_jobject;
				AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_3, NULL);
				return;
			}
		});
		try
		{
			intptr_t L_4 = ___0_jobject;
			Il2CppSharedGenericObject* L_5;
			L_5 = AndroidJNIHelper_ConvertFromJNIArray_TisIl2CppSharedGenericObject_m6F1CD10E4BE61A7211FB87DA1D7D92C7FE85F8E4(L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
			V_0 = L_5;
			goto IL_0032;
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0032:
	{
		Il2CppSharedGenericObject* L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisIl2CppFullySharedGenericAny_m5BC2B7B267EBFB3D33E1D15F5F5DFEF99AB48E84_gshared (intptr_t ___0_jobject, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_ReturnType_t7F4379E8D6E3B3545F3D77660B8E3F6DA1DC4DB9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_ReturnType_t7F4379E8D6E3B3545F3D77660B8E3F6DA1DC4DB9);
	const Il2CppFullySharedGenericAny L_5 = L_2;
	const Il2CppFullySharedGenericAny L_7 = L_2;
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_ReturnType_t7F4379E8D6E3B3545F3D77660B8E3F6DA1DC4DB9);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_ReturnType_t7F4379E8D6E3B3545F3D77660B8E3F6DA1DC4DB9);
	memset(V_0, 0, SizeOf_ReturnType_t7F4379E8D6E3B3545F3D77660B8E3F6DA1DC4DB9);
	{
		intptr_t L_0 = ___0_jobject;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_0, 0, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_ReturnType_t7F4379E8D6E3B3545F3D77660B8E3F6DA1DC4DB9);
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_ReturnType_t7F4379E8D6E3B3545F3D77660B8E3F6DA1DC4DB9);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_ReturnType_t7F4379E8D6E3B3545F3D77660B8E3F6DA1DC4DB9);
		return;
	}

IL_0017:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002b:
			{
				intptr_t L_3 = ___0_jobject;
				AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_3, NULL);
				return;
			}
		});
		try
		{
			intptr_t L_4 = ___0_jobject;
			InvokerActionInvoker2< intptr_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_4, (Il2CppFullySharedGenericAny*)L_5);
			il2cpp_codegen_box_unbox(L_5, L_6, SizeOf_ReturnType_t7F4379E8D6E3B3545F3D77660B8E3F6DA1DC4DB9, il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_data(method->rgctx_data, 0));
			il2cpp_codegen_memcpy(V_0, L_6, SizeOf_ReturnType_t7F4379E8D6E3B3545F3D77660B8E3F6DA1DC4DB9);
			goto IL_0032;
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0032:
	{
		il2cpp_codegen_memcpy(L_7, V_0, SizeOf_ReturnType_t7F4379E8D6E3B3545F3D77660B8E3F6DA1DC4DB9);
		il2cpp_codegen_memcpy(il2cppRetVal, L_7, SizeOf_ReturnType_t7F4379E8D6E3B3545F3D77660B8E3F6DA1DC4DB9);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Get_TisIl2CppFullySharedGenericAny_m0921C141B8FD194E4F423401D827FCB547354135_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_FieldType_t3D88A0B7A2BB1C07E18A9AA7AB32582B0FB37337 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_FieldType_t3D88A0B7A2BB1C07E18A9AA7AB32582B0FB37337);
	{
		intptr_t L_0 = ___0_fieldID;
		InvokerActionInvoker2< intptr_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), __this, L_0, (Il2CppFullySharedGenericAny*)L_1);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_FieldType_t3D88A0B7A2BB1C07E18A9AA7AB32582B0FB37337);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Get_TisIl2CppFullySharedGenericAny_m390E9396B06E7DB37AB22F9F94EF31B456F01185_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_FieldType_tE541E61DC1EE486A3DDC10DCA2A2DD9A2A3BADE8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_FieldType_tE541E61DC1EE486A3DDC10DCA2A2DD9A2A3BADE8);
	{
		String_t* L_0 = ___0_fieldName;
		InvokerActionInvoker2< String_t*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), __this, L_0, (Il2CppFullySharedGenericAny*)L_1);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_FieldType_tE541E61DC1EE486A3DDC10DCA2A2DD9A2A3BADE8);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* AndroidJavaObject_GetStatic_TisIl2CppSharedGenericObject_mB51F8378DA3B0F5FFE061D86A20FA87349F98740_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		String_t* L_0 = ___0_fieldName;
		Il2CppSharedGenericObject* L_1;
		L_1 = AndroidJavaObject__GetStatic_TisIl2CppSharedGenericObject_m177F1A057E8F5EF05D9158BA272E890C6210044B(__this, L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_GetStatic_TisIl2CppFullySharedGenericAny_m7E7CB28FD389C5D15A289C22C10EEBB9E64567B9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_FieldType_t4E8B4431DA3B0620A6961D0830B049CE0FA25BB3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_FieldType_t4E8B4431DA3B0620A6961D0830B049CE0FA25BB3);
	{
		intptr_t L_0 = ___0_fieldID;
		InvokerActionInvoker2< intptr_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), __this, L_0, (Il2CppFullySharedGenericAny*)L_1);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_FieldType_t4E8B4431DA3B0620A6961D0830B049CE0FA25BB3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_GetStatic_TisIl2CppFullySharedGenericAny_mDD5B83921F6078373B85EB4F803492A68545BA7E_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_FieldType_tBB418E296327456981AAF34C2BEB510AEC3C4E4D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_FieldType_tBB418E296327456981AAF34C2BEB510AEC3C4E4D);
	{
		String_t* L_0 = ___0_fieldName;
		InvokerActionInvoker2< String_t*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), __this, L_0, (Il2CppFullySharedGenericAny*)L_1);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_FieldType_tBB418E296327456981AAF34C2BEB510AEC3C4E4D);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Set_TisIl2CppFullySharedGenericAny_mEB42AA9151144DAA56A324FBF5A564C71A65D35E_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, Il2CppFullySharedGenericAny ___1_val, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_FieldType_tD083F29D6E32E63E26B83C297746967559FB5289 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_FieldType_tD083F29D6E32E63E26B83C297746967559FB5289);
	{
		intptr_t L_0 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_val : &___1_val), SizeOf_FieldType_tD083F29D6E32E63E26B83C297746967559FB5289);
		InvokerActionInvoker2< intptr_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_1: *(void**)L_1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Set_TisIl2CppFullySharedGenericAny_m7286B3F15DA02D0B999CE939F20412740B22945E_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, Il2CppFullySharedGenericAny ___1_val, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_FieldType_t5C6F84F3CFFB0874A4DA0D1C58053A25B835551E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_FieldType_t5C6F84F3CFFB0874A4DA0D1C58053A25B835551E);
	{
		String_t* L_0 = ___0_fieldName;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_val : &___1_val), SizeOf_FieldType_t5C6F84F3CFFB0874A4DA0D1C58053A25B835551E);
		InvokerActionInvoker2< String_t*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_1: *(void**)L_1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_SetStatic_TisIl2CppFullySharedGenericAny_mFB380E32D4FBFB41D3870427D3227A38E72F3D7C_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, Il2CppFullySharedGenericAny ___1_val, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_FieldType_tD9FB37412CCB11866A06B8D683ACBBD34ED06C6B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_FieldType_tD9FB37412CCB11866A06B8D683ACBBD34ED06C6B);
	{
		intptr_t L_0 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_val : &___1_val), SizeOf_FieldType_tD9FB37412CCB11866A06B8D683ACBBD34ED06C6B);
		InvokerActionInvoker2< intptr_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_1: *(void**)L_1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_SetStatic_TisIl2CppFullySharedGenericAny_mF354DBF45CBF7D251BCCAB27BAB86047439CC292_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, Il2CppFullySharedGenericAny ___1_val, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_FieldType_t6076CC06F19BCC0301AE8C734F26CA429D2DB469 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_FieldType_t6076CC06F19BCC0301AE8C734F26CA429D2DB469);
	{
		String_t* L_0 = ___0_fieldName;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_val : &___1_val), SizeOf_FieldType_t6076CC06F19BCC0301AE8C734F26CA429D2DB469);
		InvokerActionInvoker2< String_t*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_1: *(void**)L_1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject__Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m73D49A76D8F24AD1815CF94E87F1EF4683A38EA6_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	bool V_3 = false;
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	intptr_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool G_B30_0 = false;
	bool G_B35_0 = false;
	Type_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	Type_t* G_B39_0 = NULL;
	String_t* G_B39_1 = NULL;
	String_t* G_B41_0 = NULL;
	String_t* G_B41_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___1_args;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0011;
		}
	}

IL_0007:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7));
		goto IL_0027;
	}

IL_0011:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_args;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		V_2 = L_3;
		int32_t L_4 = V_2;
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_4,NULL));
		uint32_t L_6 = sizeof(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225);
		if ((uintptr_t)L_5 * (uintptr_t)L_6 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_7 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_5, (int32_t)L_6));
		int8_t* L_8;
		if (L_7 == 0)
		{
			L_8 = NULL;
		}
		else
		{
			L_8 = (int8_t*)alloca(L_7);
			memset(L_8, 0, L_7);
		}
		int32_t L_9 = V_2;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_inline((&L_10), (void*)L_8, L_9, Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		V_1 = L_10;
	}

IL_0027:
	{
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_11 = V_1;
		V_0 = L_11;
		int32_t L_12;
		L_12 = Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_inline((&V_0), Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		int32_t L_13;
		L_13 = AndroidJNI_PushLocalFrame_m2D8050A3799AEBB4A7E506E6790839EB66932E10(((int32_t)il2cpp_codegen_add(L_12, 1)), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = ___1_args;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_15 = V_0;
		AndroidJNIHelper_CreateJNIArgArray_mD8E0CA2404E31F155EDE1A028EC686C17B17730F(L_14, L_15, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_03de:
			{
				intptr_t L_16;
				L_16 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				return;
			}
		});
		try
		{
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_18;
				L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_19;
				L_19 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_18, NULL);
				if (!L_19)
				{
					goto IL_0286_1;
				}
			}
			{
				goto IL_0090_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_20 = __this->___m_jobject;
				intptr_t L_21;
				L_21 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_20, NULL);
				intptr_t L_22 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_23 = V_0;
				int32_t L_24;
				L_24 = AndroidJNISafe_CallIntMethod_m60318205A7EAD0C5CC0643106A7044F1563DCC0E(L_21, L_22, L_23, NULL);
				int32_t L_25 = L_24;
				bool L_26;
				il2cpp_codegen_box_unbox((&L_25), (&L_26), sizeof(bool), il2cpp_defaults.int32_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_26;
				goto IL_03ea;
			}

IL_0090_1:
			{
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_27 = __this->___m_jobject;
				intptr_t L_28;
				L_28 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_27, NULL);
				intptr_t L_29 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_30 = V_0;
				bool L_31;
				L_31 = AndroidJNISafe_CallBooleanMethod_m2F5824C9EA5D1586C7E555F9F8DE01D84757D972(L_28, L_29, L_30, NULL);
				V_3 = L_31;
				goto IL_03ea;
			}

IL_00cd_1:
			{
				goto IL_0115_1;
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_32 = __this->___m_jobject;
				intptr_t L_33;
				L_33 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_32, NULL);
				intptr_t L_34 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_35 = V_0;
				int8_t L_36;
				L_36 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_33, L_34, L_35, NULL);
				uint8_t L_37 = (il2cpp_codegen_conv<uint8_t,int8_t,int32_t,false,false>(L_36,NULL));
				uint8_t L_38 = L_37;
				bool L_39;
				il2cpp_codegen_box_unbox((&L_38), (&L_39), sizeof(bool), il2cpp_defaults.byte_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_39;
				goto IL_03ea;
			}

IL_0115_1:
			{
				goto IL_0152_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_40 = __this->___m_jobject;
				intptr_t L_41;
				L_41 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_40, NULL);
				intptr_t L_42 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_43 = V_0;
				int8_t L_44;
				L_44 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_41, L_42, L_43, NULL);
				int8_t L_45 = L_44;
				bool L_46;
				il2cpp_codegen_box_unbox((&L_45), (&L_46), sizeof(bool), il2cpp_defaults.sbyte_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_46;
				goto IL_03ea;
			}

IL_0152_1:
			{
				goto IL_018f_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_47 = __this->___m_jobject;
				intptr_t L_48;
				L_48 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_47, NULL);
				intptr_t L_49 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_50 = V_0;
				int16_t L_51;
				L_51 = AndroidJNISafe_CallShortMethod_m7C82D811B75161D4567651B0D85E5F7A2ED83A97(L_48, L_49, L_50, NULL);
				int16_t L_52 = L_51;
				bool L_53;
				il2cpp_codegen_box_unbox((&L_52), (&L_53), sizeof(bool), il2cpp_defaults.int16_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_53;
				goto IL_03ea;
			}

IL_018f_1:
			{
				goto IL_01cc_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_54 = __this->___m_jobject;
				intptr_t L_55;
				L_55 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_54, NULL);
				intptr_t L_56 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_57 = V_0;
				int64_t L_58;
				L_58 = AndroidJNISafe_CallLongMethod_mD04CC840004334A567747BD526F88A813CB833B6(L_55, L_56, L_57, NULL);
				int64_t L_59 = L_58;
				bool L_60;
				il2cpp_codegen_box_unbox((&L_59), (&L_60), sizeof(bool), il2cpp_defaults.int64_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_60;
				goto IL_03ea;
			}

IL_01cc_1:
			{
				goto IL_0209_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_61 = __this->___m_jobject;
				intptr_t L_62;
				L_62 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_61, NULL);
				intptr_t L_63 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_64 = V_0;
				float L_65;
				L_65 = AndroidJNISafe_CallFloatMethod_m7437E60E0985885D721F1592E4DACF8246F69BBE(L_62, L_63, L_64, NULL);
				float L_66 = L_65;
				bool L_67;
				il2cpp_codegen_box_unbox((&L_66), (&L_67), sizeof(bool), il2cpp_defaults.single_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_67;
				goto IL_03ea;
			}

IL_0209_1:
			{
				goto IL_0246_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_68 = __this->___m_jobject;
				intptr_t L_69;
				L_69 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_68, NULL);
				intptr_t L_70 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_71 = V_0;
				double L_72;
				L_72 = AndroidJNISafe_CallDoubleMethod_m01B318F7CA4F90C54D689CF0CD84DF312E68CB5E(L_69, L_70, L_71, NULL);
				double L_73 = L_72;
				bool L_74;
				il2cpp_codegen_box_unbox((&L_73), (&L_74), sizeof(bool), il2cpp_defaults.double_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_74;
				goto IL_03ea;
			}

IL_0246_1:
			{
				goto IL_03d1_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_75 = __this->___m_jobject;
				intptr_t L_76;
				L_76 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_75, NULL);
				intptr_t L_77 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_78 = V_0;
				Il2CppChar L_79;
				L_79 = AndroidJNISafe_CallCharMethod_mB777FAF5E9D1BFF480B7EDD5AA5352F30797E1DD(L_76, L_77, L_78, NULL);
				Il2CppChar L_80 = L_79;
				bool L_81;
				il2cpp_codegen_box_unbox((&L_80), (&L_81), sizeof(bool), il2cpp_defaults.char_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_81;
				goto IL_03ea;
			}

IL_0286_1:
			{
				goto IL_02be_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_82 = __this->___m_jobject;
				intptr_t L_83;
				L_83 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_82, NULL);
				intptr_t L_84 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_85 = V_0;
				String_t* L_86;
				L_86 = AndroidJNISafe_CallStringMethod_m4E40DA54A224C0C10A8C600CAC1C2C838B69264C(L_83, L_84, L_85, NULL);
				V_3 = ((*(bool*)UnBox((RuntimeObject*)L_86, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_03ea;
			}

IL_02be_1:
			{
				goto IL_0319_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_87 = __this->___m_jobject;
				intptr_t L_88;
				L_88 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_87, NULL);
				intptr_t L_89 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_90 = V_0;
				intptr_t L_91;
				L_91 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_88, L_89, L_90, NULL);
				V_4 = L_91;
				intptr_t L_92 = V_4;
				bool L_93;
				L_93 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_92, 0, NULL);
				if (L_93)
				{
					goto IL_0309_1;
				}
			}
			{
				intptr_t L_94 = V_4;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_95 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
				AndroidJavaClass__ctor_mB206D3CB990755BD56E308F61CD43BB9EA4421D0(L_95, L_94, NULL);
				G_B30_0 = ((*(bool*)UnBox((RuntimeObject*)L_95, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0313_1;
			}

IL_0309_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(bool));
				bool L_96 = V_5;
				G_B30_0 = L_96;
			}

IL_0313_1:
			{
				V_3 = G_B30_0;
				goto IL_03ea;
			}

IL_0319_1:
			{
				goto IL_0371_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_97 = __this->___m_jobject;
				intptr_t L_98;
				L_98 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_97, NULL);
				intptr_t L_99 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_100 = V_0;
				intptr_t L_101;
				L_101 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_98, L_99, L_100, NULL);
				V_6 = L_101;
				intptr_t L_102 = V_6;
				bool L_103;
				L_103 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_102, 0, NULL);
				if (L_103)
				{
					goto IL_0364_1;
				}
			}
			{
				intptr_t L_104 = V_6;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_105 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
				AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_105, L_104, NULL);
				G_B35_0 = ((*(bool*)UnBox((RuntimeObject*)L_105, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_036e_1;
			}

IL_0364_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(bool));
				bool L_106 = V_5;
				G_B35_0 = L_106;
			}

IL_036e_1:
			{
				V_3 = G_B35_0;
				goto IL_03ea;
			}

IL_0371_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_107 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.array_class->byval_arg) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_108;
				L_108 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_107, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_109 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				Type_t* L_110;
				L_110 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_109, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_111;
				L_111 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_108, L_110, NULL);
				if (!L_111)
				{
					goto IL_03a6_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_112 = __this->___m_jobject;
				intptr_t L_113;
				L_113 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_112, NULL);
				intptr_t L_114 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_115 = V_0;
				intptr_t L_116;
				L_116 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_113, L_114, L_115, NULL);
				bool L_117;
				L_117 = AndroidJavaObject_FromJavaArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mA1CB7EC9473B0674763C89AC566EC664159108E9(L_116, il2cpp_rgctx_method(method->rgctx_data, 2));
				V_3 = L_117;
				goto IL_03ea;
			}

IL_03a6_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_118 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_119;
				L_119 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_118, NULL);
				Type_t* L_120 = L_119;
				if (L_120)
				{
					G_B40_0 = L_120;
					G_B40_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_03bc_1;
				}
				G_B39_0 = L_120;
				G_B39_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
			}
			{
				G_B41_0 = ((String_t*)(NULL));
				G_B41_1 = G_B39_1;
				goto IL_03c1_1;
			}

IL_03bc_1:
			{
				NullCheck((RuntimeObject*)G_B40_0);
				String_t* L_121;
				L_121 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B40_0);
				G_B41_0 = L_121;
				G_B41_1 = G_B40_1;
			}

IL_03c1_1:
			{
				String_t* L_122;
				L_122 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B41_1, G_B41_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_123 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_123, L_122, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_123, method);
			}

IL_03d1_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(bool));
				bool L_124 = V_5;
				V_3 = L_124;
				goto IL_03ea;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03ea:
	{
		bool L_125 = V_3;
		return L_125;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject__Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m72E1F5D2CE435E45651E8B970A73B9F5E3E03815_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_0, NULL);
		String_t* L_2 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___1_args;
		intptr_t L_4;
		L_4 = AndroidJNIHelper_GetMethodID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE3914411BE312CBBA869835158E535A06CD3EEB4(L_1, L_2, L_3, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		intptr_t L_5 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___1_args;
		bool L_7;
		L_7 = AndroidJavaObject__Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m73D49A76D8F24AD1815CF94E87F1EF4683A38EA6(__this, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJavaObject__Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m8B3C7C06394410B77DB9953832CB9F8C29C28E89_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	Il2CppChar V_5 = 0x0;
	intptr_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	Il2CppChar G_B30_0 = 0x0;
	Il2CppChar G_B35_0 = 0x0;
	Type_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	Type_t* G_B39_0 = NULL;
	String_t* G_B39_1 = NULL;
	String_t* G_B41_0 = NULL;
	String_t* G_B41_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___1_args;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0011;
		}
	}

IL_0007:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7));
		goto IL_0027;
	}

IL_0011:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_args;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		V_2 = L_3;
		int32_t L_4 = V_2;
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_4,NULL));
		uint32_t L_6 = sizeof(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225);
		if ((uintptr_t)L_5 * (uintptr_t)L_6 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_7 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_5, (int32_t)L_6));
		int8_t* L_8;
		if (L_7 == 0)
		{
			L_8 = NULL;
		}
		else
		{
			L_8 = (int8_t*)alloca(L_7);
			memset(L_8, 0, L_7);
		}
		int32_t L_9 = V_2;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_inline((&L_10), (void*)L_8, L_9, Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		V_1 = L_10;
	}

IL_0027:
	{
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_11 = V_1;
		V_0 = L_11;
		int32_t L_12;
		L_12 = Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_inline((&V_0), Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		int32_t L_13;
		L_13 = AndroidJNI_PushLocalFrame_m2D8050A3799AEBB4A7E506E6790839EB66932E10(((int32_t)il2cpp_codegen_add(L_12, 1)), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = ___1_args;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_15 = V_0;
		AndroidJNIHelper_CreateJNIArgArray_mD8E0CA2404E31F155EDE1A028EC686C17B17730F(L_14, L_15, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_03de:
			{
				intptr_t L_16;
				L_16 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				return;
			}
		});
		try
		{
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_18;
				L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_19;
				L_19 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_18, NULL);
				if (!L_19)
				{
					goto IL_0286_1;
				}
			}
			{
				goto IL_0090_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_20 = __this->___m_jobject;
				intptr_t L_21;
				L_21 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_20, NULL);
				intptr_t L_22 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_23 = V_0;
				int32_t L_24;
				L_24 = AndroidJNISafe_CallIntMethod_m60318205A7EAD0C5CC0643106A7044F1563DCC0E(L_21, L_22, L_23, NULL);
				int32_t L_25 = L_24;
				Il2CppChar L_26;
				il2cpp_codegen_box_unbox((&L_25), (&L_26), sizeof(Il2CppChar), il2cpp_defaults.int32_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_26;
				goto IL_03ea;
			}

IL_0090_1:
			{
				goto IL_00cd_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_27 = __this->___m_jobject;
				intptr_t L_28;
				L_28 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_27, NULL);
				intptr_t L_29 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_30 = V_0;
				bool L_31;
				L_31 = AndroidJNISafe_CallBooleanMethod_m2F5824C9EA5D1586C7E555F9F8DE01D84757D972(L_28, L_29, L_30, NULL);
				bool L_32 = L_31;
				Il2CppChar L_33;
				il2cpp_codegen_box_unbox((&L_32), (&L_33), sizeof(Il2CppChar), il2cpp_defaults.boolean_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_33;
				goto IL_03ea;
			}

IL_00cd_1:
			{
				goto IL_0115_1;
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_34 = __this->___m_jobject;
				intptr_t L_35;
				L_35 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_34, NULL);
				intptr_t L_36 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_37 = V_0;
				int8_t L_38;
				L_38 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_35, L_36, L_37, NULL);
				uint8_t L_39 = (il2cpp_codegen_conv<uint8_t,int8_t,int32_t,false,false>(L_38,NULL));
				uint8_t L_40 = L_39;
				Il2CppChar L_41;
				il2cpp_codegen_box_unbox((&L_40), (&L_41), sizeof(Il2CppChar), il2cpp_defaults.byte_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_41;
				goto IL_03ea;
			}

IL_0115_1:
			{
				goto IL_0152_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_42 = __this->___m_jobject;
				intptr_t L_43;
				L_43 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_42, NULL);
				intptr_t L_44 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_45 = V_0;
				int8_t L_46;
				L_46 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_43, L_44, L_45, NULL);
				int8_t L_47 = L_46;
				Il2CppChar L_48;
				il2cpp_codegen_box_unbox((&L_47), (&L_48), sizeof(Il2CppChar), il2cpp_defaults.sbyte_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_48;
				goto IL_03ea;
			}

IL_0152_1:
			{
				goto IL_018f_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_49 = __this->___m_jobject;
				intptr_t L_50;
				L_50 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_49, NULL);
				intptr_t L_51 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_52 = V_0;
				int16_t L_53;
				L_53 = AndroidJNISafe_CallShortMethod_m7C82D811B75161D4567651B0D85E5F7A2ED83A97(L_50, L_51, L_52, NULL);
				int16_t L_54 = L_53;
				Il2CppChar L_55;
				il2cpp_codegen_box_unbox((&L_54), (&L_55), sizeof(Il2CppChar), il2cpp_defaults.int16_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_55;
				goto IL_03ea;
			}

IL_018f_1:
			{
				goto IL_01cc_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_56 = __this->___m_jobject;
				intptr_t L_57;
				L_57 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_56, NULL);
				intptr_t L_58 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_59 = V_0;
				int64_t L_60;
				L_60 = AndroidJNISafe_CallLongMethod_mD04CC840004334A567747BD526F88A813CB833B6(L_57, L_58, L_59, NULL);
				int64_t L_61 = L_60;
				Il2CppChar L_62;
				il2cpp_codegen_box_unbox((&L_61), (&L_62), sizeof(Il2CppChar), il2cpp_defaults.int64_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_62;
				goto IL_03ea;
			}

IL_01cc_1:
			{
				goto IL_0209_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_63 = __this->___m_jobject;
				intptr_t L_64;
				L_64 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_63, NULL);
				intptr_t L_65 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_66 = V_0;
				float L_67;
				L_67 = AndroidJNISafe_CallFloatMethod_m7437E60E0985885D721F1592E4DACF8246F69BBE(L_64, L_65, L_66, NULL);
				float L_68 = L_67;
				Il2CppChar L_69;
				il2cpp_codegen_box_unbox((&L_68), (&L_69), sizeof(Il2CppChar), il2cpp_defaults.single_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_69;
				goto IL_03ea;
			}

IL_0209_1:
			{
				goto IL_0246_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_70 = __this->___m_jobject;
				intptr_t L_71;
				L_71 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_70, NULL);
				intptr_t L_72 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_73 = V_0;
				double L_74;
				L_74 = AndroidJNISafe_CallDoubleMethod_m01B318F7CA4F90C54D689CF0CD84DF312E68CB5E(L_71, L_72, L_73, NULL);
				double L_75 = L_74;
				Il2CppChar L_76;
				il2cpp_codegen_box_unbox((&L_75), (&L_76), sizeof(Il2CppChar), il2cpp_defaults.double_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_76;
				goto IL_03ea;
			}

IL_0246_1:
			{
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_77 = __this->___m_jobject;
				intptr_t L_78;
				L_78 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_77, NULL);
				intptr_t L_79 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_80 = V_0;
				Il2CppChar L_81;
				L_81 = AndroidJNISafe_CallCharMethod_mB777FAF5E9D1BFF480B7EDD5AA5352F30797E1DD(L_78, L_79, L_80, NULL);
				V_3 = L_81;
				goto IL_03ea;
			}

IL_0286_1:
			{
				goto IL_02be_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_82 = __this->___m_jobject;
				intptr_t L_83;
				L_83 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_82, NULL);
				intptr_t L_84 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_85 = V_0;
				String_t* L_86;
				L_86 = AndroidJNISafe_CallStringMethod_m4E40DA54A224C0C10A8C600CAC1C2C838B69264C(L_83, L_84, L_85, NULL);
				V_3 = ((*(Il2CppChar*)UnBox((RuntimeObject*)L_86, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_03ea;
			}

IL_02be_1:
			{
				goto IL_0319_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_87 = __this->___m_jobject;
				intptr_t L_88;
				L_88 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_87, NULL);
				intptr_t L_89 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_90 = V_0;
				intptr_t L_91;
				L_91 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_88, L_89, L_90, NULL);
				V_4 = L_91;
				intptr_t L_92 = V_4;
				bool L_93;
				L_93 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_92, 0, NULL);
				if (L_93)
				{
					goto IL_0309_1;
				}
			}
			{
				intptr_t L_94 = V_4;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_95 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
				AndroidJavaClass__ctor_mB206D3CB990755BD56E308F61CD43BB9EA4421D0(L_95, L_94, NULL);
				G_B30_0 = ((*(Il2CppChar*)UnBox((RuntimeObject*)L_95, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0313_1;
			}

IL_0309_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(Il2CppChar));
				Il2CppChar L_96 = V_5;
				G_B30_0 = L_96;
			}

IL_0313_1:
			{
				V_3 = G_B30_0;
				goto IL_03ea;
			}

IL_0319_1:
			{
				goto IL_0371_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_97 = __this->___m_jobject;
				intptr_t L_98;
				L_98 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_97, NULL);
				intptr_t L_99 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_100 = V_0;
				intptr_t L_101;
				L_101 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_98, L_99, L_100, NULL);
				V_6 = L_101;
				intptr_t L_102 = V_6;
				bool L_103;
				L_103 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_102, 0, NULL);
				if (L_103)
				{
					goto IL_0364_1;
				}
			}
			{
				intptr_t L_104 = V_6;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_105 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
				AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_105, L_104, NULL);
				G_B35_0 = ((*(Il2CppChar*)UnBox((RuntimeObject*)L_105, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_036e_1;
			}

IL_0364_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(Il2CppChar));
				Il2CppChar L_106 = V_5;
				G_B35_0 = L_106;
			}

IL_036e_1:
			{
				V_3 = G_B35_0;
				goto IL_03ea;
			}

IL_0371_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_107 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.array_class->byval_arg) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_108;
				L_108 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_107, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_109 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				Type_t* L_110;
				L_110 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_109, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_111;
				L_111 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_108, L_110, NULL);
				if (!L_111)
				{
					goto IL_03a6_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_112 = __this->___m_jobject;
				intptr_t L_113;
				L_113 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_112, NULL);
				intptr_t L_114 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_115 = V_0;
				intptr_t L_116;
				L_116 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_113, L_114, L_115, NULL);
				Il2CppChar L_117;
				L_117 = AndroidJavaObject_FromJavaArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m18459EC016E866EF307EC4D9442CD86FD9BC28B4(L_116, il2cpp_rgctx_method(method->rgctx_data, 2));
				V_3 = L_117;
				goto IL_03ea;
			}

IL_03a6_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_118 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_119;
				L_119 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_118, NULL);
				Type_t* L_120 = L_119;
				if (L_120)
				{
					G_B40_0 = L_120;
					G_B40_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_03bc_1;
				}
				G_B39_0 = L_120;
				G_B39_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
			}
			{
				G_B41_0 = ((String_t*)(NULL));
				G_B41_1 = G_B39_1;
				goto IL_03c1_1;
			}

IL_03bc_1:
			{
				NullCheck((RuntimeObject*)G_B40_0);
				String_t* L_121;
				L_121 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B40_0);
				G_B41_0 = L_121;
				G_B41_1 = G_B40_1;
			}

IL_03c1_1:
			{
				String_t* L_122;
				L_122 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B41_1, G_B41_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_123 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_123, L_122, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_123, method);
			}

IL_03d1_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(Il2CppChar));
				Il2CppChar L_124 = V_5;
				V_3 = L_124;
				goto IL_03ea;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03ea:
	{
		Il2CppChar L_125 = V_3;
		return L_125;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJavaObject__Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m22710813CDD982DC5F88C2A4067FBFE1D57A3065_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_0, NULL);
		String_t* L_2 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___1_args;
		intptr_t L_4;
		L_4 = AndroidJNIHelper_GetMethodID_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m791647AA6EAD3B88467418F51CF53F5755AB38BA(L_1, L_2, L_3, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		intptr_t L_5 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___1_args;
		Il2CppChar L_7;
		L_7 = AndroidJavaObject__Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m8B3C7C06394410B77DB9953832CB9F8C29C28E89(__this, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJavaObject__Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m0BA90472306DF5C3A1491FC3EB052DD58FA468C3_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	double V_3 = 0.0;
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	double V_5 = 0.0;
	intptr_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	double G_B30_0 = 0.0;
	double G_B35_0 = 0.0;
	Type_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	Type_t* G_B39_0 = NULL;
	String_t* G_B39_1 = NULL;
	String_t* G_B41_0 = NULL;
	String_t* G_B41_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___1_args;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0011;
		}
	}

IL_0007:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7));
		goto IL_0027;
	}

IL_0011:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_args;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		V_2 = L_3;
		int32_t L_4 = V_2;
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_4,NULL));
		uint32_t L_6 = sizeof(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225);
		if ((uintptr_t)L_5 * (uintptr_t)L_6 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_7 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_5, (int32_t)L_6));
		int8_t* L_8;
		if (L_7 == 0)
		{
			L_8 = NULL;
		}
		else
		{
			L_8 = (int8_t*)alloca(L_7);
			memset(L_8, 0, L_7);
		}
		int32_t L_9 = V_2;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_inline((&L_10), (void*)L_8, L_9, Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		V_1 = L_10;
	}

IL_0027:
	{
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_11 = V_1;
		V_0 = L_11;
		int32_t L_12;
		L_12 = Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_inline((&V_0), Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		int32_t L_13;
		L_13 = AndroidJNI_PushLocalFrame_m2D8050A3799AEBB4A7E506E6790839EB66932E10(((int32_t)il2cpp_codegen_add(L_12, 1)), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = ___1_args;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_15 = V_0;
		AndroidJNIHelper_CreateJNIArgArray_mD8E0CA2404E31F155EDE1A028EC686C17B17730F(L_14, L_15, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_03de:
			{
				intptr_t L_16;
				L_16 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				return;
			}
		});
		try
		{
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_18;
				L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_19;
				L_19 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_18, NULL);
				if (!L_19)
				{
					goto IL_0286_1;
				}
			}
			{
				goto IL_0090_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_20 = __this->___m_jobject;
				intptr_t L_21;
				L_21 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_20, NULL);
				intptr_t L_22 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_23 = V_0;
				int32_t L_24;
				L_24 = AndroidJNISafe_CallIntMethod_m60318205A7EAD0C5CC0643106A7044F1563DCC0E(L_21, L_22, L_23, NULL);
				int32_t L_25 = L_24;
				double L_26;
				il2cpp_codegen_box_unbox((&L_25), (&L_26), sizeof(double), il2cpp_defaults.int32_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_26;
				goto IL_03ea;
			}

IL_0090_1:
			{
				goto IL_00cd_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_27 = __this->___m_jobject;
				intptr_t L_28;
				L_28 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_27, NULL);
				intptr_t L_29 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_30 = V_0;
				bool L_31;
				L_31 = AndroidJNISafe_CallBooleanMethod_m2F5824C9EA5D1586C7E555F9F8DE01D84757D972(L_28, L_29, L_30, NULL);
				bool L_32 = L_31;
				double L_33;
				il2cpp_codegen_box_unbox((&L_32), (&L_33), sizeof(double), il2cpp_defaults.boolean_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_33;
				goto IL_03ea;
			}

IL_00cd_1:
			{
				goto IL_0115_1;
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_34 = __this->___m_jobject;
				intptr_t L_35;
				L_35 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_34, NULL);
				intptr_t L_36 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_37 = V_0;
				int8_t L_38;
				L_38 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_35, L_36, L_37, NULL);
				uint8_t L_39 = (il2cpp_codegen_conv<uint8_t,int8_t,int32_t,false,false>(L_38,NULL));
				uint8_t L_40 = L_39;
				double L_41;
				il2cpp_codegen_box_unbox((&L_40), (&L_41), sizeof(double), il2cpp_defaults.byte_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_41;
				goto IL_03ea;
			}

IL_0115_1:
			{
				goto IL_0152_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_42 = __this->___m_jobject;
				intptr_t L_43;
				L_43 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_42, NULL);
				intptr_t L_44 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_45 = V_0;
				int8_t L_46;
				L_46 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_43, L_44, L_45, NULL);
				int8_t L_47 = L_46;
				double L_48;
				il2cpp_codegen_box_unbox((&L_47), (&L_48), sizeof(double), il2cpp_defaults.sbyte_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_48;
				goto IL_03ea;
			}

IL_0152_1:
			{
				goto IL_018f_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_49 = __this->___m_jobject;
				intptr_t L_50;
				L_50 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_49, NULL);
				intptr_t L_51 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_52 = V_0;
				int16_t L_53;
				L_53 = AndroidJNISafe_CallShortMethod_m7C82D811B75161D4567651B0D85E5F7A2ED83A97(L_50, L_51, L_52, NULL);
				int16_t L_54 = L_53;
				double L_55;
				il2cpp_codegen_box_unbox((&L_54), (&L_55), sizeof(double), il2cpp_defaults.int16_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_55;
				goto IL_03ea;
			}

IL_018f_1:
			{
				goto IL_01cc_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_56 = __this->___m_jobject;
				intptr_t L_57;
				L_57 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_56, NULL);
				intptr_t L_58 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_59 = V_0;
				int64_t L_60;
				L_60 = AndroidJNISafe_CallLongMethod_mD04CC840004334A567747BD526F88A813CB833B6(L_57, L_58, L_59, NULL);
				int64_t L_61 = L_60;
				double L_62;
				il2cpp_codegen_box_unbox((&L_61), (&L_62), sizeof(double), il2cpp_defaults.int64_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_62;
				goto IL_03ea;
			}

IL_01cc_1:
			{
				goto IL_0209_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_63 = __this->___m_jobject;
				intptr_t L_64;
				L_64 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_63, NULL);
				intptr_t L_65 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_66 = V_0;
				float L_67;
				L_67 = AndroidJNISafe_CallFloatMethod_m7437E60E0985885D721F1592E4DACF8246F69BBE(L_64, L_65, L_66, NULL);
				float L_68 = L_67;
				double L_69;
				il2cpp_codegen_box_unbox((&L_68), (&L_69), sizeof(double), il2cpp_defaults.single_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_69;
				goto IL_03ea;
			}

IL_0209_1:
			{
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_70 = __this->___m_jobject;
				intptr_t L_71;
				L_71 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_70, NULL);
				intptr_t L_72 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_73 = V_0;
				double L_74;
				L_74 = AndroidJNISafe_CallDoubleMethod_m01B318F7CA4F90C54D689CF0CD84DF312E68CB5E(L_71, L_72, L_73, NULL);
				V_3 = L_74;
				goto IL_03ea;
			}

IL_0246_1:
			{
				goto IL_03d1_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_75 = __this->___m_jobject;
				intptr_t L_76;
				L_76 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_75, NULL);
				intptr_t L_77 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_78 = V_0;
				Il2CppChar L_79;
				L_79 = AndroidJNISafe_CallCharMethod_mB777FAF5E9D1BFF480B7EDD5AA5352F30797E1DD(L_76, L_77, L_78, NULL);
				Il2CppChar L_80 = L_79;
				double L_81;
				il2cpp_codegen_box_unbox((&L_80), (&L_81), sizeof(double), il2cpp_defaults.char_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_81;
				goto IL_03ea;
			}

IL_0286_1:
			{
				goto IL_02be_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_82 = __this->___m_jobject;
				intptr_t L_83;
				L_83 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_82, NULL);
				intptr_t L_84 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_85 = V_0;
				String_t* L_86;
				L_86 = AndroidJNISafe_CallStringMethod_m4E40DA54A224C0C10A8C600CAC1C2C838B69264C(L_83, L_84, L_85, NULL);
				V_3 = ((*(double*)UnBox((RuntimeObject*)L_86, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_03ea;
			}

IL_02be_1:
			{
				goto IL_0319_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_87 = __this->___m_jobject;
				intptr_t L_88;
				L_88 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_87, NULL);
				intptr_t L_89 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_90 = V_0;
				intptr_t L_91;
				L_91 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_88, L_89, L_90, NULL);
				V_4 = L_91;
				intptr_t L_92 = V_4;
				bool L_93;
				L_93 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_92, 0, NULL);
				if (L_93)
				{
					goto IL_0309_1;
				}
			}
			{
				intptr_t L_94 = V_4;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_95 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
				AndroidJavaClass__ctor_mB206D3CB990755BD56E308F61CD43BB9EA4421D0(L_95, L_94, NULL);
				G_B30_0 = ((*(double*)UnBox((RuntimeObject*)L_95, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0313_1;
			}

IL_0309_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(double));
				double L_96 = V_5;
				G_B30_0 = L_96;
			}

IL_0313_1:
			{
				V_3 = G_B30_0;
				goto IL_03ea;
			}

IL_0319_1:
			{
				goto IL_0371_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_97 = __this->___m_jobject;
				intptr_t L_98;
				L_98 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_97, NULL);
				intptr_t L_99 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_100 = V_0;
				intptr_t L_101;
				L_101 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_98, L_99, L_100, NULL);
				V_6 = L_101;
				intptr_t L_102 = V_6;
				bool L_103;
				L_103 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_102, 0, NULL);
				if (L_103)
				{
					goto IL_0364_1;
				}
			}
			{
				intptr_t L_104 = V_6;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_105 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
				AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_105, L_104, NULL);
				G_B35_0 = ((*(double*)UnBox((RuntimeObject*)L_105, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_036e_1;
			}

IL_0364_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(double));
				double L_106 = V_5;
				G_B35_0 = L_106;
			}

IL_036e_1:
			{
				V_3 = G_B35_0;
				goto IL_03ea;
			}

IL_0371_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_107 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.array_class->byval_arg) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_108;
				L_108 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_107, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_109 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				Type_t* L_110;
				L_110 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_109, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_111;
				L_111 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_108, L_110, NULL);
				if (!L_111)
				{
					goto IL_03a6_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_112 = __this->___m_jobject;
				intptr_t L_113;
				L_113 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_112, NULL);
				intptr_t L_114 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_115 = V_0;
				intptr_t L_116;
				L_116 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_113, L_114, L_115, NULL);
				double L_117;
				L_117 = AndroidJavaObject_FromJavaArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m3CAD187DEBCBD88D94604015E86A37B8944847BC(L_116, il2cpp_rgctx_method(method->rgctx_data, 2));
				V_3 = L_117;
				goto IL_03ea;
			}

IL_03a6_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_118 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_119;
				L_119 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_118, NULL);
				Type_t* L_120 = L_119;
				if (L_120)
				{
					G_B40_0 = L_120;
					G_B40_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_03bc_1;
				}
				G_B39_0 = L_120;
				G_B39_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
			}
			{
				G_B41_0 = ((String_t*)(NULL));
				G_B41_1 = G_B39_1;
				goto IL_03c1_1;
			}

IL_03bc_1:
			{
				NullCheck((RuntimeObject*)G_B40_0);
				String_t* L_121;
				L_121 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B40_0);
				G_B41_0 = L_121;
				G_B41_1 = G_B40_1;
			}

IL_03c1_1:
			{
				String_t* L_122;
				L_122 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B41_1, G_B41_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_123 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_123, L_122, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_123, method);
			}

IL_03d1_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(double));
				double L_124 = V_5;
				V_3 = L_124;
				goto IL_03ea;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03ea:
	{
		double L_125 = V_3;
		return L_125;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJavaObject__Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m946CEC22A94586DE93BE0725E5F25E04589F69DE_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_0, NULL);
		String_t* L_2 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___1_args;
		intptr_t L_4;
		L_4 = AndroidJNIHelper_GetMethodID_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m44C60AAE64EE97BFD5D9D302E7BE5BE20E6862B3(L_1, L_2, L_3, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		intptr_t L_5 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___1_args;
		double L_7;
		L_7 = AndroidJavaObject__Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m0BA90472306DF5C3A1491FC3EB052DD58FA468C3(__this, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJavaObject__Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mA616697346ABF4A696B8F63B5F85AA92777EA400_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int16_t V_3 = 0;
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	int16_t V_5 = 0;
	intptr_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	int16_t G_B30_0 = 0;
	int16_t G_B35_0 = 0;
	Type_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	Type_t* G_B39_0 = NULL;
	String_t* G_B39_1 = NULL;
	String_t* G_B41_0 = NULL;
	String_t* G_B41_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___1_args;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0011;
		}
	}

IL_0007:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7));
		goto IL_0027;
	}

IL_0011:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_args;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		V_2 = L_3;
		int32_t L_4 = V_2;
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_4,NULL));
		uint32_t L_6 = sizeof(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225);
		if ((uintptr_t)L_5 * (uintptr_t)L_6 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_7 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_5, (int32_t)L_6));
		int8_t* L_8;
		if (L_7 == 0)
		{
			L_8 = NULL;
		}
		else
		{
			L_8 = (int8_t*)alloca(L_7);
			memset(L_8, 0, L_7);
		}
		int32_t L_9 = V_2;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_inline((&L_10), (void*)L_8, L_9, Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		V_1 = L_10;
	}

IL_0027:
	{
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_11 = V_1;
		V_0 = L_11;
		int32_t L_12;
		L_12 = Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_inline((&V_0), Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		int32_t L_13;
		L_13 = AndroidJNI_PushLocalFrame_m2D8050A3799AEBB4A7E506E6790839EB66932E10(((int32_t)il2cpp_codegen_add(L_12, 1)), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = ___1_args;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_15 = V_0;
		AndroidJNIHelper_CreateJNIArgArray_mD8E0CA2404E31F155EDE1A028EC686C17B17730F(L_14, L_15, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_03de:
			{
				intptr_t L_16;
				L_16 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				return;
			}
		});
		try
		{
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_18;
				L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_19;
				L_19 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_18, NULL);
				if (!L_19)
				{
					goto IL_0286_1;
				}
			}
			{
				goto IL_0090_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_20 = __this->___m_jobject;
				intptr_t L_21;
				L_21 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_20, NULL);
				intptr_t L_22 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_23 = V_0;
				int32_t L_24;
				L_24 = AndroidJNISafe_CallIntMethod_m60318205A7EAD0C5CC0643106A7044F1563DCC0E(L_21, L_22, L_23, NULL);
				int32_t L_25 = L_24;
				int16_t L_26;
				il2cpp_codegen_box_unbox((&L_25), (&L_26), sizeof(int16_t), il2cpp_defaults.int32_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_26;
				goto IL_03ea;
			}

IL_0090_1:
			{
				goto IL_00cd_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_27 = __this->___m_jobject;
				intptr_t L_28;
				L_28 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_27, NULL);
				intptr_t L_29 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_30 = V_0;
				bool L_31;
				L_31 = AndroidJNISafe_CallBooleanMethod_m2F5824C9EA5D1586C7E555F9F8DE01D84757D972(L_28, L_29, L_30, NULL);
				bool L_32 = L_31;
				int16_t L_33;
				il2cpp_codegen_box_unbox((&L_32), (&L_33), sizeof(int16_t), il2cpp_defaults.boolean_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_33;
				goto IL_03ea;
			}

IL_00cd_1:
			{
				goto IL_0115_1;
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_34 = __this->___m_jobject;
				intptr_t L_35;
				L_35 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_34, NULL);
				intptr_t L_36 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_37 = V_0;
				int8_t L_38;
				L_38 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_35, L_36, L_37, NULL);
				uint8_t L_39 = (il2cpp_codegen_conv<uint8_t,int8_t,int32_t,false,false>(L_38,NULL));
				uint8_t L_40 = L_39;
				int16_t L_41;
				il2cpp_codegen_box_unbox((&L_40), (&L_41), sizeof(int16_t), il2cpp_defaults.byte_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_41;
				goto IL_03ea;
			}

IL_0115_1:
			{
				goto IL_0152_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_42 = __this->___m_jobject;
				intptr_t L_43;
				L_43 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_42, NULL);
				intptr_t L_44 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_45 = V_0;
				int8_t L_46;
				L_46 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_43, L_44, L_45, NULL);
				int8_t L_47 = L_46;
				int16_t L_48;
				il2cpp_codegen_box_unbox((&L_47), (&L_48), sizeof(int16_t), il2cpp_defaults.sbyte_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_48;
				goto IL_03ea;
			}

IL_0152_1:
			{
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_49 = __this->___m_jobject;
				intptr_t L_50;
				L_50 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_49, NULL);
				intptr_t L_51 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_52 = V_0;
				int16_t L_53;
				L_53 = AndroidJNISafe_CallShortMethod_m7C82D811B75161D4567651B0D85E5F7A2ED83A97(L_50, L_51, L_52, NULL);
				V_3 = L_53;
				goto IL_03ea;
			}

IL_018f_1:
			{
				goto IL_01cc_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_54 = __this->___m_jobject;
				intptr_t L_55;
				L_55 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_54, NULL);
				intptr_t L_56 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_57 = V_0;
				int64_t L_58;
				L_58 = AndroidJNISafe_CallLongMethod_mD04CC840004334A567747BD526F88A813CB833B6(L_55, L_56, L_57, NULL);
				int64_t L_59 = L_58;
				int16_t L_60;
				il2cpp_codegen_box_unbox((&L_59), (&L_60), sizeof(int16_t), il2cpp_defaults.int64_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_60;
				goto IL_03ea;
			}

IL_01cc_1:
			{
				goto IL_0209_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_61 = __this->___m_jobject;
				intptr_t L_62;
				L_62 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_61, NULL);
				intptr_t L_63 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_64 = V_0;
				float L_65;
				L_65 = AndroidJNISafe_CallFloatMethod_m7437E60E0985885D721F1592E4DACF8246F69BBE(L_62, L_63, L_64, NULL);
				float L_66 = L_65;
				int16_t L_67;
				il2cpp_codegen_box_unbox((&L_66), (&L_67), sizeof(int16_t), il2cpp_defaults.single_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_67;
				goto IL_03ea;
			}

IL_0209_1:
			{
				goto IL_0246_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_68 = __this->___m_jobject;
				intptr_t L_69;
				L_69 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_68, NULL);
				intptr_t L_70 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_71 = V_0;
				double L_72;
				L_72 = AndroidJNISafe_CallDoubleMethod_m01B318F7CA4F90C54D689CF0CD84DF312E68CB5E(L_69, L_70, L_71, NULL);
				double L_73 = L_72;
				int16_t L_74;
				il2cpp_codegen_box_unbox((&L_73), (&L_74), sizeof(int16_t), il2cpp_defaults.double_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_74;
				goto IL_03ea;
			}

IL_0246_1:
			{
				goto IL_03d1_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_75 = __this->___m_jobject;
				intptr_t L_76;
				L_76 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_75, NULL);
				intptr_t L_77 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_78 = V_0;
				Il2CppChar L_79;
				L_79 = AndroidJNISafe_CallCharMethod_mB777FAF5E9D1BFF480B7EDD5AA5352F30797E1DD(L_76, L_77, L_78, NULL);
				Il2CppChar L_80 = L_79;
				int16_t L_81;
				il2cpp_codegen_box_unbox((&L_80), (&L_81), sizeof(int16_t), il2cpp_defaults.char_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_81;
				goto IL_03ea;
			}

IL_0286_1:
			{
				goto IL_02be_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_82 = __this->___m_jobject;
				intptr_t L_83;
				L_83 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_82, NULL);
				intptr_t L_84 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_85 = V_0;
				String_t* L_86;
				L_86 = AndroidJNISafe_CallStringMethod_m4E40DA54A224C0C10A8C600CAC1C2C838B69264C(L_83, L_84, L_85, NULL);
				V_3 = ((*(int16_t*)UnBox((RuntimeObject*)L_86, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_03ea;
			}

IL_02be_1:
			{
				goto IL_0319_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_87 = __this->___m_jobject;
				intptr_t L_88;
				L_88 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_87, NULL);
				intptr_t L_89 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_90 = V_0;
				intptr_t L_91;
				L_91 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_88, L_89, L_90, NULL);
				V_4 = L_91;
				intptr_t L_92 = V_4;
				bool L_93;
				L_93 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_92, 0, NULL);
				if (L_93)
				{
					goto IL_0309_1;
				}
			}
			{
				intptr_t L_94 = V_4;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_95 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
				AndroidJavaClass__ctor_mB206D3CB990755BD56E308F61CD43BB9EA4421D0(L_95, L_94, NULL);
				G_B30_0 = ((*(int16_t*)UnBox((RuntimeObject*)L_95, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0313_1;
			}

IL_0309_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(int16_t));
				int16_t L_96 = V_5;
				G_B30_0 = L_96;
			}

IL_0313_1:
			{
				V_3 = G_B30_0;
				goto IL_03ea;
			}

IL_0319_1:
			{
				goto IL_0371_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_97 = __this->___m_jobject;
				intptr_t L_98;
				L_98 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_97, NULL);
				intptr_t L_99 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_100 = V_0;
				intptr_t L_101;
				L_101 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_98, L_99, L_100, NULL);
				V_6 = L_101;
				intptr_t L_102 = V_6;
				bool L_103;
				L_103 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_102, 0, NULL);
				if (L_103)
				{
					goto IL_0364_1;
				}
			}
			{
				intptr_t L_104 = V_6;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_105 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
				AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_105, L_104, NULL);
				G_B35_0 = ((*(int16_t*)UnBox((RuntimeObject*)L_105, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_036e_1;
			}

IL_0364_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(int16_t));
				int16_t L_106 = V_5;
				G_B35_0 = L_106;
			}

IL_036e_1:
			{
				V_3 = G_B35_0;
				goto IL_03ea;
			}

IL_0371_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_107 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.array_class->byval_arg) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_108;
				L_108 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_107, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_109 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				Type_t* L_110;
				L_110 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_109, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_111;
				L_111 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_108, L_110, NULL);
				if (!L_111)
				{
					goto IL_03a6_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_112 = __this->___m_jobject;
				intptr_t L_113;
				L_113 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_112, NULL);
				intptr_t L_114 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_115 = V_0;
				intptr_t L_116;
				L_116 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_113, L_114, L_115, NULL);
				int16_t L_117;
				L_117 = AndroidJavaObject_FromJavaArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m62441E1DA5798B8F585F5EF18386C4FB739BFFC8(L_116, il2cpp_rgctx_method(method->rgctx_data, 2));
				V_3 = L_117;
				goto IL_03ea;
			}

IL_03a6_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_118 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_119;
				L_119 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_118, NULL);
				Type_t* L_120 = L_119;
				if (L_120)
				{
					G_B40_0 = L_120;
					G_B40_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_03bc_1;
				}
				G_B39_0 = L_120;
				G_B39_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
			}
			{
				G_B41_0 = ((String_t*)(NULL));
				G_B41_1 = G_B39_1;
				goto IL_03c1_1;
			}

IL_03bc_1:
			{
				NullCheck((RuntimeObject*)G_B40_0);
				String_t* L_121;
				L_121 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B40_0);
				G_B41_0 = L_121;
				G_B41_1 = G_B40_1;
			}

IL_03c1_1:
			{
				String_t* L_122;
				L_122 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B41_1, G_B41_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_123 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_123, L_122, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_123, method);
			}

IL_03d1_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(int16_t));
				int16_t L_124 = V_5;
				V_3 = L_124;
				goto IL_03ea;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03ea:
	{
		int16_t L_125 = V_3;
		return L_125;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJavaObject__Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m08A0CE3C4BDDA756095A0A816C659587814F649E_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_0, NULL);
		String_t* L_2 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___1_args;
		intptr_t L_4;
		L_4 = AndroidJNIHelper_GetMethodID_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3B57915B048BD436E00741CD146D62AC775E7BA3(L_1, L_2, L_3, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		intptr_t L_5 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___1_args;
		int16_t L_7;
		L_7 = AndroidJavaObject__Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mA616697346ABF4A696B8F63B5F85AA92777EA400(__this, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject__Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0D60BAB951F2C313123D62CAB81EEA263F2F0750_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	intptr_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t G_B30_0 = 0;
	int32_t G_B35_0 = 0;
	Type_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	Type_t* G_B39_0 = NULL;
	String_t* G_B39_1 = NULL;
	String_t* G_B41_0 = NULL;
	String_t* G_B41_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___1_args;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0011;
		}
	}

IL_0007:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7));
		goto IL_0027;
	}

IL_0011:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_args;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		V_2 = L_3;
		int32_t L_4 = V_2;
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_4,NULL));
		uint32_t L_6 = sizeof(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225);
		if ((uintptr_t)L_5 * (uintptr_t)L_6 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_7 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_5, (int32_t)L_6));
		int8_t* L_8;
		if (L_7 == 0)
		{
			L_8 = NULL;
		}
		else
		{
			L_8 = (int8_t*)alloca(L_7);
			memset(L_8, 0, L_7);
		}
		int32_t L_9 = V_2;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_inline((&L_10), (void*)L_8, L_9, Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		V_1 = L_10;
	}

IL_0027:
	{
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_11 = V_1;
		V_0 = L_11;
		int32_t L_12;
		L_12 = Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_inline((&V_0), Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		int32_t L_13;
		L_13 = AndroidJNI_PushLocalFrame_m2D8050A3799AEBB4A7E506E6790839EB66932E10(((int32_t)il2cpp_codegen_add(L_12, 1)), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = ___1_args;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_15 = V_0;
		AndroidJNIHelper_CreateJNIArgArray_mD8E0CA2404E31F155EDE1A028EC686C17B17730F(L_14, L_15, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_03de:
			{
				intptr_t L_16;
				L_16 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				return;
			}
		});
		try
		{
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_18;
				L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_19;
				L_19 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_18, NULL);
				if (!L_19)
				{
					goto IL_0286_1;
				}
			}
			{
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_20 = __this->___m_jobject;
				intptr_t L_21;
				L_21 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_20, NULL);
				intptr_t L_22 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_23 = V_0;
				int32_t L_24;
				L_24 = AndroidJNISafe_CallIntMethod_m60318205A7EAD0C5CC0643106A7044F1563DCC0E(L_21, L_22, L_23, NULL);
				V_3 = L_24;
				goto IL_03ea;
			}

IL_0090_1:
			{
				goto IL_00cd_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_25 = __this->___m_jobject;
				intptr_t L_26;
				L_26 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_25, NULL);
				intptr_t L_27 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_28 = V_0;
				bool L_29;
				L_29 = AndroidJNISafe_CallBooleanMethod_m2F5824C9EA5D1586C7E555F9F8DE01D84757D972(L_26, L_27, L_28, NULL);
				bool L_30 = L_29;
				int32_t L_31;
				il2cpp_codegen_box_unbox((&L_30), (&L_31), sizeof(int32_t), il2cpp_defaults.boolean_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_31;
				goto IL_03ea;
			}

IL_00cd_1:
			{
				goto IL_0115_1;
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_32 = __this->___m_jobject;
				intptr_t L_33;
				L_33 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_32, NULL);
				intptr_t L_34 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_35 = V_0;
				int8_t L_36;
				L_36 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_33, L_34, L_35, NULL);
				uint8_t L_37 = (il2cpp_codegen_conv<uint8_t,int8_t,int32_t,false,false>(L_36,NULL));
				uint8_t L_38 = L_37;
				int32_t L_39;
				il2cpp_codegen_box_unbox((&L_38), (&L_39), sizeof(int32_t), il2cpp_defaults.byte_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_39;
				goto IL_03ea;
			}

IL_0115_1:
			{
				goto IL_0152_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_40 = __this->___m_jobject;
				intptr_t L_41;
				L_41 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_40, NULL);
				intptr_t L_42 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_43 = V_0;
				int8_t L_44;
				L_44 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_41, L_42, L_43, NULL);
				int8_t L_45 = L_44;
				int32_t L_46;
				il2cpp_codegen_box_unbox((&L_45), (&L_46), sizeof(int32_t), il2cpp_defaults.sbyte_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_46;
				goto IL_03ea;
			}

IL_0152_1:
			{
				goto IL_018f_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_47 = __this->___m_jobject;
				intptr_t L_48;
				L_48 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_47, NULL);
				intptr_t L_49 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_50 = V_0;
				int16_t L_51;
				L_51 = AndroidJNISafe_CallShortMethod_m7C82D811B75161D4567651B0D85E5F7A2ED83A97(L_48, L_49, L_50, NULL);
				int16_t L_52 = L_51;
				int32_t L_53;
				il2cpp_codegen_box_unbox((&L_52), (&L_53), sizeof(int32_t), il2cpp_defaults.int16_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_53;
				goto IL_03ea;
			}

IL_018f_1:
			{
				goto IL_01cc_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_54 = __this->___m_jobject;
				intptr_t L_55;
				L_55 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_54, NULL);
				intptr_t L_56 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_57 = V_0;
				int64_t L_58;
				L_58 = AndroidJNISafe_CallLongMethod_mD04CC840004334A567747BD526F88A813CB833B6(L_55, L_56, L_57, NULL);
				int64_t L_59 = L_58;
				int32_t L_60;
				il2cpp_codegen_box_unbox((&L_59), (&L_60), sizeof(int32_t), il2cpp_defaults.int64_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_60;
				goto IL_03ea;
			}

IL_01cc_1:
			{
				goto IL_0209_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_61 = __this->___m_jobject;
				intptr_t L_62;
				L_62 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_61, NULL);
				intptr_t L_63 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_64 = V_0;
				float L_65;
				L_65 = AndroidJNISafe_CallFloatMethod_m7437E60E0985885D721F1592E4DACF8246F69BBE(L_62, L_63, L_64, NULL);
				float L_66 = L_65;
				int32_t L_67;
				il2cpp_codegen_box_unbox((&L_66), (&L_67), sizeof(int32_t), il2cpp_defaults.single_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_67;
				goto IL_03ea;
			}

IL_0209_1:
			{
				goto IL_0246_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_68 = __this->___m_jobject;
				intptr_t L_69;
				L_69 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_68, NULL);
				intptr_t L_70 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_71 = V_0;
				double L_72;
				L_72 = AndroidJNISafe_CallDoubleMethod_m01B318F7CA4F90C54D689CF0CD84DF312E68CB5E(L_69, L_70, L_71, NULL);
				double L_73 = L_72;
				int32_t L_74;
				il2cpp_codegen_box_unbox((&L_73), (&L_74), sizeof(int32_t), il2cpp_defaults.double_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_74;
				goto IL_03ea;
			}

IL_0246_1:
			{
				goto IL_03d1_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_75 = __this->___m_jobject;
				intptr_t L_76;
				L_76 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_75, NULL);
				intptr_t L_77 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_78 = V_0;
				Il2CppChar L_79;
				L_79 = AndroidJNISafe_CallCharMethod_mB777FAF5E9D1BFF480B7EDD5AA5352F30797E1DD(L_76, L_77, L_78, NULL);
				Il2CppChar L_80 = L_79;
				int32_t L_81;
				il2cpp_codegen_box_unbox((&L_80), (&L_81), sizeof(int32_t), il2cpp_defaults.char_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_81;
				goto IL_03ea;
			}

IL_0286_1:
			{
				goto IL_02be_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_82 = __this->___m_jobject;
				intptr_t L_83;
				L_83 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_82, NULL);
				intptr_t L_84 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_85 = V_0;
				String_t* L_86;
				L_86 = AndroidJNISafe_CallStringMethod_m4E40DA54A224C0C10A8C600CAC1C2C838B69264C(L_83, L_84, L_85, NULL);
				V_3 = ((*(int32_t*)UnBox((RuntimeObject*)L_86, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_03ea;
			}

IL_02be_1:
			{
				goto IL_0319_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_87 = __this->___m_jobject;
				intptr_t L_88;
				L_88 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_87, NULL);
				intptr_t L_89 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_90 = V_0;
				intptr_t L_91;
				L_91 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_88, L_89, L_90, NULL);
				V_4 = L_91;
				intptr_t L_92 = V_4;
				bool L_93;
				L_93 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_92, 0, NULL);
				if (L_93)
				{
					goto IL_0309_1;
				}
			}
			{
				intptr_t L_94 = V_4;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_95 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
				AndroidJavaClass__ctor_mB206D3CB990755BD56E308F61CD43BB9EA4421D0(L_95, L_94, NULL);
				G_B30_0 = ((*(int32_t*)UnBox((RuntimeObject*)L_95, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0313_1;
			}

IL_0309_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(int32_t));
				int32_t L_96 = V_5;
				G_B30_0 = L_96;
			}

IL_0313_1:
			{
				V_3 = G_B30_0;
				goto IL_03ea;
			}

IL_0319_1:
			{
				goto IL_0371_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_97 = __this->___m_jobject;
				intptr_t L_98;
				L_98 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_97, NULL);
				intptr_t L_99 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_100 = V_0;
				intptr_t L_101;
				L_101 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_98, L_99, L_100, NULL);
				V_6 = L_101;
				intptr_t L_102 = V_6;
				bool L_103;
				L_103 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_102, 0, NULL);
				if (L_103)
				{
					goto IL_0364_1;
				}
			}
			{
				intptr_t L_104 = V_6;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_105 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
				AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_105, L_104, NULL);
				G_B35_0 = ((*(int32_t*)UnBox((RuntimeObject*)L_105, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_036e_1;
			}

IL_0364_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(int32_t));
				int32_t L_106 = V_5;
				G_B35_0 = L_106;
			}

IL_036e_1:
			{
				V_3 = G_B35_0;
				goto IL_03ea;
			}

IL_0371_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_107 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.array_class->byval_arg) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_108;
				L_108 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_107, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_109 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				Type_t* L_110;
				L_110 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_109, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_111;
				L_111 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_108, L_110, NULL);
				if (!L_111)
				{
					goto IL_03a6_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_112 = __this->___m_jobject;
				intptr_t L_113;
				L_113 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_112, NULL);
				intptr_t L_114 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_115 = V_0;
				intptr_t L_116;
				L_116 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_113, L_114, L_115, NULL);
				int32_t L_117;
				L_117 = AndroidJavaObject_FromJavaArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC1390BDE8BF42FAA78215DFE076A25F7AEA674D7(L_116, il2cpp_rgctx_method(method->rgctx_data, 2));
				V_3 = L_117;
				goto IL_03ea;
			}

IL_03a6_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_118 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_119;
				L_119 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_118, NULL);
				Type_t* L_120 = L_119;
				if (L_120)
				{
					G_B40_0 = L_120;
					G_B40_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_03bc_1;
				}
				G_B39_0 = L_120;
				G_B39_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
			}
			{
				G_B41_0 = ((String_t*)(NULL));
				G_B41_1 = G_B39_1;
				goto IL_03c1_1;
			}

IL_03bc_1:
			{
				NullCheck((RuntimeObject*)G_B40_0);
				String_t* L_121;
				L_121 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B40_0);
				G_B41_0 = L_121;
				G_B41_1 = G_B40_1;
			}

IL_03c1_1:
			{
				String_t* L_122;
				L_122 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B41_1, G_B41_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_123 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_123, L_122, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_123, method);
			}

IL_03d1_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(int32_t));
				int32_t L_124 = V_5;
				V_3 = L_124;
				goto IL_03ea;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03ea:
	{
		int32_t L_125 = V_3;
		return L_125;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject__Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1BFF486C91846170C07AAF27EF84971FF0596B90_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_0, NULL);
		String_t* L_2 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___1_args;
		intptr_t L_4;
		L_4 = AndroidJNIHelper_GetMethodID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF87CC238DDBB3C90C35846E626548847CC7E319D(L_1, L_2, L_3, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		intptr_t L_5 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___1_args;
		int32_t L_7;
		L_7 = AndroidJavaObject__Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0D60BAB951F2C313123D62CAB81EEA263F2F0750(__this, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJavaObject__Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m4B925872A7B673BC9981AB72E3A229BBE0E1119E_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int64_t V_3 = 0;
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	int64_t V_5 = 0;
	intptr_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	int64_t G_B30_0 = 0;
	int64_t G_B35_0 = 0;
	Type_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	Type_t* G_B39_0 = NULL;
	String_t* G_B39_1 = NULL;
	String_t* G_B41_0 = NULL;
	String_t* G_B41_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___1_args;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0011;
		}
	}

IL_0007:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7));
		goto IL_0027;
	}

IL_0011:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_args;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		V_2 = L_3;
		int32_t L_4 = V_2;
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_4,NULL));
		uint32_t L_6 = sizeof(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225);
		if ((uintptr_t)L_5 * (uintptr_t)L_6 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_7 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_5, (int32_t)L_6));
		int8_t* L_8;
		if (L_7 == 0)
		{
			L_8 = NULL;
		}
		else
		{
			L_8 = (int8_t*)alloca(L_7);
			memset(L_8, 0, L_7);
		}
		int32_t L_9 = V_2;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_inline((&L_10), (void*)L_8, L_9, Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		V_1 = L_10;
	}

IL_0027:
	{
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_11 = V_1;
		V_0 = L_11;
		int32_t L_12;
		L_12 = Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_inline((&V_0), Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		int32_t L_13;
		L_13 = AndroidJNI_PushLocalFrame_m2D8050A3799AEBB4A7E506E6790839EB66932E10(((int32_t)il2cpp_codegen_add(L_12, 1)), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = ___1_args;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_15 = V_0;
		AndroidJNIHelper_CreateJNIArgArray_mD8E0CA2404E31F155EDE1A028EC686C17B17730F(L_14, L_15, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_03de:
			{
				intptr_t L_16;
				L_16 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				return;
			}
		});
		try
		{
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_18;
				L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_19;
				L_19 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_18, NULL);
				if (!L_19)
				{
					goto IL_0286_1;
				}
			}
			{
				goto IL_0090_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_20 = __this->___m_jobject;
				intptr_t L_21;
				L_21 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_20, NULL);
				intptr_t L_22 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_23 = V_0;
				int32_t L_24;
				L_24 = AndroidJNISafe_CallIntMethod_m60318205A7EAD0C5CC0643106A7044F1563DCC0E(L_21, L_22, L_23, NULL);
				int32_t L_25 = L_24;
				int64_t L_26;
				il2cpp_codegen_box_unbox((&L_25), (&L_26), sizeof(int64_t), il2cpp_defaults.int32_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_26;
				goto IL_03ea;
			}

IL_0090_1:
			{
				goto IL_00cd_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_27 = __this->___m_jobject;
				intptr_t L_28;
				L_28 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_27, NULL);
				intptr_t L_29 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_30 = V_0;
				bool L_31;
				L_31 = AndroidJNISafe_CallBooleanMethod_m2F5824C9EA5D1586C7E555F9F8DE01D84757D972(L_28, L_29, L_30, NULL);
				bool L_32 = L_31;
				int64_t L_33;
				il2cpp_codegen_box_unbox((&L_32), (&L_33), sizeof(int64_t), il2cpp_defaults.boolean_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_33;
				goto IL_03ea;
			}

IL_00cd_1:
			{
				goto IL_0115_1;
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_34 = __this->___m_jobject;
				intptr_t L_35;
				L_35 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_34, NULL);
				intptr_t L_36 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_37 = V_0;
				int8_t L_38;
				L_38 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_35, L_36, L_37, NULL);
				uint8_t L_39 = (il2cpp_codegen_conv<uint8_t,int8_t,int32_t,false,false>(L_38,NULL));
				uint8_t L_40 = L_39;
				int64_t L_41;
				il2cpp_codegen_box_unbox((&L_40), (&L_41), sizeof(int64_t), il2cpp_defaults.byte_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_41;
				goto IL_03ea;
			}

IL_0115_1:
			{
				goto IL_0152_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_42 = __this->___m_jobject;
				intptr_t L_43;
				L_43 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_42, NULL);
				intptr_t L_44 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_45 = V_0;
				int8_t L_46;
				L_46 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_43, L_44, L_45, NULL);
				int8_t L_47 = L_46;
				int64_t L_48;
				il2cpp_codegen_box_unbox((&L_47), (&L_48), sizeof(int64_t), il2cpp_defaults.sbyte_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_48;
				goto IL_03ea;
			}

IL_0152_1:
			{
				goto IL_018f_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_49 = __this->___m_jobject;
				intptr_t L_50;
				L_50 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_49, NULL);
				intptr_t L_51 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_52 = V_0;
				int16_t L_53;
				L_53 = AndroidJNISafe_CallShortMethod_m7C82D811B75161D4567651B0D85E5F7A2ED83A97(L_50, L_51, L_52, NULL);
				int16_t L_54 = L_53;
				int64_t L_55;
				il2cpp_codegen_box_unbox((&L_54), (&L_55), sizeof(int64_t), il2cpp_defaults.int16_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_55;
				goto IL_03ea;
			}

IL_018f_1:
			{
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_56 = __this->___m_jobject;
				intptr_t L_57;
				L_57 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_56, NULL);
				intptr_t L_58 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_59 = V_0;
				int64_t L_60;
				L_60 = AndroidJNISafe_CallLongMethod_mD04CC840004334A567747BD526F88A813CB833B6(L_57, L_58, L_59, NULL);
				V_3 = L_60;
				goto IL_03ea;
			}

IL_01cc_1:
			{
				goto IL_0209_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_61 = __this->___m_jobject;
				intptr_t L_62;
				L_62 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_61, NULL);
				intptr_t L_63 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_64 = V_0;
				float L_65;
				L_65 = AndroidJNISafe_CallFloatMethod_m7437E60E0985885D721F1592E4DACF8246F69BBE(L_62, L_63, L_64, NULL);
				float L_66 = L_65;
				int64_t L_67;
				il2cpp_codegen_box_unbox((&L_66), (&L_67), sizeof(int64_t), il2cpp_defaults.single_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_67;
				goto IL_03ea;
			}

IL_0209_1:
			{
				goto IL_0246_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_68 = __this->___m_jobject;
				intptr_t L_69;
				L_69 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_68, NULL);
				intptr_t L_70 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_71 = V_0;
				double L_72;
				L_72 = AndroidJNISafe_CallDoubleMethod_m01B318F7CA4F90C54D689CF0CD84DF312E68CB5E(L_69, L_70, L_71, NULL);
				double L_73 = L_72;
				int64_t L_74;
				il2cpp_codegen_box_unbox((&L_73), (&L_74), sizeof(int64_t), il2cpp_defaults.double_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_74;
				goto IL_03ea;
			}

IL_0246_1:
			{
				goto IL_03d1_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_75 = __this->___m_jobject;
				intptr_t L_76;
				L_76 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_75, NULL);
				intptr_t L_77 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_78 = V_0;
				Il2CppChar L_79;
				L_79 = AndroidJNISafe_CallCharMethod_mB777FAF5E9D1BFF480B7EDD5AA5352F30797E1DD(L_76, L_77, L_78, NULL);
				Il2CppChar L_80 = L_79;
				int64_t L_81;
				il2cpp_codegen_box_unbox((&L_80), (&L_81), sizeof(int64_t), il2cpp_defaults.char_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_81;
				goto IL_03ea;
			}

IL_0286_1:
			{
				goto IL_02be_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_82 = __this->___m_jobject;
				intptr_t L_83;
				L_83 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_82, NULL);
				intptr_t L_84 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_85 = V_0;
				String_t* L_86;
				L_86 = AndroidJNISafe_CallStringMethod_m4E40DA54A224C0C10A8C600CAC1C2C838B69264C(L_83, L_84, L_85, NULL);
				V_3 = ((*(int64_t*)UnBox((RuntimeObject*)L_86, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_03ea;
			}

IL_02be_1:
			{
				goto IL_0319_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_87 = __this->___m_jobject;
				intptr_t L_88;
				L_88 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_87, NULL);
				intptr_t L_89 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_90 = V_0;
				intptr_t L_91;
				L_91 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_88, L_89, L_90, NULL);
				V_4 = L_91;
				intptr_t L_92 = V_4;
				bool L_93;
				L_93 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_92, 0, NULL);
				if (L_93)
				{
					goto IL_0309_1;
				}
			}
			{
				intptr_t L_94 = V_4;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_95 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
				AndroidJavaClass__ctor_mB206D3CB990755BD56E308F61CD43BB9EA4421D0(L_95, L_94, NULL);
				G_B30_0 = ((*(int64_t*)UnBox((RuntimeObject*)L_95, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0313_1;
			}

IL_0309_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(int64_t));
				int64_t L_96 = V_5;
				G_B30_0 = L_96;
			}

IL_0313_1:
			{
				V_3 = G_B30_0;
				goto IL_03ea;
			}

IL_0319_1:
			{
				goto IL_0371_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_97 = __this->___m_jobject;
				intptr_t L_98;
				L_98 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_97, NULL);
				intptr_t L_99 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_100 = V_0;
				intptr_t L_101;
				L_101 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_98, L_99, L_100, NULL);
				V_6 = L_101;
				intptr_t L_102 = V_6;
				bool L_103;
				L_103 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_102, 0, NULL);
				if (L_103)
				{
					goto IL_0364_1;
				}
			}
			{
				intptr_t L_104 = V_6;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_105 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
				AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_105, L_104, NULL);
				G_B35_0 = ((*(int64_t*)UnBox((RuntimeObject*)L_105, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_036e_1;
			}

IL_0364_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(int64_t));
				int64_t L_106 = V_5;
				G_B35_0 = L_106;
			}

IL_036e_1:
			{
				V_3 = G_B35_0;
				goto IL_03ea;
			}

IL_0371_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_107 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.array_class->byval_arg) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_108;
				L_108 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_107, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_109 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				Type_t* L_110;
				L_110 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_109, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_111;
				L_111 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_108, L_110, NULL);
				if (!L_111)
				{
					goto IL_03a6_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_112 = __this->___m_jobject;
				intptr_t L_113;
				L_113 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_112, NULL);
				intptr_t L_114 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_115 = V_0;
				intptr_t L_116;
				L_116 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_113, L_114, L_115, NULL);
				int64_t L_117;
				L_117 = AndroidJavaObject_FromJavaArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m6A8E0C87ADD6FC1CA3F936C0CC0AC4AB379A8422(L_116, il2cpp_rgctx_method(method->rgctx_data, 2));
				V_3 = L_117;
				goto IL_03ea;
			}

IL_03a6_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_118 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_119;
				L_119 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_118, NULL);
				Type_t* L_120 = L_119;
				if (L_120)
				{
					G_B40_0 = L_120;
					G_B40_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_03bc_1;
				}
				G_B39_0 = L_120;
				G_B39_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
			}
			{
				G_B41_0 = ((String_t*)(NULL));
				G_B41_1 = G_B39_1;
				goto IL_03c1_1;
			}

IL_03bc_1:
			{
				NullCheck((RuntimeObject*)G_B40_0);
				String_t* L_121;
				L_121 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B40_0);
				G_B41_0 = L_121;
				G_B41_1 = G_B40_1;
			}

IL_03c1_1:
			{
				String_t* L_122;
				L_122 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B41_1, G_B41_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_123 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_123, L_122, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_123, method);
			}

IL_03d1_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(int64_t));
				int64_t L_124 = V_5;
				V_3 = L_124;
				goto IL_03ea;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03ea:
	{
		int64_t L_125 = V_3;
		return L_125;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJavaObject__Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mC6DBECDD44973120E0A56068ABE886D9A7016F5C_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_0, NULL);
		String_t* L_2 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___1_args;
		intptr_t L_4;
		L_4 = AndroidJNIHelper_GetMethodID_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m9665934CC08FD80EB16882C4EA6FDBC5D9C3A175(L_1, L_2, L_3, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		intptr_t L_5 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___1_args;
		int64_t L_7;
		L_7 = AndroidJavaObject__Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m4B925872A7B673BC9981AB72E3A229BBE0E1119E(__this, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJavaObject__Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA3300F1D8CC0B110426EAE23F5FB7F27FD8AE76B_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int8_t V_3 = 0x0;
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	int8_t V_5 = 0x0;
	intptr_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	int8_t G_B30_0 = 0x0;
	int8_t G_B35_0 = 0x0;
	Type_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	Type_t* G_B39_0 = NULL;
	String_t* G_B39_1 = NULL;
	String_t* G_B41_0 = NULL;
	String_t* G_B41_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___1_args;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0011;
		}
	}

IL_0007:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7));
		goto IL_0027;
	}

IL_0011:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_args;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		V_2 = L_3;
		int32_t L_4 = V_2;
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_4,NULL));
		uint32_t L_6 = sizeof(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225);
		if ((uintptr_t)L_5 * (uintptr_t)L_6 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_7 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_5, (int32_t)L_6));
		int8_t* L_8;
		if (L_7 == 0)
		{
			L_8 = NULL;
		}
		else
		{
			L_8 = (int8_t*)alloca(L_7);
			memset(L_8, 0, L_7);
		}
		int32_t L_9 = V_2;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_inline((&L_10), (void*)L_8, L_9, Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		V_1 = L_10;
	}

IL_0027:
	{
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_11 = V_1;
		V_0 = L_11;
		int32_t L_12;
		L_12 = Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_inline((&V_0), Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		int32_t L_13;
		L_13 = AndroidJNI_PushLocalFrame_m2D8050A3799AEBB4A7E506E6790839EB66932E10(((int32_t)il2cpp_codegen_add(L_12, 1)), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = ___1_args;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_15 = V_0;
		AndroidJNIHelper_CreateJNIArgArray_mD8E0CA2404E31F155EDE1A028EC686C17B17730F(L_14, L_15, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_03de:
			{
				intptr_t L_16;
				L_16 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				return;
			}
		});
		try
		{
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_18;
				L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_19;
				L_19 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_18, NULL);
				if (!L_19)
				{
					goto IL_0286_1;
				}
			}
			{
				goto IL_0090_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_20 = __this->___m_jobject;
				intptr_t L_21;
				L_21 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_20, NULL);
				intptr_t L_22 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_23 = V_0;
				int32_t L_24;
				L_24 = AndroidJNISafe_CallIntMethod_m60318205A7EAD0C5CC0643106A7044F1563DCC0E(L_21, L_22, L_23, NULL);
				int32_t L_25 = L_24;
				int8_t L_26;
				il2cpp_codegen_box_unbox((&L_25), (&L_26), sizeof(int8_t), il2cpp_defaults.int32_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_26;
				goto IL_03ea;
			}

IL_0090_1:
			{
				goto IL_00cd_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_27 = __this->___m_jobject;
				intptr_t L_28;
				L_28 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_27, NULL);
				intptr_t L_29 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_30 = V_0;
				bool L_31;
				L_31 = AndroidJNISafe_CallBooleanMethod_m2F5824C9EA5D1586C7E555F9F8DE01D84757D972(L_28, L_29, L_30, NULL);
				bool L_32 = L_31;
				int8_t L_33;
				il2cpp_codegen_box_unbox((&L_32), (&L_33), sizeof(int8_t), il2cpp_defaults.boolean_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_33;
				goto IL_03ea;
			}

IL_00cd_1:
			{
				goto IL_0115_1;
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_34 = __this->___m_jobject;
				intptr_t L_35;
				L_35 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_34, NULL);
				intptr_t L_36 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_37 = V_0;
				int8_t L_38;
				L_38 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_35, L_36, L_37, NULL);
				uint8_t L_39 = (il2cpp_codegen_conv<uint8_t,int8_t,int32_t,false,false>(L_38,NULL));
				uint8_t L_40 = L_39;
				int8_t L_41;
				il2cpp_codegen_box_unbox((&L_40), (&L_41), sizeof(int8_t), il2cpp_defaults.byte_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_41;
				goto IL_03ea;
			}

IL_0115_1:
			{
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_42 = __this->___m_jobject;
				intptr_t L_43;
				L_43 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_42, NULL);
				intptr_t L_44 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_45 = V_0;
				int8_t L_46;
				L_46 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_43, L_44, L_45, NULL);
				V_3 = L_46;
				goto IL_03ea;
			}

IL_0152_1:
			{
				goto IL_018f_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_47 = __this->___m_jobject;
				intptr_t L_48;
				L_48 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_47, NULL);
				intptr_t L_49 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_50 = V_0;
				int16_t L_51;
				L_51 = AndroidJNISafe_CallShortMethod_m7C82D811B75161D4567651B0D85E5F7A2ED83A97(L_48, L_49, L_50, NULL);
				int16_t L_52 = L_51;
				int8_t L_53;
				il2cpp_codegen_box_unbox((&L_52), (&L_53), sizeof(int8_t), il2cpp_defaults.int16_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_53;
				goto IL_03ea;
			}

IL_018f_1:
			{
				goto IL_01cc_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_54 = __this->___m_jobject;
				intptr_t L_55;
				L_55 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_54, NULL);
				intptr_t L_56 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_57 = V_0;
				int64_t L_58;
				L_58 = AndroidJNISafe_CallLongMethod_mD04CC840004334A567747BD526F88A813CB833B6(L_55, L_56, L_57, NULL);
				int64_t L_59 = L_58;
				int8_t L_60;
				il2cpp_codegen_box_unbox((&L_59), (&L_60), sizeof(int8_t), il2cpp_defaults.int64_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_60;
				goto IL_03ea;
			}

IL_01cc_1:
			{
				goto IL_0209_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_61 = __this->___m_jobject;
				intptr_t L_62;
				L_62 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_61, NULL);
				intptr_t L_63 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_64 = V_0;
				float L_65;
				L_65 = AndroidJNISafe_CallFloatMethod_m7437E60E0985885D721F1592E4DACF8246F69BBE(L_62, L_63, L_64, NULL);
				float L_66 = L_65;
				int8_t L_67;
				il2cpp_codegen_box_unbox((&L_66), (&L_67), sizeof(int8_t), il2cpp_defaults.single_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_67;
				goto IL_03ea;
			}

IL_0209_1:
			{
				goto IL_0246_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_68 = __this->___m_jobject;
				intptr_t L_69;
				L_69 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_68, NULL);
				intptr_t L_70 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_71 = V_0;
				double L_72;
				L_72 = AndroidJNISafe_CallDoubleMethod_m01B318F7CA4F90C54D689CF0CD84DF312E68CB5E(L_69, L_70, L_71, NULL);
				double L_73 = L_72;
				int8_t L_74;
				il2cpp_codegen_box_unbox((&L_73), (&L_74), sizeof(int8_t), il2cpp_defaults.double_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_74;
				goto IL_03ea;
			}

IL_0246_1:
			{
				goto IL_03d1_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_75 = __this->___m_jobject;
				intptr_t L_76;
				L_76 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_75, NULL);
				intptr_t L_77 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_78 = V_0;
				Il2CppChar L_79;
				L_79 = AndroidJNISafe_CallCharMethod_mB777FAF5E9D1BFF480B7EDD5AA5352F30797E1DD(L_76, L_77, L_78, NULL);
				Il2CppChar L_80 = L_79;
				int8_t L_81;
				il2cpp_codegen_box_unbox((&L_80), (&L_81), sizeof(int8_t), il2cpp_defaults.char_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_81;
				goto IL_03ea;
			}

IL_0286_1:
			{
				goto IL_02be_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_82 = __this->___m_jobject;
				intptr_t L_83;
				L_83 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_82, NULL);
				intptr_t L_84 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_85 = V_0;
				String_t* L_86;
				L_86 = AndroidJNISafe_CallStringMethod_m4E40DA54A224C0C10A8C600CAC1C2C838B69264C(L_83, L_84, L_85, NULL);
				V_3 = ((*(int8_t*)UnBox((RuntimeObject*)L_86, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_03ea;
			}

IL_02be_1:
			{
				goto IL_0319_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_87 = __this->___m_jobject;
				intptr_t L_88;
				L_88 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_87, NULL);
				intptr_t L_89 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_90 = V_0;
				intptr_t L_91;
				L_91 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_88, L_89, L_90, NULL);
				V_4 = L_91;
				intptr_t L_92 = V_4;
				bool L_93;
				L_93 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_92, 0, NULL);
				if (L_93)
				{
					goto IL_0309_1;
				}
			}
			{
				intptr_t L_94 = V_4;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_95 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
				AndroidJavaClass__ctor_mB206D3CB990755BD56E308F61CD43BB9EA4421D0(L_95, L_94, NULL);
				G_B30_0 = ((*(int8_t*)UnBox((RuntimeObject*)L_95, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0313_1;
			}

IL_0309_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(int8_t));
				int8_t L_96 = V_5;
				G_B30_0 = L_96;
			}

IL_0313_1:
			{
				V_3 = G_B30_0;
				goto IL_03ea;
			}

IL_0319_1:
			{
				goto IL_0371_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_97 = __this->___m_jobject;
				intptr_t L_98;
				L_98 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_97, NULL);
				intptr_t L_99 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_100 = V_0;
				intptr_t L_101;
				L_101 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_98, L_99, L_100, NULL);
				V_6 = L_101;
				intptr_t L_102 = V_6;
				bool L_103;
				L_103 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_102, 0, NULL);
				if (L_103)
				{
					goto IL_0364_1;
				}
			}
			{
				intptr_t L_104 = V_6;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_105 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
				AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_105, L_104, NULL);
				G_B35_0 = ((*(int8_t*)UnBox((RuntimeObject*)L_105, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_036e_1;
			}

IL_0364_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(int8_t));
				int8_t L_106 = V_5;
				G_B35_0 = L_106;
			}

IL_036e_1:
			{
				V_3 = G_B35_0;
				goto IL_03ea;
			}

IL_0371_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_107 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.array_class->byval_arg) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_108;
				L_108 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_107, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_109 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				Type_t* L_110;
				L_110 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_109, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_111;
				L_111 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_108, L_110, NULL);
				if (!L_111)
				{
					goto IL_03a6_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_112 = __this->___m_jobject;
				intptr_t L_113;
				L_113 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_112, NULL);
				intptr_t L_114 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_115 = V_0;
				intptr_t L_116;
				L_116 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_113, L_114, L_115, NULL);
				int8_t L_117;
				L_117 = AndroidJavaObject_FromJavaArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mB474FE99696A6DEB269E0F1C3C7DA32CD8854410(L_116, il2cpp_rgctx_method(method->rgctx_data, 2));
				V_3 = L_117;
				goto IL_03ea;
			}

IL_03a6_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_118 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_119;
				L_119 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_118, NULL);
				Type_t* L_120 = L_119;
				if (L_120)
				{
					G_B40_0 = L_120;
					G_B40_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_03bc_1;
				}
				G_B39_0 = L_120;
				G_B39_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
			}
			{
				G_B41_0 = ((String_t*)(NULL));
				G_B41_1 = G_B39_1;
				goto IL_03c1_1;
			}

IL_03bc_1:
			{
				NullCheck((RuntimeObject*)G_B40_0);
				String_t* L_121;
				L_121 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B40_0);
				G_B41_0 = L_121;
				G_B41_1 = G_B40_1;
			}

IL_03c1_1:
			{
				String_t* L_122;
				L_122 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B41_1, G_B41_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_123 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_123, L_122, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_123, method);
			}

IL_03d1_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(int8_t));
				int8_t L_124 = V_5;
				V_3 = L_124;
				goto IL_03ea;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03ea:
	{
		int8_t L_125 = V_3;
		return L_125;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJavaObject__Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mAE2F0D59E0CE54D36BB86C53218704FA72DC0350_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_0, NULL);
		String_t* L_2 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___1_args;
		intptr_t L_4;
		L_4 = AndroidJNIHelper_GetMethodID_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEF6ACD1C6C5237E0446DB9DBDAC40BA2660849BB(L_1, L_2, L_3, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		intptr_t L_5 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___1_args;
		int8_t L_7;
		L_7 = AndroidJavaObject__Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA3300F1D8CC0B110426EAE23F5FB7F27FD8AE76B(__this, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJavaObject__Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8EDEAF89FE2C5B65277B0FC57FAD4FA9253E1140_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	intptr_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	float G_B30_0 = 0.0f;
	float G_B35_0 = 0.0f;
	Type_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	Type_t* G_B39_0 = NULL;
	String_t* G_B39_1 = NULL;
	String_t* G_B41_0 = NULL;
	String_t* G_B41_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___1_args;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0011;
		}
	}

IL_0007:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7));
		goto IL_0027;
	}

IL_0011:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_args;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		V_2 = L_3;
		int32_t L_4 = V_2;
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_4,NULL));
		uint32_t L_6 = sizeof(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225);
		if ((uintptr_t)L_5 * (uintptr_t)L_6 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_7 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_5, (int32_t)L_6));
		int8_t* L_8;
		if (L_7 == 0)
		{
			L_8 = NULL;
		}
		else
		{
			L_8 = (int8_t*)alloca(L_7);
			memset(L_8, 0, L_7);
		}
		int32_t L_9 = V_2;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_inline((&L_10), (void*)L_8, L_9, Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		V_1 = L_10;
	}

IL_0027:
	{
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_11 = V_1;
		V_0 = L_11;
		int32_t L_12;
		L_12 = Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_inline((&V_0), Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		int32_t L_13;
		L_13 = AndroidJNI_PushLocalFrame_m2D8050A3799AEBB4A7E506E6790839EB66932E10(((int32_t)il2cpp_codegen_add(L_12, 1)), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = ___1_args;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_15 = V_0;
		AndroidJNIHelper_CreateJNIArgArray_mD8E0CA2404E31F155EDE1A028EC686C17B17730F(L_14, L_15, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_03de:
			{
				intptr_t L_16;
				L_16 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				return;
			}
		});
		try
		{
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_18;
				L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_19;
				L_19 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_18, NULL);
				if (!L_19)
				{
					goto IL_0286_1;
				}
			}
			{
				goto IL_0090_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_20 = __this->___m_jobject;
				intptr_t L_21;
				L_21 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_20, NULL);
				intptr_t L_22 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_23 = V_0;
				int32_t L_24;
				L_24 = AndroidJNISafe_CallIntMethod_m60318205A7EAD0C5CC0643106A7044F1563DCC0E(L_21, L_22, L_23, NULL);
				int32_t L_25 = L_24;
				float L_26;
				il2cpp_codegen_box_unbox((&L_25), (&L_26), sizeof(float), il2cpp_defaults.int32_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_26;
				goto IL_03ea;
			}

IL_0090_1:
			{
				goto IL_00cd_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_27 = __this->___m_jobject;
				intptr_t L_28;
				L_28 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_27, NULL);
				intptr_t L_29 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_30 = V_0;
				bool L_31;
				L_31 = AndroidJNISafe_CallBooleanMethod_m2F5824C9EA5D1586C7E555F9F8DE01D84757D972(L_28, L_29, L_30, NULL);
				bool L_32 = L_31;
				float L_33;
				il2cpp_codegen_box_unbox((&L_32), (&L_33), sizeof(float), il2cpp_defaults.boolean_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_33;
				goto IL_03ea;
			}

IL_00cd_1:
			{
				goto IL_0115_1;
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_34 = __this->___m_jobject;
				intptr_t L_35;
				L_35 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_34, NULL);
				intptr_t L_36 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_37 = V_0;
				int8_t L_38;
				L_38 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_35, L_36, L_37, NULL);
				uint8_t L_39 = (il2cpp_codegen_conv<uint8_t,int8_t,int32_t,false,false>(L_38,NULL));
				uint8_t L_40 = L_39;
				float L_41;
				il2cpp_codegen_box_unbox((&L_40), (&L_41), sizeof(float), il2cpp_defaults.byte_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_41;
				goto IL_03ea;
			}

IL_0115_1:
			{
				goto IL_0152_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_42 = __this->___m_jobject;
				intptr_t L_43;
				L_43 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_42, NULL);
				intptr_t L_44 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_45 = V_0;
				int8_t L_46;
				L_46 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_43, L_44, L_45, NULL);
				int8_t L_47 = L_46;
				float L_48;
				il2cpp_codegen_box_unbox((&L_47), (&L_48), sizeof(float), il2cpp_defaults.sbyte_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_48;
				goto IL_03ea;
			}

IL_0152_1:
			{
				goto IL_018f_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_49 = __this->___m_jobject;
				intptr_t L_50;
				L_50 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_49, NULL);
				intptr_t L_51 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_52 = V_0;
				int16_t L_53;
				L_53 = AndroidJNISafe_CallShortMethod_m7C82D811B75161D4567651B0D85E5F7A2ED83A97(L_50, L_51, L_52, NULL);
				int16_t L_54 = L_53;
				float L_55;
				il2cpp_codegen_box_unbox((&L_54), (&L_55), sizeof(float), il2cpp_defaults.int16_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_55;
				goto IL_03ea;
			}

IL_018f_1:
			{
				goto IL_01cc_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_56 = __this->___m_jobject;
				intptr_t L_57;
				L_57 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_56, NULL);
				intptr_t L_58 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_59 = V_0;
				int64_t L_60;
				L_60 = AndroidJNISafe_CallLongMethod_mD04CC840004334A567747BD526F88A813CB833B6(L_57, L_58, L_59, NULL);
				int64_t L_61 = L_60;
				float L_62;
				il2cpp_codegen_box_unbox((&L_61), (&L_62), sizeof(float), il2cpp_defaults.int64_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_62;
				goto IL_03ea;
			}

IL_01cc_1:
			{
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_63 = __this->___m_jobject;
				intptr_t L_64;
				L_64 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_63, NULL);
				intptr_t L_65 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_66 = V_0;
				float L_67;
				L_67 = AndroidJNISafe_CallFloatMethod_m7437E60E0985885D721F1592E4DACF8246F69BBE(L_64, L_65, L_66, NULL);
				V_3 = L_67;
				goto IL_03ea;
			}

IL_0209_1:
			{
				goto IL_0246_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_68 = __this->___m_jobject;
				intptr_t L_69;
				L_69 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_68, NULL);
				intptr_t L_70 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_71 = V_0;
				double L_72;
				L_72 = AndroidJNISafe_CallDoubleMethod_m01B318F7CA4F90C54D689CF0CD84DF312E68CB5E(L_69, L_70, L_71, NULL);
				double L_73 = L_72;
				float L_74;
				il2cpp_codegen_box_unbox((&L_73), (&L_74), sizeof(float), il2cpp_defaults.double_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_74;
				goto IL_03ea;
			}

IL_0246_1:
			{
				goto IL_03d1_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_75 = __this->___m_jobject;
				intptr_t L_76;
				L_76 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_75, NULL);
				intptr_t L_77 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_78 = V_0;
				Il2CppChar L_79;
				L_79 = AndroidJNISafe_CallCharMethod_mB777FAF5E9D1BFF480B7EDD5AA5352F30797E1DD(L_76, L_77, L_78, NULL);
				Il2CppChar L_80 = L_79;
				float L_81;
				il2cpp_codegen_box_unbox((&L_80), (&L_81), sizeof(float), il2cpp_defaults.char_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_81;
				goto IL_03ea;
			}

IL_0286_1:
			{
				goto IL_02be_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_82 = __this->___m_jobject;
				intptr_t L_83;
				L_83 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_82, NULL);
				intptr_t L_84 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_85 = V_0;
				String_t* L_86;
				L_86 = AndroidJNISafe_CallStringMethod_m4E40DA54A224C0C10A8C600CAC1C2C838B69264C(L_83, L_84, L_85, NULL);
				V_3 = ((*(float*)UnBox((RuntimeObject*)L_86, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_03ea;
			}

IL_02be_1:
			{
				goto IL_0319_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_87 = __this->___m_jobject;
				intptr_t L_88;
				L_88 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_87, NULL);
				intptr_t L_89 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_90 = V_0;
				intptr_t L_91;
				L_91 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_88, L_89, L_90, NULL);
				V_4 = L_91;
				intptr_t L_92 = V_4;
				bool L_93;
				L_93 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_92, 0, NULL);
				if (L_93)
				{
					goto IL_0309_1;
				}
			}
			{
				intptr_t L_94 = V_4;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_95 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
				AndroidJavaClass__ctor_mB206D3CB990755BD56E308F61CD43BB9EA4421D0(L_95, L_94, NULL);
				G_B30_0 = ((*(float*)UnBox((RuntimeObject*)L_95, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0313_1;
			}

IL_0309_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(float));
				float L_96 = V_5;
				G_B30_0 = L_96;
			}

IL_0313_1:
			{
				V_3 = G_B30_0;
				goto IL_03ea;
			}

IL_0319_1:
			{
				goto IL_0371_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_97 = __this->___m_jobject;
				intptr_t L_98;
				L_98 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_97, NULL);
				intptr_t L_99 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_100 = V_0;
				intptr_t L_101;
				L_101 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_98, L_99, L_100, NULL);
				V_6 = L_101;
				intptr_t L_102 = V_6;
				bool L_103;
				L_103 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_102, 0, NULL);
				if (L_103)
				{
					goto IL_0364_1;
				}
			}
			{
				intptr_t L_104 = V_6;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_105 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
				AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_105, L_104, NULL);
				G_B35_0 = ((*(float*)UnBox((RuntimeObject*)L_105, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_036e_1;
			}

IL_0364_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(float));
				float L_106 = V_5;
				G_B35_0 = L_106;
			}

IL_036e_1:
			{
				V_3 = G_B35_0;
				goto IL_03ea;
			}

IL_0371_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_107 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.array_class->byval_arg) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_108;
				L_108 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_107, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_109 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				Type_t* L_110;
				L_110 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_109, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_111;
				L_111 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_108, L_110, NULL);
				if (!L_111)
				{
					goto IL_03a6_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_112 = __this->___m_jobject;
				intptr_t L_113;
				L_113 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_112, NULL);
				intptr_t L_114 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_115 = V_0;
				intptr_t L_116;
				L_116 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_113, L_114, L_115, NULL);
				float L_117;
				L_117 = AndroidJavaObject_FromJavaArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mD5A794B10305822230E288BE2D72329A6EE0C8A4(L_116, il2cpp_rgctx_method(method->rgctx_data, 2));
				V_3 = L_117;
				goto IL_03ea;
			}

IL_03a6_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_118 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_119;
				L_119 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_118, NULL);
				Type_t* L_120 = L_119;
				if (L_120)
				{
					G_B40_0 = L_120;
					G_B40_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_03bc_1;
				}
				G_B39_0 = L_120;
				G_B39_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
			}
			{
				G_B41_0 = ((String_t*)(NULL));
				G_B41_1 = G_B39_1;
				goto IL_03c1_1;
			}

IL_03bc_1:
			{
				NullCheck((RuntimeObject*)G_B40_0);
				String_t* L_121;
				L_121 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B40_0);
				G_B41_0 = L_121;
				G_B41_1 = G_B40_1;
			}

IL_03c1_1:
			{
				String_t* L_122;
				L_122 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B41_1, G_B41_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_123 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_123, L_122, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_123, method);
			}

IL_03d1_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(float));
				float L_124 = V_5;
				V_3 = L_124;
				goto IL_03ea;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03ea:
	{
		float L_125 = V_3;
		return L_125;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJavaObject__Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m71549B5031FEE0FBB78A9CE02EDADD14DBFFB56D_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_0, NULL);
		String_t* L_2 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___1_args;
		intptr_t L_4;
		L_4 = AndroidJNIHelper_GetMethodID_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA3FFDC6948922BEFC787A297D5483BA277EEFF0C(L_1, L_2, L_3, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		intptr_t L_5 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___1_args;
		float L_7;
		L_7 = AndroidJavaObject__Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8EDEAF89FE2C5B65277B0FC57FAD4FA9253E1140(__this, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* AndroidJavaObject__Call_TisIl2CppSharedGenericObject_m34A45129A0AA339AC2E31492EF928112EDECC197_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Il2CppSharedGenericObject* V_3 = NULL;
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	Il2CppSharedGenericObject* V_5 = NULL;
	intptr_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	Il2CppSharedGenericObject* G_B30_0 = NULL;
	Il2CppSharedGenericObject* G_B35_0 = NULL;
	Type_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	Type_t* G_B39_0 = NULL;
	String_t* G_B39_1 = NULL;
	String_t* G_B41_0 = NULL;
	String_t* G_B41_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___1_args;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0011;
		}
	}

IL_0007:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7));
		goto IL_0027;
	}

IL_0011:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_args;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		V_2 = L_3;
		int32_t L_4 = V_2;
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_4,NULL));
		uint32_t L_6 = sizeof(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225);
		if ((uintptr_t)L_5 * (uintptr_t)L_6 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_7 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_5, (int32_t)L_6));
		int8_t* L_8;
		if (L_7 == 0)
		{
			L_8 = NULL;
		}
		else
		{
			L_8 = (int8_t*)alloca(L_7);
			memset(L_8, 0, L_7);
		}
		int32_t L_9 = V_2;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_inline((&L_10), (void*)L_8, L_9, Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		V_1 = L_10;
	}

IL_0027:
	{
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_11 = V_1;
		V_0 = L_11;
		int32_t L_12;
		L_12 = Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_inline((&V_0), Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		int32_t L_13;
		L_13 = AndroidJNI_PushLocalFrame_m2D8050A3799AEBB4A7E506E6790839EB66932E10(((int32_t)il2cpp_codegen_add(L_12, 1)), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = ___1_args;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_15 = V_0;
		AndroidJNIHelper_CreateJNIArgArray_mD8E0CA2404E31F155EDE1A028EC686C17B17730F(L_14, L_15, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_03de:
			{
				intptr_t L_16;
				L_16 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				return;
			}
		});
		try
		{
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_18;
				L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_19;
				L_19 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_18, NULL);
				if (!L_19)
				{
					goto IL_0286_1;
				}
			}
			{
				goto IL_0090_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_20 = __this->___m_jobject;
				intptr_t L_21;
				L_21 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_20, NULL);
				intptr_t L_22 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_23 = V_0;
				int32_t L_24;
				L_24 = AndroidJNISafe_CallIntMethod_m60318205A7EAD0C5CC0643106A7044F1563DCC0E(L_21, L_22, L_23, NULL);
				int32_t L_25 = L_24;
				RuntimeObject* L_26 = Box(il2cpp_defaults.int32_class, &L_25);
				V_3 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_03ea;
			}

IL_0090_1:
			{
				goto IL_00cd_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_27 = __this->___m_jobject;
				intptr_t L_28;
				L_28 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_27, NULL);
				intptr_t L_29 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_30 = V_0;
				bool L_31;
				L_31 = AndroidJNISafe_CallBooleanMethod_m2F5824C9EA5D1586C7E555F9F8DE01D84757D972(L_28, L_29, L_30, NULL);
				bool L_32 = L_31;
				RuntimeObject* L_33 = Box(il2cpp_defaults.boolean_class, &L_32);
				V_3 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_03ea;
			}

IL_00cd_1:
			{
				goto IL_0115_1;
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_34 = __this->___m_jobject;
				intptr_t L_35;
				L_35 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_34, NULL);
				intptr_t L_36 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_37 = V_0;
				int8_t L_38;
				L_38 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_35, L_36, L_37, NULL);
				uint8_t L_39 = (il2cpp_codegen_conv<uint8_t,int8_t,int32_t,false,false>(L_38,NULL));
				uint8_t L_40 = L_39;
				RuntimeObject* L_41 = Box(il2cpp_defaults.byte_class, &L_40);
				V_3 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_41, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_03ea;
			}

IL_0115_1:
			{
				goto IL_0152_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_42 = __this->___m_jobject;
				intptr_t L_43;
				L_43 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_42, NULL);
				intptr_t L_44 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_45 = V_0;
				int8_t L_46;
				L_46 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_43, L_44, L_45, NULL);
				int8_t L_47 = L_46;
				RuntimeObject* L_48 = Box(il2cpp_defaults.sbyte_class, &L_47);
				V_3 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_48, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_03ea;
			}

IL_0152_1:
			{
				goto IL_018f_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_49 = __this->___m_jobject;
				intptr_t L_50;
				L_50 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_49, NULL);
				intptr_t L_51 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_52 = V_0;
				int16_t L_53;
				L_53 = AndroidJNISafe_CallShortMethod_m7C82D811B75161D4567651B0D85E5F7A2ED83A97(L_50, L_51, L_52, NULL);
				int16_t L_54 = L_53;
				RuntimeObject* L_55 = Box(il2cpp_defaults.int16_class, &L_54);
				V_3 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_55, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_03ea;
			}

IL_018f_1:
			{
				goto IL_01cc_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_56 = __this->___m_jobject;
				intptr_t L_57;
				L_57 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_56, NULL);
				intptr_t L_58 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_59 = V_0;
				int64_t L_60;
				L_60 = AndroidJNISafe_CallLongMethod_mD04CC840004334A567747BD526F88A813CB833B6(L_57, L_58, L_59, NULL);
				int64_t L_61 = L_60;
				RuntimeObject* L_62 = Box(il2cpp_defaults.int64_class, &L_61);
				V_3 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_62, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_03ea;
			}

IL_01cc_1:
			{
				goto IL_0209_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_63 = __this->___m_jobject;
				intptr_t L_64;
				L_64 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_63, NULL);
				intptr_t L_65 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_66 = V_0;
				float L_67;
				L_67 = AndroidJNISafe_CallFloatMethod_m7437E60E0985885D721F1592E4DACF8246F69BBE(L_64, L_65, L_66, NULL);
				float L_68 = L_67;
				RuntimeObject* L_69 = Box(il2cpp_defaults.single_class, &L_68);
				V_3 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_69, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_03ea;
			}

IL_0209_1:
			{
				goto IL_0246_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_70 = __this->___m_jobject;
				intptr_t L_71;
				L_71 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_70, NULL);
				intptr_t L_72 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_73 = V_0;
				double L_74;
				L_74 = AndroidJNISafe_CallDoubleMethod_m01B318F7CA4F90C54D689CF0CD84DF312E68CB5E(L_71, L_72, L_73, NULL);
				double L_75 = L_74;
				RuntimeObject* L_76 = Box(il2cpp_defaults.double_class, &L_75);
				V_3 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_76, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_03ea;
			}

IL_0246_1:
			{
				goto IL_03d1_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_77 = __this->___m_jobject;
				intptr_t L_78;
				L_78 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_77, NULL);
				intptr_t L_79 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_80 = V_0;
				Il2CppChar L_81;
				L_81 = AndroidJNISafe_CallCharMethod_mB777FAF5E9D1BFF480B7EDD5AA5352F30797E1DD(L_78, L_79, L_80, NULL);
				Il2CppChar L_82 = L_81;
				RuntimeObject* L_83 = Box(il2cpp_defaults.char_class, &L_82);
				V_3 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_83, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_03ea;
			}

IL_0286_1:
			{
				bool L_84 = (il2cpp_defaults.string_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
				if (!L_84)
				{
					goto IL_02be_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_85 = __this->___m_jobject;
				intptr_t L_86;
				L_86 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_85, NULL);
				intptr_t L_87 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_88 = V_0;
				String_t* L_89;
				L_89 = AndroidJNISafe_CallStringMethod_m4E40DA54A224C0C10A8C600CAC1C2C838B69264C(L_86, L_87, L_88, NULL);
				V_3 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_89, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_03ea;
			}

IL_02be_1:
			{
				bool L_90 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
				if (!L_90)
				{
					goto IL_0319_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_91 = __this->___m_jobject;
				intptr_t L_92;
				L_92 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_91, NULL);
				intptr_t L_93 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_94 = V_0;
				intptr_t L_95;
				L_95 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_92, L_93, L_94, NULL);
				V_4 = L_95;
				intptr_t L_96 = V_4;
				bool L_97;
				L_97 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_96, 0, NULL);
				if (L_97)
				{
					goto IL_0309_1;
				}
			}
			{
				intptr_t L_98 = V_4;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_99 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
				AndroidJavaClass__ctor_mB206D3CB990755BD56E308F61CD43BB9EA4421D0(L_99, L_98, NULL);
				G_B30_0 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_99, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_0313_1;
			}

IL_0309_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(Il2CppSharedGenericObject*));
				Il2CppSharedGenericObject* L_100 = V_5;
				G_B30_0 = L_100;
			}

IL_0313_1:
			{
				V_3 = G_B30_0;
				goto IL_03ea;
			}

IL_0319_1:
			{
				bool L_101 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
				if (!L_101)
				{
					goto IL_0371_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_102 = __this->___m_jobject;
				intptr_t L_103;
				L_103 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_102, NULL);
				intptr_t L_104 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_105 = V_0;
				intptr_t L_106;
				L_106 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_103, L_104, L_105, NULL);
				V_6 = L_106;
				intptr_t L_107 = V_6;
				bool L_108;
				L_108 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_107, 0, NULL);
				if (L_108)
				{
					goto IL_0364_1;
				}
			}
			{
				intptr_t L_109 = V_6;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_110 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
				AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_110, L_109, NULL);
				G_B35_0 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_110, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_036e_1;
			}

IL_0364_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(Il2CppSharedGenericObject*));
				Il2CppSharedGenericObject* L_111 = V_5;
				G_B35_0 = L_111;
			}

IL_036e_1:
			{
				V_3 = G_B35_0;
				goto IL_03ea;
			}

IL_0371_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_112 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.array_class->byval_arg) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_113;
				L_113 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_112, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_114 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				Type_t* L_115;
				L_115 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_114, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_116;
				L_116 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_113, L_115, NULL);
				if (!L_116)
				{
					goto IL_03a6_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_117 = __this->___m_jobject;
				intptr_t L_118;
				L_118 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_117, NULL);
				intptr_t L_119 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_120 = V_0;
				intptr_t L_121;
				L_121 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_118, L_119, L_120, NULL);
				Il2CppSharedGenericObject* L_122;
				L_122 = AndroidJavaObject_FromJavaArray_TisIl2CppSharedGenericObject_m22D9898503E929D77563392822CD11A056613AFF(L_121, il2cpp_rgctx_method(method->rgctx_data, 2));
				V_3 = L_122;
				goto IL_03ea;
			}

IL_03a6_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_123 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_124;
				L_124 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_123, NULL);
				Type_t* L_125 = L_124;
				if (L_125)
				{
					G_B40_0 = L_125;
					G_B40_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_03bc_1;
				}
				G_B39_0 = L_125;
				G_B39_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
			}
			{
				G_B41_0 = ((String_t*)(NULL));
				G_B41_1 = G_B39_1;
				goto IL_03c1_1;
			}

IL_03bc_1:
			{
				NullCheck((RuntimeObject*)G_B40_0);
				String_t* L_126;
				L_126 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B40_0);
				G_B41_0 = L_126;
				G_B41_1 = G_B40_1;
			}

IL_03c1_1:
			{
				String_t* L_127;
				L_127 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B41_1, G_B41_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_128 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_128, L_127, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_128, method);
			}

IL_03d1_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(Il2CppSharedGenericObject*));
				Il2CppSharedGenericObject* L_129 = V_5;
				V_3 = L_129;
				goto IL_03ea;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03ea:
	{
		Il2CppSharedGenericObject* L_130 = V_3;
		return L_130;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* AndroidJavaObject__Call_TisIl2CppSharedGenericObject_m39A1E2B88CD5364F83417EFB65F1C296656D2F62_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_0, NULL);
		String_t* L_2 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___1_args;
		intptr_t L_4;
		L_4 = AndroidJNIHelper_GetMethodID_TisIl2CppSharedGenericObject_m95122CB55DFAF463B14CBBA51C2B0811790DB90B(L_1, L_2, L_3, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		intptr_t L_5 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___1_args;
		Il2CppSharedGenericObject* L_7;
		L_7 = AndroidJavaObject__Call_TisIl2CppSharedGenericObject_m34A45129A0AA339AC2E31492EF928112EDECC197(__this, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__Call_TisIl2CppFullySharedGenericAny_m4720E88EC57849809AFC4A771495414E75120D8F_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_27 = alloca(SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
	const Il2CppFullySharedGenericAny L_35 = L_27;
	const Il2CppFullySharedGenericAny L_44 = L_27;
	const Il2CppFullySharedGenericAny L_52 = L_27;
	const Il2CppFullySharedGenericAny L_60 = L_27;
	const Il2CppFullySharedGenericAny L_68 = L_27;
	const Il2CppFullySharedGenericAny L_76 = L_27;
	const Il2CppFullySharedGenericAny L_84 = L_27;
	const Il2CppFullySharedGenericAny L_92 = L_27;
	const Il2CppFullySharedGenericAny L_99 = L_27;
	const Il2CppFullySharedGenericAny L_111 = L_27;
	const Il2CppFullySharedGenericAny L_113 = L_27;
	const Il2CppFullySharedGenericAny L_124 = L_27;
	const Il2CppFullySharedGenericAny L_126 = L_27;
	const Il2CppFullySharedGenericAny L_137 = L_27;
	const Il2CppFullySharedGenericAny L_144 = L_27;
	const Il2CppFullySharedGenericAny L_145 = L_27;
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
	memset(V_3, 0, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	Il2CppFullySharedGenericAny V_5 = alloca(SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
	memset(V_5, 0, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
	intptr_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	Il2CppFullySharedGenericAny G_B30_0 = alloca(SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
	memset(G_B30_0, 0, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
	Il2CppFullySharedGenericAny G_B35_0 = alloca(SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
	memset(G_B35_0, 0, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
	Type_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	Type_t* G_B39_0 = NULL;
	String_t* G_B39_1 = NULL;
	String_t* G_B41_0 = NULL;
	String_t* G_B41_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___1_args;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0011;
		}
	}

IL_0007:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7));
		goto IL_0027;
	}

IL_0011:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_args;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		V_2 = L_3;
		int32_t L_4 = V_2;
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_4,NULL));
		uint32_t L_6 = sizeof(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225);
		if ((uintptr_t)L_5 * (uintptr_t)L_6 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_7 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_5, (int32_t)L_6));
		int8_t* L_8;
		if (L_7 == 0)
		{
			L_8 = NULL;
		}
		else
		{
			L_8 = (int8_t*)alloca(L_7);
			memset(L_8, 0, L_7);
		}
		int32_t L_9 = V_2;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_inline((&L_10), (void*)L_8, L_9, Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		V_1 = L_10;
	}

IL_0027:
	{
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_11 = V_1;
		V_0 = L_11;
		int32_t L_12;
		L_12 = Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_inline((&V_0), Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		int32_t L_13;
		L_13 = AndroidJNI_PushLocalFrame_m2D8050A3799AEBB4A7E506E6790839EB66932E10(((int32_t)il2cpp_codegen_add(L_12, 1)), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = ___1_args;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_15 = V_0;
		AndroidJNIHelper_CreateJNIArgArray_mD8E0CA2404E31F155EDE1A028EC686C17B17730F(L_14, L_15, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_03de:
			{
				intptr_t L_16;
				L_16 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				return;
			}
		});
		try
		{
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_18;
				L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_19;
				L_19 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_18, NULL);
				if (!L_19)
				{
					goto IL_0286_1;
				}
			}
			{
				bool L_20 = (il2cpp_defaults.int32_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
				if (!L_20)
				{
					goto IL_0090_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_21 = __this->___m_jobject;
				intptr_t L_22;
				L_22 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_21, NULL);
				intptr_t L_23 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_24 = V_0;
				int32_t L_25;
				L_25 = AndroidJNISafe_CallIntMethod_m60318205A7EAD0C5CC0643106A7044F1563DCC0E(L_22, L_23, L_24, NULL);
				int32_t L_26 = L_25;
				il2cpp_codegen_box_unbox((&L_26), L_27, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147, il2cpp_defaults.int32_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				il2cpp_codegen_memcpy(V_3, L_27, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				goto IL_03ea;
			}

IL_0090_1:
			{
				bool L_28 = (il2cpp_defaults.boolean_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
				if (!L_28)
				{
					goto IL_00cd_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_29 = __this->___m_jobject;
				intptr_t L_30;
				L_30 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_29, NULL);
				intptr_t L_31 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_32 = V_0;
				bool L_33;
				L_33 = AndroidJNISafe_CallBooleanMethod_m2F5824C9EA5D1586C7E555F9F8DE01D84757D972(L_30, L_31, L_32, NULL);
				bool L_34 = L_33;
				il2cpp_codegen_box_unbox((&L_34), L_35, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147, il2cpp_defaults.boolean_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				il2cpp_codegen_memcpy(V_3, L_35, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				goto IL_03ea;
			}

IL_00cd_1:
			{
				bool L_36 = (il2cpp_defaults.byte_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
				if (!L_36)
				{
					goto IL_0115_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_37 = __this->___m_jobject;
				intptr_t L_38;
				L_38 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_37, NULL);
				intptr_t L_39 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_40 = V_0;
				int8_t L_41;
				L_41 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_38, L_39, L_40, NULL);
				uint8_t L_42 = (il2cpp_codegen_conv<uint8_t,int8_t,int32_t,false,false>(L_41,NULL));
				uint8_t L_43 = L_42;
				il2cpp_codegen_box_unbox((&L_43), L_44, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147, il2cpp_defaults.byte_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				il2cpp_codegen_memcpy(V_3, L_44, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				goto IL_03ea;
			}

IL_0115_1:
			{
				bool L_45 = (il2cpp_defaults.sbyte_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
				if (!L_45)
				{
					goto IL_0152_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_46 = __this->___m_jobject;
				intptr_t L_47;
				L_47 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_46, NULL);
				intptr_t L_48 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_49 = V_0;
				int8_t L_50;
				L_50 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_47, L_48, L_49, NULL);
				int8_t L_51 = L_50;
				il2cpp_codegen_box_unbox((&L_51), L_52, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147, il2cpp_defaults.sbyte_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				il2cpp_codegen_memcpy(V_3, L_52, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				goto IL_03ea;
			}

IL_0152_1:
			{
				bool L_53 = (il2cpp_defaults.int16_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
				if (!L_53)
				{
					goto IL_018f_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_54 = __this->___m_jobject;
				intptr_t L_55;
				L_55 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_54, NULL);
				intptr_t L_56 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_57 = V_0;
				int16_t L_58;
				L_58 = AndroidJNISafe_CallShortMethod_m7C82D811B75161D4567651B0D85E5F7A2ED83A97(L_55, L_56, L_57, NULL);
				int16_t L_59 = L_58;
				il2cpp_codegen_box_unbox((&L_59), L_60, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147, il2cpp_defaults.int16_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				il2cpp_codegen_memcpy(V_3, L_60, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				goto IL_03ea;
			}

IL_018f_1:
			{
				bool L_61 = (il2cpp_defaults.int64_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
				if (!L_61)
				{
					goto IL_01cc_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_62 = __this->___m_jobject;
				intptr_t L_63;
				L_63 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_62, NULL);
				intptr_t L_64 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_65 = V_0;
				int64_t L_66;
				L_66 = AndroidJNISafe_CallLongMethod_mD04CC840004334A567747BD526F88A813CB833B6(L_63, L_64, L_65, NULL);
				int64_t L_67 = L_66;
				il2cpp_codegen_box_unbox((&L_67), L_68, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147, il2cpp_defaults.int64_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				il2cpp_codegen_memcpy(V_3, L_68, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				goto IL_03ea;
			}

IL_01cc_1:
			{
				bool L_69 = (il2cpp_defaults.single_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
				if (!L_69)
				{
					goto IL_0209_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_70 = __this->___m_jobject;
				intptr_t L_71;
				L_71 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_70, NULL);
				intptr_t L_72 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_73 = V_0;
				float L_74;
				L_74 = AndroidJNISafe_CallFloatMethod_m7437E60E0985885D721F1592E4DACF8246F69BBE(L_71, L_72, L_73, NULL);
				float L_75 = L_74;
				il2cpp_codegen_box_unbox((&L_75), L_76, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147, il2cpp_defaults.single_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				il2cpp_codegen_memcpy(V_3, L_76, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				goto IL_03ea;
			}

IL_0209_1:
			{
				bool L_77 = (il2cpp_defaults.double_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
				if (!L_77)
				{
					goto IL_0246_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_78 = __this->___m_jobject;
				intptr_t L_79;
				L_79 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_78, NULL);
				intptr_t L_80 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_81 = V_0;
				double L_82;
				L_82 = AndroidJNISafe_CallDoubleMethod_m01B318F7CA4F90C54D689CF0CD84DF312E68CB5E(L_79, L_80, L_81, NULL);
				double L_83 = L_82;
				il2cpp_codegen_box_unbox((&L_83), L_84, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147, il2cpp_defaults.double_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				il2cpp_codegen_memcpy(V_3, L_84, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				goto IL_03ea;
			}

IL_0246_1:
			{
				bool L_85 = (il2cpp_defaults.char_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
				if (!L_85)
				{
					goto IL_03d1_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_86 = __this->___m_jobject;
				intptr_t L_87;
				L_87 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_86, NULL);
				intptr_t L_88 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_89 = V_0;
				Il2CppChar L_90;
				L_90 = AndroidJNISafe_CallCharMethod_mB777FAF5E9D1BFF480B7EDD5AA5352F30797E1DD(L_87, L_88, L_89, NULL);
				Il2CppChar L_91 = L_90;
				il2cpp_codegen_box_unbox((&L_91), L_92, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147, il2cpp_defaults.char_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				il2cpp_codegen_memcpy(V_3, L_92, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				goto IL_03ea;
			}

IL_0286_1:
			{
				bool L_93 = (il2cpp_defaults.string_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
				if (!L_93)
				{
					goto IL_02be_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_94 = __this->___m_jobject;
				intptr_t L_95;
				L_95 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_94, NULL);
				intptr_t L_96 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_97 = V_0;
				String_t* L_98;
				L_98 = AndroidJNISafe_CallStringMethod_m4E40DA54A224C0C10A8C600CAC1C2C838B69264C(L_95, L_96, L_97, NULL);
				void* L_100 = UnBox_Any((RuntimeObject*)L_98, il2cpp_rgctx_data(method->rgctx_data, 1), L_99);
				il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_100)), SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				goto IL_03ea;
			}

IL_02be_1:
			{
				bool L_101 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
				if (!L_101)
				{
					goto IL_0319_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_102 = __this->___m_jobject;
				intptr_t L_103;
				L_103 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_102, NULL);
				intptr_t L_104 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_105 = V_0;
				intptr_t L_106;
				L_106 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_103, L_104, L_105, NULL);
				V_4 = L_106;
				intptr_t L_107 = V_4;
				bool L_108;
				L_108 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_107, 0, NULL);
				if (L_108)
				{
					goto IL_0309_1;
				}
			}
			{
				intptr_t L_109 = V_4;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_110 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
				AndroidJavaClass__ctor_mB206D3CB990755BD56E308F61CD43BB9EA4421D0(L_110, L_109, NULL);
				void* L_112 = UnBox_Any((RuntimeObject*)L_110, il2cpp_rgctx_data(method->rgctx_data, 1), L_111);
				il2cpp_codegen_memcpy(G_B30_0, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_112)), SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				goto IL_0313_1;
			}

IL_0309_1:
			{
				il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_5, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				il2cpp_codegen_memcpy(L_113, V_5, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				il2cpp_codegen_memcpy(G_B30_0, L_113, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
			}

IL_0313_1:
			{
				il2cpp_codegen_memcpy(V_3, G_B30_0, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				goto IL_03ea;
			}

IL_0319_1:
			{
				bool L_114 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
				if (!L_114)
				{
					goto IL_0371_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_115 = __this->___m_jobject;
				intptr_t L_116;
				L_116 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_115, NULL);
				intptr_t L_117 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_118 = V_0;
				intptr_t L_119;
				L_119 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_116, L_117, L_118, NULL);
				V_6 = L_119;
				intptr_t L_120 = V_6;
				bool L_121;
				L_121 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_120, 0, NULL);
				if (L_121)
				{
					goto IL_0364_1;
				}
			}
			{
				intptr_t L_122 = V_6;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_123 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
				AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_123, L_122, NULL);
				void* L_125 = UnBox_Any((RuntimeObject*)L_123, il2cpp_rgctx_data(method->rgctx_data, 1), L_124);
				il2cpp_codegen_memcpy(G_B35_0, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_125)), SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				goto IL_036e_1;
			}

IL_0364_1:
			{
				il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_5, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				il2cpp_codegen_memcpy(L_126, V_5, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				il2cpp_codegen_memcpy(G_B35_0, L_126, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
			}

IL_036e_1:
			{
				il2cpp_codegen_memcpy(V_3, G_B35_0, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				goto IL_03ea;
			}

IL_0371_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_127 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.array_class->byval_arg) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_128;
				L_128 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_127, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_129 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				Type_t* L_130;
				L_130 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_129, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_131;
				L_131 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_128, L_130, NULL);
				if (!L_131)
				{
					goto IL_03a6_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_132 = __this->___m_jobject;
				intptr_t L_133;
				L_133 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_132, NULL);
				intptr_t L_134 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_135 = V_0;
				intptr_t L_136;
				L_136 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_133, L_134, L_135, NULL);
				InvokerActionInvoker2< intptr_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_136, (Il2CppFullySharedGenericAny*)L_137);
				il2cpp_codegen_memcpy(V_3, L_137, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				goto IL_03ea;
			}

IL_03a6_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_138 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_139;
				L_139 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_138, NULL);
				Type_t* L_140 = L_139;
				if (L_140)
				{
					G_B40_0 = L_140;
					G_B40_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_03bc_1;
				}
				G_B39_0 = L_140;
				G_B39_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
			}
			{
				G_B41_0 = ((String_t*)(NULL));
				G_B41_1 = G_B39_1;
				goto IL_03c1_1;
			}

IL_03bc_1:
			{
				NullCheck((RuntimeObject*)G_B40_0);
				String_t* L_141;
				L_141 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B40_0);
				G_B41_0 = L_141;
				G_B41_1 = G_B40_1;
			}

IL_03c1_1:
			{
				String_t* L_142;
				L_142 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B41_1, G_B41_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_143 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_143, L_142, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_143, method);
			}

IL_03d1_1:
			{
				il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_5, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				il2cpp_codegen_memcpy(L_144, V_5, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				il2cpp_codegen_memcpy(V_3, L_144, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				goto IL_03ea;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03ea:
	{
		il2cpp_codegen_memcpy(L_145, V_3, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
		il2cpp_codegen_memcpy(il2cppRetVal, L_145, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__Call_TisIl2CppFullySharedGenericAny_mA1A866611778FF72A2067F7E30B32913C4EB4904_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_0, NULL);
		String_t* L_2 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___1_args;
		intptr_t L_4;
		L_4 = ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, L_3, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		intptr_t L_5 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___1_args;
		InvokerActionInvoker3< intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_5, L_6, (Il2CppFullySharedGenericAny*)L_7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_7, SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject__CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9EDC162A865064239ADA4058CD2A81B1A2CF6D0F_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	bool V_3 = false;
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	intptr_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool G_B30_0 = false;
	bool G_B35_0 = false;
	Type_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	Type_t* G_B39_0 = NULL;
	String_t* G_B39_1 = NULL;
	String_t* G_B41_0 = NULL;
	String_t* G_B41_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___1_args;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0011;
		}
	}

IL_0007:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7));
		goto IL_0027;
	}

IL_0011:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_args;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		V_2 = L_3;
		int32_t L_4 = V_2;
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_4,NULL));
		uint32_t L_6 = sizeof(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225);
		if ((uintptr_t)L_5 * (uintptr_t)L_6 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_7 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_5, (int32_t)L_6));
		int8_t* L_8;
		if (L_7 == 0)
		{
			L_8 = NULL;
		}
		else
		{
			L_8 = (int8_t*)alloca(L_7);
			memset(L_8, 0, L_7);
		}
		int32_t L_9 = V_2;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_inline((&L_10), (void*)L_8, L_9, Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		V_1 = L_10;
	}

IL_0027:
	{
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_11 = V_1;
		V_0 = L_11;
		int32_t L_12;
		L_12 = Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_inline((&V_0), Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		int32_t L_13;
		L_13 = AndroidJNI_PushLocalFrame_m2D8050A3799AEBB4A7E506E6790839EB66932E10(((int32_t)il2cpp_codegen_add(L_12, 1)), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = ___1_args;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_15 = V_0;
		AndroidJNIHelper_CreateJNIArgArray_mD8E0CA2404E31F155EDE1A028EC686C17B17730F(L_14, L_15, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_03de:
			{
				intptr_t L_16;
				L_16 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				return;
			}
		});
		try
		{
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_18;
				L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_19;
				L_19 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_18, NULL);
				if (!L_19)
				{
					goto IL_0286_1;
				}
			}
			{
				goto IL_0090_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_20 = __this->___m_jclass;
				intptr_t L_21;
				L_21 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_20, NULL);
				intptr_t L_22 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_23 = V_0;
				int32_t L_24;
				L_24 = AndroidJNISafe_CallStaticIntMethod_m915549FA8FD7FB93B57A9708AD759488EA64418C(L_21, L_22, L_23, NULL);
				int32_t L_25 = L_24;
				bool L_26;
				il2cpp_codegen_box_unbox((&L_25), (&L_26), sizeof(bool), il2cpp_defaults.int32_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_26;
				goto IL_03ea;
			}

IL_0090_1:
			{
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_27 = __this->___m_jclass;
				intptr_t L_28;
				L_28 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_27, NULL);
				intptr_t L_29 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_30 = V_0;
				bool L_31;
				L_31 = AndroidJNISafe_CallStaticBooleanMethod_m652685AC18F590965249C0F9B107C00C142595BB(L_28, L_29, L_30, NULL);
				V_3 = L_31;
				goto IL_03ea;
			}

IL_00cd_1:
			{
				goto IL_0115_1;
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_32 = __this->___m_jclass;
				intptr_t L_33;
				L_33 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_32, NULL);
				intptr_t L_34 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_35 = V_0;
				int8_t L_36;
				L_36 = AndroidJNISafe_CallStaticSByteMethod_m3E1F75978A2D686BC32DBF5A2F1F70F0D746C2B7(L_33, L_34, L_35, NULL);
				uint8_t L_37 = (il2cpp_codegen_conv<uint8_t,int8_t,int32_t,false,false>(L_36,NULL));
				uint8_t L_38 = L_37;
				bool L_39;
				il2cpp_codegen_box_unbox((&L_38), (&L_39), sizeof(bool), il2cpp_defaults.byte_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_39;
				goto IL_03ea;
			}

IL_0115_1:
			{
				goto IL_0152_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_40 = __this->___m_jclass;
				intptr_t L_41;
				L_41 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_40, NULL);
				intptr_t L_42 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_43 = V_0;
				int8_t L_44;
				L_44 = AndroidJNISafe_CallStaticSByteMethod_m3E1F75978A2D686BC32DBF5A2F1F70F0D746C2B7(L_41, L_42, L_43, NULL);
				int8_t L_45 = L_44;
				bool L_46;
				il2cpp_codegen_box_unbox((&L_45), (&L_46), sizeof(bool), il2cpp_defaults.sbyte_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_46;
				goto IL_03ea;
			}

IL_0152_1:
			{
				goto IL_018f_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_47 = __this->___m_jclass;
				intptr_t L_48;
				L_48 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_47, NULL);
				intptr_t L_49 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_50 = V_0;
				int16_t L_51;
				L_51 = AndroidJNISafe_CallStaticShortMethod_m8330383670ECCD7E24CDD68C419745E486FA6426(L_48, L_49, L_50, NULL);
				int16_t L_52 = L_51;
				bool L_53;
				il2cpp_codegen_box_unbox((&L_52), (&L_53), sizeof(bool), il2cpp_defaults.int16_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_53;
				goto IL_03ea;
			}

IL_018f_1:
			{
				goto IL_01cc_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_54 = __this->___m_jclass;
				intptr_t L_55;
				L_55 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_54, NULL);
				intptr_t L_56 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_57 = V_0;
				int64_t L_58;
				L_58 = AndroidJNISafe_CallStaticLongMethod_mDDE01239BEFCF007ECE05E51A249B3EB5BB61234(L_55, L_56, L_57, NULL);
				int64_t L_59 = L_58;
				bool L_60;
				il2cpp_codegen_box_unbox((&L_59), (&L_60), sizeof(bool), il2cpp_defaults.int64_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_60;
				goto IL_03ea;
			}

IL_01cc_1:
			{
				goto IL_0209_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_61 = __this->___m_jclass;
				intptr_t L_62;
				L_62 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_61, NULL);
				intptr_t L_63 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_64 = V_0;
				float L_65;
				L_65 = AndroidJNISafe_CallStaticFloatMethod_m3F5419A10B9DF599352938B2BAD8866F8F112364(L_62, L_63, L_64, NULL);
				float L_66 = L_65;
				bool L_67;
				il2cpp_codegen_box_unbox((&L_66), (&L_67), sizeof(bool), il2cpp_defaults.single_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_67;
				goto IL_03ea;
			}

IL_0209_1:
			{
				goto IL_0246_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_68 = __this->___m_jclass;
				intptr_t L_69;
				L_69 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_68, NULL);
				intptr_t L_70 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_71 = V_0;
				double L_72;
				L_72 = AndroidJNISafe_CallStaticDoubleMethod_m73F1D51601D6849EE480389B4E43AED68C42B2B5(L_69, L_70, L_71, NULL);
				double L_73 = L_72;
				bool L_74;
				il2cpp_codegen_box_unbox((&L_73), (&L_74), sizeof(bool), il2cpp_defaults.double_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_74;
				goto IL_03ea;
			}

IL_0246_1:
			{
				goto IL_03d1_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_75 = __this->___m_jclass;
				intptr_t L_76;
				L_76 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_75, NULL);
				intptr_t L_77 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_78 = V_0;
				Il2CppChar L_79;
				L_79 = AndroidJNISafe_CallStaticCharMethod_mC4B40190CE095728E823AB8B724ECDC8F4B36155(L_76, L_77, L_78, NULL);
				Il2CppChar L_80 = L_79;
				bool L_81;
				il2cpp_codegen_box_unbox((&L_80), (&L_81), sizeof(bool), il2cpp_defaults.char_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_81;
				goto IL_03ea;
			}

IL_0286_1:
			{
				goto IL_02be_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_82 = __this->___m_jclass;
				intptr_t L_83;
				L_83 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_82, NULL);
				intptr_t L_84 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_85 = V_0;
				String_t* L_86;
				L_86 = AndroidJNISafe_CallStaticStringMethod_m4E150E34CC6DBF27A955F8DAEE5941D6E10879C0(L_83, L_84, L_85, NULL);
				V_3 = ((*(bool*)UnBox((RuntimeObject*)L_86, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_03ea;
			}

IL_02be_1:
			{
				goto IL_0319_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_87 = __this->___m_jclass;
				intptr_t L_88;
				L_88 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_87, NULL);
				intptr_t L_89 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_90 = V_0;
				intptr_t L_91;
				L_91 = AndroidJNISafe_CallStaticObjectMethod_m3171BFAEF780EEF400AD592B6F040E7BE87C2387(L_88, L_89, L_90, NULL);
				V_4 = L_91;
				intptr_t L_92 = V_4;
				bool L_93;
				L_93 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_92, 0, NULL);
				if (L_93)
				{
					goto IL_0309_1;
				}
			}
			{
				intptr_t L_94 = V_4;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_95 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
				AndroidJavaClass__ctor_mB206D3CB990755BD56E308F61CD43BB9EA4421D0(L_95, L_94, NULL);
				G_B30_0 = ((*(bool*)UnBox((RuntimeObject*)L_95, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0313_1;
			}

IL_0309_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(bool));
				bool L_96 = V_5;
				G_B30_0 = L_96;
			}

IL_0313_1:
			{
				V_3 = G_B30_0;
				goto IL_03ea;
			}

IL_0319_1:
			{
				goto IL_0371_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_97 = __this->___m_jclass;
				intptr_t L_98;
				L_98 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_97, NULL);
				intptr_t L_99 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_100 = V_0;
				intptr_t L_101;
				L_101 = AndroidJNISafe_CallStaticObjectMethod_m3171BFAEF780EEF400AD592B6F040E7BE87C2387(L_98, L_99, L_100, NULL);
				V_6 = L_101;
				intptr_t L_102 = V_6;
				bool L_103;
				L_103 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_102, 0, NULL);
				if (L_103)
				{
					goto IL_0364_1;
				}
			}
			{
				intptr_t L_104 = V_6;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_105 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
				AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_105, L_104, NULL);
				G_B35_0 = ((*(bool*)UnBox((RuntimeObject*)L_105, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_036e_1;
			}

IL_0364_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(bool));
				bool L_106 = V_5;
				G_B35_0 = L_106;
			}

IL_036e_1:
			{
				V_3 = G_B35_0;
				goto IL_03ea;
			}

IL_0371_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_107 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.array_class->byval_arg) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_108;
				L_108 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_107, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_109 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				Type_t* L_110;
				L_110 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_109, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_111;
				L_111 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_108, L_110, NULL);
				if (!L_111)
				{
					goto IL_03a6_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_112 = __this->___m_jclass;
				intptr_t L_113;
				L_113 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_112, NULL);
				intptr_t L_114 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_115 = V_0;
				intptr_t L_116;
				L_116 = AndroidJNISafe_CallStaticObjectMethod_m3171BFAEF780EEF400AD592B6F040E7BE87C2387(L_113, L_114, L_115, NULL);
				bool L_117;
				L_117 = AndroidJavaObject_FromJavaArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mA1CB7EC9473B0674763C89AC566EC664159108E9(L_116, il2cpp_rgctx_method(method->rgctx_data, 2));
				V_3 = L_117;
				goto IL_03ea;
			}

IL_03a6_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_118 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_119;
				L_119 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_118, NULL);
				Type_t* L_120 = L_119;
				if (L_120)
				{
					G_B40_0 = L_120;
					G_B40_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_03bc_1;
				}
				G_B39_0 = L_120;
				G_B39_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
			}
			{
				G_B41_0 = ((String_t*)(NULL));
				G_B41_1 = G_B39_1;
				goto IL_03c1_1;
			}

IL_03bc_1:
			{
				NullCheck((RuntimeObject*)G_B40_0);
				String_t* L_121;
				L_121 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B40_0);
				G_B41_0 = L_121;
				G_B41_1 = G_B40_1;
			}

IL_03c1_1:
			{
				String_t* L_122;
				L_122 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B41_1, G_B41_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_123 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_123, L_122, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_123, method);
			}

IL_03d1_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(bool));
				bool L_124 = V_5;
				V_3 = L_124;
				goto IL_03ea;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03ea:
	{
		bool L_125 = V_3;
		return L_125;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject__CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m41529A6A47CC3B57286AC8F9C6388E54918DF450_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_0, NULL);
		String_t* L_2 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___1_args;
		intptr_t L_4;
		L_4 = AndroidJNIHelper_GetMethodID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE3914411BE312CBBA869835158E535A06CD3EEB4(L_1, L_2, L_3, (bool)1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		intptr_t L_5 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___1_args;
		bool L_7;
		L_7 = AndroidJavaObject__CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9EDC162A865064239ADA4058CD2A81B1A2CF6D0F(__this, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject__CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4F31B91D2F03C3068A4BE95DB368B6DF715CE316_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	intptr_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t G_B30_0 = 0;
	int32_t G_B35_0 = 0;
	Type_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	Type_t* G_B39_0 = NULL;
	String_t* G_B39_1 = NULL;
	String_t* G_B41_0 = NULL;
	String_t* G_B41_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___1_args;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0011;
		}
	}

IL_0007:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7));
		goto IL_0027;
	}

IL_0011:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_args;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		V_2 = L_3;
		int32_t L_4 = V_2;
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_4,NULL));
		uint32_t L_6 = sizeof(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225);
		if ((uintptr_t)L_5 * (uintptr_t)L_6 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_7 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_5, (int32_t)L_6));
		int8_t* L_8;
		if (L_7 == 0)
		{
			L_8 = NULL;
		}
		else
		{
			L_8 = (int8_t*)alloca(L_7);
			memset(L_8, 0, L_7);
		}
		int32_t L_9 = V_2;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_inline((&L_10), (void*)L_8, L_9, Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		V_1 = L_10;
	}

IL_0027:
	{
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_11 = V_1;
		V_0 = L_11;
		int32_t L_12;
		L_12 = Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_inline((&V_0), Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		int32_t L_13;
		L_13 = AndroidJNI_PushLocalFrame_m2D8050A3799AEBB4A7E506E6790839EB66932E10(((int32_t)il2cpp_codegen_add(L_12, 1)), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = ___1_args;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_15 = V_0;
		AndroidJNIHelper_CreateJNIArgArray_mD8E0CA2404E31F155EDE1A028EC686C17B17730F(L_14, L_15, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_03de:
			{
				intptr_t L_16;
				L_16 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				return;
			}
		});
		try
		{
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_18;
				L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_19;
				L_19 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_18, NULL);
				if (!L_19)
				{
					goto IL_0286_1;
				}
			}
			{
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_20 = __this->___m_jclass;
				intptr_t L_21;
				L_21 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_20, NULL);
				intptr_t L_22 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_23 = V_0;
				int32_t L_24;
				L_24 = AndroidJNISafe_CallStaticIntMethod_m915549FA8FD7FB93B57A9708AD759488EA64418C(L_21, L_22, L_23, NULL);
				V_3 = L_24;
				goto IL_03ea;
			}

IL_0090_1:
			{
				goto IL_00cd_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_25 = __this->___m_jclass;
				intptr_t L_26;
				L_26 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_25, NULL);
				intptr_t L_27 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_28 = V_0;
				bool L_29;
				L_29 = AndroidJNISafe_CallStaticBooleanMethod_m652685AC18F590965249C0F9B107C00C142595BB(L_26, L_27, L_28, NULL);
				bool L_30 = L_29;
				int32_t L_31;
				il2cpp_codegen_box_unbox((&L_30), (&L_31), sizeof(int32_t), il2cpp_defaults.boolean_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_31;
				goto IL_03ea;
			}

IL_00cd_1:
			{
				goto IL_0115_1;
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_32 = __this->___m_jclass;
				intptr_t L_33;
				L_33 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_32, NULL);
				intptr_t L_34 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_35 = V_0;
				int8_t L_36;
				L_36 = AndroidJNISafe_CallStaticSByteMethod_m3E1F75978A2D686BC32DBF5A2F1F70F0D746C2B7(L_33, L_34, L_35, NULL);
				uint8_t L_37 = (il2cpp_codegen_conv<uint8_t,int8_t,int32_t,false,false>(L_36,NULL));
				uint8_t L_38 = L_37;
				int32_t L_39;
				il2cpp_codegen_box_unbox((&L_38), (&L_39), sizeof(int32_t), il2cpp_defaults.byte_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_39;
				goto IL_03ea;
			}

IL_0115_1:
			{
				goto IL_0152_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_40 = __this->___m_jclass;
				intptr_t L_41;
				L_41 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_40, NULL);
				intptr_t L_42 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_43 = V_0;
				int8_t L_44;
				L_44 = AndroidJNISafe_CallStaticSByteMethod_m3E1F75978A2D686BC32DBF5A2F1F70F0D746C2B7(L_41, L_42, L_43, NULL);
				int8_t L_45 = L_44;
				int32_t L_46;
				il2cpp_codegen_box_unbox((&L_45), (&L_46), sizeof(int32_t), il2cpp_defaults.sbyte_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_46;
				goto IL_03ea;
			}

IL_0152_1:
			{
				goto IL_018f_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_47 = __this->___m_jclass;
				intptr_t L_48;
				L_48 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_47, NULL);
				intptr_t L_49 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_50 = V_0;
				int16_t L_51;
				L_51 = AndroidJNISafe_CallStaticShortMethod_m8330383670ECCD7E24CDD68C419745E486FA6426(L_48, L_49, L_50, NULL);
				int16_t L_52 = L_51;
				int32_t L_53;
				il2cpp_codegen_box_unbox((&L_52), (&L_53), sizeof(int32_t), il2cpp_defaults.int16_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_53;
				goto IL_03ea;
			}

IL_018f_1:
			{
				goto IL_01cc_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_54 = __this->___m_jclass;
				intptr_t L_55;
				L_55 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_54, NULL);
				intptr_t L_56 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_57 = V_0;
				int64_t L_58;
				L_58 = AndroidJNISafe_CallStaticLongMethod_mDDE01239BEFCF007ECE05E51A249B3EB5BB61234(L_55, L_56, L_57, NULL);
				int64_t L_59 = L_58;
				int32_t L_60;
				il2cpp_codegen_box_unbox((&L_59), (&L_60), sizeof(int32_t), il2cpp_defaults.int64_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_60;
				goto IL_03ea;
			}

IL_01cc_1:
			{
				goto IL_0209_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_61 = __this->___m_jclass;
				intptr_t L_62;
				L_62 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_61, NULL);
				intptr_t L_63 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_64 = V_0;
				float L_65;
				L_65 = AndroidJNISafe_CallStaticFloatMethod_m3F5419A10B9DF599352938B2BAD8866F8F112364(L_62, L_63, L_64, NULL);
				float L_66 = L_65;
				int32_t L_67;
				il2cpp_codegen_box_unbox((&L_66), (&L_67), sizeof(int32_t), il2cpp_defaults.single_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_67;
				goto IL_03ea;
			}

IL_0209_1:
			{
				goto IL_0246_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_68 = __this->___m_jclass;
				intptr_t L_69;
				L_69 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_68, NULL);
				intptr_t L_70 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_71 = V_0;
				double L_72;
				L_72 = AndroidJNISafe_CallStaticDoubleMethod_m73F1D51601D6849EE480389B4E43AED68C42B2B5(L_69, L_70, L_71, NULL);
				double L_73 = L_72;
				int32_t L_74;
				il2cpp_codegen_box_unbox((&L_73), (&L_74), sizeof(int32_t), il2cpp_defaults.double_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_74;
				goto IL_03ea;
			}

IL_0246_1:
			{
				goto IL_03d1_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_75 = __this->___m_jclass;
				intptr_t L_76;
				L_76 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_75, NULL);
				intptr_t L_77 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_78 = V_0;
				Il2CppChar L_79;
				L_79 = AndroidJNISafe_CallStaticCharMethod_mC4B40190CE095728E823AB8B724ECDC8F4B36155(L_76, L_77, L_78, NULL);
				Il2CppChar L_80 = L_79;
				int32_t L_81;
				il2cpp_codegen_box_unbox((&L_80), (&L_81), sizeof(int32_t), il2cpp_defaults.char_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_81;
				goto IL_03ea;
			}

IL_0286_1:
			{
				goto IL_02be_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_82 = __this->___m_jclass;
				intptr_t L_83;
				L_83 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_82, NULL);
				intptr_t L_84 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_85 = V_0;
				String_t* L_86;
				L_86 = AndroidJNISafe_CallStaticStringMethod_m4E150E34CC6DBF27A955F8DAEE5941D6E10879C0(L_83, L_84, L_85, NULL);
				V_3 = ((*(int32_t*)UnBox((RuntimeObject*)L_86, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_03ea;
			}

IL_02be_1:
			{
				goto IL_0319_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_87 = __this->___m_jclass;
				intptr_t L_88;
				L_88 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_87, NULL);
				intptr_t L_89 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_90 = V_0;
				intptr_t L_91;
				L_91 = AndroidJNISafe_CallStaticObjectMethod_m3171BFAEF780EEF400AD592B6F040E7BE87C2387(L_88, L_89, L_90, NULL);
				V_4 = L_91;
				intptr_t L_92 = V_4;
				bool L_93;
				L_93 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_92, 0, NULL);
				if (L_93)
				{
					goto IL_0309_1;
				}
			}
			{
				intptr_t L_94 = V_4;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_95 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
				AndroidJavaClass__ctor_mB206D3CB990755BD56E308F61CD43BB9EA4421D0(L_95, L_94, NULL);
				G_B30_0 = ((*(int32_t*)UnBox((RuntimeObject*)L_95, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0313_1;
			}

IL_0309_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(int32_t));
				int32_t L_96 = V_5;
				G_B30_0 = L_96;
			}

IL_0313_1:
			{
				V_3 = G_B30_0;
				goto IL_03ea;
			}

IL_0319_1:
			{
				goto IL_0371_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_97 = __this->___m_jclass;
				intptr_t L_98;
				L_98 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_97, NULL);
				intptr_t L_99 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_100 = V_0;
				intptr_t L_101;
				L_101 = AndroidJNISafe_CallStaticObjectMethod_m3171BFAEF780EEF400AD592B6F040E7BE87C2387(L_98, L_99, L_100, NULL);
				V_6 = L_101;
				intptr_t L_102 = V_6;
				bool L_103;
				L_103 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_102, 0, NULL);
				if (L_103)
				{
					goto IL_0364_1;
				}
			}
			{
				intptr_t L_104 = V_6;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_105 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
				AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_105, L_104, NULL);
				G_B35_0 = ((*(int32_t*)UnBox((RuntimeObject*)L_105, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_036e_1;
			}

IL_0364_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(int32_t));
				int32_t L_106 = V_5;
				G_B35_0 = L_106;
			}

IL_036e_1:
			{
				V_3 = G_B35_0;
				goto IL_03ea;
			}

IL_0371_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_107 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.array_class->byval_arg) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_108;
				L_108 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_107, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_109 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				Type_t* L_110;
				L_110 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_109, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_111;
				L_111 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_108, L_110, NULL);
				if (!L_111)
				{
					goto IL_03a6_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_112 = __this->___m_jclass;
				intptr_t L_113;
				L_113 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_112, NULL);
				intptr_t L_114 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_115 = V_0;
				intptr_t L_116;
				L_116 = AndroidJNISafe_CallStaticObjectMethod_m3171BFAEF780EEF400AD592B6F040E7BE87C2387(L_113, L_114, L_115, NULL);
				int32_t L_117;
				L_117 = AndroidJavaObject_FromJavaArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC1390BDE8BF42FAA78215DFE076A25F7AEA674D7(L_116, il2cpp_rgctx_method(method->rgctx_data, 2));
				V_3 = L_117;
				goto IL_03ea;
			}

IL_03a6_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_118 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_119;
				L_119 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_118, NULL);
				Type_t* L_120 = L_119;
				if (L_120)
				{
					G_B40_0 = L_120;
					G_B40_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_03bc_1;
				}
				G_B39_0 = L_120;
				G_B39_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
			}
			{
				G_B41_0 = ((String_t*)(NULL));
				G_B41_1 = G_B39_1;
				goto IL_03c1_1;
			}

IL_03bc_1:
			{
				NullCheck((RuntimeObject*)G_B40_0);
				String_t* L_121;
				L_121 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B40_0);
				G_B41_0 = L_121;
				G_B41_1 = G_B40_1;
			}

IL_03c1_1:
			{
				String_t* L_122;
				L_122 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B41_1, G_B41_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_123 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_123, L_122, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_123, method);
			}

IL_03d1_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(int32_t));
				int32_t L_124 = V_5;
				V_3 = L_124;
				goto IL_03ea;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03ea:
	{
		int32_t L_125 = V_3;
		return L_125;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject__CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEE64E87A5A2BC0F38910643A9B91032AF38D882C_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_0, NULL);
		String_t* L_2 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___1_args;
		intptr_t L_4;
		L_4 = AndroidJNIHelper_GetMethodID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF87CC238DDBB3C90C35846E626548847CC7E319D(L_1, L_2, L_3, (bool)1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		intptr_t L_5 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___1_args;
		int32_t L_7;
		L_7 = AndroidJavaObject__CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4F31B91D2F03C3068A4BE95DB368B6DF715CE316(__this, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJavaObject__CallStatic_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mBE3DBCB8C5A089C1FFCAB9FF46D177C2DEF4FAEC_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int64_t V_3 = 0;
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	int64_t V_5 = 0;
	intptr_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	int64_t G_B30_0 = 0;
	int64_t G_B35_0 = 0;
	Type_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	Type_t* G_B39_0 = NULL;
	String_t* G_B39_1 = NULL;
	String_t* G_B41_0 = NULL;
	String_t* G_B41_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___1_args;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0011;
		}
	}

IL_0007:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7));
		goto IL_0027;
	}

IL_0011:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_args;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		V_2 = L_3;
		int32_t L_4 = V_2;
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_4,NULL));
		uint32_t L_6 = sizeof(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225);
		if ((uintptr_t)L_5 * (uintptr_t)L_6 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_7 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_5, (int32_t)L_6));
		int8_t* L_8;
		if (L_7 == 0)
		{
			L_8 = NULL;
		}
		else
		{
			L_8 = (int8_t*)alloca(L_7);
			memset(L_8, 0, L_7);
		}
		int32_t L_9 = V_2;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_inline((&L_10), (void*)L_8, L_9, Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		V_1 = L_10;
	}

IL_0027:
	{
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_11 = V_1;
		V_0 = L_11;
		int32_t L_12;
		L_12 = Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_inline((&V_0), Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		int32_t L_13;
		L_13 = AndroidJNI_PushLocalFrame_m2D8050A3799AEBB4A7E506E6790839EB66932E10(((int32_t)il2cpp_codegen_add(L_12, 1)), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = ___1_args;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_15 = V_0;
		AndroidJNIHelper_CreateJNIArgArray_mD8E0CA2404E31F155EDE1A028EC686C17B17730F(L_14, L_15, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_03de:
			{
				intptr_t L_16;
				L_16 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				return;
			}
		});
		try
		{
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_18;
				L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_19;
				L_19 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_18, NULL);
				if (!L_19)
				{
					goto IL_0286_1;
				}
			}
			{
				goto IL_0090_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_20 = __this->___m_jclass;
				intptr_t L_21;
				L_21 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_20, NULL);
				intptr_t L_22 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_23 = V_0;
				int32_t L_24;
				L_24 = AndroidJNISafe_CallStaticIntMethod_m915549FA8FD7FB93B57A9708AD759488EA64418C(L_21, L_22, L_23, NULL);
				int32_t L_25 = L_24;
				int64_t L_26;
				il2cpp_codegen_box_unbox((&L_25), (&L_26), sizeof(int64_t), il2cpp_defaults.int32_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_26;
				goto IL_03ea;
			}

IL_0090_1:
			{
				goto IL_00cd_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_27 = __this->___m_jclass;
				intptr_t L_28;
				L_28 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_27, NULL);
				intptr_t L_29 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_30 = V_0;
				bool L_31;
				L_31 = AndroidJNISafe_CallStaticBooleanMethod_m652685AC18F590965249C0F9B107C00C142595BB(L_28, L_29, L_30, NULL);
				bool L_32 = L_31;
				int64_t L_33;
				il2cpp_codegen_box_unbox((&L_32), (&L_33), sizeof(int64_t), il2cpp_defaults.boolean_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_33;
				goto IL_03ea;
			}

IL_00cd_1:
			{
				goto IL_0115_1;
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_34 = __this->___m_jclass;
				intptr_t L_35;
				L_35 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_34, NULL);
				intptr_t L_36 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_37 = V_0;
				int8_t L_38;
				L_38 = AndroidJNISafe_CallStaticSByteMethod_m3E1F75978A2D686BC32DBF5A2F1F70F0D746C2B7(L_35, L_36, L_37, NULL);
				uint8_t L_39 = (il2cpp_codegen_conv<uint8_t,int8_t,int32_t,false,false>(L_38,NULL));
				uint8_t L_40 = L_39;
				int64_t L_41;
				il2cpp_codegen_box_unbox((&L_40), (&L_41), sizeof(int64_t), il2cpp_defaults.byte_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_41;
				goto IL_03ea;
			}

IL_0115_1:
			{
				goto IL_0152_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_42 = __this->___m_jclass;
				intptr_t L_43;
				L_43 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_42, NULL);
				intptr_t L_44 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_45 = V_0;
				int8_t L_46;
				L_46 = AndroidJNISafe_CallStaticSByteMethod_m3E1F75978A2D686BC32DBF5A2F1F70F0D746C2B7(L_43, L_44, L_45, NULL);
				int8_t L_47 = L_46;
				int64_t L_48;
				il2cpp_codegen_box_unbox((&L_47), (&L_48), sizeof(int64_t), il2cpp_defaults.sbyte_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_48;
				goto IL_03ea;
			}

IL_0152_1:
			{
				goto IL_018f_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_49 = __this->___m_jclass;
				intptr_t L_50;
				L_50 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_49, NULL);
				intptr_t L_51 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_52 = V_0;
				int16_t L_53;
				L_53 = AndroidJNISafe_CallStaticShortMethod_m8330383670ECCD7E24CDD68C419745E486FA6426(L_50, L_51, L_52, NULL);
				int16_t L_54 = L_53;
				int64_t L_55;
				il2cpp_codegen_box_unbox((&L_54), (&L_55), sizeof(int64_t), il2cpp_defaults.int16_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_55;
				goto IL_03ea;
			}

IL_018f_1:
			{
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_56 = __this->___m_jclass;
				intptr_t L_57;
				L_57 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_56, NULL);
				intptr_t L_58 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_59 = V_0;
				int64_t L_60;
				L_60 = AndroidJNISafe_CallStaticLongMethod_mDDE01239BEFCF007ECE05E51A249B3EB5BB61234(L_57, L_58, L_59, NULL);
				V_3 = L_60;
				goto IL_03ea;
			}

IL_01cc_1:
			{
				goto IL_0209_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_61 = __this->___m_jclass;
				intptr_t L_62;
				L_62 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_61, NULL);
				intptr_t L_63 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_64 = V_0;
				float L_65;
				L_65 = AndroidJNISafe_CallStaticFloatMethod_m3F5419A10B9DF599352938B2BAD8866F8F112364(L_62, L_63, L_64, NULL);
				float L_66 = L_65;
				int64_t L_67;
				il2cpp_codegen_box_unbox((&L_66), (&L_67), sizeof(int64_t), il2cpp_defaults.single_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_67;
				goto IL_03ea;
			}

IL_0209_1:
			{
				goto IL_0246_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_68 = __this->___m_jclass;
				intptr_t L_69;
				L_69 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_68, NULL);
				intptr_t L_70 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_71 = V_0;
				double L_72;
				L_72 = AndroidJNISafe_CallStaticDoubleMethod_m73F1D51601D6849EE480389B4E43AED68C42B2B5(L_69, L_70, L_71, NULL);
				double L_73 = L_72;
				int64_t L_74;
				il2cpp_codegen_box_unbox((&L_73), (&L_74), sizeof(int64_t), il2cpp_defaults.double_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_74;
				goto IL_03ea;
			}

IL_0246_1:
			{
				goto IL_03d1_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_75 = __this->___m_jclass;
				intptr_t L_76;
				L_76 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_75, NULL);
				intptr_t L_77 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_78 = V_0;
				Il2CppChar L_79;
				L_79 = AndroidJNISafe_CallStaticCharMethod_mC4B40190CE095728E823AB8B724ECDC8F4B36155(L_76, L_77, L_78, NULL);
				Il2CppChar L_80 = L_79;
				int64_t L_81;
				il2cpp_codegen_box_unbox((&L_80), (&L_81), sizeof(int64_t), il2cpp_defaults.char_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_81;
				goto IL_03ea;
			}

IL_0286_1:
			{
				goto IL_02be_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_82 = __this->___m_jclass;
				intptr_t L_83;
				L_83 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_82, NULL);
				intptr_t L_84 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_85 = V_0;
				String_t* L_86;
				L_86 = AndroidJNISafe_CallStaticStringMethod_m4E150E34CC6DBF27A955F8DAEE5941D6E10879C0(L_83, L_84, L_85, NULL);
				V_3 = ((*(int64_t*)UnBox((RuntimeObject*)L_86, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_03ea;
			}

IL_02be_1:
			{
				goto IL_0319_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_87 = __this->___m_jclass;
				intptr_t L_88;
				L_88 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_87, NULL);
				intptr_t L_89 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_90 = V_0;
				intptr_t L_91;
				L_91 = AndroidJNISafe_CallStaticObjectMethod_m3171BFAEF780EEF400AD592B6F040E7BE87C2387(L_88, L_89, L_90, NULL);
				V_4 = L_91;
				intptr_t L_92 = V_4;
				bool L_93;
				L_93 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_92, 0, NULL);
				if (L_93)
				{
					goto IL_0309_1;
				}
			}
			{
				intptr_t L_94 = V_4;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_95 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
				AndroidJavaClass__ctor_mB206D3CB990755BD56E308F61CD43BB9EA4421D0(L_95, L_94, NULL);
				G_B30_0 = ((*(int64_t*)UnBox((RuntimeObject*)L_95, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0313_1;
			}

IL_0309_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(int64_t));
				int64_t L_96 = V_5;
				G_B30_0 = L_96;
			}

IL_0313_1:
			{
				V_3 = G_B30_0;
				goto IL_03ea;
			}

IL_0319_1:
			{
				goto IL_0371_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_97 = __this->___m_jclass;
				intptr_t L_98;
				L_98 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_97, NULL);
				intptr_t L_99 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_100 = V_0;
				intptr_t L_101;
				L_101 = AndroidJNISafe_CallStaticObjectMethod_m3171BFAEF780EEF400AD592B6F040E7BE87C2387(L_98, L_99, L_100, NULL);
				V_6 = L_101;
				intptr_t L_102 = V_6;
				bool L_103;
				L_103 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_102, 0, NULL);
				if (L_103)
				{
					goto IL_0364_1;
				}
			}
			{
				intptr_t L_104 = V_6;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_105 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
				AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_105, L_104, NULL);
				G_B35_0 = ((*(int64_t*)UnBox((RuntimeObject*)L_105, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_036e_1;
			}

IL_0364_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(int64_t));
				int64_t L_106 = V_5;
				G_B35_0 = L_106;
			}

IL_036e_1:
			{
				V_3 = G_B35_0;
				goto IL_03ea;
			}

IL_0371_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_107 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.array_class->byval_arg) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_108;
				L_108 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_107, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_109 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				Type_t* L_110;
				L_110 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_109, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_111;
				L_111 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_108, L_110, NULL);
				if (!L_111)
				{
					goto IL_03a6_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_112 = __this->___m_jclass;
				intptr_t L_113;
				L_113 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_112, NULL);
				intptr_t L_114 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_115 = V_0;
				intptr_t L_116;
				L_116 = AndroidJNISafe_CallStaticObjectMethod_m3171BFAEF780EEF400AD592B6F040E7BE87C2387(L_113, L_114, L_115, NULL);
				int64_t L_117;
				L_117 = AndroidJavaObject_FromJavaArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m6A8E0C87ADD6FC1CA3F936C0CC0AC4AB379A8422(L_116, il2cpp_rgctx_method(method->rgctx_data, 2));
				V_3 = L_117;
				goto IL_03ea;
			}

IL_03a6_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_118 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_119;
				L_119 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_118, NULL);
				Type_t* L_120 = L_119;
				if (L_120)
				{
					G_B40_0 = L_120;
					G_B40_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_03bc_1;
				}
				G_B39_0 = L_120;
				G_B39_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
			}
			{
				G_B41_0 = ((String_t*)(NULL));
				G_B41_1 = G_B39_1;
				goto IL_03c1_1;
			}

IL_03bc_1:
			{
				NullCheck((RuntimeObject*)G_B40_0);
				String_t* L_121;
				L_121 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B40_0);
				G_B41_0 = L_121;
				G_B41_1 = G_B40_1;
			}

IL_03c1_1:
			{
				String_t* L_122;
				L_122 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B41_1, G_B41_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_123 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_123, L_122, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_123, method);
			}

IL_03d1_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(int64_t));
				int64_t L_124 = V_5;
				V_3 = L_124;
				goto IL_03ea;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03ea:
	{
		int64_t L_125 = V_3;
		return L_125;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJavaObject__CallStatic_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mB6A9E09630C485412DA1C0F2E04C67EEBE05E340_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_0, NULL);
		String_t* L_2 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___1_args;
		intptr_t L_4;
		L_4 = AndroidJNIHelper_GetMethodID_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m9665934CC08FD80EB16882C4EA6FDBC5D9C3A175(L_1, L_2, L_3, (bool)1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		intptr_t L_5 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___1_args;
		int64_t L_7;
		L_7 = AndroidJavaObject__CallStatic_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mBE3DBCB8C5A089C1FFCAB9FF46D177C2DEF4FAEC(__this, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* AndroidJavaObject__CallStatic_TisIl2CppSharedGenericObject_mF9D318147E29742DAA4B5C033BFC68D29CC1123B_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Il2CppSharedGenericObject* V_3 = NULL;
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	Il2CppSharedGenericObject* V_5 = NULL;
	intptr_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	Il2CppSharedGenericObject* G_B30_0 = NULL;
	Il2CppSharedGenericObject* G_B35_0 = NULL;
	Type_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	Type_t* G_B39_0 = NULL;
	String_t* G_B39_1 = NULL;
	String_t* G_B41_0 = NULL;
	String_t* G_B41_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___1_args;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0011;
		}
	}

IL_0007:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7));
		goto IL_0027;
	}

IL_0011:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_args;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		V_2 = L_3;
		int32_t L_4 = V_2;
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_4,NULL));
		uint32_t L_6 = sizeof(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225);
		if ((uintptr_t)L_5 * (uintptr_t)L_6 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_7 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_5, (int32_t)L_6));
		int8_t* L_8;
		if (L_7 == 0)
		{
			L_8 = NULL;
		}
		else
		{
			L_8 = (int8_t*)alloca(L_7);
			memset(L_8, 0, L_7);
		}
		int32_t L_9 = V_2;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_inline((&L_10), (void*)L_8, L_9, Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		V_1 = L_10;
	}

IL_0027:
	{
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_11 = V_1;
		V_0 = L_11;
		int32_t L_12;
		L_12 = Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_inline((&V_0), Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		int32_t L_13;
		L_13 = AndroidJNI_PushLocalFrame_m2D8050A3799AEBB4A7E506E6790839EB66932E10(((int32_t)il2cpp_codegen_add(L_12, 1)), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = ___1_args;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_15 = V_0;
		AndroidJNIHelper_CreateJNIArgArray_mD8E0CA2404E31F155EDE1A028EC686C17B17730F(L_14, L_15, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_03de:
			{
				intptr_t L_16;
				L_16 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				return;
			}
		});
		try
		{
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_18;
				L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_19;
				L_19 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_18, NULL);
				if (!L_19)
				{
					goto IL_0286_1;
				}
			}
			{
				goto IL_0090_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_20 = __this->___m_jclass;
				intptr_t L_21;
				L_21 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_20, NULL);
				intptr_t L_22 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_23 = V_0;
				int32_t L_24;
				L_24 = AndroidJNISafe_CallStaticIntMethod_m915549FA8FD7FB93B57A9708AD759488EA64418C(L_21, L_22, L_23, NULL);
				int32_t L_25 = L_24;
				RuntimeObject* L_26 = Box(il2cpp_defaults.int32_class, &L_25);
				V_3 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_03ea;
			}

IL_0090_1:
			{
				goto IL_00cd_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_27 = __this->___m_jclass;
				intptr_t L_28;
				L_28 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_27, NULL);
				intptr_t L_29 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_30 = V_0;
				bool L_31;
				L_31 = AndroidJNISafe_CallStaticBooleanMethod_m652685AC18F590965249C0F9B107C00C142595BB(L_28, L_29, L_30, NULL);
				bool L_32 = L_31;
				RuntimeObject* L_33 = Box(il2cpp_defaults.boolean_class, &L_32);
				V_3 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_03ea;
			}

IL_00cd_1:
			{
				goto IL_0115_1;
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_34 = __this->___m_jclass;
				intptr_t L_35;
				L_35 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_34, NULL);
				intptr_t L_36 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_37 = V_0;
				int8_t L_38;
				L_38 = AndroidJNISafe_CallStaticSByteMethod_m3E1F75978A2D686BC32DBF5A2F1F70F0D746C2B7(L_35, L_36, L_37, NULL);
				uint8_t L_39 = (il2cpp_codegen_conv<uint8_t,int8_t,int32_t,false,false>(L_38,NULL));
				uint8_t L_40 = L_39;
				RuntimeObject* L_41 = Box(il2cpp_defaults.byte_class, &L_40);
				V_3 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_41, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_03ea;
			}

IL_0115_1:
			{
				goto IL_0152_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_42 = __this->___m_jclass;
				intptr_t L_43;
				L_43 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_42, NULL);
				intptr_t L_44 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_45 = V_0;
				int8_t L_46;
				L_46 = AndroidJNISafe_CallStaticSByteMethod_m3E1F75978A2D686BC32DBF5A2F1F70F0D746C2B7(L_43, L_44, L_45, NULL);
				int8_t L_47 = L_46;
				RuntimeObject* L_48 = Box(il2cpp_defaults.sbyte_class, &L_47);
				V_3 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_48, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_03ea;
			}

IL_0152_1:
			{
				goto IL_018f_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_49 = __this->___m_jclass;
				intptr_t L_50;
				L_50 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_49, NULL);
				intptr_t L_51 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_52 = V_0;
				int16_t L_53;
				L_53 = AndroidJNISafe_CallStaticShortMethod_m8330383670ECCD7E24CDD68C419745E486FA6426(L_50, L_51, L_52, NULL);
				int16_t L_54 = L_53;
				RuntimeObject* L_55 = Box(il2cpp_defaults.int16_class, &L_54);
				V_3 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_55, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_03ea;
			}

IL_018f_1:
			{
				goto IL_01cc_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_56 = __this->___m_jclass;
				intptr_t L_57;
				L_57 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_56, NULL);
				intptr_t L_58 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_59 = V_0;
				int64_t L_60;
				L_60 = AndroidJNISafe_CallStaticLongMethod_mDDE01239BEFCF007ECE05E51A249B3EB5BB61234(L_57, L_58, L_59, NULL);
				int64_t L_61 = L_60;
				RuntimeObject* L_62 = Box(il2cpp_defaults.int64_class, &L_61);
				V_3 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_62, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_03ea;
			}

IL_01cc_1:
			{
				goto IL_0209_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_63 = __this->___m_jclass;
				intptr_t L_64;
				L_64 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_63, NULL);
				intptr_t L_65 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_66 = V_0;
				float L_67;
				L_67 = AndroidJNISafe_CallStaticFloatMethod_m3F5419A10B9DF599352938B2BAD8866F8F112364(L_64, L_65, L_66, NULL);
				float L_68 = L_67;
				RuntimeObject* L_69 = Box(il2cpp_defaults.single_class, &L_68);
				V_3 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_69, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_03ea;
			}

IL_0209_1:
			{
				goto IL_0246_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_70 = __this->___m_jclass;
				intptr_t L_71;
				L_71 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_70, NULL);
				intptr_t L_72 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_73 = V_0;
				double L_74;
				L_74 = AndroidJNISafe_CallStaticDoubleMethod_m73F1D51601D6849EE480389B4E43AED68C42B2B5(L_71, L_72, L_73, NULL);
				double L_75 = L_74;
				RuntimeObject* L_76 = Box(il2cpp_defaults.double_class, &L_75);
				V_3 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_76, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_03ea;
			}

IL_0246_1:
			{
				goto IL_03d1_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_77 = __this->___m_jclass;
				intptr_t L_78;
				L_78 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_77, NULL);
				intptr_t L_79 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_80 = V_0;
				Il2CppChar L_81;
				L_81 = AndroidJNISafe_CallStaticCharMethod_mC4B40190CE095728E823AB8B724ECDC8F4B36155(L_78, L_79, L_80, NULL);
				Il2CppChar L_82 = L_81;
				RuntimeObject* L_83 = Box(il2cpp_defaults.char_class, &L_82);
				V_3 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_83, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_03ea;
			}

IL_0286_1:
			{
				bool L_84 = (il2cpp_defaults.string_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
				if (!L_84)
				{
					goto IL_02be_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_85 = __this->___m_jclass;
				intptr_t L_86;
				L_86 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_85, NULL);
				intptr_t L_87 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_88 = V_0;
				String_t* L_89;
				L_89 = AndroidJNISafe_CallStaticStringMethod_m4E150E34CC6DBF27A955F8DAEE5941D6E10879C0(L_86, L_87, L_88, NULL);
				V_3 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_89, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_03ea;
			}

IL_02be_1:
			{
				bool L_90 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
				if (!L_90)
				{
					goto IL_0319_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_91 = __this->___m_jclass;
				intptr_t L_92;
				L_92 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_91, NULL);
				intptr_t L_93 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_94 = V_0;
				intptr_t L_95;
				L_95 = AndroidJNISafe_CallStaticObjectMethod_m3171BFAEF780EEF400AD592B6F040E7BE87C2387(L_92, L_93, L_94, NULL);
				V_4 = L_95;
				intptr_t L_96 = V_4;
				bool L_97;
				L_97 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_96, 0, NULL);
				if (L_97)
				{
					goto IL_0309_1;
				}
			}
			{
				intptr_t L_98 = V_4;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_99 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
				AndroidJavaClass__ctor_mB206D3CB990755BD56E308F61CD43BB9EA4421D0(L_99, L_98, NULL);
				G_B30_0 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_99, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_0313_1;
			}

IL_0309_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(Il2CppSharedGenericObject*));
				Il2CppSharedGenericObject* L_100 = V_5;
				G_B30_0 = L_100;
			}

IL_0313_1:
			{
				V_3 = G_B30_0;
				goto IL_03ea;
			}

IL_0319_1:
			{
				bool L_101 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
				if (!L_101)
				{
					goto IL_0371_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_102 = __this->___m_jclass;
				intptr_t L_103;
				L_103 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_102, NULL);
				intptr_t L_104 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_105 = V_0;
				intptr_t L_106;
				L_106 = AndroidJNISafe_CallStaticObjectMethod_m3171BFAEF780EEF400AD592B6F040E7BE87C2387(L_103, L_104, L_105, NULL);
				V_6 = L_106;
				intptr_t L_107 = V_6;
				bool L_108;
				L_108 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_107, 0, NULL);
				if (L_108)
				{
					goto IL_0364_1;
				}
			}
			{
				intptr_t L_109 = V_6;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_110 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
				AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_110, L_109, NULL);
				G_B35_0 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_110, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_036e_1;
			}

IL_0364_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(Il2CppSharedGenericObject*));
				Il2CppSharedGenericObject* L_111 = V_5;
				G_B35_0 = L_111;
			}

IL_036e_1:
			{
				V_3 = G_B35_0;
				goto IL_03ea;
			}

IL_0371_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_112 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.array_class->byval_arg) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_113;
				L_113 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_112, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_114 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				Type_t* L_115;
				L_115 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_114, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_116;
				L_116 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_113, L_115, NULL);
				if (!L_116)
				{
					goto IL_03a6_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_117 = __this->___m_jclass;
				intptr_t L_118;
				L_118 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_117, NULL);
				intptr_t L_119 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_120 = V_0;
				intptr_t L_121;
				L_121 = AndroidJNISafe_CallStaticObjectMethod_m3171BFAEF780EEF400AD592B6F040E7BE87C2387(L_118, L_119, L_120, NULL);
				Il2CppSharedGenericObject* L_122;
				L_122 = AndroidJavaObject_FromJavaArray_TisIl2CppSharedGenericObject_m22D9898503E929D77563392822CD11A056613AFF(L_121, il2cpp_rgctx_method(method->rgctx_data, 2));
				V_3 = L_122;
				goto IL_03ea;
			}

IL_03a6_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_123 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_124;
				L_124 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_123, NULL);
				Type_t* L_125 = L_124;
				if (L_125)
				{
					G_B40_0 = L_125;
					G_B40_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_03bc_1;
				}
				G_B39_0 = L_125;
				G_B39_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
			}
			{
				G_B41_0 = ((String_t*)(NULL));
				G_B41_1 = G_B39_1;
				goto IL_03c1_1;
			}

IL_03bc_1:
			{
				NullCheck((RuntimeObject*)G_B40_0);
				String_t* L_126;
				L_126 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B40_0);
				G_B41_0 = L_126;
				G_B41_1 = G_B40_1;
			}

IL_03c1_1:
			{
				String_t* L_127;
				L_127 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B41_1, G_B41_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_128 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_128, L_127, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_128, method);
			}

IL_03d1_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(Il2CppSharedGenericObject*));
				Il2CppSharedGenericObject* L_129 = V_5;
				V_3 = L_129;
				goto IL_03ea;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03ea:
	{
		Il2CppSharedGenericObject* L_130 = V_3;
		return L_130;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* AndroidJavaObject__CallStatic_TisIl2CppSharedGenericObject_m8E1513A9554AAA1822CA51D0A816DCF16775AA37_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_0, NULL);
		String_t* L_2 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___1_args;
		intptr_t L_4;
		L_4 = AndroidJNIHelper_GetMethodID_TisIl2CppSharedGenericObject_m95122CB55DFAF463B14CBBA51C2B0811790DB90B(L_1, L_2, L_3, (bool)1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		intptr_t L_5 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___1_args;
		Il2CppSharedGenericObject* L_7;
		L_7 = AndroidJavaObject__CallStatic_TisIl2CppSharedGenericObject_mF9D318147E29742DAA4B5C033BFC68D29CC1123B(__this, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__CallStatic_TisIl2CppFullySharedGenericAny_m8D1EB1F6B7C8D0B7D54EF55F42BCE6B7576E0953_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_27 = alloca(SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
	const Il2CppFullySharedGenericAny L_35 = L_27;
	const Il2CppFullySharedGenericAny L_44 = L_27;
	const Il2CppFullySharedGenericAny L_52 = L_27;
	const Il2CppFullySharedGenericAny L_60 = L_27;
	const Il2CppFullySharedGenericAny L_68 = L_27;
	const Il2CppFullySharedGenericAny L_76 = L_27;
	const Il2CppFullySharedGenericAny L_84 = L_27;
	const Il2CppFullySharedGenericAny L_92 = L_27;
	const Il2CppFullySharedGenericAny L_99 = L_27;
	const Il2CppFullySharedGenericAny L_111 = L_27;
	const Il2CppFullySharedGenericAny L_113 = L_27;
	const Il2CppFullySharedGenericAny L_124 = L_27;
	const Il2CppFullySharedGenericAny L_126 = L_27;
	const Il2CppFullySharedGenericAny L_137 = L_27;
	const Il2CppFullySharedGenericAny L_144 = L_27;
	const Il2CppFullySharedGenericAny L_145 = L_27;
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
	memset(V_3, 0, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	Il2CppFullySharedGenericAny V_5 = alloca(SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
	memset(V_5, 0, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
	intptr_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	Il2CppFullySharedGenericAny G_B30_0 = alloca(SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
	memset(G_B30_0, 0, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
	Il2CppFullySharedGenericAny G_B35_0 = alloca(SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
	memset(G_B35_0, 0, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
	Type_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	Type_t* G_B39_0 = NULL;
	String_t* G_B39_1 = NULL;
	String_t* G_B41_0 = NULL;
	String_t* G_B41_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___1_args;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0011;
		}
	}

IL_0007:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7));
		goto IL_0027;
	}

IL_0011:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_args;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		V_2 = L_3;
		int32_t L_4 = V_2;
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_4,NULL));
		uint32_t L_6 = sizeof(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225);
		if ((uintptr_t)L_5 * (uintptr_t)L_6 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_7 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_5, (int32_t)L_6));
		int8_t* L_8;
		if (L_7 == 0)
		{
			L_8 = NULL;
		}
		else
		{
			L_8 = (int8_t*)alloca(L_7);
			memset(L_8, 0, L_7);
		}
		int32_t L_9 = V_2;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_inline((&L_10), (void*)L_8, L_9, Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		V_1 = L_10;
	}

IL_0027:
	{
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_11 = V_1;
		V_0 = L_11;
		int32_t L_12;
		L_12 = Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_inline((&V_0), Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		int32_t L_13;
		L_13 = AndroidJNI_PushLocalFrame_m2D8050A3799AEBB4A7E506E6790839EB66932E10(((int32_t)il2cpp_codegen_add(L_12, 1)), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = ___1_args;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_15 = V_0;
		AndroidJNIHelper_CreateJNIArgArray_mD8E0CA2404E31F155EDE1A028EC686C17B17730F(L_14, L_15, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_03de:
			{
				intptr_t L_16;
				L_16 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				return;
			}
		});
		try
		{
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_18;
				L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_19;
				L_19 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_18, NULL);
				if (!L_19)
				{
					goto IL_0286_1;
				}
			}
			{
				bool L_20 = (il2cpp_defaults.int32_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
				if (!L_20)
				{
					goto IL_0090_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_21 = __this->___m_jclass;
				intptr_t L_22;
				L_22 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_21, NULL);
				intptr_t L_23 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_24 = V_0;
				int32_t L_25;
				L_25 = AndroidJNISafe_CallStaticIntMethod_m915549FA8FD7FB93B57A9708AD759488EA64418C(L_22, L_23, L_24, NULL);
				int32_t L_26 = L_25;
				il2cpp_codegen_box_unbox((&L_26), L_27, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B, il2cpp_defaults.int32_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				il2cpp_codegen_memcpy(V_3, L_27, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				goto IL_03ea;
			}

IL_0090_1:
			{
				bool L_28 = (il2cpp_defaults.boolean_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
				if (!L_28)
				{
					goto IL_00cd_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_29 = __this->___m_jclass;
				intptr_t L_30;
				L_30 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_29, NULL);
				intptr_t L_31 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_32 = V_0;
				bool L_33;
				L_33 = AndroidJNISafe_CallStaticBooleanMethod_m652685AC18F590965249C0F9B107C00C142595BB(L_30, L_31, L_32, NULL);
				bool L_34 = L_33;
				il2cpp_codegen_box_unbox((&L_34), L_35, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B, il2cpp_defaults.boolean_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				il2cpp_codegen_memcpy(V_3, L_35, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				goto IL_03ea;
			}

IL_00cd_1:
			{
				bool L_36 = (il2cpp_defaults.byte_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
				if (!L_36)
				{
					goto IL_0115_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_37 = __this->___m_jclass;
				intptr_t L_38;
				L_38 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_37, NULL);
				intptr_t L_39 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_40 = V_0;
				int8_t L_41;
				L_41 = AndroidJNISafe_CallStaticSByteMethod_m3E1F75978A2D686BC32DBF5A2F1F70F0D746C2B7(L_38, L_39, L_40, NULL);
				uint8_t L_42 = (il2cpp_codegen_conv<uint8_t,int8_t,int32_t,false,false>(L_41,NULL));
				uint8_t L_43 = L_42;
				il2cpp_codegen_box_unbox((&L_43), L_44, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B, il2cpp_defaults.byte_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				il2cpp_codegen_memcpy(V_3, L_44, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				goto IL_03ea;
			}

IL_0115_1:
			{
				bool L_45 = (il2cpp_defaults.sbyte_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
				if (!L_45)
				{
					goto IL_0152_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_46 = __this->___m_jclass;
				intptr_t L_47;
				L_47 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_46, NULL);
				intptr_t L_48 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_49 = V_0;
				int8_t L_50;
				L_50 = AndroidJNISafe_CallStaticSByteMethod_m3E1F75978A2D686BC32DBF5A2F1F70F0D746C2B7(L_47, L_48, L_49, NULL);
				int8_t L_51 = L_50;
				il2cpp_codegen_box_unbox((&L_51), L_52, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B, il2cpp_defaults.sbyte_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				il2cpp_codegen_memcpy(V_3, L_52, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				goto IL_03ea;
			}

IL_0152_1:
			{
				bool L_53 = (il2cpp_defaults.int16_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
				if (!L_53)
				{
					goto IL_018f_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_54 = __this->___m_jclass;
				intptr_t L_55;
				L_55 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_54, NULL);
				intptr_t L_56 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_57 = V_0;
				int16_t L_58;
				L_58 = AndroidJNISafe_CallStaticShortMethod_m8330383670ECCD7E24CDD68C419745E486FA6426(L_55, L_56, L_57, NULL);
				int16_t L_59 = L_58;
				il2cpp_codegen_box_unbox((&L_59), L_60, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B, il2cpp_defaults.int16_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				il2cpp_codegen_memcpy(V_3, L_60, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				goto IL_03ea;
			}

IL_018f_1:
			{
				bool L_61 = (il2cpp_defaults.int64_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
				if (!L_61)
				{
					goto IL_01cc_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_62 = __this->___m_jclass;
				intptr_t L_63;
				L_63 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_62, NULL);
				intptr_t L_64 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_65 = V_0;
				int64_t L_66;
				L_66 = AndroidJNISafe_CallStaticLongMethod_mDDE01239BEFCF007ECE05E51A249B3EB5BB61234(L_63, L_64, L_65, NULL);
				int64_t L_67 = L_66;
				il2cpp_codegen_box_unbox((&L_67), L_68, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B, il2cpp_defaults.int64_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				il2cpp_codegen_memcpy(V_3, L_68, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				goto IL_03ea;
			}

IL_01cc_1:
			{
				bool L_69 = (il2cpp_defaults.single_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
				if (!L_69)
				{
					goto IL_0209_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_70 = __this->___m_jclass;
				intptr_t L_71;
				L_71 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_70, NULL);
				intptr_t L_72 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_73 = V_0;
				float L_74;
				L_74 = AndroidJNISafe_CallStaticFloatMethod_m3F5419A10B9DF599352938B2BAD8866F8F112364(L_71, L_72, L_73, NULL);
				float L_75 = L_74;
				il2cpp_codegen_box_unbox((&L_75), L_76, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B, il2cpp_defaults.single_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				il2cpp_codegen_memcpy(V_3, L_76, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				goto IL_03ea;
			}

IL_0209_1:
			{
				bool L_77 = (il2cpp_defaults.double_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
				if (!L_77)
				{
					goto IL_0246_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_78 = __this->___m_jclass;
				intptr_t L_79;
				L_79 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_78, NULL);
				intptr_t L_80 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_81 = V_0;
				double L_82;
				L_82 = AndroidJNISafe_CallStaticDoubleMethod_m73F1D51601D6849EE480389B4E43AED68C42B2B5(L_79, L_80, L_81, NULL);
				double L_83 = L_82;
				il2cpp_codegen_box_unbox((&L_83), L_84, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B, il2cpp_defaults.double_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				il2cpp_codegen_memcpy(V_3, L_84, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				goto IL_03ea;
			}

IL_0246_1:
			{
				bool L_85 = (il2cpp_defaults.char_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
				if (!L_85)
				{
					goto IL_03d1_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_86 = __this->___m_jclass;
				intptr_t L_87;
				L_87 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_86, NULL);
				intptr_t L_88 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_89 = V_0;
				Il2CppChar L_90;
				L_90 = AndroidJNISafe_CallStaticCharMethod_mC4B40190CE095728E823AB8B724ECDC8F4B36155(L_87, L_88, L_89, NULL);
				Il2CppChar L_91 = L_90;
				il2cpp_codegen_box_unbox((&L_91), L_92, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B, il2cpp_defaults.char_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				il2cpp_codegen_memcpy(V_3, L_92, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				goto IL_03ea;
			}

IL_0286_1:
			{
				bool L_93 = (il2cpp_defaults.string_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
				if (!L_93)
				{
					goto IL_02be_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_94 = __this->___m_jclass;
				intptr_t L_95;
				L_95 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_94, NULL);
				intptr_t L_96 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_97 = V_0;
				String_t* L_98;
				L_98 = AndroidJNISafe_CallStaticStringMethod_m4E150E34CC6DBF27A955F8DAEE5941D6E10879C0(L_95, L_96, L_97, NULL);
				void* L_100 = UnBox_Any((RuntimeObject*)L_98, il2cpp_rgctx_data(method->rgctx_data, 1), L_99);
				il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_100)), SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				goto IL_03ea;
			}

IL_02be_1:
			{
				bool L_101 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
				if (!L_101)
				{
					goto IL_0319_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_102 = __this->___m_jclass;
				intptr_t L_103;
				L_103 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_102, NULL);
				intptr_t L_104 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_105 = V_0;
				intptr_t L_106;
				L_106 = AndroidJNISafe_CallStaticObjectMethod_m3171BFAEF780EEF400AD592B6F040E7BE87C2387(L_103, L_104, L_105, NULL);
				V_4 = L_106;
				intptr_t L_107 = V_4;
				bool L_108;
				L_108 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_107, 0, NULL);
				if (L_108)
				{
					goto IL_0309_1;
				}
			}
			{
				intptr_t L_109 = V_4;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_110 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
				AndroidJavaClass__ctor_mB206D3CB990755BD56E308F61CD43BB9EA4421D0(L_110, L_109, NULL);
				void* L_112 = UnBox_Any((RuntimeObject*)L_110, il2cpp_rgctx_data(method->rgctx_data, 1), L_111);
				il2cpp_codegen_memcpy(G_B30_0, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_112)), SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				goto IL_0313_1;
			}

IL_0309_1:
			{
				il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_5, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				il2cpp_codegen_memcpy(L_113, V_5, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				il2cpp_codegen_memcpy(G_B30_0, L_113, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
			}

IL_0313_1:
			{
				il2cpp_codegen_memcpy(V_3, G_B30_0, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				goto IL_03ea;
			}

IL_0319_1:
			{
				bool L_114 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
				if (!L_114)
				{
					goto IL_0371_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_115 = __this->___m_jclass;
				intptr_t L_116;
				L_116 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_115, NULL);
				intptr_t L_117 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_118 = V_0;
				intptr_t L_119;
				L_119 = AndroidJNISafe_CallStaticObjectMethod_m3171BFAEF780EEF400AD592B6F040E7BE87C2387(L_116, L_117, L_118, NULL);
				V_6 = L_119;
				intptr_t L_120 = V_6;
				bool L_121;
				L_121 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_120, 0, NULL);
				if (L_121)
				{
					goto IL_0364_1;
				}
			}
			{
				intptr_t L_122 = V_6;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_123 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
				AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_123, L_122, NULL);
				void* L_125 = UnBox_Any((RuntimeObject*)L_123, il2cpp_rgctx_data(method->rgctx_data, 1), L_124);
				il2cpp_codegen_memcpy(G_B35_0, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_125)), SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				goto IL_036e_1;
			}

IL_0364_1:
			{
				il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_5, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				il2cpp_codegen_memcpy(L_126, V_5, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				il2cpp_codegen_memcpy(G_B35_0, L_126, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
			}

IL_036e_1:
			{
				il2cpp_codegen_memcpy(V_3, G_B35_0, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				goto IL_03ea;
			}

IL_0371_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_127 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.array_class->byval_arg) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_128;
				L_128 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_127, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_129 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				Type_t* L_130;
				L_130 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_129, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_131;
				L_131 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_128, L_130, NULL);
				if (!L_131)
				{
					goto IL_03a6_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_132 = __this->___m_jclass;
				intptr_t L_133;
				L_133 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_132, NULL);
				intptr_t L_134 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_135 = V_0;
				intptr_t L_136;
				L_136 = AndroidJNISafe_CallStaticObjectMethod_m3171BFAEF780EEF400AD592B6F040E7BE87C2387(L_133, L_134, L_135, NULL);
				InvokerActionInvoker2< intptr_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_136, (Il2CppFullySharedGenericAny*)L_137);
				il2cpp_codegen_memcpy(V_3, L_137, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				goto IL_03ea;
			}

IL_03a6_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_138 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_139;
				L_139 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_138, NULL);
				Type_t* L_140 = L_139;
				if (L_140)
				{
					G_B40_0 = L_140;
					G_B40_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_03bc_1;
				}
				G_B39_0 = L_140;
				G_B39_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
			}
			{
				G_B41_0 = ((String_t*)(NULL));
				G_B41_1 = G_B39_1;
				goto IL_03c1_1;
			}

IL_03bc_1:
			{
				NullCheck((RuntimeObject*)G_B40_0);
				String_t* L_141;
				L_141 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B40_0);
				G_B41_0 = L_141;
				G_B41_1 = G_B40_1;
			}

IL_03c1_1:
			{
				String_t* L_142;
				L_142 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B41_1, G_B41_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_143 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_143, L_142, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_143, method);
			}

IL_03d1_1:
			{
				il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_5, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				il2cpp_codegen_memcpy(L_144, V_5, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				il2cpp_codegen_memcpy(V_3, L_144, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				goto IL_03ea;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03ea:
	{
		il2cpp_codegen_memcpy(L_145, V_3, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
		il2cpp_codegen_memcpy(il2cppRetVal, L_145, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__CallStatic_TisIl2CppFullySharedGenericAny_mA069934E49E8EFEB980CA5EED2B1DE810C150A68_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_ReturnType_t2DAB0875DF34A21B532F695F9B7329A0B5BBCB27 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_ReturnType_t2DAB0875DF34A21B532F695F9B7329A0B5BBCB27);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_0, NULL);
		String_t* L_2 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___1_args;
		intptr_t L_4;
		L_4 = ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, L_3, (bool)1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		intptr_t L_5 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___1_args;
		InvokerActionInvoker3< intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_5, L_6, (Il2CppFullySharedGenericAny*)L_7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_7, SizeOf_ReturnType_t2DAB0875DF34A21B532F695F9B7329A0B5BBCB27);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__Get_TisIl2CppFullySharedGenericAny_m16AE597DA478C33ABF978BB8131126B5C7360D09_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50E02893F5B6939534A49C535241D6B7BAFCF599);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
	const Il2CppFullySharedGenericAny L_16 = L_9;
	const Il2CppFullySharedGenericAny L_24 = L_9;
	const Il2CppFullySharedGenericAny L_31 = L_9;
	const Il2CppFullySharedGenericAny L_38 = L_9;
	const Il2CppFullySharedGenericAny L_45 = L_9;
	const Il2CppFullySharedGenericAny L_52 = L_9;
	const Il2CppFullySharedGenericAny L_59 = L_9;
	const Il2CppFullySharedGenericAny L_66 = L_9;
	const Il2CppFullySharedGenericAny L_72 = L_9;
	const Il2CppFullySharedGenericAny L_83 = L_9;
	const Il2CppFullySharedGenericAny L_85 = L_9;
	const Il2CppFullySharedGenericAny L_95 = L_9;
	const Il2CppFullySharedGenericAny L_97 = L_9;
	const Il2CppFullySharedGenericAny L_107 = L_9;
	const Il2CppFullySharedGenericAny L_114 = L_9;
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
	memset(V_1, 0, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	Type_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	Type_t* G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	String_t* G_B34_0 = NULL;
	String_t* G_B34_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_1, NULL);
		if (!L_2)
		{
			goto IL_0211;
		}
	}
	{
		bool L_3 = (il2cpp_defaults.int32_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_3)
		{
			goto IL_004b;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_4 = __this->___m_jobject;
		intptr_t L_5;
		L_5 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_4, NULL);
		intptr_t L_6 = ___0_fieldID;
		int32_t L_7;
		L_7 = AndroidJNISafe_GetIntField_mBD983688B73063DE5C55D320F60F266443FAC97C(L_5, L_6, NULL);
		int32_t L_8 = L_7;
		il2cpp_codegen_box_unbox((&L_8), L_9, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29, il2cpp_defaults.int32_class, il2cpp_rgctx_data(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(il2cppRetVal, L_9, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		return;
	}

IL_004b:
	{
		bool L_10 = (il2cpp_defaults.boolean_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_10)
		{
			goto IL_0082;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_11 = __this->___m_jobject;
		intptr_t L_12;
		L_12 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_11, NULL);
		intptr_t L_13 = ___0_fieldID;
		bool L_14;
		L_14 = AndroidJNISafe_GetBooleanField_m34F37B560A6AEC81B9061FB3B72698C84720435D(L_12, L_13, NULL);
		bool L_15 = L_14;
		il2cpp_codegen_box_unbox((&L_15), L_16, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29, il2cpp_defaults.boolean_class, il2cpp_rgctx_data(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(il2cppRetVal, L_16, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		return;
	}

IL_0082:
	{
		bool L_17 = (il2cpp_defaults.byte_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_17)
		{
			goto IL_00c4;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteral50E02893F5B6939534A49C535241D6B7BAFCF599, NULL);
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_18 = __this->___m_jobject;
		intptr_t L_19;
		L_19 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_18, NULL);
		intptr_t L_20 = ___0_fieldID;
		int8_t L_21;
		L_21 = AndroidJNISafe_GetSByteField_mAD3B08AA8A97F77CAE17DD25B0F389AFAC2023B1(L_19, L_20, NULL);
		uint8_t L_22 = (il2cpp_codegen_conv<uint8_t,int8_t,int32_t,false,false>(L_21,NULL));
		uint8_t L_23 = L_22;
		il2cpp_codegen_box_unbox((&L_23), L_24, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29, il2cpp_defaults.byte_class, il2cpp_rgctx_data(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(il2cppRetVal, L_24, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		return;
	}

IL_00c4:
	{
		bool L_25 = (il2cpp_defaults.sbyte_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_25)
		{
			goto IL_00fb;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_26 = __this->___m_jobject;
		intptr_t L_27;
		L_27 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_26, NULL);
		intptr_t L_28 = ___0_fieldID;
		int8_t L_29;
		L_29 = AndroidJNISafe_GetSByteField_mAD3B08AA8A97F77CAE17DD25B0F389AFAC2023B1(L_27, L_28, NULL);
		int8_t L_30 = L_29;
		il2cpp_codegen_box_unbox((&L_30), L_31, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29, il2cpp_defaults.sbyte_class, il2cpp_rgctx_data(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(il2cppRetVal, L_31, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		return;
	}

IL_00fb:
	{
		bool L_32 = (il2cpp_defaults.int16_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_32)
		{
			goto IL_0132;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_33 = __this->___m_jobject;
		intptr_t L_34;
		L_34 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_33, NULL);
		intptr_t L_35 = ___0_fieldID;
		int16_t L_36;
		L_36 = AndroidJNISafe_GetShortField_m5D21E87061C1DAC89DF58671C53432D0361F0C6E(L_34, L_35, NULL);
		int16_t L_37 = L_36;
		il2cpp_codegen_box_unbox((&L_37), L_38, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29, il2cpp_defaults.int16_class, il2cpp_rgctx_data(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(il2cppRetVal, L_38, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		return;
	}

IL_0132:
	{
		bool L_39 = (il2cpp_defaults.int64_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_39)
		{
			goto IL_0169;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_40 = __this->___m_jobject;
		intptr_t L_41;
		L_41 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_40, NULL);
		intptr_t L_42 = ___0_fieldID;
		int64_t L_43;
		L_43 = AndroidJNISafe_GetLongField_m7DD751358D10BB276D8A95D413B9DFB1E8EE81D8(L_41, L_42, NULL);
		int64_t L_44 = L_43;
		il2cpp_codegen_box_unbox((&L_44), L_45, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29, il2cpp_defaults.int64_class, il2cpp_rgctx_data(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(il2cppRetVal, L_45, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		return;
	}

IL_0169:
	{
		bool L_46 = (il2cpp_defaults.single_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_46)
		{
			goto IL_01a0;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_47 = __this->___m_jobject;
		intptr_t L_48;
		L_48 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_47, NULL);
		intptr_t L_49 = ___0_fieldID;
		float L_50;
		L_50 = AndroidJNISafe_GetFloatField_m1EAA1ED33002BBA28CA2B630521D6BF1B7D3A2E7(L_48, L_49, NULL);
		float L_51 = L_50;
		il2cpp_codegen_box_unbox((&L_51), L_52, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29, il2cpp_defaults.single_class, il2cpp_rgctx_data(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(il2cppRetVal, L_52, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		return;
	}

IL_01a0:
	{
		bool L_53 = (il2cpp_defaults.double_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_53)
		{
			goto IL_01d7;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_54 = __this->___m_jobject;
		intptr_t L_55;
		L_55 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_54, NULL);
		intptr_t L_56 = ___0_fieldID;
		double L_57;
		L_57 = AndroidJNISafe_GetDoubleField_mBCBD5E80223EDECC06FA783F34149E3625219074(L_55, L_56, NULL);
		double L_58 = L_57;
		il2cpp_codegen_box_unbox((&L_58), L_59, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29, il2cpp_defaults.double_class, il2cpp_rgctx_data(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(il2cppRetVal, L_59, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		return;
	}

IL_01d7:
	{
		bool L_60 = (il2cpp_defaults.char_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_60)
		{
			goto IL_0340;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_61 = __this->___m_jobject;
		intptr_t L_62;
		L_62 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_61, NULL);
		intptr_t L_63 = ___0_fieldID;
		Il2CppChar L_64;
		L_64 = AndroidJNISafe_GetCharField_m8301FA96B40E27C032590FE3F8E84A777A4739C3(L_62, L_63, NULL);
		Il2CppChar L_65 = L_64;
		il2cpp_codegen_box_unbox((&L_65), L_66, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29, il2cpp_defaults.char_class, il2cpp_rgctx_data(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(il2cppRetVal, L_66, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		return;
	}

IL_0211:
	{
		bool L_67 = (il2cpp_defaults.string_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_67)
		{
			goto IL_0243;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_68 = __this->___m_jobject;
		intptr_t L_69;
		L_69 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_68, NULL);
		intptr_t L_70 = ___0_fieldID;
		String_t* L_71;
		L_71 = AndroidJNISafe_GetStringField_mADFCA05D6DE790600B57E90B20F2E75AFC036B0F(L_69, L_70, NULL);
		void* L_73 = UnBox_Any((RuntimeObject*)L_71, il2cpp_rgctx_data(method->rgctx_data, 1), L_72);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_73)), SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		return;
	}

IL_0243:
	{
		bool L_74 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_74)
		{
			goto IL_0293;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_75 = __this->___m_jobject;
		intptr_t L_76;
		L_76 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_75, NULL);
		intptr_t L_77 = ___0_fieldID;
		intptr_t L_78;
		L_78 = AndroidJNISafe_GetObjectField_mCF3BB1C38718D6F55081126BC7F6C286B382B275(L_76, L_77, NULL);
		V_0 = L_78;
		intptr_t L_79 = V_0;
		bool L_80;
		L_80 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_79, 0, NULL);
		if (L_80)
		{
			goto IL_0289;
		}
	}
	{
		intptr_t L_81 = V_0;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_82;
		L_82 = AndroidJavaObject_AndroidJavaClassDeleteLocalRef_m56C84D7516BCB51A84E8AFDB3FCA46BAF494548F(L_81, NULL);
		void* L_84 = UnBox_Any((RuntimeObject*)L_82, il2cpp_rgctx_data(method->rgctx_data, 1), L_83);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_84)), SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		return;
	}

IL_0289:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		il2cpp_codegen_memcpy(L_85, V_1, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		il2cpp_codegen_memcpy(il2cppRetVal, L_85, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		return;
	}

IL_0293:
	{
		bool L_86 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_86)
		{
			goto IL_02e3;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_87 = __this->___m_jobject;
		intptr_t L_88;
		L_88 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_87, NULL);
		intptr_t L_89 = ___0_fieldID;
		intptr_t L_90;
		L_90 = AndroidJNISafe_GetObjectField_mCF3BB1C38718D6F55081126BC7F6C286B382B275(L_88, L_89, NULL);
		V_2 = L_90;
		intptr_t L_91 = V_2;
		bool L_92;
		L_92 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_91, 0, NULL);
		if (L_92)
		{
			goto IL_02d9;
		}
	}
	{
		intptr_t L_93 = V_2;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_94;
		L_94 = AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_m2ECEEAF6389ABB9D6B963B8A98568ECD9413DF3C(L_93, NULL);
		void* L_96 = UnBox_Any((RuntimeObject*)L_94, il2cpp_rgctx_data(method->rgctx_data, 1), L_95);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_96)), SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		return;
	}

IL_02d9:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		il2cpp_codegen_memcpy(L_97, V_1, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		il2cpp_codegen_memcpy(il2cppRetVal, L_97, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		return;
	}

IL_02e3:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_98 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.array_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_99;
		L_99 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_98, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_100 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_101;
		L_101 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_100, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_102;
		L_102 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_99, L_101, NULL);
		if (!L_102)
		{
			goto IL_0315;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_103 = __this->___m_jobject;
		intptr_t L_104;
		L_104 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_103, NULL);
		intptr_t L_105 = ___0_fieldID;
		intptr_t L_106;
		L_106 = AndroidJNISafe_GetObjectField_mCF3BB1C38718D6F55081126BC7F6C286B382B275(L_104, L_105, NULL);
		InvokerActionInvoker2< intptr_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_106, (Il2CppFullySharedGenericAny*)L_107);
		il2cpp_codegen_memcpy(il2cppRetVal, L_107, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		return;
	}

IL_0315:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_108 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_109;
		L_109 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_108, NULL);
		Type_t* L_110 = L_109;
		if (L_110)
		{
			G_B33_0 = L_110;
			G_B33_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45BE536C9F5116AD2AF9F35AA7EF84EC0980CA92));
			goto IL_032b;
		}
		G_B32_0 = L_110;
		G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45BE536C9F5116AD2AF9F35AA7EF84EC0980CA92));
	}
	{
		G_B34_0 = ((String_t*)(NULL));
		G_B34_1 = G_B32_1;
		goto IL_0330;
	}

IL_032b:
	{
		NullCheck((RuntimeObject*)G_B33_0);
		String_t* L_111;
		L_111 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B33_0);
		G_B34_0 = L_111;
		G_B34_1 = G_B33_1;
	}

IL_0330:
	{
		String_t* L_112;
		L_112 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B34_1, G_B34_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_113 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_113, L_112, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_113, method);
	}

IL_0340:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		il2cpp_codegen_memcpy(L_114, V_1, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		il2cpp_codegen_memcpy(il2cppRetVal, L_114, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__Get_TisIl2CppFullySharedGenericAny_m6AA7C8A5BE069836640026CB6EDA5D93B3246683_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_FieldType_tBD81DD51AB3076BC0134BD255EBBAC34E341C535 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_FieldType_tBD81DD51AB3076BC0134BD255EBBAC34E341C535);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_0, NULL);
		String_t* L_2 = ___0_fieldName;
		intptr_t L_3;
		L_3 = ((  intptr_t (*) (intptr_t, String_t*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_3;
		intptr_t L_4 = V_0;
		InvokerActionInvoker2< intptr_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_4, (Il2CppFullySharedGenericAny*)L_5);
		il2cpp_codegen_memcpy(il2cppRetVal, L_5, SizeOf_FieldType_tBD81DD51AB3076BC0134BD255EBBAC34E341C535);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* AndroidJavaObject__GetStatic_TisIl2CppSharedGenericObject_mF12B3A136CBDB98DF0876DF1FC47EA4A14D98A17_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppSharedGenericObject* V_1 = NULL;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	Type_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	Type_t* G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	String_t* G_B34_0 = NULL;
	String_t* G_B34_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_1, NULL);
		if (!L_2)
		{
			goto IL_0211;
		}
	}
	{
		goto IL_004b;
	}

IL_004b:
	{
		goto IL_0082;
	}

IL_0082:
	{
		goto IL_00c4;
	}

IL_00c4:
	{
		goto IL_00fb;
	}

IL_00fb:
	{
		goto IL_0132;
	}

IL_0132:
	{
		goto IL_0169;
	}

IL_0169:
	{
		goto IL_01a0;
	}

IL_01a0:
	{
		goto IL_01d7;
	}

IL_01d7:
	{
		goto IL_0340;
	}

IL_0211:
	{
		bool L_3 = (il2cpp_defaults.string_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_3)
		{
			goto IL_0243;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_4 = __this->___m_jclass;
		intptr_t L_5;
		L_5 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_4, NULL);
		intptr_t L_6 = ___0_fieldID;
		String_t* L_7;
		L_7 = AndroidJNISafe_GetStaticStringField_mB3D1325B08A38C7DAF1FA3E6CB52F6D8E0A2CB47(L_5, L_6, NULL);
		return ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_0243:
	{
		bool L_8 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_8)
		{
			goto IL_0293;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_9 = __this->___m_jclass;
		intptr_t L_10;
		L_10 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_9, NULL);
		intptr_t L_11 = ___0_fieldID;
		intptr_t L_12;
		L_12 = AndroidJNISafe_GetStaticObjectField_mB6B9A9EB2619DFDF1DA56300BF9FEC19BF883867(L_10, L_11, NULL);
		V_0 = L_12;
		intptr_t L_13 = V_0;
		bool L_14;
		L_14 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_13, 0, NULL);
		if (L_14)
		{
			goto IL_0289;
		}
	}
	{
		intptr_t L_15 = V_0;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_16;
		L_16 = AndroidJavaObject_AndroidJavaClassDeleteLocalRef_m56C84D7516BCB51A84E8AFDB3FCA46BAF494548F(L_15, NULL);
		return ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_16, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_0289:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_17 = V_1;
		return L_17;
	}

IL_0293:
	{
		bool L_18 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_18)
		{
			goto IL_02e3;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_19 = __this->___m_jclass;
		intptr_t L_20;
		L_20 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_19, NULL);
		intptr_t L_21 = ___0_fieldID;
		intptr_t L_22;
		L_22 = AndroidJNISafe_GetStaticObjectField_mB6B9A9EB2619DFDF1DA56300BF9FEC19BF883867(L_20, L_21, NULL);
		V_2 = L_22;
		intptr_t L_23 = V_2;
		bool L_24;
		L_24 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_23, 0, NULL);
		if (L_24)
		{
			goto IL_02d9;
		}
	}
	{
		intptr_t L_25 = V_2;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_26;
		L_26 = AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_m2ECEEAF6389ABB9D6B963B8A98568ECD9413DF3C(L_25, NULL);
		return ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_02d9:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_27 = V_1;
		return L_27;
	}

IL_02e3:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.array_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_31;
		L_31 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_30, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_29, L_31, NULL);
		if (!L_32)
		{
			goto IL_0315;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_33 = __this->___m_jclass;
		intptr_t L_34;
		L_34 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_33, NULL);
		intptr_t L_35 = ___0_fieldID;
		intptr_t L_36;
		L_36 = AndroidJNISafe_GetStaticObjectField_mB6B9A9EB2619DFDF1DA56300BF9FEC19BF883867(L_34, L_35, NULL);
		Il2CppSharedGenericObject* L_37;
		L_37 = AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisIl2CppSharedGenericObject_mB1CEFE624E92B82D234C1982AA2A7DF6AC5FD284(L_36, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_37;
	}

IL_0315:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_38 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_39;
		L_39 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_38, NULL);
		Type_t* L_40 = L_39;
		if (L_40)
		{
			G_B33_0 = L_40;
			G_B33_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45BE536C9F5116AD2AF9F35AA7EF84EC0980CA92));
			goto IL_032b;
		}
		G_B32_0 = L_40;
		G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45BE536C9F5116AD2AF9F35AA7EF84EC0980CA92));
	}
	{
		G_B34_0 = ((String_t*)(NULL));
		G_B34_1 = G_B32_1;
		goto IL_0330;
	}

IL_032b:
	{
		NullCheck((RuntimeObject*)G_B33_0);
		String_t* L_41;
		L_41 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B33_0);
		G_B34_0 = L_41;
		G_B34_1 = G_B33_1;
	}

IL_0330:
	{
		String_t* L_42;
		L_42 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B34_1, G_B34_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_43 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_43, L_42, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_43, method);
	}

IL_0340:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_44 = V_1;
		return L_44;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* AndroidJavaObject__GetStatic_TisIl2CppSharedGenericObject_m177F1A057E8F5EF05D9158BA272E890C6210044B_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_0, NULL);
		String_t* L_2 = ___0_fieldName;
		intptr_t L_3;
		L_3 = AndroidJNIHelper_GetFieldID_TisIl2CppSharedGenericObject_mDFF491584A820BE0629A47ED3B790A199050D589(L_1, L_2, (bool)1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_3;
		intptr_t L_4 = V_0;
		Il2CppSharedGenericObject* L_5;
		L_5 = AndroidJavaObject__GetStatic_TisIl2CppSharedGenericObject_mF12B3A136CBDB98DF0876DF1FC47EA4A14D98A17(__this, L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__GetStatic_TisIl2CppFullySharedGenericAny_m265EB43F18C8FB22DCD571C5E50A76642369551D_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50E02893F5B6939534A49C535241D6B7BAFCF599);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
	const Il2CppFullySharedGenericAny L_16 = L_9;
	const Il2CppFullySharedGenericAny L_24 = L_9;
	const Il2CppFullySharedGenericAny L_31 = L_9;
	const Il2CppFullySharedGenericAny L_38 = L_9;
	const Il2CppFullySharedGenericAny L_45 = L_9;
	const Il2CppFullySharedGenericAny L_52 = L_9;
	const Il2CppFullySharedGenericAny L_59 = L_9;
	const Il2CppFullySharedGenericAny L_66 = L_9;
	const Il2CppFullySharedGenericAny L_72 = L_9;
	const Il2CppFullySharedGenericAny L_83 = L_9;
	const Il2CppFullySharedGenericAny L_85 = L_9;
	const Il2CppFullySharedGenericAny L_95 = L_9;
	const Il2CppFullySharedGenericAny L_97 = L_9;
	const Il2CppFullySharedGenericAny L_107 = L_9;
	const Il2CppFullySharedGenericAny L_114 = L_9;
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
	memset(V_1, 0, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	Type_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	Type_t* G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	String_t* G_B34_0 = NULL;
	String_t* G_B34_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_1, NULL);
		if (!L_2)
		{
			goto IL_0211;
		}
	}
	{
		bool L_3 = (il2cpp_defaults.int32_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_3)
		{
			goto IL_004b;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_4 = __this->___m_jclass;
		intptr_t L_5;
		L_5 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_4, NULL);
		intptr_t L_6 = ___0_fieldID;
		int32_t L_7;
		L_7 = AndroidJNISafe_GetStaticIntField_m0698D50C44E490A009E8388C7321630DED5973BD(L_5, L_6, NULL);
		int32_t L_8 = L_7;
		il2cpp_codegen_box_unbox((&L_8), L_9, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3, il2cpp_defaults.int32_class, il2cpp_rgctx_data(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(il2cppRetVal, L_9, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		return;
	}

IL_004b:
	{
		bool L_10 = (il2cpp_defaults.boolean_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_10)
		{
			goto IL_0082;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_11 = __this->___m_jclass;
		intptr_t L_12;
		L_12 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_11, NULL);
		intptr_t L_13 = ___0_fieldID;
		bool L_14;
		L_14 = AndroidJNISafe_GetStaticBooleanField_m172BEAA3F0AB6754EA5F1AD30C36DAA0D3D7C666(L_12, L_13, NULL);
		bool L_15 = L_14;
		il2cpp_codegen_box_unbox((&L_15), L_16, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3, il2cpp_defaults.boolean_class, il2cpp_rgctx_data(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(il2cppRetVal, L_16, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		return;
	}

IL_0082:
	{
		bool L_17 = (il2cpp_defaults.byte_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_17)
		{
			goto IL_00c4;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteral50E02893F5B6939534A49C535241D6B7BAFCF599, NULL);
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_18 = __this->___m_jclass;
		intptr_t L_19;
		L_19 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_18, NULL);
		intptr_t L_20 = ___0_fieldID;
		int8_t L_21;
		L_21 = AndroidJNISafe_GetStaticSByteField_m77596E5B1AE58DAFF39268AC954CAD53974A688D(L_19, L_20, NULL);
		uint8_t L_22 = (il2cpp_codegen_conv<uint8_t,int8_t,int32_t,false,false>(L_21,NULL));
		uint8_t L_23 = L_22;
		il2cpp_codegen_box_unbox((&L_23), L_24, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3, il2cpp_defaults.byte_class, il2cpp_rgctx_data(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(il2cppRetVal, L_24, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		return;
	}

IL_00c4:
	{
		bool L_25 = (il2cpp_defaults.sbyte_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_25)
		{
			goto IL_00fb;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_26 = __this->___m_jclass;
		intptr_t L_27;
		L_27 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_26, NULL);
		intptr_t L_28 = ___0_fieldID;
		int8_t L_29;
		L_29 = AndroidJNISafe_GetStaticSByteField_m77596E5B1AE58DAFF39268AC954CAD53974A688D(L_27, L_28, NULL);
		int8_t L_30 = L_29;
		il2cpp_codegen_box_unbox((&L_30), L_31, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3, il2cpp_defaults.sbyte_class, il2cpp_rgctx_data(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(il2cppRetVal, L_31, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		return;
	}

IL_00fb:
	{
		bool L_32 = (il2cpp_defaults.int16_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_32)
		{
			goto IL_0132;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_33 = __this->___m_jclass;
		intptr_t L_34;
		L_34 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_33, NULL);
		intptr_t L_35 = ___0_fieldID;
		int16_t L_36;
		L_36 = AndroidJNISafe_GetStaticShortField_m83716D4D85B30F26803F866AC47D5C04AAB5D320(L_34, L_35, NULL);
		int16_t L_37 = L_36;
		il2cpp_codegen_box_unbox((&L_37), L_38, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3, il2cpp_defaults.int16_class, il2cpp_rgctx_data(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(il2cppRetVal, L_38, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		return;
	}

IL_0132:
	{
		bool L_39 = (il2cpp_defaults.int64_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_39)
		{
			goto IL_0169;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_40 = __this->___m_jclass;
		intptr_t L_41;
		L_41 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_40, NULL);
		intptr_t L_42 = ___0_fieldID;
		int64_t L_43;
		L_43 = AndroidJNISafe_GetStaticLongField_mABC2B933CEB757E3FAF1FD6C60AA0C4D38E9C49D(L_41, L_42, NULL);
		int64_t L_44 = L_43;
		il2cpp_codegen_box_unbox((&L_44), L_45, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3, il2cpp_defaults.int64_class, il2cpp_rgctx_data(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(il2cppRetVal, L_45, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		return;
	}

IL_0169:
	{
		bool L_46 = (il2cpp_defaults.single_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_46)
		{
			goto IL_01a0;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_47 = __this->___m_jclass;
		intptr_t L_48;
		L_48 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_47, NULL);
		intptr_t L_49 = ___0_fieldID;
		float L_50;
		L_50 = AndroidJNISafe_GetStaticFloatField_mD1456B729026959309A839C2647279C0B6541356(L_48, L_49, NULL);
		float L_51 = L_50;
		il2cpp_codegen_box_unbox((&L_51), L_52, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3, il2cpp_defaults.single_class, il2cpp_rgctx_data(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(il2cppRetVal, L_52, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		return;
	}

IL_01a0:
	{
		bool L_53 = (il2cpp_defaults.double_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_53)
		{
			goto IL_01d7;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_54 = __this->___m_jclass;
		intptr_t L_55;
		L_55 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_54, NULL);
		intptr_t L_56 = ___0_fieldID;
		double L_57;
		L_57 = AndroidJNISafe_GetStaticDoubleField_mEB86F2CE1F3879AAA9DEDA4B496F882C0E1DCBC2(L_55, L_56, NULL);
		double L_58 = L_57;
		il2cpp_codegen_box_unbox((&L_58), L_59, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3, il2cpp_defaults.double_class, il2cpp_rgctx_data(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(il2cppRetVal, L_59, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		return;
	}

IL_01d7:
	{
		bool L_60 = (il2cpp_defaults.char_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_60)
		{
			goto IL_0340;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_61 = __this->___m_jclass;
		intptr_t L_62;
		L_62 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_61, NULL);
		intptr_t L_63 = ___0_fieldID;
		Il2CppChar L_64;
		L_64 = AndroidJNISafe_GetStaticCharField_mF70F6D197261364AF2A9E875D84DDDA35BD0ED96(L_62, L_63, NULL);
		Il2CppChar L_65 = L_64;
		il2cpp_codegen_box_unbox((&L_65), L_66, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3, il2cpp_defaults.char_class, il2cpp_rgctx_data(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(il2cppRetVal, L_66, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		return;
	}

IL_0211:
	{
		bool L_67 = (il2cpp_defaults.string_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_67)
		{
			goto IL_0243;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_68 = __this->___m_jclass;
		intptr_t L_69;
		L_69 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_68, NULL);
		intptr_t L_70 = ___0_fieldID;
		String_t* L_71;
		L_71 = AndroidJNISafe_GetStaticStringField_mB3D1325B08A38C7DAF1FA3E6CB52F6D8E0A2CB47(L_69, L_70, NULL);
		void* L_73 = UnBox_Any((RuntimeObject*)L_71, il2cpp_rgctx_data(method->rgctx_data, 1), L_72);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_73)), SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		return;
	}

IL_0243:
	{
		bool L_74 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_74)
		{
			goto IL_0293;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_75 = __this->___m_jclass;
		intptr_t L_76;
		L_76 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_75, NULL);
		intptr_t L_77 = ___0_fieldID;
		intptr_t L_78;
		L_78 = AndroidJNISafe_GetStaticObjectField_mB6B9A9EB2619DFDF1DA56300BF9FEC19BF883867(L_76, L_77, NULL);
		V_0 = L_78;
		intptr_t L_79 = V_0;
		bool L_80;
		L_80 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_79, 0, NULL);
		if (L_80)
		{
			goto IL_0289;
		}
	}
	{
		intptr_t L_81 = V_0;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_82;
		L_82 = AndroidJavaObject_AndroidJavaClassDeleteLocalRef_m56C84D7516BCB51A84E8AFDB3FCA46BAF494548F(L_81, NULL);
		void* L_84 = UnBox_Any((RuntimeObject*)L_82, il2cpp_rgctx_data(method->rgctx_data, 1), L_83);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_84)), SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		return;
	}

IL_0289:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		il2cpp_codegen_memcpy(L_85, V_1, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		il2cpp_codegen_memcpy(il2cppRetVal, L_85, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		return;
	}

IL_0293:
	{
		bool L_86 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_86)
		{
			goto IL_02e3;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_87 = __this->___m_jclass;
		intptr_t L_88;
		L_88 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_87, NULL);
		intptr_t L_89 = ___0_fieldID;
		intptr_t L_90;
		L_90 = AndroidJNISafe_GetStaticObjectField_mB6B9A9EB2619DFDF1DA56300BF9FEC19BF883867(L_88, L_89, NULL);
		V_2 = L_90;
		intptr_t L_91 = V_2;
		bool L_92;
		L_92 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_91, 0, NULL);
		if (L_92)
		{
			goto IL_02d9;
		}
	}
	{
		intptr_t L_93 = V_2;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_94;
		L_94 = AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_m2ECEEAF6389ABB9D6B963B8A98568ECD9413DF3C(L_93, NULL);
		void* L_96 = UnBox_Any((RuntimeObject*)L_94, il2cpp_rgctx_data(method->rgctx_data, 1), L_95);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_96)), SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		return;
	}

IL_02d9:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		il2cpp_codegen_memcpy(L_97, V_1, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		il2cpp_codegen_memcpy(il2cppRetVal, L_97, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		return;
	}

IL_02e3:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_98 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.array_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_99;
		L_99 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_98, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_100 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_101;
		L_101 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_100, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_102;
		L_102 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_99, L_101, NULL);
		if (!L_102)
		{
			goto IL_0315;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_103 = __this->___m_jclass;
		intptr_t L_104;
		L_104 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_103, NULL);
		intptr_t L_105 = ___0_fieldID;
		intptr_t L_106;
		L_106 = AndroidJNISafe_GetStaticObjectField_mB6B9A9EB2619DFDF1DA56300BF9FEC19BF883867(L_104, L_105, NULL);
		InvokerActionInvoker2< intptr_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_106, (Il2CppFullySharedGenericAny*)L_107);
		il2cpp_codegen_memcpy(il2cppRetVal, L_107, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		return;
	}

IL_0315:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_108 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_109;
		L_109 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_108, NULL);
		Type_t* L_110 = L_109;
		if (L_110)
		{
			G_B33_0 = L_110;
			G_B33_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45BE536C9F5116AD2AF9F35AA7EF84EC0980CA92));
			goto IL_032b;
		}
		G_B32_0 = L_110;
		G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45BE536C9F5116AD2AF9F35AA7EF84EC0980CA92));
	}
	{
		G_B34_0 = ((String_t*)(NULL));
		G_B34_1 = G_B32_1;
		goto IL_0330;
	}

IL_032b:
	{
		NullCheck((RuntimeObject*)G_B33_0);
		String_t* L_111;
		L_111 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B33_0);
		G_B34_0 = L_111;
		G_B34_1 = G_B33_1;
	}

IL_0330:
	{
		String_t* L_112;
		L_112 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B34_1, G_B34_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_113 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_113, L_112, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_113, method);
	}

IL_0340:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		il2cpp_codegen_memcpy(L_114, V_1, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		il2cpp_codegen_memcpy(il2cppRetVal, L_114, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__GetStatic_TisIl2CppFullySharedGenericAny_m5FA6F86B221B6AD76DDD71818F721187D59BFC38_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_FieldType_t31FF3BC94504224433BABB9DAD6CE4032EA80634 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_FieldType_t31FF3BC94504224433BABB9DAD6CE4032EA80634);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_0, NULL);
		String_t* L_2 = ___0_fieldName;
		intptr_t L_3;
		L_3 = ((  intptr_t (*) (intptr_t, String_t*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, (bool)1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_3;
		intptr_t L_4 = V_0;
		InvokerActionInvoker2< intptr_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_4, (Il2CppFullySharedGenericAny*)L_5);
		il2cpp_codegen_memcpy(il2cppRetVal, L_5, SizeOf_FieldType_t31FF3BC94504224433BABB9DAD6CE4032EA80634);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__Set_TisIl2CppFullySharedGenericAny_m84E47B5A5FF416288BF85C7F79F287D6FD90356F_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, Il2CppFullySharedGenericAny ___1_val, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D86DE1FC0445C55F712ED0F6D3E32FED0A1E724);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_FieldType_tC72607BAF758371FA7A7DDA2D0873E433EE11D19 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_FieldType_tC72607BAF758371FA7A7DDA2D0873E433EE11D19);
	const Il2CppFullySharedGenericAny L_13 = L_7;
	const Il2CppFullySharedGenericAny L_19 = L_7;
	const Il2CppFullySharedGenericAny L_26 = L_7;
	const Il2CppFullySharedGenericAny L_32 = L_7;
	const Il2CppFullySharedGenericAny L_38 = L_7;
	const Il2CppFullySharedGenericAny L_44 = L_7;
	const Il2CppFullySharedGenericAny L_50 = L_7;
	const Il2CppFullySharedGenericAny L_56 = L_7;
	const Il2CppFullySharedGenericAny L_62 = L_7;
	const Il2CppFullySharedGenericAny L_68 = L_7;
	const Il2CppFullySharedGenericAny L_70 = L_7;
	const Il2CppFullySharedGenericAny L_78 = L_7;
	const Il2CppFullySharedGenericAny L_80 = L_7;
	const Il2CppFullySharedGenericAny L_92 = L_7;
	const Il2CppFullySharedGenericAny L_94 = L_7;
	const Il2CppFullySharedGenericAny L_102 = L_7;
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t G_B24_0;
	memset((&G_B24_0), 0, sizeof(G_B24_0));
	intptr_t G_B24_1;
	memset((&G_B24_1), 0, sizeof(G_B24_1));
	intptr_t G_B23_0;
	memset((&G_B23_0), 0, sizeof(G_B23_0));
	intptr_t G_B23_1;
	memset((&G_B23_1), 0, sizeof(G_B23_1));
	intptr_t G_B25_0;
	memset((&G_B25_0), 0, sizeof(G_B25_0));
	intptr_t G_B25_1;
	memset((&G_B25_1), 0, sizeof(G_B25_1));
	intptr_t G_B25_2;
	memset((&G_B25_2), 0, sizeof(G_B25_2));
	intptr_t G_B29_0;
	memset((&G_B29_0), 0, sizeof(G_B29_0));
	intptr_t G_B29_1;
	memset((&G_B29_1), 0, sizeof(G_B29_1));
	intptr_t G_B28_0;
	memset((&G_B28_0), 0, sizeof(G_B28_0));
	intptr_t G_B28_1;
	memset((&G_B28_1), 0, sizeof(G_B28_1));
	intptr_t G_B30_0;
	memset((&G_B30_0), 0, sizeof(G_B30_0));
	intptr_t G_B30_1;
	memset((&G_B30_1), 0, sizeof(G_B30_1));
	intptr_t G_B30_2;
	memset((&G_B30_2), 0, sizeof(G_B30_2));
	intptr_t G_B34_0;
	memset((&G_B34_0), 0, sizeof(G_B34_0));
	intptr_t G_B34_1;
	memset((&G_B34_1), 0, sizeof(G_B34_1));
	intptr_t G_B33_0;
	memset((&G_B33_0), 0, sizeof(G_B33_0));
	intptr_t G_B33_1;
	memset((&G_B33_1), 0, sizeof(G_B33_1));
	intptr_t G_B35_0;
	memset((&G_B35_0), 0, sizeof(G_B35_0));
	intptr_t G_B35_1;
	memset((&G_B35_1), 0, sizeof(G_B35_1));
	intptr_t G_B35_2;
	memset((&G_B35_2), 0, sizeof(G_B35_2));
	Type_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	Type_t* G_B39_0 = NULL;
	String_t* G_B39_1 = NULL;
	String_t* G_B41_0 = NULL;
	String_t* G_B41_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_1, NULL);
		if (!L_2)
		{
			goto IL_021a;
		}
	}
	{
		bool L_3 = (il2cpp_defaults.int32_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_3)
		{
			goto IL_004c;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_4 = __this->___m_jobject;
		intptr_t L_5;
		L_5 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_4, NULL);
		intptr_t L_6 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tC72607BAF758371FA7A7DDA2D0873E433EE11D19);
		int32_t L_8;
		il2cpp_codegen_box_unbox(L_7, (&L_8), sizeof(int32_t), il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_defaults.int32_class);
		AndroidJNISafe_SetIntField_mD238DA37BA1B3D7693484237951A6EFEA9C62120(L_5, L_6, L_8, NULL);
		return;
	}

IL_004c:
	{
		bool L_9 = (il2cpp_defaults.boolean_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_9)
		{
			goto IL_0084;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_10 = __this->___m_jobject;
		intptr_t L_11;
		L_11 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_10, NULL);
		intptr_t L_12 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tC72607BAF758371FA7A7DDA2D0873E433EE11D19);
		bool L_14;
		il2cpp_codegen_box_unbox(L_13, (&L_14), sizeof(bool), il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_defaults.boolean_class);
		AndroidJNISafe_SetBooleanField_m5279EA41B214699E79733DC6C93259CC9DCA1D9E(L_11, L_12, L_14, NULL);
		return;
	}

IL_0084:
	{
		bool L_15 = (il2cpp_defaults.byte_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_15)
		{
			goto IL_00c7;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteral1D86DE1FC0445C55F712ED0F6D3E32FED0A1E724, NULL);
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_16 = __this->___m_jobject;
		intptr_t L_17;
		L_17 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_16, NULL);
		intptr_t L_18 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_19, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tC72607BAF758371FA7A7DDA2D0873E433EE11D19);
		uint8_t L_20;
		il2cpp_codegen_box_unbox(L_19, (&L_20), sizeof(uint8_t), il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_defaults.byte_class);
		int8_t L_21 = (il2cpp_codegen_conv<int8_t,uint8_t,int32_t,false,false>(L_20,NULL));
		AndroidJNISafe_SetSByteField_mB021168746571E7CAA8C0EAD7AA7F02C18B5EE33(L_17, L_18, L_21, NULL);
		return;
	}

IL_00c7:
	{
		bool L_22 = (il2cpp_defaults.sbyte_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_22)
		{
			goto IL_00ff;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_23 = __this->___m_jobject;
		intptr_t L_24;
		L_24 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_23, NULL);
		intptr_t L_25 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_26, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tC72607BAF758371FA7A7DDA2D0873E433EE11D19);
		int8_t L_27;
		il2cpp_codegen_box_unbox(L_26, (&L_27), sizeof(int8_t), il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_defaults.sbyte_class);
		AndroidJNISafe_SetSByteField_mB021168746571E7CAA8C0EAD7AA7F02C18B5EE33(L_24, L_25, L_27, NULL);
		return;
	}

IL_00ff:
	{
		bool L_28 = (il2cpp_defaults.int16_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_28)
		{
			goto IL_0137;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_29 = __this->___m_jobject;
		intptr_t L_30;
		L_30 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_29, NULL);
		intptr_t L_31 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_32, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tC72607BAF758371FA7A7DDA2D0873E433EE11D19);
		int16_t L_33;
		il2cpp_codegen_box_unbox(L_32, (&L_33), sizeof(int16_t), il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_defaults.int16_class);
		AndroidJNISafe_SetShortField_mF95E569C142DEDD604CE8BA7617328B3EDDD2F0D(L_30, L_31, L_33, NULL);
		return;
	}

IL_0137:
	{
		bool L_34 = (il2cpp_defaults.int64_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_34)
		{
			goto IL_016f;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_35 = __this->___m_jobject;
		intptr_t L_36;
		L_36 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_35, NULL);
		intptr_t L_37 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_38, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tC72607BAF758371FA7A7DDA2D0873E433EE11D19);
		int64_t L_39;
		il2cpp_codegen_box_unbox(L_38, (&L_39), sizeof(int64_t), il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_defaults.int64_class);
		AndroidJNISafe_SetLongField_m13905547F5CDC7E01AB0D8C787BF98DC2870EC35(L_36, L_37, L_39, NULL);
		return;
	}

IL_016f:
	{
		bool L_40 = (il2cpp_defaults.single_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_40)
		{
			goto IL_01a7;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_41 = __this->___m_jobject;
		intptr_t L_42;
		L_42 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_41, NULL);
		intptr_t L_43 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_44, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tC72607BAF758371FA7A7DDA2D0873E433EE11D19);
		float L_45;
		il2cpp_codegen_box_unbox(L_44, (&L_45), sizeof(float), il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_defaults.single_class);
		AndroidJNISafe_SetFloatField_m589CA6B8DD2BFD4515C5AEAE3772782B293F02C3(L_42, L_43, L_45, NULL);
		return;
	}

IL_01a7:
	{
		bool L_46 = (il2cpp_defaults.double_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_46)
		{
			goto IL_01df;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_47 = __this->___m_jobject;
		intptr_t L_48;
		L_48 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_47, NULL);
		intptr_t L_49 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_50, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tC72607BAF758371FA7A7DDA2D0873E433EE11D19);
		double L_51;
		il2cpp_codegen_box_unbox(L_50, (&L_51), sizeof(double), il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_defaults.double_class);
		AndroidJNISafe_SetDoubleField_mE93D0C5EC2019A1B657BD32970FE6EFC9B005A58(L_48, L_49, L_51, NULL);
		return;
	}

IL_01df:
	{
		bool L_52 = (il2cpp_defaults.char_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_52)
		{
			goto IL_03aa;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_53 = __this->___m_jobject;
		intptr_t L_54;
		L_54 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_53, NULL);
		intptr_t L_55 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_56, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tC72607BAF758371FA7A7DDA2D0873E433EE11D19);
		Il2CppChar L_57;
		il2cpp_codegen_box_unbox(L_56, (&L_57), sizeof(Il2CppChar), il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_defaults.char_class);
		AndroidJNISafe_SetCharField_m69D09A6A2CEA55D84B240FE32D90300AAB1334F9(L_54, L_55, L_57, NULL);
		return;
	}

IL_021a:
	{
		bool L_58 = (il2cpp_defaults.string_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_58)
		{
			goto IL_0252;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_59 = __this->___m_jobject;
		intptr_t L_60;
		L_60 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_59, NULL);
		intptr_t L_61 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_62, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tC72607BAF758371FA7A7DDA2D0873E433EE11D19);
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_62);
		AndroidJNISafe_SetStringField_m649363D4E87763D6A9760359EAFB29802E90B409(L_60, L_61, ((String_t*)CastclassSealed((RuntimeObject*)L_63, il2cpp_defaults.string_class)), NULL);
		return;
	}

IL_0252:
	{
		bool L_64 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_64)
		{
			goto IL_02a3;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_65 = __this->___m_jobject;
		intptr_t L_66;
		L_66 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_65, NULL);
		intptr_t L_67 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_68, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tC72607BAF758371FA7A7DDA2D0873E433EE11D19);
		bool L_69 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_68);
		if (!L_69)
		{
			G_B24_0 = L_67;
			G_B24_1 = L_66;
			goto IL_0298;
		}
		G_B23_0 = L_67;
		G_B23_1 = L_66;
	}
	{
		il2cpp_codegen_memcpy(L_70, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tC72607BAF758371FA7A7DDA2D0873E433EE11D19);
		RuntimeObject* L_71 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_70);
		NullCheck(((AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)CastclassClass((RuntimeObject*)L_71, AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var)));
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_72 = ((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)((AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)CastclassClass((RuntimeObject*)L_71, AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var)))->___m_jclass;
		intptr_t L_73;
		L_73 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_72, NULL);
		G_B25_0 = L_73;
		G_B25_1 = G_B23_0;
		G_B25_2 = G_B23_1;
		goto IL_029d;
	}

IL_0298:
	{
		G_B25_0 = 0;
		G_B25_1 = G_B24_0;
		G_B25_2 = G_B24_1;
	}

IL_029d:
	{
		AndroidJNISafe_SetObjectField_mFE500926F9C963FF106E8AA30A16F4C671BAA8CA(G_B25_2, G_B25_1, G_B25_0, NULL);
		return;
	}

IL_02a3:
	{
		bool L_74 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_74)
		{
			goto IL_02f4;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_75 = __this->___m_jobject;
		intptr_t L_76;
		L_76 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_75, NULL);
		intptr_t L_77 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_78, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tC72607BAF758371FA7A7DDA2D0873E433EE11D19);
		bool L_79 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_78);
		if (!L_79)
		{
			G_B29_0 = L_77;
			G_B29_1 = L_76;
			goto IL_02e9;
		}
		G_B28_0 = L_77;
		G_B28_1 = L_76;
	}
	{
		il2cpp_codegen_memcpy(L_80, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tC72607BAF758371FA7A7DDA2D0873E433EE11D19);
		RuntimeObject* L_81 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_80);
		NullCheck(((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)CastclassClass((RuntimeObject*)L_81, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var)));
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_82 = ((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)CastclassClass((RuntimeObject*)L_81, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var))->___m_jobject;
		intptr_t L_83;
		L_83 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_82, NULL);
		G_B30_0 = L_83;
		G_B30_1 = G_B28_0;
		G_B30_2 = G_B28_1;
		goto IL_02ee;
	}

IL_02e9:
	{
		G_B30_0 = 0;
		G_B30_1 = G_B29_0;
		G_B30_2 = G_B29_1;
	}

IL_02ee:
	{
		AndroidJNISafe_SetObjectField_mFE500926F9C963FF106E8AA30A16F4C671BAA8CA(G_B30_2, G_B30_1, G_B30_0, NULL);
		return;
	}

IL_02f4:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_84 = { reinterpret_cast<intptr_t> (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_85;
		L_85 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_84, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_86 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_87;
		L_87 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_86, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_88;
		L_88 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_85, L_87, NULL);
		if (!L_88)
		{
			goto IL_0340;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_89 = __this->___m_jobject;
		intptr_t L_90;
		L_90 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_89, NULL);
		intptr_t L_91 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_92, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tC72607BAF758371FA7A7DDA2D0873E433EE11D19);
		bool L_93 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_92);
		if (!L_93)
		{
			G_B34_0 = L_91;
			G_B34_1 = L_90;
			goto IL_0335;
		}
		G_B33_0 = L_91;
		G_B33_1 = L_90;
	}
	{
		il2cpp_codegen_memcpy(L_94, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tC72607BAF758371FA7A7DDA2D0873E433EE11D19);
		RuntimeObject* L_95 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_94);
		NullCheck(((AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D*)CastclassClass((RuntimeObject*)L_95, AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var)));
		intptr_t L_96;
		L_96 = AndroidJavaProxy_GetRawProxy_m685E066A4D378B596CD88385B954AE90CBF328A9(((AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D*)CastclassClass((RuntimeObject*)L_95, AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var)), NULL);
		G_B35_0 = L_96;
		G_B35_1 = G_B33_0;
		G_B35_2 = G_B33_1;
		goto IL_033a;
	}

IL_0335:
	{
		G_B35_0 = 0;
		G_B35_1 = G_B34_0;
		G_B35_2 = G_B34_1;
	}

IL_033a:
	{
		AndroidJNISafe_SetObjectField_mFE500926F9C963FF106E8AA30A16F4C671BAA8CA(G_B35_2, G_B35_1, G_B35_0, NULL);
		return;
	}

IL_0340:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_97 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.array_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_98;
		L_98 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_97, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_99 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_100;
		L_100 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_99, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_101;
		L_101 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_98, L_100, NULL);
		if (!L_101)
		{
			goto IL_037f;
		}
	}
	{
		il2cpp_codegen_memcpy(L_102, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tC72607BAF758371FA7A7DDA2D0873E433EE11D19);
		RuntimeObject* L_103 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_102);
		intptr_t L_104;
		L_104 = AndroidJNIHelper_ConvertToJNIArray_mBEAE4605FF297D19AFB8CE4E8443C9C0F87E9A13(((RuntimeArray*)CastclassClass((RuntimeObject*)L_103, il2cpp_defaults.array_class)), NULL);
		V_0 = L_104;
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_105 = __this->___m_jobject;
		intptr_t L_106;
		L_106 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_105, NULL);
		intptr_t L_107 = ___0_fieldID;
		intptr_t L_108 = V_0;
		AndroidJNISafe_SetObjectField_mFE500926F9C963FF106E8AA30A16F4C671BAA8CA(L_106, L_107, L_108, NULL);
		return;
	}

IL_037f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_109 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_110;
		L_110 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_109, NULL);
		Type_t* L_111 = L_110;
		if (L_111)
		{
			G_B40_0 = L_111;
			G_B40_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45BE536C9F5116AD2AF9F35AA7EF84EC0980CA92));
			goto IL_0395;
		}
		G_B39_0 = L_111;
		G_B39_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45BE536C9F5116AD2AF9F35AA7EF84EC0980CA92));
	}
	{
		G_B41_0 = ((String_t*)(NULL));
		G_B41_1 = G_B39_1;
		goto IL_039a;
	}

IL_0395:
	{
		NullCheck((RuntimeObject*)G_B40_0);
		String_t* L_112;
		L_112 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B40_0);
		G_B41_0 = L_112;
		G_B41_1 = G_B40_1;
	}

IL_039a:
	{
		String_t* L_113;
		L_113 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B41_1, G_B41_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_114 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_114, L_113, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_114, method);
	}

IL_03aa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__Set_TisIl2CppFullySharedGenericAny_m1AF6344C2EF172B8799D007F4BAC3ECDC182BC22_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, Il2CppFullySharedGenericAny ___1_val, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_FieldType_t2F905C7C598CE04C35E1297452F5AE8BFD208DAE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_FieldType_t2F905C7C598CE04C35E1297452F5AE8BFD208DAE);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_0, NULL);
		String_t* L_2 = ___0_fieldName;
		intptr_t L_3;
		L_3 = ((  intptr_t (*) (intptr_t, String_t*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_3;
		intptr_t L_4 = V_0;
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_t2F905C7C598CE04C35E1297452F5AE8BFD208DAE);
		InvokerActionInvoker2< intptr_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), __this, L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_5: *(void**)L_5));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__SetStatic_TisIl2CppFullySharedGenericAny_m07564225CF639F8502927F2D783809867A34367A_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, Il2CppFullySharedGenericAny ___1_val, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D86DE1FC0445C55F712ED0F6D3E32FED0A1E724);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_FieldType_tCE4037CFD91325CEB0ECC8FFA61A181595DF67F7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_FieldType_tCE4037CFD91325CEB0ECC8FFA61A181595DF67F7);
	const Il2CppFullySharedGenericAny L_13 = L_7;
	const Il2CppFullySharedGenericAny L_19 = L_7;
	const Il2CppFullySharedGenericAny L_26 = L_7;
	const Il2CppFullySharedGenericAny L_32 = L_7;
	const Il2CppFullySharedGenericAny L_38 = L_7;
	const Il2CppFullySharedGenericAny L_44 = L_7;
	const Il2CppFullySharedGenericAny L_50 = L_7;
	const Il2CppFullySharedGenericAny L_56 = L_7;
	const Il2CppFullySharedGenericAny L_62 = L_7;
	const Il2CppFullySharedGenericAny L_68 = L_7;
	const Il2CppFullySharedGenericAny L_70 = L_7;
	const Il2CppFullySharedGenericAny L_78 = L_7;
	const Il2CppFullySharedGenericAny L_80 = L_7;
	const Il2CppFullySharedGenericAny L_92 = L_7;
	const Il2CppFullySharedGenericAny L_94 = L_7;
	const Il2CppFullySharedGenericAny L_102 = L_7;
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t G_B24_0;
	memset((&G_B24_0), 0, sizeof(G_B24_0));
	intptr_t G_B24_1;
	memset((&G_B24_1), 0, sizeof(G_B24_1));
	intptr_t G_B23_0;
	memset((&G_B23_0), 0, sizeof(G_B23_0));
	intptr_t G_B23_1;
	memset((&G_B23_1), 0, sizeof(G_B23_1));
	intptr_t G_B25_0;
	memset((&G_B25_0), 0, sizeof(G_B25_0));
	intptr_t G_B25_1;
	memset((&G_B25_1), 0, sizeof(G_B25_1));
	intptr_t G_B25_2;
	memset((&G_B25_2), 0, sizeof(G_B25_2));
	intptr_t G_B29_0;
	memset((&G_B29_0), 0, sizeof(G_B29_0));
	intptr_t G_B29_1;
	memset((&G_B29_1), 0, sizeof(G_B29_1));
	intptr_t G_B28_0;
	memset((&G_B28_0), 0, sizeof(G_B28_0));
	intptr_t G_B28_1;
	memset((&G_B28_1), 0, sizeof(G_B28_1));
	intptr_t G_B30_0;
	memset((&G_B30_0), 0, sizeof(G_B30_0));
	intptr_t G_B30_1;
	memset((&G_B30_1), 0, sizeof(G_B30_1));
	intptr_t G_B30_2;
	memset((&G_B30_2), 0, sizeof(G_B30_2));
	intptr_t G_B34_0;
	memset((&G_B34_0), 0, sizeof(G_B34_0));
	intptr_t G_B34_1;
	memset((&G_B34_1), 0, sizeof(G_B34_1));
	intptr_t G_B33_0;
	memset((&G_B33_0), 0, sizeof(G_B33_0));
	intptr_t G_B33_1;
	memset((&G_B33_1), 0, sizeof(G_B33_1));
	intptr_t G_B35_0;
	memset((&G_B35_0), 0, sizeof(G_B35_0));
	intptr_t G_B35_1;
	memset((&G_B35_1), 0, sizeof(G_B35_1));
	intptr_t G_B35_2;
	memset((&G_B35_2), 0, sizeof(G_B35_2));
	Type_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	Type_t* G_B39_0 = NULL;
	String_t* G_B39_1 = NULL;
	String_t* G_B41_0 = NULL;
	String_t* G_B41_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_1, NULL);
		if (!L_2)
		{
			goto IL_021a;
		}
	}
	{
		bool L_3 = (il2cpp_defaults.int32_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_3)
		{
			goto IL_004c;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_4 = __this->___m_jclass;
		intptr_t L_5;
		L_5 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_4, NULL);
		intptr_t L_6 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tCE4037CFD91325CEB0ECC8FFA61A181595DF67F7);
		int32_t L_8;
		il2cpp_codegen_box_unbox(L_7, (&L_8), sizeof(int32_t), il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_defaults.int32_class);
		AndroidJNISafe_SetStaticIntField_m1E20F6C72260CAFBF73207DCEC1816B2816EEBE1(L_5, L_6, L_8, NULL);
		return;
	}

IL_004c:
	{
		bool L_9 = (il2cpp_defaults.boolean_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_9)
		{
			goto IL_0084;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_10 = __this->___m_jclass;
		intptr_t L_11;
		L_11 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_10, NULL);
		intptr_t L_12 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tCE4037CFD91325CEB0ECC8FFA61A181595DF67F7);
		bool L_14;
		il2cpp_codegen_box_unbox(L_13, (&L_14), sizeof(bool), il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_defaults.boolean_class);
		AndroidJNISafe_SetStaticBooleanField_mBE4E40DA1B07A29D356AEEE6CB9519F2B3621AC9(L_11, L_12, L_14, NULL);
		return;
	}

IL_0084:
	{
		bool L_15 = (il2cpp_defaults.byte_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_15)
		{
			goto IL_00c7;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteral1D86DE1FC0445C55F712ED0F6D3E32FED0A1E724, NULL);
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_16 = __this->___m_jclass;
		intptr_t L_17;
		L_17 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_16, NULL);
		intptr_t L_18 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_19, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tCE4037CFD91325CEB0ECC8FFA61A181595DF67F7);
		uint8_t L_20;
		il2cpp_codegen_box_unbox(L_19, (&L_20), sizeof(uint8_t), il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_defaults.byte_class);
		int8_t L_21 = (il2cpp_codegen_conv<int8_t,uint8_t,int32_t,false,false>(L_20,NULL));
		AndroidJNISafe_SetStaticSByteField_m242120982A9227E1E8344FFE9F06FD74986D15E9(L_17, L_18, L_21, NULL);
		return;
	}

IL_00c7:
	{
		bool L_22 = (il2cpp_defaults.sbyte_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_22)
		{
			goto IL_00ff;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_23 = __this->___m_jclass;
		intptr_t L_24;
		L_24 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_23, NULL);
		intptr_t L_25 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_26, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tCE4037CFD91325CEB0ECC8FFA61A181595DF67F7);
		int8_t L_27;
		il2cpp_codegen_box_unbox(L_26, (&L_27), sizeof(int8_t), il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_defaults.sbyte_class);
		AndroidJNISafe_SetStaticSByteField_m242120982A9227E1E8344FFE9F06FD74986D15E9(L_24, L_25, L_27, NULL);
		return;
	}

IL_00ff:
	{
		bool L_28 = (il2cpp_defaults.int16_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_28)
		{
			goto IL_0137;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_29 = __this->___m_jclass;
		intptr_t L_30;
		L_30 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_29, NULL);
		intptr_t L_31 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_32, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tCE4037CFD91325CEB0ECC8FFA61A181595DF67F7);
		int16_t L_33;
		il2cpp_codegen_box_unbox(L_32, (&L_33), sizeof(int16_t), il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_defaults.int16_class);
		AndroidJNISafe_SetStaticShortField_m92534AAA86D7E1055E12936C8A7BD6B865B7DB81(L_30, L_31, L_33, NULL);
		return;
	}

IL_0137:
	{
		bool L_34 = (il2cpp_defaults.int64_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_34)
		{
			goto IL_016f;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_35 = __this->___m_jclass;
		intptr_t L_36;
		L_36 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_35, NULL);
		intptr_t L_37 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_38, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tCE4037CFD91325CEB0ECC8FFA61A181595DF67F7);
		int64_t L_39;
		il2cpp_codegen_box_unbox(L_38, (&L_39), sizeof(int64_t), il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_defaults.int64_class);
		AndroidJNISafe_SetStaticLongField_m299AAC2DE8B6747B0B5E109BABB2F3A4FC1F486E(L_36, L_37, L_39, NULL);
		return;
	}

IL_016f:
	{
		bool L_40 = (il2cpp_defaults.single_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_40)
		{
			goto IL_01a7;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_41 = __this->___m_jclass;
		intptr_t L_42;
		L_42 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_41, NULL);
		intptr_t L_43 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_44, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tCE4037CFD91325CEB0ECC8FFA61A181595DF67F7);
		float L_45;
		il2cpp_codegen_box_unbox(L_44, (&L_45), sizeof(float), il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_defaults.single_class);
		AndroidJNISafe_SetStaticFloatField_mB2EDDE632AB2088CD12F1FD12174FB86990BCBEE(L_42, L_43, L_45, NULL);
		return;
	}

IL_01a7:
	{
		bool L_46 = (il2cpp_defaults.double_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_46)
		{
			goto IL_01df;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_47 = __this->___m_jclass;
		intptr_t L_48;
		L_48 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_47, NULL);
		intptr_t L_49 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_50, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tCE4037CFD91325CEB0ECC8FFA61A181595DF67F7);
		double L_51;
		il2cpp_codegen_box_unbox(L_50, (&L_51), sizeof(double), il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_defaults.double_class);
		AndroidJNISafe_SetStaticDoubleField_mA0253927D476917D2158A9CE29F1BF535485B956(L_48, L_49, L_51, NULL);
		return;
	}

IL_01df:
	{
		bool L_52 = (il2cpp_defaults.char_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_52)
		{
			goto IL_03aa;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_53 = __this->___m_jclass;
		intptr_t L_54;
		L_54 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_53, NULL);
		intptr_t L_55 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_56, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tCE4037CFD91325CEB0ECC8FFA61A181595DF67F7);
		Il2CppChar L_57;
		il2cpp_codegen_box_unbox(L_56, (&L_57), sizeof(Il2CppChar), il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_defaults.char_class);
		AndroidJNISafe_SetStaticCharField_m2B8245275C36525798C869B7B1088B25BA663613(L_54, L_55, L_57, NULL);
		return;
	}

IL_021a:
	{
		bool L_58 = (il2cpp_defaults.string_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_58)
		{
			goto IL_0252;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_59 = __this->___m_jclass;
		intptr_t L_60;
		L_60 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_59, NULL);
		intptr_t L_61 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_62, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tCE4037CFD91325CEB0ECC8FFA61A181595DF67F7);
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_62);
		AndroidJNISafe_SetStaticStringField_m445D977B2374056C6E4607FAEDB7E99A1353E2EE(L_60, L_61, ((String_t*)CastclassSealed((RuntimeObject*)L_63, il2cpp_defaults.string_class)), NULL);
		return;
	}

IL_0252:
	{
		bool L_64 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_64)
		{
			goto IL_02a3;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_65 = __this->___m_jclass;
		intptr_t L_66;
		L_66 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_65, NULL);
		intptr_t L_67 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_68, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tCE4037CFD91325CEB0ECC8FFA61A181595DF67F7);
		bool L_69 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_68);
		if (!L_69)
		{
			G_B24_0 = L_67;
			G_B24_1 = L_66;
			goto IL_0298;
		}
		G_B23_0 = L_67;
		G_B23_1 = L_66;
	}
	{
		il2cpp_codegen_memcpy(L_70, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tCE4037CFD91325CEB0ECC8FFA61A181595DF67F7);
		RuntimeObject* L_71 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_70);
		NullCheck(((AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)CastclassClass((RuntimeObject*)L_71, AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var)));
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_72 = ((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)((AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)CastclassClass((RuntimeObject*)L_71, AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var)))->___m_jclass;
		intptr_t L_73;
		L_73 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_72, NULL);
		G_B25_0 = L_73;
		G_B25_1 = G_B23_0;
		G_B25_2 = G_B23_1;
		goto IL_029d;
	}

IL_0298:
	{
		G_B25_0 = 0;
		G_B25_1 = G_B24_0;
		G_B25_2 = G_B24_1;
	}

IL_029d:
	{
		AndroidJNISafe_SetStaticObjectField_m7757F7E30F8122DAF89F138A8AE727CB896BC721(G_B25_2, G_B25_1, G_B25_0, NULL);
		return;
	}

IL_02a3:
	{
		bool L_74 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_74)
		{
			goto IL_02f4;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_75 = __this->___m_jclass;
		intptr_t L_76;
		L_76 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_75, NULL);
		intptr_t L_77 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_78, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tCE4037CFD91325CEB0ECC8FFA61A181595DF67F7);
		bool L_79 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_78);
		if (!L_79)
		{
			G_B29_0 = L_77;
			G_B29_1 = L_76;
			goto IL_02e9;
		}
		G_B28_0 = L_77;
		G_B28_1 = L_76;
	}
	{
		il2cpp_codegen_memcpy(L_80, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tCE4037CFD91325CEB0ECC8FFA61A181595DF67F7);
		RuntimeObject* L_81 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_80);
		NullCheck(((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)CastclassClass((RuntimeObject*)L_81, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var)));
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_82 = ((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)CastclassClass((RuntimeObject*)L_81, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var))->___m_jobject;
		intptr_t L_83;
		L_83 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_82, NULL);
		G_B30_0 = L_83;
		G_B30_1 = G_B28_0;
		G_B30_2 = G_B28_1;
		goto IL_02ee;
	}

IL_02e9:
	{
		G_B30_0 = 0;
		G_B30_1 = G_B29_0;
		G_B30_2 = G_B29_1;
	}

IL_02ee:
	{
		AndroidJNISafe_SetStaticObjectField_m7757F7E30F8122DAF89F138A8AE727CB896BC721(G_B30_2, G_B30_1, G_B30_0, NULL);
		return;
	}

IL_02f4:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_84 = { reinterpret_cast<intptr_t> (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_85;
		L_85 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_84, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_86 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_87;
		L_87 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_86, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_88;
		L_88 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_85, L_87, NULL);
		if (!L_88)
		{
			goto IL_0340;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_89 = __this->___m_jclass;
		intptr_t L_90;
		L_90 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_89, NULL);
		intptr_t L_91 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_92, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tCE4037CFD91325CEB0ECC8FFA61A181595DF67F7);
		bool L_93 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_92);
		if (!L_93)
		{
			G_B34_0 = L_91;
			G_B34_1 = L_90;
			goto IL_0335;
		}
		G_B33_0 = L_91;
		G_B33_1 = L_90;
	}
	{
		il2cpp_codegen_memcpy(L_94, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tCE4037CFD91325CEB0ECC8FFA61A181595DF67F7);
		RuntimeObject* L_95 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_94);
		NullCheck(((AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D*)CastclassClass((RuntimeObject*)L_95, AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var)));
		intptr_t L_96;
		L_96 = AndroidJavaProxy_GetRawProxy_m685E066A4D378B596CD88385B954AE90CBF328A9(((AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D*)CastclassClass((RuntimeObject*)L_95, AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var)), NULL);
		G_B35_0 = L_96;
		G_B35_1 = G_B33_0;
		G_B35_2 = G_B33_1;
		goto IL_033a;
	}

IL_0335:
	{
		G_B35_0 = 0;
		G_B35_1 = G_B34_0;
		G_B35_2 = G_B34_1;
	}

IL_033a:
	{
		AndroidJNISafe_SetStaticObjectField_m7757F7E30F8122DAF89F138A8AE727CB896BC721(G_B35_2, G_B35_1, G_B35_0, NULL);
		return;
	}

IL_0340:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_97 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.array_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_98;
		L_98 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_97, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_99 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_100;
		L_100 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_99, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_101;
		L_101 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_98, L_100, NULL);
		if (!L_101)
		{
			goto IL_037f;
		}
	}
	{
		il2cpp_codegen_memcpy(L_102, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tCE4037CFD91325CEB0ECC8FFA61A181595DF67F7);
		RuntimeObject* L_103 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_102);
		intptr_t L_104;
		L_104 = AndroidJNIHelper_ConvertToJNIArray_mBEAE4605FF297D19AFB8CE4E8443C9C0F87E9A13(((RuntimeArray*)CastclassClass((RuntimeObject*)L_103, il2cpp_defaults.array_class)), NULL);
		V_0 = L_104;
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_105 = __this->___m_jclass;
		intptr_t L_106;
		L_106 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_105, NULL);
		intptr_t L_107 = ___0_fieldID;
		intptr_t L_108 = V_0;
		AndroidJNISafe_SetStaticObjectField_m7757F7E30F8122DAF89F138A8AE727CB896BC721(L_106, L_107, L_108, NULL);
		return;
	}

IL_037f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_109 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_110;
		L_110 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_109, NULL);
		Type_t* L_111 = L_110;
		if (L_111)
		{
			G_B40_0 = L_111;
			G_B40_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45BE536C9F5116AD2AF9F35AA7EF84EC0980CA92));
			goto IL_0395;
		}
		G_B39_0 = L_111;
		G_B39_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45BE536C9F5116AD2AF9F35AA7EF84EC0980CA92));
	}
	{
		G_B41_0 = ((String_t*)(NULL));
		G_B41_1 = G_B39_1;
		goto IL_039a;
	}

IL_0395:
	{
		NullCheck((RuntimeObject*)G_B40_0);
		String_t* L_112;
		L_112 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B40_0);
		G_B41_0 = L_112;
		G_B41_1 = G_B40_1;
	}

IL_039a:
	{
		String_t* L_113;
		L_113 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B41_1, G_B41_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_114 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_114, L_113, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_114, method);
	}

IL_03aa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__SetStatic_TisIl2CppFullySharedGenericAny_mA923EF05918D13946E2452B81B496229D8B952FB_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, Il2CppFullySharedGenericAny ___1_val, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_FieldType_t0374C27CAE86F7DA1E32463BA4A51CE6B68D02E1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_FieldType_t0374C27CAE86F7DA1E32463BA4A51CE6B68D02E1);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_0, NULL);
		String_t* L_2 = ___0_fieldName;
		intptr_t L_3;
		L_3 = ((  intptr_t (*) (intptr_t, String_t*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, (bool)1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_3;
		intptr_t L_4 = V_0;
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_t0374C27CAE86F7DA1E32463BA4A51CE6B68D02E1);
		InvokerActionInvoker2< intptr_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), __this, L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_5: *(void**)L_5));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050* Array_AsReadOnly_TisCustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_mD88B0D043B3113058F0A90CB78BB75E6716BE17A_gshared (CustomAttributeNamedArgumentU5BU5D_tC0A39D9401E28662213F5958EFF5D26D0681B440* ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		CustomAttributeNamedArgumentU5BU5D_tC0A39D9401E28662213F5958EFF5D26D0681B440* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		CustomAttributeNamedArgumentU5BU5D_tC0A39D9401E28662213F5958EFF5D26D0681B440* L_2 = ___0_array;
		ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050* L_3 = (ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		ReadOnlyCollection_1__ctor_m010AA1E4CD3820BCC07B77A482D6A17D5C7F14C2(L_3, (RuntimeObject*)L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513* Array_AsReadOnly_TisCustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_mC945FB68604FAA2CFA7F469D9D420F3F2830F037_gshared (CustomAttributeTypedArgumentU5BU5D_t6CAA09EC6AACBED57FC8B02C587D50BF6B738C6B* ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		CustomAttributeTypedArgumentU5BU5D_t6CAA09EC6AACBED57FC8B02C587D50BF6B738C6B* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		CustomAttributeTypedArgumentU5BU5D_t6CAA09EC6AACBED57FC8B02C587D50BF6B738C6B* L_2 = ___0_array;
		ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513* L_3 = (ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		ReadOnlyCollection_1__ctor_mE22404DEC336AFE9817BF78FF9F7F90E07EE4F7A(L_3, (RuntimeObject*)L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* Array_AsReadOnly_TisIl2CppSharedGenericObject_m3941F8A9233EDADA7E60EB1618BBBE58C11C329D_gshared (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_2 = ___0_array;
		ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* L_3 = (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		ReadOnlyCollection_1__ctor_mC1890FAC00703F47A655C35CBCB613C74A811580(L_3, (RuntimeObject*)L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* Array_AsReadOnly_TisIl2CppFullySharedGenericAny_mC6D4C312AF13E636588C50683CC2F2054B6298A4_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___0_array;
		ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* L_3 = (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		((  void (*) (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_3, (RuntimeObject*)L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mCA6AA8E08561CD273B57726185CFB10006073270_gshared (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_array, uint64_t ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = ___0_array;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		uint64_t L_5 = ___1_value;
		int32_t L_6;
		L_6 = Array_BinarySearch_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m0AA0BC859F6008F37B680B00508C065B098C7D9A(L_2, 0, L_4, L_5, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisIl2CppFullySharedGenericAny_mD7255DC86A3D47AD46661F249A70FB7D7FA0673C_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t14FAB5FC7A26C6611985105C3DFB474A16FF6AC1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t14FAB5FC7A26C6611985105C3DFB474A16FF6AC1);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_value : &___1_value), SizeOf_T_t14FAB5FC7A26C6611985105C3DFB474A16FF6AC1);
		int32_t L_6;
		L_6 = InvokerFuncInvoker5< int32_t, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Il2CppFullySharedGenericAny, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_2, 0, L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_5: *(void**)L_5), (RuntimeObject*)NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisIl2CppFullySharedGenericAny_m7E39322AE8312F6EB3768EE8329A0236270DB35B_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, Il2CppFullySharedGenericAny ___1_value, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t75EC08BCC087A0780793950F3A77D634501D99B2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t75EC08BCC087A0780793950F3A77D634501D99B2);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_value : &___1_value), SizeOf_T_t75EC08BCC087A0780793950F3A77D634501D99B2);
		RuntimeObject* L_6 = ___2_comparer;
		int32_t L_7;
		L_7 = InvokerFuncInvoker5< int32_t, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Il2CppFullySharedGenericAny, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_2, 0, L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_5: *(void**)L_5), L_6);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisSortNode_t6A06A977B925BF3F2ECC51B7C74B7A9AE8CE5C53_m4EFAF15B23ECDD6CF265D9EDF30FEF23096FA1D1_gshared (SortNodeU5BU5D_t93BC9DAFE9D4796A15C2DAEEAA4799B6D0A6179B* ___0_array, SortNode_t6A06A977B925BF3F2ECC51B7C74B7A9AE8CE5C53 ___1_value, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		SortNodeU5BU5D_t93BC9DAFE9D4796A15C2DAEEAA4799B6D0A6179B* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		SortNodeU5BU5D_t93BC9DAFE9D4796A15C2DAEEAA4799B6D0A6179B* L_2 = ___0_array;
		SortNodeU5BU5D_t93BC9DAFE9D4796A15C2DAEEAA4799B6D0A6179B* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		SortNode_t6A06A977B925BF3F2ECC51B7C74B7A9AE8CE5C53 L_5 = ___1_value;
		RuntimeObject* L_6 = ___2_comparer;
		int32_t L_7;
		L_7 = Array_BinarySearch_TisSortNode_t6A06A977B925BF3F2ECC51B7C74B7A9AE8CE5C53_m8F7822162DB61B62B083C2CD23E5F632B85BF601(L_2, 0, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 3));
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisIl2CppFullySharedGenericAny_m41E7B9D01239068411C6C8644D275AD08C1BEBF1_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_index, int32_t ___2_length, Il2CppFullySharedGenericAny ___3_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t718F56072021E2C1F6A1F91F772E7ABDFACEEAC0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t718F56072021E2C1F6A1F91F772E7ABDFACEEAC0);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_length;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___3_value : &___3_value), SizeOf_T_t718F56072021E2C1F6A1F91F772E7ABDFACEEAC0);
		int32_t L_4;
		L_4 = InvokerFuncInvoker5< int32_t, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Il2CppFullySharedGenericAny, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_0, L_1, L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_3: *(void**)L_3), (RuntimeObject*)NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisCopyInfo_tB2613726E308EEDC2AE910784FA68BBB0A771565_m8B18132CAF691B1212F171E486CE38EB7AD377F1_gshared (CopyInfoU5BU5D_t99CD8AF5B14252370B2B7C05032486DF882AF466* ___0_array, int32_t ___1_index, int32_t ___2_length, CopyInfo_tB2613726E308EEDC2AE910784FA68BBB0A771565 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	String_t* G_B7_0 = NULL;
	{
		CopyInfoU5BU5D_t99CD8AF5B14252370B2B7C05032486DF882AF466* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		CopyInfoU5BU5D_t99CD8AF5B14252370B2B7C05032486DF882AF466* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		int32_t L_8 = ___1_index;
		int32_t L_9 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0044:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		ArraySortHelper_1_tEC109463DA70EE9C9096D4971D34412677570D28* L_11;
		L_11 = ArraySortHelper_1_get_Default_m9357CBDC001EFB2BA8D065940A5C9FEFED3CC036_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		CopyInfoU5BU5D_t99CD8AF5B14252370B2B7C05032486DF882AF466* L_12 = ___0_array;
		int32_t L_13 = ___1_index;
		int32_t L_14 = ___2_length;
		CopyInfo_tB2613726E308EEDC2AE910784FA68BBB0A771565 L_15 = ___3_value;
		RuntimeObject* L_16 = ___4_comparer;
		NullCheck(L_11);
		int32_t L_17;
		L_17 = ArraySortHelper_1_BinarySearch_m65877F6FF5C5E15405D3326440C99808F156B993(L_11, L_12, L_13, L_14, L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisCopyInfo_tD052D128BF5295669FA0728D8E0336E9557CE744_m875EC3E709C6E48F64AFD206E917FA4A6F717F93_gshared (CopyInfoU5BU5D_tC5EFD432382597328F5463CE3F49D3DA0CB4FCF6* ___0_array, int32_t ___1_index, int32_t ___2_length, CopyInfo_tD052D128BF5295669FA0728D8E0336E9557CE744 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	String_t* G_B7_0 = NULL;
	{
		CopyInfoU5BU5D_tC5EFD432382597328F5463CE3F49D3DA0CB4FCF6* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		CopyInfoU5BU5D_tC5EFD432382597328F5463CE3F49D3DA0CB4FCF6* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		int32_t L_8 = ___1_index;
		int32_t L_9 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0044:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		ArraySortHelper_1_t3533F5404321426857F56650163B6A6729E7158D* L_11;
		L_11 = ArraySortHelper_1_get_Default_mDEB3C8BCE73E4F1B555F5E570D0FEC50F21918AD_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		CopyInfoU5BU5D_tC5EFD432382597328F5463CE3F49D3DA0CB4FCF6* L_12 = ___0_array;
		int32_t L_13 = ___1_index;
		int32_t L_14 = ___2_length;
		CopyInfo_tD052D128BF5295669FA0728D8E0336E9557CE744 L_15 = ___3_value;
		RuntimeObject* L_16 = ___4_comparer;
		NullCheck(L_11);
		int32_t L_17;
		L_17 = ArraySortHelper_1_BinarySearch_m222B9857B789411237EBD6571FD5A595DCF350CF(L_11, L_12, L_13, L_14, L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisDeferredArray_tB1EEA722CAEFADCA5DB101F288131BDB91341699_mF80C0719B18A987BBA81CF9F056001E2F9FAF08A_gshared (DeferredArrayU5BU5D_t2B402FF2AC2B32AA6CC9A5004046806319D243DC* ___0_array, int32_t ___1_index, int32_t ___2_length, DeferredArray_tB1EEA722CAEFADCA5DB101F288131BDB91341699 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	String_t* G_B7_0 = NULL;
	{
		DeferredArrayU5BU5D_t2B402FF2AC2B32AA6CC9A5004046806319D243DC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		DeferredArrayU5BU5D_t2B402FF2AC2B32AA6CC9A5004046806319D243DC* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		int32_t L_8 = ___1_index;
		int32_t L_9 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0044:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		ArraySortHelper_1_t7737E5D659C96F9001D7F147BCD524DC66D0D4DD* L_11;
		L_11 = ArraySortHelper_1_get_Default_m4C980850260F2DD83C4793EF022AA5C44DC609FC_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		DeferredArrayU5BU5D_t2B402FF2AC2B32AA6CC9A5004046806319D243DC* L_12 = ___0_array;
		int32_t L_13 = ___1_index;
		int32_t L_14 = ___2_length;
		DeferredArray_tB1EEA722CAEFADCA5DB101F288131BDB91341699 L_15 = ___3_value;
		RuntimeObject* L_16 = ___4_comparer;
		NullCheck(L_11);
		int32_t L_17;
		L_17 = ArraySortHelper_1_BinarySearch_m362ED51C5A63CBBB451AB79931C58F32B92827C0(L_11, L_12, L_13, L_14, L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisDeferredArray_t550A0C1FE3282F51201CDCB03B920FD2C8F8A819_mFED32B768E6EDE03069D8492ECD8E68CDE39B78F_gshared (DeferredArrayU5BU5D_tB4ED071664EA73A4D56895411476AB8A983CBCF1* ___0_array, int32_t ___1_index, int32_t ___2_length, DeferredArray_t550A0C1FE3282F51201CDCB03B920FD2C8F8A819 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	String_t* G_B7_0 = NULL;
	{
		DeferredArrayU5BU5D_tB4ED071664EA73A4D56895411476AB8A983CBCF1* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		DeferredArrayU5BU5D_tB4ED071664EA73A4D56895411476AB8A983CBCF1* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		int32_t L_8 = ___1_index;
		int32_t L_9 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0044:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		ArraySortHelper_1_t333E7CEAC391412941D21F2FCAFBEC610B5324AA* L_11;
		L_11 = ArraySortHelper_1_get_Default_m431D2BBDE6BA5D8061FE8B743A0C610A257B15AB_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		DeferredArrayU5BU5D_tB4ED071664EA73A4D56895411476AB8A983CBCF1* L_12 = ___0_array;
		int32_t L_13 = ___1_index;
		int32_t L_14 = ___2_length;
		DeferredArray_t550A0C1FE3282F51201CDCB03B920FD2C8F8A819 L_15 = ___3_value;
		RuntimeObject* L_16 = ___4_comparer;
		NullCheck(L_11);
		int32_t L_17;
		L_17 = ArraySortHelper_1_BinarySearch_m36EBD5D8B892F422D92B26CA38A1713A3215AFB0(L_11, L_12, L_13, L_14, L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisItem_t7E1C074BAD45111B502C4559B0ECF73B3F52774E_m29FB9511539A9D54A0D6FCFA9BE91AACD5F2AB83_gshared (ItemU5BU5D_tB2AB30F4C7952C4FA867468576E1493A8858A165* ___0_array, int32_t ___1_index, int32_t ___2_length, Item_t7E1C074BAD45111B502C4559B0ECF73B3F52774E ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	String_t* G_B7_0 = NULL;
	{
		ItemU5BU5D_tB2AB30F4C7952C4FA867468576E1493A8858A165* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		ItemU5BU5D_tB2AB30F4C7952C4FA867468576E1493A8858A165* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		int32_t L_8 = ___1_index;
		int32_t L_9 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0044:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		ArraySortHelper_1_tA6EE6D66AFBD4037261CC901C43D4945B05C117E* L_11;
		L_11 = ArraySortHelper_1_get_Default_m4A2EA7195ED54D741C8FD211DDCA870F60C73CDB_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		ItemU5BU5D_tB2AB30F4C7952C4FA867468576E1493A8858A165* L_12 = ___0_array;
		int32_t L_13 = ___1_index;
		int32_t L_14 = ___2_length;
		Item_t7E1C074BAD45111B502C4559B0ECF73B3F52774E L_15 = ___3_value;
		RuntimeObject* L_16 = ___4_comparer;
		NullCheck(L_11);
		int32_t L_17;
		L_17 = ArraySortHelper_1_BinarySearch_m362907D4BA915295014FAD517FC1306D05BAF152(L_11, L_12, L_13, L_14, L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisKeyValuePair_2_t0BA7B6CDC5145C72EF97C07CD31755E3D104DAC5_m8C2E2CF5F20C1C2765E003F65F0DF5C1A7B51B81_gshared (KeyValuePair_2U5BU5D_t59BE3E2793BE8FC78C2EE42EAEC58E864348B40C* ___0_array, int32_t ___1_index, int32_t ___2_length, KeyValuePair_2_t0BA7B6CDC5145C72EF97C07CD31755E3D104DAC5 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	String_t* G_B7_0 = NULL;
	{
		KeyValuePair_2U5BU5D_t59BE3E2793BE8FC78C2EE42EAEC58E864348B40C* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		KeyValuePair_2U5BU5D_t59BE3E2793BE8FC78C2EE42EAEC58E864348B40C* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		int32_t L_8 = ___1_index;
		int32_t L_9 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0044:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		ArraySortHelper_1_t113B40406DB1AFB29A002792A3DE4DE156C3C51D* L_11;
		L_11 = ArraySortHelper_1_get_Default_m208E22631B89CC4C1D927C646D297284FC6D5030_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		KeyValuePair_2U5BU5D_t59BE3E2793BE8FC78C2EE42EAEC58E864348B40C* L_12 = ___0_array;
		int32_t L_13 = ___1_index;
		int32_t L_14 = ___2_length;
		KeyValuePair_2_t0BA7B6CDC5145C72EF97C07CD31755E3D104DAC5 L_15 = ___3_value;
		RuntimeObject* L_16 = ___4_comparer;
		NullCheck(L_11);
		int32_t L_17;
		L_17 = ArraySortHelper_1_BinarySearch_m92474D14D4B19C0B147D01F985CA7BE684D905AC(L_11, L_12, L_13, L_14, L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisKeyValuePair_2_tCAFDA02F578F9C36A2A1F8B598E89B9F0D5D1365_m40B59D54856599BAB6ED42F5A21A96C328046806_gshared (KeyValuePair_2U5BU5D_t8E7451B50D849638463A256F730434F5AC214B52* ___0_array, int32_t ___1_index, int32_t ___2_length, KeyValuePair_2_tCAFDA02F578F9C36A2A1F8B598E89B9F0D5D1365 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	String_t* G_B7_0 = NULL;
	{
		KeyValuePair_2U5BU5D_t8E7451B50D849638463A256F730434F5AC214B52* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		KeyValuePair_2U5BU5D_t8E7451B50D849638463A256F730434F5AC214B52* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		int32_t L_8 = ___1_index;
		int32_t L_9 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0044:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		ArraySortHelper_1_tFC3766CE9CF4C077AB50CBC92CD58E2F2E2AEC4D* L_11;
		L_11 = ArraySortHelper_1_get_Default_mE68E7227734761975FE7EC9B590144FE6B28CFDC_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		KeyValuePair_2U5BU5D_t8E7451B50D849638463A256F730434F5AC214B52* L_12 = ___0_array;
		int32_t L_13 = ___1_index;
		int32_t L_14 = ___2_length;
		KeyValuePair_2_tCAFDA02F578F9C36A2A1F8B598E89B9F0D5D1365 L_15 = ___3_value;
		RuntimeObject* L_16 = ___4_comparer;
		NullCheck(L_11);
		int32_t L_17;
		L_17 = ArraySortHelper_1_BinarySearch_m62BD450E4769532AB7A49E149E8B4BE9DE8E905F(L_11, L_12, L_13, L_14, L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_mED3D6AE7EF88037AEF14BB25E0219A7604CAA283_gshared (KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* ___0_array, int32_t ___1_index, int32_t ___2_length, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	String_t* G_B7_0 = NULL;
	{
		KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		int32_t L_8 = ___1_index;
		int32_t L_9 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0044:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		ArraySortHelper_1_t9D5988695D0E27FC2C660482823CD24E7867C57E* L_11;
		L_11 = ArraySortHelper_1_get_Default_m8E3181F1B97294ACC3B83B9CED5928D0AAED8641_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* L_12 = ___0_array;
		int32_t L_13 = ___1_index;
		int32_t L_14 = ___2_length;
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_15 = ___3_value;
		RuntimeObject* L_16 = ___4_comparer;
		NullCheck(L_11);
		int32_t L_17;
		L_17 = ArraySortHelper_1_BinarySearch_mEA1A097DCE40F4262DA8843DC8C07ABB5DCD8079(L_11, L_12, L_13, L_14, L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisKeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764_m842F1857619D237657BEB13754AB3C471074FA5A_gshared (KeyValuePair_2U5BU5D_t899E6C9DD89ED99CCF993FA90A368CCB9286EC61* ___0_array, int32_t ___1_index, int32_t ___2_length, KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	String_t* G_B7_0 = NULL;
	{
		KeyValuePair_2U5BU5D_t899E6C9DD89ED99CCF993FA90A368CCB9286EC61* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		KeyValuePair_2U5BU5D_t899E6C9DD89ED99CCF993FA90A368CCB9286EC61* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		int32_t L_8 = ___1_index;
		int32_t L_9 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0044:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		ArraySortHelper_1_t1C05FD7083D194EB20ECE9BF364EE61BA5DFE1B1* L_11;
		L_11 = ArraySortHelper_1_get_Default_mF58F40BA487C82790A3D15624F0C4722003CF30E_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		KeyValuePair_2U5BU5D_t899E6C9DD89ED99CCF993FA90A368CCB9286EC61* L_12 = ___0_array;
		int32_t L_13 = ___1_index;
		int32_t L_14 = ___2_length;
		KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764 L_15 = ___3_value;
		RuntimeObject* L_16 = ___4_comparer;
		NullCheck(L_11);
		int32_t L_17;
		L_17 = ArraySortHelper_1_BinarySearch_m96779DEA625B1D6BD53C5A746A1A68B6CD551364(L_11, L_12, L_13, L_14, L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisNativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3_m481B8E516F90C7A4C23366317AC48A4393881823_gshared (NativeArray_1U5BU5D_t75698E5C2142DD4A324DD38EE484D69C8FD2CFD3* ___0_array, int32_t ___1_index, int32_t ___2_length, NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	String_t* G_B7_0 = NULL;
	{
		NativeArray_1U5BU5D_t75698E5C2142DD4A324DD38EE484D69C8FD2CFD3* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		NativeArray_1U5BU5D_t75698E5C2142DD4A324DD38EE484D69C8FD2CFD3* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		int32_t L_8 = ___1_index;
		int32_t L_9 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0044:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		ArraySortHelper_1_t3161D1D2810FDADCBA98BC302546D9CF98CFA41F* L_11;
		L_11 = ArraySortHelper_1_get_Default_mFF5E22B327C79CD5A9B2FC7D57F5DD2CFC795A15_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		NativeArray_1U5BU5D_t75698E5C2142DD4A324DD38EE484D69C8FD2CFD3* L_12 = ___0_array;
		int32_t L_13 = ___1_index;
		int32_t L_14 = ___2_length;
		NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 L_15 = ___3_value;
		RuntimeObject* L_16 = ___4_comparer;
		NullCheck(L_11);
		int32_t L_17;
		L_17 = ArraySortHelper_1_BinarySearch_m6420104B9EA78106E4AAD6BB080600B434F014DC(L_11, L_12, L_13, L_14, L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisNativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD_mF453AF278D2C23F640FB922674C075E4F077F055_gshared (NativeArray_1U5BU5D_t48F28BC4076C1A1608AA864367077AD64E04C11D* ___0_array, int32_t ___1_index, int32_t ___2_length, NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	String_t* G_B7_0 = NULL;
	{
		NativeArray_1U5BU5D_t48F28BC4076C1A1608AA864367077AD64E04C11D* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		NativeArray_1U5BU5D_t48F28BC4076C1A1608AA864367077AD64E04C11D* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		int32_t L_8 = ___1_index;
		int32_t L_9 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0044:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		ArraySortHelper_1_tCF4AD90F61645344CEE07FF96E146A134CF88716* L_11;
		L_11 = ArraySortHelper_1_get_Default_m3A24E760984C85C32CE96D3EBD6D9F5FC399D2C5_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		NativeArray_1U5BU5D_t48F28BC4076C1A1608AA864367077AD64E04C11D* L_12 = ___0_array;
		int32_t L_13 = ___1_index;
		int32_t L_14 = ___2_length;
		NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD L_15 = ___3_value;
		RuntimeObject* L_16 = ___4_comparer;
		NullCheck(L_11);
		int32_t L_17;
		L_17 = ArraySortHelper_1_BinarySearch_m7EE2CF0D558E356F924D56602143DE9DD5ED3B64(L_11, L_12, L_13, L_14, L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisNativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149_m41DCAA26B2CB6B00D46277B297CC2A4C5BC0A01F_gshared (NativeArray_1U5BU5D_t07FE0FFB798A14A16B56C709EBB100AA9D986CA4* ___0_array, int32_t ___1_index, int32_t ___2_length, NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	String_t* G_B7_0 = NULL;
	{
		NativeArray_1U5BU5D_t07FE0FFB798A14A16B56C709EBB100AA9D986CA4* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		NativeArray_1U5BU5D_t07FE0FFB798A14A16B56C709EBB100AA9D986CA4* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		int32_t L_8 = ___1_index;
		int32_t L_9 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0044:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		ArraySortHelper_1_t9AC8E0CAF25D5AA0127EDCAF3968B41697DFDDDE* L_11;
		L_11 = ArraySortHelper_1_get_Default_m1803D8B61C090CD23F49C4B6730024AD91F23510_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		NativeArray_1U5BU5D_t07FE0FFB798A14A16B56C709EBB100AA9D986CA4* L_12 = ___0_array;
		int32_t L_13 = ___1_index;
		int32_t L_14 = ___2_length;
		NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149 L_15 = ___3_value;
		RuntimeObject* L_16 = ___4_comparer;
		NullCheck(L_11);
		int32_t L_17;
		L_17 = ArraySortHelper_1_BinarySearch_m0BCE6EC3BE95132C034E9626C43F2A2FAED04D3B(L_11, L_12, L_13, L_14, L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisNativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57_m01F500A9F142CF2C3C80D2AFEB24DD1FA38C74D9_gshared (NativeArray_1U5BU5D_tB9179B8E492F9CEBC40651BF1C66A50255128C61* ___0_array, int32_t ___1_index, int32_t ___2_length, NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	String_t* G_B7_0 = NULL;
	{
		NativeArray_1U5BU5D_tB9179B8E492F9CEBC40651BF1C66A50255128C61* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		NativeArray_1U5BU5D_tB9179B8E492F9CEBC40651BF1C66A50255128C61* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		int32_t L_8 = ___1_index;
		int32_t L_9 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0044:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		ArraySortHelper_1_t999CC4B5DBE0626519030FE7B005516753FB7335* L_11;
		L_11 = ArraySortHelper_1_get_Default_m3BB42B2BA14872290CDCAD41EAF53ABA1AA9543C_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		NativeArray_1U5BU5D_tB9179B8E492F9CEBC40651BF1C66A50255128C61* L_12 = ___0_array;
		int32_t L_13 = ___1_index;
		int32_t L_14 = ___2_length;
		NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 L_15 = ___3_value;
		RuntimeObject* L_16 = ___4_comparer;
		NullCheck(L_11);
		int32_t L_17;
		L_17 = ArraySortHelper_1_BinarySearch_m78AF5BD7F40C034FEB26A89F2D70FAB9F2331819(L_11, L_12, L_13, L_14, L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool LifecycleScopeBase_get_AllowNestedTransitions_mEF03BE23B67C81955948C2C709D01AB9B71F0345_inline (LifecycleScopeBase_t7CC30D9721A69BA0A9E955EAED505A32007C0755* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CAllowNestedTransitionsU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LifecycleScopeBase_t7CC30D9721A69BA0A9E955EAED505A32007C0755* ScopeTransitionRequestBase_get_Scope_mEB7F256D6FF4393EB627213D2E7343BD35BDCB50_inline (ScopeTransitionRequestBase_t9E5F91D84A64F389496153A6DA14A6686E4E3C16* __this, const RuntimeMethod* method) 
{
	{
		LifecycleScopeBase_t7CC30D9721A69BA0A9E955EAED505A32007C0755* L_0 = __this->___U3CScopeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LifecycleScopeBase_get_Name_m9A358255FEBBEA5F94FCB82DC2B1AF1F8AB288BB_inline (LifecycleScopeBase_t7CC30D9721A69BA0A9E955EAED505A32007C0755* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* LifecycleScopeKey_get_Type_mEC585239B2BC794EDFDE68B89A6533971E12C752_inline (LifecycleScopeKey_t786C4635697BF09DC1C3BA0331E34017B8BA961D* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->____scopeType;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ScopeTransitionRequestBase_get_TransitionType_m64E9CBFD2036C2727F62B4276B07594B1AD0244B_inline (ScopeTransitionRequestBase_t9E5F91D84A64F389496153A6DA14A6686E4E3C16* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CTransitionTypeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LifecycleScopeBase_t7CC30D9721A69BA0A9E955EAED505A32007C0755* ActiveLifecycleScopeBase_get_Scope_m711F6C219BF9AED00688EB5C251A74C6780E0780_inline (ActiveLifecycleScopeBase_t0F0C7F8D06A577773F8D661F8CCE4F9FA9999A8C* __this, const RuntimeMethod* method) 
{
	{
		LifecycleScopeBase_t7CC30D9721A69BA0A9E955EAED505A32007C0755* L_0 = __this->___U3CScopeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_value1;
		intptr_t L_1 = ___1_value2;
		return (bool)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___0_obj, const RuntimeMethod* method) 
{
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = ___0_obj;
		NullCheck(L_0);
		intptr_t L_1 = L_0->___m_jobject;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m02DF2B39305B32F97D425178F5054CE9830BFB10_gshared_inline (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* LifecycleScopeWithContext_1_get_Context_m71715E88B71B9A07D4F70E53A5142B8F5383AC27_gshared_inline (LifecycleScopeWithContext_1_t35373E7691E4D4045644241660D92D3E94032599* __this, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = __this->___U3CContextU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LifecycleScopeKey_t786C4635697BF09DC1C3BA0331E34017B8BA961D Enumerator_get_Current_m9C78D88F0F2E50F8F748978518338E28736E4522_gshared_inline (Enumerator_t1A261715170E73393537C60CCC568DE6296C8F99* __this, const RuntimeMethod* method) 
{
	{
		LifecycleScopeKey_t786C4635697BF09DC1C3BA0331E34017B8BA961D L_0 = __this->____currentKey;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Enumerator_get_Current_mFB92CF0C22891AA06481368B806933878E96848C_gshared_inline (Enumerator_tADBE53A4D403A692FEE79405C385A6A1DC739F7D* __this, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = __this->____currentValue;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m9832942FE310479E64D9D0D23F29C65305BE1622_gshared_inline (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Enumerator_get_Current_mA50CED82C4671CC4E1D82333FAC2587F700565D0_gshared_inline (Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9* __this, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081_gshared_inline (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* __this, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->___m_Buffer;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_gshared_inline (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___0_nativeArray, const RuntimeMethod* method) 
{
	{
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_mF1154ABCB79F43B3A71BFA8DCB85ACBDFA2838D5_gshared_inline (NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190* __this, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->___m_Buffer;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mCD832837FF5CE235B506272835BA049D56968E2F_gshared_inline (NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190 ___0_nativeArray, const RuntimeMethod* method) 
{
	{
		NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190 L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_gshared_inline (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_2;
		L_2 = il2cpp_unsafe_as_ref<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225>((uint8_t*)L_1);
		ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_gshared_inline (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_tEC109463DA70EE9C9096D4971D34412677570D28* ArraySortHelper_1_get_Default_m9357CBDC001EFB2BA8D065940A5C9FEFED3CC036_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_tEC109463DA70EE9C9096D4971D34412677570D28* L_0 = ((ArraySortHelper_1_tEC109463DA70EE9C9096D4971D34412677570D28_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___s_defaultArraySortHelper;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t3533F5404321426857F56650163B6A6729E7158D* ArraySortHelper_1_get_Default_mDEB3C8BCE73E4F1B555F5E570D0FEC50F21918AD_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_t3533F5404321426857F56650163B6A6729E7158D* L_0 = ((ArraySortHelper_1_t3533F5404321426857F56650163B6A6729E7158D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___s_defaultArraySortHelper;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t7737E5D659C96F9001D7F147BCD524DC66D0D4DD* ArraySortHelper_1_get_Default_m4C980850260F2DD83C4793EF022AA5C44DC609FC_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_t7737E5D659C96F9001D7F147BCD524DC66D0D4DD* L_0 = ((ArraySortHelper_1_t7737E5D659C96F9001D7F147BCD524DC66D0D4DD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___s_defaultArraySortHelper;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t333E7CEAC391412941D21F2FCAFBEC610B5324AA* ArraySortHelper_1_get_Default_m431D2BBDE6BA5D8061FE8B743A0C610A257B15AB_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_t333E7CEAC391412941D21F2FCAFBEC610B5324AA* L_0 = ((ArraySortHelper_1_t333E7CEAC391412941D21F2FCAFBEC610B5324AA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___s_defaultArraySortHelper;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_tA6EE6D66AFBD4037261CC901C43D4945B05C117E* ArraySortHelper_1_get_Default_m4A2EA7195ED54D741C8FD211DDCA870F60C73CDB_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_tA6EE6D66AFBD4037261CC901C43D4945B05C117E* L_0 = ((ArraySortHelper_1_tA6EE6D66AFBD4037261CC901C43D4945B05C117E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___s_defaultArraySortHelper;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t113B40406DB1AFB29A002792A3DE4DE156C3C51D* ArraySortHelper_1_get_Default_m208E22631B89CC4C1D927C646D297284FC6D5030_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_t113B40406DB1AFB29A002792A3DE4DE156C3C51D* L_0 = ((ArraySortHelper_1_t113B40406DB1AFB29A002792A3DE4DE156C3C51D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___s_defaultArraySortHelper;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_tFC3766CE9CF4C077AB50CBC92CD58E2F2E2AEC4D* ArraySortHelper_1_get_Default_mE68E7227734761975FE7EC9B590144FE6B28CFDC_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_tFC3766CE9CF4C077AB50CBC92CD58E2F2E2AEC4D* L_0 = ((ArraySortHelper_1_tFC3766CE9CF4C077AB50CBC92CD58E2F2E2AEC4D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___s_defaultArraySortHelper;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t9D5988695D0E27FC2C660482823CD24E7867C57E* ArraySortHelper_1_get_Default_m8E3181F1B97294ACC3B83B9CED5928D0AAED8641_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_t9D5988695D0E27FC2C660482823CD24E7867C57E* L_0 = ((ArraySortHelper_1_t9D5988695D0E27FC2C660482823CD24E7867C57E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___s_defaultArraySortHelper;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t1C05FD7083D194EB20ECE9BF364EE61BA5DFE1B1* ArraySortHelper_1_get_Default_mF58F40BA487C82790A3D15624F0C4722003CF30E_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_t1C05FD7083D194EB20ECE9BF364EE61BA5DFE1B1* L_0 = ((ArraySortHelper_1_t1C05FD7083D194EB20ECE9BF364EE61BA5DFE1B1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___s_defaultArraySortHelper;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t3161D1D2810FDADCBA98BC302546D9CF98CFA41F* ArraySortHelper_1_get_Default_mFF5E22B327C79CD5A9B2FC7D57F5DD2CFC795A15_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_t3161D1D2810FDADCBA98BC302546D9CF98CFA41F* L_0 = ((ArraySortHelper_1_t3161D1D2810FDADCBA98BC302546D9CF98CFA41F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___s_defaultArraySortHelper;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_tCF4AD90F61645344CEE07FF96E146A134CF88716* ArraySortHelper_1_get_Default_m3A24E760984C85C32CE96D3EBD6D9F5FC399D2C5_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_tCF4AD90F61645344CEE07FF96E146A134CF88716* L_0 = ((ArraySortHelper_1_tCF4AD90F61645344CEE07FF96E146A134CF88716_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___s_defaultArraySortHelper;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t9AC8E0CAF25D5AA0127EDCAF3968B41697DFDDDE* ArraySortHelper_1_get_Default_m1803D8B61C090CD23F49C4B6730024AD91F23510_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_t9AC8E0CAF25D5AA0127EDCAF3968B41697DFDDDE* L_0 = ((ArraySortHelper_1_t9AC8E0CAF25D5AA0127EDCAF3968B41697DFDDDE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___s_defaultArraySortHelper;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t999CC4B5DBE0626519030FE7B005516753FB7335* ArraySortHelper_1_get_Default_m3BB42B2BA14872290CDCAD41EAF53ABA1AA9543C_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_t999CC4B5DBE0626519030FE7B005516753FB7335* L_0 = ((ArraySortHelper_1_t999CC4B5DBE0626519030FE7B005516753FB7335_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___s_defaultArraySortHelper;
		return L_0;
	}
}
