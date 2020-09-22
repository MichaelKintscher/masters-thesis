#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.ApplicationException
struct ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407;
// System.Threading.AutoResetEvent
struct AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1;
// System.String
struct String_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventRegistrationTokenListWithCount
struct EventRegistrationTokenListWithCount_t8BA708F75B90C86A7CA1F3FD1DFCBD742D458FC6;
// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/MyReaderWriterLock
struct MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD;
// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/ReaderWriterLockTimedOutException
struct ReaderWriterLockTimedOutException_t89B2958D458380B9E1BA492D772EE6DC685D0497;
// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/TokenListCount
struct TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC;
// System.Collections.Generic.Dictionary`2<System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheEntry>
struct Dictionary_2_t0986F9D82B8D09D448B013D5071D700FA1CF22C8;
// System.Collections.Generic.IEqualityComparer`1<System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey>
struct IEqualityComparer_1_t7FD4D28EE8E68A776ACE85DC12D74EBC02363A6B;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheEntry>
struct KeyCollection_t8A6797C18AFB007283841345EA5ECC3CE2E6E3CB;
// System.Collections.Generic.List`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>
struct List_1_t01F23063BEF9E4FDEA5BD7414739DB35870B9ED9;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheEntry>
struct ValueCollection_tDA9C3CF0F1B2413AABEC563511728419196CDD32;
// System.Collections.Generic.Dictionary`2/Entry<System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheEntry>[]
struct EntryU5BU5D_t8C83EA6B264039F97035A8B2701A644D21D4D1DF;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;

IL2CPP_EXTERN_C RuntimeClass* AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReaderWriterLockTimedOutException_t89B2958D458380B9E1BA492D772EE6DC685D0497_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mE3BFE13C0E907582FA02AFC988208742F441A4F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MyReaderWriterLock_WaitOnEvent_m4FC854311E4289CF2B364BDC4D7321148DD02C84_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t MyReaderWriterLock_LazyCreateEvent_m328FBB8853141441D96D58F4047B68C5ABB4CA65_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MyReaderWriterLock_WaitOnEvent_m4FC854311E4289CF2B364BDC4D7321148DD02C84_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TokenListCount_CleanupCache_mEF77F97501522C1D53A496EA05E38F9B4CFED4AA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TokenListCount_Dec_m3316C5B76EA893ADDEB8D5517B2B3627213B2EAD_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal_NativeOrStaticEventRegistrationImpl_EventCacheKey,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal_NativeOrStaticEventRegistrationImpl_EventCacheEntry>
struct  Dictionary_2_t0986F9D82B8D09D448B013D5071D700FA1CF22C8  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t8C83EA6B264039F97035A8B2701A644D21D4D1DF* ___entries_1;
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
	KeyCollection_t8A6797C18AFB007283841345EA5ECC3CE2E6E3CB * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tDA9C3CF0F1B2413AABEC563511728419196CDD32 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t0986F9D82B8D09D448B013D5071D700FA1CF22C8, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t0986F9D82B8D09D448B013D5071D700FA1CF22C8, ___entries_1)); }
	inline EntryU5BU5D_t8C83EA6B264039F97035A8B2701A644D21D4D1DF* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t8C83EA6B264039F97035A8B2701A644D21D4D1DF** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t8C83EA6B264039F97035A8B2701A644D21D4D1DF* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t0986F9D82B8D09D448B013D5071D700FA1CF22C8, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t0986F9D82B8D09D448B013D5071D700FA1CF22C8, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t0986F9D82B8D09D448B013D5071D700FA1CF22C8, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t0986F9D82B8D09D448B013D5071D700FA1CF22C8, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t0986F9D82B8D09D448B013D5071D700FA1CF22C8, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t0986F9D82B8D09D448B013D5071D700FA1CF22C8, ___keys_7)); }
	inline KeyCollection_t8A6797C18AFB007283841345EA5ECC3CE2E6E3CB * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t8A6797C18AFB007283841345EA5ECC3CE2E6E3CB ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t8A6797C18AFB007283841345EA5ECC3CE2E6E3CB * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t0986F9D82B8D09D448B013D5071D700FA1CF22C8, ___values_8)); }
	inline ValueCollection_tDA9C3CF0F1B2413AABEC563511728419196CDD32 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tDA9C3CF0F1B2413AABEC563511728419196CDD32 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tDA9C3CF0F1B2413AABEC563511728419196CDD32 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t0986F9D82B8D09D448B013D5071D700FA1CF22C8, ____syncRoot_9)); }
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

// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal_NativeOrStaticEventRegistrationImpl
struct  NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4  : public RuntimeObject
{
public:

public:
};

struct NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal_NativeOrStaticEventRegistrationImpl_EventCacheKey,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal_NativeOrStaticEventRegistrationImpl_EventCacheEntry> modreq(System.Runtime.CompilerServices.IsVolatile) System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal_NativeOrStaticEventRegistrationImpl::s_eventRegistrations
	Dictionary_2_t0986F9D82B8D09D448B013D5071D700FA1CF22C8 * ___s_eventRegistrations_0;
	// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal_NativeOrStaticEventRegistrationImpl_MyReaderWriterLock modreq(System.Runtime.CompilerServices.IsVolatile) System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal_NativeOrStaticEventRegistrationImpl::s_eventCacheRWLock
	MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD * ___s_eventCacheRWLock_1;

public:
	inline static int32_t get_offset_of_s_eventRegistrations_0() { return static_cast<int32_t>(offsetof(NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4_StaticFields, ___s_eventRegistrations_0)); }
	inline Dictionary_2_t0986F9D82B8D09D448B013D5071D700FA1CF22C8 * get_s_eventRegistrations_0() const { return ___s_eventRegistrations_0; }
	inline Dictionary_2_t0986F9D82B8D09D448B013D5071D700FA1CF22C8 ** get_address_of_s_eventRegistrations_0() { return &___s_eventRegistrations_0; }
	inline void set_s_eventRegistrations_0(Dictionary_2_t0986F9D82B8D09D448B013D5071D700FA1CF22C8 * value)
	{
		___s_eventRegistrations_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_eventRegistrations_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_eventCacheRWLock_1() { return static_cast<int32_t>(offsetof(NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4_StaticFields, ___s_eventCacheRWLock_1)); }
	inline MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD * get_s_eventCacheRWLock_1() const { return ___s_eventCacheRWLock_1; }
	inline MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD ** get_address_of_s_eventCacheRWLock_1() { return &___s_eventCacheRWLock_1; }
	inline void set_s_eventCacheRWLock_1(MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD * value)
	{
		___s_eventCacheRWLock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_eventCacheRWLock_1), (void*)value);
	}
};


// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal_NativeOrStaticEventRegistrationImpl_MyReaderWriterLock
struct  MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD  : public RuntimeObject
{
public:
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal_NativeOrStaticEventRegistrationImpl_MyReaderWriterLock::myLock
	int32_t ___myLock_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal_NativeOrStaticEventRegistrationImpl_MyReaderWriterLock::owners
	int32_t ___owners_1;
	// System.UInt32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal_NativeOrStaticEventRegistrationImpl_MyReaderWriterLock::numWriteWaiters
	uint32_t ___numWriteWaiters_2;
	// System.UInt32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal_NativeOrStaticEventRegistrationImpl_MyReaderWriterLock::numReadWaiters
	uint32_t ___numReadWaiters_3;
	// System.Threading.EventWaitHandle System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal_NativeOrStaticEventRegistrationImpl_MyReaderWriterLock::writeEvent
	EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * ___writeEvent_4;
	// System.Threading.EventWaitHandle System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal_NativeOrStaticEventRegistrationImpl_MyReaderWriterLock::readEvent
	EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * ___readEvent_5;

public:
	inline static int32_t get_offset_of_myLock_0() { return static_cast<int32_t>(offsetof(MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD, ___myLock_0)); }
	inline int32_t get_myLock_0() const { return ___myLock_0; }
	inline int32_t* get_address_of_myLock_0() { return &___myLock_0; }
	inline void set_myLock_0(int32_t value)
	{
		___myLock_0 = value;
	}

	inline static int32_t get_offset_of_owners_1() { return static_cast<int32_t>(offsetof(MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD, ___owners_1)); }
	inline int32_t get_owners_1() const { return ___owners_1; }
	inline int32_t* get_address_of_owners_1() { return &___owners_1; }
	inline void set_owners_1(int32_t value)
	{
		___owners_1 = value;
	}

	inline static int32_t get_offset_of_numWriteWaiters_2() { return static_cast<int32_t>(offsetof(MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD, ___numWriteWaiters_2)); }
	inline uint32_t get_numWriteWaiters_2() const { return ___numWriteWaiters_2; }
	inline uint32_t* get_address_of_numWriteWaiters_2() { return &___numWriteWaiters_2; }
	inline void set_numWriteWaiters_2(uint32_t value)
	{
		___numWriteWaiters_2 = value;
	}

	inline static int32_t get_offset_of_numReadWaiters_3() { return static_cast<int32_t>(offsetof(MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD, ___numReadWaiters_3)); }
	inline uint32_t get_numReadWaiters_3() const { return ___numReadWaiters_3; }
	inline uint32_t* get_address_of_numReadWaiters_3() { return &___numReadWaiters_3; }
	inline void set_numReadWaiters_3(uint32_t value)
	{
		___numReadWaiters_3 = value;
	}

	inline static int32_t get_offset_of_writeEvent_4() { return static_cast<int32_t>(offsetof(MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD, ___writeEvent_4)); }
	inline EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * get_writeEvent_4() const { return ___writeEvent_4; }
	inline EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C ** get_address_of_writeEvent_4() { return &___writeEvent_4; }
	inline void set_writeEvent_4(EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * value)
	{
		___writeEvent_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___writeEvent_4), (void*)value);
	}

	inline static int32_t get_offset_of_readEvent_5() { return static_cast<int32_t>(offsetof(MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD, ___readEvent_5)); }
	inline EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * get_readEvent_5() const { return ___readEvent_5; }
	inline EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C ** get_address_of_readEvent_5() { return &___readEvent_5; }
	inline void set_readEvent_5(EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * value)
	{
		___readEvent_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___readEvent_5), (void*)value);
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


// System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken
struct  EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830 
{
public:
	// System.UInt64 System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal_NativeOrStaticEventRegistrationImpl_EventCacheKey
struct  EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639 
{
public:
	// System.Object System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal_NativeOrStaticEventRegistrationImpl_EventCacheKey::target
	RuntimeObject * ___target_0;
	// System.Reflection.MethodInfo System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal_NativeOrStaticEventRegistrationImpl_EventCacheKey::method
	MethodInfo_t * ___method_1;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639, ___target_0)); }
	inline RuntimeObject * get_target_0() const { return ___target_0; }
	inline RuntimeObject ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(RuntimeObject * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}

	inline static int32_t get_offset_of_method_1() { return static_cast<int32_t>(offsetof(EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639, ___method_1)); }
	inline MethodInfo_t * get_method_1() const { return ___method_1; }
	inline MethodInfo_t ** get_address_of_method_1() { return &___method_1; }
	inline void set_method_1(MethodInfo_t * value)
	{
		___method_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey
struct EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639_marshaled_pinvoke
{
	Il2CppIUnknown* ___target_0;
	MethodInfo_t * ___method_1;
};
// Native definition for COM marshalling of System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey
struct EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639_marshaled_com
{
	Il2CppIUnknown* ___target_0;
	MethodInfo_t * ___method_1;
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

// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal_EventRegistrationTokenList
struct  EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128 
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal_EventRegistrationTokenList::firstToken
	EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  ___firstToken_0;
	// System.Collections.Generic.List`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken> System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal_EventRegistrationTokenList::restTokens
	List_1_t01F23063BEF9E4FDEA5BD7414739DB35870B9ED9 * ___restTokens_1;

public:
	inline static int32_t get_offset_of_firstToken_0() { return static_cast<int32_t>(offsetof(EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128, ___firstToken_0)); }
	inline EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  get_firstToken_0() const { return ___firstToken_0; }
	inline EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830 * get_address_of_firstToken_0() { return &___firstToken_0; }
	inline void set_firstToken_0(EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  value)
	{
		___firstToken_0 = value;
	}

	inline static int32_t get_offset_of_restTokens_1() { return static_cast<int32_t>(offsetof(EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128, ___restTokens_1)); }
	inline List_1_t01F23063BEF9E4FDEA5BD7414739DB35870B9ED9 * get_restTokens_1() const { return ___restTokens_1; }
	inline List_1_t01F23063BEF9E4FDEA5BD7414739DB35870B9ED9 ** get_address_of_restTokens_1() { return &___restTokens_1; }
	inline void set_restTokens_1(List_1_t01F23063BEF9E4FDEA5BD7414739DB35870B9ED9 * value)
	{
		___restTokens_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___restTokens_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList
struct EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128_marshaled_pinvoke
{
	EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  ___firstToken_0;
	List_1_t01F23063BEF9E4FDEA5BD7414739DB35870B9ED9 * ___restTokens_1;
};
// Native definition for COM marshalling of System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList
struct EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128_marshaled_com
{
	EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  ___firstToken_0;
	List_1_t01F23063BEF9E4FDEA5BD7414739DB35870B9ED9 * ___restTokens_1;
};

// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal_NativeOrStaticEventRegistrationImpl_TokenListCount
struct  TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC  : public RuntimeObject
{
public:
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal_NativeOrStaticEventRegistrationImpl_TokenListCount::_count
	int32_t ____count_0;
	// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal_NativeOrStaticEventRegistrationImpl_EventCacheKey System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal_NativeOrStaticEventRegistrationImpl_TokenListCount::_key
	EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639  ____key_1;

public:
	inline static int32_t get_offset_of__count_0() { return static_cast<int32_t>(offsetof(TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC, ____count_0)); }
	inline int32_t get__count_0() const { return ____count_0; }
	inline int32_t* get_address_of__count_0() { return &____count_0; }
	inline void set__count_0(int32_t value)
	{
		____count_0 = value;
	}

	inline static int32_t get_offset_of__key_1() { return static_cast<int32_t>(offsetof(TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC, ____key_1)); }
	inline EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639  get__key_1() const { return ____key_1; }
	inline EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639 * get_address_of__key_1() { return &____key_1; }
	inline void set__key_1(EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639  value)
	{
		____key_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____key_1))->___target_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____key_1))->___method_1), (void*)NULL);
		#endif
	}
};


// System.Threading.WaitHandle
struct  WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;

public:
	inline static int32_t get_offset_of_waitHandle_3() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___waitHandle_3)); }
	inline intptr_t get_waitHandle_3() const { return ___waitHandle_3; }
	inline intptr_t* get_address_of_waitHandle_3() { return &___waitHandle_3; }
	inline void set_waitHandle_3(intptr_t value)
	{
		___waitHandle_3 = value;
	}

	inline static int32_t get_offset_of_safeWaitHandle_4() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___safeWaitHandle_4)); }
	inline SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * get_safeWaitHandle_4() const { return ___safeWaitHandle_4; }
	inline SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 ** get_address_of_safeWaitHandle_4() { return &___safeWaitHandle_4; }
	inline void set_safeWaitHandle_4(SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * value)
	{
		___safeWaitHandle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeWaitHandle_4), (void*)value);
	}

	inline static int32_t get_offset_of_hasThreadAffinity_5() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___hasThreadAffinity_5)); }
	inline bool get_hasThreadAffinity_5() const { return ___hasThreadAffinity_5; }
	inline bool* get_address_of_hasThreadAffinity_5() { return &___hasThreadAffinity_5; }
	inline void set_hasThreadAffinity_5(bool value)
	{
		___hasThreadAffinity_5 = value;
	}
};

struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_StaticFields
{
public:
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_10;

public:
	inline static int32_t get_offset_of_InvalidHandle_10() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_StaticFields, ___InvalidHandle_10)); }
	inline intptr_t get_InvalidHandle_10() const { return ___InvalidHandle_10; }
	inline intptr_t* get_address_of_InvalidHandle_10() { return &___InvalidHandle_10; }
	inline void set_InvalidHandle_10(intptr_t value)
	{
		___InvalidHandle_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshaled_pinvoke : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshaled_com : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};

// System.ApplicationException
struct  ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407  : public Exception_t
{
public:

public:
};


// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal_NativeOrStaticEventRegistrationImpl_EventRegistrationTokenListWithCount
struct  EventRegistrationTokenListWithCount_t8BA708F75B90C86A7CA1F3FD1DFCBD742D458FC6  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal_NativeOrStaticEventRegistrationImpl_TokenListCount System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal_NativeOrStaticEventRegistrationImpl_EventRegistrationTokenListWithCount::_tokenListCount
	TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC * ____tokenListCount_0;
	// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal_EventRegistrationTokenList System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal_NativeOrStaticEventRegistrationImpl_EventRegistrationTokenListWithCount::_tokenList
	EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128  ____tokenList_1;

public:
	inline static int32_t get_offset_of__tokenListCount_0() { return static_cast<int32_t>(offsetof(EventRegistrationTokenListWithCount_t8BA708F75B90C86A7CA1F3FD1DFCBD742D458FC6, ____tokenListCount_0)); }
	inline TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC * get__tokenListCount_0() const { return ____tokenListCount_0; }
	inline TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC ** get_address_of__tokenListCount_0() { return &____tokenListCount_0; }
	inline void set__tokenListCount_0(TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC * value)
	{
		____tokenListCount_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tokenListCount_0), (void*)value);
	}

	inline static int32_t get_offset_of__tokenList_1() { return static_cast<int32_t>(offsetof(EventRegistrationTokenListWithCount_t8BA708F75B90C86A7CA1F3FD1DFCBD742D458FC6, ____tokenList_1)); }
	inline EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128  get__tokenList_1() const { return ____tokenList_1; }
	inline EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128 * get_address_of__tokenList_1() { return &____tokenList_1; }
	inline void set__tokenList_1(EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128  value)
	{
		____tokenList_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____tokenList_1))->___restTokens_1), (void*)NULL);
	}
};


// System.Threading.EventWaitHandle
struct  EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C  : public WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842
{
public:

public:
};


// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal_NativeOrStaticEventRegistrationImpl_ReaderWriterLockTimedOutException
struct  ReaderWriterLockTimedOutException_t89B2958D458380B9E1BA492D772EE6DC685D0497  : public ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407
{
public:

public:
};


// System.Threading.AutoResetEvent
struct  AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D  : public EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C
{
public:

public:
};


// System.Threading.ManualResetEvent
struct  ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA  : public EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Boolean System.Collections.Generic.Dictionary`2<System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheEntry>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mE3BFE13C0E907582FA02AFC988208742F441A4F8_gshared (Dictionary_2_t0986F9D82B8D09D448B013D5071D700FA1CF22C8 * __this, EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639  ___key0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/TokenListCount::Inc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenListCount_Inc_m9360F7545D9ED25559DD8CF8D6096C2320F824B8 (TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList::.ctor(System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventRegistrationTokenList__ctor_m06470FB422418EBC781CFC09992EE7D2F4EF9772 (EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128 * __this, EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  ___token0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/TokenListCount::Dec()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenListCount_Dec_m3316C5B76EA893ADDEB8D5517B2B3627213B2EAD (TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC * __this, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList::Push(System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventRegistrationTokenList_Push_mA05262483205E888368D766263A039078C98D8E8 (EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128 * __this, EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  ___token0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/MyReaderWriterLock::EnterMyLock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyReaderWriterLock_EnterMyLock_mC51A3E52EC09D392DCAE0E1A4D1F46B2D97F69AD (MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/MyReaderWriterLock::LazyCreateEvent(System.Threading.EventWaitHandle&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyReaderWriterLock_LazyCreateEvent_m328FBB8853141441D96D58F4047B68C5ABB4CA65 (MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD * __this, EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C ** ___waitEvent0, bool ___makeAutoResetEvent1, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/MyReaderWriterLock::WaitOnEvent(System.Threading.EventWaitHandle,System.UInt32&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyReaderWriterLock_WaitOnEvent_m4FC854311E4289CF2B364BDC4D7321148DD02C84 (MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD * __this, EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * ___waitEvent0, uint32_t* ___numWaiters1, int32_t ___millisecondsTimeout2, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/MyReaderWriterLock::ExitMyLock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyReaderWriterLock_ExitMyLock_mD409AE151EA5AC4D1576DE3169AB90C5A8C68317 (MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/MyReaderWriterLock::ExitAndWakeUpAppropriateWaiters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyReaderWriterLock_ExitAndWakeUpAppropriateWaiters_mC475D42EA67351F7E655E3B7A6D05C5747313BE3 (MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD * __this, const RuntimeMethod* method);
// System.Void System.Threading.AutoResetEvent::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoResetEvent__ctor_m72D2A390415B58E10CA21E260881C88E50D9F35C (AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D * __this, bool ___initialState0, const RuntimeMethod* method);
// System.Void System.Threading.ManualResetEvent::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetEvent__ctor_mF80BD5B0955BDA8CD514F48EBFF48698E5D03850 (ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * __this, bool ___initialState0, const RuntimeMethod* method);
// System.Boolean System.Threading.EventWaitHandle::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventWaitHandle_Reset_m535429D7CC172C0B95EB8B7B9126B3F3761E2D30 (EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/ReaderWriterLockTimedOutException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderWriterLockTimedOutException__ctor_m82674256AA412F68F255EAF75EF13A7684B3CB48 (ReaderWriterLockTimedOutException_t89B2958D458380B9E1BA492D772EE6DC685D0497 * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.EventWaitHandle::Set()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventWaitHandle_Set_m81764C887F38A1153224557B26CD688B59987B38 (EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * __this, const RuntimeMethod* method);
// System.Int32 System.Threading.Interlocked::CompareExchange(System.Int32&,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_CompareExchange_m317AD9524376B7BE74DD9069346E345F2B131382 (int32_t* ___location10, int32_t ___value1, int32_t ___comparand2, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/MyReaderWriterLock::EnterMyLockSpin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyReaderWriterLock_EnterMyLockSpin_m5157FDCF62CE06480C3A0B1EA512698954D0059E (MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD * __this, const RuntimeMethod* method);
// System.Int32 System.Environment::get_ProcessorCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_ProcessorCount_m32354B9724A21AE041AC75C0E470687E33B93D33 (const RuntimeMethod* method);
// System.Void System.Threading.Thread::SpinWait(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_SpinWait_m6276C02E66DD83A83D5F39E2B20411B8CBA33673 (int32_t ___iterations0, const RuntimeMethod* method);
// System.Void System.Threading.Thread::Sleep(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Sleep_m8E61FC80BD38981CB18CA549909710790283DDCC (int32_t ___millisecondsTimeout0, const RuntimeMethod* method);
// System.Void System.ApplicationException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_m722F09DA49F9522A33650808D0B173351BEF82FD (ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 * __this, const RuntimeMethod* method);
// System.Int32 System.Threading.Interlocked::Increment(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Increment_mEF7FA106280D9E57DA8A97887389A961B65E47D8 (int32_t* ___location0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/MyReaderWriterLock::AcquireWriterLock(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyReaderWriterLock_AcquireWriterLock_mFE4A81BB90B00469143E80C143329CDEC962D8C6 (MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD * __this, int32_t ___millisecondsTimeout0, const RuntimeMethod* method);
// System.Int32 System.Threading.Interlocked::Decrement(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Decrement_mCECD68F2D8C95180BF77A1B90137BDE1F3A710FF (int32_t* ___location0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/TokenListCount::CleanupCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenListCount_CleanupCache_mEF77F97501522C1D53A496EA05E38F9B4CFED4AA (TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/MyReaderWriterLock::ReleaseWriterLock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyReaderWriterLock_ReleaseWriterLock_m919CAFF21CB0B2FE1E8DB9FA84E2B20C5782377C (MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheEntry>::Remove(TKey)
inline bool Dictionary_2_Remove_mE3BFE13C0E907582FA02AFC988208742F441A4F8 (Dictionary_2_t0986F9D82B8D09D448B013D5071D700FA1CF22C8 * __this, EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639  ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t0986F9D82B8D09D448B013D5071D700FA1CF22C8 *, EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639 , const RuntimeMethod*))Dictionary_2_Remove_mE3BFE13C0E907582FA02AFC988208742F441A4F8_gshared)(__this, ___key0, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal_NativeOrStaticEventRegistrationImpl_EventRegistrationTokenListWithCount::.ctor(System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal_NativeOrStaticEventRegistrationImpl_TokenListCount,System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventRegistrationTokenListWithCount__ctor_m09819A938F29C2DD7D8E2ACCC5249E6B7275E748 (EventRegistrationTokenListWithCount_t8BA708F75B90C86A7CA1F3FD1DFCBD742D458FC6 * __this, TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC * ___tokenListCount0, EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  ___token1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC * L_0 = ___tokenListCount0;
		__this->set__tokenListCount_0(L_0);
		TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC * L_1 = __this->get__tokenListCount_0();
		NullCheck(L_1);
		TokenListCount_Inc_m9360F7545D9ED25559DD8CF8D6096C2320F824B8(L_1, /*hidden argument*/NULL);
		EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  L_2 = ___token1;
		EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128  L_3;
		memset((&L_3), 0, sizeof(L_3));
		EventRegistrationTokenList__ctor_m06470FB422418EBC781CFC09992EE7D2F4EF9772((&L_3), L_2, /*hidden argument*/NULL);
		__this->set__tokenList_1(L_3);
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal_NativeOrStaticEventRegistrationImpl_EventRegistrationTokenListWithCount::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventRegistrationTokenListWithCount_Finalize_m359EB074365C03B54E7579947CC3AE0D122BCBD2 (EventRegistrationTokenListWithCount_t8BA708F75B90C86A7CA1F3FD1DFCBD742D458FC6 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC * L_0 = __this->get__tokenListCount_0();
		NullCheck(L_0);
		TokenListCount_Dec_m3316C5B76EA893ADDEB8D5517B2B3627213B2EAD(L_0, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x14, FINALLY_000d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000d;
	}

FINALLY_000d:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(13)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(13)
	{
		IL2CPP_JUMP_TBL(0x14, IL_0014)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0014:
	{
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal_NativeOrStaticEventRegistrationImpl_EventRegistrationTokenListWithCount::Push(System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventRegistrationTokenListWithCount_Push_m966CF9B4B55E54DADA94B9B325053F115B9421F5 (EventRegistrationTokenListWithCount_t8BA708F75B90C86A7CA1F3FD1DFCBD742D458FC6 * __this, EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  ___token0, const RuntimeMethod* method)
{
	{
		EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128 * L_0 = __this->get_address_of__tokenList_1();
		EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  L_1 = ___token0;
		EventRegistrationTokenList_Push_mA05262483205E888368D766263A039078C98D8E8((EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128 *)L_0, L_1, /*hidden argument*/NULL);
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
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal_NativeOrStaticEventRegistrationImpl_MyReaderWriterLock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyReaderWriterLock__ctor_m616FE6AB300A5E702B39CBCDAD942EA9930F9A87 (MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal_NativeOrStaticEventRegistrationImpl_MyReaderWriterLock::AcquireReaderLock(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyReaderWriterLock_AcquireReaderLock_m4C64A27901CB970D8F6FA8A4AE98B8980C8138AD (MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD * __this, int32_t ___millisecondsTimeout0, const RuntimeMethod* method)
{
	{
		MyReaderWriterLock_EnterMyLock_mC51A3E52EC09D392DCAE0E1A4D1F46B2D97F69AD(__this, /*hidden argument*/NULL);
	}

IL_0006:
	{
		int32_t L_0 = __this->get_owners_1();
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		uint32_t L_1 = __this->get_numWriteWaiters_2();
		if (L_1)
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_2 = __this->get_owners_1();
		__this->set_owners_1(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
		goto IL_0053;
	}

IL_0027:
	{
		EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * L_3 = __this->get_readEvent_5();
		if (L_3)
		{
			goto IL_003e;
		}
	}
	{
		EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C ** L_4 = __this->get_address_of_readEvent_5();
		MyReaderWriterLock_LazyCreateEvent_m328FBB8853141441D96D58F4047B68C5ABB4CA65(__this, (EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C **)L_4, (bool)0, /*hidden argument*/NULL);
		goto IL_0006;
	}

IL_003e:
	{
		EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * L_5 = __this->get_readEvent_5();
		uint32_t* L_6 = __this->get_address_of_numReadWaiters_3();
		int32_t L_7 = ___millisecondsTimeout0;
		MyReaderWriterLock_WaitOnEvent_m4FC854311E4289CF2B364BDC4D7321148DD02C84(__this, L_5, (uint32_t*)L_6, L_7, /*hidden argument*/NULL);
		goto IL_0006;
	}

IL_0053:
	{
		MyReaderWriterLock_ExitMyLock_mD409AE151EA5AC4D1576DE3169AB90C5A8C68317(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal_NativeOrStaticEventRegistrationImpl_MyReaderWriterLock::AcquireWriterLock(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyReaderWriterLock_AcquireWriterLock_mFE4A81BB90B00469143E80C143329CDEC962D8C6 (MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD * __this, int32_t ___millisecondsTimeout0, const RuntimeMethod* method)
{
	{
		MyReaderWriterLock_EnterMyLock_mC51A3E52EC09D392DCAE0E1A4D1F46B2D97F69AD(__this, /*hidden argument*/NULL);
	}

IL_0006:
	{
		int32_t L_0 = __this->get_owners_1();
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		__this->set_owners_1((-1));
		goto IL_0043;
	}

IL_0017:
	{
		EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * L_1 = __this->get_writeEvent_4();
		if (L_1)
		{
			goto IL_002e;
		}
	}
	{
		EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C ** L_2 = __this->get_address_of_writeEvent_4();
		MyReaderWriterLock_LazyCreateEvent_m328FBB8853141441D96D58F4047B68C5ABB4CA65(__this, (EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C **)L_2, (bool)1, /*hidden argument*/NULL);
		goto IL_0006;
	}

IL_002e:
	{
		EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * L_3 = __this->get_writeEvent_4();
		uint32_t* L_4 = __this->get_address_of_numWriteWaiters_2();
		int32_t L_5 = ___millisecondsTimeout0;
		MyReaderWriterLock_WaitOnEvent_m4FC854311E4289CF2B364BDC4D7321148DD02C84(__this, L_3, (uint32_t*)L_4, L_5, /*hidden argument*/NULL);
		goto IL_0006;
	}

IL_0043:
	{
		MyReaderWriterLock_ExitMyLock_mD409AE151EA5AC4D1576DE3169AB90C5A8C68317(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal_NativeOrStaticEventRegistrationImpl_MyReaderWriterLock::ReleaseReaderLock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyReaderWriterLock_ReleaseReaderLock_m9957FB580A0C803C269D10DB3C7B9482FF46A94D (MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD * __this, const RuntimeMethod* method)
{
	{
		MyReaderWriterLock_EnterMyLock_mC51A3E52EC09D392DCAE0E1A4D1F46B2D97F69AD(__this, /*hidden argument*/NULL);
		int32_t L_0 = __this->get_owners_1();
		__this->set_owners_1(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)));
		MyReaderWriterLock_ExitAndWakeUpAppropriateWaiters_mC475D42EA67351F7E655E3B7A6D05C5747313BE3(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal_NativeOrStaticEventRegistrationImpl_MyReaderWriterLock::ReleaseWriterLock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyReaderWriterLock_ReleaseWriterLock_m919CAFF21CB0B2FE1E8DB9FA84E2B20C5782377C (MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD * __this, const RuntimeMethod* method)
{
	{
		MyReaderWriterLock_EnterMyLock_mC51A3E52EC09D392DCAE0E1A4D1F46B2D97F69AD(__this, /*hidden argument*/NULL);
		int32_t L_0 = __this->get_owners_1();
		__this->set_owners_1(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		MyReaderWriterLock_ExitAndWakeUpAppropriateWaiters_mC475D42EA67351F7E655E3B7A6D05C5747313BE3(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal_NativeOrStaticEventRegistrationImpl_MyReaderWriterLock::LazyCreateEvent(System.Threading.EventWaitHandle&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyReaderWriterLock_LazyCreateEvent_m328FBB8853141441D96D58F4047B68C5ABB4CA65 (MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD * __this, EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C ** ___waitEvent0, bool ___makeAutoResetEvent1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MyReaderWriterLock_LazyCreateEvent_m328FBB8853141441D96D58F4047B68C5ABB4CA65_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * V_0 = NULL;
	{
		MyReaderWriterLock_ExitMyLock_mD409AE151EA5AC4D1576DE3169AB90C5A8C68317(__this, /*hidden argument*/NULL);
		bool L_0 = ___makeAutoResetEvent1;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D * L_1 = (AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D *)il2cpp_codegen_object_new(AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D_il2cpp_TypeInfo_var);
		AutoResetEvent__ctor_m72D2A390415B58E10CA21E260881C88E50D9F35C(L_1, (bool)0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0019;
	}

IL_0012:
	{
		ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_2 = (ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA *)il2cpp_codegen_object_new(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_il2cpp_TypeInfo_var);
		ManualResetEvent__ctor_mF80BD5B0955BDA8CD514F48EBFF48698E5D03850(L_2, (bool)0, /*hidden argument*/NULL);
		V_0 = L_2;
	}

IL_0019:
	{
		MyReaderWriterLock_EnterMyLock_mC51A3E52EC09D392DCAE0E1A4D1F46B2D97F69AD(__this, /*hidden argument*/NULL);
		EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C ** L_3 = ___waitEvent0;
		EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * L_4 = *((EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C **)L_3);
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C ** L_5 = ___waitEvent0;
		EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * L_6 = V_0;
		*((RuntimeObject **)L_5) = (RuntimeObject *)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_5, (void*)(RuntimeObject *)L_6);
	}

IL_0026:
	{
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal_NativeOrStaticEventRegistrationImpl_MyReaderWriterLock::WaitOnEvent(System.Threading.EventWaitHandle,System.UInt32&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyReaderWriterLock_WaitOnEvent_m4FC854311E4289CF2B364BDC4D7321148DD02C84 (MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD * __this, EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * ___waitEvent0, uint32_t* ___numWaiters1, int32_t ___millisecondsTimeout2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MyReaderWriterLock_WaitOnEvent_m4FC854311E4289CF2B364BDC4D7321148DD02C84_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * L_0 = ___waitEvent0;
		NullCheck(L_0);
		EventWaitHandle_Reset_m535429D7CC172C0B95EB8B7B9126B3F3761E2D30(L_0, /*hidden argument*/NULL);
		uint32_t* L_1 = ___numWaiters1;
		uint32_t* L_2 = ___numWaiters1;
		int32_t L_3 = *((uint32_t*)L_2);
		*((int32_t*)L_1) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
		V_0 = (bool)0;
		MyReaderWriterLock_ExitMyLock_mD409AE151EA5AC4D1576DE3169AB90C5A8C68317(__this, /*hidden argument*/NULL);
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		{
			EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * L_4 = ___waitEvent0;
			int32_t L_5 = ___millisecondsTimeout2;
			NullCheck(L_4);
			bool L_6 = VirtFuncInvoker2< bool, int32_t, bool >::Invoke(8 /* System.Boolean System.Threading.WaitHandle::WaitOne(System.Int32,System.Boolean) */, L_4, L_5, (bool)0);
			if (L_6)
			{
				goto IL_0025;
			}
		}

IL_001f:
		{
			ReaderWriterLockTimedOutException_t89B2958D458380B9E1BA492D772EE6DC685D0497 * L_7 = (ReaderWriterLockTimedOutException_t89B2958D458380B9E1BA492D772EE6DC685D0497 *)il2cpp_codegen_object_new(ReaderWriterLockTimedOutException_t89B2958D458380B9E1BA492D772EE6DC685D0497_il2cpp_TypeInfo_var);
			ReaderWriterLockTimedOutException__ctor_m82674256AA412F68F255EAF75EF13A7684B3CB48(L_7, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, MyReaderWriterLock_WaitOnEvent_m4FC854311E4289CF2B364BDC4D7321148DD02C84_RuntimeMethod_var);
		}

IL_0025:
		{
			V_0 = (bool)1;
			IL2CPP_LEAVE(0x3F, FINALLY_0029);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0029;
	}

FINALLY_0029:
	{ // begin finally (depth: 1)
		{
			MyReaderWriterLock_EnterMyLock_mC51A3E52EC09D392DCAE0E1A4D1F46B2D97F69AD(__this, /*hidden argument*/NULL);
			uint32_t* L_8 = ___numWaiters1;
			uint32_t* L_9 = ___numWaiters1;
			int32_t L_10 = *((uint32_t*)L_9);
			*((int32_t*)L_8) = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
			bool L_11 = V_0;
			if (L_11)
			{
				goto IL_003e;
			}
		}

IL_0038:
		{
			MyReaderWriterLock_ExitMyLock_mD409AE151EA5AC4D1576DE3169AB90C5A8C68317(__this, /*hidden argument*/NULL);
		}

IL_003e:
		{
			IL2CPP_END_FINALLY(41)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(41)
	{
		IL2CPP_JUMP_TBL(0x3F, IL_003f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003f:
	{
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal_NativeOrStaticEventRegistrationImpl_MyReaderWriterLock::ExitAndWakeUpAppropriateWaiters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyReaderWriterLock_ExitAndWakeUpAppropriateWaiters_mC475D42EA67351F7E655E3B7A6D05C5747313BE3 (MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_owners_1();
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		uint32_t L_1 = __this->get_numWriteWaiters_2();
		if ((!(((uint32_t)L_1) > ((uint32_t)0))))
		{
			goto IL_0024;
		}
	}
	{
		MyReaderWriterLock_ExitMyLock_mD409AE151EA5AC4D1576DE3169AB90C5A8C68317(__this, /*hidden argument*/NULL);
		EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * L_2 = __this->get_writeEvent_4();
		NullCheck(L_2);
		EventWaitHandle_Set_m81764C887F38A1153224557B26CD688B59987B38(L_2, /*hidden argument*/NULL);
		return;
	}

IL_0024:
	{
		int32_t L_3 = __this->get_owners_1();
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_4 = __this->get_numReadWaiters_3();
		if (!L_4)
		{
			goto IL_0048;
		}
	}
	{
		MyReaderWriterLock_ExitMyLock_mD409AE151EA5AC4D1576DE3169AB90C5A8C68317(__this, /*hidden argument*/NULL);
		EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * L_5 = __this->get_readEvent_5();
		NullCheck(L_5);
		EventWaitHandle_Set_m81764C887F38A1153224557B26CD688B59987B38(L_5, /*hidden argument*/NULL);
		return;
	}

IL_0048:
	{
		MyReaderWriterLock_ExitMyLock_mD409AE151EA5AC4D1576DE3169AB90C5A8C68317(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal_NativeOrStaticEventRegistrationImpl_MyReaderWriterLock::EnterMyLock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyReaderWriterLock_EnterMyLock_mC51A3E52EC09D392DCAE0E1A4D1F46B2D97F69AD (MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD * __this, const RuntimeMethod* method)
{
	{
		int32_t* L_0 = __this->get_address_of_myLock_0();
		int32_t L_1 = Interlocked_CompareExchange_m317AD9524376B7BE74DD9069346E345F2B131382((int32_t*)L_0, 1, 0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		MyReaderWriterLock_EnterMyLockSpin_m5157FDCF62CE06480C3A0B1EA512698954D0059E(__this, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal_NativeOrStaticEventRegistrationImpl_MyReaderWriterLock::EnterMyLockSpin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyReaderWriterLock_EnterMyLockSpin_m5157FDCF62CE06480C3A0B1EA512698954D0059E (MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
	}

IL_0002:
	{
		int32_t L_0 = V_0;
		if ((((int32_t)L_0) >= ((int32_t)3)))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_1 = Environment_get_ProcessorCount_m32354B9724A21AE041AC75C0E470687E33B93D33(/*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0017;
		}
	}
	{
		Thread_SpinWait_m6276C02E66DD83A83D5F39E2B20411B8CBA33673(((int32_t)20), /*hidden argument*/NULL);
		goto IL_001d;
	}

IL_0017:
	{
		Thread_Sleep_m8E61FC80BD38981CB18CA549909710790283DDCC(0, /*hidden argument*/NULL);
	}

IL_001d:
	{
		int32_t* L_2 = __this->get_address_of_myLock_0();
		int32_t L_3 = Interlocked_CompareExchange_m317AD9524376B7BE74DD9069346E345F2B131382((int32_t*)L_2, 1, 0, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_002d;
		}
	}
	{
		return;
	}

IL_002d:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
		goto IL_0002;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal_NativeOrStaticEventRegistrationImpl_MyReaderWriterLock::ExitMyLock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyReaderWriterLock_ExitMyLock_mD409AE151EA5AC4D1576DE3169AB90C5A8C68317 (MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD * __this, const RuntimeMethod* method)
{
	{
		__this->set_myLock_0(0);
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
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal_NativeOrStaticEventRegistrationImpl_ReaderWriterLockTimedOutException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderWriterLockTimedOutException__ctor_m82674256AA412F68F255EAF75EF13A7684B3CB48 (ReaderWriterLockTimedOutException_t89B2958D458380B9E1BA492D772EE6DC685D0497 * __this, const RuntimeMethod* method)
{
	{
		ApplicationException__ctor_m722F09DA49F9522A33650808D0B173351BEF82FD(__this, /*hidden argument*/NULL);
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
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal_NativeOrStaticEventRegistrationImpl_TokenListCount::.ctor(System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal_NativeOrStaticEventRegistrationImpl_EventCacheKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenListCount__ctor_m9E1063961516A2BB5595CA94A909CF9768000652 (TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC * __this, EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639  ___key0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639  L_0 = ___key0;
		__this->set__key_1(L_0);
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal_NativeOrStaticEventRegistrationImpl_TokenListCount::Inc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenListCount_Inc_m9360F7545D9ED25559DD8CF8D6096C2320F824B8 (TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC * __this, const RuntimeMethod* method)
{
	{
		int32_t* L_0 = __this->get_address_of__count_0();
		Interlocked_Increment_mEF7FA106280D9E57DA8A97887389A961B65E47D8((int32_t*)L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal_NativeOrStaticEventRegistrationImpl_TokenListCount::Dec()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenListCount_Dec_m3316C5B76EA893ADDEB8D5517B2B3627213B2EAD (TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TokenListCount_Dec_m3316C5B76EA893ADDEB8D5517B2B3627213B2EAD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4_il2cpp_TypeInfo_var);
		MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD * L_0 = ((NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4_StaticFields*)il2cpp_codegen_static_fields_for(NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4_il2cpp_TypeInfo_var))->get_s_eventCacheRWLock_1();
		il2cpp_codegen_memory_barrier();
		NullCheck(L_0);
		MyReaderWriterLock_AcquireWriterLock_mFE4A81BB90B00469143E80C143329CDEC962D8C6(L_0, (-1), /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			int32_t* L_1 = __this->get_address_of__count_0();
			int32_t L_2 = Interlocked_Decrement_mCECD68F2D8C95180BF77A1B90137BDE1F3A710FF((int32_t*)L_1, /*hidden argument*/NULL);
			if (L_2)
			{
				goto IL_0020;
			}
		}

IL_001a:
		{
			TokenListCount_CleanupCache_mEF77F97501522C1D53A496EA05E38F9B4CFED4AA(__this, /*hidden argument*/NULL);
		}

IL_0020:
		{
			IL2CPP_LEAVE(0x2F, FINALLY_0022);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0022;
	}

FINALLY_0022:
	{ // begin finally (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4_il2cpp_TypeInfo_var);
		MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD * L_3 = ((NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4_StaticFields*)il2cpp_codegen_static_fields_for(NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4_il2cpp_TypeInfo_var))->get_s_eventCacheRWLock_1();
		il2cpp_codegen_memory_barrier();
		NullCheck(L_3);
		MyReaderWriterLock_ReleaseWriterLock_m919CAFF21CB0B2FE1E8DB9FA84E2B20C5782377C(L_3, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(34)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(34)
	{
		IL2CPP_JUMP_TBL(0x2F, IL_002f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_002f:
	{
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal_NativeOrStaticEventRegistrationImpl_TokenListCount::CleanupCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenListCount_CleanupCache_mEF77F97501522C1D53A496EA05E38F9B4CFED4AA (TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TokenListCount_CleanupCache_mEF77F97501522C1D53A496EA05E38F9B4CFED4AA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4_il2cpp_TypeInfo_var);
		Dictionary_2_t0986F9D82B8D09D448B013D5071D700FA1CF22C8 * L_0 = ((NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4_StaticFields*)il2cpp_codegen_static_fields_for(NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4_il2cpp_TypeInfo_var))->get_s_eventRegistrations_0();
		il2cpp_codegen_memory_barrier();
		EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639  L_1 = __this->get__key_1();
		NullCheck(L_0);
		Dictionary_2_Remove_mE3BFE13C0E907582FA02AFC988208742F441A4F8(L_0, L_1, /*hidden argument*/Dictionary_2_Remove_mE3BFE13C0E907582FA02AFC988208742F441A4F8_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
