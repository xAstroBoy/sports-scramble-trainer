// Name: Sport Scramble, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function OnlineSubsystemOculus.OculusCreateSessionCallbackProxy.CreateSession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            PublicConnections              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 OculusMatchmakingPool          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOculusCreateSessionCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UOculusCreateSessionCallbackProxy* UOculusCreateSessionCallbackProxy::STATIC_CreateSession(int PublicConnections, const struct FString& OculusMatchmakingPool)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemOculus.OculusCreateSessionCallbackProxy.CreateSession");

	UOculusCreateSessionCallbackProxy_CreateSession_Params params;
	params.PublicConnections = PublicConnections;
	params.OculusMatchmakingPool = OculusMatchmakingPool;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemOculus.OculusEntitlementCallbackProxy.VerifyEntitlement
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOculusEntitlementCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UOculusEntitlementCallbackProxy* UOculusEntitlementCallbackProxy::STATIC_VerifyEntitlement()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemOculus.OculusEntitlementCallbackProxy.VerifyEntitlement");

	UOculusEntitlementCallbackProxy_VerifyEntitlement_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemOculus.OculusFindSessionsCallbackProxy.FindModeratedSessions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            MaxResults                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOculusFindSessionsCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UOculusFindSessionsCallbackProxy* UOculusFindSessionsCallbackProxy::STATIC_FindModeratedSessions(int MaxResults)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemOculus.OculusFindSessionsCallbackProxy.FindModeratedSessions");

	UOculusFindSessionsCallbackProxy_FindModeratedSessions_Params params;
	params.MaxResults = MaxResults;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemOculus.OculusFindSessionsCallbackProxy.FindMatchmakingSessions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            MaxResults                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 OculusMatchmakingPool          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOculusFindSessionsCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UOculusFindSessionsCallbackProxy* UOculusFindSessionsCallbackProxy::STATIC_FindMatchmakingSessions(int MaxResults, const struct FString& OculusMatchmakingPool)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemOculus.OculusFindSessionsCallbackProxy.FindMatchmakingSessions");

	UOculusFindSessionsCallbackProxy_FindMatchmakingSessions_Params params;
	params.MaxResults = MaxResults;
	params.OculusMatchmakingPool = OculusMatchmakingPool;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemOculus.OculusIdentityCallbackProxy.GetOculusIdentity
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            LocalUserNum                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOculusIdentityCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UOculusIdentityCallbackProxy* UOculusIdentityCallbackProxy::STATIC_GetOculusIdentity(int LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemOculus.OculusIdentityCallbackProxy.GetOculusIdentity");

	UOculusIdentityCallbackProxy_GetOculusIdentity_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemOculus.OculusUpdateSessionCallbackProxy.SetSessionEnqueue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bShouldEnqueueInMatchmakingPool (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOculusUpdateSessionCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UOculusUpdateSessionCallbackProxy* UOculusUpdateSessionCallbackProxy::STATIC_SetSessionEnqueue(bool bShouldEnqueueInMatchmakingPool)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemOculus.OculusUpdateSessionCallbackProxy.SetSessionEnqueue");

	UOculusUpdateSessionCallbackProxy_SetSessionEnqueue_Params params;
	params.bShouldEnqueueInMatchmakingPool = bShouldEnqueueInMatchmakingPool;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
