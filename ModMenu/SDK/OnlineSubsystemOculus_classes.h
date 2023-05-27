#pragma once

/**
 * Name: SportsScramble
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class OnlineSubsystemOculus.OculusCreateSessionCallbackProxy
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class UOculusCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HHVZ[0x48];                                  // 0x0048(0x0048) MISSED OFFSET (PADDING)

	public:
		class UOculusCreateSessionCallbackProxy* STATIC_CreateSession(int32_t PublicConnections, const class FString& OculusMatchmakingPool);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemOculus.OculusEntitlementCallbackProxy
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UOculusEntitlementCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UOculusEntitlementCallbackProxy* STATIC_VerifyEntitlement();
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemOculus.OculusFindSessionsCallbackProxy
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class UOculusFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K9GJ[0x48];                                  // 0x0048(0x0048) MISSED OFFSET (PADDING)

	public:
		class UOculusFindSessionsCallbackProxy* STATIC_FindModeratedSessions(int32_t MaxResults);
		class UOculusFindSessionsCallbackProxy* STATIC_FindMatchmakingSessions(int32_t MaxResults, const class FString& OculusMatchmakingPool);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemOculus.OculusIdentityCallbackProxy
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UOculusIdentityCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W4CV[0x10];                                  // 0x0048(0x0010) MISSED OFFSET (PADDING)

	public:
		class UOculusIdentityCallbackProxy* STATIC_GetOculusIdentity(int32_t LocalUserNum);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemOculus.OculusNetConnection
	 * Size -> 0x0010 (FullSize[0x1988] - InheritedSize[0x1978])
	 */
	class UOculusNetConnection : public UIpConnection
	{
	public:
		unsigned char                                              UnknownData_BFXD[0x10];                                  // 0x1978(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemOculus.OculusNetDriver
	 * Size -> 0x00B8 (FullSize[0x0790] - InheritedSize[0x06D8])
	 */
	class UOculusNetDriver : public UIpNetDriver
	{
	public:
		unsigned char                                              UnknownData_3T5A[0xB8];                                  // 0x06D8(0x00B8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemOculus.OculusUpdateSessionCallbackProxy
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UOculusUpdateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4RFC[0x20];                                  // 0x0048(0x0020) MISSED OFFSET (PADDING)

	public:
		class UOculusUpdateSessionCallbackProxy* STATIC_SetSessionEnqueue(bool bShouldEnqueueInMatchmakingPool);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
