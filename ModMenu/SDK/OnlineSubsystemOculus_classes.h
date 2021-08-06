#pragma once

// Name: Sport Scramble, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class OnlineSubsystemOculus.OculusCreateSessionCallbackProxy
// 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
class UOculusCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RWWV[0x48];                                    // 0x0048(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemOculus.OculusCreateSessionCallbackProxy");
		return ptr;
	}



	class UOculusCreateSessionCallbackProxy* STATIC_CreateSession(int PublicConnections, const struct FString& OculusMatchmakingPool);
};

// Class OnlineSubsystemOculus.OculusEntitlementCallbackProxy
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UOculusEntitlementCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemOculus.OculusEntitlementCallbackProxy");
		return ptr;
	}



	class UOculusEntitlementCallbackProxy* STATIC_VerifyEntitlement();
};

// Class OnlineSubsystemOculus.OculusFindSessionsCallbackProxy
// 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
class UOculusFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_327D[0x48];                                    // 0x0048(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemOculus.OculusFindSessionsCallbackProxy");
		return ptr;
	}



	class UOculusFindSessionsCallbackProxy* STATIC_FindModeratedSessions(int MaxResults);
	class UOculusFindSessionsCallbackProxy* STATIC_FindMatchmakingSessions(int MaxResults, const struct FString& OculusMatchmakingPool);
};

// Class OnlineSubsystemOculus.OculusIdentityCallbackProxy
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
class UOculusIdentityCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7VOX[0x10];                                    // 0x0048(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemOculus.OculusIdentityCallbackProxy");
		return ptr;
	}



	class UOculusIdentityCallbackProxy* STATIC_GetOculusIdentity(int LocalUserNum);
};

// Class OnlineSubsystemOculus.OculusNetConnection
// 0x0010 (FullSize[0x1988] - InheritedSize[0x1978])
class UOculusNetConnection : public UIpConnection
{
public:
	unsigned char                                      UnknownData_RRIX[0x10];                                    // 0x1978(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemOculus.OculusNetConnection");
		return ptr;
	}



};

// Class OnlineSubsystemOculus.OculusNetDriver
// 0x00B8 (FullSize[0x0790] - InheritedSize[0x06D8])
class UOculusNetDriver : public UIpNetDriver
{
public:
	unsigned char                                      UnknownData_GWMS[0xB8];                                    // 0x06D8(0x00B8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemOculus.OculusNetDriver");
		return ptr;
	}



};

// Class OnlineSubsystemOculus.OculusUpdateSessionCallbackProxy
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
class UOculusUpdateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9O10[0x20];                                    // 0x0048(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemOculus.OculusUpdateSessionCallbackProxy");
		return ptr;
	}



	class UOculusUpdateSessionCallbackProxy* STATIC_SetSessionEnqueue(bool bShouldEnqueueInMatchmakingPool);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
